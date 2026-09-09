Planet01_01_MapScripts::
# 2 "data/maps/Planet01_01/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_01_Enter
# 3 "data/maps/Planet01_01/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Planet01_01_FrameTable
	.byte 0


Planet01_01_Enter::
# 7 "data/maps/Planet01_01/scripts.pory"
	special SetRandomFlags
# 8 "data/maps/Planet01_01/scripts.pory"
	special BossBattleOff
# 9 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 5
# 10 "data/maps/Planet01_01/scripts.pory"
	goto_if_set FLAG_MAP_SCRIPT_CHECKED_DEOXYS, Planet01_01_Enter_2
Planet01_01_Enter_1:
# 13 "data/maps/Planet01_01/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 14 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8004, 18
# 15 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 16 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8005, 10
# 17 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 18 "data/maps/Planet01_01/scripts.pory"
	goto_if_unset FLAG_MAP_SCRIPT_CHECKED_DEOXYS, Planet01_01_Enter_5
Planet01_01_Enter_4:
# 22 "data/maps/Planet01_01/scripts.pory"
	goto_if_unset FLAG_REGISTERED_ROSE, Planet01_01_Enter_8
# 25 "data/maps/Planet01_01/scripts.pory"
	goto_if_unset FLAG_REGISTERED_CRISTIN, Planet01_01_Enter_11
# 28 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 3
	goto_if_eq Planet01_01_Enter_14
# 32 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_01_Enter_7:
# 37 "data/maps/Planet01_01/scripts.pory"
End:
	end

Planet01_01_Enter_2:
# 11 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Planet01_01_Enter_1

Planet01_01_Enter_5:
# 19 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 20 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
	goto Planet01_01_Enter_4

Planet01_01_Enter_8:
# 23 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_01_Enter_7

Planet01_01_Enter_11:
# 26 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Planet01_01_Enter_7

Planet01_01_Enter_14:
# 30 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Planet01_01_Enter_7


# 41 "data/maps/Planet01_01/scripts.pory"

# 42 "data/maps/Planet01_01/scripts.pory"
Planet01_01_FrameTable::
# 43 "data/maps/Planet01_01/scripts.pory"
	map_script_2 VAR_AIR_TIMER_TRIGGERED, 1, Planet01_01_StartAirTimer
# 44 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, Planet01_01_RobotGreeting
# 45 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 2, Planet01_01_JirachiAppears
# 46 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 3, Planet01_01_MonstersRegular
# 47 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_2, 1, Planet01_01_Ending
# 48 "data/maps/Planet01_01/scripts.pory"
	.2byte 0

Planet01_01_StartAirTimer::
# 52 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 53 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 54 "data/maps/Planet01_01/scripts.pory"
	lockall
# 55 "data/maps/Planet01_01/scripts.pory"
	playse SE_REPEL
# 56 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 57 "data/maps/Planet01_01/scripts.pory"
	callnative EnableO2Meter
# 58 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_EventScript_Item01::
# 63 "data/maps/Planet01_01/scripts.pory"
	lock
# 64 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 65 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 66 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 67 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item02::
# 72 "data/maps/Planet01_01/scripts.pory"
	lock
# 73 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 74 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 75 "data/maps/Planet01_01/scripts.pory"
	removeobject 11
# 76 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item03::
# 81 "data/maps/Planet01_01/scripts.pory"
	lock
# 82 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 83 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 84 "data/maps/Planet01_01/scripts.pory"
	removeobject 18
# 85 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirWarning::
# 90 "data/maps/Planet01_01/scripts.pory"
	lockall
# 91 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 92 "data/maps/Planet01_01/scripts.pory"
	checkitem ITEM_REPEL, 1
# 93 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_01_AirWarning_2
Planet01_01_AirWarning_1:
# 109 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end

Planet01_01_AirWarning_2:
# 94 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_1
# 95 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 96 "data/maps/Planet01_01/scripts.pory"
	yesnobox 1, 0
# 97 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Planet01_01_AirWarning_4
# 105 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end

Planet01_01_AirWarning_4:
# 98 "data/maps/Planet01_01/scripts.pory"
	playse SE_REPEL
# 99 "data/maps/Planet01_01/scripts.pory"
	removeitem ITEM_REPEL, 1
# 100 "data/maps/Planet01_01/scripts.pory"
	additem ITEM_SUPER_REPEL, 1
# 101 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 102 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 103 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
	goto Planet01_01_AirWarning_1


Planet01_01_AirExpired::
# 114 "data/maps/Planet01_01/scripts.pory"
	lockall
