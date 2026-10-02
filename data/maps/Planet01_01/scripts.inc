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
	removeobject 2
# 152 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 153 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 154 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 155 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 156 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 157 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 162 "data/maps/Planet01_01/scripts.pory"
	lock
# 163 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 177 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 182 "data/maps/Planet01_01/scripts.pory"
	lock
# 183 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 187 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 192 "data/maps/Planet01_01/scripts.pory"
	lock
# 193 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 199 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 204 "data/maps/Planet01_01/scripts.pory"
	lock
# 205 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 208 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 213 "data/maps/Planet01_01/scripts.pory"
	lock
# 214 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 217 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 222 "data/maps/Planet01_01/scripts.pory"
	lock
# 223 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 224 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 225 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 226 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 227 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 228 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 229 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 230 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 231 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 232 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 233 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 234 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 239 "data/maps/Planet01_01/scripts.pory"
	lock
# 240 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 241 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 242 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 243 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 244 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 247 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 248 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 249 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 250 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 255 "data/maps/Planet01_01/scripts.pory"
	lock
# 256 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 257 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 259 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 260 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 261 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 262 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 263 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 264 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 267 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 268 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 269 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 270 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 271 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 272 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 274 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 275 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 276 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 277 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 278 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 279 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 280 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 281 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 282 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 283 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 284 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 285 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 286 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 287 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 288 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 289 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 290 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 291 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 292 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 293 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 294 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 295 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 296 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 297 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 298 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 299 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 300 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 302 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 303 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 304 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 305 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 306 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 307 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 309 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 310 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 311 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 312 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 313 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 314 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 316 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 317 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 318 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 321 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 322 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 323 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 325 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 326 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 327 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 330 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 331 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 332 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 334 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 335 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 336 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 345 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 346 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 347 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 349 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 350 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 351 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 353 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 354 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 355 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 357 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 358 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 359 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 362 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 363 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 364 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 366 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 367 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 368 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 370 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 371 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 372 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 374 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 375 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 376 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 377 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 378 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 379 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 381 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 382 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 383 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 385 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 386 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 387 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 389 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 390 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 391 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 393 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 394 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 395 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 396 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 397 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 398 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 400 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 401 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 402 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 407 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 408 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 409 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 411 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 412 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 413 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 414 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 416 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 417 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 419 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 420 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 421 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 423 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 424 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 425 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 427 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 428 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 429 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 430 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 431 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 432 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 434 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 435 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 437 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 439 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 440 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 441 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 443 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 444 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 445 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 447 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 449 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 450 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 452 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 453 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 454 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 455 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 456 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 457 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 459 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 461 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 462 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 463 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 466 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 467 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 468 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 470 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 471 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 472 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 473 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 474 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 475 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 477 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 478 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 479 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 480 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 481 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 482 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 484 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 485 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 486 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 487 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 488 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 489 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 491 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 492 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 493 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 494 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 495 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 496 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 498 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 499 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 500 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 501 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 502 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 503 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 505 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 506 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 508 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 510 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 511 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 512 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 514 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 528 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 529 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 531 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 532 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 533 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 537 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 538 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 539 "data/maps/Planet01_01/scripts.pory"
	face_up
# 540 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 543 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 544 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 545 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 546 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 547 "data/maps/Planet01_01/scripts.pory"
	face_up
# 548 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 549 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 550 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 551 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 552 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 553 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 554 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 557 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 558 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 559 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 560 "data/maps/Planet01_01/scripts.pory"
	face_right
# 561 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 562 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 563 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 564 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 565 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 566 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 567 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 568 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 569 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 570 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 571 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 572 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 573 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 577 "data/maps/Planet01_01/scripts.pory"
	lockall
# 578 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 579 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 581 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 582 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 583 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 585 "data/maps/Planet01_01/scripts.pory"
	playse SE_BANG
# 587 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 589 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 590 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2_1
# 591 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 592 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 593 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2_2
# 594 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 596 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 598 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 599 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 600 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 602 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 603 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 604 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 606 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 607 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 608 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 610 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 611 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 612 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 614 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 615 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 616 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 618 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 619 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 620 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 624 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 625 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 626 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 628 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 629 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 630 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 632 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 633 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 634 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 636 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 637 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 639 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 640 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 641 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 643 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 645 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 646 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 647 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 648 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 649 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 650 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 652 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 653 "data/maps/Planet01_01/scripts.pory"
	playse SE_M_DETECT
# 654 "data/maps/Planet01_01/scripts.pory"
	waitse
# 655 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 656 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 658 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 659 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 660 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 662 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 663 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 664 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 665 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 666 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 667 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 668 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 669 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 670 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 671 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 672 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 673 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 674 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 675 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 676 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 678 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 680 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 681 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 682 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 684 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 685 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 686 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 687 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 688 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 689 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 691 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 692 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 693 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 694 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 695 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 696 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 697 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 699 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 700 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 702 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 703 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 704 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 707 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 708 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 709 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 710 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 711 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_1
# 712 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 714 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 715 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 716 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 720 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 721 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 722 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 724 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 725 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 727 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 728 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 729 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 732 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 733 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 734 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 737 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 738 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 739 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 740 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 743 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 741 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 747 "data/maps/Planet01_01/scripts.pory"
Movement_Player2_1:
# 748 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 749 "data/maps/Planet01_01/scripts.pory"
	face_right
# 750 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 751 "data/maps/Planet01_01/scripts.pory"
	delay_16
	step_end

