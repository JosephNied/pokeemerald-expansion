MeteorFalls_B1F_1R_MapScripts::
# 2 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_B1F_1R_Enter
	.byte 0


MeteorFalls_B1F_1R_Enter::
# 6 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	special SetRandomFlags
	end


MeteorFalls_B1F_1R_MapScripts_UrsalunaEncounter::
# 11 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 13 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 14 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 60, ITEM_NONE
# 15 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	dowildbattle
# 17 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

