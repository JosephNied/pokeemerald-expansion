Spaceship_Dev_MapScripts::
# 2 "data/maps/Spaceship_Dev/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Spaceship_Dev_Enter
	.byte 0


Spaceship_Dev_Enter::
# 7 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 200
# 8 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
	end


Spaceship_Dev_EventScript_BallItem01::
# 13 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 14 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 15 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 16 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 17 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 18 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 22 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 23 "data/maps/Spaceship_Dev/scripts.pory"
	clearflag FLAG_SYS_BRAILLE_DIG
# 24 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 25 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Item01::
# 30 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 31 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 33 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 35 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
Spaceship_Dev_EventScript_Item01_1:
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 36 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 37 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 38 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 39 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 40 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 43 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 45 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 46 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 47 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 2
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 58 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 59 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 80 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 92 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 64 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 65 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 68 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 69 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 73 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 74 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 75 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 77 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 81 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 82 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 83 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 84 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 85 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 104 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 110 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 108 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 112 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 113 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 114 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 128 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 129 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 130 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STAR_PIECE, VAR_STAR_PIECE_COUNT
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_STAR_PIECE_COUNT
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STAR_PIECE, 1
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 155 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 169 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_4
# 187 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 142 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 143 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_4:
# 191 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 149 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 150 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_8:
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_TOTAL_BALL_COUNT, 5
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_13
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 164 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 165 "data/maps/Spaceship_Dev/scripts.pory"
	addvar VAR_TOTAL_BALL_COUNT, 1
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_9:
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_REPEL, VAR_STARDUST_COUNT
# 172 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 173 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_STARDUST_COUNT, 2
	goto_if_ge Spaceship_Dev_EventScript_VitaminVendor_16
# 178 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 179 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STAR_PIECE, 1
# 180 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_REPEL, 1
# 181 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
	goto Spaceship_Dev_EventScript_VitaminVendor_4

Spaceship_Dev_EventScript_VitaminVendor_13:
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_16:
# 174 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
# 175 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


TestRemovePokes::
# 196 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 198 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 199 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Item01_Text_0:
# 44 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 64 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 73 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 82 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Downwards to the planet.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 112 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Craft items? Each item requires x1\n"
	.string " Stardust and x1 Star Pieces.\p"
	.string "Your Stardust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}\n"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Your Star Pieces: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_2}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 142 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have enough material.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You can't carry any more of these.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your material has been converted!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_4:
# 186 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Crafting canceled.$"

TestRemovePokes_Text_0:
# 197 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"
