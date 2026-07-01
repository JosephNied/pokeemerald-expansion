# 1 "data/maps/Spaceship_Dev/scripts.pory"

# 2 "data/maps/Spaceship_Dev/scripts.pory"
Spaceship_Dev_MapScripts::
# 3 "data/maps/Spaceship_Dev/scripts.pory"
	.byte 0

Spaceship_Dev_EventScript_BallItem01::
# 6 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 7 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 8 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_BEAST_BALL, 2
# 9 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_STARDUST, 5
# 10 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_SCANNER
# 11 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 12 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 13 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Item01::
# 18 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 19 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 20 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 21 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 23 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 38 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
Spaceship_Dev_EventScript_Item01_1:
# 40 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 24 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 25 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 26 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 27 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 28 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 29 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 30 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 31 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 33 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 34 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 35 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 2
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 46 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 47 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 48 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 59 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 68 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 80 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 54 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 56 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 64 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 65 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 69 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 70 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 73 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 74 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 75 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 85 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 92 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 98 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 109 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 114 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 115 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 120 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 123 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 131 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 138 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_6
# 144 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_7
# 150 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 156 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 162 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_10
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_1:
# 175 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 134 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 135 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_HP_UP, 1
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_6:
# 140 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 141 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_PROTEIN, 1
# 142 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_7:
# 146 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_IRON, 1
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_8:
# 152 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 153 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_CALCIUM, 1
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_9:
# 158 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ZINC, 1
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_10:
# 164 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 165 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_CARBOS, 1
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1


TestRemovePokes::
# 180 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 181 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Item01_Text_0:
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 38 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 48 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 70 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 78 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 88 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Earth.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 94 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 100 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 105 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Synthesize Vitamins using Star Dust?\n"
	.string "Your Start Dust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 126 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have any Star Dust.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your Star Dust has been exchanged!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 170 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Vitamin synthesis canceled.$"

TestRemovePokes_Text_0:
# 181 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"
