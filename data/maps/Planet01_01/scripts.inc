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
	playse SE_REPEL
# 132 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 133 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 134 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 135 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 136 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 137 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 138 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 143 "data/maps/Planet01_01/scripts.pory"
	lockall
# 144 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 145 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 146 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 147 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 149 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 150 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 151 "data/maps/Planet01_01/scripts.pory"
	playse SE_REPEL
# 152 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 153 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 154 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 155 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 156 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 157 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 158 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 163 "data/maps/Planet01_01/scripts.pory"
	lock
# 164 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 178 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 183 "data/maps/Planet01_01/scripts.pory"
	lock
# 184 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 188 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 193 "data/maps/Planet01_01/scripts.pory"
	lock
# 194 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 200 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 205 "data/maps/Planet01_01/scripts.pory"
	lock
# 206 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 209 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 214 "data/maps/Planet01_01/scripts.pory"
	lock
# 215 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 220 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 225 "data/maps/Planet01_01/scripts.pory"
	lock
# 226 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 227 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 228 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 229 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 230 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 231 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 232 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 233 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 234 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 235 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 236 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 237 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 242 "data/maps/Planet01_01/scripts.pory"
	lock
# 243 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 244 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 245 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 246 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 247 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 250 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 251 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_03, 2, 11, 2
# 252 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 253 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 258 "data/maps/Planet01_01/scripts.pory"
	lock
# 259 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 260 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 262 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 263 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 264 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 265 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 266 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 267 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 270 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 271 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 272 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 273 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 274 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 275 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 277 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 278 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 279 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 280 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 281 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 282 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 283 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 284 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 285 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 286 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 287 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 288 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 289 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 290 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 291 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 292 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 293 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 294 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 295 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 296 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 297 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 298 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 299 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 300 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 301 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 302 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 303 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 305 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 306 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 307 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 308 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 309 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 310 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 312 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 313 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 314 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 315 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 316 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 317 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 319 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 320 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 321 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 325 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 326 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 327 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 329 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 330 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 331 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 334 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 335 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 336 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 338 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 339 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 340 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 349 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 350 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 351 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 353 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 354 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 355 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 357 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 358 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 359 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 361 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 362 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 363 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 366 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 367 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 368 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 370 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 371 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 372 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 374 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 375 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 376 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 378 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 379 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 380 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 381 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 382 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 383 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 385 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 386 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 387 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 389 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 390 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 391 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 393 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 394 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 395 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 397 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 398 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 399 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 400 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 401 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 402 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 404 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 405 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 406 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 411 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 412 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 413 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 415 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 416 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 417 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 418 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 420 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 421 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 423 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 424 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 425 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 427 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 428 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 429 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 431 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 432 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 433 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 434 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 435 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 436 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 438 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 439 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 441 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 443 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 444 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 445 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 447 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 448 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 449 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 451 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 453 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 454 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 456 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 457 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 458 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 459 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 460 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 461 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 463 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 465 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 466 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 467 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 470 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 471 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 472 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 474 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 475 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 476 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 477 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 478 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 479 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 481 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 482 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 483 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 484 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 485 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 486 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 488 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 489 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 490 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 491 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 492 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 493 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 495 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 496 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 497 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 498 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 499 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 500 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 502 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 503 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 504 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 505 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 506 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 507 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 509 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 510 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 512 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 514 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 515 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 516 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 518 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 532 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 533 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 535 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 536 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 537 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 541 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 542 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 543 "data/maps/Planet01_01/scripts.pory"
	face_up
# 544 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 545 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 546 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 547 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 548 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 549 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 550 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 551 "data/maps/Planet01_01/scripts.pory"
	face_up
# 552 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 553 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 554 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 555 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 556 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 557 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 558 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 561 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 562 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 563 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 564 "data/maps/Planet01_01/scripts.pory"
	face_right
# 565 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 566 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 567 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 568 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 569 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 570 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 571 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 572 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 573 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 574 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 575 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 576 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 577 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 581 "data/maps/Planet01_01/scripts.pory"
	lockall
# 582 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 583 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 585 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 586 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 587 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 589 "data/maps/Planet01_01/scripts.pory"
	playse SE_BANG
# 591 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 593 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 594 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2_1
# 595 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 596 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 597 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2_2
# 598 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 600 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 602 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 603 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 604 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 606 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 607 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 608 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 610 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 611 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 612 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 614 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 615 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 616 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 618 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 619 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 620 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 622 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 623 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 624 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 628 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 629 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 630 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 632 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 633 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 634 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 636 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 637 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 638 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 640 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 641 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 643 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 644 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 645 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 647 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 649 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 650 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 651 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 652 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 653 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 654 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 656 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 657 "data/maps/Planet01_01/scripts.pory"
	playse SE_M_DETECT
