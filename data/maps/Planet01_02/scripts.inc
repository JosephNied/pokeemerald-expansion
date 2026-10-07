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
	setflag FLAG_TEMP_4
# 9 "data/maps/Planet01_02/scripts.pory"
	removeobject 26
# 10 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_10
# 11 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_11
# 12 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_12
# 13 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_13
# 14 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_14
# 15 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_15
# 16 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_16
# 17 "data/maps/Planet01_02/scripts.pory"
	goto_if_set FLAG_REGISTERED_ANDRES, Planet01_02_Enter_2
Planet01_02_Enter_1:
	end

Planet01_02_Enter_2:
# 18 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto Planet01_02_Enter_1


Planet01_02_EventScript_Item01::
# 24 "data/maps/Planet01_02/scripts.pory"
	lock
# 25 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 26 "data/maps/Planet01_02/scripts.pory"
	removeobject 22
# 27 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 28 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item02::
# 33 "data/maps/Planet01_02/scripts.pory"
	lock
# 34 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 35 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 36 "data/maps/Planet01_02/scripts.pory"
	removeobject 21
# 37 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item03::
# 42 "data/maps/Planet01_02/scripts.pory"
	lock
# 43 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 44 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x4D0
# 45 "data/maps/Planet01_02/scripts.pory"
	removeobject 24
# 46 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_Item04::
# 51 "data/maps/Planet01_02/scripts.pory"
	lock
# 52 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_PEAT_BLOCK, 1
# 53 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 54 "data/maps/Planet01_02/scripts.pory"
	removeobject 30
# 55 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_AddAir_Minior01::
# 60 "data/maps/Planet01_02/scripts.pory"
	lockall
# 61 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 62 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 63 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 64 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 65 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 66 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 68 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 69 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 70 "data/maps/Planet01_02/scripts.pory"
	playse SE_REPEL
# 71 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 72 "data/maps/Planet01_02/scripts.pory"
	removeobject 28
# 73 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 74 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 75 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_AddAir_Minior02::
# 80 "data/maps/Planet01_02/scripts.pory"
	lockall
# 81 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 82 "data/maps/Planet01_02/scripts.pory"
	special AddAirTimerMap
# 83 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 84 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 85 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 86 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_0
# 88 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 89 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 90 "data/maps/Planet01_02/scripts.pory"
	playse SE_REPEL
# 91 "data/maps/Planet01_02/scripts.pory"
	callnative RefreshO2Meter
# 92 "data/maps/Planet01_02/scripts.pory"
	removeobject 23
# 93 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 94 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_AddAir_Minior01_Text_1
# 95 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


Planet01_02_EventScript_RockSmash01::
# 100 "data/maps/Planet01_02/scripts.pory"
	lock
# 101 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 102 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 103 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_10
# 104 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash02::
# 109 "data/maps/Planet01_02/scripts.pory"
	lock
# 110 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 111 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 112 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_11
# 113 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash03::
# 118 "data/maps/Planet01_02/scripts.pory"
	lock
# 119 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 120 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 121 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_12
# 122 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash04::
# 127 "data/maps/Planet01_02/scripts.pory"
	lock
# 128 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 129 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 130 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_13
# 131 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash05::
# 136 "data/maps/Planet01_02/scripts.pory"
	lock
# 137 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 138 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 139 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_14
# 140 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash06::
# 145 "data/maps/Planet01_02/scripts.pory"
	lock
# 146 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 147 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 148 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_15
# 149 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_EventScript_RockSmash07::
# 154 "data/maps/Planet01_02/scripts.pory"
	lock
# 155 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 156 "data/maps/Planet01_02/scripts.pory"
	call EventScript_RockSmash
# 157 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_16
# 158 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_Carbink::
# 163 "data/maps/Planet01_02/scripts.pory"
	lock
# 164 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 165 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 166 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 167 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 168 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_0
# 169 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_UNUSED_0x04D
# 170 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 171 "data/maps/Planet01_02/scripts.pory"
	removeobject 29
# 172 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 173 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Carbink_Text_1
# 174 "data/maps/Planet01_02/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 175 "data/maps/Planet01_02/scripts.pory"
	release
	end


