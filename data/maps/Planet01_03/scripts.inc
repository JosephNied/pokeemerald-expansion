Planet01_03_MapScripts::
# 2 "data/maps/Planet01_03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_03_Enter
	.byte 0


Planet01_03_Enter::
# 6 "data/maps/Planet01_03/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_10
# 8 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_11
# 9 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_12
# 10 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_13
# 11 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_14
# 12 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_15
# 13 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_16
# 14 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_17
# 15 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_18
# 16 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_19
# 17 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1A
# 18 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1B
# 19 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1C
# 20 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1D
# 21 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1E
# 22 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1F
# 23 "data/maps/Planet01_03/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq Planet01_03_Enter_2
# 23 "data/maps/Planet01_03/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_eq Planet01_03_Enter_2
# 26 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_TEMP_1, 1
Planet01_03_Enter_1:
	end

Planet01_03_Enter_2:
# 24 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_TEMP_1, 0
	goto Planet01_03_Enter_1


Planet01_03_EventScript_Item01::
# 32 "data/maps/Planet01_03/scripts.pory"
	lock
# 33 "data/maps/Planet01_03/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 34 "data/maps/Planet01_03/scripts.pory"
	removeobject 32
# 35 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 36 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_Item02::
# 41 "data/maps/Planet01_03/scripts.pory"
	lock
# 42 "data/maps/Planet01_03/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 43 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_UNUSED_0x498
# 44 "data/maps/Planet01_03/scripts.pory"
	removeobject 33
# 45 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash01::
# 50 "data/maps/Planet01_03/scripts.pory"
	lock
# 51 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 52 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 53 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_10
# 54 "data/maps/Planet01_03/scripts.pory"
	removeobject 29
# 55 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash02::
# 60 "data/maps/Planet01_03/scripts.pory"
	lock
# 61 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 62 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 63 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_11
# 64 "data/maps/Planet01_03/scripts.pory"
	removeobject 22
# 65 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash03::
# 70 "data/maps/Planet01_03/scripts.pory"
	lock
# 71 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 72 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 73 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_12
# 74 "data/maps/Planet01_03/scripts.pory"
	removeobject 23
# 75 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash04::
# 80 "data/maps/Planet01_03/scripts.pory"
	lock
# 81 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 82 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 83 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_13
# 84 "data/maps/Planet01_03/scripts.pory"
	removeobject 24
# 85 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash05::
# 90 "data/maps/Planet01_03/scripts.pory"
	lock
# 91 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 92 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 93 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_14
# 94 "data/maps/Planet01_03/scripts.pory"
	removeobject 28
# 95 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash06::
# 100 "data/maps/Planet01_03/scripts.pory"
	lock
# 101 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 102 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 103 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_15
# 104 "data/maps/Planet01_03/scripts.pory"
	removeobject 27
# 105 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash07::
# 110 "data/maps/Planet01_03/scripts.pory"
	lock
# 111 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 112 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 113 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_16
# 114 "data/maps/Planet01_03/scripts.pory"
	removeobject 26
# 115 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash08::
# 120 "data/maps/Planet01_03/scripts.pory"
	lock
# 121 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 122 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 123 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_17
# 124 "data/maps/Planet01_03/scripts.pory"
	removeobject 25
# 125 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash09::
# 130 "data/maps/Planet01_03/scripts.pory"
	lock
# 131 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 132 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 133 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_18
# 134 "data/maps/Planet01_03/scripts.pory"
	removeobject 17
# 135 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash10::
# 140 "data/maps/Planet01_03/scripts.pory"
	lock
# 141 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 142 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 143 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_19
# 144 "data/maps/Planet01_03/scripts.pory"
	removeobject 14
# 145 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash11::
# 150 "data/maps/Planet01_03/scripts.pory"
	lock
# 151 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 152 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 153 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1A
# 154 "data/maps/Planet01_03/scripts.pory"
	removeobject 16
# 155 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash12::
# 160 "data/maps/Planet01_03/scripts.pory"
	lock
# 161 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 162 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 163 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1B
# 164 "data/maps/Planet01_03/scripts.pory"
	removeobject 15
# 165 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash13::
# 170 "data/maps/Planet01_03/scripts.pory"
	lock
# 171 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 172 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 173 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1C
# 174 "data/maps/Planet01_03/scripts.pory"
	removeobject 19
# 175 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash14::
# 180 "data/maps/Planet01_03/scripts.pory"
	lock
# 181 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 182 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 183 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1D
# 184 "data/maps/Planet01_03/scripts.pory"
	removeobject 18
# 185 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash15::
# 190 "data/maps/Planet01_03/scripts.pory"
	lock
# 191 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 192 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 193 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1E
# 194 "data/maps/Planet01_03/scripts.pory"
	removeobject 20
# 195 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash16::
# 200 "data/maps/Planet01_03/scripts.pory"
	lock
# 201 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 202 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 203 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1F
# 204 "data/maps/Planet01_03/scripts.pory"
	removeobject 21
