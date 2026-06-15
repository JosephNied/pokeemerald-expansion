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
	clearflag FLAG_UNUSED_0x023
# 27 "data/maps/TestZone_One/scripts.pory"
	clearflag FLAG_UNUSED_0x024
# 28 "data/maps/TestZone_One/scripts.pory"
	clearflag FLAG_UNUSED_0x025
# 30 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_MakeThingsDisappear_Text_0
# 32 "data/maps/TestZone_One/scripts.pory"
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


TestZone_One_EventScript_DeoxysEncounter::
# 37 "data/maps/TestZone_One/scripts.pory"
	lock
# 39 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 40 "data/maps/TestZone_One/scripts.pory"
	setwildbattle SPECIES_DEOXYS, 10, ITEM_NONE
# 41 "data/maps/TestZone_One/scripts.pory"
	dowildbattle
# 43 "data/maps/TestZone_One/scripts.pory"
	release
	end


TestZone_One_EventScript_BaltoyEncounter::
# 48 "data/maps/TestZone_One/scripts.pory"
	lock
# 50 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 51 "data/maps/TestZone_One/scripts.pory"
	setwildbattle SPECIES_BALTOY, 10, ITEM_NONE
# 52 "data/maps/TestZone_One/scripts.pory"
	dowildbattle
# 54 "data/maps/TestZone_One/scripts.pory"
	release
	end


TestZone_One_EventScript_AzurillEncounter::
# 59 "data/maps/TestZone_One/scripts.pory"
	lock
# 61 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 62 "data/maps/TestZone_One/scripts.pory"
	setwildbattle SPECIES_AZURILL, 10, ITEM_NONE
# 63 "data/maps/TestZone_One/scripts.pory"
	dowildbattle
# 65 "data/maps/TestZone_One/scripts.pory"
	release
	end


TestZone_One_EventScript_Item01::
# 70 "data/maps/TestZone_One/scripts.pory"
	lock
# 71 "data/maps/TestZone_One/scripts.pory"
	faceplayer
# 73 "data/maps/TestZone_One/scripts.pory"
	givemon SPECIES_MAGNEZONE, 50, ITEM_MAGNET
# 75 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestZone_One_EventScript_Item01_2
# 82 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_Item01_Text_1
TestZone_One_EventScript_Item01_1:
# 84 "data/maps/TestZone_One/scripts.pory"
	waitmessage
# 85 "data/maps/TestZone_One/scripts.pory"
	releaseall
	end

TestZone_One_EventScript_Item01_2:
# 76 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_Item01_Text_0
# 77 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 78 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 79 "data/maps/TestZone_One/scripts.pory"
	removeobject 6
	goto TestZone_One_EventScript_Item01_1


TestZone_One_EventScript_RandomItem01::
# 90 "data/maps/TestZone_One/scripts.pory"
	lock
# 91 "data/maps/TestZone_One/scripts.pory"
	faceplayer
# 92 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_MASTER_BALL, 10
# 97 "data/maps/TestZone_One/scripts.pory"
	release
	end


TestZone_One_EventScript_RandomItem02::
# 102 "data/maps/TestZone_One/scripts.pory"
	lock
# 103 "data/maps/TestZone_One/scripts.pory"
	faceplayer
# 105 "data/maps/TestZone_One/scripts.pory"
	random 4
# 107 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestZone_One_EventScript_RandomItem02_2
# 111 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestZone_One_EventScript_RandomItem02_3
# 115 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestZone_One_EventScript_RandomItem02_4
# 120 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 121 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem02_Text_3
TestZone_One_EventScript_RandomItem02_1:
# 124 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 125 "data/maps/TestZone_One/scripts.pory"
	removeobject 8
# 127 "data/maps/TestZone_One/scripts.pory"
	release
	end

TestZone_One_EventScript_RandomItem02_2:
# 108 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_POTION, 1
# 109 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem02_Text_0
	goto TestZone_One_EventScript_RandomItem02_1

TestZone_One_EventScript_RandomItem02_3:
# 112 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_SUPER_POTION, 1
# 113 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem02_Text_1
	goto TestZone_One_EventScript_RandomItem02_1

TestZone_One_EventScript_RandomItem02_4:
# 116 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_REVIVE, 1
# 117 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem02_Text_2
	goto TestZone_One_EventScript_RandomItem02_1


TestZone_One_EventScript_ExampleTrainer::
# 132 "data/maps/TestZone_One/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TORCHIC, May_Intro, May_Outro
# 133 "data/maps/TestZone_One/scripts.pory"
	msgbox PostBattle_May, MSGBOX_AUTOCLOSE
# 134 "data/maps/TestZone_One/scripts.pory"
	waitmessage
	end


TestZone_One_EventScript_MakeThingsDisappear_Text_0:
# 30 "data/maps/TestZone_One/scripts.pory"
	.string "You pressed the switch!$"

TestZone_One_EventScript_Item01_Text_0:
# 76 "data/maps/TestZone_One/scripts.pory"
	.string "Added Magnezone to party.$"

TestZone_One_EventScript_Item01_Text_1:
# 82 "data/maps/TestZone_One/scripts.pory"
	.string "Your party is full!$"

TestZone_One_EventScript_RandomItem02_Text_0:
# 109 "data/maps/TestZone_One/scripts.pory"
	.string "You found a Potion!$"

TestZone_One_EventScript_RandomItem02_Text_1:
# 113 "data/maps/TestZone_One/scripts.pory"
	.string "You found a Super Potion!$"

TestZone_One_EventScript_RandomItem02_Text_2:
# 117 "data/maps/TestZone_One/scripts.pory"
	.string "You found a Revive!$"

TestZone_One_EventScript_RandomItem02_Text_3:
# 121 "data/maps/TestZone_One/scripts.pory"
	.string "You found a Rare Candy!$"

May_Intro::
# 138 "data/maps/TestZone_One/scripts.pory"
	.string "im stronk$"

May_Outro::
# 142 "data/maps/TestZone_One/scripts.pory"
	.string "fake news$"

PostBattle_May::
# 146 "data/maps/TestZone_One/scripts.pory"
	.string "Waaaaa!!!!$"
