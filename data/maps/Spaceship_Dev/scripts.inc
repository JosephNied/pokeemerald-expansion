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
# 79 "data/maps/Spaceship_Dev/scripts.pory"
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
# 65 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 68 "data/maps/Spaceship_Dev/scripts.pory"
	delay 10
# 69 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 70 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_2
# 74 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 75 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
	goto start_ship_intro_1


refill_air_canister::
# 84 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 85 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ROTOM
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_0
# 91 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 92 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 93 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_ROTOM
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_SUPER_REPEL, 1
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq refill_air_canister_2
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_1
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
refill_air_canister_1:
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

refill_air_canister_2:
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 99 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, VAR_STARDUST_COUNT
	goto refill_air_canister_1


Spaceship_Dev_EventScript_BallItem01::
# 113 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 114 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 115 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 10
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 123 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x046
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x047
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x048
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x049
# 128 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_ROSE
# 129 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_OxygenGet::
# 134 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 135 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 7
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_BallGet::
# 143 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 144 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 145 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_DOLL
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 8
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 155 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 168 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 184 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 190 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 199 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
# 174 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 177 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 191 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
# 195 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 204 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGNEZONE
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 212 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 232 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 222 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 223 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 238 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 239 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 240 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 251 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 260 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 270 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 272 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 247 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 248 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 252 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 257 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 258 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 262 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 263 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 264 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 265 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 266 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 267 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 277 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 278 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 284 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 290 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 297 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 298 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 280 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 282 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 286 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 287 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 288 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 292 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 293 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 294 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 306 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 307 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 308 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 309 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 310 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 312 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 317 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 318 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 320 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 321 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 328 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 329 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 337 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 338 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 353 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 371 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 372 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 373 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 323 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 324 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 325 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 377 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 378 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 331 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 332 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 333 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 340 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 346 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 347 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 348 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 349 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 355 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 356 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 357 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 363 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 364 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 365 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 366 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 341 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 342 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 343 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 358 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 383 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 384 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 385 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 386 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 391 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 392 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 393 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BLISSEY
# 394 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 395 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 396 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 397 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 398 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 399 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 400 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BLISSEY
# 401 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 402 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 403 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Cryogonal::
# 408 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 409 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 410 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CRYOGONAL
# 411 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 412 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_CRYOGONAL, CRY_MODE_ENCOUNTER
# 413 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Cryogonal_Text_0
# 415 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 417 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 418 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_CRYOGONAL
# 419 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 420 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 425 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 426 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 427 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BELLOSSUM
# 428 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 429 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 430 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 431 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 432 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 433 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 434 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BELLOSSOM
# 435 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 436 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Bellossom_2
Bellossom_1:
# 466 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Bellossom_2:
# 437 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 438 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 439 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_1
# 440 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 441 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 442 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 443 "data/maps/Spaceship_Dev/scripts.pory"
	randomelement ITEM_ADAMANT_MINT, ITEM_BOLD_MINT, ITEM_BRAVE_MINT, ITEM_CALM_MINT, ITEM_CAREFUL_MINT, ITEM_HASTY_MINT, ITEM_IMPISH_MINT, ITEM_JOLLY_MINT, ITEM_LAX_MINT, ITEM_MODEST_MINT, ITEM_NAIVE_MINT, ITEM_NAUGHTY_MINT, ITEM_QUIET_MINT, ITEM_RASH_MINT, ITEM_RELAXED_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT, ITEM_TIMID_MINT, ITEM_LUM_BERRY, ITEM_SITRUS_BERRY
# 463 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem VAR_RESULT
# 464 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_TEMP_6
	goto Bellossom_1


Boxes::
# 471 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 472 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 473 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 475 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 477 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 478 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 483 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 484 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 485 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 486 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 487 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 490 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 491 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Electronics::
# 496 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 497 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 498 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 499 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 500 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Electronics_Text_0
# 502 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 503 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Suit::
# 508 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 509 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 510 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 511 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 512 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Suit_Text_0
# 514 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 515 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 520 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 521 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 522 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 523 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 524 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 525 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 526 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 527 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 528 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 529 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 538 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 539 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 531 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 532 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 533 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 534 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 535 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 549 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 550 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 551 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 552 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 553 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 554 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 558 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 559 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 546 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 547 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_9
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_8:
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_9:
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, IsPlayerReadyToGo_8
	goto IsPlayerReadyToGo_3


