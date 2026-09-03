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
# 156 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 161 "data/maps/Planet01_01/scripts.pory"
	lock
# 162 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 166 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 171 "data/maps/Planet01_01/scripts.pory"
	lock
# 172 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 177 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 182 "data/maps/Planet01_01/scripts.pory"
	lock
# 183 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 187 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 192 "data/maps/Planet01_01/scripts.pory"
	lock
# 193 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 198 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 203 "data/maps/Planet01_01/scripts.pory"
	lock
# 204 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 205 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 206 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 207 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 208 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 209 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 210 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 211 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 212 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 213 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 214 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 215 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 220 "data/maps/Planet01_01/scripts.pory"
	lock
# 221 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 222 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 223 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 224 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 225 "data/maps/Planet01_01/scripts.pory"
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
# 238 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
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
# 301 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 302 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 303 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 305 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 306 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 307 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 310 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 311 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 312 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 314 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 315 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 316 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 317 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 318 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 319 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 321 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 322 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 323 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 324 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 325 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 326 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 328 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 329 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 330 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 333 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 334 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 335 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 337 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 338 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 339 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 341 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 342 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 343 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 345 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 346 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 347 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 351 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 352 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 353 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 355 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 356 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 357 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 359 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 360 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 361 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 363 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 364 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 365 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 366 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 367 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 368 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 370 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 371 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 372 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
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
	msgbox Planet01_01_RobotGreeting_Text_17
# 382 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 383 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 384 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 386 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 387 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 389 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 390 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 391 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 398 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 399 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 400 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 402 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 403 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 404 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 406 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 407 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 409 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 410 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 411 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 413 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 414 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 415 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 417 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 418 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 419 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 421 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 422 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 423 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 425 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 426 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 428 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 430 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 431 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 432 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 434 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 435 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 436 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 438 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 440 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 441 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 443 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 444 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 445 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 447 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 448 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 449 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 451 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 453 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 454 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 455 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 458 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 459 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 460 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 462 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 463 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 464 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 465 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 466 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 467 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 469 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 470 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 471 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
# 472 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 473 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 474 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 476 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 477 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 478 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_26
# 479 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 480 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 481 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 483 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 484 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 485 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 486 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 487 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 488 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 490 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 491 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 492 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_28
# 493 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 494 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 495 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 497 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 498 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 500 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 502 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 503 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 504 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 506 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 517 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 518 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 519 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 523 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 524 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 525 "data/maps/Planet01_01/scripts.pory"
	face_up
# 526 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 527 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 528 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 529 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 530 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 531 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 532 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 533 "data/maps/Planet01_01/scripts.pory"
	face_up
# 534 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 535 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 536 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 537 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 538 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 539 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 540 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 543 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 544 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 545 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 546 "data/maps/Planet01_01/scripts.pory"
	face_right
# 547 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 548 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 549 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 550 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 551 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 552 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 553 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 554 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 555 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 556 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 557 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 558 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 559 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 563 "data/maps/Planet01_01/scripts.pory"
	lockall
# 564 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 566 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 567 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 568 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 570 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 572 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 573 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 575 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 577 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 578 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 579 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 581 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 582 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 583 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 585 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 586 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 587 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 589 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 590 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 591 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 593 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 594 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 595 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 597 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 598 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 599 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 603 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 604 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 605 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 607 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 608 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 609 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 611 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 612 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 613 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 615 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 616 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 617 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 619 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 621 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 622 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 623 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 624 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 625 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 626 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 628 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 629 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 630 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 631 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 633 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 634 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 636 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 637 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 638 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 639 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 640 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 641 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 642 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 643 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 644 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 645 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 646 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 647 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 648 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 649 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 650 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 651 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 653 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 655 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 656 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 658 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 659 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 660 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 661 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 662 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 663 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 665 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 666 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 667 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 668 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 669 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 670 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 672 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 673 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 675 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 676 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 677 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 681 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 682 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 683 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 685 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 686 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 688 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 689 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 690 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 694 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 695 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 696 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 698 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 700 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 701 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 702 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 705 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 706 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 707 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 710 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 711 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 712 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 713 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 716 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 714 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 720 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 721 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 722 "data/maps/Planet01_01/scripts.pory"
	face_right
# 723 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 724 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 725 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 726 "data/maps/Planet01_01/scripts.pory"
	face_left
