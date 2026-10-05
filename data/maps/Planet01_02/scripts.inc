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
	giveitem ITEM_PEAT_BLOCK, 1
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
	playse SE_REPEL
# 69 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 70 "data/maps/Planet01_02/scripts.pory"
	removeobject 28
# 71 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 72 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 73 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 78 "data/maps/Planet01_02/scripts.pory"
	lockall
# 79 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 80 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 81 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 82 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 83 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 84 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 86 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 87 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 88 "data/maps/Planet01_02/scripts.pory"
	playse SE_REPEL
# 89 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 90 "data/maps/Planet01_02/scripts.pory"
	removeobject 23
# 91 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 92 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 93 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 98 "data/maps/Planet01_02/scripts.pory"
	lock
# 99 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 100 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 101 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 102 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 107 "data/maps/Planet01_02/scripts.pory"
	lock
# 108 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 109 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 110 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 111 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 116 "data/maps/Planet01_02/scripts.pory"
	lock
# 117 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 118 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 119 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 120 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 125 "data/maps/Planet01_02/scripts.pory"
	lock
# 126 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 127 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 128 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 129 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 134 "data/maps/Planet01_02/scripts.pory"
	lock
# 135 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 136 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 137 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 138 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 143 "data/maps/Planet01_02/scripts.pory"
	lock
# 144 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 145 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 146 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 147 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 152 "data/maps/Planet01_02/scripts.pory"
	lock
# 153 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 154 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 155 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 156 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 161 "data/maps/Planet01_02/scripts.pory"
	lock
# 162 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 163 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 164 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 165 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 166 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 167 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 168 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 169 "data/maps/Planet01_02/scripts.pory"
	removeobject 29
# 170 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 171 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 172 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 173 "data/maps/Planet01_02/scripts.pory"
	release
	end


Jirachi_goes_to_ship::
# 178 "data/maps/Planet01_02/scripts.pory"
	lock
# 179 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 180 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jirachi_goes_to_ship_Movement_0
# 181 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 182 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 183 "data/maps/Planet01_02/scripts.pory"
	applymovement 25, Movement_JirachiPlanet2
# 184 "data/maps/Planet01_02/scripts.pory"
	waitmovement 0
# 185 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_JIRACHI
# 186 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 188 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 189 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 190 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 191 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 192 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 193 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 195 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 196 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 197 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_1
# 199 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 200 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 201 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 203 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 204 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 205 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_2
# 211 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 212 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 213 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 214 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 8
# 216 "data/maps/Planet01_02/scripts.pory"
	checkitem ITEM_COMET_SHARD, 1
# 217 "data/maps/Planet01_02/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Jirachi_goes_to_ship_1
# 241 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_F, 1
# 242 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 243 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 244 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_5
# 245 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 246 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 247 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 249 "data/maps/Planet01_02/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 250 "data/maps/Planet01_02/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Jirachi_goes_to_ship_5
# 289 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 290 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 291 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 292 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 293 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 294 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 295 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 297 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 298 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 299 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_9
# 300 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 301 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 302 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 304 "data/maps/Planet01_02/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 306 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 307 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 308 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_DUSTY
# 309 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 310 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 312 "data/maps/Planet01_02/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 314 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 315 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 316 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_10
# 319 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 320 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 321 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 323 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 324 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 325 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_11
# 326 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 327 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 328 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 329 "data/maps/Planet01_02/scripts.pory"
	release
	end

Jirachi_goes_to_ship_1:
# 218 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 219 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 220 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_3
# 222 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 223 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 224 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 226 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 227 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 228 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_4
# 232 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 233 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 234 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 236 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jirachi_goes_to_ship_Movement_1
# 237 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 238 "data/maps/Planet01_02/scripts.pory"
	release
	end

Jirachi_goes_to_ship_5:
# 251 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 252 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 253 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 254 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_6
# 257 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 258 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 259 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 261 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 262 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 263 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 264 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 265 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 266 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 267 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 269 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 270 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 271 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 272 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 273 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 274 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_7
# 275 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 276 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 278 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 279 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 280 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_8
# 282 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 283 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 284 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 286 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


# 334 "data/maps/Planet01_02/scripts.pory"
Movement_JirachiPlanet2:
# 335 "data/maps/Planet01_02/scripts.pory"
	face_down
# 336 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 337 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 338 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 339 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 340 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 341 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 342 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 343 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 344 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 345 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 346 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 347 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 348 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 349 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 350 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 351 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 352 "data/maps/Planet01_02/scripts.pory"
	set_visible
	step_end

Found_Ruby::
# 356 "data/maps/Planet01_02/scripts.pory"
	lock
# 357 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 358 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 359 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 360 "data/maps/Planet01_02/scripts.pory"
	msgbox Found_Ruby_Text_0
# 362 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 363 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 364 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 365 "data/maps/Planet01_02/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 366 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 367 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText01::
# 372 "data/maps/Planet01_02/scripts.pory"
	lock
# 373 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText01_Text_0
# 378 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText01_2
# 380 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText01_3
Planet01_02_HintText01_1:
# 383 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText01_7
Planet01_02_HintText01_6:
# 386 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText01_2:
# 379 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText01_1

