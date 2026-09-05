Planet01_Final_Lab_Interior_MapScripts::
# 2 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Interior_Enter
# 3 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Planet01_Final_Lab_Interior_FrameTable
	.byte 0


Planet01_Final_Lab_Interior_Enter::
# 7 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflashlevel 5
# 9 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_REGISTERED_LOLA, Planet01_Final_Lab_Interior_Enter_2
# 12 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_Final_Lab_Interior_Enter_1:
# 15 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_REGISTERED_VALERIE, Planet01_Final_Lab_Interior_Enter_6
# 18 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
Planet01_Final_Lab_Interior_Enter_5:
# 21 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_set FLAG_MAP_SCRIPT_CHECKED_DEOXYS, Planet01_Final_Lab_Interior_Enter_9
	return

Planet01_Final_Lab_Interior_Enter_2:
# 10 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_Final_Lab_Interior_Enter_1

Planet01_Final_Lab_Interior_Enter_6:
# 16 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 0
	goto Planet01_Final_Lab_Interior_Enter_5

Planet01_Final_Lab_Interior_Enter_9:
# 22 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


# 26 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"

# 27 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Planet01_Final_Lab_Interior_FrameTable::
# 28 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, Planet01_Final_Lab_Interior_FinalWalk
# 29 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.2byte 0

Planet01_Final_Lab_Interior_FinalWalk::
# 33 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 34 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 35 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 36 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Planet01_Final_Lab_Interior_FinalWalk_Text_0
# 39 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 40 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 41 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 42 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThroughLab1
# 43 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 44 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 45 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 46 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Planet01_Final_Lab_Interior_FinalWalk_Text_1
# 47 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 48 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 49 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 50 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ThroughLab2
# 51 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmovement 0
# 52 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	warp MAP_PLANET01_FINAL_LAB, 1, 7, 42
# 53 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitstate
# 54 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


# 58 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Movement_ThroughLab1:
# 59 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 60 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 61 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 62 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 63 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 64 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 65 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 66 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 67 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 68 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 69 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 70 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 71 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 72 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 73 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 74 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 75 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 76 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 77 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_down
	step_end

# 80 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
Movement_ThroughLab2:
# 81 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 82 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 83 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 84 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 85 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 86 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 87 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 88 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 89 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_left
# 90 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 91 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 92 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 93 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 94 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 95 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 96 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_left
# 97 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	face_up
# 98 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_16
# 99 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	delay_16
# 100 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 101 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 102 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 103 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 104 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 105 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 106 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
# 107 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 108 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 109 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 110 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_right
# 111 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	walk_down
	step_end

Final_Lab_Interior_Remark01::
# 115 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 116 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 117 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 118 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_0
# 119 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 120 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 121 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 122 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 123 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 124 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_1
# 125 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 126 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 127 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 128 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 129 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 130 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_2
# 131 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 132 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 133 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 134 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
# 135 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_REGISTERED_LOLA
# 136 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Trash1::
# 141 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 142 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Trash1_Text_0
# 143 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Trash2::
# 148 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 149 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Trash2_Text_0
# 151 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Plant::
# 156 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 157 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Plant_Text_0
# 158 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Books::
# 163 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 164 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Books_Text_0
# 165 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Board::
# 170 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 171 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Board_Text_0
# 175 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Computer::
# 180 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 181 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Computer_Text_0
# 182 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_CraftingMachine::
# 187 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 188 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_CraftingMachine_Text_0
# 190 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Pod::
# 195 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 196 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Pod_Text_0
# 197 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_FlavorText_Pokeball::
# 202 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 203 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_FlavorText_Pokeball_Text_0
# 205 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_BiologistEncounter::
# 210 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 212 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 213 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 214 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_0
# 217 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 218 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 219 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 221 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 222 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 223 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_1
# 232 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 233 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 234 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 236 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 237 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 238 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_2
# 239 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 240 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 241 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 243 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 244 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 245 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_3
# 250 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 251 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 252 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 254 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 255 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 256 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_4
# 258 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 259 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 260 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 262 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 263 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 264 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_5
# 271 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 272 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 273 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 275 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 276 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 277 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_6
# 283 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 284 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 285 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 287 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 288 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 289 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_7
# 292 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 293 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 294 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 296 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 297 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 298 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_8
# 300 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 301 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 302 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 304 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIOLOGIST_1
# 305 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 306 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_BiologistEncounter_Text_9
# 308 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 309 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 310 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 312 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 313 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_REGISTERED_VALERIE
# 314 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Planet01_Final_Lab_Interior_FinalWalk_Text_0:
# 36 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "...Hello?\n"
	.string "...\p"
	.string "It's over. Where are you?$"

