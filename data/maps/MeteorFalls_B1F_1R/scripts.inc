# 1 "data/maps/MeteorFalls_B1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
MeteorFalls_B1F_1R_MapScripts::
# 3 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.byte 0

MeteorFalls_B1F_1R_MakeThingsDisappear::
# 7 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 8 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 10 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02A
# 11 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02B
# 12 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02C
# 13 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02D
# 14 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02E
# 15 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02F
# 16 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x030
# 17 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x031
# 18 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x032
# 19 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x033
# 20 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	special SetRandomFlags
# 23 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox MeteorFalls_B1F_1R_MakeThingsDisappear_Text_0
# 25 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end


MeteorFalls_B1F_1R_MapScripts_UrsalunaEncounter::
# 30 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 32 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 33 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 60, ITEM_NONE
# 34 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	dowildbattle
# 36 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end


MeteorFalls_B1F_1R_MakeThingsDisappear_Text_0:
# 23 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "Pokes randomized!$"
