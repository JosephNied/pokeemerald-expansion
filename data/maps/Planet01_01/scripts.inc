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
	getplayerxy VAR_0x8004, VAR_0x8005
# 11 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8004, 18
# 12 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 13 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8005, 10
# 14 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 16 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 17 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 18 "data/maps/Planet01_01/scripts.pory"
	goto_if_unset FLAG_REGISTERED_ROSE, Planet01_01_Enter_2
# 21 "data/maps/Planet01_01/scripts.pory"
	goto_if_unset FLAG_REGISTERED_CRISTIN, Planet01_01_Enter_5
# 24 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 3
	goto_if_eq Planet01_01_Enter_8
# 28 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_01_Enter_1:
# 33 "data/maps/Planet01_01/scripts.pory"
End:
	end

Planet01_01_Enter_2:
# 19 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_01_Enter_1

Planet01_01_Enter_5:
# 22 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 2
	goto Planet01_01_Enter_1

Planet01_01_Enter_8:
# 26 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 3
	goto Planet01_01_Enter_1


# 37 "data/maps/Planet01_01/scripts.pory"

# 38 "data/maps/Planet01_01/scripts.pory"
Planet01_01_FrameTable::
# 39 "data/maps/Planet01_01/scripts.pory"
	map_script_2 VAR_AIR_TIMER_TRIGGERED, 1, Planet01_01_StartAirTimer
# 40 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, Planet01_01_RobotGreeting
# 41 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 2, Planet01_01_JirachiAppears
# 42 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 3, Planet01_01_MonstersRegular
# 43 "data/maps/Planet01_01/scripts.pory"
	.2byte 0

Planet01_01_StartAirTimer::
# 47 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 48 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 49 "data/maps/Planet01_01/scripts.pory"
	lockall
# 50 "data/maps/Planet01_01/scripts.pory"
	playse SE_REPEL
# 51 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 52 "data/maps/Planet01_01/scripts.pory"
	callnative EnableO2Meter
# 53 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_EventScript_Item01::
# 58 "data/maps/Planet01_01/scripts.pory"
	lock
# 59 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 60 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 61 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 62 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item02::
# 67 "data/maps/Planet01_01/scripts.pory"
	lock
# 68 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 69 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 70 "data/maps/Planet01_01/scripts.pory"
	removeobject 11
# 71 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item03::
# 76 "data/maps/Planet01_01/scripts.pory"
	lock
# 77 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_COMET_SHARD, 1
# 78 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 79 "data/maps/Planet01_01/scripts.pory"
	removeobject 18
# 80 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirWarning::
# 85 "data/maps/Planet01_01/scripts.pory"
	lockall
# 86 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 87 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AirExpired::
# 92 "data/maps/Planet01_01/scripts.pory"
	lockall
# 93 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 94 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 95 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 96 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 101 "data/maps/Planet01_01/scripts.pory"
	lockall
# 102 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 103 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 104 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 105 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 107 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1
# 108 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 109 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 110 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 111 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 112 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 113 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 114 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 115 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 120 "data/maps/Planet01_01/scripts.pory"
	lockall
# 121 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 122 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 123 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 124 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 126 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 127 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 128 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 129 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 130 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 131 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 132 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 133 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 134 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 139 "data/maps/Planet01_01/scripts.pory"
	lock
# 140 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 148 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 153 "data/maps/Planet01_01/scripts.pory"
	lock
# 154 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 158 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 163 "data/maps/Planet01_01/scripts.pory"
	lock
# 164 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 169 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 174 "data/maps/Planet01_01/scripts.pory"
	lock
# 175 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 179 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 184 "data/maps/Planet01_01/scripts.pory"
	lock
# 185 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 190 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 195 "data/maps/Planet01_01/scripts.pory"
	lock
# 196 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 197 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 198 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 199 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 200 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 201 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 202 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 203 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 204 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 205 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 206 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 207 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 212 "data/maps/Planet01_01/scripts.pory"
	lock
# 213 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 214 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 215 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 216 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 217 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 219 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 220 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 221 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 222 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 227 "data/maps/Planet01_01/scripts.pory"
	lock
