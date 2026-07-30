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
	callnative RefreshO2Meter
# 21 "data/maps/Planet01_04/scripts.pory"
	removeobject 3
# 22 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 23 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 24 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_AddAir_Minior02::
# 29 "data/maps/Planet01_04/scripts.pory"
	lockall
# 30 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 31 "data/maps/Planet01_04/scripts.pory"
	special AddAirTimerMap
# 32 "data/maps/Planet01_04/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 33 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 34 "data/maps/Planet01_04/scripts.pory"
	callnative RegisterSpeciesInDex
# 35 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_0
# 37 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 38 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 39 "data/maps/Planet01_04/scripts.pory"
	callnative RefreshO2Meter
# 40 "data/maps/Planet01_04/scripts.pory"
	removeobject 5
# 41 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 42 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 43 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_EventScript_Item01::
# 48 "data/maps/Planet01_04/scripts.pory"
	lock
# 49 "data/maps/Planet01_04/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 50 "data/maps/Planet01_04/scripts.pory"
	removeobject 6
# 51 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x499
# 52 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_EventScript_Item02::
# 57 "data/maps/Planet01_04/scripts.pory"
	lock
# 58 "data/maps/Planet01_04/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 59 "data/maps/Planet01_04/scripts.pory"
	removeobject 7
# 60 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x49F
# 61 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText01::
# 66 "data/maps/Planet01_04/scripts.pory"
	lock
# 67 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText01_Text_0
# 70 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText02::
# 75 "data/maps/Planet01_04/scripts.pory"
	lock
# 76 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText02_Text_0
# 81 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText03::
# 86 "data/maps/Planet01_04/scripts.pory"
	lock
# 87 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText03_Text_0
# 91 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_AddAir_Minior01_Text_0:
# 16 "data/maps/Planet01_04/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_04_AddAir_Minior01_Text_1:
# 23 "data/maps/Planet01_04/scripts.pory"
	.string "Minior flew away...$"

Planet01_04_HintText01_Text_0:
# 67 "data/maps/Planet01_04/scripts.pory"
	.string "Engineer: The cave above just sends us\n"
	.string "in circles. How is this even possible?!\l"
	.string "I will get to the bottom of this!$"

Planet01_04_HintText02_Text_0:
# 76 "data/maps/Planet01_04/scripts.pory"
	.string "Scientist: The watery path ahead\n"
	.string "will reveal an incredible view of the\l"
	.string "planet's celestial bodies. There's\l"
	.string "something important going on up there,\l"
	.string "I can feel it!$"

Planet01_04_HintText03_Text_0:
# 87 "data/maps/Planet01_04/scripts.pory"
	.string "Captain: Looks like this planet isn't\n"
	.string "very large. It actually loops around\l"
	.string "here. We'll have mapped it all out in\l"
	.string "no time!$"