# 754 "data/maps/Planet01_01/scripts.pory"
Movement_Player2_2:
# 755 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 756 "data/maps/Planet01_01/scripts.pory"
	face_left
# 757 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 758 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 759 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 762 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 763 "data/maps/Planet01_01/scripts.pory"
	face_up
# 764 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 765 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 768 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 769 "data/maps/Planet01_01/scripts.pory"
	face_up
# 770 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 771 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 774 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 775 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 776 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 777 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 780 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 781 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 782 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 783 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 786 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 787 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 790 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 791 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 794 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 795 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 796 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 799 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 800 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 801 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 804 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 805 "data/maps/Planet01_01/scripts.pory"
	face_down
# 806 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 807 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 808 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 809 "data/maps/Planet01_01/scripts.pory"
	delay_4
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
	delay_8
# 816 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 817 "data/maps/Planet01_01/scripts.pory"
	delay_8
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
	step_end

# 825 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 826 "data/maps/Planet01_01/scripts.pory"
	face_up
# 827 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 828 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 829 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 830 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 831 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 835 "data/maps/Planet01_01/scripts.pory"
	lock
# 837 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 894 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 926 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 960 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 980 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 1023 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 839 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 840 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 841 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 843 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 844 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 845 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 847 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 848 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 849 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 851 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 852 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 853 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 855 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 856 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 857 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
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
	msgbox EventScript_TheCaptain_Text_3
# 866 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 867 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 868 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 870 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 871 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 872 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 874 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 875 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 876 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 878 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 879 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 880 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 882 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 883 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 884 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 885 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 887 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 888 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 889 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 890 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 891 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 892 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 896 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 897 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 898 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 900 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 901 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 902 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 904 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 905 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 906 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 907 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 908 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 909 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 911 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 912 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 913 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
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
	msgbox EventScript_TheCaptain_Text_10
# 921 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 922 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 923 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 924 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 928 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 929 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 930 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 933 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 934 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 935 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 937 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 938 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 939 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 940 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 941 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 942 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 944 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 945 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 946 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 948 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 949 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 950 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 952 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 953 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 954 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 955 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 956 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 957 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 958 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 962 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 963 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 964 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 966 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 967 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 968 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 970 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 971 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 972 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 975 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 976 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 977 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 978 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 982 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 983 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 984 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 986 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 987 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 988 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 990 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 991 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 992 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
# 993 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 994 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 995 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 997 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 998 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 1009 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 1014 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 999 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 1010 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 1015 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 1028 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1029 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1030 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1031 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1032 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1033 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1038 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1039 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1040 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 1041 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1042 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1043 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1044 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1045 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1047 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1048 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1049 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1051 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1052 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1053 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1055 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1056 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1057 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1059 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1060 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1061 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1065 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1066 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1067 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1069 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1070 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1071 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1074 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1075 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1076 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1078 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1079 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1080 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1082 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1083 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1084 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1086 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1087 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1089 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1091 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1092 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1093 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1094 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1095 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1096 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1097 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1098 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1125 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1126 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1127 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1128 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 260 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 260 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 260 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 278 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 278 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 278 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 412 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 412 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 412 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 416 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 416 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 434 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 434 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 449 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 449 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 681 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 681 "data/maps/Planet01_01/scripts.pory"
	face_up
# 681 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
	step_end

# 711 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_1:
# 711 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 711 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1041 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1041 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1041 "data/maps/Planet01_01/scripts.pory"
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
# 163 "data/maps/Planet01_01/scripts.pory"
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
# 183 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 193 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: These relatives of Steelix\n"
	.string "have been digging deep into the\l"
	.string "planet's core.\p"
	.string "I wonder if it's the blue liquid they're\n"
	.string "exposed to that changed their type\l"
	.string "and color? I'll collect some samples!$"

Planet01_01_HintText04_Text_0:
# 205 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types;\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill our oxygen systems!$"

Planet01_01_HintText05_Text_0:
# 214 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: Even with the low gravity, I\n"
	.string "can't jump up the tall cliffs. I wonder\l"
	.string "how else we might get up there...$"

Planet01_01_Carbink_Text_0:
# 227 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 232 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 244 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing red-\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}When the horizon is dark, and the\n"
	.string "progress is slow...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 264 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 272 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 282 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 289 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 295 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 304 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 311 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 318 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my human crew just calls me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 327 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough... But,\n"
	.string "if that's true, is your crew somewhere \l"
	.string "around here?$"

Planet01_01_RobotGreeting_Text_9:
# 336 "data/maps/Planet01_01/scripts.pory"
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
# 351 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 359 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 368 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 376 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 383 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 391 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 402 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 421 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 429 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 441 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 454 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 463 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 472 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 479 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 486 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 493 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 500 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 514 "data/maps/Planet01_01/scripts.pory"
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
# 600 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 608 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 620 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 630 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 647 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 686 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 694 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 704 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\l"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 716 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 729 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 841 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 849 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 857 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 864 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 872 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 880 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 889 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 898 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 906 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 913 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 920 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 930 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 939 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 946 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 954 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 964 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 972 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 984 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_18:
# 992 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_19:
# 999 "data/maps/Planet01_01/scripts.pory"
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
# 1010 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_21:
# 1015 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

Planet01_01_Ending_Text_0:
# 1045 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1053 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1061 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1071 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1080 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1093 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1098 "data/maps/Planet01_01/scripts.pory"
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
