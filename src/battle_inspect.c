#include "global.h"
#include "battle.h"
#include "pokedex.h"
#include "constants/pokedex.h"

void InspectAddToDex(void)
{
    u16 species = gBattleMons[gBattlerTarget].species;

    GetSetPokedexFlag(species, FLAG_SET_SEEN);
    GetSetPokedexFlag(species, FLAG_SET_CAUGHT);
}