Planet01_Diancie_Cave_MapScripts::
# 2 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Diancie_Cave_Enter
	.byte 0


Planet01_Diancie_Cave_Enter::
	end


Planet01_Diancie_Cave_Spawn_Poke::
# 10 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	lockall
# 12 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkitem ITEM_CHIPPED_POT, 1
# 13 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_2
# 20 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_0
# 21 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 23 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04B
# 24 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_6
Planet01_Diancie_Cave_Spawn_Poke_5:
# 31 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04A
# 32 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_9
Planet01_Diancie_Cave_Spawn_Poke_8:
# 39 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04C
# 40 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_12
Planet01_Diancie_Cave_Spawn_Poke_11:
# 47 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	checkflag FLAG_UNUSED_0x04D
# 48 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_Diancie_Cave_Spawn_Poke_15
Planet01_Diancie_Cave_Spawn_Poke_14:
# 55 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_CARBINK_COUNT, 4
	goto_if_le Planet01_Diancie_Cave_Spawn_Poke_17
# 59 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x045
# 60 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 61 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_2
Planet01_Diancie_Cave_Spawn_Poke_1:
# 64 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end

Planet01_Diancie_Cave_Spawn_Poke_2:
# 15 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	release
	end

Planet01_Diancie_Cave_Spawn_Poke_6:
# 26 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x046
# 27 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 28 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_5

Planet01_Diancie_Cave_Spawn_Poke_9:
# 34 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x047
# 35 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 36 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_8

Planet01_Diancie_Cave_Spawn_Poke_12:
# 42 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x048
# 43 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 44 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_11

Planet01_Diancie_Cave_Spawn_Poke_15:
# 50 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x049
# 51 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 52 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_14

Planet01_Diancie_Cave_Spawn_Poke_17:
# 56 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 57 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_1
	goto Planet01_Diancie_Cave_Spawn_Poke_1


Planet01_Diancie_Cave_DiancieEncounter::
# 69 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	lockall
# 70 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	faceplayer
# 72 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_0
# 74 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitse
# 75 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
# 76 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmoncry
# 78 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special SetBossBattle
# 79 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setwildbattle SPECIES_DIANCIE, 75, ITEM_DIANCITE
# 84 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	dowildbattle
# 85 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special BossBattleOff
# 87 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 88 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	goto_if_eq PlayerLost_Diancie
# 90 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeobject 5
# 91 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 93 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_1
# 95 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	giveitem ITEM_DIANCITE
# 96 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
# 97 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	end
# 99 "data/maps/Planet01_Diancie_Cave/scripts.pory"
PlayerLost_Diancie:
# 100 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end


Planet01_Diancie_Cave_Spawn_Poke_Text_0:
# 20 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Oh?! The Carbink are excited!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_1:
# 57 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Carbink went home!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_2:
# 61 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink- Woah! A Diancie!$"

Planet01_Diancie_Cave_DiancieEncounter_Text_0:
# 72 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Diancie wants to fight!$"

Planet01_Diancie_Cave_DiancieEncounter_Text_1:
# 93 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Daincie seemd pleased with\n"
	.string "the battle! It left a gift!$"
