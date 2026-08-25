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
# 189 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 194 "data/maps/Planet01_01/scripts.pory"
	lock
# 195 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 196 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 197 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 198 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 199 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 200 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 201 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 202 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 203 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 204 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 205 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 206 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 211 "data/maps/Planet01_01/scripts.pory"
	lock
# 212 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 213 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 214 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 215 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 216 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 218 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 219 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 220 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 221 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 226 "data/maps/Planet01_01/scripts.pory"
	lock
# 227 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 228 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 229 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 230 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 231 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 232 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 233 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 234 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 237 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 238 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 239 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 240 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 241 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 242 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 244 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 245 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 246 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 247 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 248 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 249 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 250 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 251 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 252 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 253 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 254 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 255 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 256 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 257 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 258 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 259 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 260 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 261 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 262 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 263 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 264 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 265 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 266 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 267 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 268 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 269 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 271 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 272 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 273 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 274 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 275 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 276 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 278 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 279 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 280 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 281 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 282 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 283 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 285 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 286 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 287 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 292 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 293 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 294 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 296 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 297 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 298 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 301 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 302 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 303 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 305 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 306 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 307 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
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
	msgbox Planet01_01_RobotGreeting_Text_10
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
	msgbox Planet01_01_RobotGreeting_Text_11
# 324 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 325 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 326 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 328 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 329 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 330 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 332 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 333 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 334 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 336 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 337 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 338 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 342 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 343 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 344 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 346 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 347 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 348 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
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
	msgbox Planet01_01_RobotGreeting_Text_15
# 357 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 358 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 359 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 361 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 362 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 363 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 365 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 366 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 367 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 369 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 370 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 371 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 373 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 374 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 375 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 377 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 378 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 380 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 381 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 382 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 389 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 390 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 391 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 393 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 394 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 395 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 397 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 398 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 400 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 401 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 402 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 404 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 405 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 406 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 408 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 409 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 410 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 412 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 413 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 414 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 416 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 417 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 419 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 421 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 422 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 423 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 425 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 426 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 427 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 429 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 431 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 432 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 434 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 435 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 436 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 438 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 439 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 440 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 442 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 444 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 445 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 446 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 449 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 450 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 451 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 453 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 454 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 455 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 456 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 457 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 458 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 460 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 461 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 462 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 463 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 464 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 465 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 467 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 468 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 469 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 470 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 471 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 472 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 474 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 475 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 476 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 477 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 478 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 479 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 481 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 482 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 483 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_28
# 484 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 485 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 486 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 488 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 489 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 491 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 493 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 494 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 495 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 497 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_29
# 505 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 506 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 507 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 511 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 512 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 513 "data/maps/Planet01_01/scripts.pory"
	face_up
# 514 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 515 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 516 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 517 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 518 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 519 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 520 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 521 "data/maps/Planet01_01/scripts.pory"
	face_up
# 522 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 523 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 524 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 525 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 526 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 527 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 528 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 531 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 532 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 533 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 534 "data/maps/Planet01_01/scripts.pory"
	face_right
# 535 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 536 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 537 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 538 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 539 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 540 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 541 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 542 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 543 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 544 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 545 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 546 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 547 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 551 "data/maps/Planet01_01/scripts.pory"
	lockall
# 552 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 554 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 555 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 556 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 558 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 560 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 561 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 563 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 565 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 566 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 567 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 569 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 570 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 571 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 573 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 574 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 575 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 577 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 578 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 579 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 581 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 582 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 583 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 585 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 586 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 587 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 591 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 592 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 593 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 595 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 596 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 597 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 599 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 600 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 601 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 603 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 604 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 605 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 607 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 609 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 610 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 611 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 612 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 613 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 614 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 616 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 617 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 618 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 619 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 621 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 622 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 624 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 625 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 626 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 627 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 628 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 629 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 630 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 631 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 632 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 633 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 634 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 635 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 636 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 637 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 638 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 639 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 641 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 643 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 644 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 646 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 647 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 648 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 649 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 650 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 651 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 653 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 654 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 655 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 656 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 657 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 658 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 660 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 661 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 663 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 664 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 665 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 666 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 667 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 668 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 670 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 671 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 673 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 674 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 675 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 679 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 680 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 681 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 683 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 684 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 685 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 688 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 689 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 690 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 693 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 694 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 695 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 696 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 700 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 701 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 702 "data/maps/Planet01_01/scripts.pory"
	face_right
