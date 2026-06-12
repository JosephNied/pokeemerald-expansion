#include "global.h"
#include "event_data.h"
#include "random.h"

static const u16 sRandomFlags[] =
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

void SetRandomFlags(void)
{
    u16 flags[ARRAY_COUNT(sRandomFlags)];
    int i;

    memcpy(flags, sRandomFlags, sizeof(flags));

    // Fisher-Yates shuffle
    for (i = ARRAY_COUNT(flags) - 1; i > 0; i--)
    {
        int j = Random() % (i + 1);

        u16 temp = flags[i];
        flags[i] = flags[j];
        flags[j] = temp;
    }

    // Set first 6
    for (i = 0; i < 6; i++)
        FlagSet(flags[i]);
}