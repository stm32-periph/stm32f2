/**
  ******************************************************************************
  * @file    I2C/I2C_TwoBoards/MasterTransmitterInterrupt/main.h
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    13-April-2012
  * @brief   Main program header
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

#ifdef __cplusplus
 extern "C" {
#endif 
  
/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"
#include "stm322xg_eval.h"
#include "stm322xg_eval_ioe.h"
  
/* Exported typedef -----------------------------------------------------------*/
#define countof(a)   (sizeof(a) / sizeof(*(a)))  
typedef enum {FAILED = 0, PASSED = !FAILED} TestStatus;  

/* Exported define ------------------------------------------------------------*/
/* Uncomment the line below if you will use the I2C peripheral as a Master */
#define I2C_MASTER
/* Uncomment the line below if you will use the I2C peripheral as a Slave */
/* #define I2C_SLAVE */
  
/* To use the I2C at 400 KHz (in fast mode), the PCLK1 frequency (I2C peripheral
   input clock) must be a multiple of 10 MHz */
/* Uncomment the line below if you will use the I2C peripheral in Fast Mode */
/* #define FAST_I2C_MODE */
  
/* Uncomment the line below if you will use the I2C peripheral in 10-bit addressing
   mode */
/* #define I2C_10BITS_ADDRESS */
  
/* Define I2C Speed --------------------------------------------------------*/
#ifdef FAST_I2C_MODE
 #define I2C_SPEED 340000
 #define I2C_DUTYCYCLE I2C_DutyCycle_16_9  
#else /* STANDARD_I2C_MODE*/
 #define I2C_SPEED 100000
 #define I2C_DUTYCYCLE  I2C_DutyCycle_2
#endif /* FAST_I2C_MODE*/
  
/* Define Slave Address  ---------------------------------------------------*/
#ifdef I2C_10BITS_ADDRESS
 #define SLAVE_ADDRESS (uint16_t)0x0330
#else /* I2C_7BITS_ADDRESS */
 #define SLAVE_ADDRESS 0x30
#endif /* I2C_10BITS_ADDRESS */
 
/* USER_TIMEOUT value for waiting loops. This timeout is just a guarantee that the
   application will not remain stuck if the I2C communication is corrupted. 
   You may modify this timeout value depending on CPU frequency and application
   conditions (interrupts routines, number of data to transfer, speed, CPU
   frequency...). */ 
#define USER_TIMEOUT                  ((uint32_t)0x64) /* Waiting 1s */  
  
#define TXBUFFERSIZE   (countof(TxBuffer) - 1)
#define RXBUFFERSIZE   TXBUFFERSIZE

/* I2Cx Communication boards Interface */
#define I2Cx                          I2C1
#define I2Cx_CLK                      RCC_APB1Periph_I2C1
#define I2Cx_EV_IRQn                  I2C1_EV_IRQn
#define I2Cx_ER_IRQn                  I2C1_ER_IRQn
#define I2Cx_EV_IRQHandler            I2C1_EV_IRQHandler
#define I2Cx_ER_IRQHandler            I2C1_ER_IRQHandler
  
#define I2Cx_SDA_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define I2Cx_SDA_PIN                  GPIO_Pin_9                
#define I2Cx_SDA_GPIO_PORT            GPIOB                       
#define I2Cx_SDA_SOURCE               GPIO_PinSource9
#define I2Cx_SDA_AF                   GPIO_AF_I2C1
  
#define I2Cx_SCL_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define I2Cx_SCL_PIN                  GPIO_Pin_6                
#define I2Cx_SCL_GPIO_PORT            GPIOB                    
#define I2Cx_SCL_SOURCE               GPIO_PinSource6
#define I2Cx_SCL_AF                   GPIO_AF_I2C1

/* Joystick Commands */
#define CMD_RIGHT                        0x55
#define CMD_LEFT                         0xAA
#define CMD_UP                           0x33
#define CMD_DOWN                         0xCC
#define CMD_SEL                          0xFF 

#define CMD_ACK                          0x66 

/* Define numbers of bytes to transmit from TxBuffer */
#define CMD_RIGHT_SIZE                   0x01
#define CMD_LEFT_SIZE                    0x05
#define CMD_UP_SIZE                      0x14
#define CMD_DOWN_SIZE                    0x1E
#define CMD_SEL_SIZE                     TXBUFFERSIZE

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#if defined (I2C_MASTER)
uint8_t GetVar_NbrOfDataToTransfer(void);
#endif /* I2C_MASTER */

#if defined (I2C_SLAVE)
uint8_t GetVar_NbrOfDataToReceive(void);
#endif /* I2C_SLAVE */
  
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

