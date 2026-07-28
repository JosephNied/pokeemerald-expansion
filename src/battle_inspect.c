#include "global.h"
#include "battle.h"
#include "pokedex.h"
#include "constants/pokedex.h"
#include "event_data.h"

void InspectAddToDex(enum BattlerId battler)
{
    enum BattlerId opponent = BATTLE_OPPOSITE(battler);
    u16 species = gBattleMons[gBattlerTarget].species;

    GetSetPokedexFlag(species, FLAG_SET_SEEN);
    GetSetPokedexFlag(species, FLAG_SET_CAUGHT);
}

void RegisterSpeciesInDex(void)
{
    u16 species = VarGet(VAR_0x8000);
    u16 nationalDexNum = SpeciesToNationalPokedexNum(species);

    GetSetPokedexFlag(nationalDexNum, FLAG_SET_SEEN);
    GetSetPokedexFlag(nationalDexNum, FLAG_SET_CAUGHT);
}