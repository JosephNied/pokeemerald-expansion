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
# 35 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 36 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 37 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_2
# 38 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 39 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 40 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 42 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq gatemessage_2
# 42 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq gatemessage_2
# 45 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_SLOTS, 8
	goto_if_eq gatemessage_3
# 95 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 96 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 97 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_3
# 100 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 101 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 102 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 105 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 106 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 107 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_4
# 108 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 109 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 110 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 112 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 113 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 114 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_5
# 121 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 122 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 123 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 125 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 126 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 127 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_6
# 128 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 129 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 130 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 132 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 133 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 134 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_8
# 137 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 138 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 139 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
gatemessage_1:
# 142 "data/maps/Planet_07_E/scripts.pory"
	releaseall
	end

gatemessage_2:
# 43 "data/maps/Planet_07_E/scripts.pory"
	releaseall
	end

gatemessage_3:
# 46 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 47 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 48 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_3
# 51 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 52 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 53 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 56 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 57 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 58 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_4
# 59 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 60 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 61 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 63 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 64 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 65 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_5
# 72 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 73 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 74 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 76 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 77 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 78 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_6
# 79 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 80 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 81 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
# 83 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 84 "data/maps/Planet_07_E/scripts.pory"
	callnative DrawMugshot
# 85 "data/maps/Planet_07_E/scripts.pory"
	msgbox gatemessage_Text_7
# 90 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 91 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 92 "data/maps/Planet_07_E/scripts.pory"
	callnative ClearMugshot
	goto gatemessage_1


sableye_07_E::
# 147 "data/maps/Planet_07_E/scripts.pory"
	lock
# 148 "data/maps/Planet_07_E/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_GOLD, sableye_07_E_2
sableye_07_E_1:
# 170 "data/maps/Planet_07_E/scripts.pory"
	release
	end

sableye_07_E_2:
# 149 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_0
# 150 "data/maps/Planet_07_E/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 151 "data/maps/Planet_07_E/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 152 "data/maps/Planet_07_E/scripts.pory"
	waitmoncry
# 153 "data/maps/Planet_07_E/scripts.pory"
	setflag FLAG_SYS_PALACE_GOLD
# 154 "data/maps/Planet_07_E/scripts.pory"
	removeobject 1
# 155 "data/maps/Planet_07_E/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 156 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_07_E_5
# 163 "data/maps/Planet_07_E/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 164 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_2
sableye_07_E_4:
# 166 "data/maps/Planet_07_E/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 167 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 168 "data/maps/Planet_07_E/scripts.pory"
	callnative RegisterSpeciesInDex
	goto sableye_07_E_1

sableye_07_E_5:
# 157 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_1
# 158 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 159 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 160 "data/maps/Planet_07_E/scripts.pory"
	warp MAP_PLANET_07_E, 20, 7, 6
# 161 "data/maps/Planet_07_E/scripts.pory"
	waitstate
	goto sableye_07_E_4


killdarktiles::
# 175 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 176 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 11, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 177 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 12, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 178 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 13, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 179 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 14, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 180 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 182 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 11, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 183 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 12, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 184 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 13, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 185 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 14, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 186 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 188 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 11, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 189 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 12, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 190 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 13, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 191 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 14, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 192 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 194 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 11, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 195 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 12, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 196 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 13, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 197 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 14, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
	return


gatemessage_Text_0:
# 24 "data/maps/Planet_07_E/scripts.pory"
	.string "There's some faded text... I've never\n"
	.string "seen a written language like this, but\l"
	.string "somehow I feel like I can read it?$"

gatemessage_Text_1:
# 30 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}When five eyes open, so does the gate.\n"
	.string "There are many trees in the garden\l"
	.string "beneath the black pool, but only one\l"
	.string "was designed with that special purpose.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

gatemessage_Text_2:
# 37 "data/maps/Planet_07_E/scripts.pory"
	.string "What the? Who would have written this?$"

gatemessage_Text_3:
# 48 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I'm afraid... I might know.\n"
	.string "This pool is where I found the dormant\l"
	.string "Deoxys Cell.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

gatemessage_Text_4:
# 58 "data/maps/Planet_07_E/scripts.pory"
	.string "Huh. But what's with the creepy text?$"

gatemessage_Text_5:
# 65 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<After my experiments activated the\n"
	.string "Deoxys Cell and triggered PAL 9000's\l"
	.string "Emergency Protocol, my mind unleashed\l"
	.string "a massive wave of negative psychic\l"
	.string "energy.\p"
	.string "I think it... manifested? Constructed?\n"
	.string "something down in that pool.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

gatemessage_Text_6:
# 78 "data/maps/Planet_07_E/scripts.pory"
	.string "Manifested something? Like what?$"

gatemessage_Text_7:
# 85 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<A dark entity... I think it has the\n"
	.string "Shadow Crystal. We need to find a way\l"
	.string "down there and defeat it.\p"
	.string "I guess Jirachi is having you clean up\n"
	.string "my mess. I'm so sorry.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

gatemessage_Text_8:
# 134 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<A dark entity... We should avoid this\n"
	.string "place. It could be dangerous.\l"
	.string "Plus the vibe is terrible.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_07_E_Text_0:
# 149 "data/maps/Planet_07_E/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_07_E_Text_1:
# 157 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_07_E_Text_2:
# 164 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
