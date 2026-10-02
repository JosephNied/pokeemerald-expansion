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
# 176 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 181 "data/maps/Planet01_01/scripts.pory"
	lock
# 182 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 186 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 191 "data/maps/Planet01_01/scripts.pory"
	lock
# 192 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 198 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 203 "data/maps/Planet01_01/scripts.pory"
	lock
# 204 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 207 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 212 "data/maps/Planet01_01/scripts.pory"
	lock
# 213 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 216 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 221 "data/maps/Planet01_01/scripts.pory"
	lock
# 222 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 223 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 224 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 225 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 226 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 227 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 228 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 229 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 230 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 231 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 232 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 233 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 238 "data/maps/Planet01_01/scripts.pory"
	lock
# 239 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 240 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 241 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 242 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 243 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 246 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 247 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 248 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 249 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 254 "data/maps/Planet01_01/scripts.pory"
	lock
# 255 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 256 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 258 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 259 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 260 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 261 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 262 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 263 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 266 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 267 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 268 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 269 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 270 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 271 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 273 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 274 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 275 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 276 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 277 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 278 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 279 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 280 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 281 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 282 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 283 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 284 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 285 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 286 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 287 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 288 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 289 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 290 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 291 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 292 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 293 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 294 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 295 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 296 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 297 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 298 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 299 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 301 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 302 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 303 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 304 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 305 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 306 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 308 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 309 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 310 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 311 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 312 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 313 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 315 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 316 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 317 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 320 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 321 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 322 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 324 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 325 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 326 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 329 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 330 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 331 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 333 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 334 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 335 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 344 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 345 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 346 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 348 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 349 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 350 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 352 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 353 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 354 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 356 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 357 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 358 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 361 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 362 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 363 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 365 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 366 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 367 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 369 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 370 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 371 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 373 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 374 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 375 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 376 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 377 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 378 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 380 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 381 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 382 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 384 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 385 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 386 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 388 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 389 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 390 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 392 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 393 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 394 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 395 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 396 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 397 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 399 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 400 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 401 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 406 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 407 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 408 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 410 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 411 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 412 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 413 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 415 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 416 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 418 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 419 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 420 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 422 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 423 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 424 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 426 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 427 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 428 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 429 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 430 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 431 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 433 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 434 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 436 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 438 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 439 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 440 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 442 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 443 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 444 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 446 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 448 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 449 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 451 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 452 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 453 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 454 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 455 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 456 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 458 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 460 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 461 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 462 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 465 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 466 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 467 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 469 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 470 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 471 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 472 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 473 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 474 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 476 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 477 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 478 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 479 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 480 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 481 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 483 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 484 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 485 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 486 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 487 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 488 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 490 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 491 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 492 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 493 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 494 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 495 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 497 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 498 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 499 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 500 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 501 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 502 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 504 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 505 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 507 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 509 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 510 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 511 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 513 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 527 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 528 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 530 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 531 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 532 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 536 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 537 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 538 "data/maps/Planet01_01/scripts.pory"
	face_up
# 539 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 540 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 543 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 544 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 545 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 546 "data/maps/Planet01_01/scripts.pory"
	face_up
# 547 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 548 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 549 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 550 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 551 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 552 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 553 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 556 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 557 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 558 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 559 "data/maps/Planet01_01/scripts.pory"
	face_right
# 560 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 561 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 562 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 563 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 564 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 565 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 566 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 567 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 568 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 569 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 570 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 571 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 572 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 576 "data/maps/Planet01_01/scripts.pory"
	lockall
# 577 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 578 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 580 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 581 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 582 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 584 "data/maps/Planet01_01/scripts.pory"
	playse SE_BANG
# 586 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 588 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2_1
# 589 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 590 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2_2
# 591 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 593 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 595 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 596 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 597 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 599 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 600 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 601 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 603 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 604 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 605 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 607 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 608 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 609 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 611 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 612 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 613 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 615 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 616 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 617 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 621 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 622 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 623 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 625 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 626 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 627 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 629 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 630 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 631 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 633 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 634 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 636 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 637 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 638 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 640 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 642 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 643 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 644 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 645 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 646 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 647 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 649 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 650 "data/maps/Planet01_01/scripts.pory"
	playse SE_M_DETECT
# 651 "data/maps/Planet01_01/scripts.pory"
	waitse
# 652 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 653 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 655 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 656 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 657 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 659 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 660 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 661 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 662 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 663 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 664 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 665 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 666 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 667 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 668 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 669 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 670 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 671 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 672 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 673 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 675 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 677 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 678 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 680 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 681 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 682 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 683 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 684 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 685 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 687 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 688 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 689 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 690 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 691 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 692 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 693 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 695 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 696 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 698 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 699 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 700 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 703 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 704 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 705 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 706 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 707 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 708 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 710 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 711 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 712 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 716 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 717 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 718 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 720 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 722 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 723 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 724 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 727 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 728 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 729 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 732 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 733 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 734 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 735 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 738 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 736 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 742 "data/maps/Planet01_01/scripts.pory"
Movement_Player2_1:
# 743 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 744 "data/maps/Planet01_01/scripts.pory"
	face_right
# 745 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 746 "data/maps/Planet01_01/scripts.pory"
	delay_16
	step_end

# 749 "data/maps/Planet01_01/scripts.pory"
Movement_Player2_2:
# 750 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 751 "data/maps/Planet01_01/scripts.pory"
	face_left
