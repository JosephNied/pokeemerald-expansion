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
	goto_if_set FLAG_UNUSED_0x04B, Planet01_Diancie_Cave_Spawn_Poke_6
Planet01_Diancie_Cave_Spawn_Poke_5:
# 37 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	goto_if_set FLAG_UNUSED_0x04A, Planet01_Diancie_Cave_Spawn_Poke_9
Planet01_Diancie_Cave_Spawn_Poke_8:
# 45 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	goto_if_set FLAG_UNUSED_0x04C, Planet01_Diancie_Cave_Spawn_Poke_12
Planet01_Diancie_Cave_Spawn_Poke_11:
# 53 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	goto_if_set FLAG_UNUSED_0x04D, Planet01_Diancie_Cave_Spawn_Poke_15
Planet01_Diancie_Cave_Spawn_Poke_14:
# 61 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	delay 30
# 63 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_CARBINK_COUNT, 4
	goto_if_lt Planet01_Diancie_Cave_Spawn_Poke_17
# 67 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 68 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 69 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 70 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 71 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special ShakeCamera
# 72 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x045
# 73 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 5
# 74 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 75 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 76 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative DrawMugshot
# 77 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_2
# 79 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmessage
# 80 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	closemessage
# 81 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative ClearMugshot
Planet01_Diancie_Cave_Spawn_Poke_1:
# 84 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 85 "data/maps/Planet01_Diancie_Cave/scripts.pory"
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
# 39 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x047
# 40 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 4
# 41 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 42 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_8

Planet01_Diancie_Cave_Spawn_Poke_12:
# 47 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x048
# 48 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 1
# 49 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 50 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_11

Planet01_Diancie_Cave_Spawn_Poke_15:
# 55 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addobject 2
# 56 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x049
# 57 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeitem ITEM_CHIPPED_POT, 1
# 58 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	addvar VAR_CARBINK_COUNT, 1
	goto Planet01_Diancie_Cave_Spawn_Poke_14

Planet01_Diancie_Cave_Spawn_Poke_17:
# 64 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 65 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_Spawn_Poke_Text_1
	goto Planet01_Diancie_Cave_Spawn_Poke_1


Planet01_Diancie_Cave_DiancieEncounter::
# 90 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	lockall
# 91 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	faceplayer
# 93 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_0
# 97 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitse
# 98 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	playmoncry SPECIES_DIANCIE_MEGA, CRY_MODE_ENCOUNTER
# 99 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmoncry
# 101 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special SetBossBattle
# 102 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setwildbattle SPECIES_DIANCIE_MEGA, 75, ITEM_DIANCITE
# 107 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	dowildbattle
# 108 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special BossBattleOff
# 110 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 111 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	goto_if_eq PlayerLost_Diancie
# 113 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	removeobject 5
# 114 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x045
# 116 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_1
# 118 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmessage
# 119 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	closemessage
# 120 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	giveitem ITEM_COMET_SHARD, 1
# 121 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_2
# 123 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmessage
# 124 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	closemessage
# 126 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitse
# 127 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_ENCOUNTER
# 128 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmoncry
# 130 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 131 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 132 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 133 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 134 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special ShakeCamera
# 136 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	special RemoveMagnezoneForMagnezoneM
# 137 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	givemon SPECIES_ZEKROM, 50, ITEM_MAGNET
# 139 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 140 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative DrawMugshot
# 142 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	msgbox Planet01_Diancie_Cave_DiancieEncounter_Text_3
# 149 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	waitmessage
# 150 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative ClearMugshot
# 151 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	closemessage
# 153 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	setvar VAR_0x8000, SPECIES_DIANCIE
# 154 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	callnative RegisterSpeciesInDex
# 155 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
# 156 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	end
# 158 "data/maps/Planet01_Diancie_Cave/scripts.pory"
PlayerLost_Diancie:
# 159 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	releaseall
	end


Planet01_Diancie_Cave_Spawn_Poke_Text_0:
# 23 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Oh?! The Carbink are excited!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_1:
# 65 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink went home!$"

Planet01_Diancie_Cave_Spawn_Poke_Text_2:
# 77 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "The Carbink- Woah! A Diancie!\n"
	.string "I think it wants me to approach it...$"

Planet01_Diancie_Cave_DiancieEncounter_Text_0:
# 93 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Diancie seems to appreciate me bringing\n"
	.string "its children home!\p"
	.string "It... wants to fight?$"

Planet01_Diancie_Cave_DiancieEncounter_Text_1:
# 116 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Diancie was pleased with the battle!\n"
	.string "It left a gift!$"

Planet01_Diancie_Cave_DiancieEncounter_Text_2:
# 121 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Also, some kind of crystal? It looks almost\n"
	.string "like...!$"

Planet01_Diancie_Cave_DiancieEncounter_Text_3:
# 142 "data/maps/Planet01_Diancie_Cave/scripts.pory"
	.string "Magnezone! You, you-\p"
	.string "You evolved?!?!?!?!\p"
	.string "This is incredible! This must be\n"
	.string "something like Mega Evolution!\p"
	.string "You always were something special, pal!\n"
	.string "We definitely wont fail now!$"
