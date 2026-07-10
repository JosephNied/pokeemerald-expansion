# 1 "data/maps/Ditto_Cave_Bottom/scripts.pory"

# 2 "data/maps/Ditto_Cave_Bottom/scripts.pory"
Ditto_Cave_Bottom_MapScripts::
# 3 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	.byte 0

Ditto_Cave_Bottom_DittoTrainer::
# 7 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, Ditto_Intro, Ditto_Outro
# 8 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	msgbox PostBattle_Ditto, MSGBOX_AUTOCLOSE
# 9 "data/maps/Ditto_Cave_Bottom/scripts.pory"
	waitmessage
	end

