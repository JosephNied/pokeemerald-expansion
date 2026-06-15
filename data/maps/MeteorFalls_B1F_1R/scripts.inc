MeteorFalls_B1F_1R_MapScripts::
# 2 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_B1F_1R_Enter
	.byte 0


MeteorFalls_B1F_1R_Enter::
# 6 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	special SetRandomFlags
	end


MeteorFalls_B1F_1R_EventScript_DittoTrainer::
# 11 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, Ditto_Intro, Ditto_Outro
# 12 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox PostBattle_Ditto, MSGBOX_AUTOCLOSE
# 13 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	waitmessage
	end


MeteorFalls_B1F_1R_EventScript_RandomItem01::
# 30 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 31 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 33 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 4
# 35 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem01_2
# 38 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem01_3
# 41 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem01_4
# 45 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
MeteorFalls_B1F_1R_EventScript_RandomItem01_1:
# 47 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 48 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 12
# 49 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

MeteorFalls_B1F_1R_EventScript_RandomItem01_2:
# 36 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem01_1

MeteorFalls_B1F_1R_EventScript_RandomItem01_3:
# 39 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem01_1

MeteorFalls_B1F_1R_EventScript_RandomItem01_4:
# 42 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem01_1


MeteorFalls_B1F_1R_EventScript_RandomItem02::
# 54 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 55 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 57 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 4
# 59 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem02_2
# 62 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem02_3
# 65 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem02_4
# 69 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
MeteorFalls_B1F_1R_EventScript_RandomItem02_1:
# 71 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 72 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 13
# 73 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

MeteorFalls_B1F_1R_EventScript_RandomItem02_2:
# 60 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem02_1

MeteorFalls_B1F_1R_EventScript_RandomItem02_3:
# 63 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem02_1

MeteorFalls_B1F_1R_EventScript_RandomItem02_4:
# 66 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem02_1


MeteorFalls_B1F_1R_EventScript_RandomItem03::
# 78 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 79 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 81 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 4
# 83 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem03_2
# 86 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem03_3
# 89 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem03_4
# 93 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
MeteorFalls_B1F_1R_EventScript_RandomItem03_1:
# 95 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 96 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 14
# 97 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

MeteorFalls_B1F_1R_EventScript_RandomItem03_2:
# 84 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem03_1

MeteorFalls_B1F_1R_EventScript_RandomItem03_3:
# 87 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem03_1

MeteorFalls_B1F_1R_EventScript_RandomItem03_4:
# 90 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem03_1


MeteorFalls_B1F_1R_EventScript_RandomItem04::
# 102 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 103 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 105 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 4
# 107 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem04_2
# 110 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem04_3
# 113 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem04_4
# 117 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
MeteorFalls_B1F_1R_EventScript_RandomItem04_1:
# 119 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 120 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 15
# 121 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

MeteorFalls_B1F_1R_EventScript_RandomItem04_2:
# 108 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem04_1

MeteorFalls_B1F_1R_EventScript_RandomItem04_3:
# 111 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem04_1

MeteorFalls_B1F_1R_EventScript_RandomItem04_4:
# 114 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem04_1


MeteorFalls_B1F_1R_EventScript_RandomItem05::
# 126 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 127 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 129 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 4
# 131 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem05_2
# 134 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem05_3
# 137 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem05_4
# 141 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
MeteorFalls_B1F_1R_EventScript_RandomItem05_1:
# 143 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 144 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 16
# 145 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

MeteorFalls_B1F_1R_EventScript_RandomItem05_2:
# 132 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem05_1

MeteorFalls_B1F_1R_EventScript_RandomItem05_3:
# 135 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem05_1

MeteorFalls_B1F_1R_EventScript_RandomItem05_4:
# 138 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem05_1


MeteorFalls_B1F_1R_EventScript_RandomItem06::
# 150 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 151 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 153 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 4
# 155 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem06_2
# 158 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem06_3
# 161 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem06_4
# 165 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
MeteorFalls_B1F_1R_EventScript_RandomItem06_1:
# 167 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 168 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 17
# 169 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

MeteorFalls_B1F_1R_EventScript_RandomItem06_2:
# 156 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem06_1

MeteorFalls_B1F_1R_EventScript_RandomItem06_3:
# 159 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem06_1

MeteorFalls_B1F_1R_EventScript_RandomItem06_4:
# 162 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem06_1


MeteorFalls_B1F_1R_EventScript_RandomItem07::
# 174 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lock
# 175 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 177 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	random 4
# 179 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem07_2
# 182 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem07_3
# 185 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeteorFalls_B1F_1R_EventScript_RandomItem07_4
# 189 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
MeteorFalls_B1F_1R_EventScript_RandomItem07_1:
# 191 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 192 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 18
# 193 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	release
	end

MeteorFalls_B1F_1R_EventScript_RandomItem07_2:
# 180 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem07_1

MeteorFalls_B1F_1R_EventScript_RandomItem07_3:
# 183 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem07_1

MeteorFalls_B1F_1R_EventScript_RandomItem07_4:
# 186 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto MeteorFalls_B1F_1R_EventScript_RandomItem07_1


Ditto_Intro::
# 17 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "ditto$"

Ditto_Outro::
# 21 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "ditto$"

PostBattle_Ditto::
# 25 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "ditto$"
