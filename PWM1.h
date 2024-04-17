/*
 * PWM1.h
 *
 * Created: 4/15/2024 6:51:04 PM
 *  Author: Fatima
 */ 


#ifndef PWM1_H_
#define PWM1_H_

#include <avr/io.h>
#include <stdint.h>

#define _8bits 0
#define _9bits 1
#define _10bits 2
#define _ICR 3
#define _OCR 4


void setPWM1fastA(uint8_t invertido, uint8_t modo, uint16_t prescaler);

void updateDutyA1(uint8_t dutycycle);


#endif /* PWM1_H_ */
