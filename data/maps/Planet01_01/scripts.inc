Planet01_01_MapScripts::
# 2 "data/maps/Planet01_01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
# 3 "data/maps/Planet01_01/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Planet01_01_FrameTable
	.byte 0


Planet01_01_Enter::
# 7 "data/maps/Planet01_01/scripts.pory"
	special SetRandomFlags
# 9 "data/maps/Planet01_01/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 10 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8005, 10
# 11 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 13 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 200
# 14 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 16 "data/maps/Planet01_01/scripts.pory"
End:
	end


# 20 "data/maps/Planet01_01/scripts.pory"

# 21 "data/maps/Planet01_01/scripts.pory"
Planet01_01_FrameTable::
# 22 "data/maps/Planet01_01/scripts.pory"
	map_script_2 VAR_AIR_TIMER_TRIGGERED, 1, Planet01_01_StartAirTimer
# 23 "data/maps/Planet01_01/scripts.pory"
	.2byte 0

Planet01_01_StartAirTimer::
# 27 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 28 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 29 "data/maps/Planet01_01/scripts.pory"
	lockall
# 30 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 31 "data/maps/Planet01_01/scripts.pory"
	releaseall
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


Planet01_01_AirWarning::
# 44 "data/maps/Planet01_01/scripts.pory"
	lockall
# 45 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 46 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AirExpired::
# 51 "data/maps/Planet01_01/scripts.pory"
	lockall
# 52 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 53 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 54 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 55 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 60 "data/maps/Planet01_01/scripts.pory"
	lockall
# 61 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 100
# 62 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 63 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 65 "data/maps/Planet01_01/scripts.pory"
	releaseall
# 66 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_UNUSED_0x032
	end


Planet01_01_AddAir_Minior02::
# 71 "data/maps/Planet01_01/scripts.pory"
	lockall
# 72 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 100
# 73 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 74 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 76 "data/maps/Planet01_01/scripts.pory"
	releaseall
# 77 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_UNUSED_0x02B
	end


Planet01_01_HintText01::
# 82 "data/maps/Planet01_01/scripts.pory"
	lock
# 83 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 84 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_StartAirTimer_Text_0:
# 30 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 45 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 52 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 63 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_HintText01_Text_0:
# 83 "data/maps/Planet01_01/scripts.pory"
	.string "Some text says a thing!$"
