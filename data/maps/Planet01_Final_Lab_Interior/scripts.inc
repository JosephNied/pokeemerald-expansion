Planet01_Final_Lab_Interior_MapScripts::
# 2 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Interior_Enter
# 3 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Planet01_Final_Lab_Interior_FrameTable
	.byte 0


Planet01_Final_Lab_Interior_Enter::
# 7 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflashlevel 2
# 9 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_TEMP_1B
# 10 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 2
# 11 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_TEMP_1A
# 12 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 3
# 13 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_TEMP_1C
# 14 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 4
# 16 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_REGISTERED_VALERIE, Planet01_Final_Lab_Interior_Enter_2
# 21 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_MAP_SCRIPT_CHECKED_DEOXYS, Planet01_Final_Lab_Interior_Enter_9
# 26 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 27 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 5
# 28 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 6
Planet01_Final_Lab_Interior_Enter_1:
# 32 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_REGISTERED_LOLA, Planet01_Final_Lab_Interior_Enter_6
# 35 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_Final_Lab_Interior_Enter_5:
# 38 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_REGISTERED_VALERIE, Planet01_Final_Lab_Interior_Enter_13
# 41 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
Planet01_Final_Lab_Interior_Enter_12:
# 44 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_set FLAG_MAP_SCRIPT_CHECKED_DEOXYS, Planet01_Final_Lab_Interior_Enter_16
	return

Planet01_Final_Lab_Interior_Enter_2:
# 17 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 18 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 5
# 19 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 6
	goto Planet01_Final_Lab_Interior_Enter_1

Planet01_Final_Lab_Interior_Enter_6:
# 33 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_Final_Lab_Interior_Enter_5

Planet01_Final_Lab_Interior_Enter_9:
# 22 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 23 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	addobject 5
# 24 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	addobject 6
	goto Planet01_Final_Lab_Interior_Enter_1

Planet01_Final_Lab_Interior_Enter_13:
# 39 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 0
	goto Planet01_Final_Lab_Interior_Enter_12

Planet01_Final_Lab_Interior_Enter_16:
# 45 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


# 49 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"

# 50 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Planet01_Final_Lab_Interior_FrameTable::
# 51 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, Planet01_Final_Lab_Interior_FinalWalk
# 52 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.2byte 0

Planet01_Final_Lab_Interior_FinalWalk::
# 56 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 57 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 58 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 59 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Planet01_Final_Lab_Interior_FinalWalk_Text_0
# 62 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 63 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 64 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 65 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThroughLab1
# 66 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 67 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThroughLab2
# 68 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 69 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	warp MAP_PLANET01_FINAL_LAB, 1, 7, 42
# 70 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitstate
# 71 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


# 75 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Movement_ThroughLab1:
# 76 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 77 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 78 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 79 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 80 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 81 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 82 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 83 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 84 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 85 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 86 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 87 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 88 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 89 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 90 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 91 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 92 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 93 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 94 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_down
	step_end

# 97 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Movement_ThroughLab2:
# 98 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 99 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 100 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 101 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 102 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 103 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 104 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 105 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 106 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_left
# 107 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 108 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 109 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 110 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 111 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 112 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 113 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 114 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_up
# 115 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_16
# 116 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_16
# 117 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 118 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 119 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 120 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 121 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 122 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 123 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 124 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 125 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 126 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 127 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 128 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
	step_end

