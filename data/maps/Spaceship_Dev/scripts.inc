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
# 80 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

start_ship_intro_2:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, start_ship_intro_Movement_0
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8004, 2
# 43 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8005, 1
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8006, 12
# 45 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8007, 5
# 46 "data/maps/Spaceship_Dev/scripts.pory"
	special ShakeCamera
# 47 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 48 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_0
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8004, 1
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8005, 1
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8006, 8
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8007, 5
# 54 "data/maps/Spaceship_Dev/scripts.pory"
	special ShakeCamera
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 56 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 58 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, start_ship_intro_Movement_1
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 63 "data/maps/Spaceship_Dev/scripts.pory"
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
# 75 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
	goto start_ship_intro_1


refill_air_canister::
# 85 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ROTOM
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_0
# 92 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 93 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_ROTOM
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_SUPER_REPEL, 1
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq refill_air_canister_2
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_1
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
refill_air_canister_1:
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

refill_air_canister_2:
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 99 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, VAR_STARDUST_COUNT
	goto refill_air_canister_1


Spaceship_Dev_EventScript_BallItem01::
# 114 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 115 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 10
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
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
	release
	end


Spaceship_Dev_EventScript_OxygenGet::
# 135 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 7
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_BallGet::
# 144 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 145 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_DOLL
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 8
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 155 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 161 "data/maps/Spaceship_Dev/scripts.pory"
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
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 201 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 202 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 203 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 162 "data/maps/Spaceship_Dev/scripts.pory"
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
# 192 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 195 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
# 199 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGNEZONE
# 212 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 236 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 237 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 222 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 223 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 231 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 264 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 274 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 276 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 247 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 248 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 251 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 252 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 257 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 258 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 259 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 260 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 262 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 265 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 266 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 267 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 268 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 269 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 270 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 271 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 282 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 288 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 294 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 302 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 305 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 284 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 285 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 286 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 290 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 291 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 292 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 296 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 297 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 298 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 310 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 312 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 314 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 315 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 316 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 317 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 321 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 322 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 324 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 325 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 332 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 333 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 341 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 342 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 357 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 375 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 376 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 377 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 327 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 328 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 329 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 381 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 382 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 335 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 336 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 337 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 344 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 351 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 352 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 353 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 354 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 361 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 367 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 368 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 369 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 370 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 345 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 346 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 347 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 362 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 363 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 364 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 387 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 388 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 389 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 390 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 395 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 396 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 397 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BLISSEY
# 398 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 399 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 400 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 401 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 402 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 403 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 404 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BLISSEY
# 405 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 406 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 407 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Blissey_Bed_Movement_0
# 408 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 409 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Cryogonal::
# 414 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 415 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CRYOGONAL
# 417 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 418 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_CRYOGONAL, CRY_MODE_ENCOUNTER
# 419 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Cryogonal_Text_0
# 421 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 422 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 423 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 424 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_CRYOGONAL
# 425 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 426 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 431 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 432 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 433 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BELLOSSUM
# 434 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 435 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 436 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 437 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 438 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 439 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 440 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BELLOSSOM
# 441 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 442 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Bellossom_2
Bellossom_1:
# 472 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Bellossom_2:
# 443 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 444 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 445 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_1
# 446 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 447 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 448 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 449 "data/maps/Spaceship_Dev/scripts.pory"
	randomelement ITEM_ADAMANT_MINT, ITEM_BOLD_MINT, ITEM_BRAVE_MINT, ITEM_CALM_MINT, ITEM_CAREFUL_MINT, ITEM_HASTY_MINT, ITEM_IMPISH_MINT, ITEM_JOLLY_MINT, ITEM_LAX_MINT, ITEM_MODEST_MINT, ITEM_NAIVE_MINT, ITEM_NAUGHTY_MINT, ITEM_QUIET_MINT, ITEM_RASH_MINT, ITEM_RELAXED_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT, ITEM_TIMID_MINT, ITEM_LUM_BERRY, ITEM_SITRUS_BERRY
# 469 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem VAR_RESULT
# 470 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_TEMP_6
	goto Bellossom_1


Boxes::
# 477 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 478 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 479 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 480 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 481 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 483 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 484 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 489 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 490 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 491 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 492 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 493 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 496 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 497 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Electronics::
# 502 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 503 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 504 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 505 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 506 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Electronics_Text_0
# 508 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 509 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Suit::
# 514 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 515 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 516 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 517 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 518 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Suit_Text_0
# 520 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 521 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 526 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 527 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 528 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 529 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 530 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 531 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 532 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 533 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 534 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 535 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 544 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 537 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 538 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 539 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 540 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 541 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 555 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 556 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 557 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 558 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 559 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 560 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 564 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 565 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 552 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 553 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_9
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_8:
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_9:
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, IsPlayerReadyToGo_8
	goto IsPlayerReadyToGo_3


