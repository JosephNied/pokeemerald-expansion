Ditto_Cave_MapScripts::
# 2 "data/maps/Ditto_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_Enter
	.byte 0


Ditto_Cave_Enter::
# 6 "data/maps/Ditto_Cave/scripts.pory"
	setflashlevel 4
# 7 "data/maps/Ditto_Cave/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BELDUM, Ditto_Cave_Enter_2
# 10 "data/maps/Ditto_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
Ditto_Cave_Enter_1:
# 12 "data/maps/Ditto_Cave/scripts.pory"
	special SetRandomFlags
	return

Ditto_Cave_Enter_2:
# 8 "data/maps/Ditto_Cave/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Ditto_Cave_Enter_1


# 15 "data/maps/Ditto_Cave/scripts.pory"
Movement_DittoLeaves:
# 16 "data/maps/Ditto_Cave/scripts.pory"
	face_down
# 17 "data/maps/Ditto_Cave/scripts.pory"
	emote_exclamation_mark
# 18 "data/maps/Ditto_Cave/scripts.pory"
	delay_16
# 19 "data/maps/Ditto_Cave/scripts.pory"
	delay_16
# 20 "data/maps/Ditto_Cave/scripts.pory"
	delay_16
# 21 "data/maps/Ditto_Cave/scripts.pory"
	face_up
# 22 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
# 23 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
# 24 "data/maps/Ditto_Cave/scripts.pory"
	walk_up
	step_end

Ditto_Test::
# 28 "data/maps/Ditto_Cave/scripts.pory"
	lock
# 29 "data/maps/Ditto_Cave/scripts.pory"
	applymovement 1, Movement_DittoLeaves
# 30 "data/maps/Ditto_Cave/scripts.pory"
	waitmovement 0
# 31 "data/maps/Ditto_Cave/scripts.pory"
	removeobject 1
# 32 "data/maps/Ditto_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 33 "data/maps/Ditto_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 34 "data/maps/Ditto_Cave/scripts.pory"
	callnative DrawMugshot
# 35 "data/maps/Ditto_Cave/scripts.pory"
	msgbox Ditto_Test_Text_0
# 37 "data/maps/Ditto_Cave/scripts.pory"
	callnative ClearMugshot
# 38 "data/maps/Ditto_Cave/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 39 "data/maps/Ditto_Cave/scripts.pory"
	releaseall
	return


Ditto_Test_Text_0:
# 35 "data/maps/Ditto_Cave/scripts.pory"
	.string "!!!\l"
	.string "Who was that?!$"
