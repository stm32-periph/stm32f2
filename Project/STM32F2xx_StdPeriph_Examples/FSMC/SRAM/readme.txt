/**
  @page FSMC_SRAM How to configure the FSMC to drive the SRAM memory
  
  @verbatim
  ******************** (C) COPYRIGHT 2012 STMicroelectronics *******************
  * @file    FSMC/SRAM/readme.txt 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    31-December-2021
  * @brief   Description of the FSMC SRAM example.
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

@par Example Description 

This example shows how to configure the FSMC to drive the CY7C1071DV33-12BAXI SRAM
memory mounted on STM322xG-EVAL evaluation board(MB786) RevB.
            
In this example a basic example of how to use the FSMC firmware library and
an associate driver to perform read/write operations on the CY7C1071DV33 SRAM memory.

@note This SRAM memory is not available on STM322xG-EVAL board RevA.


@par Directory contents

  - FSMC/SRAM/system_stm32f2xx.c          STM32F2xx system clock configuration file 
  - FSMC/SRAM/stm32f2xx_conf.h            Library Configuration file
  - FSMC/SRAM/stm32f2xx_it.c              Interrupt handlers
  - FSMC/SRAM/stm32f2xx_it.h              Header for stm32f2xx_it.c
  - FSMC/SRAM/main.c                      Main program

@note The "system_stm32f2xx.c" is generated by an automatic clock configuration 
      tool and can be easily customized to your own configuration. 
      To select different clock setup, use the "STM32F2xx_Clock_Configuration_V1.0.0.xls" 
      provided with the AN3362 package available on <a href="http://www.st.com/internet/mcu/family/141.jsp">  ST Microcontrollers </a>

      
@par Hardware and Software environment 

  - This example runs on STM32F2xx Devices.
  
  - This example has been tested with STM322xG-EVAL RevB and can be easily tailored
    to any other development board.

    @note The STM322xG-EVAL board RevA was wrongly named STM3220F-EVAL


@par How to use it ? 

In order to make the program work, you must do the following :
 - Copy all source files from this example folder to the template folder under
   Project\STM32F2xx_StdPeriph_Template
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example



 */


