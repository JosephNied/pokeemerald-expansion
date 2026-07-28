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
# 84 "data/maps/Planet01_07/scripts.pory"
	lockall
# 85 "data/maps/Planet01_07/scripts.pory"
	special Script_FadeOutMapMusic
# 86 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 87 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 88 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_4
# 90 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 91 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 92 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 93 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 94 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 95 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 96 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_5
# 99 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 100 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 101 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 102 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 103 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 104 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 105 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_6
# 107 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 108 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 109 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 110 "data/maps/Planet01_07/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 111 "data/maps/Planet01_07/scripts.pory"
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
	closemessage
# 27 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 28 "data/maps/Planet01_07/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 29 "data/maps/Planet01_07/scripts.pory"
	applymovement 1, Movement_SunMoon_Jirachi
# 30 "data/maps/Planet01_07/scripts.pory"
	waitmovement 0
# 31 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8004, 1
# 32 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8005, 1
# 33 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8006, 8
# 34 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8007, 5
# 35 "data/maps/Planet01_07/scripts.pory"
	special ShakeCamera
# 36 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 37 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 38 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_1
# 40 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 41 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 42 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 43 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8004, 1
# 44 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8005, 1
# 45 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8006, 8
# 46 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8007, 5
# 47 "data/maps/Planet01_07/scripts.pory"
	special ShakeCamera
# 48 "data/maps/Planet01_07/scripts.pory"
	delay 30
# 49 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_TO_WHITE
# 50 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 51 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 52 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 53 "data/maps/Planet01_07/scripts.pory"
	special ReplaceSunMoonWithTerragem
# 54 "data/maps/Planet01_07/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 55 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 56 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 57 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_2
# 61 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 62 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 63 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 64 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, SPECIES_CELEBI
# 65 "data/maps/Planet01_07/scripts.pory"
	callnative RegisterSpeciesInDex
# 66 "data/maps/Planet01_07/scripts.pory"
	applymovement 1, Movement_SunMoon_Jirachi2
# 67 "data/maps/Planet01_07/scripts.pory"
	waitmovement 0
# 68 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_TO_WHITE
# 69 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 70 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 71 "data/maps/Planet01_07/scripts.pory"
	removeobject 1
# 72 "data/maps/Planet01_07/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 73 "data/maps/Planet01_07/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 74 "data/maps/Planet01_07/scripts.pory"
	givemon SPECIES_CELEBI, 50
# 75 "data/maps/Planet01_07/scripts.pory"
	setflag FLAG_UNUSED_0x88F
# 76 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 77 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 78 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_3
# 79 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 80 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 81 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 82 "data/maps/Planet01_07/scripts.pory"
	releaseall
	goto Sun_Moon_Check_1


# 116 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi:
# 117 "data/maps/Planet01_07/scripts.pory"
	face_down
# 118 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 119 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 120 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 121 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 122 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 123 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 124 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 125 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 126 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 127 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 128 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 129 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 130 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 131 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 132 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 133 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 134 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 135 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 136 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 137 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 138 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 139 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 140 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 141 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 142 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 143 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 144 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 145 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 146 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

# 149 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi2:
# 150 "data/maps/Planet01_07/scripts.pory"
	face_up
# 151 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 152 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 153 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 154 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 155 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 156 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 157 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 158 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

Planet01_07_HintText01::
# 162 "data/maps/Planet01_07/scripts.pory"
	lock
# 163 "data/maps/Planet01_07/scripts.pory"
	msgbox Planet01_07_HintText01_Text_0
# 170 "data/maps/Planet01_07/scripts.pory"
	release
	end


Planet01_07_EventScript_Item01::
# 175 "data/maps/Planet01_07/scripts.pory"
	lock
# 176 "data/maps/Planet01_07/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 177 "data/maps/Planet01_07/scripts.pory"
	removeobject 2
# 178 "data/maps/Planet01_07/scripts.pory"
	setflag FLAG_UNUSED_0x4A0
# 179 "data/maps/Planet01_07/scripts.pory"
	release
	end


Sun_Moon_Check_Text_0:
# 22 "data/maps/Planet01_07/scripts.pory"
	.string "You can see the sun and moon of the\n"
	.string "planet here. What an incredible sight!\p"
	.string "...Huh?$"

Sun_Moon_Check_Text_1:
# 38 "data/maps/Planet01_07/scripts.pory"
	.string "Lunatone and Solrock are reacting\n"
	.string "to the presence of Jirachi!$"

Sun_Moon_Check_Text_2:
# 57 "data/maps/Planet01_07/scripts.pory"
	.string "Woah! Solrock and Lunatone have\n"
	.string "merged into one!\p"
	.string "...\p"
	.string "...Jirachi?$"

Sun_Moon_Check_Text_3:
# 78 "data/maps/Planet01_07/scripts.pory"
	.string "...It looked reluctant to leave.$"

Sun_Moon_Check_Text_4:
# 88 "data/maps/Planet01_07/scripts.pory"
	.string "You can see the sun and moon of the\n"
	.string "planet here. What an incredible sight!$"

Sun_Moon_Check_Text_5:
# 96 "data/maps/Planet01_07/scripts.pory"
	.string "...\n"
	.string "...\l"
	.string "...$"

Sun_Moon_Check_Text_6:
# 105 "data/maps/Planet01_07/scripts.pory"
	.string "Why do I feel like something\n"
	.string "was supposed to happen...$"

Planet01_07_HintText01_Text_0:
# 163 "data/maps/Planet01_07/scripts.pory"
	.string "Captain: We were able to witness the sun\n"
	.string "and moon of this planet from the peak.\p"
	.string "The Lunatone we caught began to faintly\n"
	.string "glow with incredible energy; I feel like\l"
	.string "something amazing would happen if we\l"
	.string "brought a Solrock here as well, but we\l"
	.string "haven't been able to find one.$"
