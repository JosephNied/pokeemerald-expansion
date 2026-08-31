Spaceship_Dev_MapScripts::
# 2 "data/maps/Spaceship_Dev/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Spaceship_Dev_Enter
# 3 "data/maps/Spaceship_Dev/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Spaceship_Dev_FrameTable
	.byte 0


Spaceship_Dev_Enter::
# 8 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 9 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x03C, Spaceship_Dev_Enter_2
Spaceship_Dev_Enter_1:
# 12 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLAYER_READY, 0
	goto_if_eq Spaceship_Dev_Enter_5
# 16 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
Spaceship_Dev_Enter_4:
# 18 "data/maps/Spaceship_Dev/scripts.pory"
	callnative StopAirTimer
# 19 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DisableO2Meter
# 22 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_DAILY_BLENDER, 0
# 23 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_TOWER_GOLD
# 24 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_DOME_SILVER
# 25 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_DOME_GOLD
# 26 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_PALACE_SILVER
# 27 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_PALACE_GOLD
	end

Spaceship_Dev_Enter_2:
# 10 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_RECEIVED_BELDUM
	goto Spaceship_Dev_Enter_1

Spaceship_Dev_Enter_5:
# 13 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 0
# 14 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Spaceship_Dev_Enter_4


# 31 "data/maps/Spaceship_Dev/scripts.pory"

# 32 "data/maps/Spaceship_Dev/scripts.pory"
Spaceship_Dev_FrameTable::
# 33 "data/maps/Spaceship_Dev/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, start_ship_intro
# 34 "data/maps/Spaceship_Dev/scripts.pory"
	.2byte 0

start_ship_intro::
# 38 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_1, 0
# 39 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 40 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_SYS_FRONTIER_PASS, start_ship_intro_2
start_ship_intro_1:
# 82 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

start_ship_intro_2:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, start_ship_intro_Movement_0
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 43 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8004, 1
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8005, 1
# 45 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8006, 8
# 46 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8007, 5
# 47 "data/maps/Spaceship_Dev/scripts.pory"
	special ShakeCamera
# 48 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_0
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8004, 1
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8005, 1
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8006, 8
# 54 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8007, 5
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	special ShakeCamera
# 56 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 58 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 59 "data/maps/Spaceship_Dev/scripts.pory"
	delay 30
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_1
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 68 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 69 "data/maps/Spaceship_Dev/scripts.pory"
	delay 10
# 70 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_2
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 79 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 80 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
	goto start_ship_intro_1


refill_air_canister::
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ROTOM
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 91 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 92 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_0
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_ROTOM
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_SUPER_REPEL, 1
# 99 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq refill_air_canister_2
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_1
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
refill_air_canister_1:
# 111 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

refill_air_canister_2:
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, VAR_STARDUST_COUNT
	goto refill_air_canister_1


Spaceship_Dev_EventScript_BallItem01::
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 123 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x046
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x047
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x048
# 128 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x049
# 129 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_ROSE
# 130 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_OxygenGet::
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 7
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_BallGet::
# 145 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_DOLL
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 8
# 149 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 200 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 201 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 202 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
# 168 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 179 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
# 184 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 187 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
# 191 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGNEZONE
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 212 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 235 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 236 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 222 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 223 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 263 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 273 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 275 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 247 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 248 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 251 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 252 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 257 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 258 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 259 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 260 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 264 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 265 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 266 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 267 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 268 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 269 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 270 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 280 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 287 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 293 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 300 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 304 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 283 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 284 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 285 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 289 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 290 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 291 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 295 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 296 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 297 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 309 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 310 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 312 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 314 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 315 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 316 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 320 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 321 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 323 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 324 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 331 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 332 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 340 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 341 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 356 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 374 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 375 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 376 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 326 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 327 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 328 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 380 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 381 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 334 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 335 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 336 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 343 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 349 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 351 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 352 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 353 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 358 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 366 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 367 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 368 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 369 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 344 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 345 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 346 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 361 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 362 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 363 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 386 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 387 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 388 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 389 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 394 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 395 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 396 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BLISSEY
# 397 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 398 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 399 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 400 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 401 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 402 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 403 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BLISSEY
# 404 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 405 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 406 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 411 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 412 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 413 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BELLOSSUM
# 414 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 415 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 417 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 418 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 419 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 420 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BELLOSSOM
# 421 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 422 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Bellossom_2
Bellossom_1:
# 453 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Bellossom_2:
# 423 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 424 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 425 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 426 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_1
# 427 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 428 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 429 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 430 "data/maps/Spaceship_Dev/scripts.pory"
	randomelement ITEM_ADAMANT_MINT, ITEM_BOLD_MINT, ITEM_BRAVE_MINT, ITEM_CALM_MINT, ITEM_CAREFUL_MINT, ITEM_HASTY_MINT, ITEM_IMPISH_MINT, ITEM_JOLLY_MINT, ITEM_LAX_MINT, ITEM_MODEST_MINT, ITEM_NAIVE_MINT, ITEM_NAUGHTY_MINT, ITEM_QUIET_MINT, ITEM_RASH_MINT, ITEM_RELAXED_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT, ITEM_TIMID_MINT, ITEM_LUM_BERRY, ITEM_SITRUS_BERRY
