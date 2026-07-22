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
	setvar VAR_TEMP_0, 0
# 11 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 12 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 13 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_OnResume:
# 14 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setescapewarp MAP_PLANET01_03, 52, 36
# 15 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 16 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 17 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_OnLoad:
# 18 "data/maps/Planet01_Connector_Cave/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_DIG, ConnectorCave_OuterRoom_EventScript_CloseInnerRoomEntrance
# 19 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 20 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 21 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_CloseInnerRoomEntrance::
# 22 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 3, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 23 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 4, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 24 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 5, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 25 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 3, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 26 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 4, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 27 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 5, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 28 "data/maps/Planet01_Connector_Cave/scripts.pory"
	return
# 29 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 30 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_InnerRoomEntranceWall::
# 31 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lockall
# 32 "data/maps/Planet01_Connector_Cave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, ConnectorCave_OuterRoom_EventScript_HoleInWall
# 33 "data/maps/Planet01_Connector_Cave/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 34 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 35 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 36 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 37 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_HoleInWall::
# 38 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 39 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 40 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 41 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 42 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_BrailleDigHere::
# 43 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lockall
# 44 "data/maps/Planet01_Connector_Cave/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 45 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 46 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end

ConnectorCave_Cold_Warning::
# 50 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lock
# 51 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox ConnectorCave_Cold_Warning_Text_0
# 53 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setvar VAR_TEMP_0, 1
# 54 "data/maps/Planet01_Connector_Cave/scripts.pory"
	release
	end


ConnectorCave_Cold_Wall::
# 59 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lock
# 60 "data/maps/Planet01_Connector_Cave/scripts.pory"
	goto_if_unset FLAG_SYS_BRAILLE_DIG, ConnectorCave_Cold_Wall_2
# 64 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox ConnectorCave_Cold_Wall_Text_1
ConnectorCave_Cold_Wall_1:
# 66 "data/maps/Planet01_Connector_Cave/scripts.pory"
	release
	end

ConnectorCave_Cold_Wall_2:
# 61 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox ConnectorCave_Cold_Wall_Text_0
	goto ConnectorCave_Cold_Wall_1


ConnectorCave_Cold_Warning_Text_0:
# 51 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "Woah! ...It suddenly got way colder in\n"
	.string "here.$"

ConnectorCave_Cold_Wall_Text_0:
# 61 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "This wall is colder than the others...\n"
	.string "Is there something behind it?$"

ConnectorCave_Cold_Wall_Text_1:
# 64 "data/maps/Planet01_Connector_Cave/scripts.pory"
	.string "There's a frozen cavern back there!$"
