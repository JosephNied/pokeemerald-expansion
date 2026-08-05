Planet01_Final_Lab_MapScripts::
# 2 "data/maps/Planet01_Final_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Enter
	.byte 0


Planet01_Final_Lab_Enter::
# 6 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflashlevel 4
# 7 "data/maps/Planet01_Final_Lab/scripts.pory"
	goto_if_unset FLAG_REGISTERED_LILA_AND_ROY, Planet01_Final_Lab_Enter_1
# 10 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Planet01_Final_Lab_Enter_1:
# 8 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Final_Lab_Remark01::
# 15 "data/maps/Planet01_Final_Lab/scripts.pory"
	lock
# 16 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 17 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 18 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_0
# 27 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 28 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 29 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 30 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 31 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 32 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_1
# 33 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 34 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 35 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 36 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 37 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_2
# 41 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 42 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 43 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 44 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 45 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 46 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_3
# 47 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 48 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 49 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 50 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 51 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative DrawMugshot
# 52 "data/maps/Planet01_Final_Lab/scripts.pory"
	msgbox Final_Lab_Remark01_Text_4
# 53 "data/maps/Planet01_Final_Lab/scripts.pory"
	waitmessage
# 54 "data/maps/Planet01_Final_Lab/scripts.pory"
	closemessage
# 55 "data/maps/Planet01_Final_Lab/scripts.pory"
	callnative ClearMugshot
# 56 "data/maps/Planet01_Final_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 57 "data/maps/Planet01_Final_Lab/scripts.pory"
	setflag FLAG_REGISTERED_LILA_AND_ROY
# 58 "data/maps/Planet01_Final_Lab/scripts.pory"
	release
	end


Final_Lab_Remark01_Text_0:
# 18 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "WOW!\p"
	.string "This place is huge!!!\n"
	.string "How is this even possible?\l"
	.string "Was this place just like this, or were\l"
	.string "the scientists respondible?\p"
	.string "Where is this light coming from? I\n"
	.string "think I see the lab, out in the distance...\p"
	.string "But how did they build it? I have so many\n"
	.string "questions!$"

Final_Lab_Remark01_Text_1:
# 32 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<I will explain... When you arrive.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_2:
# 38 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Ok, ok.\p"
	.string "My instruments say the gravity is\n"
	.string "higher down here.$"

Final_Lab_Remark01_Text_3:
# 46 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<Oh, and look out... For hostiles...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Remark01_Text_4:
# 52 "data/maps/Planet01_Final_Lab/scripts.pory"
	.string "Welp.$"
