#ifndef GUARD_AIR_TIMER_H
#define GUARD_AIR_TIMER_H

#include "global.h"

void StartAirTimer(u16 steps);
void AddAirTimer(u16 steps);
void StopAirTimer(void);
bool8 AirTimerTakeStep(u16 metatileBehavior);
void StartAirTimerMap(struct ScriptContext *ctx);
void AddAirTimerMap(struct ScriptContext *ctx);

#endif