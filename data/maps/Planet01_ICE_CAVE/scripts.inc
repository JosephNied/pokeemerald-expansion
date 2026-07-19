Planet01_ICE_CAVE_MapScripts::
# 2 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_ICE_CAVE_Enter
	.byte 0


Planet01_ICE_CAVE_Enter::
# 6 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	special SetRandomFlags
	return


Planet01_Ice_Cave_EventScript_Item01::
# 10 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 11 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 12 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 10
# 13 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x49D
# 14 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


Planet01_Ice_Cave_EventScript_Item02::
# 19 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 20 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 21 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 9
# 22 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x49E
# 23 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end