# 228 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 229 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 230 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 231 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 232 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 233 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 234 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 235 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 238 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 239 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 240 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 241 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 242 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 243 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 245 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 246 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 247 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 248 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 249 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 250 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 251 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 252 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 253 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 254 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 255 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 256 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 257 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 258 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 259 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 260 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 261 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 262 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 263 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 264 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 265 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 266 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 267 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 268 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 269 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 270 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 272 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 273 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 274 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 275 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 276 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 277 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 279 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 280 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 281 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 282 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 283 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 284 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 286 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 287 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 288 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 293 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 294 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 295 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 297 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 298 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 299 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 302 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 303 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 304 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 306 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 307 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 308 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 309 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 310 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 311 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 313 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 314 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 315 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 316 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 317 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 318 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 320 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 321 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 322 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 325 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 326 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 327 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 329 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 330 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 331 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 333 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 334 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 335 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 337 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 338 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 339 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 343 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 344 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 345 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 347 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 348 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 349 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 351 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 352 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 353 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 355 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 356 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 357 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 358 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 359 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 360 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 362 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 363 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 364 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
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
	msgbox Planet01_01_RobotGreeting_Text_17
# 374 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 375 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 376 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 378 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 379 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 381 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 382 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 383 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 390 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 391 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 392 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 394 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 395 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 396 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 398 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 399 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 401 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 402 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 403 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 405 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 406 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 407 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 409 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 410 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 411 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 413 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 414 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 415 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 417 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 418 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 420 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 422 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 423 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 424 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 426 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 427 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 428 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 430 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 432 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 433 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 435 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 436 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 437 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 439 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 440 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 441 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 443 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 445 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 446 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 447 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 450 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 451 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 452 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 454 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 455 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 456 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 457 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 458 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 459 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 461 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 462 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 463 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 464 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 465 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 466 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 468 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 469 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 470 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 471 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 472 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 473 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 475 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 476 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 477 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 478 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 479 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 480 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 482 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 483 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 484 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_28
# 485 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 486 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 487 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 489 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 490 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 492 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 494 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 495 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 496 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 498 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_29
# 506 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 507 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 508 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 512 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 513 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 514 "data/maps/Planet01_01/scripts.pory"
	face_up
# 515 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 516 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 517 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 518 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 519 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 520 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 521 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 522 "data/maps/Planet01_01/scripts.pory"
	face_up
# 523 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 524 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 525 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 526 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 527 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 528 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 529 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 532 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 533 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 534 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 535 "data/maps/Planet01_01/scripts.pory"
	face_right
# 536 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 537 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 538 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 539 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 540 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 541 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 542 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 543 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 544 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 545 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 546 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 547 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 548 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 552 "data/maps/Planet01_01/scripts.pory"
	lockall
# 553 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 555 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 556 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 557 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 559 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 561 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 562 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 564 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 566 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 567 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 568 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 570 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 571 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 572 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 574 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 575 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 576 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 578 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 579 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 580 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 582 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 583 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 584 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 586 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 587 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 588 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 592 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 593 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 594 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 596 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 597 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 598 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 600 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 601 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 602 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 604 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 605 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 606 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 608 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 610 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 611 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 612 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 613 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 614 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 615 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 617 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 618 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 619 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 620 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 622 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 623 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 625 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 626 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 627 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 628 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 629 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 630 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 631 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 632 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 633 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 634 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 635 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 636 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 637 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 638 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 639 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 640 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 642 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 644 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 645 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 647 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 648 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 649 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 650 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 651 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 652 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 654 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 655 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 656 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 657 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 658 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 659 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 661 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 662 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 664 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 665 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 666 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 667 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 668 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 669 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 671 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 672 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 674 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 675 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 676 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 680 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 681 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 682 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
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
# 881 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 915 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 935 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 985 "data/maps/Planet01_01/scripts.pory"
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
# 821 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 822 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 823 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 825 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 826 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 827 "data/maps/Planet01_01/scripts.pory"
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
	msgbox Planet01_01_RobotGreeting_Text_27
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
	msgbox EventScript_TheCaptain_Text_6
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
	msgbox EventScript_TheCaptain_Text_7
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
	msgbox EventScript_TheCaptain_Text_8
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
	msgbox EventScript_TheCaptain_Text_9
# 876 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 877 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 878 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 879 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 883 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 884 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 885 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 888 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 889 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 890 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 892 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 893 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 894 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 895 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 896 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 897 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 899 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 900 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 901 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 903 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 904 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 905 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 907 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 908 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 909 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 910 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 911 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 912 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 913 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 917 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 918 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 919 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 921 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 922 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 923 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 925 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 926 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 927 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 930 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 931 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 932 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 933 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 937 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 938 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 939 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 941 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 942 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 943 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 945 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 946 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 947 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 948 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 949 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 950 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 952 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 953 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 961 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 969 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
# 975 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TheCaptain_15
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 954 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 962 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 970 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_15:
# 976 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 990 "data/maps/Planet01_01/scripts.pory"
	lockall
