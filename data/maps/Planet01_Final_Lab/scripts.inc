Planet01_Final_Lab_MapScripts::
# 2 "data/maps/Planet01_Final_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Enter
	.byte 0


Planet01_Final_Lab_Enter::
# 6 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 7 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative StopAirTimer
# 8 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DisableO2Meter
# 9 "data/maps/Planet01_Final_Lab/scripts.pory"
	goto_if_unset FLAG_REGISTERED_LILA_AND_ROY, Planet01_Final_Lab_Enter_1
# 12 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Planet01_Final_Lab_Enter_1:
# 10 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Final_Lab_Remark01::
# 17 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 18 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Final_Lab_Remark01_Movement_0
# 19 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 20 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 21 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 22 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_0
# 31 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 32 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 33 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 34 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 35 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 36 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_1
# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 39 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 40 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 41 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 42 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 43 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_2
# 47 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 48 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 49 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 50 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 51 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 52 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_3
# 53 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 54 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 55 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 56 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 57 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 58 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_4
# 61 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 62 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 63 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 64 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 65 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 66 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_5
# 68 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 69 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 71 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_REGISTERED_LILA_AND_ROY
# 72 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


EventScript_CorruptCatch_V::
# 77 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 78 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 79 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 65, ITEM_NONE
# 84 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 85 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 86 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_VENUSAUR
# 87 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 88 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_4
# 89 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 1
# 90 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_H::
# 95 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 96 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 97 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_HAXORUS, 65, ITEM_NONE
# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 103 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 104 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_HAXORUS
# 105 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 106 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_5
# 107 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 3
# 108 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_C::
# 113 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 114 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 115 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 65, ITEM_NONE
# 120 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 121 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 122 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHARIZARD
# 123 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 124 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_6
# 125 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 6
# 126 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_E::
# 131 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 132 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 133 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_EXCADRILL, 65, ITEM_NONE
# 138 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 139 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 140 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_EXCADRILL
# 141 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 142 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_7
# 143 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 2
# 144 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_K::
# 149 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 150 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 151 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_KINGDRA, 65, ITEM_NONE
# 156 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 157 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 158 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_KINGDRA
# 159 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 160 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_8
# 161 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 5
# 162 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_M::
# 167 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 168 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 169 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_METAGROSS, 65, ITEM_NONE
# 174 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 175 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 176 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_METAGROSS
# 177 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 178 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_9
# 179 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 4
# 180 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_DragoniteEncounter::
# 186 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 188 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_0
# 191 "data/maps/Planet01_Final_Lab/scripts.pory"
	getpartysize
# 192 "data/maps/Planet01_Final_Lab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ge EventScript_DragoniteEncounter_2
# 198 "data/maps/Planet01_Final_Lab/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 199 "data/maps/Planet01_Final_Lab/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_DragoniteEncounter_5
# 207 "data/maps/Planet01_Final_Lab/scripts.pory"
	givemon SPECIES_DRAGONITE, 50
# 208 "data/maps/Planet01_Final_Lab/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 209 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_9
# 210 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 4
# 211 "data/maps/Planet01_Final_Lab/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 213 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end

EventScript_DragoniteEncounter_2:
# 193 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_1
# 194 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end

EventScript_DragoniteEncounter_5:
# 200 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox EventScript_DragoniteEncounter_Text_2
# 202 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


Planet01_Final_Lab_EventScript_Item01::
# 218 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 219 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 1
# 220 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 11
# 221 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A2
# 222 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item02::
# 227 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 228 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_LIFE_ORB, 1
# 229 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 12
# 230 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 231 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item03::
# 236 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 237 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 238 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 7
# 239 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 240 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item04::
# 245 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 246 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 247 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 9
# 248 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 249 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item05::
# 254 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 255 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_CHOICE_SCARF, 1
# 256 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 10
# 257 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
# 258 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Planet01_Final_Lab_EventScript_Item06::
# 263 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 264 "data/maps/Planet01_Final_Lab/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 265 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 8
# 266 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 267 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


# 18 "data/maps/Planet01_Final_Lab/scripts.pory"
Final_Lab_Remark01_Movement_0:
# 18 "data/maps/Planet01_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 18 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_left
# 18 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
	step_end

Final_Lab_Remark01_Text_0:
# 22 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "WOW!\p"
	.string "This place is huge!!!\n"
	.string "How is this even possible?\l"
	.string "Was this place just like this, or were\l"
	.string "the scientists involved somehow?\p"
	.string "Where is this light coming from? I\n"
	.string "think I see the lab, in the distance...\p"
	.string "But how did they build it? I have so many\n"
	.string "questions!$"

Final_Lab_Remark01_Text_1:
# 36 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I will explain everything... \n"
	.string "When you arrive at the lab.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_2:
# 43 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Ok, I guess you're there?\p"
	.string "My instruments say the gravity is\n"
	.string "higher down here. Also... The air\l"
	.string "is breathable!$"

Final_Lab_Remark01_Text_3:
# 52 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, and look out... For hostiles...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_4:
# 58 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Hostiles? More infected Pokemon? They\n"
	.string "don't seem to be native to this\l"
	.string "place. Nothing down here does.$"

Final_Lab_Remark01_Text_5:
# 66 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The same as before...\n"
	.string "Move slowly, if you have to...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

EventScript_DragoniteEncounter_Text_0:
# 188 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "A Mega Dragonite! You... aren't\n"
	.string "infected?$"

EventScript_DragoniteEncounter_Text_1:
# 193 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "You want to join my team?$"

EventScript_DragoniteEncounter_Text_2:
# 200 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "I'd let you join my team,\n if I had an extra Meteor Ball.$"
