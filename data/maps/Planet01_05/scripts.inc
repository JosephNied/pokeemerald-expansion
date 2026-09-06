Planet01_05_MapScripts::
# 2 "data/maps/Planet01_05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_05_Enter
	.byte 0


Planet01_05_Enter::
# 6 "data/maps/Planet01_05/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_05/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x03A, Planet01_05_Enter_1
# 10 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

Planet01_05_Enter_1:
# 8 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_TEMP_0, 0
	return


Planet01_05_DusknoirEncounter::
# 15 "data/maps/Planet01_05/scripts.pory"
	lockall
# 16 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_DusknoirEncounter_Text_0
# 18 "data/maps/Planet01_05/scripts.pory"
	applymovement 3, Movement_DusknoirAppears
# 19 "data/maps/Planet01_05/scripts.pory"
	waitmovement 0
# 21 "data/maps/Planet01_05/scripts.pory"
	waitse
# 22 "data/maps/Planet01_05/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 23 "data/maps/Planet01_05/scripts.pory"
	delay 40
# 24 "data/maps/Planet01_05/scripts.pory"
	waitmoncry
# 26 "data/maps/Planet01_05/scripts.pory"
	special SetBossBattle
# 27 "data/maps/Planet01_05/scripts.pory"
	setwildbattle SPECIES_DUSKNOIR, 75, ITEM_NONE
# 32 "data/maps/Planet01_05/scripts.pory"
	dowildbattle
# 33 "data/maps/Planet01_05/scripts.pory"
	special BossBattleOff
# 35 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, FALSE
# 36 "data/maps/Planet01_05/scripts.pory"
	goto_if_eq PlayerLost_Dusknoir
# 38 "data/maps/Planet01_05/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 39 "data/maps/Planet01_05/scripts.pory"
	setflag FLAG_UNUSED_0x03A
# 40 "data/maps/Planet01_05/scripts.pory"
	removeobject 3
# 41 "data/maps/Planet01_05/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 42 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_DusknoirEncounter_Text_1
# 44 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_0x8000, SPECIES_DUSKNOIR
# 45 "data/maps/Planet01_05/scripts.pory"
	callnative RegisterSpeciesInDex
# 46 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_TEMP_0, 1
# 47 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 48 "data/maps/Planet01_05/scripts.pory"
	end
# 50 "data/maps/Planet01_05/scripts.pory"
PlayerLost_Dusknoir:
# 51 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 52 "data/maps/Planet01_05/scripts.pory"
	end
# 54 "data/maps/Planet01_05/scripts.pory"
DusknoirTrigger_End:
	end


# 58 "data/maps/Planet01_05/scripts.pory"
Movement_DusknoirAppears:
# 59 "data/maps/Planet01_05/scripts.pory"
	face_up
# 60 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 61 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 62 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 63 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 64 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 65 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 66 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 67 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 68 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 69 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 70 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 71 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 72 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 73 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 74 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 75 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 76 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 77 "data/maps/Planet01_05/scripts.pory"
	delay_16
# 78 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 79 "data/maps/Planet01_05/scripts.pory"
	delay_16
# 80 "data/maps/Planet01_05/scripts.pory"
	set_visible
	step_end

Planet01_05_HintText01::
# 84 "data/maps/Planet01_05/scripts.pory"
	lock
# 85 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_HintText01_Text_0
# 94 "data/maps/Planet01_05/scripts.pory"
	release
	end


Color_Puzzle::
# 99 "data/maps/Planet01_05/scripts.pory"
	lock
# 100 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_0
# 101 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_DAILY_ROULETTE, 0
# 102 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_1
# 103 "data/maps/Planet01_05/scripts.pory"
	multichoice 0, 0, MULTI_COLOR_PUZZLE, FALSE
# 104 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Color_Puzzle_2
Color_Puzzle_1:
# 107 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_2
# 108 "data/maps/Planet01_05/scripts.pory"
	multichoice 0, 0, MULTI_COLOR_PUZZLE, FALSE
