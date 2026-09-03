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
	giveitem ITEM_COMET_SHARD, 1
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
# 154 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 159 "data/maps/Planet01_01/scripts.pory"
	lock
# 160 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 164 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 169 "data/maps/Planet01_01/scripts.pory"
	lock
# 170 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 175 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 180 "data/maps/Planet01_01/scripts.pory"
	lock
# 181 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 185 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 190 "data/maps/Planet01_01/scripts.pory"
	lock
# 191 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 196 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 201 "data/maps/Planet01_01/scripts.pory"
	lock
# 202 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 203 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 204 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 205 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 206 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 207 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 208 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 209 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 210 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 211 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 212 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 213 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 218 "data/maps/Planet01_01/scripts.pory"
	lock
# 219 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 220 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 221 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 222 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 223 "data/maps/Planet01_01/scripts.pory"
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
# 236 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
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
# 299 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 300 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 301 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 303 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
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
# 315 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 316 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 317 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 319 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 320 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 321 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 322 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 323 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 324 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 326 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 327 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 328 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 331 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 332 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 333 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 335 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 336 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 337 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 339 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 340 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 341 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 343 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 344 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 345 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 349 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 350 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 351 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 353 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 354 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 355 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
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
	msgbox Planet01_01_RobotGreeting_Text_15
# 364 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 365 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 366 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 368 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 369 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 370 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 372 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 373 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 374 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 376 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 377 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 378 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 380 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 381 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 382 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 384 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 385 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 387 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 388 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 389 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 396 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 397 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 398 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 400 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 401 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 402 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 404 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 405 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 407 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 408 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 409 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 411 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 412 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 413 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 415 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 416 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 417 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 419 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 420 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 421 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 423 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 424 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 426 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 428 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 429 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 430 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 432 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 433 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 434 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 436 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 438 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 439 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 441 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 442 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 443 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 445 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 446 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 447 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 449 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 451 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 452 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 453 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 456 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 457 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 458 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 460 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 461 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 462 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 463 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 464 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 465 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 467 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 468 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 469 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
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
	msgbox Planet01_01_RobotGreeting_Text_26
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
	msgbox Planet01_01_RobotGreeting_Text_27
# 484 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 485 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 486 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 488 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 489 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 490 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_28
# 491 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 492 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 493 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 495 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 496 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 498 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 500 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 501 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 502 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 504 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_29
# 513 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 514 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 515 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 519 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 520 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 521 "data/maps/Planet01_01/scripts.pory"
	face_up
# 522 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 523 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 524 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 525 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 526 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 527 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 528 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 529 "data/maps/Planet01_01/scripts.pory"
	face_up
# 530 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 531 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 532 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 533 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 534 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 535 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 536 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 539 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 540 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	face_right
# 543 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 544 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 545 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 546 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 547 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 548 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 549 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 550 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 551 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 552 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 553 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 554 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 555 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 559 "data/maps/Planet01_01/scripts.pory"
	lockall
# 560 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 562 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 563 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 564 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 566 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 568 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 569 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 571 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 573 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 574 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 575 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 577 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 578 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 579 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 581 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 582 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 583 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 585 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 586 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 587 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 589 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 590 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 591 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 593 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 594 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 595 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 599 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 600 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 601 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 603 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 604 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 605 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 607 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 608 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 609 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 611 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 612 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 613 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 615 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 617 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 618 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 619 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 620 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 621 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 622 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 624 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 625 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 626 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 627 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 629 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 630 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 632 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 633 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 634 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 635 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 636 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 637 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 638 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 639 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 640 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 641 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 642 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 643 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 644 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 645 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 646 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 647 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 649 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 651 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 652 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 654 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 655 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 656 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 657 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 658 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 659 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 661 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 662 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 663 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 664 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 665 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 666 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 668 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 669 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 671 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 672 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 673 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 677 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 678 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 679 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 681 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 682 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 684 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 685 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 686 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 690 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 691 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 692 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
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
# 891 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 925 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 945 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 997 "data/maps/Planet01_01/scripts.pory"
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
# 831 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 832 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 833 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 835 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 836 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 837 "data/maps/Planet01_01/scripts.pory"
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
# 879 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 880 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 881 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 883 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 884 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 885 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 886 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 887 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 888 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 889 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 893 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 894 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 895 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
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
	msgbox EventScript_TheCaptain_Text_12