# 115 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 116 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 117 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 118 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 123 "data/maps/Planet01_01/scripts.pory"
	lockall
# 124 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 125 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 126 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 127 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 129 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1
# 130 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 131 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 132 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 133 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 134 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 135 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 136 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 137 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 142 "data/maps/Planet01_01/scripts.pory"
	lockall
# 143 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 144 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 145 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 146 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 148 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 149 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 150 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 151 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 152 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 153 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 154 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 155 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 156 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 161 "data/maps/Planet01_01/scripts.pory"
	lock
# 162 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 175 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 180 "data/maps/Planet01_01/scripts.pory"
	lock
# 181 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 185 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 190 "data/maps/Planet01_01/scripts.pory"
	lock
# 191 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 196 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 201 "data/maps/Planet01_01/scripts.pory"
	lock
# 202 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 205 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 210 "data/maps/Planet01_01/scripts.pory"
	lock
# 211 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 214 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 219 "data/maps/Planet01_01/scripts.pory"
	lock
# 220 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 221 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 222 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 223 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 224 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 225 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 226 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 227 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 228 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 229 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 230 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 231 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 236 "data/maps/Planet01_01/scripts.pory"
	lock
# 237 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 238 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 239 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 240 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 241 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 244 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 245 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 246 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 247 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 252 "data/maps/Planet01_01/scripts.pory"
	lock
# 253 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 254 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 256 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 257 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 258 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 259 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 260 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 263 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 264 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 265 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 266 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 267 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 268 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 270 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 271 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 272 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 273 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 274 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 275 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 276 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 277 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 278 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 279 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 280 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 281 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 282 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 283 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 284 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 285 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 286 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 287 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 288 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 289 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 290 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 291 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 292 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 293 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 294 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 295 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 297 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 298 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 299 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 300 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 301 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 302 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 304 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 305 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 306 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 307 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 308 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 309 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 311 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 312 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 313 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 316 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 317 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 318 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 320 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 321 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 322 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 325 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 326 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 327 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 329 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 330 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 331 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 340 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 341 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 342 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 344 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 345 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 346 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 348 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 349 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 350 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 352 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 353 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 354 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 357 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 358 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 359 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 361 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 362 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 363 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 365 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 366 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 367 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 369 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 370 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 371 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 372 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 373 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 374 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 376 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 377 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 378 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 380 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 381 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 382 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 384 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 385 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 386 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 388 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 389 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 390 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 392 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 393 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 395 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 396 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 397 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 402 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 403 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 404 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 406 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 407 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 408 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 410 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 411 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 413 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 414 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 415 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 417 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 418 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 419 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 421 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 422 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 423 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 424 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 425 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 426 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 428 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 429 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 431 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 433 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 434 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 435 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 437 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 438 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 439 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 441 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 443 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 444 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 446 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 447 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 448 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 449 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 450 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 451 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 453 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 455 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 456 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 457 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 460 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 461 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 462 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 464 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 465 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 466 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 467 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 468 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 469 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 471 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 472 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 473 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 474 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 475 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 476 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 478 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 479 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 480 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 481 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 482 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 483 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 485 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 486 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 487 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 488 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 489 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 490 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 492 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 493 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 494 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 495 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 496 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 497 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 499 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 500 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 502 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 504 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 505 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 506 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 508 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 521 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 522 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 523 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 527 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 528 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 529 "data/maps/Planet01_01/scripts.pory"
	face_up
# 530 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 531 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 532 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 533 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 534 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 535 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 536 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 537 "data/maps/Planet01_01/scripts.pory"
	face_up
# 538 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 539 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 540 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 541 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 542 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 543 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 544 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 547 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 548 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 549 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 550 "data/maps/Planet01_01/scripts.pory"
	face_right
# 551 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 552 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 553 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 554 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 555 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 556 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 557 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 558 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 559 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 560 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 561 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 562 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 563 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 567 "data/maps/Planet01_01/scripts.pory"
	lockall
# 568 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 569 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 571 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 572 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 573 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 575 "data/maps/Planet01_01/scripts.pory"
	playse SE_BANG
# 577 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 579 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 580 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 582 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 584 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 585 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 586 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 588 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 589 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 590 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 592 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 593 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 594 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 596 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 597 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 598 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 600 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 601 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 602 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 604 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 605 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 606 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 610 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 611 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 612 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 614 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 615 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 616 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 618 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 619 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 620 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 622 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 623 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 625 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 626 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 627 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 629 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 631 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 632 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 633 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 634 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 635 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 636 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 638 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 639 "data/maps/Planet01_01/scripts.pory"
	playse SE_M_DETECT
