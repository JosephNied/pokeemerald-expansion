#ifndef GUARD_AIR_TIMER_H
#define GUARD_AIR_TIMER_H

#include "global.h"

void StartAirTimer(u16 steps);
void StartAirTimerMap(void);
void StopAirTimer(void);
bool8 AirTimerTakeStep(void);

#endif