# 991 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 992 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 993 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 994 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 995 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


# 231 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 231 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 231 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 248 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 248 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 248 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 394 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 394 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 394 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 398 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 398 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 417 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 417 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 432 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 432 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 671 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 671 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 671 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

Planet01_01_StartAirTimer_Text_0:
# 51 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 86 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 93 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 105 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 112 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 140 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 'WILD INDIGO'. \p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a lab here for biological research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 154 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 164 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 175 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 185 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: I found the Biologist weeping\n"
	.string "up here; they reported receiving\l"
	.string "strange hallucinations around these\l"
	.string "rocks. I'm not sure what's going on, but\l"
	.string "be careful.$"

Planet01_01_Carbink_Text_0:
# 200 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 205 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 217 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing red-\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well... How did I get here?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 235 "data/maps/Planet01_01/scripts.pory"
	.string "...I see can't anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 243 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down herrre, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 252 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 259 "data/maps/Planet01_01/scripts.pory"
	.string "...Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 265 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 274 "data/maps/Planet01_01/scripts.pory"
	.string "Hello, frrreind.$"

Planet01_01_RobotGreeting_Text_6:
# 281 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 288 "data/maps/Planet01_01/scripts.pory"
	.string "Why, I'm the rrrenown Captain of the\n"
	.string "experrrdition WILD INDIGO. Yep, I'm the\l"
	.string "captain. Never let a human do something\l"
	.string "important, that's my motto. It was also\l"
	.string "my company's slogan.$"

Planet01_01_RobotGreeting_Text_8:
# 299 "data/maps/Planet01_01/scripts.pory"
	.string "...Really. You're looking a bit rough...\n"
	.string "But uh, if that's true, is your human\l"
	.string "crew somewhere around here?$"

Planet01_01_RobotGreeting_Text_9:
# 308 "data/maps/Planet01_01/scripts.pory"
	.string "Noooope. They'rrrre long gone, kiddo.$"

Planet01_01_RobotGreeting_Text_10:
# 315 "data/maps/Planet01_01/scripts.pory"
	.string "...Oh. Where'd they go?$"

Planet01_01_RobotGreeting_Text_11:
# 322 "data/maps/Planet01_01/scripts.pory"
	.string "I don't know. I don't rrreally know much\n"
	.string "to be honest, on account of my memories\l"
	.string "missing; orrr, perrrhaps errrased.$"

Planet01_01_RobotGreeting_Text_12:
# 331 "data/maps/Planet01_01/scripts.pory"
	.string "...Ok. Well, any chance you know why I\n"
	.string "can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_13:
# 339 "data/maps/Planet01_01/scripts.pory"
	.string "Well sirrr/ma'am/sirrr'am, it's all\n"
	.string "account of the absurd levels of purrrre\l"
	.string "psychic energy layerrred on top of it.\l"
	.string "Yep.$"

Planet01_01_RobotGreeting_Text_14:
# 349 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "trapping me here?!$"

Planet01_01_RobotGreeting_Text_15:
# 357 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorrry kiddo.$"

Planet01_01_RobotGreeting_Text_16:
# 364 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is unsettling. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_17:
# 372 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you'rrre in luck. See these\n"
	.string "here wall scrrribbles?$"

Planet01_01_RobotGreeting_Text_18:
# 383 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave\n"
	.string "some notes for futurre explorrrerrrs.\p"
	.string "In fact, I've been rrreading them too.\n"
	.string "I've learrrned that our primarrry\l"
	.string "rrresearrrch facility was up the\l"
	.string "waterrrfall in the forrrest just\l"
	.string "overrr to the west.$"

Planet01_01_RobotGreeting_Text_19:
# 403 "data/maps/Planet01_01/scripts.pory"
	.string "Oh? That sounds like a promising place\n"
	.string "to investigate. Do you have, like a map?$"

Planet01_01_RobotGreeting_Text_20:
# 411 "data/maps/Planet01_01/scripts.pory"
	.string "Yes in fact I do! Let me load it up forrr\n"
	.string "you!$"

Planet01_01_RobotGreeting_Text_21:
# 424 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_22:
# 437 "data/maps/Planet01_01/scripts.pory"
	.string "Here you arrre!\n"
	.string "Our old lab is to the left.$"

Planet01_01_RobotGreeting_Text_23:
# 447 "data/maps/Planet01_01/scripts.pory"
	.string "Awesome, a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_24:
