                                                                                        
 /* global_interrupt.h
 *
 *  Created on: Jul 8, 2020
 *      Author: nada alaa
 /*

#ifndef SRC_DEVICE_DRIVER_GLOBAL_INTERRUPT_H_
#define SRC_DEVICE_DRIVER_GLOBAL_INTERRUPT_H_

#define GI_ENABLE()             __asm("    cpsie   i\n");
#define GI_DISABLE()            __asm("    cpsid   i\n");

#endif /* SRC_DEVICE_DRIVER_GLOBAL_INTERRUPT_H_ */
