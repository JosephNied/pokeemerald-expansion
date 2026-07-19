Ditto_Cave_MapScripts::
# 2 "data/maps/Ditto_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_Enter
	.byte 0


Ditto_Cave_Enter::
# 6 "data/maps/Ditto_Cave/scripts.pory"
	setflashlevel 4
# 7 "data/maps/Ditto_Cave/scripts.pory"
	special SetRandomFlags
# 8 "data/maps/Ditto_Cave/scripts.pory"
	delay 10
	return


# 11 "data/maps/Ditto_Cave/scripts.pory"
Movement_DittoLeaves:
# 12 "data/maps/Ditto_Cave/scripts.pory"
	emote_exclamation_mark
# 13 "data/maps/Ditto_Cave/scripts.pory"
	delay_16
# 14 "data/maps/Ditto_Cave/scripts.pory"
	face_up
# 15 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
# 16 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
# 17 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
	step_end

Ditto_Test::
# 21 "data/maps/Ditto_Cave/scripts.pory"
	lock
# 22 "data/maps/Ditto_Cave/scripts.pory"
	faceplayer
# 23 "data/maps/Ditto_Cave/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_DittoLeaves
# 24 "data/maps/Ditto_Cave/scripts.pory"
	waitmovement 0
# 25 "data/maps/Ditto_Cave/scripts.pory"
	removeobject 1
# 26 "data/maps/Ditto_Cave/scripts.pory"
	release
	return

