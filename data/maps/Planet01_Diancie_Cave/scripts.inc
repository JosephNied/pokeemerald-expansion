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
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_0
# 22 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 24 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04B
# 25 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_6
Planet01_Diancie_Cave_Spawn_Poke_5:
# 33 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04A
# 34 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_9
Planet01_Diancie_Cave_Spawn_Poke_8:
# 42 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04C
# 43 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_12
Planet01_Diancie_Cave_Spawn_Poke_11:
# 51 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04D
# 52 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_15
Planet01_Diancie_Cave_Spawn_Poke_14:
# 60 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	delay 30
# 62 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_CARBINK_COUNT, 4
	goto_if_le Planet01_Diancie_Cave_Spawn_Poke_17
# 66 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 67 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 68 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 69 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 70 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special ShakeCamera
# 71 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x045
# 72 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 5
# 73 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 74 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_2
Planet01_Diancie_Cave_Spawn_Poke_1:
# 78 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 79 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end

Planet01_Diancie_Cave_Spawn_Poke_2:
# 16 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	release
	end

Planet01_Diancie_Cave_Spawn_Poke_6:
# 27 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x046
# 28 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 3
# 29 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 30 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_5

Planet01_Diancie_Cave_Spawn_Poke_9:
# 36 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x047
# 37 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 4
# 38 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 39 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_8

Planet01_Diancie_Cave_Spawn_Poke_12:
# 45 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x048
# 46 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 1
# 47 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 48 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_11

Planet01_Diancie_Cave_Spawn_Poke_15:
# 54 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 2
# 55 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x049
# 56 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 57 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_14

Planet01_Diancie_Cave_Spawn_Poke_17:
# 63 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 64 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_1
	goto Planet01_Diancie_Cave_Spawn_Poke_1


Planet01_Diancie_Cave_DiancieEncounter::
# 84 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	lockall
# 85 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	faceplayer
# 87 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_0
# 89 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitse
# 90 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
# 91 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmoncry
# 93 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special SetBossBattle
# 94 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setwildbattle SPECIES_DIANCIE, 75, ITEM_DIANCITE
# 99 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	dowildbattle
# 100 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special BossBattleOff
# 102 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 103 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	goto_if_eq PlayerLost_Diancie
# 105 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeobject 5
# 106 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 108 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_1
# 110 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	giveitem ITEM_DIANCITE
# 111 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
# 112 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	end
# 114 "data/maps/Planet01_Diancie_Cave/scripts.pory"
PlayerLost_Diancie:
# 115 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end


Planet01_Diancie_Cave_Spawn_Poke_Text_0:
# 21 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Oh?! The Carbink are excited!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_1:
# 64 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink went home!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_2:
# 74 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink- Woah! A Diancie!\n"
	.string "I think it wants me to approach it...$"

Planet01_Diancie_Cave_DiancieEncounter_Text_0:
# 87 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Diancie wants to fight!$"

Planet01_Diancie_Cave_DiancieEncounter_Text_1:
# 108 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Daincie seemd pleased with\n"
	.string "the battle! It left a gift!$"