# 205 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_Carbink::
# 210 "data/maps/Planet01_03/scripts.pory"
	lock
# 211 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 212 "data/maps/Planet01_03/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 213 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 214 "data/maps/Planet01_03/scripts.pory"
	callnative RegisterSpeciesInDex
# 215 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_Carbink_Text_0
# 216 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_UNUSED_0x04A
# 217 "data/maps/Planet01_03/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 218 "data/maps/Planet01_03/scripts.pory"
	removeobject 34
# 219 "data/maps/Planet01_03/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 220 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_Carbink_Text_1
# 221 "data/maps/Planet01_03/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 222 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_Elgyem::
# 227 "data/maps/Planet01_03/scripts.pory"
	lock
# 228 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 229 "data/maps/Planet01_03/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 230 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 231 "data/maps/Planet01_03/scripts.pory"
	callnative RegisterSpeciesInDex
# 232 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_Elgyem_Text_0
# 233 "data/maps/Planet01_03/scripts.pory"
	waitmessage
# 234 "data/maps/Planet01_03/scripts.pory"
	warp MAP_PLANET01_05, 1, 32, 1
# 235 "data/maps/Planet01_03/scripts.pory"
	waitstate
# 236 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText01::
# 241 "data/maps/Planet01_03/scripts.pory"
	lock
# 242 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText01_Text_0
# 248 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText02::
# 253 "data/maps/Planet01_03/scripts.pory"
	lock
# 254 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText02_Text_0
# 258 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText03::
# 263 "data/maps/Planet01_03/scripts.pory"
	lock
# 264 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText03_Text_0
# 272 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText04::
# 277 "data/maps/Planet01_03/scripts.pory"
	lock
# 278 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText04_Text_0
# 284 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText05::
# 289 "data/maps/Planet01_03/scripts.pory"
	lock
# 290 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText05_Text_0
# 296 "data/maps/Planet01_03/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_03_HintText05_2
# 298 "data/maps/Planet01_03/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_03_HintText05_3
Planet01_03_HintText05_1:
# 301 "data/maps/Planet01_03/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_03_HintText05_7
Planet01_03_HintText05_6:
# 304 "data/maps/Planet01_03/scripts.pory"
	release
	end

Planet01_03_HintText05_2:
# 297 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_03_HintText05_1

Planet01_03_HintText05_3:
# 299 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_03_HintText05_1

Planet01_03_HintText05_7:
# 302 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_03_HintText05_6


Planet01_03_HintText06::
# 309 "data/maps/Planet01_03/scripts.pory"
	lock
# 310 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText06_Text_0
# 316 "data/maps/Planet01_03/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_03_HintText06_2
# 318 "data/maps/Planet01_03/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_03_HintText06_3
Planet01_03_HintText06_1:
# 321 "data/maps/Planet01_03/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_03_HintText06_7
Planet01_03_HintText06_6:
# 324 "data/maps/Planet01_03/scripts.pory"
	release
	end

Planet01_03_HintText06_2:
# 317 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_03_HintText06_1

Planet01_03_HintText06_3:
# 319 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_03_HintText06_1

Planet01_03_HintText06_7:
# 322 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_03_HintText06_6


Planet01_03_HintText07::
# 329 "data/maps/Planet01_03/scripts.pory"
	lock
# 330 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText07_Text_0
# 334 "data/maps/Planet01_03/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_03_HintText07_2
# 336 "data/maps/Planet01_03/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_03_HintText07_3
Planet01_03_HintText07_1:
# 339 "data/maps/Planet01_03/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_03_HintText07_7
Planet01_03_HintText07_6:
# 342 "data/maps/Planet01_03/scripts.pory"
	release
	end

Planet01_03_HintText07_2:
# 335 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_03_HintText07_1

Planet01_03_HintText07_3:
# 337 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_03_HintText07_1

Planet01_03_HintText07_7:
# 340 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_03_HintText07_6


voicetrigger_shoreline::
# 347 "data/maps/Planet01_03/scripts.pory"
	lockall
# 348 "data/maps/Planet01_03/scripts.pory"
	call voicedialogueABC
# 349 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_TEMP_1, 1
# 350 "data/maps/Planet01_03/scripts.pory"
	releaseall
	end


sableye_03::
# 355 "data/maps/Planet01_03/scripts.pory"
	lock
# 356 "data/maps/Planet01_03/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_GOLD, sableye_03_2
sableye_03_1:
# 379 "data/maps/Planet01_03/scripts.pory"
	release
	end

sableye_03_2:
# 357 "data/maps/Planet01_03/scripts.pory"
	msgbox sableye_03_Text_0
# 358 "data/maps/Planet01_03/scripts.pory"
	waitmessage
# 359 "data/maps/Planet01_03/scripts.pory"
	closemessage
# 360 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_SYS_TOWER_GOLD
# 361 "data/maps/Planet01_03/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 362 "data/maps/Planet01_03/scripts.pory"
	waitse
