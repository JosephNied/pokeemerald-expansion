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
	setvar VAR_AIR_TIMER_STEPS, 150
# 12 "data/maps/Planet01_04/scripts.pory"
	special AddAirTimerMap
# 13 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_0
# 15 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 16 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 17 "data/maps/Planet01_04/scripts.pory"
	removeobject 3
# 18 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 19 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 20 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_AddAir_Minior02::
# 25 "data/maps/Planet01_04/scripts.pory"
	lockall
# 26 "data/maps/Planet01_04/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 150
# 27 "data/maps/Planet01_04/scripts.pory"
	special AddAirTimerMap
# 28 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_0
# 30 "data/maps/Planet01_04/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 31 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 32 "data/maps/Planet01_04/scripts.pory"
	removeobject 5
# 33 "data/maps/Planet01_04/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 34 "data/maps/Planet01_04/scripts.pory"
	msgbox Planet01_04_AddAir_Minior01_Text_1
# 35 "data/maps/Planet01_04/scripts.pory"
	releaseall
	end


Planet01_04_AddAir_Minior01_Text_0:
# 13 "data/maps/Planet01_04/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_04_AddAir_Minior01_Text_1:
# 19 "data/maps/Planet01_04/scripts.pory"
	.string "Minior flew away...$"
