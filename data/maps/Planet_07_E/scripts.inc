Planet_07_E_MapScripts::
# 2 "data/maps/Planet_07_E/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet_07_E_Enter
# 3 "data/maps/Planet_07_E/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Planet_07_E_OnLoad
	.byte 0


Planet_07_E_Enter::
# 7 "data/maps/Planet_07_E/scripts.pory"
	special SetRandomFlags
# 8 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq Planet_07_E_Enter_2
Planet_07_E_Enter_1:
	end

Planet_07_E_Enter_2:
# 9 "data/maps/Planet_07_E/scripts.pory"
	setflag FLAG_TEMP_3
	goto Planet_07_E_Enter_1


Planet_07_E_OnLoad::
# 15 "data/maps/Planet_07_E/scripts.pory"
	call_if_unset FLAG_TEMP_3, killdarktiles
	end


gatemessage::
# 20 "data/maps/Planet_07_E/scripts.pory"
	lockall
# 22 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 23 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 24 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_0
# 27 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 28 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 30 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_1
# 39 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 40 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 41 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_2
# 44 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 45 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 46 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 48 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq gatemessage_2
# 48 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq gatemessage_2
# 52 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 53 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 54 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_3
# 57 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 58 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 59 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 61 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 62 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 63 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_4
# 64 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 65 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 66 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 68 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 69 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 70 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_5
# 80 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 81 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 82 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 84 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 85 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 86 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_6
# 88 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 89 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 90 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 92 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 93 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 94 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_7
# 100 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 101 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 102 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 105 "data/maps/Planet_07_E/scripts.pory"
	releaseall
	end

gatemessage_2:
# 49 "data/maps/Planet_07_E/scripts.pory"
	releaseall
	end


sableye_07_E::
# 110 "data/maps/Planet_07_E/scripts.pory"
	lock
# 111 "data/maps/Planet_07_E/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_GOLD, sableye_07_E_2
sableye_07_E_1:
# 134 "data/maps/Planet_07_E/scripts.pory"
	release
	end

sableye_07_E_2:
# 112 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_0
# 113 "data/maps/Planet_07_E/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 114 "data/maps/Planet_07_E/scripts.pory"
	waitse
# 115 "data/maps/Planet_07_E/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 116 "data/maps/Planet_07_E/scripts.pory"
	waitmoncry
# 117 "data/maps/Planet_07_E/scripts.pory"
	setflag FLAG_SYS_PALACE_GOLD
# 118 "data/maps/Planet_07_E/scripts.pory"
	removeobject 1
# 119 "data/maps/Planet_07_E/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 120 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_07_E_5
# 127 "data/maps/Planet_07_E/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 128 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_2
sableye_07_E_4:
# 130 "data/maps/Planet_07_E/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 131 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 132 "data/maps/Planet_07_E/scripts.pory"
	callnative RegisterSpeciesInDex
	goto sableye_07_E_1

sableye_07_E_5:
# 121 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_1
# 122 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 123 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 124 "data/maps/Planet_07_E/scripts.pory"
	warp MAP_PLANET_07_E, 20, 7, 6
# 125 "data/maps/Planet_07_E/scripts.pory"
	waitstate
	goto sableye_07_E_4


killdarktiles::
# 139 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 140 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 11, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 141 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 12, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 142 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 13, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 143 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 14, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 144 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 146 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 11, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 147 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 12, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 148 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 13, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 149 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 14, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 150 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 152 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 11, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 153 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 12, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 154 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 13, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 155 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 14, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 156 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 158 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 11, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 159 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 12, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 160 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 13, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 161 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 14, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
	return


gatemessage_Text_0:
# 24 "data/maps/Planet_07_E/scripts.pory"
	.string "There's some faded text... I've never\n"
	.string "seen a written language like this, but I\l"
	.string "feel like I can understand it...$"

gatemessage_Text_1:
# 30 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}When five eyes open, so does the gate.\n"
	.string "There are many trees in the garden\l"
	.string "beneath the black pool, but only one\l"
	.string "was designed for that special purpose.\p"
	.string "Your antlers are heavy. Your body is\n"
	.string "bare.\p"
	.string "Your heart is striving after wind, all\n"
	.string "is vanity. So what will you do?{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

gatemessage_Text_2:
# 41 "data/maps/Planet_07_E/scripts.pory"
	.string "What the? Who would have written this?\n"
	.string "Doesn't seem like something the\l"
	.string "EOD researchers would have written.$"

gatemessage_Text_3:
# 54 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<That's not what it said when I was\n"
	.string "here last. But I think that makes\l"
	.string "sense, actually.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

gatemessage_Text_4:
# 63 "data/maps/Planet_07_E/scripts.pory"
	.string "What do you mean?$"

gatemessage_Text_5:
# 70 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<This is where I discovered the Deoxys\n"
	.string "cell. Or, where it discovered me? Just\l"
	.string "as I began to fear my research would\l"
	.string "never be important enough, like a\l"
	.string "miracle it presented itself to me here.\p"
	.string "In my present psychic state, I can\n"
	.string "sense that there's a dark entity in the\l"
	.string "water... Maybe it could see my pride and\l"
	.string "and insecurities, and manifested the\l"
	.string "Deoxys cell to tempt me to fall.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

gatemessage_Text_6:
# 86 "data/maps/Planet_07_E/scripts.pory"
	.string "So you're saying the literal devil is in\n"
	.string "this lake.$"

gatemessage_Text_7:
# 94 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well, it's just speculation. Maybe the\n"
	.string "cell was a coincidence, but something\l"
	.string "giving bad vibes is definitely down\l"
	.string "there.\p"
	.string "If you proceed and are tested like I\n"
	.string "was... Don't fail.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_07_E_Text_0:
# 112 "data/maps/Planet_07_E/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_07_E_Text_1:
# 121 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_07_E_Text_2:
# 128 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
