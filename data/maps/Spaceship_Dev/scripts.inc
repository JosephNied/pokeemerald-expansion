Spaceship_Dev_MapScripts::
# 2 "data/maps/Spaceship_Dev/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Spaceship_Dev_Enter
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
# 13 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
Spaceship_Dev_Enter_1:
	end

Spaceship_Dev_Enter_2:
# 11 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Spaceship_Dev_Enter_1


refill_air_canister::
# 19 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 20 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 21 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 22 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_0
# 24 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 25 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_SUPER_REPEL, 1
# 26 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq refill_air_canister_2
# 31 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_1
refill_air_canister_1:
# 34 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

refill_air_canister_2:
# 27 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 28 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 29 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, VAR_STARDUST_COUNT
	goto refill_air_canister_1


Spaceship_Dev_EventScript_BallItem01::
# 39 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 40 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 43 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 46 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 47 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 48 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x046
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x047
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x048
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x049
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_ROSE
# 54 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 65 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 81 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 93 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x029
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 82 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	waitse
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	waitmoncry
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 110 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 5
# 112 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_2
Spaceship_Dev_EventScript_Item01_1:
# 128 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 129 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 113 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 114 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 115 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 120 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 123 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 134 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 135 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 168 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 141 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 142 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 143 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 144 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 145 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 149 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 150 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 151 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 152 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 153 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 173 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 174 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 180 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 177 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 184 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 189 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 190 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 202 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 203 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 204 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_LOGIN
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 267 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 268 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 269 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 273 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 274 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 236 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 251 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 252 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 259 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 260 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 261 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 262 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 237 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 238 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 239 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	playse SE_PC_OFF
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 279 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 280 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 281 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 282 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Blissey_Bed::
# 287 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 288 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 289 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_ENCOUNTER
# 290 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Blissey_Bed_Text_0
# 291 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 292 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 293 "data/maps/Spaceship_Dev/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 294 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Bellossom::
# 299 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 300 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 301 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_ENCOUNTER
# 302 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Bellossom_Text_0
# 304 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Boxes::
# 309 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 310 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Boxes_Text_0
# 313 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Machine::
# 318 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 319 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 320 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Machine_Text_0
# 323 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


JirachiOnShip::
# 328 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 329 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 330 "data/maps/Spaceship_Dev/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 331 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_0
# 332 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 333 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 334 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JirachiOnShip_1
# 343 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox JirachiOnShip_Text_1
# 344 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

JirachiOnShip_1:
# 336 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 337 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 338 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 6
# 339 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 340 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


IsPlayerReadyToGo::
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x027, IsPlayerReadyToGo_5
IsPlayerReadyToGo_3:
# 354 "data/maps/Spaceship_Dev/scripts.pory"
	lockall
# 355 "data/maps/Spaceship_Dev/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, IsPlayerReadyToGo_Movement_0
# 356 "data/maps/Spaceship_Dev/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 357 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox IsPlayerReadyToGo_Text_0
# 360 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
IsPlayerReadyToGo_1:
	end

IsPlayerReadyToGo_2:
# 351 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_TEMP_0, 1
# 352 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLAYER_READY, 1
	goto IsPlayerReadyToGo_1

IsPlayerReadyToGo_4:
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x029, IsPlayerReadyToGo_2
	goto IsPlayerReadyToGo_3

IsPlayerReadyToGo_5:
# 350 "data/maps/Spaceship_Dev/scripts.pory"
	goto_if_set FLAG_UNUSED_0x028, IsPlayerReadyToGo_4
	goto IsPlayerReadyToGo_3


# 355 "data/maps/Spaceship_Dev/scripts.pory"
IsPlayerReadyToGo_Movement_0:
# 355 "data/maps/Spaceship_Dev/scripts.pory"
	walk_down
	step_end

refill_air_canister_Text_0:
# 22 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Rotom wants to refill my empty air \n"
	.string "canisters!$"

refill_air_canister_Text_1:
# 31 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I don't have any empty canisters to\n"
	.string "refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Explorer's Guide: What would you like to \n"
	.string "learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokemon inside is \l"
	.string "released.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokemon while allowing you\l"
	.string "to escape the confrontation unharmed.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 82 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and also will \l"
	.string "automatically trigger in emergency \l"
	.string "situations.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's\l"
	.string "crafting machine, provided you have\l"
	.string "sufficient Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Magnezone, let's go!$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_2:
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 149 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 209 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 237 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 246 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 267 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 280 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"

Blissey_Bed_Text_0:
# 290 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Blissey wants to heal the team!$"

Bellossom_Text_0:
# 302 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Bellossum converts my C02 into oxygen.\n"
	.string "An important team member!$"

Boxes_Text_0:
# 311 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Lots of stuff I was supposed to\n"
	.string "deliver... Surely they can wait...?$"

Machine_Text_0:
# 320 "data/maps/Spaceship_Dev/scripts.pory"
	.string "This bed is designed to keep me in\n"
	.string "cryosleep, which I would be, if not for\l"
	.string "the circumstances.$"

JirachiOnShip_Text_0:
# 331 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Jirachi wants to join the team!$"

JirachiOnShip_Text_1:
# 343 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have a spare Meteor Ball!$"

IsPlayerReadyToGo_Text_0:
# 357 "data/maps/Spaceship_Dev/scripts.pory"
	.string "I'm not ready yet!\n"
	.string "I need Magnezone, and my equipment!\p"
	.string "I should check the Explorer's Guide too.$"
