# 1 "data/maps/TestZone_One/scripts.pory"

# 2 "data/maps/TestZone_One/scripts.pory"
TestZone_One_MapScripts::
# 3 "data/maps/TestZone_One/scripts.pory"
	.byte 0

TestZone_One_EventScript_MakeThingsDisappear::
# 7 "data/maps/TestZone_One/scripts.pory"
	lock
# 8 "data/maps/TestZone_One/scripts.pory"
	faceplayer
# 10 "data/maps/TestZone_One/scripts.pory"
	clearflag FLAG_UNUSED_0x020
# 11 "data/maps/TestZone_One/scripts.pory"
	clearflag FLAG_UNUSED_0x021
# 12 "data/maps/TestZone_One/scripts.pory"
	clearflag FLAG_UNUSED_0x022
# 14 "data/maps/TestZone_One/scripts.pory"
	random 3
# 16 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestZone_One_EventScript_MakeThingsDisappear_2
# 19 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestZone_One_EventScript_MakeThingsDisappear_3
# 23 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x022
TestZone_One_EventScript_MakeThingsDisappear_1:
# 26 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_MakeThingsDisappear_Text_0
# 28 "data/maps/TestZone_One/scripts.pory"
	release
	end

TestZone_One_EventScript_MakeThingsDisappear_2:
# 17 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x020
	goto TestZone_One_EventScript_MakeThingsDisappear_1

TestZone_One_EventScript_MakeThingsDisappear_3:
# 20 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x021
	goto TestZone_One_EventScript_MakeThingsDisappear_1


TestZone_One_EventScript_ExampleTrainer::
# 33 "data/maps/TestZone_One/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TORCHIC, May_Intro, May_Outro
# 34 "data/maps/TestZone_One/scripts.pory"
	msgbox PostBattle_May, MSGBOX_AUTOCLOSE
# 35 "data/maps/TestZone_One/scripts.pory"
	waitmessage
	end


TestZone_One_EventScript_MakeThingsDisappear_Text_0:
# 26 "data/maps/TestZone_One/scripts.pory"
	.string "You pressed the switch!$"

May_Intro::
# 39 "data/maps/TestZone_One/scripts.pory"
	.string "im stronk$"

May_Outro::
# 43 "data/maps/TestZone_One/scripts.pory"
	.string "fake news$"

PostBattle_May::
# 47 "data/maps/TestZone_One/scripts.pory"
	.string "Waaaaa!!!!$"
