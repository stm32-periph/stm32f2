/**
  ******************************************************************************
  * @file    RTC/BKP_Domain/main.h 
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
#include "stm32f2xx.h"
#include "stm322xg_eval.h"
#include "lcd_log.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void RTC_Config(void);
uint8_t ReadDigit(uint16_t LineBegin, uint16_t ColBegin, uint8_t CountBegin, uint8_t ValueMax, uint8_t ValueMin);
void Time_Regulate(void);
void Time_Adjust(void);
void Time_Display(void);
void Date_Regulate(void);
void Date_Adjust(void);
void Date_Display(void);
void Calendar_Show(void);
void WriteToBackupReg(uint16_t FirstBackupData);
uint32_t CheckBackupReg(uint16_t FirstBackupData);
Button_TypeDef ReadKey(void);

#endif /* __MAIN_H */

