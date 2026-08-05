Planet01_Final_Lab_Interior_MapScripts::
# 2 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Interior_Enter
	.byte 0


Planet01_Final_Lab_Interior_Enter::
# 6 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflashlevel 4
# 7 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	goto_if_unset FLAG_REGISTERED_LOLA, Planet01_Final_Lab_Interior_Enter_1
# 10 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Planet01_Final_Lab_Interior_Enter_1:
# 8 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Final_Lab_Interior_Remark01::
# 15 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	lock
# 16 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 17 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 18 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_0
# 19 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 20 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 21 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 22 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 23 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 24 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_1
# 25 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 26 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 27 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 28 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 29 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative DrawMugshot
# 30 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	msgbox Final_Lab_Interior_Remark01_Text_2
# 31 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	waitmessage
# 32 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	closemessage
# 33 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	callnative ClearMugshot
# 34 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
# 35 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	setflag FLAG_REGISTERED_LOLA
# 36 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	release
	end


Final_Lab_Interior_Remark01_Text_0:
# 18 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "Anybody home...?$"

Final_Lab_Interior_Remark01_Text_1:
# 24 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}<Finally, you are here! Come forward!>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Final_Lab_Interior_Remark01_Text_2:
# 30 "data/maps/Planet01_Final_Lab_Interior/scripts.pory"
	.string "This is crazy! But, I'm coming...$"
