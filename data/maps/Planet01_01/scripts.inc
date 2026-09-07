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
# 227 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 228 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 229 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 230 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 235 "data/maps/Planet01_01/scripts.pory"
	lock
# 236 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 237 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 239 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 240 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 241 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 242 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 243 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 246 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 247 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 248 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 249 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 250 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 251 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 253 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 254 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 255 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 256 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 257 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 258 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 259 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 260 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 261 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 262 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 263 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 264 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 265 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 266 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 267 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
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
	msgbox Planet01_01_RobotGreeting_Text_4
# 274 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 275 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 276 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 277 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 278 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 280 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 281 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 282 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 283 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 284 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 285 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 287 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 288 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 289 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 290 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 291 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 292 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 294 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 295 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 296 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 299 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 300 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 301 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 303 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 304 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 305 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
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
	msgbox Planet01_01_RobotGreeting_Text_9
# 323 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 324 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 325 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 327 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 328 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 329 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
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
	msgbox Planet01_01_RobotGreeting_Text_11
# 340 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 341 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 342 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 344 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 345 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 346 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
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
	msgbox Planet01_01_RobotGreeting_Text_13
# 355 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 356 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 357 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 359 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 360 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 361 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 363 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 364 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 365 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 367 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 368 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 369 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 371 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 372 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 373 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 375 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 376 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 378 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 379 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 380 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 385 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 386 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 387 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 389 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 390 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 391 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 393 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 394 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 396 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 397 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 398 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 400 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 401 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 402 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 404 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 405 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 406 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 407 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 408 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 409 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 411 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 412 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 414 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 416 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 417 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 418 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 420 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 421 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 422 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 424 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 426 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 427 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 429 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 430 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 431 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 432 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 433 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 434 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 436 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 438 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 439 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 440 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 443 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 444 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 445 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 447 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 448 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 449 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 450 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 451 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 452 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 454 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 455 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 456 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 457 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 458 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 459 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 461 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 462 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 463 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 464 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 465 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 466 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 468 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 469 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 470 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 471 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 472 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 473 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 475 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 476 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 477 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 478 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 479 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 480 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 482 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 483 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 485 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 487 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 488 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 489 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 491 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 504 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 505 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 506 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 510 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 511 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 512 "data/maps/Planet01_01/scripts.pory"
	face_up
# 513 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 514 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 515 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 516 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 517 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 518 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 519 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 520 "data/maps/Planet01_01/scripts.pory"
	face_up
# 521 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 522 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 523 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 524 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 525 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 526 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 527 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 530 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 531 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 532 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 533 "data/maps/Planet01_01/scripts.pory"
	face_right
# 534 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 535 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 536 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 537 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 538 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 539 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 540 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 543 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 544 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 545 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 546 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 550 "data/maps/Planet01_01/scripts.pory"
	lockall
# 551 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 552 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 554 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 555 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 556 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 558 "data/maps/Planet01_01/scripts.pory"
	playse SE_BANG
# 560 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 562 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 563 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 565 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 567 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 568 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 569 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 571 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 572 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 573 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 575 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 576 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 577 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 579 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 580 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 581 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 583 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 584 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 585 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 587 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 588 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 589 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 593 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 594 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 595 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 597 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 598 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 599 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 601 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 602 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 603 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 605 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_EXCADRILL, CRY_MODE_ENCOUNTER
# 606 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 608 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 609 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 610 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 612 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 614 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 615 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 616 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 617 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 618 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 619 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 621 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 622 "data/maps/Planet01_01/scripts.pory"
	playse SE_M_DETECT
# 623 "data/maps/Planet01_01/scripts.pory"
	waitse
# 624 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 625 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 627 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 628 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 629 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 631 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 632 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 633 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 634 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 635 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 636 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 637 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 638 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 639 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 640 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 641 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 642 "data/maps/Planet01_01/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 643 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 644 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 645 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 647 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 649 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 650 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 652 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 653 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 654 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 655 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 656 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 657 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 659 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 660 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_OK
# 661 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 662 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 663 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 664 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 665 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 667 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 668 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 670 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 671 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 672 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 675 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 676 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 677 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 679 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 680 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 682 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 683 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 684 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 688 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 689 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 690 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 692 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 694 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 695 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 696 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 699 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 700 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 701 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 704 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 705 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 706 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 707 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 710 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 708 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 714 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 715 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 716 "data/maps/Planet01_01/scripts.pory"
	face_right
# 717 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 718 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 719 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 720 "data/maps/Planet01_01/scripts.pory"
	face_left
# 721 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 722 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 723 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 726 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 727 "data/maps/Planet01_01/scripts.pory"
	face_up
# 728 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 729 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 732 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 733 "data/maps/Planet01_01/scripts.pory"
	face_up
