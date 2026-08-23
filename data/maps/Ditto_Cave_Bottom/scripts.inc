Ditto_Cave_Bottom_MapScripts::
# 2 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_Bottom_Enter
	.byte 0


Ditto_Cave_Bottom_Enter::
	return


Ditto_Cave_Bottom_DittoTrainer::
# 9 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, Ditto_Cave_Bottom_Ditto_Intro, Ditto_Cave_Bottom_Ditto_Outro
# 10 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 11 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_UNUSED_0x03C
# 12 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 1
# 13 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
# 14 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
# 15 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
# 16 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 3
# 17 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 4
# 18 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 5
# 19 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 20 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 21 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 22 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_DittoTrainer_Text_0
# 23 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	closemessage
# 24 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 25 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, SPECIES_DITTO
# 26 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative RegisterSpeciesInDex
	end


Ditto_Cave_Bottom_EventScript_Item01::
# 39 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 40 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 41 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 2
# 42 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_1
# 43 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_EventScript_Item02::
# 48 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 49 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 50 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 6
# 51 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_2
# 52 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_HintText01::
# 57 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 58 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_HintText01_Text_0
# 63 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Boi::
# 68 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lockall
# 69 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	faceplayer
# 70 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 71 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 72 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Boi_Text_0
# 73 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 74 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 75 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
# 76 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_DITTO
# 77 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 78 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Boi_Text_1
# 79 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 80 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 81 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_DittoTrainer_Text_0:
# 22 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "It was just a ditto...$"

Ditto_Cave_Bottom_HintText01_Text_0:
# 58 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Biologist: We discovered a strange\n"
	.string "kind of life down here, with the ditto.\l"
	.string "It has a strange power to it. We need to\l"
	.string "take it to our lab above the waterfall\l"
	.string "and study it, immediately.$"

Ditto_Boi_Text_0:
# 72 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "You put up a good fight, buddy.$"

Ditto_Boi_Text_1:
# 78 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "DITTO!$"

Ditto_Cave_Bottom_Ditto_Intro::
# 30 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "!!!$"

Ditto_Cave_Bottom_Ditto_Outro::
# 34 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Ditto!$"
