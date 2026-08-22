Planet01_02_MapScripts::
# 2 "data/maps/Planet01_02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
	.byte 0


Planet01_02_Enter::
# 6 "data/maps/Planet01_02/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_1, 0
# 8 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_10
# 9 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_11
# 10 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_12
# 11 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_13
# 12 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_14
# 13 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_15
# 14 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_16
	end


Planet01_02_EventScript_Item01::
# 19 "data/maps/Planet01_02/scripts.pory"
	lock
# 20 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 21 "data/maps/Planet01_02/scripts.pory"
	removeobject 22
# 22 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 23 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item02::
# 28 "data/maps/Planet01_02/scripts.pory"
	lock
# 29 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 30 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 31 "data/maps/Planet01_02/scripts.pory"
	removeobject 21
# 32 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item03::
# 37 "data/maps/Planet01_02/scripts.pory"
	lock
# 38 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 39 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x4D0
# 40 "data/maps/Planet01_02/scripts.pory"
	removeobject 24
# 41 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item04::
# 46 "data/maps/Planet01_02/scripts.pory"
	lock
# 47 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_KINGS_ROCK, 1
# 48 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 49 "data/maps/Planet01_02/scripts.pory"
	removeobject 30
# 50 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01::
# 55 "data/maps/Planet01_02/scripts.pory"
	lockall
# 56 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 57 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 58 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 59 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 60 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 61 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 63 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 64 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 65 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 66 "data/maps/Planet01_02/scripts.pory"
	removeobject 28
# 67 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 68 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 69 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 74 "data/maps/Planet01_02/scripts.pory"
	lockall
# 75 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 76 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 77 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 78 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 79 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 80 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 82 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 83 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 84 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 85 "data/maps/Planet01_02/scripts.pory"
	removeobject 23
# 86 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 87 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 88 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 93 "data/maps/Planet01_02/scripts.pory"
	lock
# 94 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 95 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 96 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 97 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 102 "data/maps/Planet01_02/scripts.pory"
	lock
# 103 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 104 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 105 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 106 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 111 "data/maps/Planet01_02/scripts.pory"
	lock
# 112 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 113 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 114 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 115 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 120 "data/maps/Planet01_02/scripts.pory"
	lock
# 121 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 122 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 123 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 124 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 129 "data/maps/Planet01_02/scripts.pory"
	lock
# 130 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 131 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 132 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 133 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 138 "data/maps/Planet01_02/scripts.pory"
	lock
# 139 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 140 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 141 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 142 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 147 "data/maps/Planet01_02/scripts.pory"
	lock
# 148 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 149 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 150 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 151 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 156 "data/maps/Planet01_02/scripts.pory"
	lock
# 157 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 158 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 159 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 160 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 161 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 162 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 163 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 164 "data/maps/Planet01_02/scripts.pory"
	removeobject 29
# 165 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 166 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 167 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 168 "data/maps/Planet01_02/scripts.pory"
	release
	end


Jirachi_goes_to_ship::
# 173 "data/maps/Planet01_02/scripts.pory"
	lock
# 174 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 175 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 176 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 177 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 178 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 179 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_1
# 180 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 181 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 182 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 183 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 184 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 185 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_1
# 186 "data/maps/Planet01_02/scripts.pory"
	release
	end


Found_Ruby::
# 191 "data/maps/Planet01_02/scripts.pory"
	lock
# 192 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 193 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 194 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 195 "data/maps/Planet01_02/scripts.pory"
	msgbox Found_Ruby_Text_0
# 197 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 198 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 199 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 200 "data/maps/Planet01_02/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 201 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 202 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText01::
# 207 "data/maps/Planet01_02/scripts.pory"
	lock
# 208 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText01_Text_0
# 213 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText02::
# 218 "data/maps/Planet01_02/scripts.pory"
	lock
# 219 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText02_Text_0
# 223 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText03::
# 228 "data/maps/Planet01_02/scripts.pory"
	lock
# 229 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_0
# 234 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 235 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 237 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 238 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 239 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_1
# 243 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 244 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 245 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 247 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
# 249 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText04::
# 254 "data/maps/Planet01_02/scripts.pory"
	lock
# 255 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText04_Text_0
# 258 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText05::
# 263 "data/maps/Planet01_02/scripts.pory"
	lock
# 264 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText05_Text_0
# 267 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText06::
# 272 "data/maps/Planet01_02/scripts.pory"
	lock
# 273 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText06_Text_0
# 275 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_QuagsireTrigger::
# 280 "data/maps/Planet01_02/scripts.pory"
	lockall
