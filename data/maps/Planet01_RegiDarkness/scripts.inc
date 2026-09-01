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
# 52 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 53 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative DrawMugshot
# 54 "data/maps/Planet01_RegiDarkness/scripts.pory"
	msgbox RegiDarkness_Text_1
# 59 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitmessage
# 60 "data/maps/Planet01_RegiDarkness/scripts.pory"
	closemessage
# 61 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative ClearMugshot
# 62 "data/maps/Planet01_RegiDarkness/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 63 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitstate
# 64 "data/maps/Planet01_RegiDarkness/scripts.pory"
	release
	end

RegiDarkness_1:
# 17 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/Planet01_RegiDarkness/scripts.pory"
	msgbox RegiDarkness_Text_0
# 27 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitse
# 28 "data/maps/Planet01_RegiDarkness/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 29 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitmoncry
# 30 "data/maps/Planet01_RegiDarkness/scripts.pory"
	special SetBossBattle
# 31 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 80, ITEM_NONE
# 36 "data/maps/Planet01_RegiDarkness/scripts.pory"
	dowildbattle
# 37 "data/maps/Planet01_RegiDarkness/scripts.pory"
	special BossBattleOff
# 38 "data/maps/Planet01_RegiDarkness/scripts.pory"
	setvar VAR_0x8000, SPECIES_REGISTEEL
# 39 "data/maps/Planet01_RegiDarkness/scripts.pory"
	callnative RegisterSpeciesInDex
# 40 "data/maps/Planet01_RegiDarkness/scripts.pory"
	giveitem ITEM_COMET_SHARD, 1
# 42 "data/maps/Planet01_RegiDarkness/scripts.pory"
	msgbox RegiDarkness_Text_1
# 47 "data/maps/Planet01_RegiDarkness/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 48 "data/maps/Planet01_RegiDarkness/scripts.pory"
	waitstate
# 49 "data/maps/Planet01_RegiDarkness/scripts.pory"
	release
	end


RegiDarkness_Text_0:
# 18 "data/maps/Planet01_RegiDarkness/scripts.pory"
	.string "There's half-eaten fruit lying at the\n"
	.string "base of the tree...\p"
	.string "Isn't it strange, that this place\n"
	.string "exists?\p"
	.string "That any place exists?\p"
	.string "We must be here for a reason,\n"
	.string "There must be something I'm supposed\l"
	.string "to do.\p"
	.string "Oh, God... What am I supposed to do...?$"

RegiDarkness_Text_1:
# 42 "data/maps/Planet01_RegiDarkness/scripts.pory"
	.string "I still don't know what's going on.\n"
	.string "...I think that's ok. I don't think I'm\l"
	.string "expected to.\p"
	.string "It's time to get out of here. I really \n"
	.string "want to get home.$"
