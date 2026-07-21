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
	end


refill_air_canister::
# 14 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 15 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 16 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_0
# 17 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 18 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_SUPER_REPEL, 1
# 19 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq refill_air_canister_2
# 24 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox refill_air_canister_Text_1
refill_air_canister_1:
# 26 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

refill_air_canister_2:
# 20 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 21 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_SUPER_REPEL, VAR_STARDUST_COUNT
# 22 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, VAR_STARDUST_COUNT
	goto refill_air_canister_1


Spaceship_Dev_EventScript_BallItem01::
# 31 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 33 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 34 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 35 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 36 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 37 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 38 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 39 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 40 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x046
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x047
# 43 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x048
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x049
# 45 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 46 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 56 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 83 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 91 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 93 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
Spaceship_Dev_EventScript_Item01_1:
# 110 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 111 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 99 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 2
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 120 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 129 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 150 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 123 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 130 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 133 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 134 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 135 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
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


Spaceship_Dev_EventScript_UpdateWarp::
# 155 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 168 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 175 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 179 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 164 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 165 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 172 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 184 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 187 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 189 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 190 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 194 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 195 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 204 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 212 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 245 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 200 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 201 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 249 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 207 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 208 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 222 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 223 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 231 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 236 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 237 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 238 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 239 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 217 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 232 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 233 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 256 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 257 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


refill_air_canister_Text_0:
# 16 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Refilling your empty canister...$"

refill_air_canister_Text_1:
# 24 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have any empty canisters to refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Explorer's Guide: What would you like to \n"
	.string "learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokemon inside is \l"
	.string "released.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokemon while allowing you\l"
	.string "to escape the confrontation unharmed.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and also will \l"
	.string "automatically trigger in emergency \l"
	.string "situations.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's\l"
	.string "crafting machine, provided you have\l"
	.string "sufficient Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 164 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 175 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 190 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 200 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 216 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 224 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 244 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"
