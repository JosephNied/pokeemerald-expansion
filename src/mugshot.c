#include "global.h"
#include "blit.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "event_data.h"
#include "constants/mugshots.h"

#define MUGSHOT_PALETTE_NUM 13

struct Mugshot{
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

static const u32 sMugshotImg_PLAYER_OK[] = INCBIN_U32("graphics/mugshots/player_ok.4bpp.lz");
static const u16 sMugshotPal_PLAYER_OK[] = INCBIN_U16("graphics/mugshots/player_pal.gbapal");
static const u32 sMugshotImg_PLAYER_DETERMINED[] = INCBIN_U32("graphics/mugshots/player_determined.4bpp.lz");
static const u16 sMugshotPal_PLAYER_DETERMINED[] = INCBIN_U16("graphics/mugshots/player_pal.gbapal");
static const u32 sMugshotImg_PLAYER_SHOCK[] = INCBIN_U32("graphics/mugshots/player_shock.4bpp.lz");
static const u16 sMugshotPal_PLAYER_SHOCK[] = INCBIN_U16("graphics/mugshots/player_pal.gbapal");
static const u32 sMugshotImg_PLAYER_CONFUSED[] = INCBIN_U32("graphics/mugshots/player_confused.4bpp.lz");
static const u16 sMugshotPal_PLAYER_CONFUSED[] = INCBIN_U16("graphics/mugshots/player_pal.gbapal");

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


static const struct Mugshot sMugshots[] = {
    //ADD YOUR MUGSHOTS HERE
    [MUGSHOT_PLAYER_OK] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_PLAYER_OK, .palette = sMugshotPal_PLAYER_OK},
    [MUGSHOT_PLAYER_DETERMINED] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_PLAYER_DETERMINED, .palette = sMugshotPal_PLAYER_DETERMINED},
    [MUGSHOT_PLAYER_SHOCK] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_PLAYER_SHOCK, .palette = sMugshotPal_PLAYER_SHOCK},
    [MUGSHOT_PLAYER_CONFUSED] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_PLAYER_CONFUSED, .palette = sMugshotPal_PLAYER_CONFUSED},
    [MUGSHOT_BLISSEY] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_BLISSEY, .palette = sMugshotPal_BLISSEY},
    [MUGSHOT_BELLOSSUM] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_BELLOSSUM, .palette = sMugshotPal_BELLOSSUM},
    [MUGSHOT_ROTOM] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_ROTOM, .palette = sMugshotPal_ROTOM},
    [MUGSHOT_MAGNEZONE] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_MAGNEZONE, .palette = sMugshotPal_MAGNEZONE},
    [MUGSHOT_JIRACHI_WORRIED] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_JIRACHI_WORRIED, .palette = sMugshotPal_JIRACHI_WORRIED},
    [MUGSHOT_JIRACHI_OK] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_JIRACHI_OK, .palette = sMugshotPal_JIRACHI_OK},
    [MUGSHOT_JIRACHI_HAPPY] = {.x = 1, .y = 9, .width = 40, .height = 40, .image = sMugshotImg_JIRACHI_HAPPY, .palette = sMugshotPal_JIRACHI_HAPPY},
};


//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;

void ClearMugshot(void){
    if(sMugshotWindow != 0){
        ClearStdWindowAndFrameToTransparent(sMugshotWindow - 1, 0);
        CopyWindowToVram(sMugshotWindow - 1, 3);
        RemoveWindow(sMugshotWindow - 1);
        sMugshotWindow = 0;
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
    DrawMugshotCore(mugshot, mugshot->x, mugshot->y);
}

void DrawMugshotAtPos(void){
    DrawMugshotCore(sMugshots + VarGet(VAR_0x8000), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}