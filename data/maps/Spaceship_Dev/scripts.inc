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
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 177 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 191 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 199 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 200 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
# 167 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
# 175 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
# 189 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 192 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
# 196 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGNEZONE
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 212 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 231 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 222 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 223 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 239 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 240 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 252 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 271 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 273 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 247 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 248 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 257 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 258 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 259 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 262 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 263 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 264 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 265 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 266 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 267 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 268 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 278 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 279 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 285 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 291 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 298 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 299 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 302 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 282 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 283 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 287 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 288 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 289 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 293 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 294 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 295 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 307 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 308 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 309 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 310 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 312 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 314 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 318 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 319 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 321 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 322 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 329 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 330 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 338 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 339 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 354 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 372 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 373 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 374 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 324 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 325 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 326 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 378 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 379 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 332 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 333 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 334 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 341 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 347 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 348 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 349 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 351 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 356 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 357 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 358 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 364 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 365 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 366 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 367 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 342 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 343 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 344 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 361 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 384 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 385 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 386 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 387 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 392 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 393 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 394 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BLISSEY
# 395 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 396 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 397 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 398 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 399 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 400 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 401 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BLISSEY
# 402 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 403 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 404 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Cryogonal::
# 409 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 410 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 411 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CRYOGONAL
# 412 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 413 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_CRYOGONAL, CRY_MODE_ENCOUNTER
# 414 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Cryogonal_Text_0
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 417 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 418 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 419 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_CRYOGONAL
# 420 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 421 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 426 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 427 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 428 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BELLOSSUM
# 429 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 430 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 431 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 432 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 433 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 434 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 435 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BELLOSSOM
# 436 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 437 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Bellossom_2
Bellossom_1:
# 467 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Bellossom_2:
# 438 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 439 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 440 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_1
# 441 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 442 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 443 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 444 "data/maps/Spaceship_Dev/scripts.pory"
	randomelement ITEM_ADAMANT_MINT, ITEM_BOLD_MINT, ITEM_BRAVE_MINT, ITEM_CALM_MINT, ITEM_CAREFUL_MINT, ITEM_HASTY_MINT, ITEM_IMPISH_MINT, ITEM_JOLLY_MINT, ITEM_LAX_MINT, ITEM_MODEST_MINT, ITEM_NAIVE_MINT, ITEM_NAUGHTY_MINT, ITEM_QUIET_MINT, ITEM_RASH_MINT, ITEM_RELAXED_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT, ITEM_TIMID_MINT, ITEM_LUM_BERRY, ITEM_SITRUS_BERRY
# 464 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem VAR_RESULT
# 465 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_TEMP_6
	goto Bellossom_1


Boxes::
# 472 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 473 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 475 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 476 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 478 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 479 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 484 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 485 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 486 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 487 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 488 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 491 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 492 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Electronics::
# 497 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 498 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 499 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 500 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 501 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Electronics_Text_0
# 503 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 504 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Suit::
# 509 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 510 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 511 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 512 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 513 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Suit_Text_0
# 515 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 516 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 521 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 522 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 523 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 524 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 525 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 526 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 527 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 528 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 529 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 530 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 539 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 540 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 532 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 533 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 534 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 535 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 536 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 546 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 550 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 552 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 553 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 554 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 555 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 559 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 560 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 547 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 548 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 546 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_9
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 546 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_8:
# 546 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_9:
# 546 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, IsPlayerReadyToGo_8
	goto IsPlayerReadyToGo_3


EventScript_MapsItem::
# 566 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 568 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_01
# 569 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 570 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_0, MSGBOX_YESNO
# 571 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 572 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_2
# 577 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_02
# 578 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 579 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_1, MSGBOX_YESNO
# 580 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 581 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_5
# 586 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_03
# 587 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 588 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_2, MSGBOX_YESNO
# 589 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 590 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_8
# 595 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_04
# 596 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 597 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_3
# 598 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 599 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 601 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_2:
# 573 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_5:
# 582 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_8:
# 591 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


# 41 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_0:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	face_right
	step_end

# 551 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	walk_down
	step_end

start_ship_intro_Text_0:
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Woah! Rough landing!$"

start_ship_intro_Text_1:
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	.string "What the heck?! I can't get off the\n"
	.string "ground! It's like something is holding\l"
	.string "us down, I've never seen anything like\l"
	.string "this before.$"

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
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} that can\n"
	.string "refill your Oxygen System at any time.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokémon inside is \l"
	.string "released.\p"
	.string "Tip: You can even release Pokémon\n"
	.string "during a battle to free up a ball!$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokémon while allowing you\l"
	.string "to escape the confrontation unharmed.\p"
	.string "Faster Pokémon are harder to scan.\n"
	.string "Paralyzing them can make it easier.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and will trigger\l"
	.string "automatically in emergencies.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 192 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's crafting\l"
	.string "machine, provided you have sufficient\l"
	.string "Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Magnezone, I choose you, buddy!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 231 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 263 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 271 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 287 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 293 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 298 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 314 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 324 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 342 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 351 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 372 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 385 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 397 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Cryogonal_Text_0:
# 414 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Guess you'll have to put the team in\n"
	.string "cryosleep some other time, pal.$"

Bellossom_Text_0:
# 431 "data/maps/Spaceship_Dev/scripts.pory"
	.string "How's it going, Bellossom?$"

Bellossom_Text_1:
# 440 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Oh? You have a gift for me!$"

Boxes_Text_0:
# 476 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 488 "data/maps/Spaceship_Dev/scripts.pory"
	.string "My high-tech space bed; makes sure my\n"
	.string "vitals are good during cryosleep and\l"
	.string "ensures I'm woken up for emergencies.$"

Electronics_Text_0:
# 501 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Just a bunch of electronics. I barely\n"
	.string "know what any of them actually do.$"

Suit_Text_0:
# 513 "data/maps/Spaceship_Dev/scripts.pory"
	.string "A spare company spacesuit. Let's hope \n"
	.string "I wont need it.$"

JirachiOnShip_Text_0:
# 526 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 539 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 555 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I really should review the Operations\n"
	.string "Manual too.$"

EventScript_MapsItem_Text_0:
# 570 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Twilight Plateau.\pView the next map?$"

EventScript_MapsItem_Text_1:
# 579 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Forest.\pView the next map?$"

EventScript_MapsItem_Text_2:
# 588 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Shoreline.\pView the next map?$"

EventScript_MapsItem_Text_3:
# 597 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Misty Mountains.$"
