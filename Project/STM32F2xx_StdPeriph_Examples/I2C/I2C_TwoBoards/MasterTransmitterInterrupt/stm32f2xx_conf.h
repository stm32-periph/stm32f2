/**
  ******************************************************************************
  * @file    I2C/I2C_TwoBoards/MasterReceiverInterrupt/stm32f2xx_conf.h  
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    13-April-2012
  * @brief   Library configuration file.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2012 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F2xx_CONF_H
#define __STM32F2xx_CONF_H

/* Includes ------------------------------------------------------------------*/
/* Uncomment the line below to enable peripheral header file inclusion */
#include "stm32f2xx_adc.h"
#include "stm32f2xx_can.h"
#include "stm32f2xx_crc.h"
#include "stm32f2xx_cryp.h"
#include "stm32f2xx_dac.h"
#include "stm32f2xx_dbgmcu.h"
#include "stm32f2xx_dcmi.h"
#include "stm32f2xx_dma.h"
#include "stm32f2xx_exti.h"
#include "stm32f2xx_flash.h"
#include "stm32f2xx_fsmc.h"
#include "stm32f2xx_hash.h"
#include "stm32f2xx_gpio.h"
#include "stm32f2xx_i2c.h"
#include "stm32f2xx_iwdg.h"
#include "stm32f2xx_pwr.h"
#include "stm32f2xx_rcc.h"
#include "stm32f2xx_rng.h"
#include "stm32f2xx_rtc.h"
#include "stm32f2xx_sdio.h"
#include "stm32f2xx_spi.h"
#include "stm32f2xx_syscfg.h"
#include "stm32f2xx_tim.h"
#include "stm32f2xx_usart.h"
#include "stm32f2xx_wwdg.h"
#include "misc.h" /* High level functions for NVIC and SysTick (add-on to CMSIS functions) */

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/* If an external clock source is used, then the value of the following define 
   should be set to the value of the external clock source, else, if no external 
   clock is used, keep this define commented */
/*#define I2S_EXTERNAL_CLOCK_VAL   12288000 */ /* Value of the external clock in Hz */


/* Uncomment the line below to expanse the "assert_param" macro in the 
   Standard Peripheral Library drivers code */
/* #define USE_FULL_ASSERT    1 */

/* Exported macro ------------------------------------------------------------*/
#ifdef  USE_FULL_ASSERT

/**
  * @brief  The assert_param macro is used for function's parameters check.
  * @param  expr: If expr is false, it calls assert_failed function
  *   which reports the name of the source file and the source
  *   line number of the call that failed. 
  *   If expr is true, it returns no value.
  * @retval None
  */
  #define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
  void assert_failed(uint8_t* file, uint32_t line);
#else
  #define assert_param(expr) ((void)0)
#endif /* USE_FULL_ASSERT */

#endif /* __STM32F2xx_CONF_H */

