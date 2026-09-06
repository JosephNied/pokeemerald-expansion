Planet01_RegiDarkness_MapScripts::
# 2 "data/maps/Planet01_RegiDarkness/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_RegiDarkness_Enter
	.byte 0


Planet01_RegiDarkness_Enter::
# 6 "data/maps/Planet01_RegiDarkness/scripts.pory"
	goto_if_unset FLAG_HIDE_VIRIDIAN_FOREST_POTION_2, Planet01_RegiDarkness_Enter_2
# 9 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_RegiDarkness_Enter_1:
	end

Planet01_RegiDarkness_Enter_2:
# 7 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_RegiDarkness_Enter_1


RegiDarkness::
# 15 "data/maps/Planet01_RegiDarkness/scripts.pory"
	lock
# 16 "data/maps/Planet01_RegiDarkness/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq RegiDarkness_1
# 43 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 44 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative DrawMugshot
# 45 "data/maps/Planet01_RegiDarkness/scripts.pory"
	msgbox RegiDarkness_Text_1
# 47 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitmessage
# 48 "data/maps/Planet01_RegiDarkness/scripts.pory"
	closemessage
# 49 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative ClearMugshot
# 50 "data/maps/Planet01_RegiDarkness/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 51 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitstate
# 52 "data/maps/Planet01_RegiDarkness/scripts.pory"
	release
	end

RegiDarkness_1:
# 17 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/Planet01_RegiDarkness/scripts.pory"
	msgbox RegiDarkness_Text_0
# 21 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitse
# 22 "data/maps/Planet01_RegiDarkness/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 23 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitmoncry
# 24 "data/maps/Planet01_RegiDarkness/scripts.pory"
	special SetBossBattle
# 25 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 80, ITEM_NONE
# 30 "data/maps/Planet01_RegiDarkness/scripts.pory"
	special StartRegiBattle
# 31 "data/maps/Planet01_RegiDarkness/scripts.pory"
	special BossBattleOff
# 32 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_0x8000, SPECIES_REGISTEEL
# 33 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative RegisterSpeciesInDex
# 34 "data/maps/Planet01_RegiDarkness/scripts.pory"
	giveitem ITEM_COMET_SHARD, 1
# 36 "data/maps/Planet01_RegiDarkness/scripts.pory"
	msgbox RegiDarkness_Text_1
# 38 "data/maps/Planet01_RegiDarkness/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 39 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitstate
# 40 "data/maps/Planet01_RegiDarkness/scripts.pory"
	release
	end


RegiDarkness_Text_0:
# 18 "data/maps/Planet01_RegiDarkness/scripts.pory"
	.string "There's half-eaten fruit lying at the\n"
	.string "base of the tree.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}A strange feeling is coming over me...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

RegiDarkness_Text_1:
# 36 "data/maps/Planet01_RegiDarkness/scripts.pory"
	.string "The dark force has been defeated.\n"
	.string "Let's get out of here!$"
