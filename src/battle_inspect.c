#include "global.h"
#include "battle.h"
#include "pokedex.h"
#include "constants/pokedex.h"

void InspectAddToDex(enum BattlerId battler)
{
    enum BattlerId opponent = BATTLE_OPPOSITE(battler);
    u16 species = gBattleMons[gBattlerTarget].species;

    GetSetPokedexFlag(species, FLAG_SET_SEEN);
    GetSetPokedexFlag(species, FLAG_SET_CAUGHT);
}