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
	playse SE_PIN
# 17 "data/maps/Planet01_05/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_05_DusknoirEncounter_Movement_0
# 18 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_DusknoirEncounter_Text_0
# 20 "data/maps/Planet01_05/scripts.pory"
	applymovement 3, Movement_DusknoirAppears
# 21 "data/maps/Planet01_05/scripts.pory"
	waitmovement 0
# 23 "data/maps/Planet01_05/scripts.pory"
	waitse
# 24 "data/maps/Planet01_05/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 25 "data/maps/Planet01_05/scripts.pory"
	delay 40
# 26 "data/maps/Planet01_05/scripts.pory"
	waitmoncry
# 28 "data/maps/Planet01_05/scripts.pory"
	special SetBossBattle
# 29 "data/maps/Planet01_05/scripts.pory"
	setwildbattle SPECIES_DUSKNOIR, 75, ITEM_NONE
# 34 "data/maps/Planet01_05/scripts.pory"
	dowildbattle
# 35 "data/maps/Planet01_05/scripts.pory"
	special BossBattleOff
# 37 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, FALSE
# 38 "data/maps/Planet01_05/scripts.pory"
	goto_if_eq PlayerLost_Dusknoir
# 40 "data/maps/Planet01_05/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 41 "data/maps/Planet01_05/scripts.pory"
	setflag FLAG_UNUSED_0x03A
# 42 "data/maps/Planet01_05/scripts.pory"
	removeobject 3
# 43 "data/maps/Planet01_05/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 44 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_DusknoirEncounter_Text_1
# 46 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_0x8000, SPECIES_DUSKNOIR
# 47 "data/maps/Planet01_05/scripts.pory"
	callnative RegisterSpeciesInDex
# 48 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_TEMP_0, 1
# 49 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 50 "data/maps/Planet01_05/scripts.pory"
	end
# 52 "data/maps/Planet01_05/scripts.pory"
PlayerLost_Dusknoir:
# 53 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 54 "data/maps/Planet01_05/scripts.pory"
	end
# 56 "data/maps/Planet01_05/scripts.pory"
DusknoirTrigger_End:
	end


# 60 "data/maps/Planet01_05/scripts.pory"
Movement_DusknoirAppears:
# 61 "data/maps/Planet01_05/scripts.pory"
	face_up
# 62 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 63 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 64 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 65 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 66 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 67 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 68 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 69 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 70 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 71 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 72 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 73 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 74 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 75 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 76 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 77 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 78 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 79 "data/maps/Planet01_05/scripts.pory"
	delay_16
# 80 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 81 "data/maps/Planet01_05/scripts.pory"
	delay_16
# 82 "data/maps/Planet01_05/scripts.pory"
	set_visible
	step_end

Planet01_05_HintText01::
# 86 "data/maps/Planet01_05/scripts.pory"
	lock
# 87 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_HintText01_Text_0
# 93 "data/maps/Planet01_05/scripts.pory"
	release
	end


Color_Puzzle::
# 98 "data/maps/Planet01_05/scripts.pory"
	lock
# 99 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_0
# 100 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_DAILY_ROULETTE, 0
# 101 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_1
# 102 "data/maps/Planet01_05/scripts.pory"
	multichoice 0, 0, MULTI_COLOR_PUZZLE, FALSE
# 103 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Color_Puzzle_2
Color_Puzzle_1:
# 106 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_2
# 107 "data/maps/Planet01_05/scripts.pory"
	multichoice 0, 0, MULTI_COLOR_PUZZLE, FALSE
# 108 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Color_Puzzle_5
Color_Puzzle_4:
# 111 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_3
# 112 "data/maps/Planet01_05/scripts.pory"
	multichoice 0, 0, MULTI_COLOR_PUZZLE, FALSE
# 113 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Color_Puzzle_8
Color_Puzzle_7:
# 116 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_4
# 117 "data/maps/Planet01_05/scripts.pory"
	multichoice 0, 0, MULTI_COLOR_PUZZLE, FALSE
