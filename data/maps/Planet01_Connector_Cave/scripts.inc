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
	end
# 11 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 12 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_OnResume:
# 13 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setescapewarp MAP_PLANET01_03, 52, 36
# 14 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 15 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 16 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_OnLoad:
# 17 "data/maps/Planet01_Connector_Cave/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_DIG, ConnectorCave_OuterRoom_EventScript_CloseInnerRoomEntrance
# 18 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 19 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 20 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_CloseInnerRoomEntrance::
# 21 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 3, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 22 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 4, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 23 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 5, 0, METATILE_Connector_Cave_Cover_Wall, TRUE
# 24 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 3, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 25 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 4, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 26 "data/maps/Planet01_Connector_Cave/scripts.pory"
	setmetatile 5, 1, METATILE_Connector_Cave_Cover_Wall, TRUE
# 27 "data/maps/Planet01_Connector_Cave/scripts.pory"
	return
# 28 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 29 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_InnerRoomEntranceWall::
# 30 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lockall
# 31 "data/maps/Planet01_Connector_Cave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, ConnectorCave_OuterRoom_EventScript_HoleInWall
# 32 "data/maps/Planet01_Connector_Cave/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 33 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 34 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 35 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 36 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_HoleInWall::
# 37 "data/maps/Planet01_Connector_Cave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 38 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 39 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
# 40 "data/maps/Planet01_Connector_Cave/scripts.pory"

# 41 "data/maps/Planet01_Connector_Cave/scripts.pory"
ConnectorCave_OuterRoom_EventScript_BrailleDigHere::
# 42 "data/maps/Planet01_Connector_Cave/scripts.pory"
	lockall
# 43 "data/maps/Planet01_Connector_Cave/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 44 "data/maps/Planet01_Connector_Cave/scripts.pory"
	releaseall
# 45 "data/maps/Planet01_Connector_Cave/scripts.pory"
	end
