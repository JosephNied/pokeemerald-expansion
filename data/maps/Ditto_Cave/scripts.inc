Ditto_Cave_MapScripts::
# 2 "data/maps/Ditto_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_Enter
	.byte 0


Ditto_Cave_Enter::
# 6 "data/maps/Ditto_Cave/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Ditto_Cave/scripts.pory"
	delay 10
	return


# 10 "data/maps/Ditto_Cave/scripts.pory"
Movement_DittoLeaves:
# 11 "data/maps/Ditto_Cave/scripts.pory"
	emote_exclamation_mark
# 12 "data/maps/Ditto_Cave/scripts.pory"
	delay_16
# 13 "data/maps/Ditto_Cave/scripts.pory"
	face_up
# 14 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
# 15 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
# 16 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
	step_end

Ditto_Test::
# 20 "data/maps/Ditto_Cave/scripts.pory"
	lock
# 21 "data/maps/Ditto_Cave/scripts.pory"
	faceplayer
# 22 "data/maps/Ditto_Cave/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_DittoLeaves
# 23 "data/maps/Ditto_Cave/scripts.pory"
	waitmovement 0
# 24 "data/maps/Ditto_Cave/scripts.pory"
	removeobject 1
# 25 "data/maps/Ditto_Cave/scripts.pory"
	release
	return

