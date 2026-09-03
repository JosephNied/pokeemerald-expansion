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
# 27 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_ge Ditto_Cave_Bottom_DittoTrainer_2
Ditto_Cave_Bottom_DittoTrainer_1:
# 36 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, SPECIES_DITTO
# 37 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative RegisterSpeciesInDex
	end

Ditto_Cave_Bottom_DittoTrainer_2:
# 28 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 29 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 30 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_DittoTrainer_Text_1
# 31 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 32 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	closemessage
# 33 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
	goto Ditto_Cave_Bottom_DittoTrainer_1


Ditto_Cave_Bottom_EventScript_Item01::
# 50 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 51 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 52 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 2
# 53 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_1
# 54 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_EventScript_Item02::
# 59 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 60 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 61 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 6
# 62 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_2
# 63 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_HintText01::
# 68 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 69 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_HintText01_Text_0
# 74 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	closemessage
# 76 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq Ditto_Cave_Bottom_HintText01_2
Ditto_Cave_Bottom_HintText01_1:
# 90 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end

Ditto_Cave_Bottom_HintText01_2:
# 77 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_ge Ditto_Cave_Bottom_HintText01_5
Ditto_Cave_Bottom_HintText01_4:
# 87 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Ditto_Cave_Bottom_HintText01_1

Ditto_Cave_Bottom_HintText01_5:
# 78 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 79 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 80 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_HintText01_Text_1
# 83 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 84 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	closemessage
# 85 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
	goto Ditto_Cave_Bottom_HintText01_4


Ditto_Boi::
# 95 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lockall
# 96 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	faceplayer
# 97 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 98 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 99 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Boi_Text_0
# 100 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 101 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 102 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
# 103 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_DITTO
# 104 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 105 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Boi_Text_1
# 106 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 107 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 108 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_DittoTrainer_Text_0:
# 23 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "It was just a ditto...$"

Ditto_Cave_Bottom_DittoTrainer_Text_1:
# 30 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh... Well, yeah, I knew that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Ditto_Cave_Bottom_HintText01_Text_0:
# 69 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Biologist: I discovered a strange\n"
	.string "kind of life down here, with the ditto.\l"
	.string "It has a strange power to it. I need to\l"
	.string "take it to our lab above the waterfall\l"
	.string "and study it, immediately.$"

Ditto_Cave_Bottom_HintText01_Text_1:
# 80 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<This is where I found it...\n"
	.string "Or, it found me. It hurts to see this\l"
	.string "place again.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Ditto_Boi_Text_0:
# 99 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "You put up a good fight, buddy.$"

Ditto_Boi_Text_1:
# 105 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "DITTO!$"

Ditto_Cave_Bottom_Ditto_Intro::
# 41 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "!!!$"

Ditto_Cave_Bottom_Ditto_Outro::
# 45 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Ditto!$"
