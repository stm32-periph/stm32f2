/**
  @page ewarm EWARM Project Template for STM32F2xx devices
  
  @verbatim
  ******************* (C) COPYRIGHT 2012 STMicroelectronics ********************
  * @file    readme.txt
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    31-December-2021
  * @brief   This sub-directory contains all the user-modifiable files needed to
  *          create a new project linked with the STM32F2xx Standard Peripherals 
  *          Library and working with IAR Embedded Workbench for ARM (EWARM)
  *          software toolchain.
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

 - project .ewd/.eww/.ewp: A pre-configured project file with the provided library 
                           structure that produces an executable image with IAR 
                           Embedded Workbench.
                
 - stm32f2xx_flash.icf : This file is the IAR Linker configuration file used to 
                         place program code (readonly) in internal FLASH and data
                         (readwrite, Stack and Heap)in internal SRAM. 
                         You can customize this file to your need.                                                                                

 - stm32f2xx_flash_extsram.icf: This file is the IAR Linker configuration file 
                                used to place program code (readonly) in internal 
                                FLASH and data (readwrite, Stack and Heap)in 
                                external SRAM. You can customize this file to your need.  
                                
 - stm32f2xx_ram.icf:  This file is the IAR Linker configuration file used to 
                       place program code (readonly) and data (readwrite, Stack 
                       and Heap)in internal SRAM. 
                       You can customize this file to your need.                    
                             
 @par How to use it ?

 - Open the Project.eww workspace.
 - Rebuild all files: Project->Rebuild all
 - Load project image: Project->Download and Debug
 - Run program: Debug->Go(F5)

 @note The needed define symbols for this config are already declared in the
       preprocessor section: USE_STM322xG_EVAL, STM32F2XX, USE_STDPERIPH_DRIVER 



 */
