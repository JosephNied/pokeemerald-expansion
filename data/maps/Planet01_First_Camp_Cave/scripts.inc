Planet01_First_Camp_Cave_MapScripts::
# 2 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_First_Camp_Cave_Enter
	.byte 0


Planet01_First_Camp_Cave_Enter::
# 6 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	clearflag FLAG_UNUSED_0x02A
	end


Planet01_First_Camp_Cave_UrsalunaEncounter::
# 11 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lockall
# 12 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	faceplayer
# 14 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0
# 17 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 75, ITEM_NONE
# 23 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	dowildbattle
# 25 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 26 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	goto_if_eq PlayerLost
# 28 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 1
# 29 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x02A
# 31 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1
# 32 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
# 33 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	end
# 35 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
PlayerLost:
# 36 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end


Planet01_First_Camp_Cave_EventScript_Item01::
# 41 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 42 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 43 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 3
# 44 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 45 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_EventScript_Item02::
# 50 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 51 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 52 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 2
# 53 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49C
# 54 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0:
# 14 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The enormous Pokémon lets out\n"
	.string "a deafening roar!$"

Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1:
# 31 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The Ursaluna disappeared into the cave.$"
