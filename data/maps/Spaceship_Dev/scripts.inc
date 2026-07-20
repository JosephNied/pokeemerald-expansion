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
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 43 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Tutorial_Notebook::
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_TUTORIAL_NOTES, FALSE
# 54 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_2
Spaceship_Dev_EventScript_Tutorial_Notebook_1:
# 59 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_5
Spaceship_Dev_EventScript_Tutorial_Notebook_4:
# 64 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_8
Spaceship_Dev_EventScript_Tutorial_Notebook_7:
# 69 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_11
Spaceship_Dev_EventScript_Tutorial_Notebook_10:
# 75 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_Tutorial_Notebook_14
Spaceship_Dev_EventScript_Tutorial_Notebook_13:
# 81 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_Tutorial_Notebook_2:
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_1

Spaceship_Dev_EventScript_Tutorial_Notebook_5:
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_4

Spaceship_Dev_EventScript_Tutorial_Notebook_8:
# 65 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_7

Spaceship_Dev_EventScript_Tutorial_Notebook_11:
# 70 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_10

Spaceship_Dev_EventScript_Tutorial_Notebook_14:
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5
	goto Spaceship_Dev_EventScript_Tutorial_Notebook_13


Spaceship_Dev_EventScript_Item01::
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 91 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
Spaceship_Dev_EventScript_Item01_1:
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 92 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 93 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 99 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 2
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 114 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 115 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 120 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 123 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 128 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 129 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 130 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 133 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 134 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 141 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 142 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 143 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 153 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 173 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 174 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 177 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 164 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 168 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 184 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 185 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 187 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 192 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 193 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 195 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 196 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 202 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 203 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 210 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 211 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 225 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 243 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 199 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 247 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 205 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 206 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 213 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 218 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 219 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 220 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 221 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 222 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 227 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 228 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 229 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 234 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 235 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 236 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 237 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 215 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 230 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 231 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 252 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 254 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 255 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


refill_air_canister_Text_0:
# 16 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Refilling your empty canister...$"

refill_air_canister_Text_1:
# 24 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have any empty canisters to refill.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_0:
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Explorer's Guide: What would you like to \n"
	.string "learn about?$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_1:
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your {COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen System{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} reports how many\n"
	.string "units of O2 remain in your portable life \l"
	.string "support system.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_2:
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} never fail. They can be \n"
	.string "reused if the Pokemon inside is \l"
	.string "released.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_3:
# 65 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Scanner{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} logs useful information\n"
	.string "about wild Pokemon while allowing you\l"
	.string "to escape the confrontation unharmed.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_4:
# 70 "data/maps/Spaceship_Dev/scripts.pory"
	.string "The {COLOR BLUE}{SHADOW LIGHT_BLUE}Teleporter{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} can be used to warp\n"
	.string "back to the ship, and also will \l"
	.string "automatically trigger in emergency \l"
	.string "situations.$"

Spaceship_Dev_EventScript_Tutorial_Notebook_Text_5:
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can craft {COLOR BLUE}{SHADOW LIGHT_BLUE}Meteor Balls{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} and \n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Air Canisters{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} using the ship's\l"
	.string "crafting machine, provided you have\l"
	.string "sufficient Star Pieces and Stardust.$"

Spaceship_Dev_EventScript_Item01_Text_0:
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 120 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 129 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 168 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 173 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 188 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 214 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 222 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 242 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 253 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"
