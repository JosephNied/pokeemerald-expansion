# 1 "data/maps/Ditto_Cave_Bottom/scripts.pory"

# 2 "data/maps/Ditto_Cave_Bottom/scripts.pory"
Ditto_Cave_Bottom_MapScripts::
# 3 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.byte 0

Ditto_Cave_Bottom_DittoTrainer::
# 7 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, Ditto_Cave_Bottom_Ditto_Intro, Ditto_Cave_Bottom_Ditto_Outro
# 8 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 9 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_UNUSED_0x03C
# 10 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 1
# 11 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 12 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 13 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative DrawMugshot
# 14 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_DittoTrainer_Text_0
# 15 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	closemessage
# 16 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative ClearMugshot
# 17 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setvar VAR_0x8000, SPECIES_DITTO
# 18 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	callnative RegisterSpeciesInDex
	end


Ditto_Cave_Bottom_EventScript_Item01::
# 31 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 32 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 33 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 2
# 34 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_TEMP_1
# 35 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_HintText01::
# 40 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 41 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_HintText01_Text_0
# 46 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_DittoTrainer_Text_0:
# 14 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "It was just a ditto...$"

Ditto_Cave_Bottom_HintText01_Text_0:
# 41 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Biologist: We discovered a strange\n"
	.string "kind of life down here, with the ditto.\l"
	.string "It has a strange power to it. We need to\l"
	.string "take it to our lab above the waterfall\l"
	.string "and study it, immediately.$"

Ditto_Cave_Bottom_Ditto_Intro::
# 22 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "!!!$"

Ditto_Cave_Bottom_Ditto_Outro::
# 26 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Ditto!$"
