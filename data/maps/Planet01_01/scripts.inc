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
# 218 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 223 "data/maps/Planet01_01/scripts.pory"
	lock
# 224 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 225 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 226 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 227 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 228 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 229 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 230 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 231 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 232 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 233 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 234 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 235 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 240 "data/maps/Planet01_01/scripts.pory"
	lock
# 241 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 242 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 243 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 244 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 245 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 248 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 249 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_03, 2, 11, 2
# 250 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 251 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 256 "data/maps/Planet01_01/scripts.pory"
	lock
# 257 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 258 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 260 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 261 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 262 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 263 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 264 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 265 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 268 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 269 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 270 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 271 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 272 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 273 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 275 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 276 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 277 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 278 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 279 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 280 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 281 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 282 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 283 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 284 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 285 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 286 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 287 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 288 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 289 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 290 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 291 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 292 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 293 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 294 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 295 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 296 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 297 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 298 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 299 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 300 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 301 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 303 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 304 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 305 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 306 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 307 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 308 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 310 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 311 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 312 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 313 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 314 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 315 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 317 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 318 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 319 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 322 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 323 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 324 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 326 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 327 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 328 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 331 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 332 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 333 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 335 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 336 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 337 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 346 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 347 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 348 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 350 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 351 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 352 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 354 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 355 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 356 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 358 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 359 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 360 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 363 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 364 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 365 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 367 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 368 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 369 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 371 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 372 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 373 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 375 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 376 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 377 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 378 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 379 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 380 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 382 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 383 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 384 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 386 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 387 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 388 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 390 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 391 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 392 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 394 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 395 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 396 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 397 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 398 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 399 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 401 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 402 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 403 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 408 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 409 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 410 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 412 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 413 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 414 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 415 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 417 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 418 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 420 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 421 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 422 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 424 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 425 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 426 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 428 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 429 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 430 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 431 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 432 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 433 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 435 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 436 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 438 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 440 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 441 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 442 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 444 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 445 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 446 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 448 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 450 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 451 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 453 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 454 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 455 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 456 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 457 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 458 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 460 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 462 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 463 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 464 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 467 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 468 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 469 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 471 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 472 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 473 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 474 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 475 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 476 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 478 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 479 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 480 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 481 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 482 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 483 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 485 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 486 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 487 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 488 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 489 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 490 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 492 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 493 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 494 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 495 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 496 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 497 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 499 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 500 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 501 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 502 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 503 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 504 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 506 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 507 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 509 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 511 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 512 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 513 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 515 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 529 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 530 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 532 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 533 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 534 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 538 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 539 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 540 "data/maps/Planet01_01/scripts.pory"
	face_up
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 543 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 544 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 545 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 546 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 547 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 548 "data/maps/Planet01_01/scripts.pory"
	face_up
# 549 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 550 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 551 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 552 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 553 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 554 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 555 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 558 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 559 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 560 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 561 "data/maps/Planet01_01/scripts.pory"
	face_right
# 562 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 563 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 564 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 565 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 566 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 567 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 568 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 569 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 570 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 571 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 572 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 573 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 574 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 578 "data/maps/Planet01_01/scripts.pory"
	lockall
# 579 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 580 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 582 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 583 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 584 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 586 "data/maps/Planet01_01/scripts.pory"
	playse SE_BANG
# 588 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 590 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 591 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2_1
# 592 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 593 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 594 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2_2
# 595 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 597 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 599 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 600 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 601 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 603 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 604 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 605 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 607 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 608 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 609 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 611 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 612 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 613 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 615 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 616 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 617 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 619 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 620 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 621 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 625 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 626 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 627 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 629 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 630 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 631 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 633 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 634 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 635 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 637 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 638 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 640 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 641 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 642 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 644 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 646 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 647 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 648 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 649 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 650 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 651 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 653 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 654 "data/maps/Planet01_01/scripts.pory"
	playse SE_M_DETECT
# 655 "data/maps/Planet01_01/scripts.pory"
	waitse
# 656 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 657 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 659 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 660 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 661 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 663 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 664 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 665 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 666 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 667 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 668 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 669 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 670 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 671 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 672 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 673 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 674 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 675 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 676 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 677 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 679 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 681 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 682 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 683 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 685 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 686 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 687 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 688 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 689 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 690 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 692 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 693 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 694 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 695 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 696 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 697 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 698 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 700 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 701 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 703 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 704 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 705 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 708 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 709 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 710 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 711 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 712 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_1
# 713 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 715 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 716 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 717 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 721 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 722 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 723 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 725 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 726 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 728 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 729 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 730 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 733 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 734 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 735 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 738 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 739 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 740 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 741 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 744 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 742 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 748 "data/maps/Planet01_01/scripts.pory"
Movement_Player2_1:
# 749 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 750 "data/maps/Planet01_01/scripts.pory"
	face_right
# 751 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 752 "data/maps/Planet01_01/scripts.pory"
	delay_16
	step_end

