/**
  @page NVIC_DMA_WFIMode NVIC DMA in WFI mode example
  
  @verbatim
  ******************** (C) COPYRIGHT 2012 STMicroelectronics *******************
  * @file    NVIC/NVIC_DMA_WFIMode/readme.txt 
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    31-December-2021
  * @brief   Description of the NVIC DMA in WFI mode example.
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

This example shows how to enter the system to WFI mode with DMA transfer enabled
and wake-up from this mode by the DMA End of Transfer interrupt.

In the associated software, the system clock is set to 120 MHz, the DMA1 Stream1
channel4 is configured to transfer 10 data from the EVAL_COM1 (USART3) data register 
to a predefined buffer, DST_Buffer, and to generate an interrupt at the end of
the transfer. The EVAL_COM1 (USART3) receives data from Hyperterminal.
LED1 is toggled with a frequency depending on the system clock, this is used 
to indicate whether the MCU is in WFI or RUN mode. 

Pressing key push button (generates rising edge on EXTI Line15) will put the core
in the WFI mode, causing the LED1 to stop toggling.
To wake-up from WFI mode you have to send the sequence (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
from the Hyperterminal to the EVAL_COM1 (USART3). These bytes will be transferred 
by the DMA from the EVAL_COM1 (USART3) receive data register to the predefined buffer, 
then generates an interrupt which exits the system from WFI mode. 
The LED1 restarts toggling and a LED2 will toggle if the buffer is correctly 
received else a LED3 is toggled.


@par Directory contents 

  - NVIC/DMA_WFIMode/stm32f2xx_conf.h    Library Configuration file
  - NVIC/DMA_WFIMode/stm32f2xx_it.c       Interrupt handlers
  - NVIC/DMA_WFIMode/stm32f2xx_it.h      Interrupt handlers header file
  - NVIC/DMA_WFIMode/main.c              Main program
  - NVIC/DMA_WFIMode/system_stm32f2xx.c  STM32F2xx system source file
  
@note The "system_stm32f2xx.c" is generated by an automatic clock configuration 
      tool and can be easily customized to your own configuration. 
      To select different clock setup, use the "STM32F2xx_Clock_Configuration_V1.0.0.xls" 
      provided with the AN3362 package available on <a href="http://www.st.com/internet/mcu/family/141.jsp">  ST Microcontrollers </a>

         
@par Hardware and Software environment

  - This example runs on STM32F2xx Devices.
  
  - This example has been tested with STM322xG-EVAL RevB and can be easily 
    tailored to any other development board.

  - STM322xG-EVAL Set-up
    - Use the Key push-button connected to pin PG15 (EXTI Line15)
    - Use LED1, LED2 and LED3 connected respectively to PG.06, PG.08 and PC.07 pins    
    - Connect a null-modem female/female RS232 cable between the DB9 connector 
      CN16 (USART3) and PC serial port if you want to display data on the HyperTerminal.
      @note Make sure that jumper JP22 is in position 1-2

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
 - Rebuild all files and load your image into target memory
 - Run the example

   

 */


