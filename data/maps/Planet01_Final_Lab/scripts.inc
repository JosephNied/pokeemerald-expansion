Planet01_Final_Lab_MapScripts::
# 2 "data/maps/Planet01_Final_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Enter
	.byte 0


Planet01_Final_Lab_Enter::
# 6 "data/maps/Planet01_Final_Lab/scripts.pory"
	goto_if_unset FLAG_REGISTERED_LILA_AND_ROY, Planet01_Final_Lab_Enter_1
# 9 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Planet01_Final_Lab_Enter_1:
# 7 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Final_Lab_Remark01::
# 14 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 15 "data/maps/Planet01_Final_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Final_Lab_Remark01_Movement_0
# 16 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 17 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 18 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 19 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_0
# 28 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 29 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 30 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 31 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 32 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 33 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_1
# 35 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 36 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 37 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 39 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 40 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_2
# 43 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 44 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 45 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 46 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 47 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 48 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_3
# 49 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 50 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 51 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 52 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 53 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 54 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_4
# 55 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 56 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 57 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 58 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 59 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 60 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_5
# 62 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 63 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 64 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 65 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 66 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 67 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_6
# 68 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 69 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 70 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 71 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 72 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_REGISTERED_LILA_AND_ROY
# 73 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


# 15 "data/maps/Planet01_Final_Lab/scripts.pory"
Final_Lab_Remark01_Movement_0:
# 15 "data/maps/Planet01_Final_Lab/scripts.pory"
	emote_exclamation_mark
# 15 "data/maps/Planet01_Final_Lab/scripts.pory"
	face_left
# 15 "data/maps/Planet01_Final_Lab/scripts.pory"
	delay_16
	step_end

Final_Lab_Remark01_Text_0:
# 19 "data/maps/Planet01_Final_Lab/scripts.pory"
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
# 33 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<I will explain everything... \n"
	.string "When you arrive.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_2:
# 40 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Alright, I got this...\p"
	.string "My instruments say the gravity is\n"
	.string "higher down here.$"

Final_Lab_Remark01_Text_3:
# 48 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<Oh, and look out... For hostiles...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_4:
# 54 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Hostiles? What does that mean?!$"

Final_Lab_Remark01_Text_5:
# 60 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<Some Pokemon... Aren't fully in control...\n"
	.string "Of themselves anymore...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_6:
# 67 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Awesome. Vague.$"
