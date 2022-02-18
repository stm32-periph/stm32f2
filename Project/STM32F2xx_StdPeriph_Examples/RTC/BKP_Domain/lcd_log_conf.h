/**
  ******************************************************************************
  * @file    RTC/BKP_Domain/lcd_log_conf.h
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    13-April-2012
  * @brief   lcd_log configuration file.
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

#ifndef  __LCD_LOG_CONF_H__
#define  __LCD_LOG_CONF_H__

/* Includes ------------------------------------------------------------------*/
#include "stm322xg_eval.h"
#include <stdio.h>

#ifdef USE_STM322xG_EVAL
 #include "stm322xg_eval_lcd.h"
#endif  

/** @addtogroup LCD_LOG
  * @{
  */
  
/** @defgroup LCD_LOG
  * @brief This file is the 
  * @{
  */ 


/** @defgroup LCD_LOG_CONF_Exported_Defines
  * @{
  */ 

/* Define the LCD default text color */
#define     LCD_LOG_DEFAULT_COLOR    White

/* Comment the line below to disable the scroll back and forward features */
#define     LCD_SCROLL_ENABLED

/* Define the display window settings */
#define     YWINDOW_MIN         3
#define     YWINDOW_SIZE        12
#define     XWINDOW_MAX         50

/* Define the cache depth */
#define     CACHE_SIZE          50

/** @defgroup LCD_LOG_CONF_Exported_TypesDefinitions
  * @{
  */ 

/**
  * @}
  */ 


/** @defgroup LCD_LOG_Exported_Macros
  * @{
  */ 


/**
  * @}
  */ 

/** @defgroup LCD_LOG_CONF_Exported_Variables
  * @{
  */ 

/**
  * @}
  */ 

/** @defgroup LCD_LOG_CONF_Exported_FunctionsPrototype
  * @{
  */ 

/**
  * @}
  */ 


#endif /* __LCD_LOG_H__ */

/**
  * @}
  */ 

/**
  * @}
  */ 

