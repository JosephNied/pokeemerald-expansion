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
# 77 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 78 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 79 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_1
# 81 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 82 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 83 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 85 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 86 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 87 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_2
# 89 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 90 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 91 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 93 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 94 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 95 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_3
# 97 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 98 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 99 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 101 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 102 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 103 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_4
# 113 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 114 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 115 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 117 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 118 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 119 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_5
# 124 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 125 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 126 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
# 79 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "I was hoping to find these guys\n"
	.string "by now...$"

Planet01_First_Camp_Cave_HintText01_Text_2:
# 87 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<A fly, caught in a web. I'm surprised\n"
	.string "you're still whole, to be honest.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_First_Camp_Cave_HintText01_Text_3:
# 95 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Enough with the games! Just tell me who\n"
	.string "you are!$"

Planet01_First_Camp_Cave_HintText01_Text_4:
# 103 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Who am I... Good question... Nothing\n"
	.string "important. In truth, I was going to tell\l"
	.string "you how you might escape by getting to\l"
	.string "the research facility at the top of the\l"
	.string "waterfall. But, I guess I still don't\l"
	.string "know if that's what I want... I don't\l"
	.string "mean you any harm. But it's probably\l"
	.string "better you don't listen to me; a lost\l"
	.string "soul in the dark. However you choose to\l"
	.string "end this... I'm sorry.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_First_Camp_Cave_HintText01_Text_5:
# 119 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Look, you're clearly going through a\n"
	.string "time, but I don't want to be here. Just\l"
	.string "tell me what I need to do to get my ship\l"
	.string "off the ground.\p"
	.string "Hello? Hello?!?! ...Gone again? Damn.$"
