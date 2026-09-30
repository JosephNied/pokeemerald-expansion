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
# 197 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 202 "data/maps/Planet01_01/scripts.pory"
	lock
# 203 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 206 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 211 "data/maps/Planet01_01/scripts.pory"
	lock
# 212 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 215 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 220 "data/maps/Planet01_01/scripts.pory"
	lock
# 221 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 222 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 223 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 224 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 225 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 226 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 227 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 228 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 229 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 230 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 231 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 232 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 237 "data/maps/Planet01_01/scripts.pory"
	lock
# 238 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 239 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 240 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 241 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 242 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 245 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 246 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 247 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 248 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 253 "data/maps/Planet01_01/scripts.pory"
	lock
# 254 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 255 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 257 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 258 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 259 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 260 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 261 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 264 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 265 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 266 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 267 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 268 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 269 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 271 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 272 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 273 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 274 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 275 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 276 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 277 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 278 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 279 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 280 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 281 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 282 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 283 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 284 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 285 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 286 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 287 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 288 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 289 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 290 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 291 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 292 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 293 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 294 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 295 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 296 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 298 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 299 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 300 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 301 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 302 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 303 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 305 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 306 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 307 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 308 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 309 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 310 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 312 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 313 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 314 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 317 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 318 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 319 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 321 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 322 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 323 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 326 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 327 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 328 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 330 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 331 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 332 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 341 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 342 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 343 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 345 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 346 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 347 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 349 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 350 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 351 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 353 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 354 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 355 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 358 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 359 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 360 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 362 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 363 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 364 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 366 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 367 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 368 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 370 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 371 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 372 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 373 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 374 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 375 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 377 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 378 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 379 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 381 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 382 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 383 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 385 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 386 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 387 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 389 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 390 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 391 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 393 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 394 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 396 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 397 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 398 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 403 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 404 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 405 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 407 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 408 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 409 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 411 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 412 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 414 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 415 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 416 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 418 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 419 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 420 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 422 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 423 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 424 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 425 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 426 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 427 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 429 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 430 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 432 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 434 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 435 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 436 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 438 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 439 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 440 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 442 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 444 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 445 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 447 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 448 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 449 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 450 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 451 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 452 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 454 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 456 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 457 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 458 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 461 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 462 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 463 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 465 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 466 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 467 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 468 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 469 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 470 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 472 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 473 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 474 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 475 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 476 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 477 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 479 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 480 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 481 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 482 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 483 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 484 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 486 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 487 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 488 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 489 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 490 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 491 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 493 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 494 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 495 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 496 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 497 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 498 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 500 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 501 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 503 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 505 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 506 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 507 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 509 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 523 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 524 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 525 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 529 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 530 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 531 "data/maps/Planet01_01/scripts.pory"
	face_up
# 532 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 533 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 534 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 535 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 536 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 537 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 538 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 539 "data/maps/Planet01_01/scripts.pory"
	face_up
# 540 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 543 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 544 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 545 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 546 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 549 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 550 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 551 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 552 "data/maps/Planet01_01/scripts.pory"
	face_right
# 553 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 554 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 555 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 556 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 557 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 558 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 559 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 560 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 561 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 562 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 563 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 564 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 565 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 569 "data/maps/Planet01_01/scripts.pory"
	lockall
# 570 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 571 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 573 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 574 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 575 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 577 "data/maps/Planet01_01/scripts.pory"
	playse SE_BANG
# 579 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 581 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 582 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 584 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 586 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 587 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 588 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 590 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 591 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 592 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 594 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 595 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 596 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 598 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 599 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 600 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 602 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 603 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 604 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 606 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 607 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 608 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 612 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 613 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 614 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 616 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 617 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 618 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 620 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 621 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 622 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 624 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 625 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 627 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 628 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 629 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 631 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 633 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 634 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 635 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 636 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 637 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 638 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 640 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 641 "data/maps/Planet01_01/scripts.pory"
	playse SE_M_DETECT
# 642 "data/maps/Planet01_01/scripts.pory"
	waitse
# 643 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 644 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 646 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 647 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 648 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 650 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 651 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 652 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 653 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 654 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 655 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 656 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 657 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 658 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 659 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 660 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 661 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 662 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 663 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 664 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 666 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 668 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 669 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 671 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 672 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 673 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 674 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 675 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 676 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 678 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 679 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 680 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 681 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 682 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 683 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 684 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 686 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 687 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 689 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 690 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 691 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 694 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 695 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 696 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 698 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 699 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 701 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 702 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 703 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 707 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 708 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 709 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 711 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 713 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 714 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 715 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 718 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 719 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 720 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 723 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 724 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 725 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 726 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 729 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 727 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 733 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 734 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 735 "data/maps/Planet01_01/scripts.pory"
	face_right
