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
# 13 "data/maps/TestZone_One/scripts.pory"
	clearflag FLAG_UNUSED_0x023
# 14 "data/maps/TestZone_One/scripts.pory"
	clearflag FLAG_UNUSED_0x024
# 15 "data/maps/TestZone_One/scripts.pory"
	clearflag FLAG_UNUSED_0x025
# 17 "data/maps/TestZone_One/scripts.pory"
	random 3
# 19 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestZone_One_EventScript_MakeThingsDisappear_2
# 23 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestZone_One_EventScript_MakeThingsDisappear_3
# 28 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 29 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x025
TestZone_One_EventScript_MakeThingsDisappear_1:
# 32 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_MakeThingsDisappear_Text_0
# 34 "data/maps/TestZone_One/scripts.pory"
	release
	end

TestZone_One_EventScript_MakeThingsDisappear_2:
# 20 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 21 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x023
	goto TestZone_One_EventScript_MakeThingsDisappear_1

TestZone_One_EventScript_MakeThingsDisappear_3:
# 24 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 25 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x024
	goto TestZone_One_EventScript_MakeThingsDisappear_1


TestZone_One_EventScript_DeoxysEncounter::
# 39 "data/maps/TestZone_One/scripts.pory"
	lock
# 41 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 42 "data/maps/TestZone_One/scripts.pory"
	setwildbattle SPECIES_DEOXYS, 10, ITEM_NONE
# 43 "data/maps/TestZone_One/scripts.pory"
	dowildbattle
# 45 "data/maps/TestZone_One/scripts.pory"
	release
	end


TestZone_One_EventScript_BaltoyEncounter::
# 50 "data/maps/TestZone_One/scripts.pory"
	lock
# 52 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 53 "data/maps/TestZone_One/scripts.pory"
	setwildbattle SPECIES_BALTOY, 10, ITEM_NONE
# 54 "data/maps/TestZone_One/scripts.pory"
	dowildbattle
# 56 "data/maps/TestZone_One/scripts.pory"
	release
	end


TestZone_One_EventScript_AzurillEncounter::
# 61 "data/maps/TestZone_One/scripts.pory"
	lock
# 63 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 64 "data/maps/TestZone_One/scripts.pory"
	setwildbattle SPECIES_AZURILL, 10, ITEM_NONE
# 65 "data/maps/TestZone_One/scripts.pory"
	dowildbattle
# 67 "data/maps/TestZone_One/scripts.pory"
	release
	end


TestZone_One_EventScript_Item01::
# 72 "data/maps/TestZone_One/scripts.pory"
	lock
# 73 "data/maps/TestZone_One/scripts.pory"
	faceplayer
# 75 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
# 77 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TestZone_One_EventScript_Item01_2
# 83 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_Item01_Text_1
# 85 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 87 "data/maps/TestZone_One/scripts.pory"
	removeobject 6
# 89 "data/maps/TestZone_One/scripts.pory"
	release
	end

TestZone_One_EventScript_Item01_2:
# 78 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_Item01_Text_0
# 79 "data/maps/TestZone_One/scripts.pory"
	release
	end


TestZone_One_EventScript_RandomItem01::
# 94 "data/maps/TestZone_One/scripts.pory"
	lock
# 95 "data/maps/TestZone_One/scripts.pory"
	faceplayer
# 97 "data/maps/TestZone_One/scripts.pory"
	random 4
# 99 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestZone_One_EventScript_RandomItem01_2
# 103 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestZone_One_EventScript_RandomItem01_3
# 107 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestZone_One_EventScript_RandomItem01_4
# 112 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 113 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem01_Text_3
TestZone_One_EventScript_RandomItem01_1:
# 116 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 117 "data/maps/TestZone_One/scripts.pory"
	removeobject 7
# 119 "data/maps/TestZone_One/scripts.pory"
	release
	end