# 752 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 753 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 754 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 757 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 758 "data/maps/Planet01_01/scripts.pory"
	face_up
# 759 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 760 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 763 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 764 "data/maps/Planet01_01/scripts.pory"
	face_up
# 765 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 766 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 769 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 770 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 771 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 772 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 775 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 776 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 777 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 778 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 781 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 782 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 785 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 786 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 789 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 790 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 791 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 794 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 795 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 796 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 799 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 800 "data/maps/Planet01_01/scripts.pory"
	face_down
# 801 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 802 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 803 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 804 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 805 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 806 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 807 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 808 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 809 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 810 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 811 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 812 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 813 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 814 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 815 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 816 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 817 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 820 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 821 "data/maps/Planet01_01/scripts.pory"
	face_up
# 822 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 823 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 824 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 825 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 826 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 830 "data/maps/Planet01_01/scripts.pory"
	lock
# 832 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 889 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 921 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 955 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 975 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 1018 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 834 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 835 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 836 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 838 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 839 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 840 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 842 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 843 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 844 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 846 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 847 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 848 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 850 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 851 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 852 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 853 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 854 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 855 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 857 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 858 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 859 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 861 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 862 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 863 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 865 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 866 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 867 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 869 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 870 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 871 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 873 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 874 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 875 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 877 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 878 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 879 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 880 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 882 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 883 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 884 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 885 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 886 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 887 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 891 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 892 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 893 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
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
	msgbox EventScript_TheCaptain_Text_8
# 902 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 903 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 904 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 906 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 907 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 908 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 909 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 910 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 911 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 913 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 914 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 915 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 916 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 917 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 918 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 919 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 923 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 924 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 925 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 928 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 929 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 930 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 932 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 933 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 934 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 935 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 936 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 937 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 939 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 940 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 941 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 943 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 944 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 945 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 947 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 948 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 949 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 950 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 951 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 952 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 953 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 957 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 958 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 959 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 961 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 962 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 963 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 965 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 966 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 967 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 970 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 971 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 972 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 973 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 977 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 978 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 979 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 981 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 982 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 983 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 985 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 986 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 987 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
# 988 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 989 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 990 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 992 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 993 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 1004 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 1009 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 994 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 1005 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 1010 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 1023 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1024 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1025 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1026 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1027 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1028 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1033 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1034 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1035 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 1036 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1037 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1038 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1039 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1040 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1042 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1043 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1044 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1046 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1047 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1048 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1050 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1051 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1052 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1054 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1055 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1056 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1060 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1061 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1062 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1064 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1065 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1066 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1069 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1070 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1071 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1073 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1074 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1075 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1077 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1078 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1079 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1081 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1082 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1084 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1086 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1087 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1088 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1089 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1090 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1091 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1092 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1093 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1120 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1121 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1122 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1123 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 259 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 259 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 259 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 277 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 277 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 277 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 411 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 411 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 411 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 415 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 415 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 433 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 433 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 448 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 448 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 707 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 707 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 707 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1036 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1036 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1036 "data/maps/Planet01_01/scripts.pory"
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
	.string "ledges can be scaled easily!\l"
	.string "Short ledges can be jumped up!$"

Planet01_01_HintText02_Text_0:
# 182 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 192 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: These relatives of Steelix\n"
	.string "have been digging deep into the\l"
	.string "planet's core.\p"
	.string "I wonder if it's the blue liquid they're\n"
	.string "exposed to that changed their type\l"
	.string "and color? I'll collect some samples!$"

Planet01_01_HintText04_Text_0:
# 204 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types;\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill our oxygen systems!$"

Planet01_01_HintText05_Text_0:
# 213 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: Even with the low gravity, I\n"
	.string "can't jump up the tall cliffs. I wonder\l"
	.string "how else we might get up there...$"

Planet01_01_Carbink_Text_0:
# 226 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 231 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 243 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing red-\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}When the horizon is dark, and the\n"
	.string "progress is slow...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 263 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 271 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 281 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 288 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 294 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 303 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 310 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 317 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my human crew just calls me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 326 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough... But,\n"
	.string "if that's true, is your crew somewhere \l"
	.string "around here?$"

Planet01_01_RobotGreeting_Text_9:
# 335 "data/maps/Planet01_01/scripts.pory"
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
# 350 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 358 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 367 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 375 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 382 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 390 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 401 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 420 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 428 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 440 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 453 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 462 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 471 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 478 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 485 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 492 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 499 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 513 "data/maps/Planet01_01/scripts.pory"
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
	.string "ledges can be scaled easily!\l"
	.string "Short ledges can be jumped up!$"

Planet01_01_JirachiAppears_Text_0:
# 597 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 605 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 617 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 627 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 644 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 682 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 690 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 700 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\l"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 712 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 724 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 836 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 844 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 852 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 859 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 867 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 875 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 884 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 893 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 901 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 908 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 915 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 925 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 934 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 941 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 949 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 959 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 967 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 979 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_18:
# 987 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_19:
# 994 "data/maps/Planet01_01/scripts.pory"
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
# 1005 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_21:
# 1010 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

Planet01_01_Ending_Text_0:
# 1040 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1048 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1056 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1066 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1075 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1088 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1093 "data/maps/Planet01_01/scripts.pory"
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