Jirachi_goes_to_ship::
# 180 "data/maps/Planet01_02/scripts.pory"
	lock
# 181 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 182 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jirachi_goes_to_ship_Movement_0
# 183 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 184 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 185 "data/maps/Planet01_02/scripts.pory"
	applymovement 25, Movement_JirachiPlanet2
# 186 "data/maps/Planet01_02/scripts.pory"
	waitmovement 0
# 187 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_JIRACHI
# 188 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 190 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 191 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 192 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 193 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 194 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 195 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 197 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 198 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 199 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_1
# 201 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 202 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 203 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 205 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 206 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 207 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_2
# 213 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 214 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 215 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 216 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 8
# 218 "data/maps/Planet01_02/scripts.pory"
	checkitem ITEM_COMET_SHARD, 1
# 219 "data/maps/Planet01_02/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Jirachi_goes_to_ship_1
# 244 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_F, 1
# 245 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 246 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 247 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_5
# 248 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 249 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 250 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 252 "data/maps/Planet01_02/scripts.pory"
	checkitem ITEM_BEAST_BALL, 1
# 253 "data/maps/Planet01_02/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Jirachi_goes_to_ship_5
# 292 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 293 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 294 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 295 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 296 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 297 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 298 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 300 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 301 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 302 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_9
# 303 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 304 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 305 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 307 "data/maps/Planet01_02/scripts.pory"
	removeitem ITEM_BEAST_BALL, 1
# 309 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 310 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 311 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_DUSTY
# 312 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 313 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 315 "data/maps/Planet01_02/scripts.pory"
	givemon SPECIES_JIRACHI, 70
# 317 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 318 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 319 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_10
# 322 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 323 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 324 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 326 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 327 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 328 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_11
# 329 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 330 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 331 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 332 "data/maps/Planet01_02/scripts.pory"
	release
	end

Jirachi_goes_to_ship_1:
# 220 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 221 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 222 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_3
# 225 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 226 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 227 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 229 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 230 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 231 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_4
# 235 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 236 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 237 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 239 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jirachi_goes_to_ship_Movement_1
# 240 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 241 "data/maps/Planet01_02/scripts.pory"
	release
	end

Jirachi_goes_to_ship_5:
# 254 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 255 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 256 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 257 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_6
# 260 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 261 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 262 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 264 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 265 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_HAPPY
# 266 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 267 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_0
# 268 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 269 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 270 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 272 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 273 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_REGISTERED_ANDRES
# 274 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_DUSTY
# 275 "data/maps/Planet01_02/scripts.pory"
	removeobject 25
# 276 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 277 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_7
# 278 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 279 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 281 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 282 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 283 "data/maps/Planet01_02/scripts.pory"
	msgbox Jirachi_goes_to_ship_Text_8
# 285 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 286 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 287 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 289 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


# 337 "data/maps/Planet01_02/scripts.pory"
Movement_JirachiPlanet2:
# 338 "data/maps/Planet01_02/scripts.pory"
	face_down
# 339 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 340 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 341 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 342 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 343 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 344 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 345 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 346 "data/maps/Planet01_02/scripts.pory"
	delay_4
# 347 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 348 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 349 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 350 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 351 "data/maps/Planet01_02/scripts.pory"
	set_visible
# 352 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 353 "data/maps/Planet01_02/scripts.pory"
	set_invisible
# 354 "data/maps/Planet01_02/scripts.pory"
	delay_8
# 355 "data/maps/Planet01_02/scripts.pory"
	set_visible
	step_end

Found_Ruby::
# 359 "data/maps/Planet01_02/scripts.pory"
	lock
# 360 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 361 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 362 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 363 "data/maps/Planet01_02/scripts.pory"
	msgbox Found_Ruby_Text_0
# 365 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 366 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 367 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 368 "data/maps/Planet01_02/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 369 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 370 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText01::
# 375 "data/maps/Planet01_02/scripts.pory"
	lock
# 376 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText01_Text_0
# 381 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText01_2
# 383 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText01_3
Planet01_02_HintText01_1:
# 386 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText01_7
Planet01_02_HintText01_6:
# 389 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText01_2:
# 382 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText01_1

Planet01_02_HintText01_3:
# 384 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText01_1

Planet01_02_HintText01_7:
# 387 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText01_6


