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


# 23 "data/maps/Spaceship_Dev/scripts.pory"

# 24 "data/maps/Spaceship_Dev/scripts.pory"
Spaceship_Dev_FrameTable::
# 25 "data/maps/Spaceship_Dev/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, start_ship_intro
# 26 "data/maps/Spaceship_Dev/scripts.pory"
	.2byte 0

start_ship_intro::
# 30 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_1, 0
# 31 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, start_ship_intro_Movement_0
# 33 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 34 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8004, 1
# 35 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8005, 1
# 36 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8006, 8
# 37 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8007, 5
# 38 "data/maps/Spaceship_Dev/scripts.pory"
	special ShakeCamera
# 39 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 40 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_0
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8004, 1
# 43 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8005, 1
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8006, 8
# 45 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8007, 5
# 46 "data/maps/Spaceship_Dev/scripts.pory"
	special ShakeCamera
# 47 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 48 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	delay 30
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_1
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 58 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 59 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	delay 10
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_2
# 68 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 69 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 70 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end


refill_air_canister::
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ROTOM
# 79 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 80 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 81 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_0
# 83 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 84 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 85 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_ROTOM
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_SUPER_REPEL, 1
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq refill_air_canister_2
# 93 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_1
refill_air_canister_1:
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

refill_air_canister_2:
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 91 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, VAR_STARDUST_COUNT
	goto refill_air_canister_1


Spaceship_Dev_EventScript_BallItem01::
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 110 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x046
# 111 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x047
# 112 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x048
# 113 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x049
# 114 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_ROSE
# 115 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_OxygenGet::
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 123 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 7
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_BallGet::
# 130 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_DOLL
# 133 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 8
# 134 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 141 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 142 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 143 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 144 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 155 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 187 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
# 153 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 164 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 172 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 179 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 192 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 195 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGNEZONE
# 196 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 199 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 200 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 201 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 202 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 204 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 212 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 239 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 248 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 258 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 260 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 231 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 232 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 235 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 236 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 237 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 240 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 251 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 252 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 265 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 266 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 272 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 278 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 285 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 286 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 289 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 268 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 269 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 270 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 274 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 275 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 276 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 280 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 282 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 294 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 295 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 296 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 297 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 298 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 299 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 300 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 305 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 306 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 308 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 309 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 316 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 317 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 325 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 326 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 341 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 361 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 312 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 365 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 366 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 319 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 320 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 321 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 328 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 334 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 335 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 336 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 337 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 338 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 343 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 344 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 345 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 351 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 352 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 353 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 354 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 329 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 330 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 331 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 346 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 347 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 348 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 371 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 372 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 373 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 374 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 379 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 380 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 381 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BLISSEY
# 382 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 383 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 384 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 385 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 386 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 387 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 388 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BLISSEY
# 389 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 390 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 391 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 396 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 397 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 398 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BELLOSSUM
# 399 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 400 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 401 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 403 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 404 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 405 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 406 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, SPECIES_BELLOSSOM
# 407 "data/maps/Spaceship_Dev/scripts.pory"
	callnative RegisterSpeciesInDex
# 408 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Bellossom_2
Bellossom_1:
# 439 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Bellossom_2:
# 409 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 410 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 411 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 412 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_1
# 413 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 414 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 415 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	randomelement ITEM_ADAMANT_MINT, ITEM_BOLD_MINT, ITEM_BRAVE_MINT, ITEM_CALM_MINT, ITEM_CAREFUL_MINT, ITEM_HASTY_MINT, ITEM_IMPISH_MINT, ITEM_JOLLY_MINT, ITEM_LAX_MINT, ITEM_MODEST_MINT, ITEM_NAIVE_MINT, ITEM_NAUGHTY_MINT, ITEM_QUIET_MINT, ITEM_RASH_MINT, ITEM_RELAXED_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT, ITEM_TIMID_MINT, ITEM_LUM_BERRY, ITEM_SITRUS_BERRY
# 436 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem VAR_RESULT
# 437 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_TEMP_6
	goto Bellossom_1