# 109 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Color_Puzzle_5
Color_Puzzle_4:
# 112 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_3
# 113 "data/maps/Planet01_05/scripts.pory"
	multichoice 0, 0, MULTI_COLOR_PUZZLE, FALSE
# 114 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Color_Puzzle_8
Color_Puzzle_7:
# 117 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_4
# 118 "data/maps/Planet01_05/scripts.pory"
	multichoice 0, 0, MULTI_COLOR_PUZZLE, FALSE
# 119 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Color_Puzzle_11
Color_Puzzle_10:
# 122 "data/maps/Planet01_05/scripts.pory"
	compare VAR_DAILY_ROULETTE, 4
	goto_if_eq Color_Puzzle_13
# 129 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 130 "data/maps/Planet01_05/scripts.pory"
	callnative DrawMugshot
# 131 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_5
# 134 "data/maps/Planet01_05/scripts.pory"
	waitmessage
# 135 "data/maps/Planet01_05/scripts.pory"
	closemessage
# 136 "data/maps/Planet01_05/scripts.pory"
	callnative ClearMugshot
# 137 "data/maps/Planet01_05/scripts.pory"
	release
	end

Color_Puzzle_2:
# 105 "data/maps/Planet01_05/scripts.pory"
	addvar VAR_DAILY_ROULETTE, 1
	goto Color_Puzzle_1

Color_Puzzle_5:
# 110 "data/maps/Planet01_05/scripts.pory"
	addvar VAR_DAILY_ROULETTE, 1
	goto Color_Puzzle_4

Color_Puzzle_8:
# 115 "data/maps/Planet01_05/scripts.pory"
	addvar VAR_DAILY_ROULETTE, 1
	goto Color_Puzzle_7

Color_Puzzle_11:
# 120 "data/maps/Planet01_05/scripts.pory"
	addvar VAR_DAILY_ROULETTE, 1
	goto Color_Puzzle_10

Color_Puzzle_13:
# 123 "data/maps/Planet01_05/scripts.pory"
	warp MAP_PLANET01_FINAL_LAB_CORE, 1, 0, 0
# 124 "data/maps/Planet01_05/scripts.pory"
	waitstate
# 125 "data/maps/Planet01_05/scripts.pory"
	release
	end


Planet01_05_DusknoirEncounter_Text_0:
# 16 "data/maps/Planet01_05/scripts.pory"
	.string "A terrifying Pokémon bursts out\n"
	.string "of the darkness!$"

Planet01_05_DusknoirEncounter_Text_1:
# 42 "data/maps/Planet01_05/scripts.pory"
	.string "The Dusknoir faded into the\n"
	.string "shadows.$"

Planet01_05_HintText01_Text_0:
# 85 "data/maps/Planet01_05/scripts.pory"
	.string "Ops: The trees here are giving off\n"
	.string "a mysterious glow... The mists here\l"
	.string "remind me of the anomalous cave we\l"
	.string "discovered earlier.\p"
	.string "We'll do what research we can here, and\n"
	.string "go there at our next opportunity in\l"
	.string "case there is a connection.\p"
	.string "These Duskull are freaking me out\n"
	.string "anyway.$"

Color_Puzzle_Text_0:
# 100 "data/maps/Planet01_05/scripts.pory"
	.string "A mesmerizing, iridescent rock...$"

Color_Puzzle_Text_1:
# 102 "data/maps/Planet01_05/scripts.pory"
	.string "You begin to focus on a color...$"

Color_Puzzle_Text_2:
# 107 "data/maps/Planet01_05/scripts.pory"
	.string "...And another...$"

Color_Puzzle_Text_3:
# 112 "data/maps/Planet01_05/scripts.pory"
	.string "Hypnotized, by another...$"

Color_Puzzle_Text_4:
# 117 "data/maps/Planet01_05/scripts.pory"
	.string "Drawn into another color...$"

Color_Puzzle_Text_5:
# 131 "data/maps/Planet01_05/scripts.pory"
	.string "Snap out of it!\n"
	.string "I should use my teleporter to get back\l"
	.string "to the ship already.$"
