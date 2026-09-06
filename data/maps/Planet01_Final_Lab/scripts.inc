Planet01_Final_Lab_MapScripts::
# 2 "data/maps/Planet01_Final_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Enter
# 3 "data/maps/Planet01_Final_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Planet01_Final_Lab_FrameTable
	.byte 0


Planet01_Final_Lab_Enter::
# 7 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 8 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative StopAirTimer
# 9 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DisableO2Meter
# 10 "data/maps/Planet01_Final_Lab/scripts.pory"
	goto_if_unset FLAG_REGISTERED_LILA_AND_ROY, Planet01_Final_Lab_Enter_2
# 13 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_Final_Lab_Enter_1:
# 15 "data/maps/Planet01_Final_Lab/scripts.pory"
	goto_if_set FLAG_MAP_SCRIPT_CHECKED_DEOXYS, Planet01_Final_Lab_Enter_5
	return

Planet01_Final_Lab_Enter_2:
# 11 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_Final_Lab_Enter_1

Planet01_Final_Lab_Enter_5:
# 16 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


# 20 "data/maps/Planet01_Final_Lab/scripts.pory"

# 21 "data/maps/Planet01_Final_Lab/scripts.pory"
Planet01_Final_Lab_FrameTable::
# 22 "data/maps/Planet01_Final_Lab/scripts.pory"
	map_script_2 VAR_TEMP_2, 1, Planet01_Final_Lab_FinalWalk
# 23 "data/maps/Planet01_Final_Lab/scripts.pory"
	.2byte 0

Planet01_Final_Lab_FinalWalk::
# 27 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 28 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ToFlowers1
# 29 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmovement 0
# 31 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 32 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 33 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Planet01_Final_Lab_FinalWalk_Text_0
# 34 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 35 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 36 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement 14, Planet01_Final_Lab_FinalWalk_Movement_0
# 39 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement 13, Planet01_Final_Lab_FinalWalk_Movement_0
# 41 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 42 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 43 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Planet01_Final_Lab_FinalWalk_Text_1
# 44 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 45 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 46 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 48 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 49 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 50 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Planet01_Final_Lab_FinalWalk_Text_2
# 55 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 56 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 57 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 59 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 60 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 61 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Planet01_Final_Lab_FinalWalk_Text_3
# 63 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 64 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 65 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 67 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 68 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 69 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Planet01_Final_Lab_FinalWalk_Text_4
# 73 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 74 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 75 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 77 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement 14, Planet01_Final_Lab_FinalWalk_Movement_1
# 78 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement 13, Planet01_Final_Lab_FinalWalk_Movement_1
# 80 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay 30
# 82 "data/maps/Planet01_Final_Lab/scripts.pory"
	warp MAP_PLANET01_01, 2, 20, 15
# 83 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitstate
# 84 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


# 88 "data/maps/Planet01_Final_Lab/scripts.pory"
Movement_ToFlowers1:
# 89 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_down
# 90 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 91 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 92 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 93 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
# 94 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
	step_end

Final_Lab_Remark01::
# 98 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 99 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Final_Lab_Remark01_Movement_0
# 100 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 101 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 103 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_0
# 112 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 113 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 114 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 115 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 116 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 117 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_1
# 118 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 119 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 120 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 121 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 122 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 123 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_2
# 127 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 128 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 129 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 130 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 131 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 132 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_3
# 133 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 134 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 135 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 136 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 137 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 138 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_4
# 141 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 142 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 143 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 144 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 145 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 146 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_5
# 148 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 149 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 150 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 151 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 152 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_REGISTERED_LILA_AND_ROY
# 153 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


EventScript_CorruptCatch_V::
# 158 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 159 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 160 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 65, ITEM_NONE
# 165 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 166 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 167 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_VENUSAUR
# 168 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 169 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_4
# 170 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 1
# 171 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_H::
# 176 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 177 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 178 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_HAXORUS, 65, ITEM_NONE
# 183 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 184 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 185 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_HAXORUS
# 186 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 187 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_5
# 188 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 3
# 189 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_C::
# 194 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 195 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 196 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 65, ITEM_NONE
# 201 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 202 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 203 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHARIZARD
# 204 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 205 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_6
# 206 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 6
# 207 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_E::
# 212 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 213 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 214 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_EXCADRILL, 65, ITEM_NONE
# 219 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 220 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 221 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_EXCADRILL
# 222 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 223 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_7
# 224 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 2
# 225 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_K::
# 230 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 231 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 232 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_KINGDRA, 65, ITEM_NONE
# 237 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 238 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 239 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_KINGDRA
# 240 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 241 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_8
# 242 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 5
# 243 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_DragoniteEncounter::
# 249 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 251 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_0
# 254 "data/maps/Planet01_Final_Lab/scripts.pory"
	getpartysize