# 727 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 728 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 729 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 732 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 733 "data/maps/Planet01_01/scripts.pory"
	face_up
# 734 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 735 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 738 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 739 "data/maps/Planet01_01/scripts.pory"
	face_up
# 740 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 741 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 744 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 745 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 746 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 747 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 750 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 751 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 752 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 753 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 756 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 757 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 760 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 761 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 764 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 765 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 766 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 769 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 770 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 771 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 774 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 775 "data/maps/Planet01_01/scripts.pory"
	face_down
# 776 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 777 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 778 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 779 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 780 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 781 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 782 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 783 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 784 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 785 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 786 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 787 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 788 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 789 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 790 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 791 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 792 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 795 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 796 "data/maps/Planet01_01/scripts.pory"
	face_up
# 797 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 798 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 799 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 800 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 801 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 805 "data/maps/Planet01_01/scripts.pory"
	lock
# 807 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 864 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 897 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 931 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 951 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 1003 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 809 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 810 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 811 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 813 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 814 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 815 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 817 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 818 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 819 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 821 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 822 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 823 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 825 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 826 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 827 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
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
	msgbox EventScript_TheCaptain_Text_3
# 837 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 838 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 839 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 841 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 842 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 843 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
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
	msgbox EventScript_TheCaptain_Text_5
# 852 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 853 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 854 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 855 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 857 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 858 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 859 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 860 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 861 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 862 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 866 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 867 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 868 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 870 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 871 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 872 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 874 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 875 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 876 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 877 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 878 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 879 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 881 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 882 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 883 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 885 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 886 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 887 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 889 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 890 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 891 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 892 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 893 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 894 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 895 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 899 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 900 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 901 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
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
	msgbox EventScript_TheCaptain_Text_12
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
	msgbox EventScript_TheCaptain_Text_13
# 919 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 920 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 921 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 923 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 924 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 925 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 926 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 927 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 928 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 929 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 933 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 934 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 935 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
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
	msgbox EventScript_TheCaptain_Text_16
# 946 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 947 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 948 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 949 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 953 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 954 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 955 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 957 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 958 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 959 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 961 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 962 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 963 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
# 964 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 965 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 966 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 968 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 969 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 977 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 987 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
# 993 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TheCaptain_15
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 970 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 978 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 988 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_15:
# 994 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_22
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 1008 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1009 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 1010 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 1011 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 1012 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1013 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1018 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1019 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1020 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1021 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1022 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1023 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1024 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1026 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1027 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1028 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1030 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1031 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1032 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1034 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1035 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1036 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1038 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1039 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1040 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1044 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1045 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1046 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1048 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1049 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1050 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1053 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1054 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1055 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1057 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1058 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1059 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1062 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1063 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1064 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1066 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1067 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1069 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1071 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1072 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1073 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1074 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1075 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1076 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1077 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1078 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1079 "data/maps/Planet01_01/scripts.pory"
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

# 402 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 402 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 402 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 406 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 406 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 425 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 425 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 440 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 440 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 685 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 685 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 685 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1020 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1020 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1020 "data/maps/Planet01_01/scripts.pory"
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
	.string "Our team consists of a Biologist,\n"
	.string "an Engineer, and our Operations Lead!\p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient\l"
	.string "places. Our objective is to establish\l"
	.string "a research facility, focusing on\l"
	.string "physics and Pokémon biology.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 162 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass.$"

Planet01_01_HintText03_Text_0:
# 172 "data/maps/Planet01_01/scripts.pory"
	.string "Ops Lead: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples! Exciting!$"

Planet01_01_HintText04_Text_0:
# 183 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Very lucky.$"

Planet01_01_HintText05_Text_0:
# 193 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: I found the Biologist weeping\n"
	.string "up here; they reported receiving\l"
	.string "strange hallucinations around these\l"
	.string "rocks. I'm not sure what's going on, but\l"
	.string "we need to be careful.$"

Planet01_01_Carbink_Text_0:
# 208 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 213 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 225 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing red-\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well... How did I get here?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 243 "data/maps/Planet01_01/scripts.pory"
	.string "...I see can't anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 251 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down herrre, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 260 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 267 "data/maps/Planet01_01/scripts.pory"
	.string "...Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 273 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 282 "data/maps/Planet01_01/scripts.pory"
	.string "Hello, frrreind.$"

