#include "global.h"
#include "script.h"
#include "event_data.h"
#include "metatile_behavior.h"
#include "fieldmap.h"

static u16 sAirTimerSteps;
static bool8 sAirTimerActive;
extern const u8 Planet01_01_AirExpired[];
extern const u8 Planet01_01_AirWarning[];
u16 GetAirTimer(void);
bool8 IsAirTimerActive(void);

void StartAirTimer(u16 steps)
{
    sAirTimerSteps = steps;
    sAirTimerActive = TRUE;
}

void StopAirTimer(void)
{
    sAirTimerActive = FALSE;
}

bool8 AirTimerTakeStep(u16 metatileBehavior)
{
    if (!sAirTimerActive)
        return FALSE;

    if (MetatileBehavior_IsShortGrass(metatileBehavior))
        return FALSE;
    
    if (sAirTimerSteps == 30) 
    {
        ScriptContext_SetupScript(Planet01_01_AirWarning);
        sAirTimerSteps--;
        return TRUE;
    }

    if (--sAirTimerSteps == 0)
    {
        StopAirTimer();
        ScriptContext_SetupScript(Planet01_01_AirExpired);
        return TRUE;
    }

    return FALSE;
}

void AddAirTimer(u16 steps)
{
    if(sAirTimerActive)
        sAirTimerSteps += steps;
}

void StartAirTimerMap(struct ScriptContext *ctx)
{
    StartAirTimer(VarGet(VAR_AIR_TIMER_STEPS));
}

void AddAirTimerMap(struct ScriptContext *ctx)
{
    AddAirTimer(VarGet(VAR_AIR_TIMER_STEPS));
}

u16 GetAirTimer(void)
{
    return sAirTimerSteps;
}

bool8 IsAirTimerActive(void)
{
    return sAirTimerActive;
}