# 905 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 906 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 907 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 909 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 910 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 911 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 913 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 914 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 915 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 917 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 918 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 919 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 920 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 921 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 922 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 923 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 927 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 928 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 929 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
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
	msgbox EventScript_TheCaptain_Text_16
# 940 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 941 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 942 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 943 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 947 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 948 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 949 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 951 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 952 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 953 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 955 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 956 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 957 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
# 958 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 959 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 960 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 962 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 963 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 971 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 981 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
# 987 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TheCaptain_15
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 964 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 972 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 982 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_15:
# 988 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_22
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 1002 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1003 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1004 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1005 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1006 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1007 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1012 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1013 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1014 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1015 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1016 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1017 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1018 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1020 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1021 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1022 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1024 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1025 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1026 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1028 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1029 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1030 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1032 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1033 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1034 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1038 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1039 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1040 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1042 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1043 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1044 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1047 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1048 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1049 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1051 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1052 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1053 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1056 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1057 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1058 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1060 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1061 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1063 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1065 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1066 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1067 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1068 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1069 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1070 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1071 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1072 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1073 "data/maps/Planet01_01/scripts.pory"
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

# 400 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 400 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 400 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 404 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 404 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 423 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 423 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 438 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 438 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 681 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 681 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 681 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1014 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1014 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1014 "data/maps/Planet01_01/scripts.pory"
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
	.string "Captain: This is the captain of\n"
	.string "project EDGE OF DAWN, or EOD.\p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to establish\l"
	.string "a research facility, focusing on\l"
	.string "geology and Pokémon biology.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 160 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 170 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 181 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 191 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: I found the Biologist weeping\n"
	.string "up here; they reported receiving\l"
	.string "strange hallucinations around these\l"
	.string "rocks. I'm not sure what's going on, but\l"
	.string "we need to be careful.$"

Planet01_01_Carbink_Text_0:
# 206 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 211 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 223 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing red-\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well... How did I get here?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 241 "data/maps/Planet01_01/scripts.pory"
	.string "...I see can't anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 249 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down herrre, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 258 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 265 "data/maps/Planet01_01/scripts.pory"
	.string "...Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 271 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 280 "data/maps/Planet01_01/scripts.pory"
	.string "Hello, frrreind.$"

Planet01_01_RobotGreeting_Text_6:
# 287 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 294 "data/maps/Planet01_01/scripts.pory"
	.string "Why, I'm the rrrenown Captain of the\n"
	.string "expedition EDGE OF DAWN. Yep, I'm the\l"
	.string "captain. Never let a human do anything\l"
	.string "important, that's what I always say. It\l"
	.string "was also my company's slogan.$"

Planet01_01_RobotGreeting_Text_8:
# 305 "data/maps/Planet01_01/scripts.pory"
	.string "...Really. You're looking a bit rough...\n"
	.string "But uh, if that's true, is your human\l"
	.string "crew somewhere around here?$"

Planet01_01_RobotGreeting_Text_9:
# 314 "data/maps/Planet01_01/scripts.pory"
	.string "Noooope. They'rrrre long gone, kiddo.$"

Planet01_01_RobotGreeting_Text_10:
# 321 "data/maps/Planet01_01/scripts.pory"
	.string "...Oh. Where'd they go?$"