Planet01_01_RobotGreeting_Text_6:
# 289 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 296 "data/maps/Planet01_01/scripts.pory"
	.string "Why, I'm the rrrenown Captain of the\n"
	.string "expedition EDGE OF DAWN. Yep, I'm the\l"
	.string "captain. Never let a human do anything\l"
	.string "important, that's what I always say. It\l"
	.string "was also my company's slogan.$"

Planet01_01_RobotGreeting_Text_8:
# 307 "data/maps/Planet01_01/scripts.pory"
	.string "...Really. You're looking a bit rough...\n"
	.string "But uh, if that's true, is your human\l"
	.string "crew somewhere around here?$"

Planet01_01_RobotGreeting_Text_9:
# 316 "data/maps/Planet01_01/scripts.pory"
	.string "Noooope. They'rrrre long gone, kiddo.$"

Planet01_01_RobotGreeting_Text_10:
# 323 "data/maps/Planet01_01/scripts.pory"
	.string "...Oh. Where'd they go?$"

Planet01_01_RobotGreeting_Text_11:
# 330 "data/maps/Planet01_01/scripts.pory"
	.string "I don't know. I don't rrreally know much\n"
	.string "to be honest, on account of my memories\l"
	.string "missing; orrr, perrrhaps errrased.$"

Planet01_01_RobotGreeting_Text_12:
# 339 "data/maps/Planet01_01/scripts.pory"
	.string "...Great. Well, any chance you know why I\n"
	.string "can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_13:
# 347 "data/maps/Planet01_01/scripts.pory"
	.string "Well sirrrma'am, it's all account of the\n"
	.string "absurrrd levels of purrre psychic\l"
	.string "enerrrgy layerrred on top of it.\l"
	.string "Yep.$"

Planet01_01_RobotGreeting_Text_14:
# 357 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "TRAPPING me here?!$"

Planet01_01_RobotGreeting_Text_15:
# 365 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorrry kiddo.$"

Planet01_01_RobotGreeting_Text_16:
# 372 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is not good. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_17:
# 380 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you'rrre in luck. See these\n"
	.string "here wall scrrribbles?$"

Planet01_01_RobotGreeting_Text_18:
# 391 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave\n"
	.string "some notes for futurre explorrrerrrs.\p"
	.string "In fact, I've been rrreading them too.\n"
	.string "I've learrrned that our primarrry\l"
	.string "rrresearrrch facility was up the\l"
	.string "waterrrfall in the forrrest just\l"
	.string "overrr to the west.$"

Planet01_01_RobotGreeting_Text_19:
# 411 "data/maps/Planet01_01/scripts.pory"
	.string "Oh? That sounds like a promising place\n"
	.string "to investigate. Do you have, like a map?$"

Planet01_01_RobotGreeting_Text_20:
# 419 "data/maps/Planet01_01/scripts.pory"
	.string "Well of courrrse I do kiddo! Let me load\n"
	.string "it up forrr you!$"

Planet01_01_RobotGreeting_Text_21:
# 432 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_22:
# 445 "data/maps/Planet01_01/scripts.pory"
	.string "Here you arrre!\n"
	.string "Our old lab is to the left.$"

Planet01_01_RobotGreeting_Text_23:
# 455 "data/maps/Planet01_01/scripts.pory"
	.string "Well, it is a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_24:
# 464 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_25:
# 471 "data/maps/Planet01_01/scripts.pory"
	.string "I'm like, almost 30.$"

Planet01_01_RobotGreeting_Text_26:
# 478 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy earrrly birrrrthday, kiddo.$"

Planet01_01_RobotGreeting_Text_27:
# 485 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_28:
# 492 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_JirachiAppears_Text_0:
# 579 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 587 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "corrupted by a powerful space virus.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 599 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}They will never stop pursuing you. They\n"
	.string "want to infect you and steal your ship.\l"
	.string "Your team... Magnezone... Hm. I guess\l"
	.string "this is the end.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 609 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 623 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 660 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?$"

Planet01_01_JirachiAppears_Text_6:
# 667 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 677 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, wow. Lucky. Very lucky...>\p"
	.string "Since you've been given the chance to\n"
	.string "fight for your survival, I'll warn you,\l"
	.string "this greedy planet takes and takes...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 690 "data/maps/Planet01_01/scripts.pory"
	.string "Who the hell are you? I demand you tell\n"
	.string "me! Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 702 "data/maps/Planet01_01/scripts.pory"
	.string "Great. Amnesiac robots, space viruses,\n"
	.string "and psychic assholes. All in the middle\l"
	.string "of nowhere. Serves me right, in a way.$"

