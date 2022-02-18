/**
  ******************************************************************************
  * @file    USART/Smartcard/stm32f2xx_it.h 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    13-April-2012
  * @brief   This file contains the headers of the interrupt handlers.
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
#ifndef __STM32F2xx_IT_H
#define __STM32F2xx_IT_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void SC_USART_IRQHandler(void);
void SC_OFF_EXTI_IRQHandler(void);

#endif /* __STM32F2xx_IT_H */

