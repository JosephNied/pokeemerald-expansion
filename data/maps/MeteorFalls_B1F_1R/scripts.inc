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
	setflag FLAG_UNUSED_0x02A
# 11 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 12 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02C
# 13 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02D
# 14 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02E
# 15 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 16 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x030
# 17 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 18 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 19 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x033
# 21 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 3
# 22 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_MakeThingsDisappear_2
# 25 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_MakeThingsDisappear_3
# 29 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02C
MeteorFalls_B1F_1R_MakeThingsDisappear_1:
# 32 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 4
# 33 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_MakeThingsDisappear_8
# 36 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_MakeThingsDisappear_9
# 39 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeteorFalls_B1F_1R_MakeThingsDisappear_10
# 43 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x030
MeteorFalls_B1F_1R_MakeThingsDisappear_7:
# 46 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 3
# 47 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_MakeThingsDisappear_16
# 50 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_MakeThingsDisappear_17
# 54 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x033
MeteorFalls_B1F_1R_MakeThingsDisappear_15:
# 57 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox MeteorFalls_B1F_1R_MakeThingsDisappear_Text_0
# 59 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

MeteorFalls_B1F_1R_MakeThingsDisappear_2:
# 23 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02A
	goto MeteorFalls_B1F_1R_MakeThingsDisappear_1

MeteorFalls_B1F_1R_MakeThingsDisappear_3:
# 26 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_UNUSED_0x02B
	goto MeteorFalls_B1F_1R_MakeThingsDisappear_1

MeteorFalls_B1F_1R_MakeThingsDisappear_8:
# 34 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02D
	goto MeteorFalls_B1F_1R_MakeThingsDisappear_7

MeteorFalls_B1F_1R_MakeThingsDisappear_9:
# 37 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02E
	goto MeteorFalls_B1F_1R_MakeThingsDisappear_7

MeteorFalls_B1F_1R_MakeThingsDisappear_10:
# 40 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02F
	goto MeteorFalls_B1F_1R_MakeThingsDisappear_7

MeteorFalls_B1F_1R_MakeThingsDisappear_16:
# 48 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x031
	goto MeteorFalls_B1F_1R_MakeThingsDisappear_15

MeteorFalls_B1F_1R_MakeThingsDisappear_17:
# 51 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x032
	goto MeteorFalls_B1F_1R_MakeThingsDisappear_15


MeteorFalls_B1F_1R_MapScripts_UrsalunaEncounter::
# 64 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 66 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 67 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 60, ITEM_NONE
# 68 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	dowildbattle
# 70 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end


MeteorFalls_B1F_1R_MakeThingsDisappear_Text_0:
# 57 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "Pokes randomized!$"