EventScript_TheCaptain_Text_0:
# 811 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 819 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yeah, those guys.\n"
	.string "They neverrr botherrred me before.$"

EventScript_TheCaptain_Text_2:
# 827 "data/maps/Planet01_01/scripts.pory"
	.string "...Ok. But what are they?$"

EventScript_TheCaptain_Text_3:
# 834 "data/maps/Planet01_01/scripts.pory"
	.string "I have memorrries of our team, when\n"
	.string "we firrrst arrrived. These things werrre\l"
	.string "not herrre.$"

EventScript_TheCaptain_Text_4:
# 843 "data/maps/Planet01_01/scripts.pory"
	.string "Anything else I should know?$"

EventScript_TheCaptain_Text_5:
# 850 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls arrre not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 859 "data/maps/Planet01_01/scripts.pory"
	.string "C'mon, man.$"

EventScript_TheCaptain_Text_7:
# 868 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is... great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 876 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_9:
# 883 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your lab was is in the\n"
	.string "Forest somewhere?$"

EventScript_TheCaptain_Text_10:
# 891 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterrrfall, yep.$"

EventScript_TheCaptain_Text_11:
# 901 "data/maps/Planet01_01/scripts.pory"
	.string "So, you were a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_12:
# 910 "data/maps/Planet01_01/scripts.pory"
	.string "Of courrrse! Have you seen my hat?$"

EventScript_TheCaptain_Text_13:
# 917 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_14:
# 925 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_15:
# 935 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_16:
# 943 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pokerrrmon with\n"
	.string "waterrrfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_17:
# 955 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "previous explorers.$"

EventScript_TheCaptain_Text_18:
# 963 "data/maps/Planet01_01/scripts.pory"
	.string "Firrre away.$"

EventScript_TheCaptain_Text_19:
# 970 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art RoboCap by\n"
	.string "BOTech Enterprrrises. I was the latest\l"
	.string "model when we set out into space.\l"
	.string "Designed to keep up morrrale, maintain\l"
	.string "focus on our objectives, and give full,\l"
	.string "detailed rrreporrrts on all of our\l"
	.string "activities.$"

EventScript_TheCaptain_Text_20:
# 978 "data/maps/Planet01_01/scripts.pory"
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
# 988 "data/maps/Planet01_01/scripts.pory"
	.string "A genius with an interrrest in building\n"
	.string "structurrres in challenging locations.\l"
	.string "Had their eyes on transforming hostile\l"
	.string "environments into life-sustaining ones\l"
	.string "forrr humans. Worrrk-orrriented.$"

EventScript_TheCaptain_Text_22:
# 994 "data/maps/Planet01_01/scripts.pory"
	.string "PKMN experrrt and project organizerrr.\n"
	.string "Always ready to help, and easy to talk\l"
	.string "to about anything. Optimistic, harrrd\l"
	.string "worker. Loves giving people and things\l"
	.string "nicknames. Rrrecorrrds suggest they had\l"
	.string "a history with the Biologist, but that's\l"
	.string "just my interrrprrretation.$"

Planet01_01_Ending_Text_0:
# 1024 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1032 "data/maps/Planet01_01/scripts.pory"
	.string "Rrreadings negative, kiddo. Should be\n"
	.string "frrree forrr take off.$"

Planet01_01_Ending_Text_2:
# 1040 "data/maps/Planet01_01/scripts.pory"
	.string "...\n"
	.string "I've been thinking.\p"
	.string "How would you like to be the captain\n"
	.string "of a ship again?$"

Planet01_01_Ending_Text_3:
# 1050 "data/maps/Planet01_01/scripts.pory"
	.string "Kiddo. Arrre you... Perrrhaps, serrrious?\n"
	.string "Why, that would fill my ambiguously\l"
	.string "prrresent rrrobot soul with joy.$"

Planet01_01_Ending_Text_4:
# 1059 "data/maps/Planet01_01/scripts.pory"
	.string "Well, they're going to need a replacement.\n"
	.string "I'm quitting when we get back home.\l"
	.string "Let's go.$"

Planet01_01_Ending_Text_5:
# 1073 "data/maps/Planet01_01/scripts.pory"
	.string "Goodbye... Wild Indigo.$"