# 734 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 735 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 738 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 739 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 740 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 741 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 744 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 745 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 746 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 747 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 750 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 751 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 754 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 755 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 758 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 759 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 760 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 763 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 764 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 765 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 768 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 769 "data/maps/Planet01_01/scripts.pory"
	face_down
# 770 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 771 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 772 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 773 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 774 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 775 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 776 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 777 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 778 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 779 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 780 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 781 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 782 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 783 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 784 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 785 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 786 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 789 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 790 "data/maps/Planet01_01/scripts.pory"
	face_up
# 791 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 792 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 793 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 794 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 795 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 799 "data/maps/Planet01_01/scripts.pory"
	lock
# 801 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 858 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 890 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 924 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 944 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 987 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 803 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 804 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 805 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 807 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 808 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 809 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 811 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 812 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 813 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 815 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 816 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 817 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 819 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 820 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 821 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 822 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 823 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 824 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 826 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 827 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 828 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 830 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 831 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 832 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 834 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 835 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 836 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
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
	msgbox EventScript_TheCaptain_Text_5
# 846 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 847 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 848 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 849 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 851 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 852 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 853 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 854 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 855 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 856 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 860 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 861 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 862 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 864 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 865 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 866 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 868 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 869 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 870 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 871 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 872 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 873 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 875 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 876 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 877 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
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
	msgbox EventScript_TheCaptain_Text_10
# 885 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 886 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 887 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 888 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 892 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 893 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 894 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
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
	msgbox EventScript_TheCaptain_Text_12
# 904 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 905 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 906 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 908 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 909 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 910 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 912 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 913 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 914 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 916 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 917 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 918 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 919 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 920 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 921 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 922 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 926 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 927 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 928 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 930 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 931 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 932 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 934 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 935 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 936 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 939 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 940 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 941 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 942 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 946 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 947 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 948 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
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
	msgbox EventScript_TheCaptain_Text_18
# 957 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 958 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 959 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 961 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 962 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 973 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 978 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 963 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 974 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 979 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 992 "data/maps/Planet01_01/scripts.pory"
	lockall
# 993 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 994 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 995 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 996 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 997 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1002 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1003 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1004 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1005 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1006 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1007 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1008 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1010 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1011 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1012 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1014 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1015 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1016 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1018 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1019 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1020 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1022 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1023 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1024 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1028 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1029 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1030 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1032 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1033 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1034 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
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
	msgbox Planet01_01_Ending_Text_4
# 1045 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1046 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1047 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1049 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1050 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1052 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1054 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1055 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1056 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1057 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1058 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1059 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1060 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1061 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_6
# 1088 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1089 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1090 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1091 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 239 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 239 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 239 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 256 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 256 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 256 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 389 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 389 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 389 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 393 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 393 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 411 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 411 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 426 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 426 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 679 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 679 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 679 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1004 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1004 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1004 "data/maps/Planet01_01/scripts.pory"
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
	.string "Woah! Elgyem is glowing red-\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}When the horizon is dark, and the\n"
	.string "progress is slow...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 243 "data/maps/Planet01_01/scripts.pory"
	.string "...I can't see anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 251 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down here, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 260 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 267 "data/maps/Planet01_01/scripts.pory"
	.string "Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 273 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 282 "data/maps/Planet01_01/scripts.pory"
	.string "Hey there, kiddo.$"

Planet01_01_RobotGreeting_Text_6:
# 289 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 296 "data/maps/Planet01_01/scripts.pory"
	.string "I'm the Captain of the EDGE OF DAWN\n"
	.string "research expedition! Name's PAL 9000,\l"
	.string "but my human crew just calls me Cap'.$"

Planet01_01_RobotGreeting_Text_8:
# 305 "data/maps/Planet01_01/scripts.pory"
	.string "Huh! You're looking a bit rough... But,\n"
	.string "if that's true, is your crew somewhere \l"
	.string "around here?$"

Planet01_01_RobotGreeting_Text_9:
# 314 "data/maps/Planet01_01/scripts.pory"
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
# 329 "data/maps/Planet01_01/scripts.pory"
	.string "Dang. Well Cap', any chance you know why\n"
	.string "I can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_11:
# 337 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, it's all account of the\n"
	.string "absurd levels of pure psychic energy\l"
	.string "layered on top of it. Yep.$"

Planet01_01_RobotGreeting_Text_12:
# 346 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_13:
# 354 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorry.$"

Planet01_01_RobotGreeting_Text_14:
# 361 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_15:
# 369 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you're in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_16:
# 380 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave some\n"
	.string "notes. I've been reading them too. I've\l"
	.string "learned that our primary research base \l"
	.string "was up the waterfall in forest over\l"
	.string "west; might be a good place to visit.$"

Planet01_01_RobotGreeting_Text_17:
# 398 "data/maps/Planet01_01/scripts.pory"
	.string "I'd like to check it out! Do you have a\n"
	.string "map I could use?$"

