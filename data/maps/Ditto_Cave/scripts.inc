Ditto_Cave_MapScripts::
# 2 "data/maps/Ditto_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_Enter
	.byte 0


Ditto_Cave_Enter::
# 6 "data/maps/Ditto_Cave/scripts.pory"
	setflashlevel 4
# 7 "data/maps/Ditto_Cave/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BELDUM, Ditto_Cave_Enter_4
Ditto_Cave_Enter_3:
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

Ditto_Cave_Enter_4:
# 7 "data/maps/Ditto_Cave/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x03C, Ditto_Cave_Enter_2
	goto Ditto_Cave_Enter_3


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
# 38 "data/maps/Ditto_Cave/scripts.pory"
	closemessage
# 39 "data/maps/Ditto_Cave/scripts.pory"
	callnative ClearMugshot
# 40 "data/maps/Ditto_Cave/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 42 "data/maps/Ditto_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_ge Ditto_Test_2
Ditto_Test_1:
# 51 "data/maps/Ditto_Cave/scripts.pory"
	releaseall
	return

Ditto_Test_2:
# 43 "data/maps/Ditto_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 44 "data/maps/Ditto_Cave/scripts.pory"
	callnative DrawMugshot
# 45 "data/maps/Ditto_Cave/scripts.pory"
	msgbox Ditto_Test_Text_1
# 47 "data/maps/Ditto_Cave/scripts.pory"
	waitmessage
# 48 "data/maps/Ditto_Cave/scripts.pory"
	closemessage
# 49 "data/maps/Ditto_Cave/scripts.pory"
	callnative ClearMugshot
	goto Ditto_Test_1


Ditto_Test_Text_0:
# 35 "data/maps/Ditto_Cave/scripts.pory"
	.string "!!!\l"
	.string "Who was that?!\p"
	.string "And why did they look like me?!$"

Ditto_Test_Text_1:
# 45 "data/maps/Ditto_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Your shadow-self.\n"
	.string "Confront it, if you dare...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