# 456 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_25:
# 463 "data/maps/Planet01_01/scripts.pory"
	.string "I'm like, almost 30.$"

Planet01_01_RobotGreeting_Text_26:
# 470 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy earrrly birrrrthday, kiddo.$"

Planet01_01_RobotGreeting_Text_27:
# 477 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_28:
# 484 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_29:
# 498 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 'WILD INDIGO'. \p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient\l"
	.string "places. Our objective is to create\l"
	.string "a lab here for scientific research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_JirachiAppears_Text_0:
# 568 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 576 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "corrupted by a powerful space virus.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 588 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}They will never stop pursuing you. They\n"
	.string "want to infect you and steal your ship.\l"
	.string "Your team... Magnezone... Hm. I guess\l"
	.string "this is the end.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 598 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 612 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 649 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?$"

Planet01_01_JirachiAppears_Text_6:
# 656 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 666 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, wow. Lucky. Very lucky...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 676 "data/maps/Planet01_01/scripts.pory"
	.string "Who the hell are you? I demand you tell\n"
	.string "me! Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 686 "data/maps/Planet01_01/scripts.pory"
	.string "Great. Amnesiac robots, space viruses,\n"
	.string "and psychic assholes. All in the middle\l"
	.string "of nowhere. Serves me right, in a way.$"

EventScript_TheCaptain_Text_0:
# 795 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 803 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yeah, those guys.\n"
	.string "They neverrr botherrred me before.$"

EventScript_TheCaptain_Text_2:
# 811 "data/maps/Planet01_01/scripts.pory"
	.string "...Sure. But what are they?$"

EventScript_TheCaptain_Text_3:
# 818 "data/maps/Planet01_01/scripts.pory"
	.string "I have memorrries of our team, when\n"
	.string "we firrrst arrrived. These things werrre\l"
	.string "not herrre.$"

EventScript_TheCaptain_Text_4:
# 827 "data/maps/Planet01_01/scripts.pory"
	.string "Anything else I should know?$"

EventScript_TheCaptain_Text_5:
# 834 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls arrre not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 852 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_7:
# 860 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_8:
# 867 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your lab was is in the\n"
	.string "forest somewhere?$"

EventScript_TheCaptain_Text_9:
# 875 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterrrfall, yep.$"

EventScript_TheCaptain_Text_10:
# 885 "data/maps/Planet01_01/scripts.pory"
	.string "So, were you a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_11:
# 894 "data/maps/Planet01_01/scripts.pory"
	.string "Of courrrse! Have you seen my hat?$"

EventScript_TheCaptain_Text_12:
# 901 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_13:
# 909 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_14:
# 919 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_15:
# 927 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pokerrrmon with\n"
	.string "waterrrfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_16:
# 939 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "previous explorers.$"

EventScript_TheCaptain_Text_17:
# 947 "data/maps/Planet01_01/scripts.pory"
	.string "Firrre away.$"

EventScript_TheCaptain_Text_18:
# 954 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art Captobot by\n"
	.string "BOTech Enterprrrises. I was the latest\l"
	.string "model when we set out into space.\l"
	.string "Designed to keep up morrrale, maintain\l"
	.string "focus on our objectives, and give full,\l"
	.string "detailed rrreporrrts on all of our\l"
	.string "activities.$"

EventScript_TheCaptain_Text_19:
# 962 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in rrresearching alien PKMN.\n"
	.string "Quiet.\l"
	.string "Didn't like to be the centerrr of\l"
	.string "attention, and often would get lost\l"
	.string "wanderrring off on their own. Made\l"
	.string "excellent notes on this rrregion's\l"
	.string "biological life.$"

EventScript_TheCaptain_Text_20:
# 970 "data/maps/Planet01_01/scripts.pory"
	.string "A genius with an interrrest in building\n"
	.string "structurrres in challenging locations.\l"
	.string "Had their eyes on transforming hostile\l"
	.string "environments into life-sustaining ones\l"
	.string "forrr humans.$"

EventScript_TheCaptain_Text_21:
# 976 "data/maps/Planet01_01/scripts.pory"
	.string "PKMN experrrt and project organizerrr.\n"
	.string "Always ready to help, and easy to talk\l"
	.string "to about anything. Optimistic, harrrd\l"
	.string "worker. Loves giving people and things\l"
	.string "nicknames. Some records suggest they had \l"
	.string "a history with the Biologist, but that's\l"
	.string "just my opinion.$"
