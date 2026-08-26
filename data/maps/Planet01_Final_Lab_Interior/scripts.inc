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
# 136 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 137 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 138 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 140 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 141 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 142 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_2
# 143 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 144 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 145 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 147 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 148 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 149 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_3
# 169 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 170 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 171 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 173 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 174 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 175 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_4
# 177 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 178 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 179 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 181 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 182 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 183 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_5
# 184 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 185 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 186 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 188 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 189 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 190 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_6
# 191 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 192 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 193 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 196 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 197 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 198 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_Remark01_Text_0:
# 25 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Anybody home...?$"

Final_Lab_Interior_Remark01_Text_1:
# 31 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<You're here. I can't believe it.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_Remark01_Text_2:
# 37 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "I'm kinda scared, but I'm coming...$"

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
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well, here I am. You want to know how \n"
	.string "I've been helping. You see, Deoxys and\l"
	.string "I are one. It wants to spread. I do not.\l"
	.string "Without my concentration, the entire\l"
	.string "planet would be overrun by now. Don't\l"
	.string "give me credit, though. This is my fault\l"
	.string "in the first place, you see.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_2:
# 142 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "...$"

Final_Lab_Interior_BiologistEncounter_Text_3:
# 149 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<There isn't much more to say, really. \n"
	.string "But I do want to confess one thing.\l"
	.string "I could never let myself be happy. I\l"
	.string "could never allow myself to be a part of\l"
	.string "this world, with these people. I could\l"
	.string "never accept myself. So, I abandoned my\l"
	.string "team and they abandoned me in turn.\p"
	.string "Even the memory of me was erased!...\p"
	.string "Who would I have been if I allowed\n"
	.string "myself to love others? If I loved\l"
	.string "myself? These are questions I carry\l"
	.string "with me to the end, unanswered.\p"
	.string "You're wondering why I'm telling you\n"
	.string "this. It's because I've been reading \l"
	.string "your mind and seeing into your heart.\p"
	.string "You're much like me. You self-sabotage,\n"
	.string "like me. You hate yourself, just like \l"
	.string "me... Please...\p"
	.string "Don't do what I did and throw it all\n"
	.string "away.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_4:
# 175 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Very well... Go down into the basement.\n"
	.string "You'll find the source. Defeat it.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_5:
# 183 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "What will happen to you?$"

Final_Lab_Interior_BiologistEncounter_Text_6:
# 190 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<...I wouldn't worry about that. Go.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
