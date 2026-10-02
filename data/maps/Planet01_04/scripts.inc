Planet01_04_MapScripts::
# 2 "data/maps/Planet01_04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_04_Enter
	.byte 0


Planet01_04_Enter::
# 6 "data/maps/Planet01_04/scripts.pory"
	special SetRandomFlags
	return


Planet01_04_AddAir_Minior01::
# 10 "data/maps/Planet01_04/scripts.pory"
	lockall
# 11 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 12 "data/maps/Planet01_04/scripts.pory"
	special AddAirTimerMap
# 13 "data/maps/Planet01_04/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 14 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 15 "data/maps/Planet01_04/scripts.pory"
	callnative RegisterSpeciesInDex
# 16 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_0
# 18 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 19 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 20 "data/maps/Planet01_04/scripts.pory"
	playse SE_REPEL
# 21 "data/maps/Planet01_04/scripts.pory"
	callnative RefreshO2Meter
# 22 "data/maps/Planet01_04/scripts.pory"
	removeobject 3
# 23 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 24 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 25 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_AddAir_Minior02::
# 30 "data/maps/Planet01_04/scripts.pory"
	lockall
# 31 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 32 "data/maps/Planet01_04/scripts.pory"
	special AddAirTimerMap
# 33 "data/maps/Planet01_04/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 34 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 35 "data/maps/Planet01_04/scripts.pory"
	callnative RegisterSpeciesInDex
# 36 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_0
# 38 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 39 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 40 "data/maps/Planet01_04/scripts.pory"
	playse SE_REPEL
# 41 "data/maps/Planet01_04/scripts.pory"
	callnative RefreshO2Meter
# 42 "data/maps/Planet01_04/scripts.pory"
	removeobject 5
# 43 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 44 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 45 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_EventScript_Item01::
# 50 "data/maps/Planet01_04/scripts.pory"
	lock
# 51 "data/maps/Planet01_04/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 52 "data/maps/Planet01_04/scripts.pory"
	removeobject 6
# 53 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x499
# 54 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_EventScript_Item02::
# 59 "data/maps/Planet01_04/scripts.pory"
	lock
# 60 "data/maps/Planet01_04/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 61 "data/maps/Planet01_04/scripts.pory"
	removeobject 7
# 62 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x49F
# 63 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText01::
# 68 "data/maps/Planet01_04/scripts.pory"
	lock
# 69 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText01_Text_0
# 73 "data/maps/Planet01_04/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_04_HintText01_2
# 75 "data/maps/Planet01_04/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_04_HintText01_3
Planet01_04_HintText01_1:
# 78 "data/maps/Planet01_04/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_04_HintText01_7
Planet01_04_HintText01_6:
# 81 "data/maps/Planet01_04/scripts.pory"
	release
	end

Planet01_04_HintText01_2:
# 74 "data/maps/Planet01_04/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_04_HintText01_1

Planet01_04_HintText01_3:
# 76 "data/maps/Planet01_04/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_04_HintText01_1

Planet01_04_HintText01_7:
# 79 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_04_HintText01_6


Planet01_04_HintText02::
# 86 "data/maps/Planet01_04/scripts.pory"
	lock
# 87 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText02_Text_0
# 92 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText03::
# 97 "data/maps/Planet01_04/scripts.pory"
	lock
# 98 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText03_Text_0
# 102 "data/maps/Planet01_04/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_04_HintText03_2
# 104 "data/maps/Planet01_04/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_04_HintText03_3
Planet01_04_HintText03_1:
# 107 "data/maps/Planet01_04/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_04_HintText03_7
Planet01_04_HintText03_6:
# 110 "data/maps/Planet01_04/scripts.pory"
	release
	end

Planet01_04_HintText03_2:
# 103 "data/maps/Planet01_04/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_04_HintText03_1

Planet01_04_HintText03_3:
# 105 "data/maps/Planet01_04/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_04_HintText03_1

Planet01_04_HintText03_7:
# 108 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_04_HintText03_6


Planet01_04_Elgyem::
# 115 "data/maps/Planet01_04/scripts.pory"
	lock
# 116 "data/maps/Planet01_04/scripts.pory"
	faceplayer
# 117 "data/maps/Planet01_04/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 118 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 119 "data/maps/Planet01_04/scripts.pory"
	callnative RegisterSpeciesInDex
# 120 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_Elgyem_Text_0
# 123 "data/maps/Planet01_04/scripts.pory"
	waitmessage
# 124 "data/maps/Planet01_04/scripts.pory"
	warp MAP_PLANET01_02, 0, 21, 23
# 125 "data/maps/Planet01_04/scripts.pory"
	waitstate
# 126 "data/maps/Planet01_04/scripts.pory"
	release
	end


sableye_04::
# 131 "data/maps/Planet01_04/scripts.pory"
	lock
# 132 "data/maps/Planet01_04/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_SILVER, sableye_04_2
sableye_04_1:
# 150 "data/maps/Planet01_04/scripts.pory"
	release
	end

sableye_04_2:
# 133 "data/maps/Planet01_04/scripts.pory"
	msgbox sableye_04_Text_0
# 134 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 135 "data/maps/Planet01_04/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 136 "data/maps/Planet01_04/scripts.pory"
	waitmoncry
# 137 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_SYS_DOME_SILVER
# 138 "data/maps/Planet01_04/scripts.pory"
	removeobject 10
# 139 "data/maps/Planet01_04/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 140 "data/maps/Planet01_04/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_04_5
# 143 "data/maps/Planet01_04/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 144 "data/maps/Planet01_04/scripts.pory"
	msgbox sableye_04_Text_2
sableye_04_4:
# 146 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 147 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 148 "data/maps/Planet01_04/scripts.pory"
	callnative RegisterSpeciesInDex
	goto sableye_04_1

sableye_04_5:
# 141 "data/maps/Planet01_04/scripts.pory"
	msgbox sableye_04_Text_1
	goto sableye_04_4


Planet01_04_AddAir_Minior01_Text_0:
# 16 "data/maps/Planet01_04/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_04_AddAir_Minior01_Text_1:
# 24 "data/maps/Planet01_04/scripts.pory"
	.string "Minior flew away...$"

Planet01_04_HintText01_Text_0:
# 69 "data/maps/Planet01_04/scripts.pory"
	.string "Ops Lead: The cave above just sends us\n"
	.string "in circles. How is this even possible?!\l"
	.string "I will get to the bottom of this!\l"
	.string "...Literally!$"

Planet01_04_HintText02_Text_0:
# 87 "data/maps/Planet01_04/scripts.pory"
	.string "Ops Lead: The watery path ahead\n"
	.string "will reveal an incredible view of the\l"
	.string "planet's celestial bodies. There's\l"
	.string "something important going on up there,\l"
	.string "I can feel it!$"

Planet01_04_HintText03_Text_0:
# 98 "data/maps/Planet01_04/scripts.pory"
	.string "Captain: Looks like this planet isn't\n"
	.string "very large. It actually loops around\l"
	.string "here. We'll have mapped it all out in\l"
	.string "no time!$"

Planet01_04_Elgyem_Text_0:
# 120 "data/maps/Planet01_04/scripts.pory"
	.string "Woah! Elgyem is glowing green-\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}And however we change, I just want you\n"
	.string "to know...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_04_Text_0:
# 133 "data/maps/Planet01_04/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_04_Text_1:
# 141 "data/maps/Planet01_04/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_04_Text_2:
# 144 "data/maps/Planet01_04/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
