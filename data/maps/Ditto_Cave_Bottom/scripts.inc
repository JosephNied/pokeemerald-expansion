Ditto_Cave_Bottom_MapScripts::
# 2 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_Bottom_Enter
	.byte 0


Ditto_Cave_Bottom_Enter::
# 6 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_TEMP_2, 0
	end


Ditto_Cave_Bottom_DittoTrainer::
# 11 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, Ditto_Cave_Bottom_Ditto_Intro, Ditto_Cave_Bottom_Ditto_Outro
# 12 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 13 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_UNUSED_0x03C
# 14 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 1
# 15 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
# 16 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
# 17 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
# 18 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 3
# 19 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 4
# 20 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	addobject 5
# 21 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 22 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 23 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 24 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_DittoTrainer_Text_0
# 25 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	closemessage
# 26 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 28 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, SPECIES_DITTO
# 29 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative RegisterSpeciesInDex
	end


Ditto_Cave_Bottom_EventScript_Item01::
# 42 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 43 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 44 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 2
# 45 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_1
# 46 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_EventScript_Item02::
# 51 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 52 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 53 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 6
# 54 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_2
# 55 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_HintText01::
# 60 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 61 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_HintText01_Text_0
# 65 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 66 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	closemessage
# 67 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq Ditto_Cave_Bottom_HintText01_2
Ditto_Cave_Bottom_HintText01_1:
# 74 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end

Ditto_Cave_Bottom_HintText01_2:
# 68 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x8E6, Ditto_Cave_Bottom_HintText01_5
Ditto_Cave_Bottom_HintText01_4:
# 72 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Ditto_Cave_Bottom_HintText01_1

Ditto_Cave_Bottom_HintText01_5:
# 69 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	call voicedialogueABC
# 70 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_UNUSED_0x8E6
	goto Ditto_Cave_Bottom_HintText01_4


Ditto_Boi::
# 79 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 80 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	faceplayer
# 81 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 82 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 83 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Boi_Text_0
# 84 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 85 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 86 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
# 87 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_DITTO
# 88 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 89 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Boi_Text_1
# 90 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
# 91 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 92 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_DittoTrainer_Text_0:
# 24 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "It was just a ditto...$"

Ditto_Cave_Bottom_HintText01_Text_0:
# 61 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Biologist: The heat within this crucible\n"
	.string "of a cave has produced many powerful\l"
	.string "sun stones. Would be pretty useful if\l"
	.string "we needed to evolve certain Pokémon.$"

Ditto_Boi_Text_0:
# 83 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "You put up a good fight, buddy.$"

Ditto_Boi_Text_1:
# 89 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "DITTO!$"

Ditto_Cave_Bottom_Ditto_Intro::
# 33 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "!!!$"

Ditto_Cave_Bottom_Ditto_Outro::
# 37 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Ditto!$"
