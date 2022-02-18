/**
  @page mdkarm MDK-ARM Project Template for STM32F2xx devices
  
  @verbatim
  ******************** (C) COPYRIGHT 2012 STMicroelectronics *******************
  * @file    readme.txt
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    31-December-2021
  * @brief   This sub-directory contains all the user-modifiable files needed to 
  *          create a new project linked with the STM32F2xx Standard Peripherals  
  *          Library and working with RealView Microcontroller Development Kit
  *          (MDK-ARM) software toolchain.
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
  @endverbatim
 
 @par Directory contents
 
 - Project.uvproj/.uvopt: A pre-configured project file with the provided library 
                          structure that produces an executable image with MDK-ARM.

@note Enabling "Options for Target — Output – Browser Information" is useful for
      quick source files navigation but may slow the compilation time.                 
 
 
 @par How to use it ?
 
 - Open the Project.uvproj project
 - Rebuild all files: Project->Rebuild all target files
 - Load project image: Debug->Start/Stop Debug Session
 - Run program: Debug->Run (F5)

 @note The needed define symbols for this config are already declared in the
       preprocessor section: USE_STM322xG_EVAL, STM32F2XX, USE_STDPERIPH_DRIVER 
    

 */


