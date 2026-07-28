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
	msgbox Planet01_04_AddAir_Minior01_Text_0
# 16 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 17 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 18 "data/maps/Planet01_04/scripts.pory"
	removeobject 3
# 19 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 20 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 21 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_AddAir_Minior02::
# 26 "data/maps/Planet01_04/scripts.pory"
	lockall
# 27 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 28 "data/maps/Planet01_04/scripts.pory"
	special AddAirTimerMap
# 29 "data/maps/Planet01_04/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 30 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_0
# 32 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 33 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 34 "data/maps/Planet01_04/scripts.pory"
	removeobject 5
# 35 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 36 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 37 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_EventScript_Item01::
# 42 "data/maps/Planet01_04/scripts.pory"
	lock
# 43 "data/maps/Planet01_04/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 44 "data/maps/Planet01_04/scripts.pory"
	removeobject 7
# 45 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x499
# 46 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText01::
# 51 "data/maps/Planet01_04/scripts.pory"
	lock
# 52 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText01_Text_0
# 55 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText02::
# 60 "data/maps/Planet01_04/scripts.pory"
	lock
# 61 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText02_Text_0
# 65 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_HintText03::
# 70 "data/maps/Planet01_04/scripts.pory"
	lock
# 71 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_HintText03_Text_0
# 75 "data/maps/Planet01_04/scripts.pory"
	release
	end


Planet01_04_AddAir_Minior01_Text_0:
# 14 "data/maps/Planet01_04/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_04_AddAir_Minior01_Text_1:
# 20 "data/maps/Planet01_04/scripts.pory"
	.string "Minior flew away...$"

Planet01_04_HintText01_Text_0:
# 52 "data/maps/Planet01_04/scripts.pory"
	.string "Engineer: The cave above just sends us\n"
	.string "in circles. How is this even possible?!\l"
	.string "I will get to the bottom of this!$"

Planet01_04_HintText02_Text_0:
# 61 "data/maps/Planet01_04/scripts.pory"
	.string "Scientist: My instruments are going\n"
	.string "crazy whenever I start heading up this\l"
	.string "way. There is clearly something worth\l"
	.string "studying up here.$"

Planet01_04_HintText03_Text_0:
# 71 "data/maps/Planet01_04/scripts.pory"
	.string "Captain: Looks like this planet isn't\n"
	.string "very large. It actually loops around\l"
	.string "here. We'll have mapped it all out in\l"
	.string "no time!$"
