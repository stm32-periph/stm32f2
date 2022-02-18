/**
  ******************************************************************************
  * @file    TIM/DMABurst/main.c 
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-April-2011
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"

/** @addtogroup STM32F2xx_StdPeriph_Examples
  * @{
  */

/** @addtogroup TIM_DMABurst
  * @{
  */ 

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define TIM1_DMAR_ADDRESS ((uint32_t)0x4001004C) /* TIM DMAR address */

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
GPIO_InitTypeDef         GPIO_InitStructure;
DMA_InitTypeDef          DMA_InitStructure;
TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
TIM_OCInitTypeDef        TIM_OCInitStructure;
uint16_t SRC_Buffer[6] = {0x0FFF, 0x0000, 0x0555};

/* Private function prototypes -----------------------------------------------*/
void TIM_Config(void);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  /*!< At this stage the microcontroller clock setting is already configured, 
       this is done through SystemInit() function which is called from startup
       file (startup_stm32f2xx.s) before to branch to application main.
       To reconfigure the default setting of SystemInit() function, refer to
       system_stm32f2xx.c file
     */     

  /* TIM1 Configuration */
  TIM_Config();       
  
  /* Time base configuration */
  /* -----------------------------------------------------------------------
    TIM1 Configuration: generate 1 PWM signal using the DMA burst mode:
    The TIM1CLK frequency is set to SystemCoreClock (Hz), to get TIM1 counter
    clock at 24 MHz the Prescaler is computed as following:
     - Prescaler = (TIM1CLK / TIM1 counter clock) - 1
    SystemCoreClock is set to 120 MHz 

    The TIM1 period is 5.8 KHz: TIM1 Frequency = TIM1 counter clock/(ARR + 1)
                                               = 24 MHz / 4096 = 5.8KHz KHz
    TIM1 Channel1 duty cycle = (TIM1_CCR1/ TIM1_ARR)* 100 = 33.33%
  ----------------------------------------------------------------------- */  
  TIM_TimeBaseStructure.TIM_Period = 0xFFFF;          
  TIM_TimeBaseStructure.TIM_Prescaler = (uint16_t) (SystemCoreClock / 24000000) - 1;       
  TIM_TimeBaseStructure.TIM_ClockDivision = 0x0;    
  TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;   
  TIM_TimeBaseInit(TIM1, &TIM_TimeBaseStructure);

  /* TIM Configuration in PWM Mode */
  TIM_OCInitStructure.TIM_OCMode =  TIM_OCMode_PWM1;    
  TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;          
  TIM_OCInitStructure.TIM_Pulse = 0xFFF;  
  TIM_OC1Init(TIM1, &TIM_OCInitStructure); 

  /* TIM1 DMAR Base register and DMA Burst Length Config */
  TIM_DMAConfig(TIM1, TIM_DMABase_ARR, TIM_DMABurstLength_3Transfers);

  /* TIM1 DMA Update enable */
  TIM_DMACmd(TIM1, TIM_DMA_Update, ENABLE);

  /* TIM1 enable */
  TIM_Cmd(TIM1, ENABLE);
  
  /* TIM1 PWM Outputs Enable */
  TIM_CtrlPWMOutputs(TIM1, ENABLE);

  /* Enable DMA2 Stream5  */
  DMA_Cmd(DMA2_Stream5, ENABLE);

  /* Wait until DMA2 Stream5 end of Transfer */
  while (!DMA_GetFlagStatus(DMA2_Stream5, DMA_FLAG_TCIF5))
  {
  }

  /* Infinite loop */ 
  while(1)
  {
  }
}

/**
  * @brief  Configure the TIM1 Pins.
  * @param  None
  * @retval None
  */
void TIM_Config(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

  /* TIM1 clock enable */
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);

  /* GPIOA clock enable */
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);

  /* DMA2 clock enable */
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_DMA2, ENABLE);
  
  /* GPIOA Configuration: PA8(TIM1 CH1) as alternate function push-pull ------*/
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
  GPIO_Init(GPIOA, &GPIO_InitStructure);

  /* Connect TIM pins to AF1 */
  GPIO_PinAFConfig(GPIOA, GPIO_PinSource8, GPIO_AF_TIM1);
  
  /* DeInitialize the DMA2 Stream5 */
  DMA_DeInit(DMA2_Stream5);

  DMA_InitStructure.DMA_Channel = DMA_Channel_6;
  DMA_InitStructure.DMA_PeripheralBaseAddr = (uint32_t)TIM1_DMAR_ADDRESS;
  DMA_InitStructure.DMA_Memory0BaseAddr = (uint32_t)SRC_Buffer;
  DMA_InitStructure.DMA_DIR = DMA_DIR_MemoryToPeripheral;  
  DMA_InitStructure.DMA_BufferSize = 3;
  DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;
  DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable;
  DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;
  DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;
  DMA_InitStructure.DMA_Mode = DMA_Mode_Normal;
  DMA_InitStructure.DMA_Priority = DMA_Priority_VeryHigh;
  DMA_InitStructure.DMA_FIFOMode = DMA_FIFOMode_Enable;
  DMA_InitStructure.DMA_FIFOThreshold = DMA_FIFOThreshold_Full;
  DMA_InitStructure.DMA_MemoryBurst = DMA_MemoryBurst_Single;
  DMA_InitStructure.DMA_PeripheralBurst = DMA_PeripheralBurst_Single;
  DMA_Init(DMA2_Stream5, &DMA_InitStructure);
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  while (1)
  {}
}
#endif

/**
  * @}
  */ 

/**
  * @}
  */ 

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/