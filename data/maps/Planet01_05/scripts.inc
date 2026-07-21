Planet01_05_MapScripts::
# 2 "data/maps/Planet01_05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_05_Enter
	.byte 0


Planet01_05_Enter::
# 6 "data/maps/Planet01_05/scripts.pory"
	special SetRandomFlags
	return


Planet01_05_DusknoirEncounter::
# 10 "data/maps/Planet01_05/scripts.pory"
	checkflag FLAG_UNUSED_0x03A
# 11 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, TRUE
# 12 "data/maps/Planet01_05/scripts.pory"
	goto_if_eq DusknoirTrigger_End
# 14 "data/maps/Planet01_05/scripts.pory"
	lockall
# 15 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_DusknoirEncounter_Text_0
# 17 "data/maps/Planet01_05/scripts.pory"
	applymovement 3, Movement_DusknoirAppears
# 18 "data/maps/Planet01_05/scripts.pory"
	waitmovement 0
# 20 "data/maps/Planet01_05/scripts.pory"
	waitse
# 21 "data/maps/Planet01_05/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 22 "data/maps/Planet01_05/scripts.pory"
	delay 40
# 23 "data/maps/Planet01_05/scripts.pory"
	waitmoncry
# 25 "data/maps/Planet01_05/scripts.pory"
	special SetBossBattle
# 26 "data/maps/Planet01_05/scripts.pory"
	setwildbattle SPECIES_DUSKNOIR, 75, ITEM_NONE
# 31 "data/maps/Planet01_05/scripts.pory"
	dowildbattle
# 32 "data/maps/Planet01_05/scripts.pory"
	special BossBattleOff
# 34 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, FALSE
# 35 "data/maps/Planet01_05/scripts.pory"
	goto_if_eq PlayerLost_Dusknoir
# 37 "data/maps/Planet01_05/scripts.pory"
	removeobject 3
# 38 "data/maps/Planet01_05/scripts.pory"
	setflag FLAG_UNUSED_0x03A
# 40 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_DusknoirEncounter_Text_1
# 42 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 43 "data/maps/Planet01_05/scripts.pory"
	end
# 45 "data/maps/Planet01_05/scripts.pory"
PlayerLost_Dusknoir:
# 46 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 47 "data/maps/Planet01_05/scripts.pory"
	end
# 49 "data/maps/Planet01_05/scripts.pory"
DusknoirTrigger_End:
	end


# 53 "data/maps/Planet01_05/scripts.pory"
Movement_DusknoirAppears:
# 54 "data/maps/Planet01_05/scripts.pory"
	face_up
# 55 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 56 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 57 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 58 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 59 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 60 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 61 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 62 "data/maps/Planet01_05/scripts.pory"
	delay_4
# 63 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 64 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 65 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 66 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 67 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 68 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 69 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 70 "data/maps/Planet01_05/scripts.pory"
	delay_8
# 71 "data/maps/Planet01_05/scripts.pory"
	set_visible
# 72 "data/maps/Planet01_05/scripts.pory"
	delay_16
# 73 "data/maps/Planet01_05/scripts.pory"
	set_invisible
# 74 "data/maps/Planet01_05/scripts.pory"
	delay_16
# 75 "data/maps/Planet01_05/scripts.pory"
	set_visible
	step_end

Planet01_05_DusknoirEncounter_Text_0:
# 15 "data/maps/Planet01_05/scripts.pory"
	.string "A terrifying Pokémon bursts out\n"
	.string "of the darkness!$"

Planet01_05_DusknoirEncounter_Text_1:
# 40 "data/maps/Planet01_05/scripts.pory"
	.string "Dusknoir faded into the \n"
	.string "shadows.$"
