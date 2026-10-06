Ditto_Cave_2_MapScripts::
# 2 "data/maps/Ditto_Cave_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ditto_Cave_2_Enter
	.byte 0


Ditto_Cave_2_Enter::
# 6 "data/maps/Ditto_Cave_2/scripts.pory"
	special SetRandomFlags
	return


EventScript_SlugmaCatch::
# 10 "data/maps/Ditto_Cave_2/scripts.pory"
	lockall
# 11 "data/maps/Ditto_Cave_2/scripts.pory"
	fadeScreen FADE_TO_WHITE
# 12 "data/maps/Ditto_Cave_2/scripts.pory"
	special FlashCheck
# 13 "data/maps/Ditto_Cave_2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_SlugmaCatch_1
# 24 "data/maps/Ditto_Cave_2/scripts.pory"
	special SlugmaCatch
# 25 "data/maps/Ditto_Cave_2/scripts.pory"
	setflag FLAG_TEMP_1
# 26 "data/maps/Ditto_Cave_2/scripts.pory"
	removeobject 1
# 27 "data/maps/Ditto_Cave_2/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 28 "data/maps/Ditto_Cave_2/scripts.pory"
	msgbox EventScript_SlugmaCatch_Text_1
# 30 "data/maps/Ditto_Cave_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_SLUGMA
# 31 "data/maps/Ditto_Cave_2/scripts.pory"
	callnative RegisterSpeciesInDex
# 32 "data/maps/Ditto_Cave_2/scripts.pory"
	releaseall
	end

EventScript_SlugmaCatch_1:
# 14 "data/maps/Ditto_Cave_2/scripts.pory"
	setflag FLAG_TEMP_1
# 15 "data/maps/Ditto_Cave_2/scripts.pory"
	removeobject 1
# 16 "data/maps/Ditto_Cave_2/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 17 "data/maps/Ditto_Cave_2/scripts.pory"
	msgbox EventScript_SlugmaCatch_Text_0
# 19 "data/maps/Ditto_Cave_2/scripts.pory"
	setvar VAR_0x8000, SPECIES_SLUGMA
# 20 "data/maps/Ditto_Cave_2/scripts.pory"
	callnative RegisterSpeciesInDex
# 21 "data/maps/Ditto_Cave_2/scripts.pory"
	releaseall
	end


slugmanote::
# 38 "data/maps/Ditto_Cave_2/scripts.pory"
	lock
# 39 "data/maps/Ditto_Cave_2/scripts.pory"
	msgbox slugmanote_Text_0
# 45 "data/maps/Ditto_Cave_2/scripts.pory"
	release
	end


EventScript_SlugmaCatch_Text_0:
# 17 "data/maps/Ditto_Cave_2/scripts.pory"
	.string "Clefable's Flash protected your team\n"
	.string "from getting burned!$"

EventScript_SlugmaCatch_Text_1:
# 28 "data/maps/Ditto_Cave_2/scripts.pory"
	.string "Slugma burned a party member!\n"
	.string "Should've run directly away!$"

slugmanote_Text_0:
# 39 "data/maps/Ditto_Cave_2/scripts.pory"
	.string "Ops Lead: This cave just loops around\n"
	.string "and around... We're totally lost.\p"
	.string "There's got to be a clue somewhere.\n"
	.string "There's only one thing I know for sure:\p"
	.string "If you see a Slugma, run directly away\n"
	.string "from it!$"