Planet01_02_HintText01_3:
# 381 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText01_1

Planet01_02_HintText01_7:
# 384 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText01_6


Planet01_02_HintText02::
# 391 "data/maps/Planet01_02/scripts.pory"
	lock
# 392 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText02_Text_0
# 395 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText02_2
# 397 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText02_3
Planet01_02_HintText02_1:
# 400 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText02_7
Planet01_02_HintText02_6:
# 403 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText02_2:
# 396 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText02_1

Planet01_02_HintText02_3:
# 398 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText02_1

Planet01_02_HintText02_7:
# 401 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText02_6


Planet01_02_HintText03::
# 408 "data/maps/Planet01_02/scripts.pory"
	lock
# 409 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_0
# 414 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText03_2
# 416 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText03_3
Planet01_02_HintText03_1:
# 419 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText03_7
Planet01_02_HintText03_6:
# 422 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 423 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 425 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 426 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 427 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_1
# 431 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 432 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 433 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 434 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
# 435 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText03_2:
# 415 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText03_1

Planet01_02_HintText03_3:
# 417 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText03_1

Planet01_02_HintText03_7:
# 420 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText03_6


Planet01_02_HintText04::
# 440 "data/maps/Planet01_02/scripts.pory"
	lock
# 441 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText04_Text_0
# 444 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText05::
# 449 "data/maps/Planet01_02/scripts.pory"
	lock
# 450 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText05_Text_0
# 456 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText06::
# 461 "data/maps/Planet01_02/scripts.pory"
	lock
# 462 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText06_Text_0
# 463 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_QuagsireTrigger::
# 468 "data/maps/Planet01_02/scripts.pory"
	lockall
# 469 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 470 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 471 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_QuagsireTrigger_Text_0
# 472 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 473 "data/maps/Planet01_02/scripts.pory"
	playse SE_PIN
# 474 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_02_QuagsireTrigger_Movement_0
# 475 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 476 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 477 "data/maps/Planet01_02/scripts.pory"
	waitse
# 478 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_ENCOUNTER
# 479 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_02_QuagsireTrigger_Movement_1
# 480 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 481 "data/maps/Planet01_02/scripts.pory"
	applymovement 26, Movement_QuagsireWaterstone1
# 482 "data/maps/Planet01_02/scripts.pory"
	waitmovement 0
# 483 "data/maps/Planet01_02/scripts.pory"
	setwildbattle SPECIES_CARNIVINE, 50, ITEM_WATER_STONE
# 488 "data/maps/Planet01_02/scripts.pory"
	dowildbattle
# 489 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_4
# 490 "data/maps/Planet01_02/scripts.pory"
	removeobject 26
# 491 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_1, 1
# 492 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


# 496 "data/maps/Planet01_02/scripts.pory"
Movement_QuagsireWaterstone1:
# 497 "data/maps/Planet01_02/scripts.pory"
	face_left
# 498 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 499 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 500 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 501 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 502 "data/maps/Planet01_02/scripts.pory"
	jump_left
# 503 "data/maps/Planet01_02/scripts.pory"
	jump_down
# 504 "data/maps/Planet01_02/scripts.pory"
	face_left
# 505 "data/maps/Planet01_02/scripts.pory"
	walk_left
	step_end

Planet01_02_Elgyem::
# 509 "data/maps/Planet01_02/scripts.pory"
	lock
# 510 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 511 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 512 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 513 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 514 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Elgyem_Text_0
# 517 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 518 "data/maps/Planet01_02/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 519 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 520 "data/maps/Planet01_02/scripts.pory"
	release
	end


sableye_connect::
# 525 "data/maps/Planet01_02/scripts.pory"
	lock
# 526 "data/maps/Planet01_02/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, sableye_connect_2
sableye_connect_1:
# 546 "data/maps/Planet01_02/scripts.pory"
	release
	end

sableye_connect_2:
# 527 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_0
# 528 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 529 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 530 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 531 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 532 "data/maps/Planet01_02/scripts.pory"
	waitmoncry
# 533 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_SYS_PALACE_SILVER
# 534 "data/maps/Planet01_02/scripts.pory"
	removeobject 34
# 535 "data/maps/Planet01_02/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 536 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_connect_5
# 539 "data/maps/Planet01_02/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 540 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_2
sableye_connect_4:
# 542 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 543 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 544 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
	goto sableye_connect_1

sableye_connect_5:
# 537 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_1
	goto sableye_connect_4


# 180 "data/maps/Planet01_02/scripts.pory"
Jirachi_goes_to_ship_Movement_0:
# 180 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
# 180 "data/maps/Planet01_02/scripts.pory"
	face_up
	step_end

# 236 "data/maps/Planet01_02/scripts.pory"
Jirachi_goes_to_ship_Movement_1:
# 236 "data/maps/Planet01_02/scripts.pory"
	walk_down
	step_end

# 474 "data/maps/Planet01_02/scripts.pory"
Planet01_02_QuagsireTrigger_Movement_0:
# 474 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
	step_end