# 703 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 704 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 705 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 706 "data/maps/Planet01_01/scripts.pory"
	face_left
# 707 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 708 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 709 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 712 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 713 "data/maps/Planet01_01/scripts.pory"
	face_up
# 714 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 715 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 718 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 719 "data/maps/Planet01_01/scripts.pory"
	face_up
# 720 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 721 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 724 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 725 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 726 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 727 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 730 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 731 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 732 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 733 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 736 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 737 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 740 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 741 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 744 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 745 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 746 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 749 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 750 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 751 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 754 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 755 "data/maps/Planet01_01/scripts.pory"
	face_down
# 756 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 757 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 758 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 759 "data/maps/Planet01_01/scripts.pory"
	delay_4
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
	delay_8
# 766 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 767 "data/maps/Planet01_01/scripts.pory"
	delay_8
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
	step_end

# 775 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 776 "data/maps/Planet01_01/scripts.pory"
	face_up
# 777 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 778 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 779 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 780 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 781 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 785 "data/maps/Planet01_01/scripts.pory"
	lock
# 787 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 839 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 872 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 906 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 926 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 975 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 789 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 790 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 791 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 793 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 794 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 795 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 797 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 798 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 799 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 801 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 802 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 803 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 805 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 806 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 807 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 808 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 809 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 810 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 812 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 813 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 814 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 817 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 818 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 819 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 821 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 822 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 823 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 824 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 825 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 826 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 828 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 829 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 830 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 834 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 835 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 836 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 837 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 841 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 842 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 843 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 845 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 846 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 847 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 849 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 850 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 851 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
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
	msgbox EventScript_TheCaptain_Text_8
# 860 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 861 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 862 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 864 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 865 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 866 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 867 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 868 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 869 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 870 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 874 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 875 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 876 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
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
	msgbox EventScript_TheCaptain_Text_11
# 886 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 887 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 888 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 890 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 891 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 892 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 894 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 895 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 896 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 898 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 899 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 900 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 901 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 902 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 903 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 904 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 908 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 909 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 910 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
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
	msgbox EventScript_TheCaptain_Text_15
# 921 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 922 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 923 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 924 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 928 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 929 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 930 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
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
	msgbox EventScript_TheCaptain_Text_17
# 939 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 940 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 941 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 943 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 944 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 952 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 960 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
# 966 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TheCaptain_15
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 945 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 953 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 961 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_15:
# 967 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 980 "data/maps/Planet01_01/scripts.pory"
	lock
# 981 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 982 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 983 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 984 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 230 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 230 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 230 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 247 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 247 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 247 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 393 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 393 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 393 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 397 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 397 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 416 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 416 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 431 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 431 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 670 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 670 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 670 "data/maps/Planet01_01/scripts.pory"
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
	.string "Biologist: There are a lot of\n"
	.string "members of the Clefairy family around\l"
	.string "these rocks. They must prefer to live\l"
	.string "in the mountains.$"

Planet01_01_Carbink_Text_0:
# 199 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 204 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 216 "data/maps/Planet01_01/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's flashing red-$"

Planet01_01_RobotGreeting_Text_0:
# 234 "data/maps/Planet01_01/scripts.pory"
	.string "...I see can't anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 242 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down herrre, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 251 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 258 "data/maps/Planet01_01/scripts.pory"
	.string "...Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 264 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 273 "data/maps/Planet01_01/scripts.pory"
	.string "Hello, frrreind.$"

