Planet01_Final_Lab_Core_MapScripts::
# 2 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_Final_Lab_Core_Enter
	.byte 0


Planet01_Final_Lab_Core_Enter::
# 6 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflashlevel 4
	return


DoDeoxysBattle::
# 10 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	trainerbattle_single TRAINER_WALTER_5, DeoxysBattle_Intro, DeoxysBattle_Outro
# 11 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 12 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflag FLAG_UNUSED_0x054
# 13 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	removeobject 1
# 14 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 15 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_DEOXYS_NORMAL
# 16 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
	end


Beheeyem::
# 29 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Beheeyem_Text_0
# 30 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_BEHEEYEM
# 31 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
# 32 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	warp MAP_PLANET01_01, 1, 31, 11
# 33 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitstate
# 34 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	release
	end


Beheeyem_Text_0:
# 29 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...Time to wake up...$"

DeoxysBattle_Intro::
# 20 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Here it comes! Brace yourself!$"

DeoxysBattle_Outro::
# 24 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...It's over.$"
