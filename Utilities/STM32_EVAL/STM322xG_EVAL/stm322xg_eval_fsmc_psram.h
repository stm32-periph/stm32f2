/**
  ******************************************************************************
  * @file    stm322xg_eval_fsmc_psram.h
  * @author  MCD Application Team
  * @version V5.1.3
  * @date    31-September-2021
  * @brief   This file contains all the functions prototypes for the 
  *          stm322xg_eval_fsmc_psram.c driver.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2016 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM322xG_EVAL_FSMC_PSRAM_H
#define __STM322xG_EVAL_FSMC_PSRAM_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm322xg_eval.h"

/** @addtogroup Utilities
  * @{
  */
  
/** @addtogroup STM32_EVAL
  * @{
  */ 

/** @addtogroup STM322xG_EVAL
  * @{
  */
  
/** @addtogroup STM322xG_EVAL_FSMC_PSRAM
  * @{
  */  

/** @defgroup STM322xG_EVAL_FSMC_PSRAM_Exported_Types
  * @{
  */
/**
  * @}
  */
  
/** @defgroup STM322xG_EVAL_FSMC_PSRAM_Exported_Constants
  * @{
  */ 
/**
  * @}
  */ 
  
/** @defgroup STM322xG_EVAL_FSMC_PSRAM_Exported_Macros
  * @{
  */ 
/**
  * @}
  */ 

/** @defgroup STM322xG_EVAL_FSMC_PSRAM_Exported_Functions
  * @{
  */      

void PSRAM_Init(void);
void PSRAM_WriteBuffer(uint16_t* pBuffer, uint32_t WriteAddr, uint32_t NumHalfwordToWrite);
void PSRAM_ReadBuffer(uint16_t* pBuffer, uint32_t ReadAddr, uint32_t NumHalfwordToRead);

#ifdef __cplusplus
}
#endif

#endif /* __STM322xG_EVAL_FSMC_PSRAM_H */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */ 


