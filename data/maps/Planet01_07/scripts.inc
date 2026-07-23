Planet01_07_MapScripts::
# 2 "data/maps/Planet01_07/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
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
	msgbox Sun_Moon_Check_Text_0
# 23 "data/maps/Planet01_07/scripts.pory"
	applymovement 3, Movement_SunMoon_Jirachi
# 24 "data/maps/Planet01_07/scripts.pory"
	waitmovement 0
# 25 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8004, 1
# 26 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8005, 1
# 27 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8006, 8
# 28 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8007, 5
# 29 "data/maps/Planet01_07/scripts.pory"
	special ShakeCamera
# 30 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_1
# 32 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8004, 1
# 33 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8005, 1
# 34 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8006, 8
# 35 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8007, 5
# 36 "data/maps/Planet01_07/scripts.pory"
	special ShakeCamera
# 37 "data/maps/Planet01_07/scripts.pory"
	delay 30
# 38 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_TO_WHITE
# 39 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 40 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 41 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 42 "data/maps/Planet01_07/scripts.pory"
	special ReplaceSunMoonWithTerragem
# 43 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_2
# 47 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 48 "data/maps/Planet01_07/scripts.pory"
	applymovement 3, Movement_SunMoon_Jirachi2
# 49 "data/maps/Planet01_07/scripts.pory"
	waitmovement 0
# 50 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_TO_WHITE
# 51 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 52 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 53 "data/maps/Planet01_07/scripts.pory"
	removeobject 3
# 54 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 55 "data/maps/Planet01_07/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 56 "data/maps/Planet01_07/scripts.pory"
	givemon SPECIES_CELEBI, 50
# 57 "data/maps/Planet01_07/scripts.pory"
	setflag FLAG_UNUSED_0x88F
# 58 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_3
# 59 "data/maps/Planet01_07/scripts.pory"
	releaseall
	goto Sun_Moon_Check_1


# 64 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi:
# 65 "data/maps/Planet01_07/scripts.pory"
	face_down
# 66 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 67 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 68 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 69 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 70 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 71 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 72 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 73 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 74 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 75 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 76 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 77 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 78 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 79 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 80 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 81 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 82 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 83 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 84 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 85 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 86 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 87 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 88 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 89 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 90 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 91 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 92 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 93 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 94 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

# 97 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi2:
# 98 "data/maps/Planet01_07/scripts.pory"
	face_up
# 99 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 100 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 101 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 102 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 103 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 104 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 105 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 106 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

Sun_Moon_Check_Text_0:
# 20 "data/maps/Planet01_07/scripts.pory"
	.string "You can see the sun and moon of the\n"
	.string "planet here. What an incredible sight!\p"
	.string "...Huh?$"

Sun_Moon_Check_Text_1:
# 30 "data/maps/Planet01_07/scripts.pory"
	.string "Lunatone and Solrock are reacting\n"
	.string "to the presence of Jirachi!$"

Sun_Moon_Check_Text_2:
# 43 "data/maps/Planet01_07/scripts.pory"
	.string "Woah! Solrock and Lunatone have\n"
	.string "merged into one!\p"
	.string "...\p"
	.string "...Jirachi?$"

Sun_Moon_Check_Text_3:
# 58 "data/maps/Planet01_07/scripts.pory"
	.string "...$"
