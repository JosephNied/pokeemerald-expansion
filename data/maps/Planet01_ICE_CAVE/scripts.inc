Planet01_ICE_CAVE_MapScripts::
# 2 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_ICE_CAVE_Enter
	.byte 0


Planet01_ICE_CAVE_Enter::
# 6 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	special SetRandomFlags
	return


Planet01_Ice_Cave_EventScript_Item01::
# 10 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 11 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 12 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 9
# 13 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x49D
# 14 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


Planet01_Ice_Cave_EventScript_Item02::
# 19 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 20 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 21 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 8
# 22 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x49E
# 23 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


Planet01_Ice_Cave_Carbink::
# 28 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lock
# 29 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	faceplayer
# 30 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 31 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 32 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	callnative RegisterSpeciesInDex
# 33 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	msgbox Planet01_Ice_Cave_Carbink_Text_0
# 34 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x04C
# 35 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 36 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 11
# 37 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 38 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	msgbox Planet01_Ice_Cave_Carbink_Text_1
# 39 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 40 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


EventScript_GlalieCatch::
# 45 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	lockall
# 46 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	fadeScreen FADE_TO_WHITE
# 47 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	special GlalieCatch
# 48 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x02D
# 49 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 50 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 3
# 51 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	removeobject 10
# 52 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 53 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	setvar VAR_0x8000, SPECIES_GLALIE
# 54 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	callnative RegisterSpeciesInDex
# 55 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	msgbox EventScript_GlalieCatch_Text_0
# 57 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	release
	end


Planet01_Ice_Cave_Carbink_Text_0:
# 33 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	.string "The Carbink is chilly...$"

Planet01_Ice_Cave_Carbink_Text_1:
# 38 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

EventScript_GlalieCatch_Text_0:
# 55 "data/maps/Planet01_ICE_CAVE/scripts.pory"
	.string "Glalie froze a party member!\n"
	.string "They're frozen solid!$"