# 640 "data/maps/Planet01_01/scripts.pory"
	waitse
# 641 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 642 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 644 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 645 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 646 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 648 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 649 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 650 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 651 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 652 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 653 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 654 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 655 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 656 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 657 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 658 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 659 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 660 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 661 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 662 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 664 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 666 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 667 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 669 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 670 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 671 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 672 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 673 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 674 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 676 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 677 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 678 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 679 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 680 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 681 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 682 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 684 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 685 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 687 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 688 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 689 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 692 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 693 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 694 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 696 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 697 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 699 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 700 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 701 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 705 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 706 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 707 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 709 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 711 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 712 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 713 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 716 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 717 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 718 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 721 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 722 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 723 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 724 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 727 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 725 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 731 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 732 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 733 "data/maps/Planet01_01/scripts.pory"
	face_right
# 734 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 735 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 736 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 737 "data/maps/Planet01_01/scripts.pory"
	face_left
# 738 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 739 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 740 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 743 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 744 "data/maps/Planet01_01/scripts.pory"
	face_up
# 745 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 746 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 749 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 750 "data/maps/Planet01_01/scripts.pory"
	face_up
# 751 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 752 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 755 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 756 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 757 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 758 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 761 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 762 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 763 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 764 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 767 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 768 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 771 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 772 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 775 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 776 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 777 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 780 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 781 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 782 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 785 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 786 "data/maps/Planet01_01/scripts.pory"
	face_down
# 787 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 788 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 789 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 790 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 791 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 792 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 793 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 794 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 795 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 796 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 797 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 798 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 799 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 800 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 801 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 802 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 803 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 806 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 807 "data/maps/Planet01_01/scripts.pory"
	face_up
# 808 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 809 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 810 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 811 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 812 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 816 "data/maps/Planet01_01/scripts.pory"
	lock
# 818 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 875 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 907 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 941 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 961 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 1004 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 820 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 821 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 822 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 824 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 825 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 826 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 828 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 829 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 830 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 832 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 833 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 834 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 836 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 837 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 838 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 839 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 840 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 841 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 843 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 844 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 845 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 847 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 848 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 849 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 851 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 852 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 853 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 855 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 856 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 857 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 859 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 860 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 861 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 863 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 864 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 865 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 866 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 868 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 869 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 870 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 871 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 872 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 873 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 877 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 878 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 879 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 881 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 882 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 883 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 885 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 886 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 887 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 888 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 889 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 890 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 892 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 893 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 894 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 895 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 896 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 897 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 899 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 900 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 901 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 902 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 903 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 904 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 905 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 909 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 910 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 911 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 914 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 915 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 916 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 918 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 919 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 920 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 921 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 922 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 923 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 925 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 926 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 927 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 929 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 930 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 931 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 933 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 934 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 935 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 936 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 937 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 938 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 939 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 943 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 944 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 945 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 947 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 948 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 949 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 951 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 952 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 953 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 956 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 957 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 958 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 959 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 963 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 964 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 965 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 967 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 968 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 969 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 971 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 972 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 973 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
# 974 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 975 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 976 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 978 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 979 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 990 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 995 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 980 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 991 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 996 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 1009 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1010 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1011 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1012 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1013 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1014 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1019 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1020 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1021 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1022 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1023 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1024 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1025 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1027 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1028 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1029 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1031 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1032 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1033 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1035 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1036 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1037 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1039 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1040 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1041 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1045 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1046 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1047 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1049 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1050 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1051 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1054 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1055 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1056 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1058 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1059 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1060 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1062 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1063 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1064 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1066 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1067 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1069 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1071 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1072 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1073 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1074 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1075 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1076 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1077 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1078 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1105 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1106 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1107 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1108 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 256 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 256 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 256 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 273 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 273 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 273 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 406 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 406 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 406 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 410 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 410 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 428 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 428 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 443 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 443 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 696 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 696 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 696 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1021 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1021 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1021 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_StartAirTimer_Text_0:
# 56 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 91 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirWarning_Text_1:
# 94 "data/maps/Planet01_01/scripts.pory"
	.string "Use an Air Canister?$"

