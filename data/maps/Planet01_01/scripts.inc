Planet01_01_MapScripts::
# 2 "data/maps/Planet01_01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
	.byte 0


Planet01_01_Enter::
# 6 "data/maps/Planet01_01/scripts.pory"
	special SetRandomFlags
	end


Planet01_01_HintText01::
# 11 "data/maps/Planet01_01/scripts.pory"
	lock
# 12 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 13 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText01_Text_0:
# 12 "data/maps/Planet01_01/scripts.pory"
	.string "Some text says a thing!$"
