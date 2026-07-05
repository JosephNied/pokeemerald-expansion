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
	giveitem ITEM_DEVON_PARTS
# 12 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x027
# 13 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 1
# 14 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Item01::
# 19 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 20 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 21 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 22 "data/maps/Spaceship_Dev/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 24 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spaceship_Dev_EventScript_Item01_2
# 39 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_1
Spaceship_Dev_EventScript_Item01_1:
# 41 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 42 "data/maps/Spaceship_Dev/scripts.pory"
	releaseall
	end

Spaceship_Dev_EventScript_Item01_2:
# 25 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE01_GET
# 26 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE02_GET
# 27 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE03_GET
# 28 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE04_GET
# 29 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE05_GET
# 30 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE06_GET
# 31 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE07_GET
# 32 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_BADGE08_GET
# 33 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_Item01_Text_0
# 34 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 35 "data/maps/Spaceship_Dev/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 36 "data/maps/Spaceship_Dev/scripts.pory"
	removeobject 2
	goto Spaceship_Dev_EventScript_Item01_1


Spaceship_Dev_EventScript_ChangePlanet::
# 47 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 48 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_0
# 50 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_PLANET_SELECT, FALSE
# 51 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_2
# 60 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_3
# 69 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_ChangePlanet_4
# 79 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_4
Spaceship_Dev_EventScript_ChangePlanet_1:
# 81 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_ChangePlanet_2:
# 52 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 0
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_1
# 54 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 55 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 56 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 57 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 58 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_3:
# 61 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 1
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_2
# 63 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 64 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 65 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 66 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 67 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1

Spaceship_Dev_EventScript_ChangePlanet_4:
# 70 "data/maps/Spaceship_Dev/scripts.pory"
	setvar VAR_PLANET_DEST, 2
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_ChangePlanet_Text_3
# 72 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 73 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 74 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 75 "data/maps/Spaceship_Dev/scripts.pory"
	delay 40
# 76 "data/maps/Spaceship_Dev/scripts.pory"
	fadeScreen FADE_FROM_BLACK
	goto Spaceship_Dev_EventScript_ChangePlanet_1


Spaceship_Dev_EventScript_UpdateWarp::
# 86 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 87 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 0
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_2
# 93 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 1
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_3
# 99 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_PLANET_DEST, 2
	goto_if_eq Spaceship_Dev_EventScript_UpdateWarp_4
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_3
# 107 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_1:
# 110 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_UpdateWarp_2:
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_0
# 90 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_PLANET01_01, 0, 18, 11
# 91 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_3:
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_1
# 96 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_ALT_SURFACE_DEV, 0, 13, 9
# 97 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1

Spaceship_Dev_EventScript_UpdateWarp_4:
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_UpdateWarp_Text_2
# 102 "data/maps/Spaceship_Dev/scripts.pory"
	warp MAP_METEOR_FALLS_B1F_1R, 3, 17, 3
# 103 "data/maps/Spaceship_Dev/scripts.pory"
	waitstate
	goto Spaceship_Dev_EventScript_UpdateWarp_1


Spaceship_Dev_EventScript_VitaminVendor::
# 115 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 116 "data/maps/Spaceship_Dev/scripts.pory"
	faceplayer
# 117 "data/maps/Spaceship_Dev/scripts.pory"
	CountItemInBag ITEM_STARDUST, VAR_STARDUST_COUNT
# 118 "data/maps/Spaceship_Dev/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_STARDUST_COUNT
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_0
# 121 "data/maps/Spaceship_Dev/scripts.pory"
	waitmessage
# 122 "data/maps/Spaceship_Dev/scripts.pory"
	closemessage
# 124 "data/maps/Spaceship_Dev/scripts.pory"
	checkitem ITEM_STARDUST, 1
# 125 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_2
# 132 "data/maps/Spaceship_Dev/scripts.pory"
	multichoice 0, 0, MULTI_VITAMIN_SELECT, FALSE
# 133 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_5
# 139 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_6
# 145 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_7
# 151 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_8
# 157 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_9
# 163 "data/maps/Spaceship_Dev/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Spaceship_Dev_EventScript_VitaminVendor_10
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_3
# 172 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_1:
# 176 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_2:
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_1
# 128 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end

Spaceship_Dev_EventScript_VitaminVendor_5:
# 135 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 136 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_HP_UP, 1
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_6:
# 141 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 142 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_PROTEIN, 1
# 143 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_7:
# 147 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 148 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_IRON, 1
# 149 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_8:
# 153 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 154 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_CALCIUM, 1
# 155 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_9:
# 159 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 160 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_ZINC, 1
# 161 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1

Spaceship_Dev_EventScript_VitaminVendor_10:
# 165 "data/maps/Spaceship_Dev/scripts.pory"
	removeitem ITEM_STARDUST, 1
# 166 "data/maps/Spaceship_Dev/scripts.pory"
	giveitem ITEM_CARBOS, 1
# 167 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox Spaceship_Dev_EventScript_VitaminVendor_Text_2
	goto Spaceship_Dev_EventScript_VitaminVendor_1


TestRemovePokes::
# 181 "data/maps/Spaceship_Dev/scripts.pory"
	lock
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	msgbox TestRemovePokes_Text_0
# 183 "data/maps/Spaceship_Dev/scripts.pory"
	special RemoveNativeMonsFromParty
# 184 "data/maps/Spaceship_Dev/scripts.pory"
	release
	end


Spaceship_Dev_EventScript_Item01_Text_0:
# 33 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Added Magnezone to party.$"

Spaceship_Dev_EventScript_Item01_Text_1:
# 39 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your party is full!$"

Spaceship_Dev_EventScript_ChangePlanet_Text_0:
# 49 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Where would you like to go?$"

Spaceship_Dev_EventScript_ChangePlanet_Text_1:
# 53 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Earth...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_2:
# 62 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Mars...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_3:
# 71 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Traveling to Venus...$"

Spaceship_Dev_EventScript_ChangePlanet_Text_4:
# 79 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Travel canceled.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_0:
# 89 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Earth.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_1:
# 95 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Mars.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_2:
# 101 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Warping to Venus.$"

Spaceship_Dev_EventScript_UpdateWarp_Text_3:
# 106 "data/maps/Spaceship_Dev/scripts.pory"
	.string "No valid destination set!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_0:
# 119 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Synthesize Vitamins using Star Dust?\n"
	.string "Your Start Dust: {COLOR BLUE}{SHADOW LIGHT_BLUE}{STR_VAR_1}$"

Spaceship_Dev_EventScript_VitaminVendor_Text_1:
# 127 "data/maps/Spaceship_Dev/scripts.pory"
	.string "You don't have any Star Dust.$"

Spaceship_Dev_EventScript_VitaminVendor_Text_2:
# 137 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Your Star Dust has been exchanged!$"

Spaceship_Dev_EventScript_VitaminVendor_Text_3:
# 171 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Vitamin synthesis canceled.$"

TestRemovePokes_Text_0:
# 182 "data/maps/Spaceship_Dev/scripts.pory"
	.string "Testing releasing party...$"
