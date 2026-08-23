#include "global.h"
#include "blit.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "event_data.h"
#include "constants/mugshots.h"

#define MUGSHOT_PALETTE_NUM 13
#define METER_PALETTE_NUM 13

struct Mugshot{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

struct Meter{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

void DrawMugshot(void); //VAR_0x8000 = mugshot id
void DrawMugshotAtPos(void); //VAR_0x8000 = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearMugshot(void);

void DrawO2Meter(void); //VAR_0x8003 = meter id
void ClearO2Meter(void);
void EnableO2Meter(void);
void DisableO2Meter(void);
void RefreshO2Meter(void);
void RefreshO2MeterGrass(void);

bool8 sO2MeterEnabled = FALSE;

u16 GetAirTimer(void);

static const u32 sMugshotImg_PLAYER_OK[] = INCBIN_U32("graphics/mugshots/player_ok.4bpp.lz");
static const u16 sMugshotPal_PLAYER_OK[] = INCBIN_U16("graphics/mugshots/player_pal.gbapal");
static const u32 sMugshotImg_PLAYER_DETERMINED[] = INCBIN_U32("graphics/mugshots/player_determined.4bpp.lz");
static const u16 sMugshotPal_PLAYER_DETERMINED[] = INCBIN_U16("graphics/mugshots/player_pal.gbapal");
static const u32 sMugshotImg_PLAYER_SHOCK[] = INCBIN_U32("graphics/mugshots/player_shock.4bpp.lz");
static const u16 sMugshotPal_PLAYER_SHOCK[] = INCBIN_U16("graphics/mugshots/player_pal.gbapal");
static const u32 sMugshotImg_PLAYER_CONFUSED[] = INCBIN_U32("graphics/mugshots/player_confused.4bpp.lz");
static const u16 sMugshotPal_PLAYER_CONFUSED[] = INCBIN_U16("graphics/mugshots/player_pal.gbapal");

static const u32 sMugshotImg_UNKNOWN[] = INCBIN_U32("graphics/mugshots/unknown.4bpp.lz");

static const u32 sMugshotImg_CAPTAIN_SAD[] = INCBIN_U32("graphics/mugshots/captain_sad.4bpp.lz");
static const u16 sMugshotPal_CAPTAIN_SAD[] = INCBIN_U16("graphics/mugshots/captain_sad.gbapal");

static const u32 sMugshotImg_BLISSEY[] = INCBIN_U32("graphics/mugshots/Blissey.4bpp.lz");
static const u16 sMugshotPal_BLISSEY[] = INCBIN_U16("graphics/mugshots/Blissey.gbapal");

static const u32 sMugshotImg_BELLOSSUM[] = INCBIN_U32("graphics/mugshots/Bellossum.4bpp.lz");
static const u16 sMugshotPal_BELLOSSUM[] = INCBIN_U16("graphics/mugshots/Bellossum.gbapal");

static const u32 sMugshotImg_ROTOM[] = INCBIN_U32("graphics/mugshots/Rotom.4bpp.lz");
static const u16 sMugshotPal_ROTOM[] = INCBIN_U16("graphics/mugshots/Rotom.gbapal");

static const u32 sMugshotImg_MAGNEZONE[] = INCBIN_U32("graphics/mugshots/Magnezone.4bpp.lz");
static const u16 sMugshotPal_MAGNEZONE[] = INCBIN_U16("graphics/mugshots/Magnezone.gbapal");

static const u32 sMugshotImg_JIRACHI_WORRIED[] = INCBIN_U32("graphics/mugshots/Jirachi_worried.4bpp.lz");
static const u16 sMugshotPal_JIRACHI_WORRIED[] = INCBIN_U16("graphics/mugshots/Jirachi_worried.gbapal");

static const u32 sMugshotImg_JIRACHI_OK[] = INCBIN_U32("graphics/mugshots/Jirachi_ok.4bpp.lz");
static const u16 sMugshotPal_JIRACHI_OK[] = INCBIN_U16("graphics/mugshots/Jirachi_ok.gbapal");

static const u32 sMugshotImg_JIRACHI_HAPPY[] = INCBIN_U32("graphics/mugshots/Jirachi_happy.4bpp.lz");
static const u16 sMugshotPal_JIRACHI_HAPPY[] = INCBIN_U16("graphics/mugshots/Jirachi_happy.gbapal");

static const u32 sMugshotImg_DITTO[] = INCBIN_U32("graphics/mugshots/Ditto.4bpp.lz");
static const u16 sMugshotPal_DITTO[] = INCBIN_U16("graphics/mugshots/Ditto.gbapal");

static const u32 sMugshotImg_MAP_01[] = INCBIN_U32("graphics/mugshots/map01.4bpp.lz");
static const u32 sMugshotImg_MAP_02[] = INCBIN_U32("graphics/mugshots/map02.4bpp.lz");
static const u32 sMugshotImg_MAP_03[] = INCBIN_U32("graphics/mugshots/map03.4bpp.lz");
static const u32 sMugshotImg_MAP_04[] = INCBIN_U32("graphics/mugshots/map04.4bpp.lz");
static const u16 sMugshotPal_MAPS[] = INCBIN_U16("graphics/mugshots/maps.gbapal");

static const u32 sMeterImg_METER_O2_1[] = INCBIN_U32("graphics/mugshots/O2_1.4bpp.lz");
static const u32 sMeterImg_METER_O2_2[] = INCBIN_U32("graphics/mugshots/O2_2.4bpp.lz");
static const u32 sMeterImg_METER_O2_3[] = INCBIN_U32("graphics/mugshots/O2_3.4bpp.lz");
static const u32 sMeterImg_METER_O2_4[] = INCBIN_U32("graphics/mugshots/O2_4.4bpp.lz");
static const u32 sMeterImg_METER_O2_5[] = INCBIN_U32("graphics/mugshots/O2_5.4bpp.lz");
static const u32 sMeterImg_METER_O2_6[] = INCBIN_U32("graphics/mugshots/O2_6.4bpp.lz");
static const u16 sMeterPal_METER_O2[] = INCBIN_U16("graphics/mugshots/health.gbapal");

static const u32 sMeterImg_METER_O2_GRASS1[] = INCBIN_U32("graphics/mugshots/O2_grass1.4bpp.lz");
static const u32 sMeterImg_METER_O2_GRASS2[] = INCBIN_U32("graphics/mugshots/O2_grass2.4bpp.lz");
static const u32 sMeterImg_METER_O2_GRASS3[] = INCBIN_U32("graphics/mugshots/O2_grass3.4bpp.lz");
static const u32 sMeterImg_METER_O2_GRASS4[] = INCBIN_U32("graphics/mugshots/O2_grass4.4bpp.lz");
static const u32 sMeterImg_METER_O2_GRASS5[] = INCBIN_U32("graphics/mugshots/O2_grass5.4bpp.lz");
static const u32 sMeterImg_METER_O2_GRASS6[] = INCBIN_U32("graphics/mugshots/O2_grass6.4bpp.lz");
static const u16 sMeterPal_METER_O2_GRASS[] = INCBIN_U16("graphics/mugshots/healthgrass.gbapal");

static const struct Mugshot sMugshots[] = {
    //ADD YOUR MUGSHOTS HERE
    [MUGSHOT_PLAYER_OK] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_PLAYER_OK, .palette = sMugshotPal_PLAYER_OK},
    [MUGSHOT_PLAYER_DETERMINED] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_PLAYER_DETERMINED, .palette = sMugshotPal_PLAYER_DETERMINED},
    [MUGSHOT_PLAYER_SHOCK] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_PLAYER_SHOCK, .palette = sMugshotPal_PLAYER_SHOCK},
    [MUGSHOT_PLAYER_CONFUSED] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_PLAYER_CONFUSED, .palette = sMugshotPal_PLAYER_CONFUSED},
    [MUGSHOT_UNKNOWN] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_UNKNOWN, .palette = sMugshotPal_PLAYER_OK},
    [MUGSHOT_CAPTAIN_SAD] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_CAPTAIN_SAD, .palette = sMugshotPal_CAPTAIN_SAD},
    [MUGSHOT_BLISSEY] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_BLISSEY, .palette = sMugshotPal_BLISSEY},
    [MUGSHOT_BELLOSSUM] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_BELLOSSUM, .palette = sMugshotPal_BELLOSSUM},
    [MUGSHOT_ROTOM] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_ROTOM, .palette = sMugshotPal_ROTOM},
    [MUGSHOT_MAGNEZONE] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_MAGNEZONE, .palette = sMugshotPal_MAGNEZONE},
    [MUGSHOT_JIRACHI_WORRIED] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_JIRACHI_WORRIED, .palette = sMugshotPal_JIRACHI_WORRIED},
    [MUGSHOT_JIRACHI_OK] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_JIRACHI_OK, .palette = sMugshotPal_JIRACHI_OK},
    [MUGSHOT_JIRACHI_HAPPY] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_JIRACHI_HAPPY, .palette = sMugshotPal_JIRACHI_HAPPY},
    [MUGSHOT_DITTO] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_DITTO, .palette = sMugshotPal_DITTO},

    [MUGSHOT_MAP_01] = {.x = 9, .y = 2, .width = 96, .height = 96, .image = sMugshotImg_MAP_01, .palette = sMugshotPal_MAPS},
    [MUGSHOT_MAP_02] = {.x = 9, .y = 2, .width = 96, .height = 96, .image = sMugshotImg_MAP_02, .palette = sMugshotPal_MAPS},
    [MUGSHOT_MAP_03] = {.x = 9, .y = 2, .width = 96, .height = 96, .image = sMugshotImg_MAP_03, .palette = sMugshotPal_MAPS},
    [MUGSHOT_MAP_04] = {.x = 9, .y = 2, .width = 96, .height = 96, .image = sMugshotImg_MAP_04, .palette = sMugshotPal_MAPS},

};