Final_Lab_Interior_Remark01::
# 132 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 133 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 134 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 135 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_0
# 136 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 137 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 138 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 139 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 140 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 141 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_1
# 142 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 143 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 144 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 145 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 146 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 147 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_2
# 148 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 149 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 150 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 151 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
# 152 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_REGISTERED_LOLA
# 153 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Trash1::
# 158 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 159 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Trash1_Text_0
# 160 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Trash2::
# 165 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 166 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Trash2_Text_0
# 168 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Plant::
# 173 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 174 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Plant_Text_0
# 175 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Books::
# 180 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 181 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Books_Text_0
# 182 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Board::
# 187 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 188 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Board_Text_0
# 192 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Computer::
# 197 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 198 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Computer_Text_0
# 199 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_CraftingMachine::
# 204 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 205 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_CraftingMachine_Text_0
# 207 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Pod::
# 212 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 213 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Pod_Text_0
# 214 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Pokeball::
# 219 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 220 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Pokeball_Text_0
# 222 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_BiologistEncounter::
# 227 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 229 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 230 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 231 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_0
# 234 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 235 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 236 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 238 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 239 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 240 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_1
# 249 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 250 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 251 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 253 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 254 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 255 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_2
# 257 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 258 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 259 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 261 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 1, Final_Lab_Interior_BiologistEncounter_Movement_0
# 262 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay 16
# 264 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 265 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 266 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_3
# 267 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 268 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 269 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 271 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 272 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 273 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_4
# 274 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 275 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 276 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 278 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	clearflag FLAG_TEMP_1B
# 279 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	addobject 2
# 281 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 1, Final_Lab_Interior_BiologistEncounter_Movement_1
# 282 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Final_Lab_Interior_BiologistEncounter_Movement_2
# 283 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 2, Ops_moveup1
# 284 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 286 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_OPS_SMILE
# 287 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 288 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_5
# 293 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 294 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 295 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 297 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 298 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 299 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_6
# 300 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 301 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 302 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 304 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 305 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 306 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_7
# 307 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 308 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 309 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 311 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 2, Ops_moveup2
# 312 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Final_Lab_Interior_BiologistEncounter_Movement_3
# 313 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 314 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 1, Final_Lab_Interior_BiologistEncounter_Movement_4
# 315 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 317 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 318 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 319 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_8
# 321 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 322 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 323 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 325 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_OPS_SMILE
# 326 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 327 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_9
# 329 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 330 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 331 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 333 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 334 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 335 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_10
# 345 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 346 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 347 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 349 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 350 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 351 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_11
# 352 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 353 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 354 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 356 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_OPS_TEAR1
# 357 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 358 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_12
# 364 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 365 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 366 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 368 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	clearflag FLAG_TEMP_1C
# 369 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	addobject 4
# 370 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 4, Movement_JirachiPlanetLab
# 371 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 4
# 373 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 374 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 375 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_13
# 376 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 377 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 378 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 380 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 2, Final_Lab_Interior_BiologistEncounter_Movement_5
# 382 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_OPS_TEAR2
# 383 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 384 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_14
# 396 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 397 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 398 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 400 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 401 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 402 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_15
# 405 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 406 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 407 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 409 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	fadescreen FADE_TO_WHITE
# 410 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 411 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay 30
# 412 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay 30
# 413 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 1
# 414 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	addobject 3
# 415 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 3, Final_Lab_Interior_BiologistEncounter_Movement_5
# 416 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 1, Final_Lab_Interior_BiologistEncounter_Movement_5
# 417 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 419 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIO_HSMILE
# 420 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 421 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_16
# 422 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 423 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 424 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 426 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay 30
# 428 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 3, Final_Lab_Interior_BiologistEncounter_Movement_4
# 429 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 431 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay 30
# 433 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIO_HSMILE
# 434 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 435 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_17
# 438 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 439 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 440 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 442 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_OPS_TEAR2
# 443 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 444 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_18
# 445 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 446 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 447 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 449 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay 30
# 451 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 452 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 453 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_19
# 455 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 456 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 457 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 459 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 3, Final_Lab_Interior_BiologistEncounter_Movement_5
# 460 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement 2, Final_Lab_Interior_BiologistEncounter_Movement_5
# 461 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 463 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIO_HSMILE
# 464 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 465 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_20
# 467 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 468 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 469 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 471 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 472 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 473 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_21
# 475 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 476 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 477 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 479 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIO_HSMILE
# 480 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 481 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_22
# 483 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 484 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 485 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 487 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 489 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_TEMP_1C
# 490 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_TEMP_1A
# 491 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_TEMP_1B
# 492 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 4
# 493 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 3
# 494 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	removeobject 2
# 495 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 496 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	addobject 5
# 497 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	addobject 6
# 499 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 501 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 502 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_REGISTERED_VALERIE
# 503 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


# 507 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Ops_moveup1:
# 508 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_up
# 509 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_up
# 510 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_up
# 511 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_up
# 512 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_up
	step_end

