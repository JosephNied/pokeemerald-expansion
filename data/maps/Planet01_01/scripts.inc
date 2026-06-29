Planet01_01_MapScripts::
# 2 "data/maps/Planet01_01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
	.byte 0


Planet01_01_Enter::
# 7 "data/maps/Planet01_01/scripts.pory"
	special SetRandomFlags
	end


Planet01_01_HintText01::
# 28 "data/maps/Planet01_01/scripts.pory"
	lock
# 29 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 30 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item01::
# 35 "data/maps/Planet01_01/scripts.pory"
	lock
# 36 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_REPEL, 2
# 37 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 38 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirExpired::
# 43 "data/maps/Planet01_01/scripts.pory"
	lockall
# 44 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 45 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 46 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 47 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01_Text_0:
# 29 "data/maps/Planet01_01/scripts.pory"
	.string "Some text says a thing!$"

Planet01_01_AirExpired_Text_0:
# 44 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}Oxygen depleted. Teleporting back...$"
