Planet01_02_MapScripts::
# 2 "data/maps/Planet01_02/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_02_Enter
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
# 15 "data/maps/Planet01_02/scripts.pory"
	goto_if_set FLAG_REGISTERED_ANDRES, Planet01_02_Enter_2
Planet01_02_Enter_1:
	end

Planet01_02_Enter_2:
# 16 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto Planet01_02_Enter_1


Planet01_02_EventScript_Item01::
# 22 "data/maps/Planet01_02/scripts.pory"
	lock
# 23 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 24 "data/maps/Planet01_02/scripts.pory"
	removeobject 22
# 25 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 26 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item02::
# 31 "data/maps/Planet01_02/scripts.pory"
	lock
# 32 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 33 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 34 "data/maps/Planet01_02/scripts.pory"
	removeobject 21
# 35 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item03::
# 40 "data/maps/Planet01_02/scripts.pory"
	lock
# 41 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 42 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x4D0
# 43 "data/maps/Planet01_02/scripts.pory"
	removeobject 24
# 44 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item04::
# 49 "data/maps/Planet01_02/scripts.pory"
	lock
# 50 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_KINGS_ROCK, 1
# 51 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 52 "data/maps/Planet01_02/scripts.pory"
	removeobject 30
# 53 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01::
# 58 "data/maps/Planet01_02/scripts.pory"
	lockall
# 59 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 60 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 61 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 62 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 63 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 64 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 66 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 67 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 68 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 69 "data/maps/Planet01_02/scripts.pory"
	removeobject 28
# 70 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 71 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 72 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 77 "data/maps/Planet01_02/scripts.pory"
	lockall
# 78 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 79 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 80 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 81 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 82 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 83 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 85 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 86 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 87 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 88 "data/maps/Planet01_02/scripts.pory"
	removeobject 23
# 89 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 90 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 91 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 96 "data/maps/Planet01_02/scripts.pory"
	lock
# 97 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 98 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 99 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 100 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 105 "data/maps/Planet01_02/scripts.pory"
	lock
# 106 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 107 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 108 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 109 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 114 "data/maps/Planet01_02/scripts.pory"
	lock
# 115 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 116 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 117 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 118 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 123 "data/maps/Planet01_02/scripts.pory"
	lock
# 124 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 125 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 126 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 127 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 132 "data/maps/Planet01_02/scripts.pory"
	lock
# 133 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 134 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 135 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 136 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 141 "data/maps/Planet01_02/scripts.pory"
	lock
# 142 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 143 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 144 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 145 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 150 "data/maps/Planet01_02/scripts.pory"
	lock
# 151 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 152 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 153 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 154 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 159 "data/maps/Planet01_02/scripts.pory"
	lock
# 160 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 161 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 162 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 163 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 164 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 165 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 166 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 167 "data/maps/Planet01_02/scripts.pory"
	removeobject 29
# 168 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 169 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 170 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 171 "data/maps/Planet01_02/scripts.pory"
	release
	end


Jirachi_goes_to_ship::
# 176 "data/maps/Planet01_02/scripts.pory"
	lock
# 177 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 178 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jirachi_goes_to_ship_Movement_0
# 179 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 180 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 181 "data/maps/Planet01_02/scripts.pory"
	applymovement 25, Movement_JirachiPlanet2
# 182 "data/maps/Planet01_02/scripts.pory"
	waitmovement 0
# 183 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_JIRACHI
# 184 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 186 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 187 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 188 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 189 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 190 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 191 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 193 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 194 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 195 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_1
# 197 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 198 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 199 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 201 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 202 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 203 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_2
# 209 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 210 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 211 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 212 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 8
# 214 "data/maps/Planet01_02/scripts.pory"
	checkitem ITEM_COMET_SHARD, 1