# 118 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Color_Puzzle_11
Color_Puzzle_10:
# 121 "data/maps/Planet01_05/scripts.pory"
	compare VAR_DAILY_ROULETTE, 4
	goto_if_eq Color_Puzzle_13
# 128 "data/maps/Planet01_05/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 129 "data/maps/Planet01_05/scripts.pory"
	callnative DrawMugshot
# 130 "data/maps/Planet01_05/scripts.pory"
	msgbox Color_Puzzle_Text_5
# 133 "data/maps/Planet01_05/scripts.pory"
	waitmessage
# 134 "data/maps/Planet01_05/scripts.pory"
	closemessage
# 135 "data/maps/Planet01_05/scripts.pory"
	callnative ClearMugshot
# 136 "data/maps/Planet01_05/scripts.pory"
	release
	end

Color_Puzzle_2:
# 104 "data/maps/Planet01_05/scripts.pory"
	addvar VAR_DAILY_ROULETTE, 1
	goto Color_Puzzle_1

Color_Puzzle_5:
# 109 "data/maps/Planet01_05/scripts.pory"
	addvar VAR_DAILY_ROULETTE, 1
	goto Color_Puzzle_4

Color_Puzzle_8:
# 114 "data/maps/Planet01_05/scripts.pory"
	addvar VAR_DAILY_ROULETTE, 1
	goto Color_Puzzle_7

Color_Puzzle_11:
# 119 "data/maps/Planet01_05/scripts.pory"
	addvar VAR_DAILY_ROULETTE, 1
	goto Color_Puzzle_10

Color_Puzzle_13:
# 122 "data/maps/Planet01_05/scripts.pory"
	warp MAP_PLANET01_FINAL_LAB_CORE, 1, 0, 0
# 123 "data/maps/Planet01_05/scripts.pory"
	waitstate
# 124 "data/maps/Planet01_05/scripts.pory"
	release
	end


# 17 "data/maps/Planet01_05/scripts.pory"
Planet01_05_DusknoirEncounter_Movement_0:
# 17 "data/maps/Planet01_05/scripts.pory"
	emote_exclamation_mark
	step_end

Planet01_05_DusknoirEncounter_Text_0:
# 18 "data/maps/Planet01_05/scripts.pory"
	.string "A terrifying Pokémon bursts out\n"
	.string "of the darkness!$"

Planet01_05_DusknoirEncounter_Text_1:
# 44 "data/maps/Planet01_05/scripts.pory"
	.string "The Dusknoir faded into the\n"
	.string "shadows.$"

Planet01_05_HintText01_Text_0:
# 87 "data/maps/Planet01_05/scripts.pory"
	.string "Ops Lead: Is it a coincidence that the\n"
	.string "white trees' positions correspond to\l"
	.string "the path through the misty cave?\p"
	.string "Or could it be that something is trying\n"
	.string "to communicate with us? You can never\l"
	.string "tell with ghost-type Pokémon...$"

Color_Puzzle_Text_0:
# 99 "data/maps/Planet01_05/scripts.pory"
	.string "A mesmerizing, iridescent rock...$"

Color_Puzzle_Text_1:
# 101 "data/maps/Planet01_05/scripts.pory"
	.string "You begin to focus on a color...$"

Color_Puzzle_Text_2:
# 106 "data/maps/Planet01_05/scripts.pory"
	.string "...And another...$"

Color_Puzzle_Text_3:
# 111 "data/maps/Planet01_05/scripts.pory"
	.string "Hypnotized, by another...$"

Color_Puzzle_Text_4:
# 116 "data/maps/Planet01_05/scripts.pory"
	.string "Drawn into another color...$"

Color_Puzzle_Text_5:
# 130 "data/maps/Planet01_05/scripts.pory"
	.string "Snap out of it!\n"
	.string "I should use my teleporter to get back\l"
	.string "to the ship already.$"
