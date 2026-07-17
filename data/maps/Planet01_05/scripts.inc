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
	lockall
# 11 "data/maps/Planet01_05/scripts.pory"
	faceplayer
# 13 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_DusknoirEncounter_Text_0
# 16 "data/maps/Planet01_05/scripts.pory"
	setwildbattle SPECIES_DUSKNOIR, 75, ITEM_NONE
# 22 "data/maps/Planet01_05/scripts.pory"
	dowildbattle
# 24 "data/maps/Planet01_05/scripts.pory"
	compare VAR_RESULT, FALSE
# 25 "data/maps/Planet01_05/scripts.pory"
	goto_if_eq PlayerLost_Dusknoir
# 27 "data/maps/Planet01_05/scripts.pory"
	removeobject 3
# 28 "data/maps/Planet01_05/scripts.pory"
	setflag FLAG_UNUSED_0x03A
# 30 "data/maps/Planet01_05/scripts.pory"
	msgbox Planet01_05_DusknoirEncounter_Text_1
# 31 "data/maps/Planet01_05/scripts.pory"
	releaseall
# 32 "data/maps/Planet01_05/scripts.pory"
	end
# 34 "data/maps/Planet01_05/scripts.pory"
PlayerLost_Dusknoir:
# 35 "data/maps/Planet01_05/scripts.pory"
	releaseall
	end


Planet01_05_DusknoirEncounter_Text_0:
# 13 "data/maps/Planet01_05/scripts.pory"
	.string "The terrifying Pokémon burst out\n"
	.string "of the darkness!$"

Planet01_05_DusknoirEncounter_Text_1:
# 30 "data/maps/Planet01_05/scripts.pory"
	.string "Dusknoir faded into the shadows.$"
