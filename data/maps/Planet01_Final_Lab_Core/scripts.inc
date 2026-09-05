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
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_Final_Lab_Core_BeheeWalk_2
# 85 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq Planet01_Final_Lab_Core_BeheeWalk_2
# 156 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 157 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 158 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_0
# 159 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 160 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 161 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 163 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_6
# 168 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 169 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 171 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 172 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 174 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_7
# 181 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 182 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 184 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 185 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 187 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_8
# 195 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 196 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 198 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 199 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 201 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_9
# 208 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 209 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 211 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 212 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 213 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_10
# 215 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 216 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 217 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 219 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 220 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 222 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmoncry
# 223 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_11
# 235 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee2
# 236 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 238 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitse
# 239 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	playmoncry SPECIES_BEHEEYEM, CRY_MODE_ENCOUNTER
# 240 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_BEHEEYEM
# 241 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
Planet01_Final_Lab_Core_BeheeWalk_1:
# 243 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	warp MAP_PLANET01_01, 1, 31, 11
# 244 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitstate
# 245 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	release
	end

Planet01_Final_Lab_Core_BeheeWalk_2:
# 86 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 87 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 88 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_0
# 89 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 90 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 91 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 93 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 94 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 96 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 97 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 98 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_1
# 99 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 100 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 101 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 103 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 104 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 106 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 107 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 108 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_2
# 110 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 111 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 112 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 114 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 115 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 117 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 118 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 119 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_3
# 120 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 121 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 122 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 124 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee1
# 125 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 127 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 128 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 129 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmoncry
# 130 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_4
# 133 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 134 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 135 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 137 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Behee2
# 138 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmovement 0
# 140 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 141 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative DrawMugshot
# 142 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmoncry
# 143 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Planet01_Final_Lab_Core_BeheeWalk_Text_5
# 146 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmessage
# 147 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	closemessage
# 148 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative ClearMugshot
# 150 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitse
# 151 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	playmoncry SPECIES_BEHEEYEM, CRY_MODE_ENCOUNTER
# 152 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_BEHEEYEM
# 153 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
	goto Planet01_Final_Lab_Core_BeheeWalk_1


# 249 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee1:
# 250 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 251 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 252 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 253 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 254 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 255 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 256 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 257 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 258 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 259 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 260 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
# 261 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
	step_end

# 264 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Movement_Player_Behee2:
# 265 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_right
# 266 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	delay_16
# 267 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 268 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 269 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 270 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 271 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 272 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 273 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	walk_right
# 274 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	face_up
	step_end

Planet01_Final_Lab_Core_BeheeWalk_Text_0:
# 88 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Where am I?$"

Planet01_Final_Lab_Core_BeheeWalk_Text_1:
# 98 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Who are these people? They look young.$"

Planet01_Final_Lab_Core_BeheeWalk_Text_2:
# 108 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...Well, now they have lab coats on.\n"
	.string "Look a bit older too.$"

Planet01_Final_Lab_Core_BeheeWalk_Text_3:
# 119 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Now they're in space suits?!$"

Planet01_Final_Lab_Core_BeheeWalk_Text_4:
# 130 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Uggh!!!\n"
	.string "It's a weird, hideous mass of\l"
	.string "tentacles?!$"

Planet01_Final_Lab_Core_BeheeWalk_Text_5:
# 143 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Beheeyem... You must be trying to show\n"
	.string "me something. I get the feeling I\l"
	.string "should come back here later.$"

Planet01_Final_Lab_Core_BeheeWalk_Text_6:
# 163 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<This is a psychic Beheeyem's doing...\n"
	.string "In my present state, my consciousness\l"
	.string "is spread quite thin over the planet.\l"
	.string "They must be exploring it; these are my\l"
	.string "memories...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_Core_BeheeWalk_Text_7:
# 174 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<This is the Operations Leader and I,\n"
	.string "many years ago.\p"
	.string "When we first met, I was a fresh, young\n"
	.string "scientist; timid and suffering from \l"
	.string "imposter syndrome. Always worried\l"
	.string "about proving myself, always seeking\l"
	.string "validation from others.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_Core_BeheeWalk_Text_8:
# 187 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<For a long time, I was jealous of their \n"
	.string "confidence. Success or failure, they\l"
	.string "things always seemed to work out for\l"
	.string "them. But they believed in me too, and\l"
	.string "as we worked together, their praise and\l"
	.string "optimism became infectious.\p"
	.string "As we got closer, they made me begin to\n"
	.string "believe in myself.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_Core_BeheeWalk_Text_9:
# 201 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<We became partners in everything, even\n"
	.string "work. When we were both assigned to\l"
	.string "project EOD, I was overjoyed. The past\l"
	.string "few years studying an incredible planet\l"
	.string "with them and building our research\l"
	.string "facility together was everything I\l"
	.string "could have asked for. I loved them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_Core_BeheeWalk_Text_10:
# 213 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "That's very sweet. Sound like you guys\n"
	.string "were a power-couple!$"

Planet01_Final_Lab_Core_BeheeWalk_Text_11:
# 223 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Everything changed after I discovered\n"
	.string "the Deoxys cell. My experiments were \l"
	.string "disastrous; it infected me, and \l"
	.string "triggered Pal 9000's Contingency \l"
	.string "Protocol, which teleported Ops back to \l"
	.string "our ship and sent them back home on \l"
	.string "auto-pilot.\p"
	.string "All that we had, thrown so easily\n"
	.string "away, because I got so greedy.\l"
	.string "...\p"
	.string "So now you know the truth.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

DeoxysBattle_Intro::
# 74 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Here it comes! Brace yourself!$"

DeoxysBattle_Outro::
# 78 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...It's over. The cell dissolves.$"
