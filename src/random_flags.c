#include "global.h"
#include "event_data.h"
#include "random.h"

static const u16 sRandomPokemonFlags[] =
{
    FLAG_UNUSED_0x02A,
    FLAG_UNUSED_0x02B,
    FLAG_UNUSED_0x02C,
    FLAG_UNUSED_0x02D,
    FLAG_UNUSED_0x02E,
    FLAG_UNUSED_0x02F,
    FLAG_UNUSED_0x030,
    FLAG_UNUSED_0x031,
    FLAG_UNUSED_0x032,
    FLAG_UNUSED_0x033,
};

static const u16 sRandomItemFlags[] =
{
    FLAG_UNUSED_0x020,
    FLAG_UNUSED_0x021,
    FLAG_UNUSED_0x022,
    FLAG_UNUSED_0x023,
    FLAG_UNUSED_0x024,
    FLAG_UNUSED_0x025,
    FLAG_UNUSED_0x026,
};

void SetRandomFlags(void)
{
    //randomize pokemon
    u16 pokemonFlags[ARRAY_COUNT(sRandomPokemonFlags)];
    int i;

    //clear flags
    for (i = 0; i < ARRAY_COUNT(sRandomPokemonFlags); i++) 
    {
        FlagClear(sRandomPokemonFlags[i]);
    }

    memcpy(pokemonFlags, sRandomPokemonFlags, sizeof(pokemonFlags));

    // Fisher-Yates shuffle
    for (i = ARRAY_COUNT(pokemonFlags) - 1; i > 0; i--)
    {
        int j = Random() % (i + 1);

        u16 temp = pokemonFlags[i];
        pokemonFlags[i] = pokemonFlags[j];
        pokemonFlags[j] = temp;
    }

    // Set first 6
    for (i = 0; i < 4; i++) 
    {
        FlagSet(pokemonFlags[i]);
    }

    //***
    //randomize items
    u16 itemFlags[ARRAY_COUNT(sRandomItemFlags)];
    int x;

    //clear flags
    for (x = 0; x < ARRAY_COUNT(sRandomItemFlags); x++) 
    {
        FlagClear(sRandomItemFlags[x]);
    }

    memcpy(itemFlags, sRandomItemFlags, sizeof(itemFlags));

    // Fisher-Yates shuffle
    for (x = ARRAY_COUNT(itemFlags) - 1; x > 0; x--)
    {
        int y = Random() % (x + 1);

        u16 temp1 = itemFlags[x];
        itemFlags[x] = itemFlags[y];
        itemFlags[y] = temp1;
    }

    // Set first 3
    for (x = 0; x < 3; x++)
    {
        FlagSet(itemFlags[x]);
    }
}