Planet01_02_HintText02::
# 394 "data/maps/Planet01_02/scripts.pory"
	lock
# 395 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText02_Text_0
# 398 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText02_2
# 400 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText02_3
Planet01_02_HintText02_1:
# 403 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText02_7
Planet01_02_HintText02_6:
# 406 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText02_2:
# 399 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText02_1

Planet01_02_HintText02_3:
# 401 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText02_1

Planet01_02_HintText02_7:
# 404 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText02_6


Planet01_02_HintText03::
# 411 "data/maps/Planet01_02/scripts.pory"
	lock
# 412 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_0
# 417 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_02_HintText03_2
# 419 "data/maps/Planet01_02/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq Planet01_02_HintText03_3
Planet01_02_HintText03_1:
# 422 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_02_HintText03_7
Planet01_02_HintText03_6:
# 425 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 426 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 428 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 429 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 430 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText03_Text_1
# 435 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 436 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 437 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 438 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
# 439 "data/maps/Planet01_02/scripts.pory"
	release
	end

Planet01_02_HintText03_2:
# 418 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText03_1

Planet01_02_HintText03_3:
# 420 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
	goto Planet01_02_HintText03_1

Planet01_02_HintText03_7:
# 423 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_02_HintText03_6


Planet01_02_HintText04::
# 444 "data/maps/Planet01_02/scripts.pory"
	lock
# 445 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText04_Text_0
# 448 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText05::
# 453 "data/maps/Planet01_02/scripts.pory"
	lock
# 454 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText05_Text_0
# 460 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_HintText06::
# 465 "data/maps/Planet01_02/scripts.pory"
	lock
# 466 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_HintText06_Text_0
# 467 "data/maps/Planet01_02/scripts.pory"
	release
	end


Planet01_02_QuagsireTrigger::
# 472 "data/maps/Planet01_02/scripts.pory"
	lockall
# 473 "data/maps/Planet01_02/scripts.pory"
	clearflag FLAG_TEMP_4
# 474 "data/maps/Planet01_02/scripts.pory"
	addobject 26
# 475 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 476 "data/maps/Planet01_02/scripts.pory"
	callnative DrawMugshot
# 477 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_QuagsireTrigger_Text_0
# 478 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 479 "data/maps/Planet01_02/scripts.pory"
	callnative ClearMugshot
# 480 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 481 "data/maps/Planet01_02/scripts.pory"
	waitse
# 482 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_QUAGSIRE, CRY_MODE_ENCOUNTER
# 483 "data/maps/Planet01_02/scripts.pory"
	playse SE_PIN
# 484 "data/maps/Planet01_02/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_02_QuagsireTrigger_Movement_0
# 485 "data/maps/Planet01_02/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 486 "data/maps/Planet01_02/scripts.pory"
	applymovement 26, Movement_QuagsireWaterstone1
# 487 "data/maps/Planet01_02/scripts.pory"
	waitmovement 0
# 488 "data/maps/Planet01_02/scripts.pory"
	setwildbattle SPECIES_CARNIVINE, 50, ITEM_WATER_STONE
# 493 "data/maps/Planet01_02/scripts.pory"
	dowildbattle
# 494 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_TEMP_4
# 495 "data/maps/Planet01_02/scripts.pory"
	removeobject 26
# 496 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_TEMP_1, 1
# 497 "data/maps/Planet01_02/scripts.pory"
	releaseall
	end


# 501 "data/maps/Planet01_02/scripts.pory"
Movement_QuagsireWaterstone1:
# 502 "data/maps/Planet01_02/scripts.pory"
	face_left
# 503 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 504 "data/maps/Planet01_02/scripts.pory"
	walk_left
# 505 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 506 "data/maps/Planet01_02/scripts.pory"
	delay_16
# 507 "data/maps/Planet01_02/scripts.pory"
	jump_left
# 508 "data/maps/Planet01_02/scripts.pory"
	jump_down
# 509 "data/maps/Planet01_02/scripts.pory"
	face_left
# 510 "data/maps/Planet01_02/scripts.pory"
	walk_left
	step_end

Planet01_02_Elgyem::
# 514 "data/maps/Planet01_02/scripts.pory"
	lock
