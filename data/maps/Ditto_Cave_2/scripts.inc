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
	special SlugmaCatch
# 13 "data/maps/Ditto_Cave_2/scripts.pory"
	setflag FLAG_TEMP_1
# 14 "data/maps/Ditto_Cave_2/scripts.pory"
	removeobject 1
# 15 "data/maps/Ditto_Cave_2/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 16 "data/maps/Ditto_Cave_2/scripts.pory"
	msgbox EventScript_SlugmaCatch_Text_0
# 18 "data/maps/Ditto_Cave_2/scripts.pory"
	release
	end


EventScript_SlugmaCatch_Text_0:
# 16 "data/maps/Ditto_Cave_2/scripts.pory"
	.string "Slugma burned a party member!\n"
	.string "They're a bit mad!$"
