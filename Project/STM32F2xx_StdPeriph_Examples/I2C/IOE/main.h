/**
  ******************************************************************************
  * @file    I2C/IOE/main.c 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    13-April-2012
  * @brief   Header for main.c module
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
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm322xg_eval.h"
#include "stm322xg_eval_lcd.h"
#include "stm322xg_eval_ioe.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

//#define BUTTON_POLLING_MODE   
#define BUTTON_INTERRUPT_MODE    

//#define IOE_POLLING_MODE
#define IOE_INTERRUPT_MODE

#ifdef BUTTON_POLLING_MODE
  #define BUTTON_MODE  BUTTON_MODE_GPIO
#else
  #define BUTTON_MODE  BUTTON_MODE_EXTI
#endif 	/* BUTTON_POLLING_MODE */

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void TimingDelay_Decrement(void);
void Delay(__IO uint32_t nTime);

#endif /* __MAIN_H */