TestZone_One_EventScript_RandomItem01_2:
# 100 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_POTION, 1
# 101 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem01_Text_0
	goto TestZone_One_EventScript_RandomItem01_1

TestZone_One_EventScript_RandomItem01_3:
# 104 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_SUPER_POTION, 1
# 105 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem01_Text_1
	goto TestZone_One_EventScript_RandomItem01_1

TestZone_One_EventScript_RandomItem01_4:
# 108 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_REVIVE, 1
# 109 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem01_Text_2
	goto TestZone_One_EventScript_RandomItem01_1


TestZone_One_EventScript_RandomItem02::
# 124 "data/maps/TestZone_One/scripts.pory"
	lock
# 125 "data/maps/TestZone_One/scripts.pory"
	faceplayer
# 127 "data/maps/TestZone_One/scripts.pory"
	random 4
# 129 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestZone_One_EventScript_RandomItem02_2
# 133 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestZone_One_EventScript_RandomItem02_3
# 137 "data/maps/TestZone_One/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestZone_One_EventScript_RandomItem02_4
# 142 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 143 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem01_Text_3
TestZone_One_EventScript_RandomItem02_1:
# 146 "data/maps/TestZone_One/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 147 "data/maps/TestZone_One/scripts.pory"
	removeobject 8
# 149 "data/maps/TestZone_One/scripts.pory"
	release
	end

TestZone_One_EventScript_RandomItem02_2:
# 130 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_POTION, 1
# 131 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem01_Text_0
	goto TestZone_One_EventScript_RandomItem02_1

TestZone_One_EventScript_RandomItem02_3:
# 134 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_SUPER_POTION, 1
# 135 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem01_Text_1
	goto TestZone_One_EventScript_RandomItem02_1

TestZone_One_EventScript_RandomItem02_4:
# 138 "data/maps/TestZone_One/scripts.pory"
	giveitem ITEM_REVIVE, 1
# 139 "data/maps/TestZone_One/scripts.pory"
	msgbox TestZone_One_EventScript_RandomItem01_Text_2
	goto TestZone_One_EventScript_RandomItem02_1


TestZone_One_EventScript_ExampleTrainer::
# 154 "data/maps/TestZone_One/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_110_TORCHIC, May_Intro, May_Outro
# 155 "data/maps/TestZone_One/scripts.pory"
	msgbox PostBattle_May, MSGBOX_AUTOCLOSE
# 156 "data/maps/TestZone_One/scripts.pory"
	waitmessage
	end


TestZone_One_EventScript_MakeThingsDisappear_Text_0:
# 32 "data/maps/TestZone_One/scripts.pory"
	.string "You pressed the switch!$"

TestZone_One_EventScript_Item01_Text_0:
# 78 "data/maps/TestZone_One/scripts.pory"
	.string "Your Bag is full.$"

TestZone_One_EventScript_Item01_Text_1:
# 83 "data/maps/TestZone_One/scripts.pory"
	.string "Hot diggity!$"

TestZone_One_EventScript_RandomItem01_Text_0:
# 101 "data/maps/TestZone_One/scripts.pory"
	.string "You found a Potion!$"

TestZone_One_EventScript_RandomItem01_Text_1:
# 105 "data/maps/TestZone_One/scripts.pory"
	.string "You found a Super Potion!$"

TestZone_One_EventScript_RandomItem01_Text_2:
# 109 "data/maps/TestZone_One/scripts.pory"
	.string "You found a Revive!$"

TestZone_One_EventScript_RandomItem01_Text_3:
# 113 "data/maps/TestZone_One/scripts.pory"
	.string "You found a Rare Candy!$"

May_Intro::
# 160 "data/maps/TestZone_One/scripts.pory"
	.string "im stronk$"

May_Outro::
# 164 "data/maps/TestZone_One/scripts.pory"
	.string "fake news$"

PostBattle_May::
# 168 "data/maps/TestZone_One/scripts.pory"
	.string "Waaaaa!!!!$"