# 755 "data/maps/Planet01_01/scripts.pory"
Movement_Player2_2:
# 756 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 757 "data/maps/Planet01_01/scripts.pory"
	face_left
# 758 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 759 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 760 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 763 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 764 "data/maps/Planet01_01/scripts.pory"
	face_up
# 765 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 766 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 769 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 770 "data/maps/Planet01_01/scripts.pory"
	face_up
# 771 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 772 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 775 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 776 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 777 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 778 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 781 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 782 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 783 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 784 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 787 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 788 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 791 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 792 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 795 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 796 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 797 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 800 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 801 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 802 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 805 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 806 "data/maps/Planet01_01/scripts.pory"
	face_down
# 807 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 808 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 809 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 810 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 811 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 812 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 813 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 814 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 815 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 816 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 817 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 818 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 819 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 820 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 821 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 822 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 823 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 826 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 827 "data/maps/Planet01_01/scripts.pory"
	face_up
# 828 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 829 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 830 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 831 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 832 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 836 "data/maps/Planet01_01/scripts.pory"
	lock
# 838 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 895 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 927 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 961 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 981 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 1024 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 840 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 841 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 842 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 844 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 845 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 846 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 848 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 849 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 850 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 852 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 853 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 854 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 856 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 857 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 858 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 859 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 860 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 861 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 863 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 864 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 865 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 867 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 868 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 869 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 871 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 872 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 873 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 875 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 876 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 877 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 879 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 880 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 881 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 883 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 884 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 885 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 886 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 888 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 889 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 890 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 891 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 892 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 893 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 897 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 898 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 899 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 901 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 902 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 903 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 905 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 906 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 907 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 908 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 909 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 910 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 912 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 913 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 914 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 915 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 916 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 917 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 919 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 920 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 921 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 922 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 923 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 924 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 925 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 929 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 930 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 931 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 934 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 935 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 936 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 938 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 939 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 940 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 941 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 942 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 943 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 945 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 946 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 947 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
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
	msgbox EventScript_TheCaptain_Text_14
# 956 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 957 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 958 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 959 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 963 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 964 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 965 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
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
	msgbox EventScript_TheCaptain_Text_16
# 976 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 977 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 978 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 979 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 983 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 984 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 985 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 987 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 988 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 989 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 991 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 992 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 993 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
# 994 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 995 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 996 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 998 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 999 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 1010 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 1015 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 1000 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 1011 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 1016 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 1029 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1030 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1031 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1032 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1033 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1034 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1039 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1040 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1041 "data/maps/Planet01_01/scripts.pory"
	playse SE_PIN
# 1042 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1043 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1044 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1045 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1046 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
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
	msgbox Planet01_01_Ending_Text_1
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
	msgbox Planet01_01_Ending_Text_2
# 1066 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1067 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1068 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1070 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1071 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1072 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1075 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1076 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1077 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1079 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1080 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1081 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1083 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1084 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1085 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1087 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1088 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1090 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1092 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1093 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1094 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1095 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1096 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1097 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1098 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1099 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1126 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1127 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1128 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1129 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 261 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 261 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 261 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 279 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 279 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 279 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 413 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 413 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 413 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 417 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 417 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 435 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 435 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 450 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 450 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 682 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 682 "data/maps/Planet01_01/scripts.pory"
	face_up
# 682 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
	step_end

# 712 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_1:
# 712 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 712 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1042 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1042 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1042 "data/maps/Planet01_01/scripts.pory"
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
	.string "Ops Lead: Even with the low gravity, I\n"
	.string "can't jump up the tall cliffs. I wonder\l"
	.string "how else we might get up there...$"

Planet01_01_Carbink_Text_0:
# 228 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 233 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 245 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing blue-\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}When the horizon is dark, and the\n"
	.string "progress is slow...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 265 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 273 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 283 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 290 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 296 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 305 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 312 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 319 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my human crew just calls me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 328 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough... But,\n"
	.string "if that's true, is your crew somewhere \l"
	.string "around here?$"

Planet01_01_RobotGreeting_Text_9:
# 337 "data/maps/Planet01_01/scripts.pory"
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
# 352 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 360 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 369 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 377 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 384 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 392 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 403 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 422 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 430 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 442 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 455 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 464 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 473 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 480 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 487 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 494 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 501 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 515 "data/maps/Planet01_01/scripts.pory"
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
# 601 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 609 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 621 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 631 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 648 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 687 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 695 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 705 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\l"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 717 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 730 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 842 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 850 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 858 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 865 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 873 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 881 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 890 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 899 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 907 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 914 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 921 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 931 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 940 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 947 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 955 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 965 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 973 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 985 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_18:
# 993 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_19:
# 1000 "data/maps/Planet01_01/scripts.pory"
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
# 1011 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_21:
# 1016 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

Planet01_01_Ending_Text_0:
# 1046 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1054 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1062 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1072 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1081 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1094 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1099 "data/maps/Planet01_01/scripts.pory"
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
