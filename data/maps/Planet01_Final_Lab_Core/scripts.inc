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
# 101 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 102 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 103 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 104 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 105 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_2
# 112 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 113 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 114 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 115 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 116 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_3
# 123 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee2
# 124 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 125 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitse
# 126 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	playmoncry SPECIES_BEHEEYEM, CRY_MODE_ENCOUNTER
# 127 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmoncry
# 128 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_4
# 133 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_BEHEEYEM
# 134 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
# 135 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	warp MAP_PLANET01_01, 1, 31, 11
# 136 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitstate
# 137 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	release
	end


# 141 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee1:
# 142 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 143 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
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
	walk_right
# 153 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 154 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
# 155 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
	step_end

# 158 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee2:
# 159 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 160 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
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
	walk_right
# 169 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 170 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
	step_end

Planet01_Final_Lab_Core_BeheeWalk_Text_0:
# 84 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...Where am I?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_1:
# 89 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "M-my parents?\n"
	.string "...\p"
	.string "I'm getting visions of the times\n"
	.string "they would get my siblings and I ready\l"
	.string "ready for school. Make us dinner. Take\l"
	.string "care of me when I was sick. On and on...\p"
	.string "So many memories. They really did love \n"
	.string "me, huh.\p"
	.string "I haven't seen them in so long. I know\n"
	.string "they'd be disappointed if they knew all\l"
	.string "the choices I've made now. But...\p"
	.string "Maybe I'm wrong to be so afraid of that.$"

Planet01_Final_Lab_Core_BeheeWalk_Text_2:
# 105 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "My friends. I'm getting visions of them\n"
	.string "inviting me to hang out with them,\l"
	.string "encouraging me, getting me presents,\l"
	.string "hugging me. They always seemed to \l"
	.string "express how they feel and who they are\l"
	.string "so easily.\p"
	.string "Why couldn't I ever be like that?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_3:
# 116 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...Somehow you always know what I need.\n"
	.string "At my darkest moments, you were there\l"
	.string "to lift me up. You told me not to take\l"
	.string "this job.\p"
	.string "You were right again. All my excuses.\n"
	.string "Was I really just afraid of us getting\l"
	.string "so close, when I chose to leave?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_4:
# 128 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "It'll never be the same. I may\n"
	.string "never get to say how I feel to any of\l"
	.string "these people, and it's all my fault. Is\l"
	.string "that...\p"
	.string "What you wanted me to learn?$"

DeoxysBattle_Intro::
# 74 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Here it comes! Brace yourself!$"

DeoxysBattle_Outro::
# 78 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...It's over. The cell dissolves.$"
