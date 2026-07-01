#include "global.h"
#include "script.h"
#include "event_data.h"

static u16 sAirTimerSteps;
static bool8 sAirTimerActive;
extern const u8 Planet01_01_AirExpired[];

void StartAirTimer(u16 steps)
{
    sAirTimerSteps = steps;
    sAirTimerActive = TRUE;
}

void StopAirTimer(void)
{
    sAirTimerActive = FALSE;
}

bool8 AirTimerTakeStep(void)
{
    if (!sAirTimerActive)
        return FALSE;

    if (--sAirTimerSteps == 0)
    {
        StopAirTimer();
        ScriptContext_SetupScript(Planet01_01_AirExpired);
        return TRUE;
    }

    return FALSE;
}

void StartAirTimerMap(void)
{
    StartAirTimer(VarGet(VAR_AIR_TIMER_STEPS));
}