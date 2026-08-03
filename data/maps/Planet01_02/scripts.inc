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
	removeobject 22
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
	removeobject 21
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
	removeobject 24
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
	callnative RefreshO2Meter
# 56 "data/maps/Planet01_02/scripts.pory"
	removeobject 28
# 57 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 58 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 59 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 64 "data/maps/Planet01_02/scripts.pory"
	lockall
# 65 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 66 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 67 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 68 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 69 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 70 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 72 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 73 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 74 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 75 "data/maps/Planet01_02/scripts.pory"
	removeobject 23
# 76 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 77 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 78 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 83 "data/maps/Planet01_02/scripts.pory"
	lock
# 84 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 85 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 86 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 87 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 92 "data/maps/Planet01_02/scripts.pory"
	lock
# 93 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 94 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 95 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 96 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 101 "data/maps/Planet01_02/scripts.pory"
	lock
# 102 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 103 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 104 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 105 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 110 "data/maps/Planet01_02/scripts.pory"
	lock
# 111 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 112 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 113 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 114 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 119 "data/maps/Planet01_02/scripts.pory"
	lock
# 120 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 121 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 122 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 123 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 128 "data/maps/Planet01_02/scripts.pory"
	lock
# 129 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 130 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 131 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 132 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 137 "data/maps/Planet01_02/scripts.pory"
	lock
# 138 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 139 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 140 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 141 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 146 "data/maps/Planet01_02/scripts.pory"
	lock
# 147 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 148 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 149 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 150 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 151 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 152 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 153 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 154 "data/maps/Planet01_02/scripts.pory"
	removeobject 29
# 155 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 156 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 157 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 158 "data/maps/Planet01_02/scripts.pory"
	release
	end


Jirachi_goes_to_ship::
# 163 "data/maps/Planet01_02/scripts.pory"
	lock
# 164 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 165 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 166 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 167 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 168 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 169 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_1
# 170 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 171 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 172 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 173 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 174 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 175 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_1
# 176 "data/maps/Planet01_02/scripts.pory"
	release
	end


Found_Ruby::
# 181 "data/maps/Planet01_02/scripts.pory"
	lock
# 182 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 183 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 184 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 185 "data/maps/Planet01_02/scripts.pory"
	msgbox Found_Ruby_Text_0
# 187 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 188 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 189 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 190 "data/maps/Planet01_02/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 191 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 192 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText01::
# 197 "data/maps/Planet01_02/scripts.pory"
	lock
# 198 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText01_Text_0
# 203 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText02::
# 208 "data/maps/Planet01_02/scripts.pory"
	lock
# 209 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText02_Text_0
# 213 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText03::
# 218 "data/maps/Planet01_02/scripts.pory"
	lock
# 219 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_0
# 224 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText04::
# 229 "data/maps/Planet01_02/scripts.pory"
	lock
# 230 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText04_Text_0
# 233 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText05::
# 238 "data/maps/Planet01_02/scripts.pory"
	lock
# 239 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText05_Text_0
# 242 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText06::
# 247 "data/maps/Planet01_02/scripts.pory"
	lock
# 248 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText06_Text_0
# 250 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01_Text_0:
# 51 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 58 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 151 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 156 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Jirachi_goes_to_ship_Text_0:
# 168 "data/maps/Planet01_02/scripts.pory"
	.string "Jirachi wants to join your crew-!$"

Jirachi_goes_to_ship_Text_1:
# 175 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi went to your ship!$"

Found_Ruby_Text_0:
# 185 "data/maps/Planet01_02/scripts.pory"
	.string "Found the Ruby!\n"
	.string "Let's get the heck out of here!$"

Planet01_02_HintText01_Text_0:
# 198 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: Note to self. Do not wear\n"
	.string "sweet smelling perfume the next time\l"
	.string "I climb this mountain.\p"
	.string "There's a strong pokemon at the top\n"
	.string "who is too much of a fan of it!$"

Planet01_02_HintText02_Text_0:
# 209 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: I've occasionally observed a\n"
	.string "Quagsire that seems to enjoy collecting\l"
	.string "pretty blue stones near the waterfall.\p"
	.string "How cute! Could they be Water Stones?$"

Planet01_02_HintText03_Text_0:
# 219 "data/maps/Planet01_02/scripts.pory"
	.string "Captain: To future explorers:\n"
	.string "Our team has setup our primary lab in\l"
	.string "the cave above this waterfall.\p"
	.string "You may be able to find our previous\n"
	.string "campsites to the south.$"

Planet01_02_HintText04_Text_0:
# 230 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: We couldn't find a Pokemon\n"
	.string "on this planet with the move {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall;\l"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}thankfully had brought our own.$"

Planet01_02_HintText05_Text_0:
# 239 "data/maps/Planet01_02/scripts.pory"
	.string "Scientist: There's a suprising amount\n"
	.string "of greenery here for a planet with such\l"
	.string "a light atmosphere.$"

Planet01_02_HintText06_Text_0:
# 248 "data/maps/Planet01_02/scripts.pory"
	.string "That concludes the demo!\n"
	.string "Thanks for playing!$"
