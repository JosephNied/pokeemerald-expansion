#include "global.h"
#include "event_data.h"
#include "battle_setup.h"

void SetBossBattle(void)
{
    gScriptedBossBattle = TRUE;
}

void BossBattleOff(void)
{
    gScriptedBossBattle = FALSE;
}