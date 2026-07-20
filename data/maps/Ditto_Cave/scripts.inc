Ditto_Cave_MapScripts::
# 2 "data/maps/Ditto_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_Enter
	.byte 0


Ditto_Cave_Enter::
# 6 "data/maps/Ditto_Cave/scripts.pory"
	setflashlevel 4
# 7 "data/maps/Ditto_Cave/scripts.pory"
	special SetRandomFlags
	return


# 10 "data/maps/Ditto_Cave/scripts.pory"
Movement_DittoLeaves:
# 11 "data/maps/Ditto_Cave/scripts.pory"
	face_down
# 12 "data/maps/Ditto_Cave/scripts.pory"
	emote_exclamation_mark
# 13 "data/maps/Ditto_Cave/scripts.pory"
	delay_16
# 14 "data/maps/Ditto_Cave/scripts.pory"
	delay_16
# 15 "data/maps/Ditto_Cave/scripts.pory"
	delay_16
# 16 "data/maps/Ditto_Cave/scripts.pory"
	face_up
# 17 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
# 18 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
# 19 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
	step_end

Ditto_Test::
# 23 "data/maps/Ditto_Cave/scripts.pory"
	lock
# 24 "data/maps/Ditto_Cave/scripts.pory"
	faceplayer
# 25 "data/maps/Ditto_Cave/scripts.pory"
	applymovement 1, Movement_DittoLeaves
# 26 "data/maps/Ditto_Cave/scripts.pory"
	waitmovement 0
# 27 "data/maps/Ditto_Cave/scripts.pory"
	removeobject 1
# 28 "data/maps/Ditto_Cave/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 29 "data/maps/Ditto_Cave/scripts.pory"
	releaseall
	return