# 255 "data/maps/Planet01_Final_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge EventScript_DragoniteEncounter_2
# 261 "data/maps/Planet01_Final_Lab/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 262 "data/maps/Planet01_Final_Lab/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DragoniteEncounter_5
# 270 "data/maps/Planet01_Final_Lab/scripts.pory"
	givemon SPECIES_DRAGONITE, 50
# 271 "data/maps/Planet01_Final_Lab/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 272 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_9
# 273 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 4
# 274 "data/maps/Planet01_Final_Lab/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 276 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end

EventScript_DragoniteEncounter_2:
# 256 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_1
# 257 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end

EventScript_DragoniteEncounter_5:
# 263 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_2
# 265 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


Planet01_Final_Lab_EventScript_Item01::
# 281 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 282 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 1
# 283 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 11
# 284 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A2
# 285 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item02::
# 290 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 291 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_LIFE_ORB, 1
# 292 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 12
# 293 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 294 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item03::
# 299 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 300 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 301 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 7
# 302 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 303 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item04::
# 308 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 309 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 310 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 9
# 311 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 312 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item05::
# 317 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 318 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_CHOICE_SCARF, 1
# 319 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 10
# 320 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 321 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item06::
# 326 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 327 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 328 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 8
# 329 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 330 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
Planet01_Final_Lab_FinalWalk_Movement_0:
# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_left
	step_end

# 77 "data/maps/Planet01_Final_Lab/scripts.pory"
Planet01_Final_Lab_FinalWalk_Movement_1:
# 77 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_right
	step_end

# 99 "data/maps/Planet01_Final_Lab/scripts.pory"
Final_Lab_Remark01_Movement_0:
# 99 "data/maps/Planet01_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 99 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_left
# 99 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
	step_end

Planet01_Final_Lab_FinalWalk_Text_0:
# 33 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Guys! I beat it the Cell!$"

Planet01_Final_Lab_FinalWalk_Text_1:
# 43 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "We know! Now, we're back to work.$"

Planet01_Final_Lab_FinalWalk_Text_2:
# 50 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "First, we need to fix up our lab. Second,\n"
	.string "we need to find out how to cure our\l"
	.string "infected mons.\p"
	.string "I have some ideas... But I'll be more\n"
	.string "careful to do things the right way.$"

Planet01_Final_Lab_FinalWalk_Text_3:
# 61 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "You guys just don't quit! Think it's\n"
	.string "time I leave though.$"

Planet01_Final_Lab_FinalWalk_Text_4:
# 69 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Don't be a stranger!\n"
	.string "This planet is quite beautiful, when\l"
	.string "nothing is chasing you.\p"
	.string "Thank you, TARC.$"

Final_Lab_Remark01_Text_0:
# 103 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "WOW!\p"
	.string "This place is huge!!!\n"
	.string "How is this even possible?\l"
	.string "Was this place just like this, or was\l"
	.string "your team responsible?\p"
	.string "Where is this light coming from? I\n"
	.string "think I see the lab, in the distance...\p"
	.string "But how did you build it? I have so many\n"
	.string "questions!$"

Final_Lab_Remark01_Text_1:
# 117 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Please, just hurry to the lab.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_2:
# 123 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Ok, I guess you're there?\p"
	.string "My instruments say the gravity is\n"
	.string "higher down here. Also... The air is\l"
	.string "breathable!$"

Final_Lab_Remark01_Text_3:
# 132 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, and look out... For hostiles.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_4:
# 138 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Hostiles? More infected Pokémon? They\n"
	.string "don't seem to be native to this place.\l"
	.string "Nothing down here does.$"

Final_Lab_Remark01_Text_5:
# 146 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Yeah, they're not... Remember, move\n"
	.string "slowly. Running will alert them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

EventScript_DragoniteEncounter_Text_0:
# 251 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "A Mega Dragonite! You... aren't\n"
	.string "infected?$"

EventScript_DragoniteEncounter_Text_1:
# 256 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "You want to join my team?$"

EventScript_DragoniteEncounter_Text_2:
# 263 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "I'd let you join my team,\n if I had an extra Meteor Ball.$"
