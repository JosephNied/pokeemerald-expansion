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
# 30 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Planet01_Final_Lab_FinalWalk_Text_0
# 43 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 44 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 45 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay 30
# 46 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 47 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 48 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Planet01_Final_Lab_FinalWalk_Text_1
# 51 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 52 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 53 "data/maps/Planet01_Final_Lab/scripts.pory"
	warp MAP_PLANET01_01, 2, 20, 15
# 54 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitstate
# 55 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


# 59 "data/maps/Planet01_Final_Lab/scripts.pory"
Movement_ToFlowers1:
# 60 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_down
# 61 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 62 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 63 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 64 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
# 65 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
	step_end

Final_Lab_Remark01::
# 69 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Final_Lab_Remark01_Movement_0
# 71 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 72 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 73 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 74 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_0
# 83 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 84 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 85 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 86 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 87 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 88 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_1
# 89 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 90 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 91 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 92 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 93 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 94 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_2
# 98 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 99 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 100 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 101 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 103 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_3
# 104 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 105 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 106 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 107 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 108 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 109 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_4
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
	msgbox Final_Lab_Remark01_Text_5
# 119 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 120 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 121 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 122 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 123 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_REGISTERED_LILA_AND_ROY
# 124 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


EventScript_CorruptCatch_V::
# 129 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 130 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 131 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 65, ITEM_NONE
# 136 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 137 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 138 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_VENUSAUR
# 139 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 140 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_4
# 141 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 1
# 142 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_H::
# 147 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 148 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 149 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_HAXORUS, 65, ITEM_NONE
# 154 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 155 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 156 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_HAXORUS
# 157 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 158 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_5
# 159 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 3
# 160 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_C::
# 165 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 166 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 167 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 65, ITEM_NONE
# 172 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 173 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 174 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHARIZARD
# 175 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 176 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_6
# 177 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 6
# 178 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_E::
# 183 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 184 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 185 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_EXCADRILL, 65, ITEM_NONE
# 190 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 191 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 192 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_EXCADRILL
# 193 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 194 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_7
# 195 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 2
# 196 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_K::
# 201 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 202 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 203 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_KINGDRA, 65, ITEM_NONE
# 208 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 209 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 210 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_KINGDRA
# 211 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 212 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_8
# 213 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 5
# 214 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_DragoniteEncounter::
# 220 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 222 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_0
# 225 "data/maps/Planet01_Final_Lab/scripts.pory"
	getpartysize
# 226 "data/maps/Planet01_Final_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge EventScript_DragoniteEncounter_2
# 232 "data/maps/Planet01_Final_Lab/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 233 "data/maps/Planet01_Final_Lab/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DragoniteEncounter_5
# 241 "data/maps/Planet01_Final_Lab/scripts.pory"
	givemon SPECIES_DRAGONITE, 50
# 242 "data/maps/Planet01_Final_Lab/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 243 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_9
# 244 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 4
# 245 "data/maps/Planet01_Final_Lab/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 247 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end

EventScript_DragoniteEncounter_2:
# 227 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_1
# 228 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end

EventScript_DragoniteEncounter_5:
# 234 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_2
# 236 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


Planet01_Final_Lab_EventScript_Item01::
# 252 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 253 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 1
# 254 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 11
# 255 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A2
# 256 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item02::
# 261 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 262 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_LIFE_ORB, 1
# 263 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 12
# 264 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 265 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item03::
# 270 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 271 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 272 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 7
# 273 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 274 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item04::
# 279 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 280 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 281 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 9
# 282 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 283 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item05::
# 288 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 289 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_CHOICE_SCARF, 1
# 290 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 10
# 291 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 292 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item06::
# 297 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 298 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 299 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 8
# 300 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 301 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
Final_Lab_Remark01_Movement_0:
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_left
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
	step_end

Planet01_Final_Lab_FinalWalk_Text_0:
# 30 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "...\n"
	.string "...\p"
	.string "There's a note on the body.\n"
	.string "It's addressed to a person I don't\l"
	.string "know.\p"
	.string "It reads:\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}In the end, I was thinking about you.\n"
	.string "Love,\p"
	.string "Your Ghost Bird\n"
	.string "P.S.\p"
	.string "I said I hated it when you called me\n"
	.string "that. But I never actually did.\l"
	.string "Not once.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_Final_Lab_FinalWalk_Text_1:
# 48 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "...I think it's time to leave.\n"
	.string "I'll take this back...\l"
	.string "Guess I have a new mission.$"

Final_Lab_Remark01_Text_0:
# 74 "data/maps/Planet01_Final_Lab/scripts.pory"
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
# 88 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Please, just hurry to the lab.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_2:
# 94 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Ok, I guess you're there?\p"
	.string "My instruments say the gravity is\n"
	.string "higher down here. Also... The air is\l"
	.string "breathable!$"

Final_Lab_Remark01_Text_3:
# 103 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, and look out... For hostiles.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_4:
# 109 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Hostiles? More infected Pokémon? They\n"
	.string "don't seem to be native to this place.\l"
	.string "Nothing down here does.$"

Final_Lab_Remark01_Text_5:
# 117 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Yeah, they're not... Remember, move\n"
	.string "slowly. Running will alert them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

EventScript_DragoniteEncounter_Text_0:
# 222 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "A Mega Dragonite! You... aren't\n"
	.string "infected?$"

EventScript_DragoniteEncounter_Text_1:
# 227 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "You want to join my team?$"

EventScript_DragoniteEncounter_Text_2:
# 234 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "I'd let you join my team,\n if I had an extra Meteor Ball.$"