Planet01_Final_Lab_Interior_FinalWalk_Text_1:
# 46 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Hello?$"

Final_Lab_Interior_Remark01_Text_0:
# 118 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Anybody home...?$"

Final_Lab_Interior_Remark01_Text_1:
# 124 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<You're here. I can't believe it.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_Remark01_Text_2:
# 130 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "I'm kinda scared, but I'm coming...$"

Final_Lab_Interior_FlavorText_Trash1_Text_0:
# 142 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "It's a pile of trash.$"

Final_Lab_Interior_FlavorText_Trash2_Text_0:
# 149 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "The doorway is blocked by a pile of\n"
	.string "trash.$"

Final_Lab_Interior_FlavorText_Plant_Text_0:
# 157 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "It's a long dead plant.$"

Final_Lab_Interior_FlavorText_Books_Text_0:
# 164 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Old textbooks on biology and chemistry.$"

Final_Lab_Interior_FlavorText_Board_Text_0:
# 171 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Notes and calendars... Dating back\n"
	.string "several years ago. There are plans and\l"
	.string "maps for what appears to be a rapid\l"
	.string "terraforming project using Pokémon.$"

Final_Lab_Interior_FlavorText_Computer_Text_0:
# 181 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "An old computer. It's not running.$"

Final_Lab_Interior_FlavorText_CraftingMachine_Text_0:
# 188 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "A dusty, old crafting machine. Doesn't\n"
	.string "seem to work.$"

Final_Lab_Interior_FlavorText_Pod_Text_0:
# 196 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Some kind of science machine?$"

Final_Lab_Interior_FlavorText_Pokeball_Text_0:
# 203 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "A Pokéball!\p"
	.string "...It's empty.$"

Final_Lab_Interior_BiologistEncounter_Text_0:
# 214 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "!!!\n"
	.string "You-! I knew you were infected, but-\l"
	.string "I wasn't prepared to see you like this!$"

Final_Lab_Interior_BiologistEncounter_Text_1:
# 223 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}Well. I don't have much to say now. It\n"
	.string "was a terrible mistake to experiment on \l"
	.string "that Deoxys Cell so hastily; I staked \l"
	.string "my value on my discoveries, but it's \l"
	.string "clear to me now that I already had \l"
	.string "everything I needed right here with\l"
	.string "Ops.\p"
	.string "I'm thankful you're here now, to end \n"
	.string "this.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_2:
# 238 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "It was an accident.$"

Final_Lab_Interior_BiologistEncounter_Text_3:
# 245 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}Maybe, but who would I have been if I\n"
	.string "had loved myself enough to understand\l"
	.string "I didn't need to prove anything to\l"
	.string "anyone, from the beginning?\p"
	.string "I just wish Ops was here, now.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_4:
# 256 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "I'm sure Ops still loves you and thinks\p"
	.string "about you. I bet they'll try to return!$"

Final_Lab_Interior_BiologistEncounter_Text_5:
# 264 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}You have their optimism, you know that?\n"
	.string "And when you faced your fear, you\l"
	.string "overcame it.\p"
	.string "This is your story. Destroy the Cell, go\n"
	.string "home, and have a wonderful future.\p"
	.string "That's what I want now. My story ended\n"
	.string "here in tragedy a long time ago.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_6:
# 277 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "But your story didn't end. You've been\n"
	.string "fighting for years for this moment,\l"
	.string "and you helped me get here. Tragedies\l"
	.string "can be good stories too, if\l"
	.string "bittersweet, but now that I'm here,\l"
	.string "we can find a way to fix this!$"

Final_Lab_Interior_BiologistEncounter_Text_7:
# 289 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}...I think it's time for you to destroy\n"
	.string "the cell. It's in the basement behind \l"
	.string "me.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_BiologistEncounter_Text_8:
# 298 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Ok. And then what do I need to do for\n"
	.string "you?$"

Final_Lab_Interior_BiologistEncounter_Text_9:
# 306 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_BLUE}Don't worry about that now. Just, find\n"
	.string "me when it's over.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