# 515 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Ops_moveup2:
# 516 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_up
# 517 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_up
# 518 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_up
# 519 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_up
# 520 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_left
	step_end

# 523 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Movement_JirachiPlanetLab:
# 524 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_down
# 525 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_visible
# 526 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_4
# 527 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_invisible
# 528 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_4
# 529 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_visible
# 530 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_4
# 531 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_invisible
# 532 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_4
# 533 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_visible
# 534 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_8
# 535 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_invisible
# 536 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_8
# 537 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_visible
# 538 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_8
# 539 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_invisible
# 540 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_8
# 541 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	set_visible
	step_end

bio1::
# 545 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 546 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	faceplayer
# 547 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIO_HSMILE
# 548 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 549 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox bio1_Text_0
# 550 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 551 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 552 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 553 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


op1::
# 558 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 559 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	faceplayer
# 560 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_OPS_SMILE
# 561 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 562 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox op1_Text_0
# 565 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 566 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 567 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 568 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


# 261 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Final_Lab_Interior_BiologistEncounter_Movement_0:
# 261 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	emote_question_mark
	step_end

# 281 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Final_Lab_Interior_BiologistEncounter_Movement_1:
# 281 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	emote_exclamation_mark
	step_end

# 282 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Final_Lab_Interior_BiologistEncounter_Movement_2:
# 282 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_down
# 282 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	emote_question_mark
	step_end

# 312 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Final_Lab_Interior_BiologistEncounter_Movement_3:
# 312 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_up
	step_end

# 314 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Final_Lab_Interior_BiologistEncounter_Movement_4:
# 314 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_right
	step_end

# 380 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Final_Lab_Interior_BiologistEncounter_Movement_5:
# 380 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_down
	step_end

Planet01_Final_Lab_Interior_FinalWalk_Text_0:
# 59 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "...Hello?\n"
	.string "...\p"
	.string "It's over, guys! Where are you?$"

Final_Lab_Interior_Remark01_Text_0:
# 135 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Anybody home...?$"

Final_Lab_Interior_Remark01_Text_1:
# 141 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<You're here. I can't believe it.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_Remark01_Text_2:
# 147 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "I'm kinda scared, but I'm coming...$"

Final_Lab_Interior_FlavorText_Trash1_Text_0:
# 159 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "It's a pile of trash.$"

Final_Lab_Interior_FlavorText_Trash2_Text_0:
# 166 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "The doorway is blocked by a pile of\n"
	.string "trash.$"

Final_Lab_Interior_FlavorText_Plant_Text_0:
# 174 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "It's a long dead plant.$"

Final_Lab_Interior_FlavorText_Books_Text_0:
# 181 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Old textbooks on biology and chemistry.$"

Final_Lab_Interior_FlavorText_Board_Text_0:
# 188 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Notes and calendars... Dating back\n"
	.string "several years ago. There are plans and\l"
	.string "maps for what appears to be a rapid\l"
	.string "terraforming project using Pokémon.$"

Final_Lab_Interior_FlavorText_Computer_Text_0:
# 198 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "An old computer. It's not running.$"

Final_Lab_Interior_FlavorText_CraftingMachine_Text_0:
# 205 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "A dusty, old crafting machine. Doesn't\n"
	.string "seem to work.$"

Final_Lab_Interior_FlavorText_Pod_Text_0:
# 213 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Some kind of science machine?$"

Final_Lab_Interior_FlavorText_Pokeball_Text_0:
# 220 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "A Pokéball!\p"
	.string "...It's empty.$"

Final_Lab_Interior_BiologistEncounter_Text_0:
# 231 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "!!!\n"
	.string "You-! I knew you were infected, but-\l"
	.string "I wasn't prepared to see you like this!$"

Final_Lab_Interior_BiologistEncounter_Text_1:
# 240 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}Well. I don't have much to say now. It\n"
	.string "was a terrible mistake to experiment on\l"
	.string "that Deoxys Cell so hastily; I staked\l"
	.string "my value on my discoveries, but it's\l"
	.string "clear to me now that I already had \l"
	.string "everything I needed right here with\l"
	.string "Ops.\p"
	.string "I didn't even get to say goodbye...\n"
	.string "Oh, what would they think of me now?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_2:
