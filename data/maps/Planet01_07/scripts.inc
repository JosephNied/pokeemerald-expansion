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
# 87 "data/maps/Planet01_07/scripts.pory"
	lockall
# 88 "data/maps/Planet01_07/scripts.pory"
	special Script_FadeOutMapMusic
# 89 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 90 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 91 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_4
# 93 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 94 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 95 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 96 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 97 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 98 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 99 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_5
# 102 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 103 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 104 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 105 "data/maps/Planet01_07/scripts.pory"
	delay 60
# 106 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 107 "data/maps/Planet01_07/scripts.pory"
	callnative DrawMugshot
# 108 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_6
# 110 "data/maps/Planet01_07/scripts.pory"
	waitmessage
# 111 "data/maps/Planet01_07/scripts.pory"
	closemessage
# 112 "data/maps/Planet01_07/scripts.pory"
	callnative ClearMugshot
# 113 "data/maps/Planet01_07/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 114 "data/maps/Planet01_07/scripts.pory"
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
	setvar VAR_DAILY_SLOTS, 5
# 83 "data/maps/Planet01_07/scripts.pory"
	call voicedialogueABC
# 84 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_DAILY_SLOTS, 6
# 85 "data/maps/Planet01_07/scripts.pory"
	releaseall
	goto Sun_Moon_Check_1


# 119 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi:
# 120 "data/maps/Planet01_07/scripts.pory"
	face_down
# 121 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 122 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 123 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 124 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 125 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 126 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 127 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 128 "data/maps/Planet01_07/scripts.pory"
	delay_4
# 129 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 130 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 131 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 132 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 133 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 134 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 135 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 136 "data/maps/Planet01_07/scripts.pory"
	delay_8
# 137 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 138 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 139 "data/maps/Planet01_07/scripts.pory"
	set_invisible
# 140 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 141 "data/maps/Planet01_07/scripts.pory"
	set_visible
# 142 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 143 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 144 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 145 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 146 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 147 "data/maps/Planet01_07/scripts.pory"
	walk_down
# 148 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 149 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

# 152 "data/maps/Planet01_07/scripts.pory"
Movement_SunMoon_Jirachi2:
# 153 "data/maps/Planet01_07/scripts.pory"
	face_up
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
# 159 "data/maps/Planet01_07/scripts.pory"
	walk_up
# 160 "data/maps/Planet01_07/scripts.pory"
	delay_16
# 161 "data/maps/Planet01_07/scripts.pory"
	delay_16
	step_end

Planet01_07_HintText01::
# 165 "data/maps/Planet01_07/scripts.pory"
	lock
# 166 "data/maps/Planet01_07/scripts.pory"
	msgbox Planet01_07_HintText01_Text_0
# 173 "data/maps/Planet01_07/scripts.pory"
	release
	end


Planet01_07_EventScript_Item01::
# 178 "data/maps/Planet01_07/scripts.pory"
	lock
# 179 "data/maps/Planet01_07/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 180 "data/maps/Planet01_07/scripts.pory"
	removeobject 2
# 181 "data/maps/Planet01_07/scripts.pory"
	setflag FLAG_UNUSED_0x4A0
# 182 "data/maps/Planet01_07/scripts.pory"
	release
	end


sableye_07::
# 187 "data/maps/Planet01_07/scripts.pory"
	lock
# 188 "data/maps/Planet01_07/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_GOLD, sableye_07_2
sableye_07_1:
# 207 "data/maps/Planet01_07/scripts.pory"
	release
	end

sableye_07_2:
# 189 "data/maps/Planet01_07/scripts.pory"
	msgbox sableye_07_Text_0
# 190 "data/maps/Planet01_07/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 191 "data/maps/Planet01_07/scripts.pory"
	waitse
# 192 "data/maps/Planet01_07/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 193 "data/maps/Planet01_07/scripts.pory"
	waitmoncry
# 194 "data/maps/Planet01_07/scripts.pory"
	setflag FLAG_SYS_DOME_GOLD
# 195 "data/maps/Planet01_07/scripts.pory"
	removeobject 11
# 196 "data/maps/Planet01_07/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 197 "data/maps/Planet01_07/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_07_5
# 200 "data/maps/Planet01_07/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 201 "data/maps/Planet01_07/scripts.pory"
	msgbox sableye_07_Text_2
sableye_07_4:
# 203 "data/maps/Planet01_07/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 204 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 205 "data/maps/Planet01_07/scripts.pory"
	callnative RegisterSpeciesInDex
	goto sableye_07_1

sableye_07_5:
# 198 "data/maps/Planet01_07/scripts.pory"
	msgbox sableye_07_Text_1
	goto sableye_07_4


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
	.string "...It's watching over me. I wonder why?$"

Sun_Moon_Check_Text_4:
# 91 "data/maps/Planet01_07/scripts.pory"
	.string "You can see the sun and moon of the\n"
	.string "planet here. What an incredible sight!$"

Sun_Moon_Check_Text_5:
# 99 "data/maps/Planet01_07/scripts.pory"
	.string "...\n"
	.string "...\l"
	.string "...$"

Sun_Moon_Check_Text_6:
# 108 "data/maps/Planet01_07/scripts.pory"
	.string "Why do I feel like something\n"
	.string "was supposed to happen...$"

Planet01_07_HintText01_Text_0:
# 166 "data/maps/Planet01_07/scripts.pory"
	.string "Ops Lead: We were able to witness the sun\n"
	.string "and moon of this planet from the peak.\p"
	.string "The Lunatone we caught began to faintly\n"
	.string "glow with incredible energy; I feel like\l"
	.string "something amazing would happen if we\l"
	.string "brought a Solrock here as well, but we\l"
	.string "haven't been able to find one.$"

sableye_07_Text_0:
# 189 "data/maps/Planet01_07/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_07_Text_1:
# 198 "data/maps/Planet01_07/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_07_Text_2:
# 201 "data/maps/Planet01_07/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
