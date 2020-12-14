/*
 * clock.h
 *
 *  Created on: Dec 10, 2020
 *      Author: linhao
 */

#ifndef CLOCK_H_
#define CLOCK_H_

#include <stdint.h>

void Clock_Init(void);
void Clock_ShowTime(void);
void Clock_ShowDate(void);

void Clock_SecondJumpUp(void);
void Clock_SecondJumpDown(void);

#endif /* CLOCK_H_ */