Planet01_01_AirExpired_Text_0:
# 115 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 127 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 134 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 162 "data/maps/Planet01_01/scripts.pory"
	.string "This is the captain of the EDGE OF DAWN,\n"
	.string "or EOD, research expedition. Our team\l"
	.string "consists of our incredible Operations\l"
	.string "Lead, genius Biologist, and of course\l"
	.string "myself!\p"
	.string "Our objective is to establish a facility \n"
	.string "for continuous research into alien\l"
	.string "Pokémon and environments.\p"
	.string "We've recorded notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places!\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 181 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 191 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples!$"

Planet01_01_HintText04_Text_0:
# 202 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types;\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill our oxygen systems!$"

Planet01_01_HintText05_Text_0:
# 211 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: Even with the low gravity, I\n"
	.string "can't jump up the tall cliffs. I wonder\l"
	.string "how else we might get up there...$"

Planet01_01_Carbink_Text_0:
# 224 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 229 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 241 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing red-\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}When the horizon is dark, and the\n"
	.string "progress is slow...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 260 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 268 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 277 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 284 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 290 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 299 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 306 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 313 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my human crew just calls me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 322 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough... But,\n"
	.string "if that's true, is your crew somewhere \l"
	.string "around here?$"

Planet01_01_RobotGreeting_Text_9:
# 331 "data/maps/Planet01_01/scripts.pory"
	.string "Afraid not, kid. My Emergency Protocol\n"
	.string "was activated, meaning the crew\l"
	.string "encountered a critical situation and\l"
	.string "were sent home.\p"
	.string "I'd elaborate, but the Emergency\n"
	.string "Protocol also encrypted my memory for\l"
	.string "security. That data is all top secret\l"
	.string "EOD company property!\p"
	.string "Even I can't access them!$"

Planet01_01_RobotGreeting_Text_10:
# 346 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 354 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 363 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 371 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 378 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 386 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 397 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 415 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 423 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 435 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 448 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 457 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 466 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 473 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 480 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 487 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 494 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 508 "data/maps/Planet01_01/scripts.pory"
	.string "This is the captain of the EDGE OF DAWN,\n"
	.string "or EOD, research expedition. Our team\l"
	.string "consists of our incredible Operations\l"
	.string "Lead, genius Biologist, and of course\l"
	.string "myself!\p"
	.string "Our objective is to establish a facility\n"
	.string "for long-term research into alien\l"
	.string "Pokémon and environments.\p"
	.string "We've recorded notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places!\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_JirachiAppears_Text_0:
# 586 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 594 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 606 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 616 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 633 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 671 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 679 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 689 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\l"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 701 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 713 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 822 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 830 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 838 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 845 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 853 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 861 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 870 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 879 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 887 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 894 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 901 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 911 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 920 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 927 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 935 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 945 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 953 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 965 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_18:
# 973 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_19:
# 980 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art PAL 9000.\n"
	.string "I was the latest model when we set out\l"
	.string "seven years ago.\p"
	.string "Designed to keep up morale, maintain\n"
	.string "focus on our objectives, and give full,\l"
	.string "detailed reports on all of our\l"
	.string "activities. I'm dissapointed that the\l"
	.string "situation we ran into required my\l"
	.string "team to leave without me, but I'm sure\l"
	.string "they had good reason to do so.$"

EventScript_TheCaptain_Text_20:
# 991 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_21:
# 996 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

Planet01_01_Ending_Text_0:
# 1025 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1033 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1041 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1051 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1060 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1073 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1078 "data/maps/Planet01_01/scripts.pory"
	.string "Thanks for playing!\n"
	.string "Credits:\p"
	.string "Developers:\n"
	.string "dBlue: Coding, graphics, writing, maps,\l"
	.string "music\l"
	.string "Grrrita: Character, Pokemon, and Prop\l"
	.string "Art. Graphics, Titlescreen.\l"
	.string "Kittycatsaton: Story brainstorming,\l"
	.string "spaceship layout\l"
	.string "<><><><>\p"
	.string "Playtesters: MyNameIsJeff, MayaZ\n"
	.string "<><><><>\p"
	.string "Additional credits:\n"
	.string "Montblanc: SWSH Party and Summary base\l"
	.string "and assistance\l"
	.string "<><><><>\p"
	.string "Chunsoft, Emmuffin, and G: Pokémon\n"
	.string "Mugshots\l"
	.string "<><><><>\p"
	.string "All those who gave advice on the Team\n"
	.string "Aqua's Hideout Discord!\l"
	.string "<><><><>\p"
	.string "All those who have contributed to\n"
	.string "Pokeemerald and Pokeemerald-Expanded,\l"
	.string "making this possible!\l"
	.string "<><><><>\p"
	.string "Now, Emerald credits:$"
