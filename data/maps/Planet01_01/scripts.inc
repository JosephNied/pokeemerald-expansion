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
	compare VAR_0x8004, 18
# 11 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 12 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8005, 10
# 13 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 15 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 200
# 16 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 18 "data/maps/Planet01_01/scripts.pory"
End:
	end


# 22 "data/maps/Planet01_01/scripts.pory"

# 23 "data/maps/Planet01_01/scripts.pory"
Planet01_01_FrameTable::
# 24 "data/maps/Planet01_01/scripts.pory"
	map_script_2 VAR_AIR_TIMER_TRIGGERED, 1, Planet01_01_StartAirTimer
# 25 "data/maps/Planet01_01/scripts.pory"
	.2byte 0

Planet01_01_StartAirTimer::
# 29 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 30 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 31 "data/maps/Planet01_01/scripts.pory"
	lockall
# 32 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 33 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_EventScript_Item01::
# 38 "data/maps/Planet01_01/scripts.pory"
	lock
# 39 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 40 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 41 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 42 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item02::
# 47 "data/maps/Planet01_01/scripts.pory"
	lock
# 48 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 49 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 50 "data/maps/Planet01_01/scripts.pory"
	removeobject 11
# 51 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirWarning::
# 56 "data/maps/Planet01_01/scripts.pory"
	lockall
# 57 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 58 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AirExpired::
# 63 "data/maps/Planet01_01/scripts.pory"
	lockall
# 64 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 65 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 66 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 67 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 72 "data/maps/Planet01_01/scripts.pory"
	lockall
# 73 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 200
# 74 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 75 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 77 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 78 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 79 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 80 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 81 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 82 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 87 "data/maps/Planet01_01/scripts.pory"
	lockall
# 88 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 200
# 89 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 90 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 92 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 93 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 94 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 95 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 96 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 97 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 102 "data/maps/Planet01_01/scripts.pory"
	lock
# 103 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 111 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 116 "data/maps/Planet01_01/scripts.pory"
	lock
# 117 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 121 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 126 "data/maps/Planet01_01/scripts.pory"
	lock
# 127 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 132 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 137 "data/maps/Planet01_01/scripts.pory"
	lock
# 138 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 142 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_StartAirTimer_Text_0:
# 32 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 57 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 64 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 75 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 81 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 103 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition XXX. \p"
	.string "Our team has placed notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a base here for research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 117 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. We can capture the O2 they\l"
	.string "generate and use it to refill the oxygen\l"
	.string "in our life support systems. How lucky!$"

Planet01_01_HintText03_Text_0:
# 127 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 138 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"
