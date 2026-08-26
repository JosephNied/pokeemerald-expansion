Ditto_Cave_Bottom_MapScripts::
# 2 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_Bottom_Enter
	.byte 0


Ditto_Cave_Bottom_Enter::
# 6 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


Ditto_Cave_Bottom_DittoTrainer::
# 10 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, Ditto_Cave_Bottom_Ditto_Intro, Ditto_Cave_Bottom_Ditto_Outro
# 11 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 12 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_UNUSED_0x03C
# 13 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 1
# 14 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
# 15 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
# 16 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
# 17 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 3
# 18 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 4
# 19 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 5
# 20 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 21 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 22 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 23 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_DittoTrainer_Text_0
# 24 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	closemessage
# 25 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 26 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, SPECIES_DITTO
# 27 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative RegisterSpeciesInDex
	end


Ditto_Cave_Bottom_EventScript_Item01::
# 40 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 41 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 42 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 2
# 43 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_1
# 44 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_EventScript_Item02::
# 49 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 50 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 51 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 6
# 52 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_2
# 53 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_HintText01::
# 58 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 59 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_HintText01_Text_0
# 65 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq Ditto_Cave_Bottom_HintText01_2
Ditto_Cave_Bottom_HintText01_1:
# 70 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end

Ditto_Cave_Bottom_HintText01_2:
# 66 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	call voicedialogueABC
# 67 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Ditto_Cave_Bottom_HintText01_1


Ditto_Boi::
# 75 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lockall
# 76 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	faceplayer
# 77 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 78 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 79 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Boi_Text_0
# 80 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 81 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 82 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
# 83 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_DITTO
# 84 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 85 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Boi_Text_1
# 86 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 87 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 88 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_DittoTrainer_Text_0:
# 23 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "It was just a ditto...$"

Ditto_Cave_Bottom_HintText01_Text_0:
# 59 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Biologist: We discovered a strange\n"
	.string "kind of life down here, with the ditto.\l"
	.string "It has a strange power to it. We need to\l"
	.string "take it to our lab above the waterfall\l"
	.string "and study it, immediately.$"

Ditto_Boi_Text_0:
# 79 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "You put up a good fight, buddy.$"

Ditto_Boi_Text_1:
# 85 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "DITTO!$"

Ditto_Cave_Bottom_Ditto_Intro::
# 31 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "!!!$"

Ditto_Cave_Bottom_Ditto_Outro::
# 35 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Ditto!$"
