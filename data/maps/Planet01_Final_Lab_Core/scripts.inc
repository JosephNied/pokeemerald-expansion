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
	goto_if_ne EndB, 0
# 10 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	compare VAR_0x8005, 2
# 11 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	goto_if_ne EndB, 0
# 12 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_TEMP_3, 1
# 13 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflashlevel 5
# 15 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
EndB:
	end


# 19 "data/maps/Planet01_Final_Lab_Core/scripts.pory"

# 20 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Planet01_Final_Lab_Core_FrameTable::
# 21 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, Planet01_Final_Lab_Core_BeheeWalk
# 22 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.2byte 0

DoDeoxysBattle::
# 26 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	trainerbattle_single TRAINER_WALTER_5, DeoxysBattle_Intro, DeoxysBattle_Outro
# 27 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 28 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflag FLAG_UNUSED_0x054
# 29 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	removeobject 1
# 30 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 31 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_DEOXYS_NORMAL
# 32 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
	end


Planet01_Final_Lab_Core_BeheeWalk::
# 45 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	lock
# 46 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_0
# 47 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 48 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 49 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 50 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 51 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_1
# 63 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 64 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 65 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 66 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 67 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_2
# 74 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 75 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 76 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 77 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 78 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_3
# 85 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee2
# 86 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 87 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitse
# 88 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	playmoncry SPECIES_BEHEEYEM, CRY_MODE_ENCOUNTER
# 89 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmoncry
# 90 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_4
# 95 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_BEHEEYEM
# 96 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
# 97 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	warp MAP_PLANET01_01, 1, 31, 11
# 98 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitstate
# 99 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	release
	end


# 103 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee1:
# 104 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 105 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 106 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 107 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 108 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 109 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 110 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 111 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 112 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 113 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 114 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 115 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 116 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
# 117 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
	step_end

# 120 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee2:
# 121 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 122 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 123 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 124 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 125 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 126 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 127 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 128 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 129 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 130 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 131 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 132 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
	step_end

Planet01_Final_Lab_Core_BeheeWalk_Text_0:
# 46 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...Where am I?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_1:
# 51 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
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
# 67 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "My friends. I'm getting visions of them\n"
	.string "inviting me to hang out with them,\l"
	.string "encouraging me, getting me presents,\l"
	.string "hugging me. They always seemed to \l"
	.string "express how they feel and who they are\l"
	.string "so easily.\p"
	.string "Why couldn't I ever be like that?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_3:
# 78 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...Somehow you always know what I need.\n"
	.string "At my darkest moments, you were there\l"
	.string "to lift me up. You told me not to take\l"
	.string "this job.\p"
	.string "You were right again. All my excuses.\n"
	.string "Was I really just afraid of us getting\l"
	.string "so close, when I chose to leave?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_4:
# 90 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "It'll never be the same. I may\n"
	.string "never get to say how I feel to any of\l"
	.string "these people, and it's all my fault. Is\l"
	.string "that...\p"
	.string "What you wanted me to learn?$"

DeoxysBattle_Intro::
# 36 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Here it comes! Brace yourself!$"

DeoxysBattle_Outro::
# 40 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...It's over.$"
