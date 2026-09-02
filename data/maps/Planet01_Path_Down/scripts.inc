Planet01_Path_Down_MapScripts::
# 2 "data/maps/Planet01_Path_Down/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Path_Down_Enter
	.byte 0


Planet01_Path_Down_Enter::
# 6 "data/maps/Planet01_Path_Down/scripts.pory"
	setflashlevel 4
# 7 "data/maps/Planet01_Path_Down/scripts.pory"
	goto_if_unset FLAG_REGISTERED_RICKY, Planet01_Path_Down_Enter_1
# 10 "data/maps/Planet01_Path_Down/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Planet01_Path_Down_Enter_1:
# 8 "data/maps/Planet01_Path_Down/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Path_Down_Remark01::
# 15 "data/maps/Planet01_Path_Down/scripts.pory"
	lock
# 16 "data/maps/Planet01_Path_Down/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 17 "data/maps/Planet01_Path_Down/scripts.pory"
	callnative DrawMugshot
# 18 "data/maps/Planet01_Path_Down/scripts.pory"
	msgbox Path_Down_Remark01_Text_0
# 19 "data/maps/Planet01_Path_Down/scripts.pory"
	waitmessage
# 20 "data/maps/Planet01_Path_Down/scripts.pory"
	closemessage
# 21 "data/maps/Planet01_Path_Down/scripts.pory"
	callnative ClearMugshot
# 22 "data/maps/Planet01_Path_Down/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 23 "data/maps/Planet01_Path_Down/scripts.pory"
	callnative DrawMugshot
# 24 "data/maps/Planet01_Path_Down/scripts.pory"
	msgbox Path_Down_Remark01_Text_1
# 25 "data/maps/Planet01_Path_Down/scripts.pory"
	waitmessage
# 26 "data/maps/Planet01_Path_Down/scripts.pory"
	closemessage
# 27 "data/maps/Planet01_Path_Down/scripts.pory"
	callnative ClearMugshot
# 28 "data/maps/Planet01_Path_Down/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 29 "data/maps/Planet01_Path_Down/scripts.pory"
	callnative DrawMugshot
# 30 "data/maps/Planet01_Path_Down/scripts.pory"
	msgbox Path_Down_Remark01_Text_2
# 31 "data/maps/Planet01_Path_Down/scripts.pory"
	waitmessage
# 32 "data/maps/Planet01_Path_Down/scripts.pory"
	closemessage
# 33 "data/maps/Planet01_Path_Down/scripts.pory"
	callnative ClearMugshot
# 34 "data/maps/Planet01_Path_Down/scripts.pory"
	setvar VAR_TEMP_0, 1
# 35 "data/maps/Planet01_Path_Down/scripts.pory"
	setflag FLAG_REGISTERED_RICKY
# 36 "data/maps/Planet01_Path_Down/scripts.pory"
	release
	end


Path_Down_Remark01_Text_0:
# 18 "data/maps/Planet01_Path_Down/scripts.pory"
	.string "It's pretty dark in here...$"

Path_Down_Remark01_Text_1:
# 24 "data/maps/Planet01_Path_Down/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Not much further... Keep going down...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Path_Down_Remark01_Text_2:
# 30 "data/maps/Planet01_Path_Down/scripts.pory"
	.string "Ok. I'm trusting you.$"