# 658 "data/maps/Planet01_01/scripts.pory"
	waitse
# 659 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 660 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 662 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 663 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 664 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 666 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 667 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 668 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 669 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 670 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 671 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 672 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 673 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 674 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 675 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 676 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 677 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 678 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 679 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 680 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 682 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 684 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 685 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 686 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 688 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 689 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 690 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 691 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 692 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 693 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 695 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 696 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 697 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 698 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 699 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 700 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 701 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 703 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 704 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 706 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 707 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 708 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 711 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 712 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 713 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 714 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 715 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_1
# 716 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 718 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 719 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 720 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 724 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 725 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 726 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 728 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 729 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 731 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 732 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 733 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 736 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 737 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 738 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 741 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 742 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 743 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 744 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 747 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 745 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 751 "data/maps/Planet01_01/scripts.pory"
Movement_Player2_1:
# 752 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 753 "data/maps/Planet01_01/scripts.pory"
	face_right
# 754 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 755 "data/maps/Planet01_01/scripts.pory"
	delay_16
	step_end

# 758 "data/maps/Planet01_01/scripts.pory"
Movement_Player2_2:
# 759 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 760 "data/maps/Planet01_01/scripts.pory"
	face_left
# 761 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 762 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 763 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 766 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 767 "data/maps/Planet01_01/scripts.pory"
	face_up
# 768 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 769 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 772 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 773 "data/maps/Planet01_01/scripts.pory"
	face_up
# 774 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 775 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 778 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 779 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 780 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 781 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 784 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 785 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 786 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 787 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 790 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 791 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 794 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 795 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 798 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 799 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 800 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 803 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 804 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 805 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 808 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 809 "data/maps/Planet01_01/scripts.pory"
	face_down
# 810 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 811 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 812 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 813 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 814 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 815 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 816 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 817 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 818 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 819 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 820 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 821 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 822 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 823 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 824 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 825 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 826 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 829 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 830 "data/maps/Planet01_01/scripts.pory"
	face_up
# 831 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 832 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 833 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 834 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 835 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 839 "data/maps/Planet01_01/scripts.pory"
	lock
# 841 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 898 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 930 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 964 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 1008 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 1028 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 843 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 844 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 845 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 847 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 848 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 849 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 851 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 852 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 853 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 855 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 856 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 857 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 859 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 860 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 861 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 862 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 863 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 864 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 866 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 867 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 868 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 870 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 871 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 872 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 874 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 875 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 876 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 878 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 879 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 880 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 882 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 883 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 884 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 886 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 887 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 888 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 889 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 891 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 892 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 893 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 894 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 895 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 896 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 900 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 901 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 902 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 904 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 905 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 906 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 908 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 909 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 910 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 911 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 912 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 913 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 915 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 916 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 917 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 918 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 919 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 920 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 922 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 923 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 924 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 925 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 926 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 927 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 928 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 932 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 933 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 934 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 937 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 938 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 939 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 941 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 942 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 943 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 944 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 945 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 946 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 948 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 949 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 950 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 952 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 953 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 954 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 956 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 957 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 958 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 959 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 960 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 961 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 962 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 966 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 967 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 968 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 970 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 971 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 972 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 974 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 975 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 976 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 977 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 978 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 979 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 981 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 982 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_13
# 993 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_14
# 998 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_15
EventScript_TheCaptain_12:
# 1006 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 1010 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 1011 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1012 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
# 1014 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1015 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1016 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1018 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1019 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1020 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
# 1023 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1024 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1025 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1026 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 983 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
	goto EventScript_TheCaptain_12

EventScript_TheCaptain_14:
# 994 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
	goto EventScript_TheCaptain_12

EventScript_TheCaptain_15:
# 999 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_12


Planet01_01_MonstersRegular::
# 1033 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1034 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1035 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1036 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1037 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1038 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1043 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1044 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1045 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 1046 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1047 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1048 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1049 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1050 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1052 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1053 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1054 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1056 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1057 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1058 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1060 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1061 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1062 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1064 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1065 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1066 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1070 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1071 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1072 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1074 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1075 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1076 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1079 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1080 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1081 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1083 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1084 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1085 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1087 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1088 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1089 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1091 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1092 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1094 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1096 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1097 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1098 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1099 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1100 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1101 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1102 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1103 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1130 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1131 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1132 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1133 "data/maps/Planet01_01/scripts.pory"
	release
	end


