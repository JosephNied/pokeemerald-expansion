Planet01_04_MapScripts::
# 2 "data/maps/Planet01_04/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_04_Enter
	.byte 0


Planet01_04_Enter::
# 6 "data/maps/Planet01_04/scripts.pory"
	special SetRandomFlags
	return

