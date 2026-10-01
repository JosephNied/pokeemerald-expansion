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
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 259 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 260 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 261 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 262 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 265 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 266 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 267 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 268 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 269 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 270 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 272 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 273 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 274 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 275 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 276 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 277 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 278 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 279 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 280 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 281 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 282 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 283 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 284 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 285 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 286 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 287 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 288 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 289 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 290 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 291 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 292 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 293 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 294 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 295 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 296 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 297 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 299 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 300 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 301 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 302 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 303 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 304 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 306 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 307 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 308 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 309 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 310 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 311 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 313 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 314 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 315 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 318 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 319 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 320 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 322 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 323 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 324 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 327 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 328 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 329 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 331 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 332 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 333 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 342 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 343 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 344 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 346 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 347 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 348 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 350 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 351 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 352 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 354 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 355 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 356 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 359 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 360 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 361 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 363 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 364 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 365 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 367 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 368 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 369 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 371 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 372 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 373 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 374 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 375 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 376 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 378 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 379 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 380 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 382 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 383 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 384 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 386 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 387 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 388 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 390 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 391 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 392 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 394 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 395 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 397 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 398 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 399 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 404 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 405 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 406 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 408 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 409 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 410 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 412 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 413 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 415 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 416 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 417 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 419 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 420 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 421 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 423 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 424 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 425 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 426 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 427 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 428 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 430 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 431 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 433 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 435 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 436 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 437 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 439 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 440 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 441 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 443 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 445 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 446 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 448 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 449 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 450 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 451 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 452 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 453 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 455 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 457 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 458 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 459 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 462 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 463 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 464 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 466 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 467 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 468 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 469 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 470 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 471 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 473 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 474 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 475 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 476 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 477 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 478 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 480 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 481 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 482 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 483 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 484 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 485 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 487 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 488 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 489 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 490 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 491 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 492 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 494 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 495 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 496 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 497 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 498 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 499 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 501 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 502 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 504 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 506 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 507 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 508 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 510 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 524 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 525 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 526 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 530 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 531 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 532 "data/maps/Planet01_01/scripts.pory"
	face_up
# 533 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 534 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 535 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 536 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 537 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 538 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 539 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 540 "data/maps/Planet01_01/scripts.pory"
	face_up
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 543 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 544 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 545 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 546 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 547 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 550 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 551 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 552 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 553 "data/maps/Planet01_01/scripts.pory"
	face_right
# 554 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 555 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 556 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 557 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 558 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 559 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 560 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 561 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 562 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 563 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 564 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 565 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 566 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 570 "data/maps/Planet01_01/scripts.pory"
	lockall
# 571 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 572 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 574 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 575 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 576 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 578 "data/maps/Planet01_01/scripts.pory"
	playse SE_BANG
# 580 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 582 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 583 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 585 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 587 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 588 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 589 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 591 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 592 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 593 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 595 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 596 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 597 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 599 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 600 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 601 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 603 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 604 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 605 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 607 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 608 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 609 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 613 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 614 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 615 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 617 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 618 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 619 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 621 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 622 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 623 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 625 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 626 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 628 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 629 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 630 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 632 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 634 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 635 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 636 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 637 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 638 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 639 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 641 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 642 "data/maps/Planet01_01/scripts.pory"
	playse SE_M_DETECT
# 643 "data/maps/Planet01_01/scripts.pory"
	waitse
# 644 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 645 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 647 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 648 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 649 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 651 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 652 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 653 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 654 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 655 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 656 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 657 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 658 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 659 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 660 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 661 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 662 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 663 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 664 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 665 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 667 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 669 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 670 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 672 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 673 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 674 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 675 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 676 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 677 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 679 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 680 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 681 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 682 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 683 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 684 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 685 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 687 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 688 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 690 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 691 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 692 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 695 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 696 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 697 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 699 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 700 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 702 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 703 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 704 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 708 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 709 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 710 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 712 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 714 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 715 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 716 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 719 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 720 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 721 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 724 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 725 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 726 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 727 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 730 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 728 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 734 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 735 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 736 "data/maps/Planet01_01/scripts.pory"
	face_right
# 737 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 738 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 739 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 740 "data/maps/Planet01_01/scripts.pory"
	face_left
