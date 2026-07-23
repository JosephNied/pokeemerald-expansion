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
	setvar VAR_TEMP_0, 1
# 45 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 46 "data/maps/Planet01_05/scripts.pory"
	end
# 48 "data/maps/Planet01_05/scripts.pory"
PlayerLost_Dusknoir:
# 49 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 50 "data/maps/Planet01_05/scripts.pory"
	end
# 52 "data/maps/Planet01_05/scripts.pory"
DusknoirTrigger_End:
	end


# 56 "data/maps/Planet01_05/scripts.pory"
Movement_DusknoirAppears:
# 57 "data/maps/Planet01_05/scripts.pory"
	face_up
# 58 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 59 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 60 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 61 "data/maps/Planet01_05/scripts.pory"
	delay_4
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
	delay_8
# 68 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 69 "data/maps/Planet01_05/scripts.pory"
	delay_8
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
	delay_16
# 76 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 77 "data/maps/Planet01_05/scripts.pory"
	delay_16
# 78 "data/maps/Planet01_05/scripts.pory"
	set_visible
	step_end

Planet01_05_HintText01::
# 82 "data/maps/Planet01_05/scripts.pory"
	lock
# 83 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_HintText01_Text_0
# 92 "data/maps/Planet01_05/scripts.pory"
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
# 83 "data/maps/Planet01_05/scripts.pory"
	.string "Scientist: The trees here are giving off\n"
	.string "a mysterious glow... The mists here\l"
	.string "remind me of the anomalous cave we\l"
	.string "discovered earlier.\p"
	.string "We'll do what research we can here, and\n"
	.string "go there at our next opportunity in\l"
	.string "case there is a connection.\p"
	.string "These Duskull are freaking me out\n"
	.string "anyway.$"
