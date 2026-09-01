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
	callnative ClearMugshot
# 47 "data/maps/Planet_07_E/scripts.pory"
	releaseall
	end


sableye_07_E::
# 52 "data/maps/Planet_07_E/scripts.pory"
	lock
# 53 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_0
# 54 "data/maps/Planet_07_E/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 55 "data/maps/Planet_07_E/scripts.pory"
	waitse
# 56 "data/maps/Planet_07_E/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 57 "data/maps/Planet_07_E/scripts.pory"
	waitmoncry
# 58 "data/maps/Planet_07_E/scripts.pory"
	setflag FLAG_SYS_PALACE_GOLD
# 59 "data/maps/Planet_07_E/scripts.pory"
	removeobject 1
# 60 "data/maps/Planet_07_E/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 61 "data/maps/Planet_07_E/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_07_E_2
# 68 "data/maps/Planet_07_E/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 69 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_2
sableye_07_E_1:
# 71 "data/maps/Planet_07_E/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 72 "data/maps/Planet_07_E/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 73 "data/maps/Planet_07_E/scripts.pory"
	callnative RegisterSpeciesInDex
# 74 "data/maps/Planet_07_E/scripts.pory"
	release
	end

sableye_07_E_2:
# 62 "data/maps/Planet_07_E/scripts.pory"
	msgbox sableye_07_E_Text_1
# 63 "data/maps/Planet_07_E/scripts.pory"
	waitmessage
# 64 "data/maps/Planet_07_E/scripts.pory"
	closemessage
# 65 "data/maps/Planet_07_E/scripts.pory"
	warp MAP_PLANET_07_E, 20, 7, 6
# 66 "data/maps/Planet_07_E/scripts.pory"
	waitstate
	goto sableye_07_E_1


killdarktiles::
# 79 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 80 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 11, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 81 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 12, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 82 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 13, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 83 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 14, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 84 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 10, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 86 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 11, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 87 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 12, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 88 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 13, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 89 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 14, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 90 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 10, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 92 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 11, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 93 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 12, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 94 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 13, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 95 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 14, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 96 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 15, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 98 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 11, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 99 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 12, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 100 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 13, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
# 101 "data/maps/Planet_07_E/scripts.pory"
	setmetatile 14, 15, METATILE_Underwater_darkpuddle_nowarp, FALSE
	return


gatemessage_Text_0:
# 24 "data/maps/Planet_07_E/scripts.pory"
	.string "There's some faded text... I've never\n"
	.string "seen a written language like this, but I\l"
	.string "feel like I can understand it...$"

gatemessage_Text_1:
# 30 "data/maps/Planet_07_E/scripts.pory"
	.string "When five eyes open, so does the gate.\n"
	.string "There are many trees in the garden\l"
	.string "beneath the black pool, but only one\l"
	.string "was designed for that special purpose.\p"
	.string "Your antlers are heavy. Your body is\n"
	.string "bare.\p"
	.string "Your heart is striving after wind, all\n"
	.string "is vanity. So what will you do?$"

gatemessage_Text_2:
# 41 "data/maps/Planet_07_E/scripts.pory"
	.string "What the? Who would have written this?\n"
	.string "Doesn't seem like something those\l"
	.string "scientists would have written...$"

sableye_07_E_Text_0:
# 53 "data/maps/Planet_07_E/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_07_E_Text_1:
# 62 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_07_E_Text_2:
# 69 "data/maps/Planet_07_E/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