static const struct Meter sMeters[] = {
    [METER_O2_1] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_1, .palette = sMeterPal_METER_O2},
    [METER_O2_2] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_2, .palette = sMeterPal_METER_O2},
    [METER_O2_3] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_3, .palette = sMeterPal_METER_O2},
    [METER_O2_4] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_4, .palette = sMeterPal_METER_O2},
    [METER_O2_5] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_5, .palette = sMeterPal_METER_O2},
    [METER_O2_6] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_6, .palette = sMeterPal_METER_O2},

    [METER_O2_GRASS1] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_GRASS1, .palette = sMeterPal_METER_O2_GRASS},
    [METER_O2_GRASS2] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_GRASS2, .palette = sMeterPal_METER_O2_GRASS},
    [METER_O2_GRASS3] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_GRASS3, .palette = sMeterPal_METER_O2_GRASS},
    [METER_O2_GRASS4] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_GRASS4, .palette = sMeterPal_METER_O2_GRASS},
    [METER_O2_GRASS5] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_GRASS5, .palette = sMeterPal_METER_O2_GRASS},
    [METER_O2_GRASS6] = {.x = 21, .y = 2, .width = 64, .height = 16, .image = sMeterImg_METER_O2_GRASS6, .palette = sMeterPal_METER_O2_GRASS},
};