# 281 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 282 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 283 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_QuagsireTrigger_Text_0
# 284 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 285 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 286 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 287 "data/maps/Planet01_02/scripts.pory"
	waitse
# 288 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_ENCOUNTER
# 289 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_02_QuagsireTrigger_Movement_0
# 290 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 291 "data/maps/Planet01_02/scripts.pory"
	applymovement 26, Movement_QuagsireWaterstone1
# 292 "data/maps/Planet01_02/scripts.pory"
	waitmovement 0
# 293 "data/maps/Planet01_02/scripts.pory"
	setwildbattle SPECIES_CARNIVINE, 50, ITEM_WATER_STONE
# 298 "data/maps/Planet01_02/scripts.pory"
	dowildbattle
# 299 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_4
# 300 "data/maps/Planet01_02/scripts.pory"
	removeobject 26
# 301 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_1, 1
# 302 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


# 306 "data/maps/Planet01_02/scripts.pory"
Movement_QuagsireWaterstone1:
# 307 "data/maps/Planet01_02/scripts.pory"
	face_left
# 308 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 309 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 310 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 311 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 312 "data/maps/Planet01_02/scripts.pory"
	jump_left
# 313 "data/maps/Planet01_02/scripts.pory"
	jump_down
# 314 "data/maps/Planet01_02/scripts.pory"
	face_left
# 315 "data/maps/Planet01_02/scripts.pory"
	walk_left
	step_end

Planet01_02_Elgyem::
# 319 "data/maps/Planet01_02/scripts.pory"
	lock
# 320 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 321 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 322 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 323 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 324 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Elgyem_Text_0
# 326 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 327 "data/maps/Planet01_02/scripts.pory"
	warp MAP_PLANET01_03, 2, 11, 2
# 328 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 329 "data/maps/Planet01_02/scripts.pory"
	release
	end


# 289 "data/maps/Planet01_02/scripts.pory"
Planet01_02_QuagsireTrigger_Movement_0:
# 289 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
# 289 "data/maps/Planet01_02/scripts.pory"
	face_right
	step_end

Planet01_02_AddAir_Minior01_Text_0:
# 61 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 68 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 161 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 166 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Jirachi_goes_to_ship_Text_0:
# 178 "data/maps/Planet01_02/scripts.pory"
	.string "Jirachi wants to join your crew-!$"

Jirachi_goes_to_ship_Text_1:
# 185 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi went to your ship!$"

Found_Ruby_Text_0:
# 195 "data/maps/Planet01_02/scripts.pory"
	.string "Found the Ruby!\n"
	.string "Let's get the heck out of here!$"

Planet01_02_HintText01_Text_0:
# 208 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: Note to self. Do not wear\n"
	.string "sweet smelling perfume the next time\l"
	.string "I climb this mountain.\p"
	.string "There's a strong pokemon at the top\n"
	.string "who is too much of a fan of it!$"

Planet01_02_HintText02_Text_0:
# 219 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: I've occasionally observed\n"
	.string "Quagsires bringing blue stones they've\l"
	.string "found to a nest behind the waterfall.\p"
	.string "How cute! Could they be Water Stones?$"

Planet01_02_HintText03_Text_0:
# 229 "data/maps/Planet01_02/scripts.pory"
	.string "Captain: To future explorers:\n"
	.string "Our team has setup our primary lab in\l"
	.string "the cave above this waterfall.\p"
	.string "You may be able to find our previous\n"
	.string "campsites to the south.$"

Planet01_02_HintText03_Text_1:
# 239 "data/maps/Planet01_02/scripts.pory"
	.string "Welp. I don't have any way to get\n"
	.string "up there right now. Guess I'll have\l"
	.string "to start searching the old campsites.\l"
	.string "This is the only lead I've got.$"

Planet01_02_HintText04_Text_0:
# 255 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: We couldn't find a Pokemon\n"
	.string "on this planet with the move {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall;\l"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}thankfully had brought our own.$"

Planet01_02_HintText05_Text_0:
# 264 "data/maps/Planet01_02/scripts.pory"
	.string "Scientist: There's a suprising amount\n"
	.string "of greenery here for a planet with such\l"
	.string "a light atmosphere.$"

Planet01_02_HintText06_Text_0:
# 273 "data/maps/Planet01_02/scripts.pory"
	.string "That concludes the demo!\n"
	.string "Thanks for playing!$"

Planet01_02_QuagsireTrigger_Text_0:
# 283 "data/maps/Planet01_02/scripts.pory"
	.string "Huh? In the waterfall-$"

Planet01_02_Elgyem_Text_0:
# 324 "data/maps/Planet01_02/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's flashing blue-$"
