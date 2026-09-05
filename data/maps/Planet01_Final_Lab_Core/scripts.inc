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
# 85 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 86 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 87 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_0
# 88 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 89 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 90 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 92 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_1
# 94 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 95 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 97 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 98 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 99 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 100 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 101 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_2
# 108 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 109 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 110 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 111 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 112 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_3
# 120 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 121 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 122 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 123 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 124 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_4
# 131 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 132 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 134 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 135 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 136 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_5
# 138 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 139 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 140 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 142 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 143 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 145 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmoncry
# 146 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_6
# 157 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee2
# 158 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 159 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitse
# 160 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	playmoncry SPECIES_BEHEEYEM, CRY_MODE_ENCOUNTER
# 161 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_BEHEEYEM
# 162 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
# 163 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	warp MAP_PLANET01_01, 1, 31, 11
# 164 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitstate
# 165 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	release
	end


# 169 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee1:
# 170 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 171 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 172 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 173 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 174 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 175 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 176 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 177 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 178 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 179 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 180 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
# 181 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
	step_end

# 184 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee2:
# 185 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 186 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 187 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 188 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 189 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 190 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 191 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 192 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 193 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 194 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
	step_end

Planet01_Final_Lab_Core_BeheeWalk_Text_0:
# 87 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Where am I?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_1:
# 92 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<A Beheeyem... It's tapped into my mind \n"
	.string "and is showing you my memories...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_Core_BeheeWalk_Text_2:
# 101 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<This is the Operations Leader and I,\n"
	.string "many years ago.\p"
	.string "When we first met, I was a fresh, young\n"
	.string "scientist; timid and suffering from \l"
	.string "imposter syndrome. Always worried\l"
	.string "about proving myself, always seeking\l"
	.string "validation from others.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_Core_BeheeWalk_Text_3:
# 112 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<For a long time, I was jealous of their \n"
	.string "confidence. Success or failure, they\l"
	.string "things always seemed to work out for\l"
	.string "them. But they believed in me too, and\l"
	.string "as we worked together, their praise and\l"
	.string "optimism became infectious.\p"
	.string "As we got closer, they made me begin to\l"
	.string "believe in myself.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_Core_BeheeWalk_Text_4:
# 124 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<We became partners in everything, even\n"
	.string "work. When we were both assigned to\l"
	.string "project EOD, I was overjoyed. The past\l"
	.string "few years studying an incredible planet\l"
	.string "with them and building our research\l"
	.string "facility together was everything I\l"
	.string "could have asked for. I loved them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_Core_BeheeWalk_Text_5:
# 136 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "That's very sweet. Sound like you guys\n"
	.string "were a power-couple!$"

Planet01_Final_Lab_Core_BeheeWalk_Text_6:
# 146 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Everything changed after I discovered\n"
	.string "the Deoxys cell. My experiments were \l"
	.string "disastrous; it infected me, and \l"
	.string "triggered Pal 9000's Contingency \l"
	.string "Protocol, which teleported Ops back to \l"
	.string "our ship and sent them back home on \l"
	.string "auto-pilot. All that we had, thrown\l"
	.string "away, because I got so greedy.\l"
	.string "...\p"
	.string "So now you know the truth.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

DeoxysBattle_Intro::
# 74 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Here it comes! Brace yourself!$"

DeoxysBattle_Outro::
# 78 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...It's over. The cell dissolves.$"
