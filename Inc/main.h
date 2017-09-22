/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define LED_ERR_Pin GPIO_PIN_14
#define LED_ERR_GPIO_Port GPIOC
#define LED_SLV_Pin GPIO_PIN_15
#define LED_SLV_GPIO_Port GPIOC
#define TP1_Pin GPIO_PIN_2
#define TP1_GPIO_Port GPIOA
#define LED_MST_Pin GPIO_PIN_3
#define LED_MST_GPIO_Port GPIOA
#define ADC_VLOW_Pin GPIO_PIN_4
#define ADC_VLOW_GPIO_Port GPIOA
#define SW_ADDR0_Pin GPIO_PIN_5
#define SW_ADDR0_GPIO_Port GPIOA
#define SW_ADDR1_Pin GPIO_PIN_6
#define SW_ADDR1_GPIO_Port GPIOA
#define SW_ADDR2_Pin GPIO_PIN_7
#define SW_ADDR2_GPIO_Port GPIOA
#define SW_ADDR3_Pin GPIO_PIN_0
#define SW_ADDR3_GPIO_Port GPIOB
#define SW_MS_Pin GPIO_PIN_1
#define SW_MS_GPIO_Port GPIOB
#define SW_ADDR4_BT1_Pin GPIO_PIN_2
#define SW_ADDR4_BT1_GPIO_Port GPIOB
#define EE_485_Pin GPIO_PIN_12
#define EE_485_GPIO_Port GPIOB
#define INT_FAULT_Pin GPIO_PIN_13
#define INT_FAULT_GPIO_Port GPIOB
#define CAN_ADDR1_Pin GPIO_PIN_14
#define CAN_ADDR1_GPIO_Port GPIOB
#define CAN_ADDR2_Pin GPIO_PIN_15
#define CAN_ADDR2_GPIO_Port GPIOB
#define TP2_Pin GPIO_PIN_10
#define TP2_GPIO_Port GPIOA
#define IN_ADDR1_Pin GPIO_PIN_4
#define IN_ADDR1_GPIO_Port GPIOB
#define IN_ADDR2_Pin GPIO_PIN_8
#define IN_ADDR2_GPIO_Port GPIOB
#define CAN_SYNC_Pin GPIO_PIN_9
#define CAN_SYNC_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