//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;
static EWRAM_DATA u8 sMeterWindow = 0;
static EWRAM_DATA u8 sCurrentO2Meter = 0;

//meters

static void DrawO2MeterCore(const struct Meter* const meter, int x, int y){
    struct WindowTemplate t;
    u16 windowId;
    
    if(sMeterWindow != 0){
        ClearO2Meter();
    }
    
    #if GAME_VERSION==VERSION_EMERALD
    SetWindowTemplateFields(&t, 0, x, y, meter->width/8, meter->height/8, METER_PALETTE_NUM, 0x40);
    #else
    t = SetWindowTemplateFields(0, x, y, meter->width/8, meter->height/8, METER_PALETTE_NUM, 0x40);
    #endif
    windowId = AddWindow(&t);
    sMeterWindow = windowId + 1;
    
    LoadPalette(meter->palette, 16 * METER_PALETTE_NUM, 32);
    CopyToWindowPixelBuffer(windowId, (const void*)meter->image, 0, 0);
    PutWindowRectTilemap(windowId, 0, 0, meter->width/8, meter->height/8);
    CopyWindowToVram(windowId, 3);
}

void DrawO2Meter(void){
    //sCurrentO2Meter = VarGet(VAR_0x8003);
    //const struct Meter* const meter = sMeters + sCurrentO2Meter;
    //DrawO2MeterCore(meter, meter->x, meter->y);
    RefreshO2Meter();
}