EventScript_MapsItem::
# 565 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 567 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_01
# 568 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 569 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_0, MSGBOX_YESNO
# 570 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 571 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_2
# 576 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_02
# 577 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 578 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_1, MSGBOX_YESNO
# 579 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 580 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_5
# 585 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_03
# 586 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 587 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_2, MSGBOX_YESNO
# 588 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 589 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_8
# 594 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_04
# 595 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 596 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_3
# 597 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 598 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 600 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_2:
# 572 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_5:
# 581 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_8:
# 590 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


maincomputer::
# 605 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 606 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 607 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 608 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox maincomputer_Text_0
# 610 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 611 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 612 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 613 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


# 41 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_0:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	face_right
	step_end

# 550 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 550 "data/maps/Spaceship_Dev/scripts.pory"
	walk_down
	step_end

start_ship_intro_Text_0:
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Woah! Rough landing!$"

start_ship_intro_Text_1:
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	.string "What the heck?! I can't get off the\n"
	.string "ground! It's like something is holding\l"
	.string "us down.$"

start_ship_intro_Text_2:
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I guess I have to go check it out...\n"
	.string "This is a totally unknown planet.\l"
	.string "I better prepare.$"

refill_air_canister_Text_0:
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Rotom wants to refill my empty air \n"
	.string "canisters!$"

refill_air_canister_Text_1:
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I don't have any empty canisters to\n"
	.string "refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Operations Manual: What would you like\n"
	.string "to learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.\p"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} that can\n"
	.string "refill your Oxygen System at any time.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokémon inside is \l"
	.string "released.\p"
	.string "Tip: You can even release Pokémon\n"
	.string "during a battle to free up a ball!$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 177 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokémon while allowing you\l"
	.string "to escape the confrontation unharmed.\p"
	.string "Faster Pokémon are harder to scan.\n"
	.string "Paralyzing them can make it easier.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and will trigger\l"
	.string "automatically in emergencies.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 191 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's crafting\l"
	.string "machine, provided you have sufficient\l"
	.string "Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Magnezone, I choose you, buddy!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 240 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 262 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 270 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 280 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 286 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 292 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 297 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 323 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 341 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 371 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 384 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 396 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Cryogonal_Text_0:
# 413 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Guess you'll have to put the team in\n"
	.string "cryosleep some other time, pal.$"

Bellossom_Text_0:
# 430 "data/maps/Spaceship_Dev/scripts.pory"
	.string "How's it going, Bellossom?$"

Bellossom_Text_1:
# 439 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Oh? You have a gift for me!$"

Boxes_Text_0:
# 475 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 487 "data/maps/Spaceship_Dev/scripts.pory"
	.string "My high-tech space bed; makes sure my\n"
	.string "vitals are good during cryosleep and\l"
	.string "ensures I'm woken up for emergencies.$"

Electronics_Text_0:
# 500 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Just a bunch of electronics. I barely\n"
	.string "know what any of them actually do.$"

Suit_Text_0:
# 512 "data/maps/Spaceship_Dev/scripts.pory"
	.string "A spare company spacesuit. Let's hope \n"
	.string "I wont need it.$"

JirachiOnShip_Text_0:
# 525 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 538 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 554 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I really should review the Operations\n"
	.string "Manual too.$"

EventScript_MapsItem_Text_0:
# 569 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Twilight Plateau.\pView the next map?$"

EventScript_MapsItem_Text_1:
# 578 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Forest.\pView the next map?$"

EventScript_MapsItem_Text_2:
# 587 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Shoreline.\pView the next map?$"

EventScript_MapsItem_Text_3:
# 596 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Misty Mountains.$"

maincomputer_Text_0:
# 608 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The ship's computer isn't reporting an\n"
	.string "issue. So why can't it lift off?$"
