# 1 "data/maps/Planet01_Final_Lab_Core/scripts.pory"

# 2 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
Planet01_Final_Lab_Core_MapScripts::
# 3 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.byte 0

DoDeoxysBattle::
# 6 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	trainerbattle_single TRAINER_WALTER_5, DeoxysBattle_Intro, DeoxysBattle_Outro
# 7 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 8 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setflag FLAG_UNUSED_0x054
# 9 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	removeobject 1
# 10 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 11 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_DEOXYS_NORMAL
# 12 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
	end


DeoxysBattle_Intro::
# 16 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Here it comes!$"

DeoxysBattle_Outro::
# 20 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "You win the game!$"
