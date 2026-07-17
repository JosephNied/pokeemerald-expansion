Planet01_02_MapScripts::
# 2 "data/maps/Planet01_02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
	.byte 0


Planet01_02_Enter::
# 6 "data/maps/Planet01_02/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_10
# 8 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_11
# 9 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_12
# 10 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_13
# 11 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_14
# 12 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_15
# 13 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_16
	end


Planet01_02_EventScript_Item01::
# 18 "data/maps/Planet01_02/scripts.pory"
	lock
# 19 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 20 "data/maps/Planet01_02/scripts.pory"
	removeobject 24
# 21 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 22 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item02::
# 27 "data/maps/Planet01_02/scripts.pory"
	lock
# 28 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 29 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 30 "data/maps/Planet01_02/scripts.pory"
	removeobject 23
# 31 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01::
# 36 "data/maps/Planet01_02/scripts.pory"
	lockall
# 37 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 150
# 38 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 40 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 42 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 43 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 44 "data/maps/Planet01_02/scripts.pory"
	removeobject 5
# 45 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 46 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 47 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 52 "data/maps/Planet01_02/scripts.pory"
	lock
# 53 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 54 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 55 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 56 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 61 "data/maps/Planet01_02/scripts.pory"
	lock
# 62 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 63 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 64 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 65 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 70 "data/maps/Planet01_02/scripts.pory"
	lock
# 71 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 72 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 73 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 74 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 79 "data/maps/Planet01_02/scripts.pory"
	lock
# 80 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 81 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 82 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 83 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 88 "data/maps/Planet01_02/scripts.pory"
	lock
# 89 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 90 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 91 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 92 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 97 "data/maps/Planet01_02/scripts.pory"
	lock
# 98 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 99 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 100 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 101 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 106 "data/maps/Planet01_02/scripts.pory"
	lock
# 107 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 108 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 109 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 110 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01_Text_0:
# 40 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 46 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"
