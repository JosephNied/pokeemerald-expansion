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
# 12 "data/maps/AltSurface_Dev/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 70, ITEM_LUM_BERRY
# 13 "data/maps/AltSurface_Dev/scripts.pory"
	dowildbattle
# 14 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_MapScripts_UrsalunaEncounter_2
AltSurface_Dev_MapScripts_UrsalunaEncounter_1:
# 18 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_MapScripts_UrsalunaEncounter_2:
# 16 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x034
	goto AltSurface_Dev_MapScripts_UrsalunaEncounter_1


AltSurface_Dev_EventScript_RandomItem01::
# 23 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 24 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 26 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 28 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem01_2
# 31 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem01_3
# 34 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem01_4
# 38 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem01_1:
# 40 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 41 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 12
# 42 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem01_2:
# 29 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem01_1

AltSurface_Dev_EventScript_RandomItem01_3:
# 32 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem01_1

AltSurface_Dev_EventScript_RandomItem01_4:
# 35 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem01_1


AltSurface_Dev_EventScript_RandomItem02::
# 47 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 48 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 50 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 52 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem02_2
# 55 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem02_3
# 58 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem02_4
# 62 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem02_1:
# 64 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 65 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 13
# 66 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem02_2:
# 53 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem02_1

AltSurface_Dev_EventScript_RandomItem02_3:
# 56 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem02_1

AltSurface_Dev_EventScript_RandomItem02_4:
# 59 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem02_1


AltSurface_Dev_EventScript_RandomItem03::
# 71 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 72 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 74 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 76 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem03_2
# 79 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem03_3
# 82 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem03_4
# 86 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem03_1:
# 88 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 89 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 14
# 90 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem03_2:
# 77 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem03_1

AltSurface_Dev_EventScript_RandomItem03_3:
# 80 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem03_1

AltSurface_Dev_EventScript_RandomItem03_4:
# 83 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem03_1


AltSurface_Dev_EventScript_RandomItem04::
# 95 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 96 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 98 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 100 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem04_2
# 103 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem04_3
# 106 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem04_4
# 110 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem04_1:
# 112 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 113 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 15
# 114 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem04_2:
# 101 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem04_1

AltSurface_Dev_EventScript_RandomItem04_3:
# 104 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem04_1

AltSurface_Dev_EventScript_RandomItem04_4:
# 107 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem04_1


AltSurface_Dev_EventScript_RandomItem05::
# 119 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 120 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 122 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 124 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem05_2
# 127 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem05_3
# 130 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem05_4
# 134 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem05_1:
# 136 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 137 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 16
# 138 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem05_2:
# 125 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem05_1

AltSurface_Dev_EventScript_RandomItem05_3:
# 128 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem05_1

AltSurface_Dev_EventScript_RandomItem05_4:
# 131 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem05_1


AltSurface_Dev_EventScript_RandomItem06::
# 143 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 144 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 146 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 148 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem06_2
# 151 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem06_3
# 154 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem06_4
# 158 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem06_1:
# 160 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 161 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 17
# 162 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem06_2:
# 149 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem06_1

AltSurface_Dev_EventScript_RandomItem06_3:
# 152 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem06_1

AltSurface_Dev_EventScript_RandomItem06_4:
# 155 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem06_1


AltSurface_Dev_EventScript_RandomItem07::
# 167 "data/maps/AltSurface_Dev/scripts.pory"
	lock
# 168 "data/maps/AltSurface_Dev/scripts.pory"
	faceplayer
# 170 "data/maps/AltSurface_Dev/scripts.pory"
	random 4
# 172 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AltSurface_Dev_EventScript_RandomItem07_2
# 175 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AltSurface_Dev_EventScript_RandomItem07_3
# 178 "data/maps/AltSurface_Dev/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AltSurface_Dev_EventScript_RandomItem07_4
# 182 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
AltSurface_Dev_EventScript_RandomItem07_1:
# 184 "data/maps/AltSurface_Dev/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 185 "data/maps/AltSurface_Dev/scripts.pory"
	removeobject 18
# 186 "data/maps/AltSurface_Dev/scripts.pory"
	release
	end

AltSurface_Dev_EventScript_RandomItem07_2:
# 173 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_REVIVE, 1
	goto AltSurface_Dev_EventScript_RandomItem07_1

AltSurface_Dev_EventScript_RandomItem07_3:
# 176 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_MAX_POTION, 1
	goto AltSurface_Dev_EventScript_RandomItem07_1

AltSurface_Dev_EventScript_RandomItem07_4:
# 179 "data/maps/AltSurface_Dev/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
	goto AltSurface_Dev_EventScript_RandomItem07_1

