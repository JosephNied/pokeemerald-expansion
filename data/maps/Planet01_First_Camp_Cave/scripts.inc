Planet01_First_Camp_Cave_MapScripts::
# 2 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_First_Camp_Cave_Enter
	.byte 0


Planet01_First_Camp_Cave_Enter::
	end


Planet01_First_Camp_Cave_UrsalunaEncounter::
# 11 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lockall
# 12 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	faceplayer
# 14 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0
# 17 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special SetBossBattle
# 18 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 75, ITEM_NONE
# 23 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	dowildbattle
# 24 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special BossBattleOff
# 26 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 27 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	goto_if_eq PlayerLost
# 29 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x03B
# 30 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 1
# 32 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1
# 34 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, SPECIES_URSALUNA
# 35 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative RegisterSpeciesInDex
# 36 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
# 37 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	end
# 39 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
PlayerLost:
# 40 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end


Planet01_First_Camp_Cave_EventScript_Item01::
# 45 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 46 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 47 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 3
# 48 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 49 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_EventScript_Item02::
# 54 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 55 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 56 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 2
# 57 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49C
# 58 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_HintText01::
# 63 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 64 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_0
# 73 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 74 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 75 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 60
# 76 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 77 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 78 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_1
# 82 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 83 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 84 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0:
# 14 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The enormous Pokémon lets out\n"
	.string "a deafening roar!$"

Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1:
# 32 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The Ursaluna disappeared into the\n"
	.string "cave.$"

Planet01_First_Camp_Cave_HintText01_Text_0:
# 64 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Engineer: We made a research base\n"
	.string "here, but the local fauna discovered it\l"
	.string "and got aggressive, so we better move.\p"
	.string "There's another cave across the shore,\n"
	.string "maybe we can check it out?\p"
	.string "We might need to use our pokemon to dig\n"
	.string "around and create a wall between us and\l"
	.string "the icy caverns, though I do want to \l"
	.string "explore those too.$"

Planet01_First_Camp_Cave_HintText01_Text_1:
# 78 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "I was hoping to find these guys\n"
	.string "by now. It seems like it's been a while\l"
	.string "since they've been here. How long ago\l"
	.string "was this expedition?$"
