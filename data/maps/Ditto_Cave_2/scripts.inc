Ditto_Cave_2_MapScripts::
# 2 "data/maps/Ditto_Cave_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_2_Enter
	.byte 0


Ditto_Cave_2_Enter::
# 6 "data/maps/Ditto_Cave_2/scripts.pory"
	special SetRandomFlags
	return


Ditto_Cave_2_EventScript_Item01::
# 10 "data/maps/Ditto_Cave_2/scripts.pory"
	lock
# 11 "data/maps/Ditto_Cave_2/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 12 "data/maps/Ditto_Cave_2/scripts.pory"
	removeobject 2
# 13 "data/maps/Ditto_Cave_2/scripts.pory"
	setflag FLAG_UNUSED_0x499
# 14 "data/maps/Ditto_Cave_2/scripts.pory"
	release
	end


Ditto_Cave_2_AddAir_Minior01::
# 19 "data/maps/Ditto_Cave_2/scripts.pory"
	lockall
# 20 "data/maps/Ditto_Cave_2/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 200
# 21 "data/maps/Ditto_Cave_2/scripts.pory"
	special AddAirTimerMap
# 22 "data/maps/Ditto_Cave_2/scripts.pory"
	msgbox Ditto_Cave_2_AddAir_Minior01_Text_0
# 24 "data/maps/Ditto_Cave_2/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 25 "data/maps/Ditto_Cave_2/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 26 "data/maps/Ditto_Cave_2/scripts.pory"
	removeobject 1
# 27 "data/maps/Ditto_Cave_2/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 28 "data/maps/Ditto_Cave_2/scripts.pory"
	msgbox Ditto_Cave_2_AddAir_Minior01_Text_1
# 29 "data/maps/Ditto_Cave_2/scripts.pory"
	releaseall
	end


Ditto_Cave_2_AddAir_Minior01_Text_0:
# 22 "data/maps/Ditto_Cave_2/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Ditto_Cave_2_AddAir_Minior01_Text_1:
# 28 "data/maps/Ditto_Cave_2/scripts.pory"
	.string "Minior flew away...$"
