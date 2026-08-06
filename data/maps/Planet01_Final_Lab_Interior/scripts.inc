Planet01_Final_Lab_Interior_MapScripts::
# 2 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Interior_Enter
	.byte 0


Planet01_Final_Lab_Interior_Enter::
# 6 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflashlevel 5
# 8 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_REGISTERED_LOLA, Planet01_Final_Lab_Interior_Enter_2
# 11 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_Final_Lab_Interior_Enter_1:
# 14 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_REGISTERED_CRISTIN, Planet01_Final_Lab_Interior_Enter_5
# 17 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

Planet01_Final_Lab_Interior_Enter_2:
# 9 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_Final_Lab_Interior_Enter_1

Planet01_Final_Lab_Interior_Enter_5:
# 15 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


Final_Lab_Interior_Remark01::
# 22 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 23 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 24 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 25 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_0
# 26 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 27 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 28 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 29 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 30 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 31 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_1
# 32 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 33 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 34 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 35 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 36 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 37 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_2
# 38 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 39 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 40 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 41 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
# 42 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_REGISTERED_LOLA
# 43 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Trash1::
# 48 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 49 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Trash1_Text_0
# 50 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Trash2::
# 55 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 56 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Trash2_Text_0
# 58 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Plant::
# 63 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 64 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Plant_Text_0
# 65 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Books::
# 70 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 71 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Books_Text_0
# 72 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Board::
# 77 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 78 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Board_Text_0
# 82 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Computer::
# 87 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 88 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Computer_Text_0
# 89 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_CraftingMachine::
# 94 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 95 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_CraftingMachine_Text_0
# 97 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Pod::
# 102 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 103 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Pod_Text_0
# 104 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Pokeball::
# 109 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 110 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Pokeball_Text_0
# 112 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_BiologistEncounter::
# 117 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 119 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 120 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 121 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_0
# 123 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 124 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 125 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 127 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 128 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 129 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_1
# 160 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 161 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 162 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 166 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 167 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 168 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_Remark01_Text_0:
# 25 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Anybody home...?$"

Final_Lab_Interior_Remark01_Text_1:
# 31 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<Finally, you are here! Come forward!>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_Remark01_Text_2:
# 37 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "This is crazy! But, I'm coming...$"

Final_Lab_Interior_FlavorText_Trash1_Text_0:
# 49 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "It's a pile of trash.$"

Final_Lab_Interior_FlavorText_Trash2_Text_0:
# 56 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "The doorway is blocked by a pile of\n"
	.string "trash.$"

Final_Lab_Interior_FlavorText_Plant_Text_0:
# 64 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "It's a long dead plant.$"

Final_Lab_Interior_FlavorText_Books_Text_0:
# 71 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Old textbooks on biology and chemistry.$"

Final_Lab_Interior_FlavorText_Board_Text_0:
# 78 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Notes and calendars... Dating back 30\n"
	.string "years ago?! There are plans and maps for\l"
	.string "what I can only assume are a rapid\l"
	.string "terraforming project using Pokemon.$"

Final_Lab_Interior_FlavorText_Computer_Text_0:
# 88 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "An old computer. It's not running.$"

Final_Lab_Interior_FlavorText_CraftingMachine_Text_0:
# 95 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "A dusty, old crafting machine. Doesn't\n"
	.string "seem to work.$"

Final_Lab_Interior_FlavorText_Pod_Text_0:
# 103 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Some kind of science machine?$"

Final_Lab_Interior_FlavorText_Pokeball_Text_0:
# 110 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "A Pokeball!\p"
	.string "...It's empty.$"

Final_Lab_Interior_BiologistEncounter_Text_0:
# 121 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "!!!\n"
	.string "You-!$"

Final_Lab_Interior_BiologistEncounter_Text_1:
# 129 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "You're here...\n"
	.string "I'm so happy...\l"
	.string "...\p"
	.string "Let me explain.\p"
	.string "I was the biologist on the team of \n"
	.string "scientists whose notes you've been \l"
	.string "reading. \p"
	.string "At the bottom of a cave full of Dittos, \n"
	.string "we discovered the cell of a being we \l"
	.string "soon learned was the terrifying \l"
	.string "Deoxys, the space virus Pokemon. \p"
	.string "We tried to control it. We tried to \n"
	.string "change it. We tried to... Master it.\p"
	.string "We failed. And it infected and \n"
	.string "transformed my body. \p"
	.string "The others abandoned me. They stole \n"
	.string "the ship, and erased the Captain's \l"
	.string "memories to avoid being held \l"
	.string "accountable for their mutiny and \l"
	.string "leaving me to succumb to the virus.\p"
	.string "...You've seen those creatures running \n"
	.string "around, the ones that appear \l"
	.string "aggressive and corrupted? Yes, those \l"
	.string "creatures were infected by Deoxys, and \l"
	.string "will infect others as well. \p"
	.string "When you're infected, your body may die \n"
	.string "but the virus inside will not. It will \l"
	.string "continue to use you to seek out new \l"
	.string "hosts to infect. That's all Deoxys \l"
	.string "wants. All infected beings share a part \l"
	.string "in the mind and will of Deoxys.$"
