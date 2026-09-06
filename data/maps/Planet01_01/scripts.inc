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
	releaseall
	end


Planet01_01_AirExpired::
# 97 "data/maps/Planet01_01/scripts.pory"
	lockall
# 98 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 99 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 100 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 101 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 106 "data/maps/Planet01_01/scripts.pory"
	lockall
# 107 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 108 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 109 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 110 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 112 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1
# 113 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 114 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 115 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 116 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 117 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 118 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 119 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 120 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 125 "data/maps/Planet01_01/scripts.pory"
	lockall
# 126 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 127 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 128 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 129 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 131 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 132 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 133 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 134 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 135 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 136 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 137 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 138 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 139 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 144 "data/maps/Planet01_01/scripts.pory"
	lock
# 145 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 158 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 163 "data/maps/Planet01_01/scripts.pory"
	lock
# 164 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 168 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 173 "data/maps/Planet01_01/scripts.pory"
	lock
# 174 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 179 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 184 "data/maps/Planet01_01/scripts.pory"
	lock
# 185 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 188 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 193 "data/maps/Planet01_01/scripts.pory"
	lock
# 194 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 197 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 202 "data/maps/Planet01_01/scripts.pory"
	lock
# 203 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 204 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 205 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 206 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 207 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 208 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 209 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 210 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 211 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 212 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 213 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 214 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 219 "data/maps/Planet01_01/scripts.pory"
	lock
# 220 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 221 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 222 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 223 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 224 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 225 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 226 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 227 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 228 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 233 "data/maps/Planet01_01/scripts.pory"
	lock
# 234 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 235 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 237 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 238 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 239 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 240 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 241 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 244 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 245 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 246 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 247 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 248 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 249 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 251 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 252 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 253 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 254 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 255 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 256 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 257 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 258 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 259 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 260 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 261 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 262 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 263 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 264 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 265 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
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
	msgbox Planet01_01_RobotGreeting_Text_4
# 272 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 273 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 274 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 275 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 276 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 278 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 279 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 280 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 281 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 282 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 283 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 285 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 286 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 287 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 288 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 289 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 290 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 292 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 293 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 294 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 297 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 298 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 299 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 301 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 302 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 303 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 306 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 307 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 308 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 310 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 311 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 312 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 321 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 322 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 323 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 325 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 326 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 327 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
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
	msgbox Planet01_01_RobotGreeting_Text_11
# 338 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 339 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 340 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 342 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 343 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 344 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 346 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 347 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 348 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 350 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 351 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 352 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 353 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 354 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 355 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 357 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 358 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 359 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 361 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 362 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 363 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 365 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 366 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 367 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 369 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 370 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 371 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 373 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 374 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 376 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 377 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 378 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 383 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 384 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 385 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 387 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 388 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 389 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 391 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 392 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 394 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 395 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 396 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 398 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 399 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 400 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 402 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 403 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 404 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 405 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 406 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 407 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 409 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 410 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 412 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 414 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 415 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 416 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 418 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 419 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 420 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 422 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 424 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 425 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 427 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 428 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 429 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 430 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 431 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 432 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 434 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 436 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 437 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 438 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 441 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 442 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 443 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 445 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 446 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 447 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 448 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 449 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 450 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 452 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 453 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 454 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 455 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 456 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 457 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 459 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 460 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 461 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 462 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 463 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 464 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 466 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 467 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 468 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 469 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 470 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 471 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 473 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 474 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 475 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 476 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 477 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 478 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 480 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 481 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 483 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 485 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 486 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 487 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 489 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 502 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 503 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 504 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 508 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 509 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 510 "data/maps/Planet01_01/scripts.pory"
	face_up
# 511 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 512 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 513 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 514 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 515 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 516 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 517 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 518 "data/maps/Planet01_01/scripts.pory"
	face_up
# 519 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 520 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 521 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 522 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 523 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 524 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 525 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 528 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 529 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 530 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 531 "data/maps/Planet01_01/scripts.pory"
	face_right
# 532 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 533 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 534 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 535 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 536 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 537 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 538 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 539 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 540 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 543 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 544 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 548 "data/maps/Planet01_01/scripts.pory"
	lockall
# 549 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 551 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 552 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 553 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 555 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 557 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 558 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 560 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 562 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 563 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 564 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 566 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 567 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 568 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 570 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 571 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 572 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 574 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 575 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 576 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 578 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 579 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 580 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 582 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 583 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 584 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 588 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 589 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 590 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 592 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 593 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 594 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 596 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 597 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 598 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 600 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 601 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 602 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 604 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 606 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 607 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 608 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 609 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 610 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 611 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 613 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 614 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 615 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 617 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 618 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 619 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 621 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 622 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 623 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 624 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 625 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 626 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 627 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 628 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 629 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 630 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 631 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 632 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 633 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 634 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 635 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 637 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 639 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 640 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 642 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 643 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 644 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 645 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 646 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 647 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 649 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 650 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 651 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 652 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 653 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 654 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 655 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 657 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 658 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 660 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 661 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 662 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 665 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 666 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 667 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 669 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 670 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 672 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 673 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 674 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 678 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 679 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 680 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 682 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 684 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 685 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 686 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 689 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 690 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 691 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 694 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 695 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 696 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 697 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 700 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 698 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 704 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 705 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 706 "data/maps/Planet01_01/scripts.pory"
	face_right
# 707 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 708 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 709 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 710 "data/maps/Planet01_01/scripts.pory"
	face_left
