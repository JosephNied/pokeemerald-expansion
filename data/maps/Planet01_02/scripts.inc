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
	giveitem ITEM_LUM_BERRY, 1
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
# 39 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 41 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 42 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 43 "data/maps/Planet01_02/scripts.pory"
	removeobject 5
# 44 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 45 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 46 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 51 "data/maps/Planet01_02/scripts.pory"
	lockall
# 52 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 150
# 53 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 54 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 56 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 57 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 58 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 59 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 60 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 61 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 66 "data/maps/Planet01_02/scripts.pory"
	lock
# 67 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 68 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 69 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 70 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 75 "data/maps/Planet01_02/scripts.pory"
	lock
# 76 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 77 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 78 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 79 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 84 "data/maps/Planet01_02/scripts.pory"
	lock
# 85 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 86 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 87 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 88 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 93 "data/maps/Planet01_02/scripts.pory"
	lock
# 94 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 95 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 96 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 97 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 102 "data/maps/Planet01_02/scripts.pory"
	lock
# 103 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 104 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 105 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 106 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 111 "data/maps/Planet01_02/scripts.pory"
	lock
# 112 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 113 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 114 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 115 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 120 "data/maps/Planet01_02/scripts.pory"
	lock
# 121 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 122 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 123 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 124 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 129 "data/maps/Planet01_02/scripts.pory"
	lock
# 130 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 131 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 132 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 133 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 134 "data/maps/Planet01_02/scripts.pory"
	removeobject 6
# 135 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 136 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 137 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 138 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01_Text_0:
# 39 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 45 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 131 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 136 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"
