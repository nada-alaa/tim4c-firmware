/*
 * SysCtr.c
 *
  Created on: Jul 8, 2020
 *      Author: nada alaa
 */
#include "../mcu_hw.h"
#include "../../utils/STD_Types.h"
#include "../../utils/Bit_Math.h"
#include "../../config/SysCtr_cfg.h"

void SysCtr_init(void)
{
    RCGCUART_REG.R0  = SYSCTR_RCC_UART0;
    RCGCUART_REG.R1  = SYSCTR_RCC_UART1;
    RCGCUART_REG.R2  = SYSCTR_RCC_UART2;
    RCGCUART_REG.R3  = SYSCTR_RCC_UART3;
    RCGCUART_REG.R4  = SYSCTR_RCC_UART4;
    RCGCUART_REG.R5  = SYSCTR_RCC_UART5;
    RCGCUART_REG.R6  = SYSCTR_RCC_UART6;
    RCGCUART_REG.R7  = SYSCTR_RCC_UART7;

    RCGCGPIO_REG.R0  = SYSCTR_RCC_GPIO_PORTA;
    RCGCGPIO_REG.R1  = SYSCTR_RCC_GPIO_PORTB;
    RCGCGPIO_REG.R2  = SYSCTR_RCC_GPIO_PORTC;
    RCGCGPIO_REG.R3  = SYSCTR_RCC_GPIO_PORTD;
    RCGCGPIO_REG.R4  = SYSCTR_RCC_GPIO_PORTE;
    RCGCGPIO_REG.R5  = SYSCTR_RCC_GPIO_PORTF;

    RCGCSSI_REG.R0   = SYSCTR_RCC_SSI0;
    RCGCSSI_REG.R1   = SYSCTR_RCC_SSI1;
    RCGCSSI_REG.R2   = SYSCTR_RCC_SSI2;
    RCGCSSI_REG.R3   = SYSCTR_RCC_SSI3;
    
    RCGCI2C_REG.R0   = SYSCTR_RCC_SSI0;
    RCGCI2C_REG.R1   = SYSCTR_RCC_SSI1;
    RCGCI2C_REG.R2   = SYSCTR_RCC_SSI2;
    RCGCI2C_REG.R3   = SYSCTR_RCC_SSI3; 


}

