Planet01_07_MapScripts::
# 2 "data/maps/Planet01_07/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_07_Enter
	.byte 0


Planet01_07_Enter::
# 6 "data/maps/Planet01_07/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_07/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x88F, Planet01_07_Enter_2
# 10 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_07_Enter_1:
	end

Planet01_07_Enter_2:
# 8 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_07_Enter_1


Sun_Moon_Check::
# 16 "data/maps/Planet01_07/scripts.pory"
	special SunMoonCheck
# 17 "data/maps/Planet01_07/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Sun_Moon_Check_2
Sun_Moon_Check_1:
	end

Sun_Moon_Check_2:
# 18 "data/maps/Planet01_07/scripts.pory"
	lockall
# 19 "data/maps/Planet01_07/scripts.pory"
	special Script_FadeOutMapMusic
# 20 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 21 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 22 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_0
# 25 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 26 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 27 "data/maps/Planet01_07/scripts.pory"
	applymovement 1, Movement_SunMoon_Jirachi
# 28 "data/maps/Planet01_07/scripts.pory"
	waitmovement 0
# 29 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8004, 1
# 30 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8005, 1
# 31 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8006, 8
# 32 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8007, 5
# 33 "data/maps/Planet01_07/scripts.pory"
	special ShakeCamera
# 34 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 35 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 36 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_1
# 38 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 39 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 40 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8004, 1
# 41 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8005, 1
# 42 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8006, 8
# 43 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8007, 5
# 44 "data/maps/Planet01_07/scripts.pory"
	special ShakeCamera
# 45 "data/maps/Planet01_07/scripts.pory"
	delay 30
# 46 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_TO_WHITE
# 47 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 48 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 49 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 50 "data/maps/Planet01_07/scripts.pory"
	special ReplaceSunMoonWithTerragem
# 51 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 52 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 53 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_2
# 57 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 58 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 59 "data/maps/Planet01_07/scripts.pory"
	applymovement 1, Movement_SunMoon_Jirachi2
# 60 "data/maps/Planet01_07/scripts.pory"
	waitmovement 0
# 61 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_TO_WHITE
# 62 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 63 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 64 "data/maps/Planet01_07/scripts.pory"
	removeobject 1
# 65 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 66 "data/maps/Planet01_07/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 67 "data/maps/Planet01_07/scripts.pory"
	givemon SPECIES_CELEBI, 50
# 68 "data/maps/Planet01_07/scripts.pory"
	setflag FLAG_UNUSED_0x88F
# 69 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 70 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 71 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_3
# 72 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 73 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 74 "data/maps/Planet01_07/scripts.pory"
	releaseall
	goto Sun_Moon_Check_1


# 79 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi:
# 80 "data/maps/Planet01_07/scripts.pory"
	face_down
# 81 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 82 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 83 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 84 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 85 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 86 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 87 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 88 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 89 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 90 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 91 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 92 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 93 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 94 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 95 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 96 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 97 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 98 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 99 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 100 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 101 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 102 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 103 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 104 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 105 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 106 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 107 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 108 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 109 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

# 112 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi2:
# 113 "data/maps/Planet01_07/scripts.pory"
	face_up
# 114 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 115 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 116 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 117 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 118 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 119 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 120 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 121 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

Sun_Moon_Check_Text_0:
# 22 "data/maps/Planet01_07/scripts.pory"
	.string "You can see the sun and moon of the\n"
	.string "planet here. What an incredible sight!\p"
	.string "...Huh?$"

Sun_Moon_Check_Text_1:
# 36 "data/maps/Planet01_07/scripts.pory"
	.string "Lunatone and Solrock are reacting\n"
	.string "to the presence of Jirachi!$"

Sun_Moon_Check_Text_2:
# 53 "data/maps/Planet01_07/scripts.pory"
	.string "Woah! Solrock and Lunatone have\n"
	.string "merged into one!\p"
	.string "...\p"
	.string "...Jirachi?$"

Sun_Moon_Check_Text_3:
# 71 "data/maps/Planet01_07/scripts.pory"
	.string "...$"
