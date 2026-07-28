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
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 56 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 58 "data/maps/Spaceship_Dev/scripts.pory"
	delay 10
# 59 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_2
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 68 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 69 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end


refill_air_canister::
# 74 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 75 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ROTOM
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 79 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_0
# 81 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 82 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 83 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_SUPER_REPEL, 1
# 84 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq refill_air_canister_2
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_1
refill_air_canister_1:
# 92 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

refill_air_canister_2:
# 85 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, VAR_STARDUST_COUNT
	goto refill_air_canister_1


Spaceship_Dev_EventScript_BallItem01::
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 99 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x046
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x047
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x048
# 110 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x049
# 111 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_ROSE
# 112 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 113 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 120 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 123 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 153 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
# 130 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 133 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
# 144 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
# 151 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 167 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 168 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGNEZONE
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 172 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 173 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 174 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 175 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 177 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 179 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 195 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 196 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 180 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 181 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 184 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 187 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 189 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 190 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 201 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 202 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 203 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 204 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 223 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 235 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 212 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 240 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 247 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 260 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 264 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 251 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 257 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 269 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 270 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 271 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 272 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 273 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 274 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 275 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 276 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 280 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 283 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 284 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 291 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 292 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 300 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 316 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 334 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 335 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 336 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 286 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 287 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 288 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 340 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 341 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 294 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 295 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 296 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 303 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 309 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 310 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 312 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 318 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 319 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 320 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 326 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 327 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 328 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 329 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 304 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 305 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 306 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 321 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 322 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 323 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 346 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 347 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 348 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 349 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 354 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 355 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 356 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BLISSEY
# 357 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 358 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 361 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 362 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 363 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 364 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 369 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 370 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 371 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BELLOSSUM
# 372 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 373 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 374 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 376 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 377 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 378 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 379 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Bellossom_2
Bellossom_1:
# 410 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Bellossom_2:
# 380 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 381 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 382 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 383 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_1
# 384 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 385 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 386 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 387 "data/maps/Spaceship_Dev/scripts.pory"
	randomelement ITEM_ADAMANT_MINT, ITEM_BOLD_MINT, ITEM_BRAVE_MINT, ITEM_CALM_MINT, ITEM_CAREFUL_MINT, ITEM_HASTY_MINT, ITEM_IMPISH_MINT, ITEM_JOLLY_MINT, ITEM_LAX_MINT, ITEM_MODEST_MINT, ITEM_NAIVE_MINT, ITEM_NAUGHTY_MINT, ITEM_QUIET_MINT, ITEM_RASH_MINT, ITEM_RELAXED_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT, ITEM_TIMID_MINT, ITEM_LUM_BERRY, ITEM_SITRUS_BERRY
# 407 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem VAR_RESULT
# 408 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_TEMP_6
	goto Bellossom_1


Boxes::
# 415 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 417 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 418 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 419 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 421 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 422 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 427 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 428 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 429 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 430 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 431 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 434 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 435 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 440 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 441 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 442 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 443 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 444 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 445 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 446 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 447 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 448 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 449 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 458 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 459 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 451 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 452 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 453 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 454 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 455 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 465 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 469 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 470 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 471 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 472 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 473 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 477 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 478 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 466 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 467 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 465 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 465 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3


# 32 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_0:
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	face_right
	step_end

# 470 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 470 "data/maps/Spaceship_Dev/scripts.pory"
	walk_down
	step_end

start_ship_intro_Text_0:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Woah! Rough landing!$"

start_ship_intro_Text_1:
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	.string "What the heck?! I can't get off the\n"
	.string "ground! Something's keeping us down!$"

start_ship_intro_Text_2:
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I guess I have to go check it out...\n"
	.string "I've never had to go outside the ship\l"
	.string "like this before. I better prepare.\p"
	.string "I should take Magnezone and my tools;\n"
	.string "who knows what could be out there?$"

refill_air_canister_Text_0:
# 79 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Rotom wants to refill my empty air \n"
	.string "canisters!$"

refill_air_canister_Text_1:
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I don't have any empty canisters to\n"
	.string "refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Explorer's Guide: What would you like to \n"
	.string "learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.\p"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} that can\n"
	.string "refill your Oxygen System at any time.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 133 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokemon inside is \l"
	.string "released.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokemon while allowing you\l"
	.string "to escape the confrontation unharmed.\p"
	.string "Faster pokemon are harder to scan.\n"
	.string "Paralyzing them can make it easier.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and also will \l"
	.string "automatically trigger in emergency \l"
	.string "situations.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's\l"
	.string "crafting machine, provided you have\l"
	.string "sufficient Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 173 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Magnezone, let's go!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 203 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 260 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 276 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 286 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 304 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 334 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 347 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Bellossom_Text_0:
# 374 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Bellossum converts my C02 into oxygen.\n"
	.string "An important team member!$"

Bellossom_Text_1:
# 383 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Oh? Bellossum has a gift for me!$"

Boxes_Text_0:
# 419 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 431 "data/maps/Spaceship_Dev/scripts.pory"
	.string "This bed is designed to keep me in\n"
	.string "cryosleep, which I would be, if not for\l"
	.string "the circumstances.$"

JirachiOnShip_Text_0:
# 445 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 458 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I should check the Explorer's Guide too.$"