# 741 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 742 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 743 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 746 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 747 "data/maps/Planet01_01/scripts.pory"
	face_up
# 748 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 749 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 752 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 753 "data/maps/Planet01_01/scripts.pory"
	face_up
# 754 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 755 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 758 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 759 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 760 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 761 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 764 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 765 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 766 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 767 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 770 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 771 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 774 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 775 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 778 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 779 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 780 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 783 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 784 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 785 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 788 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 789 "data/maps/Planet01_01/scripts.pory"
	face_down
# 790 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 791 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 792 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 793 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 794 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 795 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 796 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 797 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 798 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 799 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 800 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 801 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 802 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 803 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 804 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 805 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 806 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 809 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 810 "data/maps/Planet01_01/scripts.pory"
	face_up
# 811 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 812 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 813 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 814 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 815 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 819 "data/maps/Planet01_01/scripts.pory"
	lock
# 821 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 878 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 910 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 944 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 964 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 1007 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 823 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 824 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 825 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 827 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 828 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 829 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 831 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 832 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 833 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 835 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 836 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 837 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 839 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 840 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 841 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 842 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 843 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 844 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 846 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 847 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 848 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 850 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 851 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 852 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 854 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 855 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 856 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 858 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 859 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 860 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 862 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 863 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 864 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 866 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 867 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 868 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 869 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 871 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 872 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 873 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 874 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 875 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 876 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 880 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 881 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 882 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 884 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 885 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 886 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 888 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 889 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 890 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 891 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 892 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 893 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 895 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 896 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 897 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 898 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 899 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 900 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 902 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 903 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 904 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 905 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 906 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 907 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 908 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 912 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 913 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 914 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 917 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 918 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 919 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 921 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 922 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 923 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 924 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 925 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 926 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 928 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 929 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 930 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 932 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 933 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 934 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 936 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 937 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 938 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 939 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 940 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 941 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 942 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 946 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 947 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 948 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 950 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 951 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 952 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 954 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 955 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 956 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 959 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 960 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 961 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 962 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 966 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 967 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 968 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
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
	msgbox EventScript_TheCaptain_Text_18
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
	goto_if_eq EventScript_TheCaptain_12
# 993 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 998 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 983 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 994 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 999 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 1012 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1013 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1014 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1015 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1016 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1017 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1022 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1023 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1024 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1025 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1026 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1027 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1028 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1030 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1031 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1032 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1034 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1035 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1036 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1038 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1039 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1040 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1042 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1043 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1044 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1048 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1049 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1050 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1052 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1053 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1054 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1057 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1058 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1059 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1061 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1062 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1063 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1065 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1066 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1067 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1069 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1070 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1072 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1074 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1075 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1076 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1077 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1078 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1079 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1080 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1081 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1108 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1109 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1110 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1111 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 258 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 258 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 258 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 275 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 275 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 275 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 408 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 408 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 408 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 412 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 412 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 430 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 430 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 445 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 445 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 699 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 699 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 699 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1024 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1024 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1024 "data/maps/Planet01_01/scripts.pory"
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
# 262 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 270 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 279 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 286 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 292 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 301 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 308 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 315 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my human crew just calls me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 324 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough... But,\n"
	.string "if that's true, is your crew somewhere \l"
	.string "around here?$"

Planet01_01_RobotGreeting_Text_9:
# 333 "data/maps/Planet01_01/scripts.pory"
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
# 348 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 356 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 365 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 373 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 380 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 388 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 399 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 417 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 425 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 437 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 450 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 459 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 468 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 475 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 482 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 489 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 496 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 510 "data/maps/Planet01_01/scripts.pory"
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
# 589 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 597 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 609 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 619 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 636 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 674 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 682 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 692 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\l"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 704 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 716 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 825 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 833 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 841 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 848 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 856 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 864 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 873 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 882 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 890 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 897 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 904 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 914 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 923 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 930 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 938 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 948 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 956 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 968 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_18:
# 976 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_19:
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

EventScript_TheCaptain_Text_20:
# 994 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_21:
# 999 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

Planet01_01_Ending_Text_0:
# 1028 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1036 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1044 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1054 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1063 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1076 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1081 "data/maps/Planet01_01/scripts.pory"
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