Planet01_01_RobotGreeting_Text_6:
# 280 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 287 "data/maps/Planet01_01/scripts.pory"
	.string "Why, I'm the rrrenown Captain of the\n"
	.string "experrrdition WILD INDIGO. Yep, I'm the\l"
	.string "captain. Never let a human do something\l"
	.string "important, that's my motto. It was also\l"
	.string "my company's slogan.$"

Planet01_01_RobotGreeting_Text_8:
# 298 "data/maps/Planet01_01/scripts.pory"
	.string "...Really. You're looking a bit rough...\n"
	.string "But uh, if that's true, is your human\l"
	.string "crew somewhere around here?$"

Planet01_01_RobotGreeting_Text_9:
# 307 "data/maps/Planet01_01/scripts.pory"
	.string "Noooope. They'rrrre long gone, kiddo.$"

Planet01_01_RobotGreeting_Text_10:
# 314 "data/maps/Planet01_01/scripts.pory"
	.string "...Oh. Where'd they go?$"

Planet01_01_RobotGreeting_Text_11:
# 321 "data/maps/Planet01_01/scripts.pory"
	.string "I don't know. I don't rrreally know much\n"
	.string "to be honest, on account of my memories\l"
	.string "missing; orrr, perrrhaps errrased.$"

Planet01_01_RobotGreeting_Text_12:
# 330 "data/maps/Planet01_01/scripts.pory"
	.string "...Ok. Well, any chance you know why I\n"
	.string "can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_13:
# 338 "data/maps/Planet01_01/scripts.pory"
	.string "Well sirrr/ma'am/sirrr'am, it's all\n"
	.string "account of the absurd levels of purrrre\l"
	.string "psychic energy layerrred on top of it.\l"
	.string "Yep.$"

Planet01_01_RobotGreeting_Text_14:
# 348 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "trapping me here?!$"

Planet01_01_RobotGreeting_Text_15:
# 356 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorrry kiddo.$"

Planet01_01_RobotGreeting_Text_16:
# 363 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is unsettling. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_17:
# 371 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you'rrre in luck. See these\n"
	.string "here wall scrrribbles?$"

Planet01_01_RobotGreeting_Text_18:
# 382 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave\n"
	.string "some notes for futurre explorrrerrrs.\p"
	.string "In fact, I've been rrreading them too.\n"
	.string "I've learrrned that our primarrry\l"
	.string "rrresearrrch facility was up the\l"
	.string "waterrrfall in the forrrest just\l"
	.string "overrr to the west.$"

Planet01_01_RobotGreeting_Text_19:
# 402 "data/maps/Planet01_01/scripts.pory"
	.string "Oh? That sounds like a promising place\n"
	.string "to investigate. Do you have, like a map?$"

Planet01_01_RobotGreeting_Text_20:
# 410 "data/maps/Planet01_01/scripts.pory"
	.string "Yes in fact I do! Let me load it up forrr\n"
	.string "you!$"

Planet01_01_RobotGreeting_Text_21:
# 423 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_22:
# 436 "data/maps/Planet01_01/scripts.pory"
	.string "Here you arrre!\n"
	.string "Our old lab is to the left.$"

Planet01_01_RobotGreeting_Text_23:
# 446 "data/maps/Planet01_01/scripts.pory"
	.string "Awesome, a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_24:
# 455 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_25:
# 462 "data/maps/Planet01_01/scripts.pory"
	.string "I'm like, almost 30.$"

Planet01_01_RobotGreeting_Text_26:
# 469 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy earrrly birrrrthday, kiddo.$"

Planet01_01_RobotGreeting_Text_27:
# 476 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_28:
# 483 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_29:
# 497 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 'WILD INDIGO'. \p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient\l"
	.string "places. Our objective is to create\l"
	.string "a lab here for scientific research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_JirachiAppears_Text_0:
# 567 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 575 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "corrupted by a powerful space virus.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 587 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}They will never stop pursuing you. They\n"
	.string "want to infect you and steal your ship.\l"
	.string "Your team... Magnezone... Hm. I guess\l"
	.string "this is the end.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 597 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 611 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 648 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?$"