Planet01_01_RobotGreeting_Text_11:
# 328 "data/maps/Planet01_01/scripts.pory"
	.string "I don't know. I don't rrreally know much\n"
	.string "to be honest, on account of my memories\l"
	.string "missing; orrr, perrrhaps errrased.$"

Planet01_01_RobotGreeting_Text_12:
# 337 "data/maps/Planet01_01/scripts.pory"
	.string "...Great. Well, any chance you know why I\n"
	.string "can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_13:
# 345 "data/maps/Planet01_01/scripts.pory"
	.string "Well sirrrma'am, it's all account of the\n"
	.string "absurrrd levels of purrre psychic\l"
	.string "enerrrgy layerrred on top of it.\l"
	.string "Yep.$"

Planet01_01_RobotGreeting_Text_14:
# 355 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_15:
# 363 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorrry kiddo.$"

Planet01_01_RobotGreeting_Text_16:
# 370 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_17:
# 378 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you'rrre in luck. See these\n"
	.string "here wall scrrribbles?$"

Planet01_01_RobotGreeting_Text_18:
# 389 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave\n"
	.string "some notes for futurre explorrrerrrs.\p"
	.string "In fact, I've been rrreading them too.\n"
	.string "I've learrrned that our primarrry\l"
	.string "rrresearrrch facility was up the\l"
	.string "waterrrfall in the forrrest just\l"
	.string "overrr to the west.$"

Planet01_01_RobotGreeting_Text_19:
# 409 "data/maps/Planet01_01/scripts.pory"
	.string "Oh? That sounds like a promising place\n"
	.string "to investigate. Do you have, like a map?$"

Planet01_01_RobotGreeting_Text_20:
# 417 "data/maps/Planet01_01/scripts.pory"
	.string "Well of courrrse I do kiddo! Let me load\n"
	.string "it up forrr you!$"

Planet01_01_RobotGreeting_Text_21:
# 430 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_22:
# 443 "data/maps/Planet01_01/scripts.pory"
	.string "Here you arrre!\n"
	.string "Our old lab is to the left.$"

Planet01_01_RobotGreeting_Text_23:
# 453 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_24:
# 462 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_25:
# 469 "data/maps/Planet01_01/scripts.pory"
	.string "I'm like, almost 30.$"

Planet01_01_RobotGreeting_Text_26:
# 476 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy earrrly birrrrthday, kiddo.$"

Planet01_01_RobotGreeting_Text_27:
# 483 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_28:
# 490 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_29:
# 504 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "project EDGE OF DAWN, or EOD. \p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to establish\l"
	.string "a research facility, focusing on\l"
	.string "geology and Pokémon biology.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_JirachiAppears_Text_0:
# 575 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 583 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "corrupted by a powerful space virus.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 595 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}They will never stop pursuing you. They\n"
	.string "want to infect you and steal your ship.\l"
	.string "Your team... Magnezone... Hm. I guess\l"
	.string "this is the end.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 605 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 619 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 656 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?$"

Planet01_01_JirachiAppears_Text_6:
# 663 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 673 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, wow. Lucky. Very lucky...>\p"
	.string "Since you've been given the chance to\n"
	.string "fight for your survival, I'll warn you,\l"
	.string "this greedy planet takes and takes...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 686 "data/maps/Planet01_01/scripts.pory"
	.string "Who the hell are you? I demand you tell\n"
	.string "me! Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 696 "data/maps/Planet01_01/scripts.pory"
	.string "Great. Amnesiac robots, space viruses,\n"
	.string "and psychic assholes. All in the middle\l"
	.string "of nowhere. Serves me right, in a way.$"

EventScript_TheCaptain_Text_0:
# 805 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 813 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yeah, those guys.\n"
	.string "They neverrr botherrred me before.$"

EventScript_TheCaptain_Text_2:
# 821 "data/maps/Planet01_01/scripts.pory"
	.string "...Ok. But what are they?$"

