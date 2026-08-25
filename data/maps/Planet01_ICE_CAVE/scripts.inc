Planet01_ICE_CAVE_MapScripts::
# 2 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_ICE_CAVE_Enter
	.byte 0


Planet01_ICE_CAVE_Enter::
# 6 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq Planet01_ICE_CAVE_Enter_1
# 7 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_eq Planet01_ICE_CAVE_Enter_1
# 10 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

Planet01_ICE_CAVE_Enter_1:
# 8 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


Planet01_Ice_Cave_EventScript_Item01::
# 15 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 16 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 17 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 9
# 18 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x49D
# 19 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


Planet01_Ice_Cave_EventScript_Item02::
# 24 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 25 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 26 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 8
# 27 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x49E
# 28 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


Planet01_Ice_Cave_Carbink::
# 33 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 34 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	faceplayer
# 35 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 36 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 37 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	callnative RegisterSpeciesInDex
# 38 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	msgbox Planet01_Ice_Cave_Carbink_Text_0
# 39 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x04C
# 40 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 41 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 11
# 42 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 43 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	msgbox Planet01_Ice_Cave_Carbink_Text_1
# 44 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 45 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


EventScript_GlalieCatch::
# 50 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lockall
# 51 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	fadeScreen FADE_TO_WHITE
# 52 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	special GlalieCatch
# 53 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x02D
# 54 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 55 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 3
# 56 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 10
# 57 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 58 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setvar VAR_0x8000, SPECIES_GLALIE
# 59 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	callnative RegisterSpeciesInDex
# 60 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	msgbox EventScript_GlalieCatch_Text_0
# 62 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


voicetrigger_icecave::
# 67 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 68 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	call voicedialogueABC
# 69 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setvar VAR_TEMP_2, 1
# 70 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


Planet01_Ice_Cave_Carbink_Text_0:
# 38 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	.string "The Carbink is chilly...$"

Planet01_Ice_Cave_Carbink_Text_1:
# 43 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

EventScript_GlalieCatch_Text_0:
# 60 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	.string "Glalie froze a party member!\n"
	.string "They're frozen solid!$"
