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
	removeobject 3
# 21 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 22 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 23 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_AddAir_Minior02::
# 28 "data/maps/Planet01_04/scripts.pory"
	lockall
# 29 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 30 "data/maps/Planet01_04/scripts.pory"
	special AddAirTimerMap
# 31 "data/maps/Planet01_04/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 32 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 33 "data/maps/Planet01_04/scripts.pory"
	callnative RegisterSpeciesInDex
# 34 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_0
# 36 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 37 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 38 "data/maps/Planet01_04/scripts.pory"
	removeobject 5
# 39 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 40 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 41 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_EventScript_Item01::
# 46 "data/maps/Planet01_04/scripts.pory"
	lock
# 47 "data/maps/Planet01_04/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 48 "data/maps/Planet01_04/scripts.pory"
	removeobject 6
# 49 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x499
# 50 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_EventScript_Item02::
# 55 "data/maps/Planet01_04/scripts.pory"
	lock
# 56 "data/maps/Planet01_04/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 57 "data/maps/Planet01_04/scripts.pory"
	removeobject 7
# 58 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x49F
# 59 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText01::
# 64 "data/maps/Planet01_04/scripts.pory"
	lock
# 65 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText01_Text_0
# 68 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText02::
# 73 "data/maps/Planet01_04/scripts.pory"
	lock
# 74 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText02_Text_0
# 79 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText03::
# 84 "data/maps/Planet01_04/scripts.pory"
	lock
# 85 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText03_Text_0
# 89 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_AddAir_Minior01_Text_0:
# 16 "data/maps/Planet01_04/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_04_AddAir_Minior01_Text_1:
# 22 "data/maps/Planet01_04/scripts.pory"
	.string "Minior flew away...$"

Planet01_04_HintText01_Text_0:
# 65 "data/maps/Planet01_04/scripts.pory"
	.string "Engineer: The cave above just sends us\n"
	.string "in circles. How is this even possible?!\l"
	.string "I will get to the bottom of this!$"

Planet01_04_HintText02_Text_0:
# 74 "data/maps/Planet01_04/scripts.pory"
	.string "Scientist: The watery path ahead\n"
	.string "will reveal an incredible view of the\l"
	.string "planet's celestial bodies. There's\l"
	.string "something important going on up there,\l"
	.string "I can feel it!$"

Planet01_04_HintText03_Text_0:
# 85 "data/maps/Planet01_04/scripts.pory"
	.string "Captain: Looks like this planet isn't\n"
	.string "very large. It actually loops around\l"
	.string "here. We'll have mapped it all out in\l"
	.string "no time!$"
