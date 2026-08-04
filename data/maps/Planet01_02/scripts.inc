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


Planet01_02_AddAir_Minior01::
# 46 "data/maps/Planet01_02/scripts.pory"
	lockall
# 47 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 48 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 49 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 50 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 51 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 52 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 54 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 55 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 56 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 57 "data/maps/Planet01_02/scripts.pory"
	removeobject 28
# 58 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 59 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 60 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 65 "data/maps/Planet01_02/scripts.pory"
	lockall
# 66 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 67 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 68 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 69 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 70 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 71 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 73 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 74 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 75 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 76 "data/maps/Planet01_02/scripts.pory"
	removeobject 23
# 77 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 78 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 79 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 84 "data/maps/Planet01_02/scripts.pory"
	lock
# 85 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 86 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 87 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 88 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 93 "data/maps/Planet01_02/scripts.pory"
	lock
# 94 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 95 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 96 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 97 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 102 "data/maps/Planet01_02/scripts.pory"
	lock
# 103 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 104 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 105 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 106 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 111 "data/maps/Planet01_02/scripts.pory"
	lock
# 112 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 113 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 114 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 115 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 120 "data/maps/Planet01_02/scripts.pory"
	lock
# 121 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 122 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 123 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 124 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 129 "data/maps/Planet01_02/scripts.pory"
	lock
# 130 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 131 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 132 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 133 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 138 "data/maps/Planet01_02/scripts.pory"
	lock
# 139 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 140 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 141 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 142 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 147 "data/maps/Planet01_02/scripts.pory"
	lock
# 148 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 149 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 150 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 151 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 152 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 153 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 154 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 155 "data/maps/Planet01_02/scripts.pory"
	removeobject 29
# 156 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 157 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 158 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 159 "data/maps/Planet01_02/scripts.pory"
	release
	end


Jirachi_goes_to_ship::
# 164 "data/maps/Planet01_02/scripts.pory"
	lock
# 165 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 166 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 167 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 168 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 169 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 170 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_1
# 171 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 172 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 173 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 174 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 175 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 176 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_1
# 177 "data/maps/Planet01_02/scripts.pory"
	release
	end


Found_Ruby::
# 182 "data/maps/Planet01_02/scripts.pory"
	lock
# 183 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 184 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 185 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 186 "data/maps/Planet01_02/scripts.pory"
	msgbox Found_Ruby_Text_0
# 188 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 189 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 190 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 191 "data/maps/Planet01_02/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 192 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 193 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText01::
# 198 "data/maps/Planet01_02/scripts.pory"
	lock
# 199 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText01_Text_0
# 204 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText02::
# 209 "data/maps/Planet01_02/scripts.pory"
	lock
# 210 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText02_Text_0
# 214 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText03::
# 219 "data/maps/Planet01_02/scripts.pory"
	lock
# 220 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_0
# 225 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText04::
# 230 "data/maps/Planet01_02/scripts.pory"
	lock
# 231 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText04_Text_0
# 234 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText05::
# 239 "data/maps/Planet01_02/scripts.pory"
	lock
# 240 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText05_Text_0
# 243 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText06::
# 248 "data/maps/Planet01_02/scripts.pory"
	lock
# 249 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText06_Text_0
# 251 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_QuagsireTrigger::
# 256 "data/maps/Planet01_02/scripts.pory"
	lockall
# 257 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 258 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 259 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_QuagsireTrigger_Text_0
# 260 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 261 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 262 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 263 "data/maps/Planet01_02/scripts.pory"
	waitse
# 264 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_ENCOUNTER
# 265 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_02_QuagsireTrigger_Movement_0
# 266 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 267 "data/maps/Planet01_02/scripts.pory"
	applymovement 26, Movement_QuagsireWaterstone1
# 268 "data/maps/Planet01_02/scripts.pory"
	waitmovement 0
# 269 "data/maps/Planet01_02/scripts.pory"
	setwildbattle SPECIES_CARNIVINE, 50, ITEM_WATER_STONE
# 274 "data/maps/Planet01_02/scripts.pory"
	dowildbattle
# 275 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_4
# 276 "data/maps/Planet01_02/scripts.pory"
	removeobject 26
# 277 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_0, 1
# 278 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


# 282 "data/maps/Planet01_02/scripts.pory"
Movement_QuagsireWaterstone1:
# 283 "data/maps/Planet01_02/scripts.pory"
	face_left
# 284 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 285 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 286 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 287 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 288 "data/maps/Planet01_02/scripts.pory"
	jump_left
# 289 "data/maps/Planet01_02/scripts.pory"
	jump_down
# 290 "data/maps/Planet01_02/scripts.pory"
	face_left
	step_end

# 265 "data/maps/Planet01_02/scripts.pory"
Planet01_02_QuagsireTrigger_Movement_0:
# 265 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
# 265 "data/maps/Planet01_02/scripts.pory"
	face_right
	step_end

Planet01_02_AddAir_Minior01_Text_0:
# 52 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 59 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 152 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 157 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Jirachi_goes_to_ship_Text_0:
# 169 "data/maps/Planet01_02/scripts.pory"
	.string "Jirachi wants to join your crew-!$"

Jirachi_goes_to_ship_Text_1:
# 176 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi went to your ship!$"

Found_Ruby_Text_0:
# 186 "data/maps/Planet01_02/scripts.pory"
	.string "Found the Ruby!\n"
	.string "Let's get the heck out of here!$"

Planet01_02_HintText01_Text_0:
# 199 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: Note to self. Do not wear\n"
	.string "sweet smelling perfume the next time\l"
	.string "I climb this mountain.\p"
	.string "There's a strong pokemon at the top\n"
	.string "who is too much of a fan of it!$"

Planet01_02_HintText02_Text_0:
# 210 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: I've occasionally observed a\n"
	.string "Quagsire that seems to enjoy collecting\l"
	.string "pretty blue stones near the waterfall.\p"
	.string "How cute! Could they be Water Stones?$"

Planet01_02_HintText03_Text_0:
# 220 "data/maps/Planet01_02/scripts.pory"
	.string "Captain: To future explorers:\n"
	.string "Our team has setup our primary lab in\l"
	.string "the cave above this waterfall.\p"
	.string "You may be able to find our previous\n"
	.string "campsites to the south.$"

Planet01_02_HintText04_Text_0:
# 231 "data/maps/Planet01_02/scripts.pory"
	.string "Engineer: We couldn't find a Pokemon\n"
	.string "on this planet with the move {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall;\l"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}thankfully had brought our own.$"

Planet01_02_HintText05_Text_0:
# 240 "data/maps/Planet01_02/scripts.pory"
	.string "Scientist: There's a suprising amount\n"
	.string "of greenery here for a planet with such\l"
	.string "a light atmosphere.$"

Planet01_02_HintText06_Text_0:
# 249 "data/maps/Planet01_02/scripts.pory"
	.string "That concludes the demo!\n"
	.string "Thanks for playing!$"

Planet01_02_QuagsireTrigger_Text_0:
# 259 "data/maps/Planet01_02/scripts.pory"
	.string "Huh? In the waterfall-$"
