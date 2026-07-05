Planet01_01_MapScripts::
# 2 "data/maps/Planet01_01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
# 3 "data/maps/Planet01_01/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Planet01_01_FrameTable
	.byte 0


Planet01_01_Enter::
# 7 "data/maps/Planet01_01/scripts.pory"
	special SetRandomFlags
# 8 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 1000
# 9 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
	end


# 13 "data/maps/Planet01_01/scripts.pory"

# 14 "data/maps/Planet01_01/scripts.pory"
Planet01_01_FrameTable::
# 15 "data/maps/Planet01_01/scripts.pory"
	map_script_2 VAR_AIR_TIMER_TRIGGERED, 1, Planet01_01_StartAirTimer
# 16 "data/maps/Planet01_01/scripts.pory"
	.2byte 0

Planet01_01_StartAirTimer::
# 20 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 21 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 22 "data/maps/Planet01_01/scripts.pory"
	lockall
# 23 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 24 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 29 "data/maps/Planet01_01/scripts.pory"
	lock
# 30 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 31 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item01::
# 36 "data/maps/Planet01_01/scripts.pory"
	lock
# 37 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_REPEL, 2
# 38 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 39 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirExpired::
# 44 "data/maps/Planet01_01/scripts.pory"
	lockall
# 45 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 46 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 47 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 48 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 53 "data/maps/Planet01_01/scripts.pory"
	lockall
# 54 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 100
# 55 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 56 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 58 "data/maps/Planet01_01/scripts.pory"
	releaseall
# 59 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x032
	end


Planet01_01_AddAir_Minior02::
# 64 "data/maps/Planet01_01/scripts.pory"
	lockall
# 65 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 100
# 66 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 67 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 69 "data/maps/Planet01_01/scripts.pory"
	releaseall
# 70 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
	end


Planet01_01_StartAirTimer_Text_0:
# 23 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_HintText01_Text_0:
# 30 "data/maps/Planet01_01/scripts.pory"
	.string "Some text says a thing!$"

Planet01_01_AirExpired_Text_0:
# 45 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 56 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"