EventScript_MapsItem::
# 571 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 573 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_01
# 574 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 575 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_0, MSGBOX_YESNO
# 576 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 577 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_2
# 582 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_02
# 583 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 584 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_1, MSGBOX_YESNO
# 585 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 586 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_5
# 591 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_03
# 592 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 593 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_2, MSGBOX_YESNO
# 594 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 595 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_8
# 600 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_04
# 601 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 602 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_3
# 603 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 604 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 606 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_2:
# 578 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_5:
# 587 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_8:
# 596 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


maincomputer::
# 611 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 612 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 613 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 614 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox maincomputer_Text_0
# 616 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 617 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 618 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 619 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


# 41 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_0:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	face_right
	step_end

# 59 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_1:
# 59 "data/maps/Spaceship_Dev/scripts.pory"
	emote_question_mark
	step_end

# 407 "data/maps/Spaceship_Dev/scripts.pory"
Blissey_Bed_Movement_0:
# 407 "data/maps/Spaceship_Dev/scripts.pory"
	face_down
	step_end

# 556 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 556 "data/maps/Spaceship_Dev/scripts.pory"
	walk_down
	step_end

start_ship_intro_Text_0:
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Woah! Rough landing!$"

start_ship_intro_Text_1:
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	.string "What the heck?! I can't get off the\n"
	.string "ground!\p"
	.string "It's like something is holding us down.$"

start_ship_intro_Text_2:
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I guess I have to go check it out...\n"
	.string "This is a totally unknown planet.\l"
	.string "I better prepare.$"

refill_air_canister_Text_0:
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Rotom wants to refill my empty air \n"
	.string "canisters!$"

refill_air_canister_Text_1:
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I don't have any empty canisters to\n"
	.string "refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Operations Manual: What would you like\n"
	.string "to learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.\p"
	.string "You can craft reusable {COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "that can refill your Oxygen System to\l"
	.string "full at any time.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokémon inside is \l"
	.string "released.\p"
	.string "Tip: You can even release Pokémon\n"
	.string "during a battle to free up a ball!$"

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
	.string "back to the ship anytime, and will also\l"
	.string "trigger automatically if you run out of\l"
	.string "Oxygen.\p"
	.string "Tip: Register it in your key items!$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 195 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's crafting\l"
	.string "machine, provided you have sufficient\l"
	.string "Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Magnezone, I choose you, buddy!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 248 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 257 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 266 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 274 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 284 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 290 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 296 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 317 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 327 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 345 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 354 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 375 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 388 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 400 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Cryogonal_Text_0:
# 419 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Guess you'll have to put the team in\n"
	.string "cryosleep some other time, pal.$"

Bellossom_Text_0:
# 436 "data/maps/Spaceship_Dev/scripts.pory"
	.string "How's it going, Bellossom?$"

Bellossom_Text_1:
# 445 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Oh? You have a gift for me!$"

Boxes_Text_0:
# 481 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 493 "data/maps/Spaceship_Dev/scripts.pory"
	.string "My high-tech space bed; makes sure my\n"
	.string "vitals are good during cryosleep and\l"
	.string "ensures I'm woken up for emergencies.$"

Electronics_Text_0:
# 506 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Just a bunch of electronics. I barely\n"
	.string "know what any of them actually do.$"

Suit_Text_0:
# 518 "data/maps/Spaceship_Dev/scripts.pory"
	.string "A spare company spacesuit. Let's hope \n"
	.string "I wont need it.$"

JirachiOnShip_Text_0:
# 531 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 544 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 560 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I really should review the Operations\n"
	.string "Manual too.$"

EventScript_MapsItem_Text_0:
# 575 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Twilight Plateau.\pView the next map?$"

EventScript_MapsItem_Text_1:
# 584 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Forest.\pView the next map?$"

EventScript_MapsItem_Text_2:
# 593 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Shoreline.\pView the next map?$"

EventScript_MapsItem_Text_3:
# 602 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Misty Mountains.$"

maincomputer_Text_0:
# 614 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The ship's computer isn't reporting an\n"
	.string "issue, but I can't lift off!$"