# 215 "data/maps/Planet01_02/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Jirachi_goes_to_ship_1
# 239 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_F, 1
# 240 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 241 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 242 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_5
# 243 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 244 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 245 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 247 "data/maps/Planet01_02/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 248 "data/maps/Planet01_02/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Jirachi_goes_to_ship_5
# 287 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 288 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 289 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 290 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 291 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 292 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 293 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 295 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 296 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 297 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_9
# 298 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 299 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 300 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 302 "data/maps/Planet01_02/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 304 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 305 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 306 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 307 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 308 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 310 "data/maps/Planet01_02/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 312 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 313 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 314 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_10
# 317 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 318 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 319 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 321 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 322 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 323 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_11
# 324 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 325 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 326 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 327 "data/maps/Planet01_02/scripts.pory"
	release
	end

Jirachi_goes_to_ship_1:
# 216 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 217 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 218 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_3
# 220 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 221 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 222 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 224 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 225 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 226 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_4
# 230 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 231 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 232 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 234 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jirachi_goes_to_ship_Movement_1
# 235 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 236 "data/maps/Planet01_02/scripts.pory"
	release
	end

Jirachi_goes_to_ship_5:
# 249 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 250 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 251 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 252 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_6
# 255 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 256 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 257 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 259 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 260 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 261 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 262 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 263 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 264 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 265 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 267 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 268 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 269 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 270 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 271 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 272 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_7
# 273 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 274 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 276 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 277 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 278 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_8
# 280 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 281 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 282 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 284 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


# 332 "data/maps/Planet01_02/scripts.pory"
Movement_JirachiPlanet2:
# 333 "data/maps/Planet01_02/scripts.pory"
	face_down
# 334 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 335 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 336 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 337 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 338 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 339 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 340 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 341 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 342 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 343 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 344 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 345 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 346 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 347 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 348 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 349 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 350 "data/maps/Planet01_02/scripts.pory"
	set_visible
	step_end

Found_Ruby::
# 354 "data/maps/Planet01_02/scripts.pory"
	lock
# 355 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 356 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 357 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 358 "data/maps/Planet01_02/scripts.pory"
	msgbox Found_Ruby_Text_0
# 360 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 361 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 362 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 363 "data/maps/Planet01_02/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 364 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 365 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText01::
# 370 "data/maps/Planet01_02/scripts.pory"
	lock
# 371 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText01_Text_0
# 376 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText01_2
# 378 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText01_3
Planet01_02_HintText01_1:
# 381 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText01_7
Planet01_02_HintText01_6:
# 384 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText01_2:
# 377 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText01_1

Planet01_02_HintText01_3:
# 379 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText01_1

Planet01_02_HintText01_7:
# 382 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText01_6


Planet01_02_HintText02::
# 389 "data/maps/Planet01_02/scripts.pory"
	lock
# 390 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText02_Text_0
# 393 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText02_2
# 395 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText02_3
Planet01_02_HintText02_1:
# 398 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText02_7
Planet01_02_HintText02_6:
# 401 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText02_2:
# 394 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText02_1

Planet01_02_HintText02_3:
# 396 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText02_1

Planet01_02_HintText02_7:
# 399 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText02_6


Planet01_02_HintText03::
# 406 "data/maps/Planet01_02/scripts.pory"
	lock
# 407 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_0
# 412 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText03_2
# 414 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText03_3
Planet01_02_HintText03_1:
# 417 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText03_7
Planet01_02_HintText03_6:
# 420 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 421 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 423 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 424 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 425 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_1
# 429 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 430 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 431 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 432 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
# 433 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText03_2:
# 413 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText03_1

Planet01_02_HintText03_3:
# 415 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText03_1

Planet01_02_HintText03_7:
# 418 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText03_6


Planet01_02_HintText04::
# 438 "data/maps/Planet01_02/scripts.pory"
	lock
# 439 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText04_Text_0
# 442 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText05::
# 447 "data/maps/Planet01_02/scripts.pory"
	lock
# 448 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText05_Text_0
# 451 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText06::
# 456 "data/maps/Planet01_02/scripts.pory"
	lock
# 457 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText06_Text_0
# 458 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_QuagsireTrigger::
# 463 "data/maps/Planet01_02/scripts.pory"
	lockall