Planet01_01_RobotGreeting_Text_18:
# 406 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Let me load it up!$"

Planet01_01_RobotGreeting_Text_19:
# 418 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_20:
# 431 "data/maps/Planet01_01/scripts.pory"
	.string "Here you are! Happy to help!$"

Planet01_01_RobotGreeting_Text_21:
# 440 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_22:
# 449 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_23:
# 456 "data/maps/Planet01_01/scripts.pory"
	.string "But I'm almost 30.$"

Planet01_01_RobotGreeting_Text_24:
# 463 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo!$"

Planet01_01_RobotGreeting_Text_25:
# 470 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_26:
# 477 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_27:
# 491 "data/maps/Planet01_01/scripts.pory"
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
# 569 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 577 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "infected by an intelligent space virus.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 589 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<The virus wants to possess you and\n"
	.string "use your ship to spread across space.\l"
	.string "Your team... Doesn't look strong enough.\l"
	.string "I guess that's that.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 599 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 616 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 654 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?!$"

Planet01_01_JirachiAppears_Text_6:
# 662 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Jirachi!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 672 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I wasn't expecting that.\n"
	.string "I've never seen Jirachi before. Seems\l"
	.string "like it's protecting you... But why?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 684 "data/maps/Planet01_01/scripts.pory"
	.string "Hey, who are you? Please tell me!\n"
	.string "Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 696 "data/maps/Planet01_01/scripts.pory"
	.string "Crazy robots, intelligent viruses, and\n"
	.string "psychic jerks. This place is busy for\l"
	.string "being the middle of nowhere space.$"

EventScript_TheCaptain_Text_0:
# 805 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 813 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yes, those guys.\n"
	.string "They never bothered me before.$"

EventScript_TheCaptain_Text_2:
# 821 "data/maps/Planet01_01/scripts.pory"
	.string "I can guess why. But what are they?$"

EventScript_TheCaptain_Text_3:
# 828 "data/maps/Planet01_01/scripts.pory"
	.string "They aren't present in the memories I\n"
	.string "have pre-encryption.$"

EventScript_TheCaptain_Text_4:
# 836 "data/maps/Planet01_01/scripts.pory"
	.string "That's awfully suspicious. Anything\n"
	.string "else I should know?$"

EventScript_TheCaptain_Text_5:
# 844 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls are not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 853 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 862 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 870 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 877 "data/maps/Planet01_01/scripts.pory"
	.string "And your lab was in the forest?$"

EventScript_TheCaptain_Text_10:
# 884 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterfall, yep.$"

EventScript_TheCaptain_Text_11:
# 894 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 903 "data/maps/Planet01_01/scripts.pory"
	.string "Of course! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 910 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 918 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 928 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 936 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pocket mon with\n"
	.string "Waterfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 948 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "EDGE OF DAWN team.$"

EventScript_TheCaptain_Text_18:
# 956 "data/maps/Planet01_01/scripts.pory"
	.string "Fire away.$"

EventScript_TheCaptain_Text_19:
# 963 "data/maps/Planet01_01/scripts.pory"
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
# 974 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in researching alien Pokémon\n"
	.string "anatomy and abilities. Made some pretty\l"
	.string "amazing discoveries, but insisted their\l"
	.string "big breakthrough was yet to come.$"

EventScript_TheCaptain_Text_21:
# 979 "data/maps/Planet01_01/scripts.pory"
	.string "Expert Pokémon trainer and\n"
	.string "coordinator. Could direct Pokémon to\l"
	.string "build any structure, no matter how\l"
	.string "challenging the environment.\p"
	.string "Optimistic, hard working. Would do\n"
	.string "anything to support the team.$"

Planet01_01_Ending_Text_0:
# 1008 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1016 "data/maps/Planet01_01/scripts.pory"
	.string "Readings negative, kiddo. Should be\n"
	.string "free for take off anytime.$"

Planet01_01_Ending_Text_2:
# 1024 "data/maps/Planet01_01/scripts.pory"
	.string "Excellent. You know, your whole crew is\n"
	.string "back at the EOD lab. Don't you think\l"
	.string "you should go see them? They can\l"
	.string "probably fix you up, get that rust off.$"

Planet01_01_Ending_Text_3:
# 1034 "data/maps/Planet01_01/scripts.pory"
	.string "I'll let 'em find me when they find me!\n"
	.string "Captain to captain, I think it's time\l"
	.string "you get your crew back home!$"

Planet01_01_Ending_Text_4:
# 1043 "data/maps/Planet01_01/scripts.pory"
	.string "You're right!\n"
	.string "I guess this is goodbye, then!$"

Planet01_01_Ending_Text_5:
# 1056 "data/maps/Planet01_01/scripts.pory"
	.string "...So long!$"

Planet01_01_Ending_Text_6:
# 1061 "data/maps/Planet01_01/scripts.pory"
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
