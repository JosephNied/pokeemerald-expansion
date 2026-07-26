Spaceship_Dev_MapScripts::
# 2 "data/maps/Spaceship_Dev/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Spaceship_Dev_Enter
# 3 "data/maps/Spaceship_Dev/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Spaceship_Dev_FrameTable
	.byte 0


Spaceship_Dev_Enter::
# 7 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 200
# 8 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 9 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_RECEIVED_BELDUM
# 10 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLAYER_READY, 0
	goto_if_eq Spaceship_Dev_Enter_2
# 14 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
Spaceship_Dev_Enter_1:
	end

Spaceship_Dev_Enter_2:
# 11 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 0
# 12 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Spaceship_Dev_Enter_1


# 19 "data/maps/Spaceship_Dev/scripts.pory"

# 20 "data/maps/Spaceship_Dev/scripts.pory"
Spaceship_Dev_FrameTable::
# 21 "data/maps/Spaceship_Dev/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, start_ship_intro
# 22 "data/maps/Spaceship_Dev/scripts.pory"
	.2byte 0

start_ship_intro::
# 26 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_1, 0
# 27 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 28 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, start_ship_intro_Movement_0
# 29 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 30 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8004, 1
# 31 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8005, 1
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8006, 8
# 33 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8007, 5
# 34 "data/maps/Spaceship_Dev/scripts.pory"
	special ShakeCamera
# 35 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 36 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 37 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_0
# 38 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8004, 1
# 39 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8005, 1
# 40 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8006, 8
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8007, 5
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	special ShakeCamera
# 43 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 45 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 46 "data/maps/Spaceship_Dev/scripts.pory"
	delay 30
# 47 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 48 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_1
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 54 "data/maps/Spaceship_Dev/scripts.pory"
	delay 10
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 56 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox start_ship_intro_Text_2
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 64 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 65 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end


refill_air_canister::
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 73 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_ROTOM
# 74 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 75 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_0
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 79 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 80 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_SUPER_REPEL, 1
# 81 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq refill_air_canister_2
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_1
refill_air_canister_1:
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

refill_air_canister_2:
# 82 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 83 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 84 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, VAR_STARDUST_COUNT
	goto refill_air_canister_1


Spaceship_Dev_EventScript_BallItem01::
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 99 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x046
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x047
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x048
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x049
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_ROSE
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 110 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 115 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 120 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 144 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 150 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 151 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 152 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 145 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_MAGNEZONE
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 164 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 165 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 167 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 172 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 173 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 174 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 175 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 177 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 179 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 180 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 191 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 192 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 195 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 204 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 223 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 196 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 199 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 200 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 201 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 202 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 231 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 237 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 251 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 235 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 239 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 240 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 241 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 247 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 259 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 260 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 262 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 263 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 264 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 265 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 266 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 270 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 271 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 273 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 274 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 282 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 290 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 291 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 306 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 324 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 325 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 326 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 276 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 277 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 278 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 330 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 331 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 284 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 285 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 286 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 293 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 299 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 300 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 302 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 303 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 308 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 309 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 310 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 316 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 317 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 318 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 319 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 294 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 295 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 296 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 312 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 336 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 337 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 338 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 339 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 344 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 345 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 346 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BLISSEY
# 347 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 348 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 349 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 351 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 352 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 353 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 354 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 359 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 361 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BELLOSSUM
# 362 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 363 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 364 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 366 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 367 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 368 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Boxes::
# 373 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 374 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 375 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 376 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 377 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 379 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 380 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 385 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 386 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 387 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 388 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 389 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 392 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 393 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 398 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 399 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 400 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 401 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 402 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 403 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 404 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 405 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 406 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 407 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 417 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 409 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 410 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 411 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 412 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 413 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 423 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 427 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 428 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 429 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 430 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 431 "data/maps/Spaceship_Dev/scripts.pory"
	callnative DrawMugshot
# 432 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 435 "data/maps/Spaceship_Dev/scripts.pory"
	callnative ClearMugshot
# 436 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 424 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 425 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 423 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 423 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3


# 28 "data/maps/Spaceship_Dev/scripts.pory"
start_ship_intro_Movement_0:
# 28 "data/maps/Spaceship_Dev/scripts.pory"
	face_right
	step_end

# 428 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 428 "data/maps/Spaceship_Dev/scripts.pory"
	walk_down
	step_end

start_ship_intro_Text_0:
# 37 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Woah! Rough landing!$"

start_ship_intro_Text_1:
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	.string "What the heck?! I can't get off the\n"
	.string "ground! Something's keeping us down!$"

start_ship_intro_Text_2:
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I guess I have to go check it out...\n"
	.string "I've never had to go outside the ship\l"
	.string "like this before. I guess I better\p"
	.string "prepare. I should take Magnezone and\n"
	.string "my equipment with me. Who knows what\l"
	.string "could be out there?$"

refill_air_canister_Text_0:
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Rotom wants to refill my empty air \n"
	.string "canisters!$"

refill_air_canister_Text_1:
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I don't have any empty canisters to\n"
	.string "refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Explorer's Guide: What would you like to \n"
	.string "learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokemon inside is \l"
	.string "released.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokemon while allowing you\l"
	.string "to escape the confrontation unharmed.\p"
	.string "Faster pokemon are harder to scan.\n"
	.string "Paralyzing them can make it easier.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and also will \l"
	.string "automatically trigger in emergency \l"
	.string "situations.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 145 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's\l"
	.string "crafting machine, provided you have\l"
	.string "sufficient Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Magnezone, let's go!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 223 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 239 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 250 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 266 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 276 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 294 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 303 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 324 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 337 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 349 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Bellossom_Text_0:
# 364 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Bellossum converts my C02 into oxygen.\n"
	.string "An important team member!$"

Boxes_Text_0:
# 377 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 389 "data/maps/Spaceship_Dev/scripts.pory"
	.string "This bed is designed to keep me in\n"
	.string "cryosleep, which I would be, if not for\l"
	.string "the circumstances.$"

JirachiOnShip_Text_0:
# 403 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 416 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 432 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I should check the Explorer's Guide too.$"
