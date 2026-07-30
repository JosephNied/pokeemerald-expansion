#ifndef GUARD_MUGSHOT_H
#define GUARD_MUGSHOT_H

void DrawMugshot(void); //VAR_0x8000 = mugshot id
void DrawMugshotAtPos(void); //VAR_0x8000 = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearMugshot(void);

void DrawO2Meter(void); //VAR_0x8003 = meter id
void ClearO2Meter(void);
void EnableO2Meter(void);
void DisableO2Meter(void);
void RefreshO2Meter(void);
void RefreshO2MeterGrass(void);
bool8 IsO2MeterEnabled(void);

#endif