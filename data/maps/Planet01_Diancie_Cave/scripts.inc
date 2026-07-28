Planet01_Diancie_Cave_MapScripts::
# 2 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Diancie_Cave_Enter
	.byte 0


Planet01_Diancie_Cave_Enter::
# 6 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_TEMP_0, 0
	end


Planet01_Diancie_Cave_Spawn_Poke::
# 11 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	lockall
# 13 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkitem ITEM_CHIPPED_POT, 1
# 14 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_2
# 21 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 22 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative DrawMugshot
# 23 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_0
# 24 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmessage
# 25 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	closemessage
# 26 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative ClearMugshot
# 27 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 29 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04B
# 30 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_6
Planet01_Diancie_Cave_Spawn_Poke_5:
# 38 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04A
# 39 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_9
Planet01_Diancie_Cave_Spawn_Poke_8:
# 47 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04C
# 48 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_12
Planet01_Diancie_Cave_Spawn_Poke_11:
# 56 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04D
# 57 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_15
Planet01_Diancie_Cave_Spawn_Poke_14:
# 65 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	delay 30
# 67 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_CARBINK_COUNT, 4
	goto_if_lt Planet01_Diancie_Cave_Spawn_Poke_17
# 71 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 72 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 73 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 74 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 75 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special ShakeCamera
# 76 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x045
# 77 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 5
# 78 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 79 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 80 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative DrawMugshot
# 81 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_2
# 83 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmessage
# 84 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	closemessage
# 85 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative ClearMugshot
Planet01_Diancie_Cave_Spawn_Poke_1:
# 88 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 89 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end

Planet01_Diancie_Cave_Spawn_Poke_2:
# 16 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	release
	end

Planet01_Diancie_Cave_Spawn_Poke_6:
# 32 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x046
# 33 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 3
# 34 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 35 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_5

Planet01_Diancie_Cave_Spawn_Poke_9:
# 41 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x047
# 42 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 4
# 43 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 44 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_8

Planet01_Diancie_Cave_Spawn_Poke_12:
# 50 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x048
# 51 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 1
# 52 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 53 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_11

Planet01_Diancie_Cave_Spawn_Poke_15:
# 59 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 2
# 60 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x049
# 61 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 62 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_14

Planet01_Diancie_Cave_Spawn_Poke_17:
# 68 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 69 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_1
	goto Planet01_Diancie_Cave_Spawn_Poke_1


Planet01_Diancie_Cave_DiancieEncounter::
# 94 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	lockall
# 95 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	faceplayer
# 97 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_0
# 99 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitse
# 100 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	playmoncry SPECIES_DIANCIE_MEGA, CRY_MODE_ENCOUNTER
# 101 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmoncry
# 103 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special SetBossBattle
# 104 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setwildbattle SPECIES_DIANCIE_MEGA, 75, ITEM_DIANCITE
# 109 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	dowildbattle
# 110 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special BossBattleOff
# 112 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 113 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	goto_if_eq PlayerLost_Diancie
# 115 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeobject 5
# 116 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 118 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_1
# 120 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	giveitem ITEM_DIANCITE
# 121 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8000, SPECIES_DIANCIE
# 122 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative RegisterSpeciesInDex
# 123 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
# 124 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	end
# 126 "data/maps/Planet01_Diancie_Cave/scripts.pory"
PlayerLost_Diancie:
# 127 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end


Planet01_Diancie_Cave_Spawn_Poke_Text_0:
# 23 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Oh?! The Carbink are excited!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_1:
# 69 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink went home!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_2:
# 81 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink- Woah! A Diancie!\n"
	.string "I think it wants me to approach it...$"

Planet01_Diancie_Cave_DiancieEncounter_Text_0:
# 97 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Diancie wants to fight!$"

Planet01_Diancie_Cave_DiancieEncounter_Text_1:
# 118 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Daincie seemd pleased with\n"
	.string "the battle! It left a gift!$"
