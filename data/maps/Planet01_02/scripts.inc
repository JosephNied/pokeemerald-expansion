Planet01_02_MapScripts::
# 2 "data/maps/Planet01_02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
	.byte 0


Planet01_02_Enter::
# 6 "data/maps/Planet01_02/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_10
# 8 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_11
# 9 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_12
# 10 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_13
# 11 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_14
# 12 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_15
# 13 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_16
	end


Planet01_02_EventScript_Item01::
# 18 "data/maps/Planet01_02/scripts.pory"
	lock
# 19 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 20 "data/maps/Planet01_02/scripts.pory"
	removeobject 24
# 21 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 22 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item02::
# 27 "data/maps/Planet01_02/scripts.pory"
	lock
# 28 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 29 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 30 "data/maps/Planet01_02/scripts.pory"
	removeobject 23
# 31 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item03::
# 36 "data/maps/Planet01_02/scripts.pory"
	lock
# 37 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 38 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x4D0
# 39 "data/maps/Planet01_02/scripts.pory"
	removeobject 26
# 40 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01::
# 45 "data/maps/Planet01_02/scripts.pory"
	lockall
# 46 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 47 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 48 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 49 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 50 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 51 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 53 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 54 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 55 "data/maps/Planet01_02/scripts.pory"
	removeobject 5
# 56 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 57 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 58 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 63 "data/maps/Planet01_02/scripts.pory"
	lockall
# 64 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 65 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 66 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 67 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 68 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 69 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 71 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 72 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 73 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 74 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 75 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 76 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 81 "data/maps/Planet01_02/scripts.pory"
	lock
# 82 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 83 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 84 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 85 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 90 "data/maps/Planet01_02/scripts.pory"
	lock
# 91 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 92 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 93 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 94 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 99 "data/maps/Planet01_02/scripts.pory"
	lock
# 100 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 101 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 102 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 103 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 108 "data/maps/Planet01_02/scripts.pory"
	lock
# 109 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 110 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 111 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 112 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 117 "data/maps/Planet01_02/scripts.pory"
	lock
# 118 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 119 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 120 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 121 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 126 "data/maps/Planet01_02/scripts.pory"
	lock
# 127 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 128 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 129 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 130 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 135 "data/maps/Planet01_02/scripts.pory"
	lock
# 136 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 137 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 138 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 139 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 144 "data/maps/Planet01_02/scripts.pory"
	lock
# 145 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 146 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 147 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 148 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 149 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 150 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 151 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 152 "data/maps/Planet01_02/scripts.pory"
	removeobject 6
# 153 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 154 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 155 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 156 "data/maps/Planet01_02/scripts.pory"
	release
	end


Jirachi_goes_to_ship::
# 161 "data/maps/Planet01_02/scripts.pory"
	lock
# 162 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 163 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 164 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 165 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 166 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 167 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_1
# 168 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 169 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 170 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 171 "data/maps/Planet01_02/scripts.pory"
	removeobject 27
# 172 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 173 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_1
# 174 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText01::
# 179 "data/maps/Planet01_02/scripts.pory"
	lock
# 180 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText01_Text_0
# 185 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText02::
# 190 "data/maps/Planet01_02/scripts.pory"
	lock
# 191 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText02_Text_0
# 195 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText03::
# 200 "data/maps/Planet01_02/scripts.pory"
	lock
# 201 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_0
# 206 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText04::
# 211 "data/maps/Planet01_02/scripts.pory"
	lock
# 212 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText04_Text_0
# 215 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText05::
# 220 "data/maps/Planet01_02/scripts.pory"
	lock
# 221 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText05_Text_0
# 224 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText06::
# 229 "data/maps/Planet01_02/scripts.pory"
	lock
# 230 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText06_Text_0
# 232 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01_Text_0:
# 51 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 57 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 149 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 154 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Jirachi_goes_to_ship_Text_0:
# 166 "data/maps/Planet01_02/scripts.pory"
	.string "Jirachi wants to join your crew-!$"

Jirachi_goes_to_ship_Text_1:
# 173 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi went to your ship!$"

Planet01_02_HintText01_Text_0:
# 180 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: Note to self. Do not wear\n"
	.string "sweet smelling perfume the next time\l"
	.string "I climb this mountain.\p"
	.string "There's a strong pokemon at the top\n"
	.string "who is too much of a fan of it!$"

Planet01_02_HintText02_Text_0:
# 191 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: I've occasionally observed a\n"
	.string "Quagsire that seems to enjoy collecting\l"
	.string "pretty blue stones near the waterfall.\p"
	.string "How cute! Could they be Water Stones?$"

Planet01_02_HintText03_Text_0:
# 201 "data/maps/Planet01_02/scripts.pory"
	.string "Captain: To future explorers:\n"
	.string "Our team has setup our primary lab in\l"
	.string "the cave above this waterfall.\p"
	.string "You may be able to find our previous\n"
	.string "campsites to the south.$"

Planet01_02_HintText04_Text_0:
# 212 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: We couldn't find a Pokemon\n"
	.string "on this planet with the move {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall;\l"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}thankfully had brought our own.$"

Planet01_02_HintText05_Text_0:
# 221 "data/maps/Planet01_02/scripts.pory"
	.string "Scientist: There's a suprising amount\n"
	.string "of greenery here for a planet with such\l"
	.string "a light atmosphere.$"

Planet01_02_HintText06_Text_0:
# 230 "data/maps/Planet01_02/scripts.pory"
	.string "That concludes the demo!\n"
	.string "Thanks for playing!$"