# 464 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 465 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 466 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_QuagsireTrigger_Text_0
# 467 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 468 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 469 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 470 "data/maps/Planet01_02/scripts.pory"
	waitse
# 471 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_ENCOUNTER
# 472 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_02_QuagsireTrigger_Movement_0
# 473 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 474 "data/maps/Planet01_02/scripts.pory"
	applymovement 26, Movement_QuagsireWaterstone1
# 475 "data/maps/Planet01_02/scripts.pory"
	waitmovement 0
# 476 "data/maps/Planet01_02/scripts.pory"
	setwildbattle SPECIES_CARNIVINE, 50, ITEM_WATER_STONE
# 481 "data/maps/Planet01_02/scripts.pory"
	dowildbattle
# 482 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_4
# 483 "data/maps/Planet01_02/scripts.pory"
	removeobject 26
# 484 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_1, 1
# 485 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


# 489 "data/maps/Planet01_02/scripts.pory"
Movement_QuagsireWaterstone1:
# 490 "data/maps/Planet01_02/scripts.pory"
	face_left
# 491 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 492 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 493 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 494 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 495 "data/maps/Planet01_02/scripts.pory"
	jump_left
# 496 "data/maps/Planet01_02/scripts.pory"
	jump_down
# 497 "data/maps/Planet01_02/scripts.pory"
	face_left
# 498 "data/maps/Planet01_02/scripts.pory"
	walk_left
	step_end

Planet01_02_Elgyem::
# 502 "data/maps/Planet01_02/scripts.pory"
	lock
# 503 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 504 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 505 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 506 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 507 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Elgyem_Text_0
# 508 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 509 "data/maps/Planet01_02/scripts.pory"
	warp MAP_PLANET01_03, 2, 11, 2
# 510 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 511 "data/maps/Planet01_02/scripts.pory"
	release
	end


sableye_connect::
# 516 "data/maps/Planet01_02/scripts.pory"
	lock
# 517 "data/maps/Planet01_02/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, sableye_connect_2
sableye_connect_1:
# 537 "data/maps/Planet01_02/scripts.pory"
	release
	end

sableye_connect_2:
# 518 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_0
# 519 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 520 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 521 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 522 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 523 "data/maps/Planet01_02/scripts.pory"
	waitmoncry
# 524 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_SYS_PALACE_SILVER
# 525 "data/maps/Planet01_02/scripts.pory"
	removeobject 34
# 526 "data/maps/Planet01_02/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 527 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_connect_5
# 529 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_BLENDER, 2
	goto_if_ge sableye_connect_6
sableye_connect_4:
# 533 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 534 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 535 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
	goto sableye_connect_1

sableye_connect_5:
# 528 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_1
	goto sableye_connect_4

sableye_connect_6:
# 530 "data/maps/Planet01_02/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 531 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_2
	goto sableye_connect_4


# 178 "data/maps/Planet01_02/scripts.pory"
Jirachi_goes_to_ship_Movement_0:
# 178 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
# 178 "data/maps/Planet01_02/scripts.pory"
	face_up
	step_end

# 234 "data/maps/Planet01_02/scripts.pory"
Jirachi_goes_to_ship_Movement_1:
# 234 "data/maps/Planet01_02/scripts.pory"
	walk_down
	step_end

# 472 "data/maps/Planet01_02/scripts.pory"
Planet01_02_QuagsireTrigger_Movement_0:
# 472 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
# 472 "data/maps/Planet01_02/scripts.pory"
	face_right
	step_end

Planet01_02_AddAir_Minior01_Text_0:
# 64 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 71 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 164 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 169 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Jirachi_goes_to_ship_Text_0:
# 188 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_1:
# 195 "data/maps/Planet01_02/scripts.pory"
	.string "Jirachi again! It's good to see you!\n"
	.string "Come to help us out again?$"

Jirachi_goes_to_ship_Text_2:
# 203 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I can read its mind... It wont let you\n"
	.string "past it unless you bring it a Shadow\l"
	.string "Crystal, apparently.\p"
	.string "Why is this Jirachi so invested in us?\n"
	.string "I guess it understands that the Deoxys\l"
	.string "Cell threatens all life.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_3:
# 218 "data/maps/Planet01_02/scripts.pory"
	.string "I don't get it. What's a Shadow Crystal,\n"
	.string "and where can we get one?$"

Jirachi_goes_to_ship_Text_4:
# 226 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I have no clue. But, I get the feeling\n"
	.string "it has to do with... The dark pool.\p"
	.string "Below the Shoreline, to the far west.\n"
	.string "I'll explain more when we get there.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_5:
# 242 "data/maps/Planet01_02/scripts.pory"
	.string "Well, I have the Shadow Crystal now!$"

Jirachi_goes_to_ship_Text_6:
# 252 "data/maps/Planet01_02/scripts.pory"
	.string "You want to join my team?!\p"
	.string "But I don't have a spare Meteor Ball for\n"
	.string "you...$"

Jirachi_goes_to_ship_Text_7:
# 272 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi went to your ship!$"

Jirachi_goes_to_ship_Text_8:
# 278 "data/maps/Planet01_02/scripts.pory"
	.string "Looks like Jirachi will always return to\n"
	.string "my ship when released!$"

Jirachi_goes_to_ship_Text_9:
# 297 "data/maps/Planet01_02/scripts.pory"
	.string "You want to join my team?!$"

Jirachi_goes_to_ship_Text_10:
# 314 "data/maps/Planet01_02/scripts.pory"
	.string "Welcome aboard!\n"
	.string "Looks like Jirachi will always return to\l"
	.string "my ship when released!$"

Jirachi_goes_to_ship_Text_11:
# 323 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Let's do this.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Found_Ruby_Text_0:
# 358 "data/maps/Planet01_02/scripts.pory"
	.string "Found the Ruby!\n"
	.string "Let's get the heck out of here!$"

Planet01_02_HintText01_Text_0:
# 371 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: It'd be a bad idea to wear\n"
	.string "sweet perfume when climbing this\l"
	.string "mountain.\p"
	.string "There's a strong pokemon up here\n"
	.string "that would love it too much!$"

Planet01_02_HintText02_Text_0:
# 390 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: I've occasionally observed\n"
	.string "Quagsires bringing blue stones they've\l"
	.string "found to a nest behind the waterfall.$"

Planet01_02_HintText03_Text_0:
# 407 "data/maps/Planet01_02/scripts.pory"
	.string "Captain: To future explorers:\n"
	.string "Our team has setup our primary lab in\l"
	.string "the cave above this waterfall.\p"
	.string "You may be able to find our previous\n"
	.string "campsites to the south.$"

Planet01_02_HintText03_Text_1:
# 425 "data/maps/Planet01_02/scripts.pory"
	.string "Welp. I don't have any way to get\n"
	.string "up there right now. Guess I'll have\l"
	.string "to start searching the old campsites.\l"
	.string "This is the only lead I've got.$"

Planet01_02_HintText04_Text_0:
# 439 "data/maps/Planet01_02/scripts.pory"
	.string "Ops Lead: We couldn't find a Pokemon on\n"
	.string "this planet with the move {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall;\l"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}thankfully my Kingdra knows it!$"

Planet01_02_HintText05_Text_0:
# 448 "data/maps/Planet01_02/scripts.pory"
	.string "Ops Lead: There's a surprising amount\n"
	.string "of greenery here for a planet with such\l"
	.string "a light atmosphere.$"

Planet01_02_HintText06_Text_0:
# 457 "data/maps/Planet01_02/scripts.pory"
	.string "EOD Research Facility Ahead$"

Planet01_02_QuagsireTrigger_Text_0:
# 466 "data/maps/Planet01_02/scripts.pory"
	.string "Huh? In the waterfall-$"

Planet01_02_Elgyem_Text_0:
# 507 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Woah! Elgyem is glowing blue-{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_connect_Text_0:
# 518 "data/maps/Planet01_02/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_connect_Text_1:
# 528 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_connect_Text_2:
# 531 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
