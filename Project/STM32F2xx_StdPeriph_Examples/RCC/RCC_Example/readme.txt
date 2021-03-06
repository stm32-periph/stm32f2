/**
  @page RCC_Example RCC example
  
  @verbatim
  ******************** (C) COPYRIGHT 2012 STMicroelectronics *******************
  * @file    RCC/RCC_Example/readme.txt 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    31-December-2021
  * @brief   Description of the RCC example.
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

This example shows how to use, for debug purpose, the RCC_GetClocksFreq function 
to retrieve the current status and frequencies of different on chip clocks. 
You can see the RCC_ClockFreq structure content, which hold the frequencies of 
different on chip clocks, using your toolchain debugger.

This example handles also the High Speed External clock (HSE) failure detection:
when the HSE clock disappears (broken or disconnected external Quartz); HSE, PLL
are disabled (but no change on PLL config), HSI selected as system clock source
and an interrupt (NMI) is generated. In the NMI ISR, the HSE, HSE ready interrupt
are enabled and once HSE clock recover, the HSERDY interrupt is generated and in
the RCC ISR routine the system clock is reconfigured to its previous state (before
HSE clock failure). You can monitor the HSE clock on MCO1 pin(PA8).

Four LEDs are toggled with a timing defined by the Delay function.

@note On the STM322xG-EVAL board, to genertate the HSE failure you can remove
      the HSE quartz from the socket.
 

@par Directory contents 

  - RCC/RCC_Example/system_stm32f2xx.c   STM32F2xx system clock configuration file 
  - RCC/RCC_Example/stm32f2xx_conf.h    Library Configuration file
  - RCC/RCC_Example/stm32f2xx_it.c      Interrupt handlers
  - RCC/RCC_Example/stm32f2xx_it.h      Interrupt handlers header file
  - RCC/RCC_Example/main.c              Main program

@note The "system_stm32f2xx.c" is generated by an automatic clock configuration 
      tool and can be easily customized to your own configuration. 
      To select different clock setup, use the "STM32F2xx_Clock_Configuration_V1.0.0.xls" 
      provided with the AN3362 package available on <a href="http://www.st.com/internet/mcu/family/141.jsp">  ST Microcontrollers </a>

      
@par Hardware and Software environment 

  - This example runs on STM32F2xx Devices.
  
  - This example has been tested with STM322xG-EVAL RevB and can be easily 
    tailored to any other development board.

  - STM322xG-EVAL Set-up
    - Use LED1, LED2, LED3 and LED4 connected respectively to PG.06, PG.08, PI.09
      and PC.07 pins

       	       
@par How to use it ?

In order to make the program work, you must do the following :
 - Copy all source files from this example folder to the template folder under
   Project\STM32F2xx_StdPeriph_Template
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example
    

 */