# 363 "data/maps/Planet01_03/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 364 "data/maps/Planet01_03/scripts.pory"
	waitmoncry
# 365 "data/maps/Planet01_03/scripts.pory"
	removeobject 8
# 366 "data/maps/Planet01_03/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 367 "data/maps/Planet01_03/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_03_5
# 370 "data/maps/Planet01_03/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 371 "data/maps/Planet01_03/scripts.pory"
	msgbox sableye_03_Text_2
sableye_03_4:
# 373 "data/maps/Planet01_03/scripts.pory"
	waitmessage
# 374 "data/maps/Planet01_03/scripts.pory"
	closemessage
# 375 "data/maps/Planet01_03/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 376 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 377 "data/maps/Planet01_03/scripts.pory"
	callnative RegisterSpeciesInDex
	goto sableye_03_1

sableye_03_5:
# 368 "data/maps/Planet01_03/scripts.pory"
	msgbox sableye_03_Text_1
	goto sableye_03_4


Planet01_03_HintTextLowerCaves::
# 384 "data/maps/Planet01_03/scripts.pory"
	lock
# 385 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintTextLowerCaves_Text_0
# 392 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_Carbink_Text_0:
# 215 "data/maps/Planet01_03/scripts.pory"
	.string "The Carbink really seems to like you!$"

Planet01_03_Carbink_Text_1:
# 220 "data/maps/Planet01_03/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_03_Elgyem_Text_0:
# 232 "data/maps/Planet01_03/scripts.pory"
	.string "{COLOR 5}{SHADOW WHITE}Woah! Elgyem is glowing yellow-{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_03_HintText01_Text_0:
# 242 "data/maps/Planet01_03/scripts.pory"
	.string "Biologist: There's a small, dark rock-like\n"
	.string "Pokémon lurking around this canyon; one\l"
	.string "that I've never seen before.\p"
	.string "I don't think it exists back home. Surely\n"
	.string "it'd be well-worth studying; perhaps it\l"
	.string "can even evolve.$"

Planet01_03_HintText02_Text_0:
# 254 "data/maps/Planet01_03/scripts.pory"
	.string "Captain: Beyond here lies our tragic\n"
	.string "first attempt at establishing a base.\p"
	.string "Apparently it was already somebody\n"
	.string "else's home.$"

Planet01_03_HintText03_Text_0:
# 264 "data/maps/Planet01_03/scripts.pory"
	.string "Captain: We wanted this second cave to\n"
	.string "be our base, but the artificial wall\l"
	.string "our Ops Lead contructed couldn't\l"
	.string "shield us from the unbearable cold.\p"
	.string "But, we already discovered a cave\n"
	.string "up on top of the waterfall to the North\l"
	.string "that looks promising. Let's hope it can\l"
	.string "be a more permanent home!$"

Planet01_03_HintText04_Text_0:
# 278 "data/maps/Planet01_03/scripts.pory"
	.string "Ops Lead: Was it a coincidence that the\n"
	.string "white trees corresponded to the path\l"
	.string "through the misty cave?\p"
	.string "Or could it be that something was trying\n"
	.string "to communicate with us? You can never\l"
	.string "tell with ghost-type Pokémon...$"

Planet01_03_HintText05_Text_0:
# 290 "data/maps/Planet01_03/scripts.pory"
	.string "Biologist: The Pokémon on this planet\n"
	.string "have achieved perfect mutualism, and\l"
	.string "thus have no need to level up.\p"
	.string "But I can't help but wonder whether it's\n"
	.string "still possible whether the Staryu can\l"
	.string "still evolve using water stones.$"

Planet01_03_HintText06_Text_0:
# 310 "data/maps/Planet01_03/scripts.pory"
	.string "Ops Lead: The Staryu love to skip across\n"
	.string "the water; though, they aren't large\l"
	.string "enough for us to {COLOR BLUE}{SHADOW LIGHT_BLUE}Surf{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} on them.\p"
	.string "Fortunately, we brought our own\n"
	.string "Surfing Pokémon, so we were able to\l"
	.string "setup camps across the water.$"

Planet01_03_HintText07_Text_0:
# 330 "data/maps/Planet01_03/scripts.pory"
	.string "Biologist: We saw a lot of smashed rocks\n"
	.string "around the mountain covered in blue\l"
	.string "plants; I would bet that a Pokémon with\l"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Rock Smash{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is likely up there, hiding.$"

sableye_03_Text_0:
# 357 "data/maps/Planet01_03/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_03_Text_1:
# 368 "data/maps/Planet01_03/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_03_Text_2:
# 371 "data/maps/Planet01_03/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_03_HintTextLowerCaves_Text_0:
# 385 "data/maps/Planet01_03/scripts.pory"
	.string "Captain: There is a cave and a strange\n"
	.string "shoreline below. We can't reach them,\l"
	.string "however, because the Sharpedo are too\l"
	.string "aggressive and the floating stones\l"
	.string "move in strage ways; sometimes, if we\l"
	.string "aren't lucky, we're not able to get to\l"
	.string "the far west shore at all!$"