Boxes::
# 444 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 445 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 446 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 447 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 448 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 450 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 451 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 456 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 457 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 458 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 459 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 460 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 463 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 464 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 469 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 470 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 471 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 472 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 473 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 475 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 476 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 477 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 478 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 487 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 488 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 480 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 481 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 482 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 483 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 484 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 494 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 498 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 499 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 500 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 501 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 502 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 503 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 507 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 508 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 495 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 496 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 494 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_9
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 494 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_8:
# 494 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_9:
# 494 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, IsPlayerReadyToGo_8
	goto IsPlayerReadyToGo_3


EventScript_MapsItem::
# 514 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 516 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_01
# 517 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 518 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_0, MSGBOX_YESNO
# 519 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 520 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_2
# 525 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_02
# 526 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 527 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_1, MSGBOX_YESNO
# 528 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 529 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_5
# 534 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_03
# 535 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 536 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_2, MSGBOX_YESNO
# 537 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 538 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_8
# 543 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_04
# 544 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_3
# 546 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 547 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 549 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_2:
# 521 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_5:
# 530 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_8:
# 539 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


# 32 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_0:
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	face_right
	step_end

# 499 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 499 "data/maps/Spaceship_Dev/scripts.pory"
	walk_down
	step_end

start_ship_intro_Text_0:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Woah! Rough landing!$"

start_ship_intro_Text_1:
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	.string "What the heck?! I can't get off the\n"
	.string "ground! It's as if something is literally\l"
	.string "holding us down, I've never seen anything\l"
	.string "like this before.$"

start_ship_intro_Text_2:
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I guess I have to go check it out...\n"
	.string "This is a totally unknown planet. I\l"
	.string "better prepare.\p"
	.string "I should take Magnezone and my tools;\n"
	.string "who knows what could be out there?$"

refill_air_canister_Text_0:
# 81 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Rotom wants to refill my empty air \n"
	.string "canisters!$"

refill_air_canister_Text_1:
# 93 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I don't have any empty canisters to\n"
	.string "refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 144 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Operations Manual: What would you like\n"
	.string "to learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.\p"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} that can\n"
	.string "refill your Oxygen System at any time.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokémon inside is \l"
	.string "released.\p"
	.string "Tip: You can even release Pokémon\n"
	.string "during a battle to fee up a ball!$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 164 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokémon while allowing you\l"
	.string "to escape the confrontation unharmed.\p"
	.string "Faster Pokémon are harder to scan.\n"
	.string "Paralyzing them can make it easier.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 172 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and also will \l"
	.string "automatically trigger in emergency \l"
	.string "situations.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 179 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's\l"
	.string "crafting machine, provided you have\l"
	.string "sufficient Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Let's go, buddy!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 232 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 258 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 268 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 274 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 280 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 285 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 329 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 338 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 372 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 384 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Bellossom_Text_0:
# 401 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Bellossom, thanks for convering my\n"
	.string "C02 in oxygen. You're a real champ.$"

Bellossom_Text_1:
# 412 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Oh? You have a gift for me!$"

Boxes_Text_0:
# 448 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 460 "data/maps/Spaceship_Dev/scripts.pory"
	.string "This bed is designed to keep me in\n"
	.string "cryosleep, which I would be, if not for\l"
	.string "the circumstances.$"

JirachiOnShip_Text_0:
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 487 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 503 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I need to review the Operations Manual\n"
	.string "too.$"

EventScript_MapsItem_Text_0:
# 518 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Twilight Plateau.\pView the next map?$"

EventScript_MapsItem_Text_1:
# 527 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Forest.\pView the next map?$"

EventScript_MapsItem_Text_2:
# 536 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Shoreline.\pView the next map?$"

EventScript_MapsItem_Text_3:
# 545 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Misty Mountains.$"
