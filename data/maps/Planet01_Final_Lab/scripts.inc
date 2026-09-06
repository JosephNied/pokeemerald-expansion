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
	setvar VAR_0x8000, MUGSHOT_OPS_SMILE
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
	setvar VAR_0x8000, MUGSHOT_BIO_HSMILE
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
# 64 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 65 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 66 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 68 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_BIO_HSMILE
# 69 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Planet01_Final_Lab_FinalWalk_Text_4
# 74 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 75 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 76 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 78 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay 30
# 80 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement 14, Planet01_Final_Lab_FinalWalk_Movement_1
# 81 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement 13, Planet01_Final_Lab_FinalWalk_Movement_1
# 83 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay 30
# 85 "data/maps/Planet01_Final_Lab/scripts.pory"
	warp MAP_PLANET01_01, 2, 20, 15
# 86 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitstate
# 87 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


# 91 "data/maps/Planet01_Final_Lab/scripts.pory"
Movement_ToFlowers1:
# 92 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_down
# 93 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 94 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 95 "data/maps/Planet01_Final_Lab/scripts.pory"
	walk_right
# 96 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
# 97 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
	step_end

Final_Lab_Remark01::
# 101 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Final_Lab_Remark01_Movement_0
# 103 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 104 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 105 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 106 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_0
# 111 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 112 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 113 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 114 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 115 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 116 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_1
# 121 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 122 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 123 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 124 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 125 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 126 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_2
# 129 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 130 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 131 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 132 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 133 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 134 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_3
# 135 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 136 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 137 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 138 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 139 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_REGISTERED_LILA_AND_ROY
# 140 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


EventScript_CorruptCatch_V::
# 145 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 146 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 147 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 65, ITEM_NONE
# 152 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 153 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 154 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_VENUSAUR
# 155 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 156 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_4
# 157 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 1
# 158 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_H::
# 163 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 164 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 165 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_HAXORUS, 65, ITEM_NONE
# 170 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 171 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 172 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_HAXORUS
# 173 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 174 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_5
# 175 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 3
# 176 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_C::
# 181 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 182 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 183 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 65, ITEM_NONE
# 188 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 189 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 190 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHARIZARD
# 191 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 192 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_6
# 193 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 6
# 194 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_E::
# 199 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 200 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 201 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_EXCADRILL, 65, ITEM_NONE
# 206 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 207 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 208 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_EXCADRILL
# 209 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 210 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_7
# 211 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 2
# 212 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_K::
# 217 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 218 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 219 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_KINGDRA, 65, ITEM_NONE
# 224 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 225 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 226 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_KINGDRA
# 227 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 228 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_8
# 229 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 5
# 230 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_DragoniteEncounter::
# 236 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 238 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_0
# 241 "data/maps/Planet01_Final_Lab/scripts.pory"
	getpartysize
# 242 "data/maps/Planet01_Final_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge EventScript_DragoniteEncounter_2
# 248 "data/maps/Planet01_Final_Lab/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 249 "data/maps/Planet01_Final_Lab/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DragoniteEncounter_5
# 257 "data/maps/Planet01_Final_Lab/scripts.pory"
	givemon SPECIES_DRAGONITE, 50
# 258 "data/maps/Planet01_Final_Lab/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 259 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_9
# 260 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 4
# 261 "data/maps/Planet01_Final_Lab/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 263 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end

EventScript_DragoniteEncounter_2:
# 243 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_1
# 244 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end

EventScript_DragoniteEncounter_5:
# 250 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_2
# 252 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


Planet01_Final_Lab_EventScript_Item01::
# 268 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 269 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 1
# 270 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 11
# 271 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A2
# 272 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item02::
# 277 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 278 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_LIFE_ORB, 1
# 279 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 12
# 280 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 281 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item03::
# 286 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 287 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 288 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 7
# 289 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 290 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item04::
# 295 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 296 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 297 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 9
# 298 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 299 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item05::
# 304 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 305 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_CHOICE_SCARF, 1
# 306 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 10
# 307 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 308 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item06::
# 313 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 314 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 315 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 8
# 316 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 317 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
Planet01_Final_Lab_FinalWalk_Movement_0:
# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_left
	step_end

# 80 "data/maps/Planet01_Final_Lab/scripts.pory"
Planet01_Final_Lab_FinalWalk_Movement_1:
# 80 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_right
	step_end

# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
Final_Lab_Remark01_Movement_0:
# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_left
# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
	step_end

Planet01_Final_Lab_FinalWalk_Text_0:
# 33 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Guys! I destroyed the Cell!$"

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
	.string "...\p"
	.string "You guys just don't quit! Think it's\n"
	.string "time I leave though.$"

Planet01_Final_Lab_FinalWalk_Text_4:
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Don't be a stranger!\n"
	.string "This planet is quite beautiful, when\l"
	.string "nothing is chasing you.\p"
	.string "Thank you, TARC.$"

Final_Lab_Remark01_Text_0:
# 106 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Wow! This place is huge!!!\n"
	.string "How is this even possible?\l"
	.string "Where is this light coming from? I\l"
	.string "think I see the lab, in the distance...\p"
	.string "But I have so many questions!$"

Final_Lab_Remark01_Text_1:
# 116 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Ops used their Pokémon to create this\n"
	.string "space...\p"
	.string "The final fight may be tough; I\n"
	.string "recommend scouring for some of our old\l"
	.string "items.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_2:
# 126 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "My instruments say the gravity is\n"
	.string "higher down here. Also... The air is\l"
	.string "breathable!$"

Final_Lab_Remark01_Text_3:
# 134 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<And look out for infected mons.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

EventScript_DragoniteEncounter_Text_0:
# 238 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "A Mega Dragonite! You... aren't\n"
	.string "infected?$"

EventScript_DragoniteEncounter_Text_1:
# 243 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "You want to join my team?$"

EventScript_DragoniteEncounter_Text_2:
# 250 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "I'd let you join my team,\n if I had an extra Meteor Ball.$"
