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
# 78 "data/maps/Planet01_07/scripts.pory"
	lockall
# 79 "data/maps/Planet01_07/scripts.pory"
	special Script_FadeOutMapMusic
# 80 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 81 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 82 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_4
# 84 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 85 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 86 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 87 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 88 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 89 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_5
# 92 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 93 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 94 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 95 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 96 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 97 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_6
# 99 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 100 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 101 "data/maps/Planet01_07/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 102 "data/maps/Planet01_07/scripts.pory"
	releaseall
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
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 28 "data/maps/Planet01_07/scripts.pory"
	applymovement 1, Movement_SunMoon_Jirachi
# 29 "data/maps/Planet01_07/scripts.pory"
	waitmovement 0
# 30 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8004, 1
# 31 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8005, 1
# 32 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8006, 8
# 33 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8007, 5
# 34 "data/maps/Planet01_07/scripts.pory"
	special ShakeCamera
# 35 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 36 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 37 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_1
# 39 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 40 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 41 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8004, 1
# 42 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8005, 1
# 43 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8006, 8
# 44 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8007, 5
# 45 "data/maps/Planet01_07/scripts.pory"
	special ShakeCamera
# 46 "data/maps/Planet01_07/scripts.pory"
	delay 30
# 47 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_TO_WHITE
# 48 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 49 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 50 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 51 "data/maps/Planet01_07/scripts.pory"
	special ReplaceSunMoonWithTerragem
# 52 "data/maps/Planet01_07/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 53 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 54 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 55 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_2
# 59 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 60 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 61 "data/maps/Planet01_07/scripts.pory"
	applymovement 1, Movement_SunMoon_Jirachi2
# 62 "data/maps/Planet01_07/scripts.pory"
	waitmovement 0
# 63 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_TO_WHITE
# 64 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 65 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 66 "data/maps/Planet01_07/scripts.pory"
	removeobject 1
# 67 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 68 "data/maps/Planet01_07/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 69 "data/maps/Planet01_07/scripts.pory"
	givemon SPECIES_CELEBI, 50
# 70 "data/maps/Planet01_07/scripts.pory"
	setflag FLAG_UNUSED_0x88F
# 71 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 72 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 73 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_3
# 74 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 75 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 76 "data/maps/Planet01_07/scripts.pory"
	releaseall
	goto Sun_Moon_Check_1


# 107 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi:
# 108 "data/maps/Planet01_07/scripts.pory"
	face_down
# 109 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 110 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 111 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 112 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 113 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 114 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 115 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 116 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 117 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 118 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 119 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 120 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 121 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 122 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 123 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 124 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 125 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 126 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 127 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 128 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 129 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 130 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 131 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 132 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 133 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 134 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 135 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 136 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 137 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

# 140 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi2:
# 141 "data/maps/Planet01_07/scripts.pory"
	face_up
# 142 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 143 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 144 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 145 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 146 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 147 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 148 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 149 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

Planet01_07_HintText01::
# 153 "data/maps/Planet01_07/scripts.pory"
	lock
# 154 "data/maps/Planet01_07/scripts.pory"
	msgbox Planet01_07_HintText01_Text_0
# 161 "data/maps/Planet01_07/scripts.pory"
	release
	end


Sun_Moon_Check_Text_0:
# 22 "data/maps/Planet01_07/scripts.pory"
	.string "You can see the sun and moon of the\n"
	.string "planet here. What an incredible sight!\p"
	.string "...Huh?$"

Sun_Moon_Check_Text_1:
# 37 "data/maps/Planet01_07/scripts.pory"
	.string "Lunatone and Solrock are reacting\n"
	.string "to the presence of Jirachi!$"

Sun_Moon_Check_Text_2:
# 55 "data/maps/Planet01_07/scripts.pory"
	.string "Woah! Solrock and Lunatone have\n"
	.string "merged into one!\p"
	.string "...\p"
	.string "...Jirachi?$"

Sun_Moon_Check_Text_3:
# 73 "data/maps/Planet01_07/scripts.pory"
	.string "...It looked reluctant to leave.$"

Sun_Moon_Check_Text_4:
# 82 "data/maps/Planet01_07/scripts.pory"
	.string "You can see the sun and moon of the\n"
	.string "planet here. What an incredible sight!$"

Sun_Moon_Check_Text_5:
# 89 "data/maps/Planet01_07/scripts.pory"
	.string "...\n"
	.string "...\l"
	.string "...$"

Sun_Moon_Check_Text_6:
# 97 "data/maps/Planet01_07/scripts.pory"
	.string "Why do I feel like something\n"
	.string "was supposed to happen...$"

Planet01_07_HintText01_Text_0:
# 154 "data/maps/Planet01_07/scripts.pory"
	.string "Captain: We were able to witness the sun\n"
	.string "and moon of this planet from the peak.\p"
	.string "The Lunatone we caught began to faintly\n"
	.string "glow with incredible energy; I feel like\l"
	.string "something amazing would happen if we\l"
	.string "brought a Solrock here as well, but we\l"
	.string "haven't been able to find one.$"
