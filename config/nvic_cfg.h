/*
 * nvic_cfg.h
 *
 Created on: Jul 8, 2020
 *      Author: nada alaa
 */

#ifndef E15_ARM_REPO_CONFIG_NVIC_CFG_H_
#define E15_ARM_REPO_CONFIG_NVIC_CFG_H_

#include "../utils/STD_types.h"


#define GPIO_PORTA_NVIC     DISABLE ;
#define GPIO_PORTB_NVIC     DISABLE ;
#define GPIO_PORTC_NVIC     DISABLE ;
#define GPIO_PORTD_NVIC     DISABLE ;
#define GPIO_PORTE_NVIC     DISABLE ;
#define GPIO_PORTF_NVIC     DISABLE ;

#define UART0_NVIC          DISABLE ;
#define UART1_NVIC          DISABLE ;
#define UART2_NVIC          DISABLE ;
#define UART3_NVIC          DISABLE ;
#define UART4_NVIC          DISABLE ;
#define UART5_NVIC          DISABLE ;
#define UART6_NVIC          DISABLE ;
#define UART7_NVIC          DISABLE ;

#define SPI0_NVIC           ENABLE ;
#define SPI1_NVIC           DISABLE ;
#define SPI2_NVIC           DISABLE ;
#define SPI3_NVIC           ENABLE ;

#define I2C0_NVIC           ENABLE ;
#define I2C1_NVIC           ENABLE ;
#define I2C2_NVIC           DISABLE ;
#define I2C3_NVIC           DISABLE ;

#define WATCHDOG_T0_T1      DISABLE ;


#endif /* E15_ARM_REPO_CONFIG_NVIC_CFG_H_ */