# 255 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Personally, I think they'd say that\n"
	.string "you're pretty brave.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_3:
# 266 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}...What did you say? You sound like-{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_4:
# 273 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "I didn't say anything!$"

Final_Lab_Interior_BiologistEncounter_Text_5:
# 288 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Hey. Sorry for the delay. Reprogramming\n"
	.string "our ship's autopilot to send me back\l"
	.string "here with the Emergency Protocol\l"
	.string "active was pretty tricky, but I figured\l"
	.string "it out.$"

Final_Lab_Interior_BiologistEncounter_Text_6:
# 299 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}!!!!!!!!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_7:
# 306 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Ops?!$"

Final_Lab_Interior_BiologistEncounter_Text_8:
# 319 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}I... I don't know- What to say!-\n"
	.string "I didn't think you'd ever make it back!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_9:
# 327 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Hey, you know you should never\n"
	.string "underestimate me!$"

Final_Lab_Interior_BiologistEncounter_Text_10:
# 335 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}Of course! Shame on me!\n"
	.string "...\l"
	.string "...\p"
	.string "I'm so happy you're here. But love... I'm\n"
	.string "sorry... I don't think I have much time.\p"
	.string "You don't need to be a biologist to see\n"
	.string "that my body has been destroyed by the\l"
	.string "virus. The virus is ironically the only\l"
	.string "thing keeping me alive; once you defeat\l"
	.string "the Deoxys Cell, I'll...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_11:
# 351 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Oh, no.$"

Final_Lab_Interior_BiologistEncounter_Text_12:
# 358 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "As the ship was heading home, I cast a\n"
	.string "wish out into the starry universe...\p"
	.string "I may have been disappointed and\n"
	.string "frustrated by what happened, but that\l"
	.string "doesn't change the fact that you are\l"
	.string "all I ever wanted.$"

Final_Lab_Interior_BiologistEncounter_Text_13:
# 375 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Jirachi!$"

Final_Lab_Interior_BiologistEncounter_Text_14:
# 384 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "The universe is full of surprises, eh?\n"
	.string "Did you forget that Jirachi is the wish\l"
	.string "Pokémon? I encountered it floating in\l"
	.string "space while the ship was heading home.\p"
	.string "I wished for your protection.\n"
	.string "Hey, trucker. I wonder if you were part\l"
	.string "of that wish coming true?\p"
	.string "Either way, Jirachi seems to be offering\n"
	.string "YOU a wish now.\p"
	.string "Had I known how bad things were, I would\n"
	.string "have wished to heal them. Is there any\l"
	.string "chance that...$"

Final_Lab_Interior_BiologistEncounter_Text_15:
# 402 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Say no more, Ops! The name is TARC, by\n"
	.string "the way. Nice to meet you.\p"
	.string "Hey Jirachi, I wish...$"

Final_Lab_Interior_BiologistEncounter_Text_16:
# 421 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "I'm... Whole...$"

Final_Lab_Interior_BiologistEncounter_Text_17:
# 435 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "I'm... So happy.\n"
	.string "Though, as a scientist, I must say that\l"
	.string "wishes make very little sense!$"

Final_Lab_Interior_BiologistEncounter_Text_18:
# 444 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Not everything has to!$"

Final_Lab_Interior_BiologistEncounter_Text_19:
# 453 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Hate to mention this now, but things\n"
	.string "aren't over yet, are they?$"

Final_Lab_Interior_BiologistEncounter_Text_20:
# 465 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "That's right! The Deoxys Cell is still\n"
	.string "alive. We need to destroy it!$"

Final_Lab_Interior_BiologistEncounter_Text_21:
# 473 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Guys, you can leave it to me.\n"
	.string "I've been preparing for this.$"

Final_Lab_Interior_BiologistEncounter_Text_22:
# 481 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "It's in the basement, behind us.\n"
	.string "...Thank you, TARC.$"

bio1_Text_0:
# 549 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Thank you, TARC, for your selfless wish.$"

op1_Text_0:
# 562 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Kick its ass! I would, but most of my\n"
	.string "Pokémon are still infected... It was\l"
	.string "rough getting here.$"