# 711 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 712 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 713 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 716 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 717 "data/maps/Planet01_01/scripts.pory"
	face_up
# 718 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 719 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 722 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 723 "data/maps/Planet01_01/scripts.pory"
	face_up
# 724 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 725 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 728 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 729 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 730 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 731 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 734 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 735 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 736 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 737 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 740 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 741 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 744 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 745 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 748 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 749 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 750 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 753 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 754 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 755 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 758 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 759 "data/maps/Planet01_01/scripts.pory"
	face_down
# 760 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 761 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 762 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 763 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 764 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 765 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 766 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 767 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 768 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 769 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 770 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 771 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 772 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 773 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 774 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 775 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 776 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 779 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 780 "data/maps/Planet01_01/scripts.pory"
	face_up
# 781 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 782 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 783 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 784 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 785 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 789 "data/maps/Planet01_01/scripts.pory"
	lock
# 791 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 848 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 880 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 914 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 934 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 977 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 793 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 794 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 795 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 797 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 798 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 799 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 801 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 802 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 803 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 805 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 806 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 807 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 809 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 810 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 811 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 812 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 813 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 814 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 816 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 817 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 818 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 820 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 821 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 822 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 824 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 825 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 826 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 828 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 829 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 830 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 832 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 833 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 834 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 836 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 837 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 838 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 839 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 841 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 842 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 843 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 844 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 845 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 846 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 850 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 851 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 852 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 854 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 855 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 856 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 858 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 859 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 860 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 861 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 862 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 863 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 865 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 866 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 867 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 868 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 869 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 870 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 872 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 873 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 874 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 875 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 876 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 877 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 878 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 882 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 883 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 884 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 887 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 888 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 889 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 891 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 892 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 893 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 894 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 895 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 896 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 898 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 899 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 900 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 902 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 903 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 904 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 906 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 907 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 908 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 909 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 910 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 911 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 912 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 916 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 917 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 918 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 920 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 921 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 922 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 924 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 925 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 926 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 929 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 930 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 931 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 932 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 936 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 937 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 938 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 940 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 941 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 942 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 944 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 945 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 946 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
# 947 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 948 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 949 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 951 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 952 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 963 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 968 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 953 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 964 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 969 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 982 "data/maps/Planet01_01/scripts.pory"
	lockall
# 983 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 984 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 985 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 986 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 987 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 992 "data/maps/Planet01_01/scripts.pory"
	lockall
# 993 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 994 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 995 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 996 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 997 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 998 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1000 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1001 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1002 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1004 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1005 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1006 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1008 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1009 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1010 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1012 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1013 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1014 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1018 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1019 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1020 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1022 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1023 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1024 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1027 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1028 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1029 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1031 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1032 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1033 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1035 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1036 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1037 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1039 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1040 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1042 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1044 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1045 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1046 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1047 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1048 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1049 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1050 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1051 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1078 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1079 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1080 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1081 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 237 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 237 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 237 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 254 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 254 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 254 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 387 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 387 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 387 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 391 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 391 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 409 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 409 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 424 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 424 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 669 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 669 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 669 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 994 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 994 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 994 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_StartAirTimer_Text_0:
# 56 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 91 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 98 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 110 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 117 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 145 "data/maps/Planet01_01/scripts.pory"
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
# 164 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 174 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples!$"

Planet01_01_HintText04_Text_0:
# 185 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types;\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill our oxygen systems!$"

Planet01_01_HintText05_Text_0:
# 194 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: Pokémon of the Clefairy\n"
	.string "family seem to really enjoy bouncing\l"
	.string "around these rocky cliffs.$"

Planet01_01_Carbink_Text_0:
# 207 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 212 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 224 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Woah! Elgyem is glowing red-{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 241 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 249 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 258 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 265 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 271 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 280 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 287 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 294 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my human crew just calls me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 303 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough... But,\n"
	.string "if that's true, is your crew somewhere \l"
	.string "around here?$"

Planet01_01_RobotGreeting_Text_9:
# 312 "data/maps/Planet01_01/scripts.pory"
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
# 327 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 335 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 344 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 352 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 359 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 367 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 378 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 396 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 404 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 416 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 429 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 438 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 447 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 454 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 461 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 468 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 475 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 489 "data/maps/Planet01_01/scripts.pory"
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
# 564 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 572 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 584 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 594 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 608 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 644 "data/maps/Planet01_01/scripts.pory"
	.string "...A Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 652 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 662 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\p"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 674 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 686 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 795 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 803 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 811 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 818 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 826 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 834 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 843 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 852 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 860 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 867 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 874 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 884 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 893 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 900 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 908 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 918 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 926 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 938 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_18:
# 946 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_19:
# 953 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art PAL 9000.\n"
	.string "I was the latest model when we set out\l"
	.string "seven years ago.\p"
	.string "Designed to keep up morale, maintain\n"
	.string "focus on our objectives, and give full,\l"
	.string "detailed reports on all of our\l"
	.string "activities. I'm dissapointed whatever\l"
	.string "situation we ran into required my\l"
	.string "team to leave without me, but I'm sure\l"
	.string "they had good reason to do so.$"

EventScript_TheCaptain_Text_20:
# 964 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_21:
# 969 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

Planet01_01_Ending_Text_0:
# 998 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1006 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1014 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1024 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1033 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1046 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1051 "data/maps/Planet01_01/scripts.pory"
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
