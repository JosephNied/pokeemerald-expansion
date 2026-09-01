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
	waitse
# 30 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 31 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitmoncry
# 32 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	msgbox Beheeyem_Text_0
# 36 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	setvar VAR_0x8000, SPECIES_BEHEEYEM
# 37 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	callnative RegisterSpeciesInDex
# 38 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	warp MAP_PLANET01_01, 1, 31, 11
# 39 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	waitstate
# 40 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	release
	end


Beheeyem_Text_0:
# 32 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "And now, we may never get to. I may\n"
	.string "never get to say how I feel to any of\l"
	.string "these people, and it's all my fault. Is\l"
	.string "that... What you wanted me to learn?$"

DeoxysBattle_Intro::
# 20 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "Here it comes! Brace yourself!$"

DeoxysBattle_Outro::
# 24 "data/maps/Planet01_Final_Lab_Core/scripts.pory"
	.string "...It's over.$"
