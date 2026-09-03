Planet01_Final_Lab_Core_MapScripts::
# 2 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Core_Enter
# 3 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Planet01_Final_Lab_Core_FrameTable
	.byte 0


Planet01_Final_Lab_Core_Enter::
# 7 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 8 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	compare VAR_0x8004, 0
# 9 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	goto_if_ne OtherEnter, 0
# 10 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	compare VAR_0x8005, 2
# 11 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	goto_if_ne OtherEnter, 0
# 12 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflashlevel 5
# 13 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_TEMP_3, 1
# 15 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
OtherEnter:
# 16 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 17 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	compare VAR_0x8004, 20
# 18 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	goto_if_ne EndB, 0
# 19 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	compare VAR_0x8005, 24
# 20 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	goto_if_ne EndB, 0
# 21 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflashlevel 0
# 22 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_TEMP_4, 1
# 24 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
EndB:
	end


# 28 "data/maps/Planet01_Final_Lab_Core/scripts.pory"

# 29 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Planet01_Final_Lab_Core_FrameTable::
# 30 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, Planet01_Final_Lab_Core_BeheeWalk
# 31 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	map_script_2 VAR_TEMP_4, 1, Planet01_Final_Lab_Core_FinalFight
# 32 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.2byte 0

Planet01_Final_Lab_Core_FinalFight::
# 36 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	lock
# 37 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Deoxys1
# 38 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 39 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement 1, Movement_Deoxys2
# 40 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 41 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 42 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflag FLAG_UNUSED_0x054
# 43 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	removeobject 1
# 44 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_DEOXYS_NORMAL
# 45 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
# 46 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	trainerbattle_single TRAINER_WALTER_5, DeoxysBattle_Intro, DeoxysBattle_Outro
# 47 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflag FLAG_MAP_SCRIPT_CHECKED_DEOXYS
# 48 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflag FLAG_DEOXYS_ROCK_COMPLETE
# 49 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	clearflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
# 50 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	warp MAP_PLANET01_FINAL_LAB_INTERIOR, 2, 15, 1
# 51 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitstate
# 52 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	release
	end


# 56 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Deoxys1:
# 57 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 58 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 59 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_up
# 60 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_up
# 61 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_up
# 62 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
	step_end

# 65 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Deoxys2:
# 66 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_down
# 67 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_down
# 68 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_down
# 69 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_down
# 70 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_down
# 71 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_down
	step_end

Planet01_Final_Lab_Core_BeheeWalk::
# 83 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	lock
# 84 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_0
# 85 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 86 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 87 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 88 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 89 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_1
# 96 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 97 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 98 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 99 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 100 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_2
# 107 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 108 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 109 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 110 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 111 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_3
# 117 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee2
# 118 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 119 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitse
# 120 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	playmoncry SPECIES_BEHEEYEM, CRY_MODE_ENCOUNTER
# 121 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmoncry
# 122 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_4
# 131 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_BEHEEYEM
# 132 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
# 133 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	warp MAP_PLANET01_01, 1, 31, 11
# 134 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitstate
# 135 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	release
	end


# 139 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee1:
# 140 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 141 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 142 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 143 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 144 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 145 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 146 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 147 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 148 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 149 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 150 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 151 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 152 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
# 153 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
	step_end

# 156 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee2:
# 157 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 158 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 159 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 160 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 161 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 162 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 163 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 164 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 165 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 166 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 167 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 168 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
	step_end

Planet01_Final_Lab_Core_BeheeWalk_Text_0:
# 84 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...Where am I?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_1:
# 89 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "M-my parents?\n"
	.string "...\p"
	.string "I love them, and they love me. But I\n"
	.string "know they'd be disappointed that I no\l"
	.string "longer believe the things they do, and\l"
	.string "in the choices I've made. It's easier...\l"
	.string "To just avoid them...$"

Planet01_Final_Lab_Core_BeheeWalk_Text_2:
# 100 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "My friends. So many memories of them...\n"
	.string "They always seem to express their\l"
	.string "feelings and who they are so easily, and\l"
	.string "they accept everybody as they are.\l"
	.string "Even me.\p"
	.string "I feel so selfish and jealous.\n"
	.string "Why couldn't I ever be that way?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_3:
# 111 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...You asked me if I loved myself. When I\n"
	.string "laughed and said Of course not!, you \l"
	.string "told me that it broke your heart, \l"
	.string "because you loved me.\p"
	.string "...I resolved to love myself. But, even \n"
	.string "now I'm not sure I know how to do it.$"

Planet01_Final_Lab_Core_BeheeWalk_Text_4:
# 122 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "And now I may never get the chance. I\n"
	.string "never appreciated just how pathetic it\l"
	.string "is that even when I'm surrounded by\l"
	.string "people who love and support me, I\l"
	.string "choose to make myself miserable.\p"
	.string "And I may never get fix any of this\n"
	.string "broken shit, because I chose to\l"
	.string "distract myself and escape instead.\l"
	.string "Is that... What you wanted to show me?$"

DeoxysBattle_Intro::
# 74 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Here it comes! Brace yourself!$"

DeoxysBattle_Outro::
# 78 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...It's over. The cell dissolves.$"