EventScript_TheCaptain_Text_3:
# 828 "data/maps/Planet01_01/scripts.pory"
	.string "I have memorrries of our team, when\n"
	.string "we firrrst arrrived. These things werrre\l"
	.string "not herrre.$"

EventScript_TheCaptain_Text_4:
# 837 "data/maps/Planet01_01/scripts.pory"
	.string "Anything else I should know?$"

EventScript_TheCaptain_Text_5:
# 844 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls arrre not what they\n"
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
	.string "Ok, and your lab was is in the\n"
	.string "Forest somewhere?$"

EventScript_TheCaptain_Text_10:
# 885 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterrrfall, yep.$"

EventScript_TheCaptain_Text_11:
# 895 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 904 "data/maps/Planet01_01/scripts.pory"
	.string "Of courrrse! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 911 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 919 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 929 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 937 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pokerrrmon with\n"
	.string "waterrrfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 949 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "previous explorers.$"

EventScript_TheCaptain_Text_18:
# 957 "data/maps/Planet01_01/scripts.pory"
	.string "Firrre away.$"

EventScript_TheCaptain_Text_19:
# 964 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art RoboCap by\n"
	.string "BOTech Enterprrrises. I was the latest\l"
	.string "model when we set out into space.\l"
	.string "Designed to keep up morrrale, maintain\l"
	.string "focus on our objectives, and give full,\l"
	.string "detailed rrreporrrts on all of our\l"
	.string "activities.$"

EventScript_TheCaptain_Text_20:
# 972 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in rrresearching alien PKMN.\n"
	.string "Quiet, standoff-ish.\l"
	.string "Didn't like to be the centerrr of\l"
	.string "attention, and often would get lost\l"
	.string "wanderrring off on their own. Made\l"
	.string "excellent notes on this rrregion's\l"
	.string "biological life. Rrrecorrrds say\l"
	.string "their favorrrite flowerrr was 'Wild\l"
	.string "Indigo.'$"

EventScript_TheCaptain_Text_21:
# 982 "data/maps/Planet01_01/scripts.pory"
	.string "A genius with an interrrest in building\n"
	.string "structurrres in challenging locations.\l"
	.string "Had their eyes on transforming hostile\l"
	.string "environments into life-sustaining ones\l"
	.string "forrr humans. Worrrk-orrriented.$"

EventScript_TheCaptain_Text_22:
# 988 "data/maps/Planet01_01/scripts.pory"
	.string "PKMN experrrt and project organizerrr.\n"
	.string "Always ready to help, and easy to talk\l"
	.string "to about anything. Optimistic, harrrd\l"
	.string "worker. Loves giving people and things\l"
	.string "nicknames. Rrrecorrrds suggest they had\l"
	.string "a history with the Biologist, but that's\l"
	.string "just my interrrprrretation.$"

Planet01_01_Ending_Text_0:
# 1018 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1026 "data/maps/Planet01_01/scripts.pory"
	.string "Rrreadings negative, kiddo. Should be\n"
	.string "frrree forrr take off.$"

Planet01_01_Ending_Text_2:
# 1034 "data/maps/Planet01_01/scripts.pory"
	.string "...\n"
	.string "I've been thinking.\p"
	.string "How would you like to be the captain\n"
	.string "of a ship again?$"

Planet01_01_Ending_Text_3:
# 1044 "data/maps/Planet01_01/scripts.pory"
	.string "Kiddo. Arrre you... Perrrhaps, serrrious?\n"
	.string "Why, that would fill my ambiguously\l"
	.string "prrresent rrrobot soul with joy.$"

Planet01_01_Ending_Text_4:
# 1053 "data/maps/Planet01_01/scripts.pory"
	.string "Well, they're going to need a replacement.\n"
	.string "I'm quitting when we get back home.\l"
	.string "Let's go.$"

Planet01_01_Ending_Text_5:
# 1067 "data/maps/Planet01_01/scripts.pory"
	.string "Goodbye... Wild Indigo.$"
