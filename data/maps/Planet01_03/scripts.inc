Planet01_03_MapScripts::
# 2 "data/maps/Planet01_03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_03_Enter
	.byte 0


Planet01_03_Enter::
# 6 "data/maps/Planet01_03/scripts.pory"
	special SetRandomFlags
	return