# 450 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem VAR_RESULT
# 451 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_TEMP_6
	goto Bellossom_1


Boxes::
# 458 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 459 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 460 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 461 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 462 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 464 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 465 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 470 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 471 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 472 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 473 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 476 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 477 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Electronics::
# 482 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 483 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 484 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 485 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 486 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Electronics_Text_0
# 488 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 489 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Suit::
# 494 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 495 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 496 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 497 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 498 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Suit_Text_0
# 500 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 501 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 506 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 507 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 508 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 509 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 510 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 511 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 512 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 513 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 514 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 515 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 524 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 525 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 517 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 518 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 519 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 520 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 521 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 531 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 535 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 536 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 537 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 538 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 539 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 540 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 544 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 532 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 533 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 531 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_9
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 531 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_8:
# 531 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_9:
# 531 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, IsPlayerReadyToGo_8
	goto IsPlayerReadyToGo_3


EventScript_MapsItem::
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 553 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_01
# 554 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 555 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_0, MSGBOX_YESNO
# 556 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 557 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_2
# 562 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_02
# 563 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 564 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_1, MSGBOX_YESNO
# 565 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 566 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_5
# 571 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_03
# 572 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 573 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_2, MSGBOX_YESNO
# 574 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 575 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_8
# 580 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_04
# 581 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 582 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_3
# 583 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 584 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 586 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_2:
# 558 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_5:
# 567 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_8:
# 576 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


# 41 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_0:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	face_right
	step_end

# 536 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 536 "data/maps/Spaceship_Dev/scripts.pory"
	walk_down
	step_end

start_ship_intro_Text_0:
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Woah! Rough landing!$"

start_ship_intro_Text_1:
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	.string "What the heck?! I can't get off the\n"
	.string "ground! It's as if something is holding\l"
	.string "us down, I've never seen anything like\l"
	.string "this before.$"

start_ship_intro_Text_2:
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I guess I have to go check it out...\n"
	.string "This is a totally unknown planet.\l"
	.string "I better prepare.\p"
	.string "I should take Magnezone and my tools;\n"
	.string "who knows what could be out there?$"

refill_air_canister_Text_0:
# 92 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Rotom wants to refill my empty air \n"
	.string "canisters!$"

refill_air_canister_Text_1:
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I don't have any empty canisters to\n"
	.string "refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Operations Manual: What would you like\n"
	.string "to learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.\p"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} that can\n"
	.string "refill your Oxygen System at any time.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokémon inside is \l"
	.string "released.\p"
	.string "Tip: You can even release Pokémon\n"
	.string "during a battle to fee up a ball!$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 179 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokémon while allowing you\l"
	.string "to escape the confrontation unharmed.\p"
	.string "Faster Pokémon are harder to scan.\n"
	.string "Paralyzing them can make it easier.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 187 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and also will \l"
	.string "automatically trigger in emergency \l"
	.string "situations.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's\l"
	.string "crafting machine, provided you have\l"
	.string "sufficient Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Let's go, buddy!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 247 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 265 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 273 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 283 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 289 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 295 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 300 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 316 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 326 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 344 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 353 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 374 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 387 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 399 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Bellossom_Text_0:
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	.string "How's it going, Bellossom?$"

Bellossom_Text_1:
# 426 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Oh? You have a gift for me!$"

Boxes_Text_0:
# 462 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	.string "This bed is designed to keep me in\n"
	.string "cryosleep, for especially long trips.$"

Electronics_Text_0:
# 486 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Just a bunch of electronics. I barely\n"
	.string "know what any of them actually do.$"

Suit_Text_0:
# 498 "data/maps/Spaceship_Dev/scripts.pory"
	.string "A spare company spacesuit. Let's hope \n"
	.string "it wont be necessary...$"

JirachiOnShip_Text_0:
# 511 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 524 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 540 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I really should review the Operations\n"
	.string "Manual too.$"

EventScript_MapsItem_Text_0:
# 555 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Twilight Plateau.\pView the next map?$"

EventScript_MapsItem_Text_1:
# 564 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Forest.\pView the next map?$"

EventScript_MapsItem_Text_2:
# 573 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Shoreline.\pView the next map?$"

EventScript_MapsItem_Text_3:
# 582 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Misty Mountains.$"
