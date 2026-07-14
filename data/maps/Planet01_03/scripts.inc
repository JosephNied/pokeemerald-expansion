Planet01_03_MapScripts::
# 2 "data/maps/Planet01_03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_03_Enter
	.byte 0


Planet01_03_Enter::
# 6 "data/maps/Planet01_03/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_10
# 8 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_11
# 9 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_12
# 10 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_13
# 11 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_14
# 12 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_15
# 13 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_16
# 14 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_17
# 15 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_18
# 16 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_19
# 17 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1A
# 18 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1B
# 19 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1C
# 20 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1D
# 21 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1E
# 22 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1F
	end


Planet01_03_EventScript_RockSmash01::
# 27 "data/maps/Planet01_03/scripts.pory"
	lock
# 28 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 29 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 30 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_10
# 31 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash02::
# 36 "data/maps/Planet01_03/scripts.pory"
	lock
# 37 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 38 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 39 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_11
# 40 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash03::
# 45 "data/maps/Planet01_03/scripts.pory"
	lock
# 46 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 47 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 48 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_12
# 49 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash04::
# 54 "data/maps/Planet01_03/scripts.pory"
	lock
# 55 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 56 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 57 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_13
# 58 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash05::
# 63 "data/maps/Planet01_03/scripts.pory"
	lock
# 64 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 65 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 66 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_14
# 67 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash06::
# 72 "data/maps/Planet01_03/scripts.pory"
	lock
# 73 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 74 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 75 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_15
# 76 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash07::
# 81 "data/maps/Planet01_03/scripts.pory"
	lock
# 82 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 83 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 84 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_16
# 85 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash08::
# 90 "data/maps/Planet01_03/scripts.pory"
	lock
# 91 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 92 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 93 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_17
# 94 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash09::
# 99 "data/maps/Planet01_03/scripts.pory"
	lock
# 100 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 101 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 102 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_18
# 103 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash10::
# 108 "data/maps/Planet01_03/scripts.pory"
	lock
# 109 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 110 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 111 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_19
# 112 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash11::
# 117 "data/maps/Planet01_03/scripts.pory"
	lock
# 118 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 119 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 120 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1A
# 121 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash12::
# 126 "data/maps/Planet01_03/scripts.pory"
	lock
# 127 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 128 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 129 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1B
# 130 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash13::
# 135 "data/maps/Planet01_03/scripts.pory"
	lock
# 136 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 137 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 138 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1C
# 139 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash14::
# 144 "data/maps/Planet01_03/scripts.pory"
	lock
# 145 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 146 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 147 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1D
# 148 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash15::
# 153 "data/maps/Planet01_03/scripts.pory"
	lock
# 154 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 155 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 156 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1E
# 157 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash16::
# 162 "data/maps/Planet01_03/scripts.pory"
	lock
# 163 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 164 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 165 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1F
# 166 "data/maps/Planet01_03/scripts.pory"
	release
	end

