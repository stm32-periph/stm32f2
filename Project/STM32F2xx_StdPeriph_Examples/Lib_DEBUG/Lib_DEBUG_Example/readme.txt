/**
  @page Lib_DEBUG_Example Lib DEBUG example
  
  @verbatim
  ******************** (C) COPYRIGHT 2012 STMicroelectronics *******************
  * @file    Lib_DEBUG/Lib_DEBUG_Example/readme.txt 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    31-December-2021
  * @brief   Description of the Lib DEBUG example.
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

This example demonstrates how to declare a dynamic peripherals pointers used for
Debug mode.  

To use Debug mode you have to add the stm32f2xx_ip_dbg.c file to your application.
This creates a pointer to the peripheral structure in SRAM. Debugging consequently
becomes easier and all register settings can be obtained by dumping a peripheral 
variable.

When the "USE_FULL_ASSERT" label is uncommented (in stm32f2xx_conf.h file),
the assert_param macro is expanded and run-time checking is enabled in the firmware
library code. The run-time checking allows checking that all the library functions
input value lies within the parameter allowed values.

The associated program simulates wrong parameter passed to library function and the
source of the error is printed on Hyperterminal (through USART).

@note
The Debug mode increases the code size and reduces the code performance. For this
reason, it is recommended to used it only when debugging the application and to
remove it from the final application code.

@par Directory contents 

  - Lib_DEBUG/Lib_DEBUG_Example/stm32f2xx_conf.h    Library Configuration file
  - Lib_DEBUG/Lib_DEBUG_Example/stm32f2xx_it.c      Interrupt handlers
  - Lib_DEBUG/Lib_DEBUG_Example/stm32f2xx_it.h      Interrupt handlers header file
  - Lib_DEBUG/Lib_DEBUG_Example/main.c              Main program
  - Lib_DEBUG/Lib_DEBUG_Example/stm32f2xx_ip_dbg.c  Peripherals pointers initialization
  - Lib_DEBUG/Lib_DEBUG_Example/stm32f2xx_ip_dbg.h  Header for stm32f2xx_ip_dbg.c 
  - Lib_DEBUG/Lib_DEBUG_Example/system_stm32f2xx.c  STM32F2xx system source file
  
@note The "system_stm32f2xx.c" is generated by an automatic clock configuration 
      tool and can be easily customized to your own configuration. 
      To select different clock setup, use the "STM32F2xx_Clock_Configuration_V1.0.0.xls" 
      provided with the AN3362 package available on <a href="http://www.st.com/internet/mcu/family/141.jsp">  ST Microcontrollers </a>


@par Hardware and Software environment

  - This example runs on STM32F2xx Devices.
  
  - This example has been tested with STM322xG-EVAL RevB and can be easily tailored
    to any other development board

  - STM322xG-EVAL Set-up
    - Connect a null-modem female/female RS232 cable between the DB9 connector 
      CN16 and PC serial port.
    - Make sure that JP22 is in position 1<->2
 
  - Hyperterminal configuration:
    - Word Length = 8 Bits
    - One Stop Bit
    - No parity
    - BaudRate = 115200 baud
    - flow control: None

           
@par How to use it ? 

In order to make the program work, you must do the following :
 - Copy all source files from this example folder to the template folder under
   Project\STM32F2xx_StdPeriph_Template
 - Open your preferred toolchain 
 - Add the required example files
   - stm32f2xx_ip_dbg.c
 - Rebuild all files and load your image into target memory
 - Run the example

@note 
  - The free Lite version of TrueSTUDIO do not support printf() redirection.
    For more information, see "note.txt" under "STM32F2xx_StdPeriph_Template\TrueSTUDIO".
    

 */


