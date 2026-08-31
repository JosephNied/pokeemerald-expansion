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
# 34 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 35 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative DrawMugshot
# 36 "data/maps/Planet01_RegiDarkness/scripts.pory"
	msgbox RegiDarkness_Text_1
# 38 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitmessage
# 39 "data/maps/Planet01_RegiDarkness/scripts.pory"
	closemessage
# 40 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative ClearMugshot
# 41 "data/maps/Planet01_RegiDarkness/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 42 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitstate
# 43 "data/maps/Planet01_RegiDarkness/scripts.pory"
	release
	end

RegiDarkness_1:
# 17 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/Planet01_RegiDarkness/scripts.pory"
	msgbox RegiDarkness_Text_0
# 20 "data/maps/Planet01_RegiDarkness/scripts.pory"
	special SetBossBattle
# 21 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 75, ITEM_NONE
# 26 "data/maps/Planet01_RegiDarkness/scripts.pory"
	dowildbattle
# 27 "data/maps/Planet01_RegiDarkness/scripts.pory"
	special BossBattleOff
# 28 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_0x8000, SPECIES_REGISTEEL
# 29 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative RegisterSpeciesInDex
# 30 "data/maps/Planet01_RegiDarkness/scripts.pory"
	giveitem ITEM_COMET_SHARD, 1
# 31 "data/maps/Planet01_RegiDarkness/scripts.pory"
	release
	end


RegiDarkness_Text_0:
# 18 "data/maps/Planet01_RegiDarkness/scripts.pory"
	.string "A strange feeling creeps over you...$"

RegiDarkness_Text_1:
# 36 "data/maps/Planet01_RegiDarkness/scripts.pory"
	.string "I won.\n"
	.string "It's time to leave this place.$"