void ClearO2Meter(void){
    if(sMeterWindow != 0){
        ClearStdWindowAndFrameToTransparent(sMeterWindow - 1, 0);
        CopyWindowToVram(sMeterWindow - 1, 3);
        RemoveWindow(sMeterWindow - 1);
        sMeterWindow = 0;
    }
}

void EnableO2Meter(void)
{
    sO2MeterEnabled = TRUE;
    DrawO2Meter();
}

void DisableO2Meter(void)
{
    sO2MeterEnabled = FALSE;
    ClearO2Meter();
}

bool8 IsO2MeterEnabled(void)
{
    return sO2MeterEnabled;
}

void RefreshO2Meter(void)
{
    if (!sO2MeterEnabled)
        return;

    u16 steps = GetAirTimer();

    if (steps >= 210)
        sCurrentO2Meter = METER_O2_1;
    else if (steps >= 169)
        sCurrentO2Meter = METER_O2_2;
    else if (steps >= 127)
        sCurrentO2Meter = METER_O2_3;
    else if (steps >= 86)
        sCurrentO2Meter = METER_O2_4;
    else if (steps >= 45)
        sCurrentO2Meter = METER_O2_5;
    else
        sCurrentO2Meter = METER_O2_6;

    const struct Meter* const meter = sMeters + sCurrentO2Meter;
    DrawO2MeterCore(meter, meter->x, meter->y);
}

void RefreshO2MeterGrass(void)
{
    if (!sO2MeterEnabled)
        return;

    u16 steps = GetAirTimer();

    if (steps >= 210)
        sCurrentO2Meter = METER_O2_GRASS1;
    else if (steps >= 169)
        sCurrentO2Meter = METER_O2_GRASS2;
    else if (steps >= 127)
        sCurrentO2Meter = METER_O2_GRASS3;
    else if (steps >= 86)
        sCurrentO2Meter = METER_O2_GRASS4;
    else if (steps >= 45)
        sCurrentO2Meter = METER_O2_GRASS5;
    else
        sCurrentO2Meter = METER_O2_GRASS6;

    const struct Meter* const meter = sMeters + sCurrentO2Meter;
    DrawO2MeterCore(meter, meter->x, meter->y);
}

//mugshots

void ClearMugshot(void){
    if(sMugshotWindow != 0){
        ClearStdWindowAndFrameToTransparent(sMugshotWindow - 1, 0);
        CopyWindowToVram(sMugshotWindow - 1, 3);
        RemoveWindow(sMugshotWindow - 1);
        sMugshotWindow = 0;
    }
    if (sO2MeterEnabled == TRUE) {
        DrawO2Meter();
    }
}

static void DrawMugshotCore(const struct Mugshot* const mugshot, int x, int y){
    struct WindowTemplate t;
    u16 windowId;
    
    if(sMugshotWindow != 0){
        ClearMugshot();
    }
    
    #if GAME_VERSION==VERSION_EMERALD
    SetWindowTemplateFields(&t, 0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #else
    t = SetWindowTemplateFields(0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #endif
    windowId = AddWindow(&t);
    sMugshotWindow = windowId + 1;
    
    LoadPalette(mugshot->palette, 16 * MUGSHOT_PALETTE_NUM, 32);
    CopyToWindowPixelBuffer(windowId, (const void*)mugshot->image, 0, 0);
    PutWindowRectTilemap(windowId, 0, 0, mugshot->width/8, mugshot->height/8);
    CopyWindowToVram(windowId, 3);
}

void DrawMugshot(void){
    const struct Mugshot* const mugshot = sMugshots + VarGet(VAR_0x8000);
    if (sO2MeterEnabled == TRUE) {
        ClearO2Meter();
    }
    DrawMugshotCore(mugshot, mugshot->x, mugshot->y);
}

void DrawMugshotAtPos(void){
    DrawMugshotCore(sMugshots + VarGet(VAR_0x8000), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}