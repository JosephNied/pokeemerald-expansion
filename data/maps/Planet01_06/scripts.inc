Planet01_06_MapScripts::
# 2 "data/maps/Planet01_06/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_06_Enter
	.byte 0


Planet01_06_Enter::
# 6 "data/maps/Planet01_06/scripts.pory"
	special SetRandomFlags
	end


EventScript_SharpedoCatch::
# 11 "data/maps/Planet01_06/scripts.pory"
	lockall
# 12 "data/maps/Planet01_06/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 13 "data/maps/Planet01_06/scripts.pory"
	callnative DrawMugshot
# 14 "data/maps/Planet01_06/scripts.pory"
	msgbox EventScript_SharpedoCatch_Text_0
# 15 "data/maps/Planet01_06/scripts.pory"
	waitmessage
# 16 "data/maps/Planet01_06/scripts.pory"
	closemessage
# 17 "data/maps/Planet01_06/scripts.pory"
	callnative ClearMugshot
# 18 "data/maps/Planet01_06/scripts.pory"
	setvar VAR_0x8000, SPECIES_SHARPEDO
# 19 "data/maps/Planet01_06/scripts.pory"
	callnative RegisterSpeciesInDex
# 20 "data/maps/Planet01_06/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 21 "data/maps/Planet01_06/scripts.pory"
	waitstate
# 22 "data/maps/Planet01_06/scripts.pory"
	release
	end


darkshore_suggestion::
# 27 "data/maps/Planet01_06/scripts.pory"
	lock
# 28 "data/maps/Planet01_06/scripts.pory"
	msgbox darkshore_suggestion_Text_0
# 33 "data/maps/Planet01_06/scripts.pory"
	release
	end


EventScript_SharpedoCatch_Text_0:
# 14 "data/maps/Planet01_06/scripts.pory"
	.string "Aaah! Quick, retreat!$"

darkshore_suggestion_Text_0:
# 28 "data/maps/Planet01_06/scripts.pory"
	.string "Biologist: I discovered something\n"
	.string "incredible to the West of here.\l"
	.string "Something that is going to make Ops and\l"
	.string "I very, very famous. I just have to run\l"
	.string "some experiments on it to be sure...$"