# 515 "data/maps/Planet01_02/scripts.pory"
	faceplayer
# 516 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 517 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 518 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
# 519 "data/maps/Planet01_02/scripts.pory"
	msgbox Planet01_02_Elgyem_Text_0
# 522 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 523 "data/maps/Planet01_02/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 524 "data/maps/Planet01_02/scripts.pory"
	waitstate
# 525 "data/maps/Planet01_02/scripts.pory"
	release
	end


sableye_connect::
# 530 "data/maps/Planet01_02/scripts.pory"
	lock
# 531 "data/maps/Planet01_02/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, sableye_connect_2
sableye_connect_1:
# 551 "data/maps/Planet01_02/scripts.pory"
	release
	end

sableye_connect_2:
# 532 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_0
# 533 "data/maps/Planet01_02/scripts.pory"
	waitmessage
# 534 "data/maps/Planet01_02/scripts.pory"
	closemessage
# 535 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 536 "data/maps/Planet01_02/scripts.pory"
	playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER
# 537 "data/maps/Planet01_02/scripts.pory"
	waitmoncry
# 538 "data/maps/Planet01_02/scripts.pory"
	setflag FLAG_SYS_PALACE_SILVER
# 539 "data/maps/Planet01_02/scripts.pory"
	removeobject 34
# 540 "data/maps/Planet01_02/scripts.pory"
	addvar VAR_DAILY_BLENDER, 1
# 541 "data/maps/Planet01_02/scripts.pory"
	compare VAR_DAILY_BLENDER, 5
	goto_if_eq sableye_connect_5
# 544 "data/maps/Planet01_02/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_DAILY_BLENDER
# 545 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_2
sableye_connect_4:
# 547 "data/maps/Planet01_02/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 548 "data/maps/Planet01_02/scripts.pory"
	setvar VAR_0x8000, SPECIES_NOCTOWL
# 549 "data/maps/Planet01_02/scripts.pory"
	callnative RegisterSpeciesInDex
	goto sableye_connect_1

sableye_connect_5:
# 542 "data/maps/Planet01_02/scripts.pory"
	msgbox sableye_connect_Text_1
	goto sableye_connect_4


# 182 "data/maps/Planet01_02/scripts.pory"
Jirachi_goes_to_ship_Movement_0:
# 182 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
# 182 "data/maps/Planet01_02/scripts.pory"
	face_up
	step_end

# 239 "data/maps/Planet01_02/scripts.pory"
Jirachi_goes_to_ship_Movement_1:
# 239 "data/maps/Planet01_02/scripts.pory"
	walk_down
	step_end

# 484 "data/maps/Planet01_02/scripts.pory"
Planet01_02_QuagsireTrigger_Movement_0:
# 484 "data/maps/Planet01_02/scripts.pory"
	emote_exclamation_mark
# 484 "data/maps/Planet01_02/scripts.pory"
	face_right
	step_end

Planet01_02_AddAir_Minior01_Text_0:
# 66 "data/maps/Planet01_02/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_02_AddAir_Minior01_Text_1:
# 74 "data/maps/Planet01_02/scripts.pory"
	.string "Minior flew away...$"

Planet01_02_Carbink_Text_0:
# 168 "data/maps/Planet01_02/scripts.pory"
	.string "The Carbink seems lost...!$"

Planet01_02_Carbink_Text_1:
# 173 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Jirachi_goes_to_ship_Text_0:
# 192 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_1:
# 199 "data/maps/Planet01_02/scripts.pory"
	.string "Jirachi again! It's good to see you!\n"
	.string "Come to help us out?$"

Jirachi_goes_to_ship_Text_2:
# 207 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I can read its mind...\p"
	.string "It wont let you past it unless you bring\n"
	.string "it a Shadow Crystal, apparently.\p"
	.string "Why is this Jirachi so invested in us?\n"
	.string "I guess it understands that the Deoxys\l"
	.string "Cell is a threat to all life?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_3:
# 222 "data/maps/Planet01_02/scripts.pory"
	.string "I don't get it.\p"
	.string "What's a Shadow Crystal, and where\n"
	.string "we get one?$"

