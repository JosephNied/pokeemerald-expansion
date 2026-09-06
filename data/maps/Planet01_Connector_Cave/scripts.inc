# 1 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 2 "data/maps/Planet01_Connector_Cave/scripts.pory"
Planet01_Connector_Cave_MapScripts::
# 3 "data/maps/Planet01_Connector_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ConnectorCave_Enter
# 4 "data/maps/Planet01_Connector_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ConnectorCave_OuterRoom_OnResume
# 5 "data/maps/Planet01_Connector_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ConnectorCave_OuterRoom_OnLoad
# 6 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.byte 0
# 7 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 8 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_Enter:
# 9 "data/maps/Planet01_Connector_Cave/scripts.pory"
	special SetRandomFlags
# 10 "data/maps/Planet01_Connector_Cave/scripts.pory"
	checkflag FLAG_SYS_BRAILLE_DIG
# 11 "data/maps/Planet01_Connector_Cave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, ConnectorCave_FlagSet
# 12 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setvar VAR_TEMP_0, 0
# 13 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 14 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 15 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_FlagSet:
# 16 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 17 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 18 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 19 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_OnResume:
# 20 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setescapewarp MAP_PLANET01_03, 52, 36
# 21 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 22 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 23 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_OnLoad:
# 24 "data/maps/Planet01_Connector_Cave/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_DIG, ConnectorCave_OuterRoom_EventScript_CloseInnerRoomEntrance
# 25 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 26 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 27 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_CloseInnerRoomEntrance::
# 28 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 3, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 29 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 4, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 30 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 5, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 31 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 3, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 32 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 4, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 33 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 5, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 34 "data/maps/Planet01_Connector_Cave/scripts.pory"
	return
# 35 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 36 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_InnerRoomEntranceWall::
# 37 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lockall
# 38 "data/maps/Planet01_Connector_Cave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, ConnectorCave_OuterRoom_EventScript_HoleInWall
# 39 "data/maps/Planet01_Connector_Cave/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 40 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 41 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 42 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 43 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_HoleInWall::
# 44 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 45 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 46 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 47 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 48 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_BrailleDigHere::
# 49 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lockall
# 50 "data/maps/Planet01_Connector_Cave/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 51 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 52 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end

ConnectorCave_Cold_Warning::
# 56 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lock
# 57 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 58 "data/maps/Planet01_Connector_Cave/scripts.pory"
	callnative DrawMugshot
# 59 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox ConnectorCave_Cold_Warning_Text_0
# 61 "data/maps/Planet01_Connector_Cave/scripts.pory"
	waitmessage
# 62 "data/maps/Planet01_Connector_Cave/scripts.pory"
	callnative ClearMugshot
# 63 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 64 "data/maps/Planet01_Connector_Cave/scripts.pory"
	release
	end


ConnectorCave_Cold_Wall::
# 69 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lock
# 70 "data/maps/Planet01_Connector_Cave/scripts.pory"
	goto_if_unset FLAG_SYS_BRAILLE_DIG, ConnectorCave_Cold_Wall_2
# 74 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox ConnectorCave_Cold_Wall_Text_1
ConnectorCave_Cold_Wall_1:
# 76 "data/maps/Planet01_Connector_Cave/scripts.pory"
	release
	end

ConnectorCave_Cold_Wall_2:
# 71 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox ConnectorCave_Cold_Wall_Text_0
	goto ConnectorCave_Cold_Wall_1


EventScript_GlimmoraCatch::
# 81 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lockall
# 82 "data/maps/Planet01_Connector_Cave/scripts.pory"
	fadeScreen FADE_TO_WHITE
# 83 "data/maps/Planet01_Connector_Cave/scripts.pory"
	special GlimmoraCatch
# 84 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x02C
# 85 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x030
# 86 "data/maps/Planet01_Connector_Cave/scripts.pory"
	removeobject 4
# 87 "data/maps/Planet01_Connector_Cave/scripts.pory"
	removeobject 2
# 88 "data/maps/Planet01_Connector_Cave/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 89 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setvar VAR_0x8000, SPECIES_GLIMMORA
# 90 "data/maps/Planet01_Connector_Cave/scripts.pory"
	callnative RegisterSpeciesInDex
# 91 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox EventScript_GlimmoraCatch_Text_0
# 93 "data/maps/Planet01_Connector_Cave/scripts.pory"
	release
	end


groundjournal_2::
# 98 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lock
# 100 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 101 "data/maps/Planet01_Connector_Cave/scripts.pory"
	callnative DrawMugshot
# 102 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox groundjournal_2_Text_0
# 103 "data/maps/Planet01_Connector_Cave/scripts.pory"
	waitmessage
# 104 "data/maps/Planet01_Connector_Cave/scripts.pory"
	callnative ClearMugshot
# 106 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox groundjournal_2_Text_1
# 117 "data/maps/Planet01_Connector_Cave/scripts.pory"
	release
	end


connector_cave_remains::
# 122 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lock
# 123 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox connector_cave_remains_Text_0
# 127 "data/maps/Planet01_Connector_Cave/scripts.pory"
	waitmessage
# 128 "data/maps/Planet01_Connector_Cave/scripts.pory"
	closemessage
# 129 "data/maps/Planet01_Connector_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq connector_cave_remains_2
connector_cave_remains_1:
# 132 "data/maps/Planet01_Connector_Cave/scripts.pory"
	release
	end

connector_cave_remains_2:
# 130 "data/maps/Planet01_Connector_Cave/scripts.pory"
	call voicedialogueABC
	goto connector_cave_remains_1


ConnectorCave_Cold_Warning_Text_0:
# 59 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "Woah! ...It suddenly got way colder in\n"
	.string "here.$"

ConnectorCave_Cold_Wall_Text_0:
# 71 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "This wall is colder than the others...\n"
	.string "Is there something behind it?$"

ConnectorCave_Cold_Wall_Text_1:
# 74 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "There's a frozen cavern back there!$"

EventScript_GlimmoraCatch_Text_0:
# 91 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "Glimmora poisoned a party member!\n"
	.string "That stings!$"

groundjournal_2_Text_0:
# 102 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "A journal!$"

groundjournal_2_Text_1:
# 106 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "Ops Lead: I have a plan to do something\n"
	.string "special for the Biologist. She may know \l"
	.string "my Pokémon team can transform any\l"
	.string "environment; but what she doesn't know\l"
	.string "is that I've brought some flower seeds\l"
	.string "with me that'll really make it feel like\l"
	.string "home!\p"
	.string "I know she's a bit obsessed with making\n"
	.string "some big breakthrough. I don't care as\l"
	.string "much about that; being here with her is\l"
	.string "enough for me.$"

connector_cave_remains_Text_0:
# 123 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "Ops Lead: We decided to abandon this\n"
	.string "camp too. It's too cold, and the ghost\l"
	.string "PKMN we found beyond the icy cavern\l"
	.string "give me the creeps.$"
