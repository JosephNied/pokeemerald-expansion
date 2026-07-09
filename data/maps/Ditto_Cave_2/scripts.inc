Ditto_Cave_2_MapScripts::
# 2 "data/maps/Ditto_Cave_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_2_Enter
	.byte 0


Ditto_Cave_2_Enter::
# 6 "data/maps/Ditto_Cave_2/scripts.pory"
	special SetRandomFlags
	return


Ditto_Cave_2_AddAir_Minior01::
# 10 "data/maps/Ditto_Cave_2/scripts.pory"
	lockall
# 11 "data/maps/Ditto_Cave_2/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 200
# 12 "data/maps/Ditto_Cave_2/scripts.pory"
	special AddAirTimerMap
# 13 "data/maps/Ditto_Cave_2/scripts.pory"
	msgbox Ditto_Cave_2_AddAir_Minior01_Text_0
# 15 "data/maps/Ditto_Cave_2/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 16 "data/maps/Ditto_Cave_2/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 17 "data/maps/Ditto_Cave_2/scripts.pory"
	removeobject 1
# 18 "data/maps/Ditto_Cave_2/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 19 "data/maps/Ditto_Cave_2/scripts.pory"
	msgbox Ditto_Cave_2_AddAir_Minior01_Text_1
# 20 "data/maps/Ditto_Cave_2/scripts.pory"
	releaseall
	end


Ditto_Cave_2_AddAir_Minior01_Text_0:
# 13 "data/maps/Ditto_Cave_2/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Ditto_Cave_2_AddAir_Minior01_Text_1:
# 19 "data/maps/Ditto_Cave_2/scripts.pory"
	.string "Minior flew away...$"
