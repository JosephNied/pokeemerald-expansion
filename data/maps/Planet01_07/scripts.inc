Planet01_07_MapScripts::
# 2 "data/maps/Planet01_07/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
	.byte 0


Planet01_07_Enter::
# 6 "data/maps/Planet01_07/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_07/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x88F, Planet01_07_Enter_2
# 10 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_07_Enter_1:
	end

Planet01_07_Enter_2:
# 8 "data/maps/Planet01_07/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_07_Enter_1


Sun_Moon_Check::
# 16 "data/maps/Planet01_07/scripts.pory"
	special SunMoonCheck
# 17 "data/maps/Planet01_07/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Sun_Moon_Check_2
Sun_Moon_Check_1:
	end

Sun_Moon_Check_2:
# 18 "data/maps/Planet01_07/scripts.pory"
	lock
# 19 "data/maps/Planet01_07/scripts.pory"
	special ReplaceSunMoonWithTerragem
# 20 "data/maps/Planet01_07/scripts.pory"
	msgbox Sun_Moon_Check_Text_0
# 21 "data/maps/Planet01_07/scripts.pory"
	givemon SPECIES_CELEBI, 50
# 22 "data/maps/Planet01_07/scripts.pory"
	giveitem ITEM_BEAST_BALL, 1
# 23 "data/maps/Planet01_07/scripts.pory"
	setflag FLAG_UNUSED_0x88F
# 24 "data/maps/Planet01_07/scripts.pory"
	release
	goto Sun_Moon_Check_1


Sun_Moon_Check_Text_0:
# 20 "data/maps/Planet01_07/scripts.pory"
	.string "Woah! Solrock and Lunatone merged into one!$"
