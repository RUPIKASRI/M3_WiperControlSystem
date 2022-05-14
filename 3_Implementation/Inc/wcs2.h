* wcs2.h
 *
 *  Created on: May 14, 2022
 *      Author: Rupika
 */

#ifndef WCS2_H_
#define WCS2_H_


#define __vo volatile
#define _weak __attribute_((weak))

void NMI_Handler                                (void) _attribute_ ((weak, alias("Dummy_Handler")));
void HardFault_Handler                          (void) _attribute_ ((weak, alias("Dummy_Handler")));
void MemManage_Handler                          (void) _attribute_ ((weak, alias("Dummy_Handler")));
void TIM1_CC_IRQHandler 			            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void TIM2_IRQHandler 				            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void TIM3_IRQHandler 				            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void TIM4_IRQHandler 				            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void I2C1_EV_IRQHandler 			            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void I2C1_ER_IRQHandler 			            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void I2C2_EV_IRQHandler 			            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void I2C2_ER_IRQHandler 			            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void SPI1_IRQHandler  				            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void SPI2_IRQHandler 				            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void USART1_IRQHandler  			            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void UART4_IRQHandler            	            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void UART5_IRQHandler            	            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void USART6_IRQHandler           	            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void I2C3_EV_IRQHandler          	            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void I2C3_ER_IRQHandler          	            (void) _attribute_ ((weak, alias("Dummy_Handler")));
void FPU_IRQHandler              	            (void) _attribute_ ((weak, alias("Dummy_Handler")));

#endif /* WCS2_H_ */