# 736 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 737 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 738 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 739 "data/maps/Planet01_01/scripts.pory"
	face_left
# 740 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 741 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 742 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 745 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 746 "data/maps/Planet01_01/scripts.pory"
	face_up
# 747 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 748 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 751 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 752 "data/maps/Planet01_01/scripts.pory"
	face_up
# 753 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 754 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 757 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 758 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 759 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 760 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 763 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 764 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 765 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 766 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 769 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 770 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 773 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 774 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 777 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 778 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 779 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 782 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 783 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 784 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 787 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 788 "data/maps/Planet01_01/scripts.pory"
	face_down
# 789 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 790 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 791 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 792 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 793 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 794 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 795 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 796 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 797 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 798 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 799 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 800 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 801 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 802 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 803 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 804 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 805 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 808 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 809 "data/maps/Planet01_01/scripts.pory"
	face_up
# 810 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 811 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 812 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 813 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 814 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 818 "data/maps/Planet01_01/scripts.pory"
	lock
# 820 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 877 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 909 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 943 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 963 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 1006 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 822 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 823 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 824 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 826 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 827 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 828 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 830 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 831 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 832 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 834 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 835 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 836 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 838 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 839 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 840 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 841 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 842 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 843 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 845 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 846 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 847 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 849 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 850 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 851 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 853 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 854 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 855 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 857 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 858 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 859 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 861 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 862 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 863 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 865 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 866 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 867 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 868 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 870 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 871 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 872 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 873 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 874 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 875 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 879 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 880 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 881 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 883 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 884 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 885 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 887 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 888 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 889 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 890 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 891 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 892 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 894 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 895 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 896 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 897 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 898 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 899 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 901 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 902 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 903 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 904 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 905 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 906 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 907 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 911 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 912 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 913 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 916 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 917 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 918 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 920 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 921 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 922 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 923 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 924 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 925 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 927 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 928 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 929 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 931 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 932 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 933 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 935 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 936 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 937 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 938 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 939 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 940 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 941 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 945 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 946 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 947 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 949 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 950 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 951 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 953 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 954 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 955 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 958 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 959 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 960 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 961 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 965 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 966 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 967 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 969 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 970 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 971 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 973 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 974 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 975 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
# 976 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 977 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 978 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 980 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 981 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 992 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 997 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 982 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 993 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 998 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 1011 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1012 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1013 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1014 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1015 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1016 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1021 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1022 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1023 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1024 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1025 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1026 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1027 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1029 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1030 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1031 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1033 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1034 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1035 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1037 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1038 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1039 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1041 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1042 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1043 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
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
	msgbox Planet01_01_Ending_Text_3
# 1056 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1057 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1058 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1060 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1061 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1062 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1064 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1065 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1066 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1068 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1069 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1071 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1073 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1074 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1075 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1076 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1077 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1078 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1079 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1080 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1107 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1108 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1109 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1110 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 257 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 257 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 257 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 274 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 274 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 274 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 407 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 407 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 407 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 411 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 411 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 429 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 429 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 444 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 444 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 698 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 698 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 698 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1023 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1023 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1023 "data/maps/Planet01_01/scripts.pory"
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
	.string "Biologist: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples!$"

Planet01_01_HintText04_Text_0:
# 203 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types;\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill our oxygen systems!$"

Planet01_01_HintText05_Text_0:
# 212 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: Even with the low gravity, I\n"
	.string "can't jump up the tall cliffs. I wonder\l"
	.string "how else we might get up there...$"

Planet01_01_Carbink_Text_0:
# 225 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 230 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 242 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing red-\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}When the horizon is dark, and the\n"
	.string "progress is slow...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 261 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 269 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 278 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 285 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 291 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 300 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 307 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 314 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my human crew just calls me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 323 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough... But,\n"
	.string "if that's true, is your crew somewhere \l"
	.string "around here?$"

Planet01_01_RobotGreeting_Text_9:
# 332 "data/maps/Planet01_01/scripts.pory"
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
# 347 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 355 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 364 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 372 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 379 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 387 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 398 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 416 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 424 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 436 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 449 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 458 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 467 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 474 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 481 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 488 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 495 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 509 "data/maps/Planet01_01/scripts.pory"
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
# 588 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 596 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 608 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 618 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 635 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 673 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 681 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 691 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\l"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 703 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 715 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 824 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 832 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 840 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 847 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 855 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 863 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 872 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 881 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 889 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 896 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 903 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 913 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 922 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 929 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 937 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 947 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 955 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 967 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_18:
# 975 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_19:
# 982 "data/maps/Planet01_01/scripts.pory"
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
# 993 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_21:
# 998 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

Planet01_01_Ending_Text_0:
# 1027 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1035 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1043 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1053 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1062 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1075 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1080 "data/maps/Planet01_01/scripts.pory"
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
