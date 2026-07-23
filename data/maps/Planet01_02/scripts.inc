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
	setvar VAR_AIR_TIMER_STEPS, 150
# 47 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 48 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 49 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 51 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 52 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 53 "data/maps/Planet01_02/scripts.pory"
	removeobject 5
# 54 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 55 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 56 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 61 "data/maps/Planet01_02/scripts.pory"
	lockall
# 62 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 150
# 63 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 64 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 65 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 67 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 68 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 69 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 70 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 71 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 72 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 77 "data/maps/Planet01_02/scripts.pory"
	lock
# 78 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 79 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 80 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 81 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 86 "data/maps/Planet01_02/scripts.pory"
	lock
# 87 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 88 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 89 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 90 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 95 "data/maps/Planet01_02/scripts.pory"
	lock
# 96 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 97 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 98 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 99 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 104 "data/maps/Planet01_02/scripts.pory"
	lock
# 105 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 106 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 107 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 108 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 113 "data/maps/Planet01_02/scripts.pory"
	lock
# 114 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 115 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 116 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 117 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 122 "data/maps/Planet01_02/scripts.pory"
	lock
# 123 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 124 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 125 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 126 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 131 "data/maps/Planet01_02/scripts.pory"
	lock
# 132 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 133 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 134 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 135 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 140 "data/maps/Planet01_02/scripts.pory"
	lock
# 141 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 142 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 143 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 144 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 145 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 146 "data/maps/Planet01_02/scripts.pory"
	removeobject 6
# 147 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 148 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 149 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 150 "data/maps/Planet01_02/scripts.pory"
	release
	end


Jirachi_goes_to_ship::
# 155 "data/maps/Planet01_02/scripts.pory"
	lock
# 156 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 157 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 158 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 159 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_1
# 160 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 161 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 162 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 163 "data/maps/Planet01_02/scripts.pory"
	removeobject 27
# 164 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 165 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_1
# 166 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText01::
# 171 "data/maps/Planet01_02/scripts.pory"
	lock
# 172 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText01_Text_0
# 177 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText02::
# 182 "data/maps/Planet01_02/scripts.pory"
	lock
# 183 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText02_Text_0
# 187 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText03::
# 192 "data/maps/Planet01_02/scripts.pory"
	lock
# 193 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_0
# 198 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText04::
# 203 "data/maps/Planet01_02/scripts.pory"
	lock
# 204 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText04_Text_0
# 207 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText05::
# 212 "data/maps/Planet01_02/scripts.pory"
	lock
# 213 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText05_Text_0
# 216 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText06::
# 221 "data/maps/Planet01_02/scripts.pory"
	lock
# 222 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText06_Text_0
# 224 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01_Text_0:
# 49 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 55 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 143 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 148 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Jirachi_goes_to_ship_Text_0:
# 158 "data/maps/Planet01_02/scripts.pory"
	.string "Jirachi wants to join your crew-!$"

Jirachi_goes_to_ship_Text_1:
# 165 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi went to your ship!$"

Planet01_02_HintText01_Text_0:
# 172 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: Note to self. Do not wear\n"
	.string "sweet smelling perfume the next time\l"
	.string "I climb this mountain.\p"
	.string "There's a strong pokemon at the top\n"
	.string "who is too much of a fan of it!$"

Planet01_02_HintText02_Text_0:
# 183 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: The Quagsire seem to have\n"
	.string "pretty stones embedded in them.\p"
	.string "I'd be concerned, but they seem happy\n"
	.string "enough about it!$"

Planet01_02_HintText03_Text_0:
# 193 "data/maps/Planet01_02/scripts.pory"
	.string "Captain: To future explorers:\n"
	.string "Our team has setup our primary lab in\l"
	.string "the cave above this waterfall.\p"
	.string "You may be able to find our previous\n"
	.string "campsites to the south.$"

Planet01_02_HintText04_Text_0:
# 204 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: We couldn't find a Pokemon\n"
	.string "on this planet with the move {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall;\l"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}thankfully had brought our own.$"

Planet01_02_HintText05_Text_0:
# 213 "data/maps/Planet01_02/scripts.pory"
	.string "Scientist: There's a suprising amount\n"
	.string "of greenery here for a planet with such\l"
	.string "a light atmosphere.$"

Planet01_02_HintText06_Text_0:
# 222 "data/maps/Planet01_02/scripts.pory"
	.string "That concludes the demo!\n"
	.string "Thanks for playing!$"
