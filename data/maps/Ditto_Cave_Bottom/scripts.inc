# 1 "data/maps/Ditto_Cave_Bottom/scripts.pory"

# 2 "data/maps/Ditto_Cave_Bottom/scripts.pory"
Ditto_Cave_Bottom_MapScripts::
# 3 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.byte 0

Ditto_Cave_Bottom_DittoTrainer::
# 7 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, Ditto_Cave_Bottom_Ditto_Intro, Ditto_Cave_Bottom_Ditto_Outro
# 8 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox Ditto_Cave_Bottom_PostBattle_Ditto, MSGBOX_AUTOCLOSE
# 9 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
	end


Ditto_Cave_Bottom_EventScript_Item01::
# 26 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	lock
# 27 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	giveitem ITEM_SUN_STONE, 1
# 28 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	removeobject 2
# 29 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	setflag FLAG_UNUSED_0x499
# 30 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	release
	end


Ditto_Cave_Bottom_Ditto_Intro::
# 13 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "!!!$"

Ditto_Cave_Bottom_Ditto_Outro::
# 17 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Ditto!$"

Ditto_Cave_Bottom_PostBattle_Ditto::
# 21 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.string "Ditto...$"
