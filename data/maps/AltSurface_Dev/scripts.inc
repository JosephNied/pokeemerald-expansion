AltSurface_Dev_MapScripts::
# 2 "data/maps/AltSurface_Dev/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AltSurface_Dev_Enter
	.byte 0


AltSurface_Dev_Enter::
# 6 "data/maps/AltSurface_Dev/scripts.pory"
	special SetRandomFlags
	end


AltSurface_Dev_MapScripts_UrsalunaEncounter::
# 11 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 13 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 14 "data/maps/AltSurface_Dev/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 60, ITEM_NONE
# 15 "data/maps/AltSurface_Dev/scripts.pory"
	dowildbattle
# 17 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end


AltSurface_Dev_EventScript_RandomItem01::
# 22 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 23 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 25 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 27 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem01_2
# 30 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem01_3
# 33 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem01_4
# 37 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem01_1:
# 39 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 40 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 12
# 41 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem01_2:
# 28 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem01_1

AltSurface_Dev_EventScript_RandomItem01_3:
# 31 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem01_1

AltSurface_Dev_EventScript_RandomItem01_4:
# 34 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem01_1


AltSurface_Dev_EventScript_RandomItem02::
# 46 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 47 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 49 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 51 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem02_2
# 54 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem02_3
# 57 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem02_4
# 61 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem02_1:
# 63 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 64 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 13
# 65 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem02_2:
# 52 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem02_1

AltSurface_Dev_EventScript_RandomItem02_3:
# 55 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem02_1

AltSurface_Dev_EventScript_RandomItem02_4:
# 58 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem02_1


AltSurface_Dev_EventScript_RandomItem03::
# 70 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 71 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 73 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 75 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem03_2
# 78 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem03_3
# 81 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem03_4
# 85 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem03_1:
# 87 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 88 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 14
# 89 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem03_2:
# 76 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem03_1

AltSurface_Dev_EventScript_RandomItem03_3:
# 79 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem03_1

AltSurface_Dev_EventScript_RandomItem03_4:
# 82 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem03_1


AltSurface_Dev_EventScript_RandomItem04::
# 94 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 95 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 97 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 99 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem04_2
# 102 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem04_3
# 105 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem04_4
# 109 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem04_1:
# 111 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 112 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 15
# 113 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem04_2:
# 100 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem04_1

AltSurface_Dev_EventScript_RandomItem04_3:
# 103 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem04_1

AltSurface_Dev_EventScript_RandomItem04_4:
# 106 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem04_1


AltSurface_Dev_EventScript_RandomItem05::
# 118 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 119 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 121 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 123 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem05_2
# 126 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem05_3
# 129 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem05_4
# 133 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem05_1:
# 135 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 136 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 16
# 137 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem05_2:
# 124 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem05_1

AltSurface_Dev_EventScript_RandomItem05_3:
# 127 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem05_1

AltSurface_Dev_EventScript_RandomItem05_4:
# 130 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem05_1


AltSurface_Dev_EventScript_RandomItem06::
# 142 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 143 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 145 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 147 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem06_2
# 150 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem06_3
# 153 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem06_4
# 157 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem06_1:
# 159 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 160 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 17
# 161 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem06_2:
# 148 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem06_1

AltSurface_Dev_EventScript_RandomItem06_3:
# 151 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem06_1

AltSurface_Dev_EventScript_RandomItem06_4:
# 154 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem06_1


AltSurface_Dev_EventScript_RandomItem07::
# 166 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 167 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 169 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 171 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem07_2
# 174 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem07_3
# 177 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem07_4
# 181 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem07_1:
# 183 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 184 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 18
# 185 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem07_2:
# 172 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem07_1

AltSurface_Dev_EventScript_RandomItem07_3:
# 175 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem07_1

AltSurface_Dev_EventScript_RandomItem07_4:
# 178 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem07_1