# 479 "data/maps/Planet01_02/scripts.pory"
Planet01_02_QuagsireTrigger_Movement_1:
# 479 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
# 479 "data/maps/Planet01_02/scripts.pory"
	face_right
	step_end

Planet01_02_AddAir_Minior01_Text_0:
# 64 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 72 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 166 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 171 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Jirachi_goes_to_ship_Text_0:
# 190 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_1:
# 197 "data/maps/Planet01_02/scripts.pory"
	.string "Jirachi again! It's good to see you!\n"
	.string "Come to help us out again?$"

Jirachi_goes_to_ship_Text_2:
# 205 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I can read its mind... It wont let you\n"
	.string "past it unless you bring it a Shadow\l"
	.string "Crystal, apparently.\p"
	.string "Why is this Jirachi so invested in us?\n"
	.string "I guess it understands that the Deoxys\l"
	.string "Cell is a threat to all life.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_3:
# 220 "data/maps/Planet01_02/scripts.pory"
	.string "I don't get it. What's a Shadow Crystal,\n"
	.string "and where can we get one?$"

Jirachi_goes_to_ship_Text_4:
# 228 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I have no clue. But, I get the feeling\n"
	.string "it has to do with... The dark pool.\p"
	.string "Below the Shoreline, to the far west.\n"
	.string "I'll explain more when we get there.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_5:
# 244 "data/maps/Planet01_02/scripts.pory"
	.string "Well, I have the Shadow Crystal now!$"

Jirachi_goes_to_ship_Text_6:
# 254 "data/maps/Planet01_02/scripts.pory"
	.string "You want to join my team?!\p"
	.string "But I don't have a spare Meteor Ball for\n"
	.string "you...$"

Jirachi_goes_to_ship_Text_7:
# 274 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi went to your ship!$"

Jirachi_goes_to_ship_Text_8:
# 280 "data/maps/Planet01_02/scripts.pory"
	.string "Looks like Jirachi will always return to\n"
	.string "my ship when released!$"

Jirachi_goes_to_ship_Text_9:
# 299 "data/maps/Planet01_02/scripts.pory"
	.string "You want to join my team?!$"

Jirachi_goes_to_ship_Text_10:
# 316 "data/maps/Planet01_02/scripts.pory"
	.string "Welcome aboard!\n"
	.string "Looks like Jirachi will always return to\l"
	.string "my ship when released!$"

Jirachi_goes_to_ship_Text_11:
# 325 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Let's do this.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Found_Ruby_Text_0:
# 360 "data/maps/Planet01_02/scripts.pory"
	.string "Found the Ruby!\n"
	.string "Let's get the heck out of here!$"

Planet01_02_HintText01_Text_0:
# 373 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: It'd be a bad idea to bring\n"
	.string "anything that smells sweet up this\l"
	.string "mountain.\p"
	.string "There's a strong pokemon up here\n"
	.string "that would love it too much!$"

Planet01_02_HintText02_Text_0:
# 392 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: I've occasionally observed\n"
	.string "Quagsires bringing blue stones they've\l"
	.string "found to a nest behind the waterfall.$"

Planet01_02_HintText03_Text_0:
# 409 "data/maps/Planet01_02/scripts.pory"
	.string "Captain: To future explorers:\n"
	.string "Our team has setup our primary lab in\l"
	.string "the cave above this waterfall.\p"
	.string "You may be able to find our previous\n"
	.string "campsites to the south.$"

Planet01_02_HintText03_Text_1:
# 427 "data/maps/Planet01_02/scripts.pory"
	.string "Welp. I don't have any way to get\n"
	.string "up there right now. Guess I'll have\l"
	.string "to start searching the old campsites.\l"
	.string "This is the only lead I've got.$"

Planet01_02_HintText04_Text_0:
# 441 "data/maps/Planet01_02/scripts.pory"
	.string "Ops Lead: We couldn't find a Pokemon on\n"
	.string "this planet with the move {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall;\l"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}thankfully my Kingdra knows it!$"

Planet01_02_HintText05_Text_0:
# 450 "data/maps/Planet01_02/scripts.pory"
	.string "Ops Lead: There's a surprising amount\n"
	.string "of greenery here for a planet with such\l"
	.string "a light atmosphere.\p"
	.string "Interestingly, my instruments are also\n"
	.string "reporting that something over here has\l"
	.string "a particularly strong scent?$"

Planet01_02_HintText06_Text_0:
# 462 "data/maps/Planet01_02/scripts.pory"
	.string "EOD Research Facility Ahead$"

Planet01_02_QuagsireTrigger_Text_0:
# 471 "data/maps/Planet01_02/scripts.pory"
	.string "Huh? In the waterfall-$"

Planet01_02_Elgyem_Text_0:
# 514 "data/maps/Planet01_02/scripts.pory"
	.string "Woah! Elgyem is glowing red-\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}And however we change, I just want you\n"
	.string "to know...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_connect_Text_0:
# 527 "data/maps/Planet01_02/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_connect_Text_1:
# 537 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_connect_Text_2:
# 540 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
