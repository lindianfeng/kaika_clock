/*
 * ticktimer.h
 *
 *  Created on: 2020年12月14日
 *      Author: lindi
 */

#ifndef INC_TICKTIMER_H_
#define INC_TICKTIMER_H_

#include <stdint.h>
#include <stdbool.h>

typedef struct {
  bool autoreload;
  uint32_t lasttick;
  uint32_t interval;
} TickTimer;

bool TickTimer_IsExpired(TickTimer *timer, uint32_t tick);

#endif /* INC_TICKTIMER_H_ */