Jirachi_goes_to_ship_Text_4:
# 231 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I have no clue. But, I get the feeling\n"
	.string "it has to do with... The dark pool.\p"
	.string "Below the Shoreline, to the far west.\n"
	.string "I'll explain more when we get there.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Jirachi_goes_to_ship_Text_5:
# 247 "data/maps/Planet01_02/scripts.pory"
	.string "Well, I have the Shadow Crystal now!$"

Jirachi_goes_to_ship_Text_6:
# 257 "data/maps/Planet01_02/scripts.pory"
	.string "You want to join my team?!\p"
	.string "But I don't have a spare Meteor Ball for\n"
	.string "you...$"

Jirachi_goes_to_ship_Text_7:
# 277 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi went to your ship!$"

Jirachi_goes_to_ship_Text_8:
# 283 "data/maps/Planet01_02/scripts.pory"
	.string "Looks like Jirachi will always return to\n"
	.string "my ship if I release it!$"

Jirachi_goes_to_ship_Text_9:
# 302 "data/maps/Planet01_02/scripts.pory"
	.string "You want to join my team?!$"

Jirachi_goes_to_ship_Text_10:
# 319 "data/maps/Planet01_02/scripts.pory"
	.string "Welcome aboard!\n"
	.string "Looks like Jirachi will always return to\l"
	.string "my ship if I release it!$"

Jirachi_goes_to_ship_Text_11:
# 328 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<...Let's do this.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Found_Ruby_Text_0:
# 363 "data/maps/Planet01_02/scripts.pory"
	.string "Found the Ruby!\n"
	.string "Let's get the heck out of here!$"

Planet01_02_HintText01_Text_0:
# 376 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: It'd be a bad idea to bring\n"
	.string "anything that smells sweet up this\l"
	.string "mountain.\p"
	.string "There's a strong pokemon up here\n"
	.string "that would love it too much!$"

Planet01_02_HintText02_Text_0:
# 395 "data/maps/Planet01_02/scripts.pory"
	.string "Biologist: I've occasionally observed\n"
	.string "Quagsires bringing blue stones they've\l"
	.string "found to a nest behind the waterfall.$"

Planet01_02_HintText03_Text_0:
# 412 "data/maps/Planet01_02/scripts.pory"
	.string "Captain: To future explorers:\n"
	.string "Our team has setup our primary lab in\l"
	.string "the cave above this waterfall.\p"
	.string "You may be able to find our previous\n"
	.string "campsites to the south.$"

Planet01_02_HintText03_Text_1:
# 430 "data/maps/Planet01_02/scripts.pory"
	.string "Welp. I don't have any way to get\n"
	.string "up there right now.\p"
	.string "Guess I'll have to start searching the\n"
	.string "old campsites.\p"
	.string "This is the only lead I've got.$"

Planet01_02_HintText04_Text_0:
# 445 "data/maps/Planet01_02/scripts.pory"
	.string "Ops Lead: We couldn't find a Pokemon on\n"
	.string "this planet with the move {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall;\l"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}thankfully my Kingdra knows it!$"

Planet01_02_HintText05_Text_0:
# 454 "data/maps/Planet01_02/scripts.pory"
	.string "Ops Lead: There's a surprising amount\n"
	.string "of greenery here for a planet with such\l"
	.string "a light atmosphere.\p"
	.string "Interestingly, my instruments are also\n"
	.string "reporting that something over here has\l"
	.string "a particularly strong scent?$"

Planet01_02_HintText06_Text_0:
# 466 "data/maps/Planet01_02/scripts.pory"
	.string "EOD Research Facility Ahead$"

Planet01_02_QuagsireTrigger_Text_0:
# 477 "data/maps/Planet01_02/scripts.pory"
	.string "Huh? In the waterfall-$"

Planet01_02_Elgyem_Text_0:
# 519 "data/maps/Planet01_02/scripts.pory"
	.string "Woah! Elgyem is glowing red-\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}And however we change, I just want you\n"
	.string "to know...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_connect_Text_0:
# 532 "data/maps/Planet01_02/scripts.pory"
	.string "Noctowl's eyes open...$"

sableye_connect_Text_1:
# 542 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}The gate is open.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

sableye_connect_Text_2:
# 545 "data/maps/Planet01_02/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}{STR_VAR_1} of 5...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"