Planet01_01_JirachiAppears_Text_6:
# 655 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 665 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, wow. Lucky. Very lucky...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 675 "data/maps/Planet01_01/scripts.pory"
	.string "Who the hell are you? I demand you tell\n"
	.string "me! Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 685 "data/maps/Planet01_01/scripts.pory"
	.string "Great. Amnesiac robots, space viruses,\n"
	.string "and psychic assholes. All in the middle\l"
	.string "of nowhere. Serves me right, in a way.$"

EventScript_TheCaptain_Text_0:
# 791 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 799 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yeah, those guys.\n"
	.string "They neverrr botherrred me before.$"

EventScript_TheCaptain_Text_2:
# 807 "data/maps/Planet01_01/scripts.pory"
	.string "...Sure. But what are they?$"

EventScript_TheCaptain_Text_3:
# 814 "data/maps/Planet01_01/scripts.pory"
	.string "I have memorrries of our team, when\n"
	.string "we firrrst arrrived. These things werrre\l"
	.string "not herrre.$"

EventScript_TheCaptain_Text_4:
# 823 "data/maps/Planet01_01/scripts.pory"
	.string "How long ago was the expedition?$"

EventScript_TheCaptain_Text_5:
# 830 "data/maps/Planet01_01/scripts.pory"
	.string "Memorrry gap ends a while back...\n"
	.string "I'd estimate five yearrrs? But I don't\l"
	.string "know how long we werrre herrre, or\l"
	.string "how long ago we arrrived.$"

EventScript_TheCaptain_Text_6:
# 843 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_7:
# 851 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_8:
# 858 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your lab was is in the\n"
	.string "forest somewhere?$"

EventScript_TheCaptain_Text_9:
# 866 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterrrfall, yep.$"

EventScript_TheCaptain_Text_10:
# 876 "data/maps/Planet01_01/scripts.pory"
	.string "So, were you a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_11:
# 885 "data/maps/Planet01_01/scripts.pory"
	.string "Of courrrse! Have you seen my hat?$"

EventScript_TheCaptain_Text_12:
# 892 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_13:
# 900 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_14:
# 910 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_15:
# 918 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pokerrrmon with\n"
	.string "waterrrfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_16:
# 930 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "previous explorers.$"

EventScript_TheCaptain_Text_17:
# 938 "data/maps/Planet01_01/scripts.pory"
	.string "Firrre away.$"

EventScript_TheCaptain_Text_18:
# 945 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art Captobot by\n"
	.string "BOTech Enterprrrises. I was the latest\l"
	.string "model when we set out into space.\l"
	.string "Designed to keep up morrrale, maintain\l"
	.string "focus on our objectives, and give full,\l"
	.string "detailed rrreporrrts on all of our\l"
	.string "activities.$"

EventScript_TheCaptain_Text_19:
# 953 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in rrresearching alien PKMN.\n"
	.string "Quiet.\l"
	.string "Didn't like to be the centerrr of\l"
	.string "attention, and often would get lost\l"
	.string "wanderrring off on their own. Made\l"
	.string "excellent notes on this rrregion's\l"
	.string "biological life.$"

EventScript_TheCaptain_Text_20:
# 961 "data/maps/Planet01_01/scripts.pory"
	.string "A genius with an interrrest in building\n"
	.string "structurrres in challenging locations.\l"
	.string "Had their eyes on transforming hostile\l"
	.string "environments into life-sustaining ones\l"
	.string "forrr humans.$"

EventScript_TheCaptain_Text_21:
# 967 "data/maps/Planet01_01/scripts.pory"
	.string "PKMN experrrt and project organizerrr.\n"
	.string "Always ready to help, and easy to talk\l"
	.string "to about anything. Optimistic, harrrd\l"
	.string "worker. Some records suggest they had \l"
	.string "a history with the Biologist, but that's\l"
	.string "just my intuition.$"
