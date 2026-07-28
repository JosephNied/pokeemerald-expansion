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
	giveitem ITEM_WAILMER_PAIL
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x046
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x047
# 110 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x048
# 111 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x049
# 112 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_ROSE
# 113 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 114 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 120 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 133 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 134 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
# 145 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
# 152 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 155 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	call Spaceship_Dev_EventScript_Tutorial_Notebook
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 168 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGNEZONE
# 172 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 173 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 174 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 175 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 177 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 180 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 196 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 181 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 184 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 187 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 189 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 190 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 191 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 202 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 203 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 204 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 236 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 212 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 222 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 231 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 248 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 262 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 265 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 251 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 252 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 257 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 258 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 270 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 271 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 272 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 273 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 274 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 275 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 276 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 277 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 282 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 284 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 285 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 292 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 293 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 302 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 317 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 335 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 336 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 337 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 287 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 288 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 289 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 341 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 342 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 295 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 296 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 297 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 304 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 310 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 312 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 314 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 319 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 320 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 321 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 327 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 328 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 329 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 330 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 305 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 306 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 307 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 322 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 323 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 324 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 347 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 348 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 349 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 355 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 356 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 357 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BLISSEY
# 358 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 361 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 362 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 363 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 364 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 365 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 370 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 371 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 372 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BELLOSSUM
# 373 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 374 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 375 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 377 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 378 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 379 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 380 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_unset FLAG_TEMP_6, Bellossom_2
Bellossom_1:
# 411 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Bellossom_2:
# 381 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 382 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 383 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 384 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_1
# 385 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 386 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 387 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 388 "data/maps/Spaceship_Dev/scripts.pory"
	randomelement ITEM_ADAMANT_MINT, ITEM_BOLD_MINT, ITEM_BRAVE_MINT, ITEM_CALM_MINT, ITEM_CAREFUL_MINT, ITEM_HASTY_MINT, ITEM_IMPISH_MINT, ITEM_JOLLY_MINT, ITEM_LAX_MINT, ITEM_MODEST_MINT, ITEM_NAIVE_MINT, ITEM_NAUGHTY_MINT, ITEM_QUIET_MINT, ITEM_RASH_MINT, ITEM_RELAXED_MINT, ITEM_SASSY_MINT, ITEM_SERIOUS_MINT, ITEM_TIMID_MINT, ITEM_LUM_BERRY, ITEM_SITRUS_BERRY
# 408 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem VAR_RESULT
# 409 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_TEMP_6
	goto Bellossom_1


Boxes::
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 417 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 418 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 419 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 420 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 422 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 423 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 428 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 429 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 430 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 431 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 432 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 435 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 436 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 441 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 442 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 443 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 444 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 445 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 446 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 447 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 448 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 449 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 450 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 459 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 460 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 452 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 453 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 454 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 455 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 456 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 466 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 470 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 471 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 472 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 473 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 474 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 475 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 478 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 479 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 467 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 468 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 466 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 466 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3


EventScript_MapsItem::
# 485 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 487 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_01
# 488 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 489 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_0, MSGBOX_YESNO
# 490 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 491 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_2
# 496 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_02
# 497 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 498 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_1, MSGBOX_YESNO
# 499 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 500 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_5
# 505 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_03
# 506 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 507 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_2, MSGBOX_YESNO
# 508 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 509 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_MapsItem_8
# 514 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAP_04
# 515 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 516 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox EventScript_MapsItem_Text_3
# 517 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 518 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 520 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_2:
# 492 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_5:
# 501 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

EventScript_MapsItem_8:
# 510 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


# 32 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_0:
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	face_right
	step_end

# 471 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 471 "data/maps/Spaceship_Dev/scripts.pory"
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
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Explorer's Guide: What would you like to \n"
	.string "learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.\p"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} that can\n"
	.string "refill your Oxygen System at any time.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 134 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokemon inside is \l"
	.string "released.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokemon while allowing you\l"
	.string "to escape the confrontation unharmed.\p"
	.string "Faster pokemon are harder to scan.\n"
	.string "Paralyzing them can make it easier.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and also will \l"
	.string "automatically trigger in emergency \l"
	.string "situations.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 155 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's\l"
	.string "crafting machine, provided you have\l"
	.string "sufficient Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 174 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Magnezone, let's go!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 189 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 204 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 226 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 277 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 287 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 305 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 314 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 335 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 348 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Bellossom_Text_0:
# 375 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Bellossum converts my C02 into oxygen.\n"
	.string "An important team member!$"

Bellossom_Text_1:
# 384 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Oh? Bellossum has a gift for me!$"

Boxes_Text_0:
# 420 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 432 "data/maps/Spaceship_Dev/scripts.pory"
	.string "This bed is designed to keep me in\n"
	.string "cryosleep, which I would be, if not for\l"
	.string "the circumstances.$"

JirachiOnShip_Text_0:
# 446 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 459 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 475 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I should check the Explorer's Guide too.$"

EventScript_MapsItem_Text_0:
# 489 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Twilight Plateau.\pView the next map?$"

EventScript_MapsItem_Text_1:
# 498 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Forest.\pView the next map?$"

EventScript_MapsItem_Text_2:
# 507 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Shoreline.\pView the next map?$"

EventScript_MapsItem_Text_3:
# 516 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Map for the Misty Mountains.$"