EventScript_GlimmoraCatch_Planet01::
# 1138 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1139 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_WHITE
# 1140 "data/maps/Planet01_01/scripts.pory"
	special FlashCheck
# 1141 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_GlimmoraCatch_Planet01_1
# 1152 "data/maps/Planet01_01/scripts.pory"
	special GlimmoraCatch
# 1153 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1F
# 1154 "data/maps/Planet01_01/scripts.pory"
	removeobject 21
# 1155 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 1156 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_GLIMMORA
# 1157 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 1158 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_GlimmoraCatch_Planet01_Text_1
# 1160 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end

EventScript_GlimmoraCatch_Planet01_1:
# 1142 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1F
# 1143 "data/maps/Planet01_01/scripts.pory"
	removeobject 21
# 1144 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_WHITE
# 1145 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_GlimmoraCatch_Planet01_Text_0
# 1147 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_GLIMMORA
# 1148 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 1149 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


# 263 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 263 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 263 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 281 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 281 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 281 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 416 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 416 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 416 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 420 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 420 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 438 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 438 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 453 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 453 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 685 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 685 "data/maps/Planet01_01/scripts.pory"
	face_up
# 685 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
	step_end

# 715 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_1:
# 715 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 715 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1046 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1046 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1046 "data/maps/Planet01_01/scripts.pory"
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
# 135 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 164 "data/maps/Planet01_01/scripts.pory"
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
# 184 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 194 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: These relatives of Steelix\n"
	.string "have been digging deep into the\l"
	.string "planet's core.\p"
	.string "I wonder if it's the blue liquid they're\n"
	.string "exposed to that changed their type\l"
	.string "and color? I'll collect some samples!$"

Planet01_01_HintText04_Text_0:
# 206 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types;\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill our oxygen systems!$"

Planet01_01_HintText05_Text_0:
# 215 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: Some Pokémon would rather\n"
	.string "not fight, instead preferring to just\l"
	.string "attack and then run away.\p"
	.string "We befriended a Clefable, and it would\n"
	.string "use Flash to scare those Pokémon off!$"

Planet01_01_Carbink_Text_0:
# 230 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 235 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 247 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing blue-\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}When the horizon is dark, and the\n"
	.string "progress is slow...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 267 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 275 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 285 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 292 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 298 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 307 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 314 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 321 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my two human crew members just\l"
	.string "call me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 331 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough...\n"
	.string "But, if that's true, are your two crew\l"
	.string "members somewhere around here?$"

Planet01_01_RobotGreeting_Text_9:
# 340 "data/maps/Planet01_01/scripts.pory"
	.string "Afraid not, kid. My Emergency Protocol\n"
	.string "was activated, meaning the crew\l"
	.string "encountered a critical situation\l"
	.string "and were sent home.\p"
	.string "I'd elaborate, but the Emergency\n"
	.string "Protocol also encrypted my memory for\l"
	.string "security. That data is all top secret\l"
	.string "EOD company property!\p"
	.string "Even I can't access them!$"

Planet01_01_RobotGreeting_Text_10:
# 355 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 363 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 372 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 380 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 387 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 395 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 406 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 425 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 433 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 445 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 458 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 467 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 476 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 483 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 490 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 497 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 504 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 518 "data/maps/Planet01_01/scripts.pory"
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
# 604 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 612 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 624 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 634 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 651 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 690 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 698 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 708 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\l"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 720 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 733 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 845 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 853 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 861 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 868 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 876 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 884 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 893 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 902 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 910 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 917 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 924 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 934 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 943 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 950 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 958 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 968 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_16:
# 976 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_17:
# 983 "data/maps/Planet01_01/scripts.pory"
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

EventScript_TheCaptain_Text_18:
# 994 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_19:
# 999 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

EventScript_TheCaptain_Text_20:
# 1012 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_21:
# 1020 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

Planet01_01_Ending_Text_0:
# 1050 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1058 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1066 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1076 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1085 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1098 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1103 "data/maps/Planet01_01/scripts.pory"
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

EventScript_GlimmoraCatch_Planet01_Text_0:
# 1145 "data/maps/Planet01_01/scripts.pory"
	.string "Clefable's Flash protected your team\n"
	.string "from getting poisoned!$"

EventScript_GlimmoraCatch_Planet01_Text_1:
# 1158 "data/maps/Planet01_01/scripts.pory"
	.string "Glimmora's Poison Sting poisoned a\n"
	.string "party member! It fled!$"
