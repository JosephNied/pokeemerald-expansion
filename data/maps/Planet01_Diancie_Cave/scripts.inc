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
	callnative ClearMugshot
# 26 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 28 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04B
# 29 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_6
Planet01_Diancie_Cave_Spawn_Poke_5:
# 37 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04A
# 38 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_9
Planet01_Diancie_Cave_Spawn_Poke_8:
# 46 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04C
# 47 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_12
Planet01_Diancie_Cave_Spawn_Poke_11:
# 55 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04D
# 56 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_15
Planet01_Diancie_Cave_Spawn_Poke_14:
# 64 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	delay 30
# 66 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_CARBINK_COUNT, 4
	goto_if_le Planet01_Diancie_Cave_Spawn_Poke_17
# 70 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 71 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 72 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 73 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 74 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special ShakeCamera
# 75 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x045
# 76 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 5
# 77 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 78 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_2
Planet01_Diancie_Cave_Spawn_Poke_1:
# 82 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 83 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end

Planet01_Diancie_Cave_Spawn_Poke_2:
# 16 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	release
	end

Planet01_Diancie_Cave_Spawn_Poke_6:
# 31 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x046
# 32 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 3
# 33 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 34 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_5

Planet01_Diancie_Cave_Spawn_Poke_9:
# 40 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x047
# 41 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 4
# 42 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 43 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_8

Planet01_Diancie_Cave_Spawn_Poke_12:
# 49 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x048
# 50 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 1
# 51 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 52 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_11

Planet01_Diancie_Cave_Spawn_Poke_15:
# 58 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 2
# 59 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x049
# 60 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 61 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_14

Planet01_Diancie_Cave_Spawn_Poke_17:
# 67 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 68 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_1
	goto Planet01_Diancie_Cave_Spawn_Poke_1


Planet01_Diancie_Cave_DiancieEncounter::
# 88 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	lockall
# 89 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	faceplayer
# 91 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_0
# 93 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitse
# 94 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	playmoncry SPECIES_DIANCIE_MEGA, CRY_MODE_ENCOUNTER
# 95 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmoncry
# 97 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special SetBossBattle
# 98 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setwildbattle SPECIES_DIANCIE, 75, ITEM_DIANCITE
# 103 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	dowildbattle
# 104 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special BossBattleOff
# 106 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 107 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	goto_if_eq PlayerLost_Diancie
# 109 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeobject 5
# 110 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 112 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_1
# 114 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	giveitem ITEM_DIANCITE
# 115 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
# 116 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	end
# 118 "data/maps/Planet01_Diancie_Cave/scripts.pory"
PlayerLost_Diancie:
# 119 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end


Planet01_Diancie_Cave_Spawn_Poke_Text_0:
# 23 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Oh?! The Carbink are excited!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_1:
# 68 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink went home!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_2:
# 78 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink- Woah! A Diancie!\n"
	.string "I think it wants me to approach it...$"

Planet01_Diancie_Cave_DiancieEncounter_Text_0:
# 91 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Diancie wants to fight!$"

Planet01_Diancie_Cave_DiancieEncounter_Text_1:
# 112 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Daincie seemd pleased with\n"
	.string "the battle! It left a gift!$"
