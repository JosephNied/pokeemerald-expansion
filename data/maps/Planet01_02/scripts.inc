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


Planet01_02_EventScript_RockSmash01::
# 18 "data/maps/Planet01_02/scripts.pory"
	lock
# 19 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 20 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 21 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 22 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 27 "data/maps/Planet01_02/scripts.pory"
	lock
# 28 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 29 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 30 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 31 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 36 "data/maps/Planet01_02/scripts.pory"
	lock
# 37 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 38 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 39 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 40 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 45 "data/maps/Planet01_02/scripts.pory"
	lock
# 46 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 47 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 48 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 49 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 54 "data/maps/Planet01_02/scripts.pory"
	lock
# 55 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 56 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 57 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 58 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 63 "data/maps/Planet01_02/scripts.pory"
	lock
# 64 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 65 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 66 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 67 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 72 "data/maps/Planet01_02/scripts.pory"
	lock
# 73 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 74 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 75 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 76 "data/maps/Planet01_02/scripts.pory"
	release
	end

