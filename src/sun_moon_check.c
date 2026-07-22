#include "global.h"
#include "party_menu.h"
#include "pokemon.h"
#include "event_data.h"

void SunMoonCheck(void)
{
    bool8 hasSolrock = FALSE;
    bool8 hasLunatone = FALSE;
    int i;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][i];

        if (GetMonData(mon, MON_DATA_SPECIES_OR_EGG) == SPECIES_NONE)
            continue;

        switch (GetMonData(mon, MON_DATA_SPECIES))
        {
        case SPECIES_SOLROCK:
            hasSolrock = TRUE;
            break;
        case SPECIES_LUNATONE:
            hasLunatone = TRUE;
            break;
        }
    }

    gSpecialVar_Result = hasSolrock && hasLunatone;
}