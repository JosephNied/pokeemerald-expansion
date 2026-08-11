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
# 59 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 60 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 61 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 62 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 63 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 64 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_5
# 67 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 68 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 69 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 71 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 72 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_6
# 73 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 74 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 75 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 76 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 77 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_REGISTERED_LILA_AND_ROY
# 78 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


EventScript_CorruptCatch_V::
# 83 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 84 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 85 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 65, ITEM_NONE
# 90 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 91 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 92 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_VENUSAUR
# 93 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 94 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_4
# 95 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 1
# 96 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_H::
# 101 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 102 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 103 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_HAXORUS, 65, ITEM_NONE
# 108 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 109 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 110 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_HAXORUS
# 111 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 112 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_5
# 113 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 3
# 114 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_C::
# 119 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 120 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 121 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 65, ITEM_NONE
# 126 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 127 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 128 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHARIZARD
# 129 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 130 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_6
# 131 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 6
# 132 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_E::
# 137 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 138 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 139 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_EXCADRILL, 65, ITEM_NONE
# 144 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 145 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 146 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_EXCADRILL
# 147 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 148 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_7
# 149 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 2
# 150 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_K::
# 155 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 156 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 157 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_KINGDRA, 65, ITEM_NONE
# 162 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 163 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 164 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_KINGDRA
# 165 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 166 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_8
# 167 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 5
# 168 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
	end


EventScript_CorruptCatch_M::
# 173 "data/maps/Planet01_Final_Lab/scripts.pory"
	lockall
# 174 "data/maps/Planet01_Final_Lab/scripts.pory"
	special SetBossBattle
# 175 "data/maps/Planet01_Final_Lab/scripts.pory"
	setwildbattle SPECIES_METAGROSS, 65, ITEM_NONE
# 180 "data/maps/Planet01_Final_Lab/scripts.pory"
	dowildbattle
# 181 "data/maps/Planet01_Final_Lab/scripts.pory"
	special BossBattleOff
# 182 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, SPECIES_METAGROSS
# 183 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative RegisterSpeciesInDex
# 184 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_TEMP_9
# 185 "data/maps/Planet01_Final_Lab/scripts.pory"
	removeobject 4
# 186 "data/maps/Planet01_Final_Lab/scripts.pory"
	releaseall
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
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<I will explain everything... \n"
	.string "When you arrive.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_2:
# 43 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Alright, I got this...\p"
	.string "My instruments say the gravity is\n"
	.string "higher down here. Also... The air\l"
	.string "is breathable!$"

Final_Lab_Remark01_Text_3:
# 52 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<Oh, and look out... For hostiles...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_4:
# 58 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Hostiles? What does that mean?!$"

Final_Lab_Remark01_Text_5:
# 64 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<Some Pokemon... Aren't fully in control...\n"
	.string "Of themselves anymore...>\p"
	.string "<Move slowly, if you have to...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_6:
# 72 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Awesome. Vague.$"
