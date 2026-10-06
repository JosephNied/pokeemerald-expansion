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
	special FlashCheck
# 13 "data/maps/Planet01_06/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_SharpedoCatch_1
# 32 "data/maps/Planet01_06/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 33 "data/maps/Planet01_06/scripts.pory"
	callnative DrawMugshot
# 34 "data/maps/Planet01_06/scripts.pory"
	msgbox EventScript_SharpedoCatch_Text_1
# 35 "data/maps/Planet01_06/scripts.pory"
	waitmessage
# 36 "data/maps/Planet01_06/scripts.pory"
	closemessage
# 37 "data/maps/Planet01_06/scripts.pory"
	callnative ClearMugshot
# 38 "data/maps/Planet01_06/scripts.pory"
	setvar VAR_0x8000, SPECIES_SHARPEDO
# 39 "data/maps/Planet01_06/scripts.pory"
	callnative RegisterSpeciesInDex
# 40 "data/maps/Planet01_06/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 41 "data/maps/Planet01_06/scripts.pory"
	waitstate
# 42 "data/maps/Planet01_06/scripts.pory"
	releaseall
	end

EventScript_SharpedoCatch_1:
# 14 "data/maps/Planet01_06/scripts.pory"
	fadescreen FADE_TO_WHITE
# 15 "data/maps/Planet01_06/scripts.pory"
	delay 15
# 16 "data/maps/Planet01_06/scripts.pory"
	setflag FLAG_TEMP_1C
# 17 "data/maps/Planet01_06/scripts.pory"
	setflag FLAG_TEMP_1D
# 18 "data/maps/Planet01_06/scripts.pory"
	setflag FLAG_TEMP_1E
# 19 "data/maps/Planet01_06/scripts.pory"
	removeobject 5
# 20 "data/maps/Planet01_06/scripts.pory"
	removeobject 4
# 21 "data/maps/Planet01_06/scripts.pory"
	removeobject 9
# 22 "data/maps/Planet01_06/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 23 "data/maps/Planet01_06/scripts.pory"
	msgbox EventScript_SharpedoCatch_Text_0
# 25 "data/maps/Planet01_06/scripts.pory"
	waitmessage
# 26 "data/maps/Planet01_06/scripts.pory"
	closemessage
# 27 "data/maps/Planet01_06/scripts.pory"
	setvar VAR_0x8000, SPECIES_SHARPEDO
# 28 "data/maps/Planet01_06/scripts.pory"
	callnative RegisterSpeciesInDex
# 29 "data/maps/Planet01_06/scripts.pory"
	releaseall
	end


darkshore_suggestion::
# 48 "data/maps/Planet01_06/scripts.pory"
	lock
# 49 "data/maps/Planet01_06/scripts.pory"
	msgbox darkshore_suggestion_Text_0
# 56 "data/maps/Planet01_06/scripts.pory"
	release
	end


EventScript_SharpedoCatch_Text_0:
# 23 "data/maps/Planet01_06/scripts.pory"
	.string "Clefable's Flash scared the Starspeedo\n"
	.string "away!$"

EventScript_SharpedoCatch_Text_1:
# 34 "data/maps/Planet01_06/scripts.pory"
	.string "Aaah! Quick, retreat!$"

darkshore_suggestion_Text_0:
# 49 "data/maps/Planet01_06/scripts.pory"
	.string "Biologist: I discovered something\n"
	.string "incredible to the west of here.\l"
	.string "Something that is going to make Ops and\l"
	.string "I very, very famous. I just have to run\l"
	.string "some experiments on it to be sure...\p"
	.string "But it appears to be a dormant Deoxys\n"
	.string "Cell.$"
