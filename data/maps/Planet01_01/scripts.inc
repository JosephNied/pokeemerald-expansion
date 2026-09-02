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
# 153 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 158 "data/maps/Planet01_01/scripts.pory"
	lock
# 159 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 163 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 168 "data/maps/Planet01_01/scripts.pory"
	lock
# 169 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 174 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 179 "data/maps/Planet01_01/scripts.pory"
	lock
# 180 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 184 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 189 "data/maps/Planet01_01/scripts.pory"
	lock
# 190 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 195 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 200 "data/maps/Planet01_01/scripts.pory"
	lock
# 201 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 202 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 203 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 204 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 205 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 206 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 207 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 208 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 209 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 210 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 211 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 212 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 217 "data/maps/Planet01_01/scripts.pory"
	lock
# 218 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 219 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 220 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 221 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 222 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 224 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 225 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 226 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 227 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 232 "data/maps/Planet01_01/scripts.pory"
	lock
# 233 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 234 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 235 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 236 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 237 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 238 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 239 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 240 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 243 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 244 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 245 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 246 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 247 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 248 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 250 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 251 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 252 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 253 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 254 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 255 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 256 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 257 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 258 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 259 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 260 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 261 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 262 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 263 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 264 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
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
	msgbox Planet01_01_RobotGreeting_Text_4
# 271 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 272 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 273 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 274 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 275 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 277 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 278 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 279 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 280 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 281 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 282 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 284 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 285 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 286 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 287 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 288 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 289 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 291 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 292 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 293 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 298 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 299 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 300 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 302 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 303 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 304 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 307 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 308 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 309 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 311 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 312 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 313 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 314 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 315 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 316 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 318 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 319 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 320 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 321 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 322 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 323 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 325 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 326 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 327 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 330 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 331 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 332 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 334 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 335 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 336 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 338 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 339 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 340 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 342 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 343 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 344 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 348 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 349 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 350 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 352 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 353 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 354 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 356 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 357 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 358 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 360 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 361 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 362 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 363 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 364 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 365 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 367 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 368 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 369 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
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
	msgbox Planet01_01_RobotGreeting_Text_17
# 379 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 380 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 381 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 383 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 384 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 386 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 387 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 388 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 395 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 396 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 397 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 399 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 400 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 401 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 403 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 404 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 406 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 407 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 408 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 410 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 411 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 412 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 414 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 415 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 416 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
# 418 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 419 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 420 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 422 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 423 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 425 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 427 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 428 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 429 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 431 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 432 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 433 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 435 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 437 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 438 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 440 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 441 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 442 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
# 444 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 445 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 446 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 448 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 450 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 451 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 452 "data/maps/Planet01_01/scripts.pory"
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
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
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
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 481 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 482 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 483 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 484 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 485 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 487 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 488 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 489 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_28
# 490 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 491 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 492 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 494 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 495 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 497 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 499 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 500 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 501 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 503 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_29
# 511 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 512 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 513 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 517 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 518 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 519 "data/maps/Planet01_01/scripts.pory"
	face_up
# 520 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 521 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 522 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 523 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 524 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 525 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 526 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 527 "data/maps/Planet01_01/scripts.pory"
	face_up
# 528 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 529 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 530 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 531 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 532 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 533 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 534 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 537 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 538 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 539 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 540 "data/maps/Planet01_01/scripts.pory"
	face_right
# 541 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 542 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 543 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 544 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 545 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 546 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 547 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 548 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 549 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 550 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 551 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 552 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 553 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 557 "data/maps/Planet01_01/scripts.pory"
	lockall
# 558 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 560 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 561 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 562 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 564 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 566 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 567 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 569 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 571 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 572 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 573 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 575 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 576 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 577 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 579 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 580 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 581 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 583 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 584 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 585 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 587 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 588 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 589 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 591 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 592 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 593 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 597 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 598 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 599 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 601 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 602 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 603 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 605 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 606 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 607 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 609 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 610 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 611 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 613 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 615 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 616 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 617 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 618 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 619 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 620 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 622 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 623 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 624 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 625 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 627 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 628 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 630 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 631 "data/maps/Planet01_01/scripts.pory"
	closemessage
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
	closemessage
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
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 660 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 661 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 662 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 663 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 664 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 666 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 667 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 669 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 670 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 671 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 672 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 673 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 674 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 676 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 677 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 679 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 680 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 681 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 685 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 686 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 687 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 689 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 690 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 691 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 694 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 695 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 696 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 699 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 700 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 701 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 702 "data/maps/Planet01_01/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_01_JirachiAppears_2
Planet01_01_JirachiAppears_1:
# 705 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_JirachiAppears_2:
# 703 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 1
	goto Planet01_01_JirachiAppears_1


# 709 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 710 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 711 "data/maps/Planet01_01/scripts.pory"
	face_right
# 712 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 713 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 714 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 715 "data/maps/Planet01_01/scripts.pory"
	face_left
# 716 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 717 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 718 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 721 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 722 "data/maps/Planet01_01/scripts.pory"
	face_up
# 723 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 724 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 727 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 728 "data/maps/Planet01_01/scripts.pory"
	face_up
# 729 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 730 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 733 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 734 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 735 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 736 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 739 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 740 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 741 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 742 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 745 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 746 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 749 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 750 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 753 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 754 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 755 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 758 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 759 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 760 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 763 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 764 "data/maps/Planet01_01/scripts.pory"
	face_down
# 765 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 766 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 767 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 768 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 769 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 770 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 771 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 772 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 773 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 774 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 775 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 776 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 777 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 778 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 779 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 780 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 781 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 784 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 785 "data/maps/Planet01_01/scripts.pory"
	face_up
# 786 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 787 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 788 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 789 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 790 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 794 "data/maps/Planet01_01/scripts.pory"
	lock
# 796 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 853 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 886 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 920 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 940 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 990 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 798 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 799 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 800 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 802 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 803 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 804 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 806 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 807 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 808 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 810 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 811 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 812 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 814 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 815 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 816 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 817 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 818 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 819 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 821 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 822 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 823 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 826 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 827 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 828 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 830 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 831 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 832 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 833 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 834 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 835 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 837 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 838 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 839 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 841 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 842 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 843 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 844 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
# 846 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 847 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 848 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_27
# 849 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 850 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 851 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 855 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 856 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 857 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
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
	msgbox EventScript_TheCaptain_Text_7
# 866 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 867 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 868 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 870 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 871 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 872 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
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
	msgbox EventScript_TheCaptain_Text_9
# 881 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 882 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 883 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 884 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 888 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 889 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 890 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 893 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 894 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 895 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 897 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 898 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 899 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 900 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 901 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 902 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 904 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 905 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 906 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 908 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 909 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 910 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 912 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 913 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 914 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 915 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 916 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 917 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 918 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 922 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 923 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 924 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 926 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 927 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 928 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 930 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 931 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 932 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 935 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 936 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 937 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 938 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 942 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 943 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 944 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 946 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 947 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 948 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 950 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 951 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 952 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 953 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 954 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 955 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 957 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 958 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 966 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 974 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
# 980 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TheCaptain_15
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 959 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 967 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 975 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_15:
# 981 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


Planet01_01_MonstersRegular::
# 995 "data/maps/Planet01_01/scripts.pory"
	lockall
# 996 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_DAILY_SLOTS, 4
# 997 "data/maps/Planet01_01/scripts.pory"
	call voicedialogueABC
# 998 "data/maps/Planet01_01/scripts.pory"
	clearflag FLAG_REGISTERED_BROOKE
# 999 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 1000 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_Ending::
# 1005 "data/maps/Planet01_01/scripts.pory"
	lockall
# 1006 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1007 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_Ending_Movement_0
# 1008 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1009 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1010 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1011 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_0
# 1013 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1014 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1015 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1017 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1018 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1019 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_1
# 1021 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1022 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1023 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1025 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1026 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1027 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_2
# 1031 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1032 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1033 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1035 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 1036 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1037 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_3
# 1040 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1041 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1042 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1044 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1045 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1046 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_4
# 1049 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1050 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1051 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1053 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_5
# 1054 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1056 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 1058 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 1059 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 1060 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Ending_Text_5
# 1061 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 1062 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 1063 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 1064 "data/maps/Planet01_01/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 1065 "data/maps/Planet01_01/scripts.pory"
	special GameClear
# 1066 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 236 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 236 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 236 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 253 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 253 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 253 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 399 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 399 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 399 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 403 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 403 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 422 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 422 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 437 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 437 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 676 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 676 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 676 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 1007 "data/maps/Planet01_01/scripts.pory"
Planet01_01_Ending_Movement_0:
# 1007 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 1007 "data/maps/Planet01_01/scripts.pory"
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
	.string "expedition 'WILD INDIGO'. \p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a lab here for biological research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 159 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 169 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 180 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 190 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: I found the Biologist weeping\n"
	.string "up here; they reported receiving\l"
	.string "strange hallucinations around these\l"
	.string "rocks. I'm not sure what's going on, but\l"
	.string "we need to be careful.$"

Planet01_01_Carbink_Text_0:
# 205 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 210 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 222 "data/maps/Planet01_01/scripts.pory"
	.string "Woah! Elgyem is glowing red-\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well... How did I get here?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_0:
# 240 "data/maps/Planet01_01/scripts.pory"
	.string "...I see can't anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 248 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down herrre, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 257 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 264 "data/maps/Planet01_01/scripts.pory"
	.string "...Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 270 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 279 "data/maps/Planet01_01/scripts.pory"
	.string "Hello, frrreind.$"

Planet01_01_RobotGreeting_Text_6:
# 286 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 293 "data/maps/Planet01_01/scripts.pory"
	.string "Why, I'm the rrrenown Captain of the\n"
	.string "experrrdition WILD INDIGO. Yep, I'm the\l"
	.string "captain. Never let a human do something\l"
	.string "important, that's my motto. It was also\l"
	.string "my company's slogan.$"

Planet01_01_RobotGreeting_Text_8:
# 304 "data/maps/Planet01_01/scripts.pory"
	.string "...Really. You're looking a bit rough...\n"
	.string "But uh, if that's true, is your human\l"
	.string "crew somewhere around here?$"

Planet01_01_RobotGreeting_Text_9:
# 313 "data/maps/Planet01_01/scripts.pory"
	.string "Noooope. They'rrrre long gone, kiddo.$"

Planet01_01_RobotGreeting_Text_10:
# 320 "data/maps/Planet01_01/scripts.pory"
	.string "...Oh. Where'd they go?$"

Planet01_01_RobotGreeting_Text_11:
# 327 "data/maps/Planet01_01/scripts.pory"
	.string "I don't know. I don't rrreally know much\n"
	.string "to be honest, on account of my memories\l"
	.string "missing; orrr, perrrhaps errrased.$"

Planet01_01_RobotGreeting_Text_12:
# 336 "data/maps/Planet01_01/scripts.pory"
	.string "...Ok. Well, any chance you know why I\n"
	.string "can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_13:
# 344 "data/maps/Planet01_01/scripts.pory"
	.string "Well sirrr/ma'am/sirrr'am, it's all\n"
	.string "account of the absurd levels of purrrre\l"
	.string "psychic energy layerrred on top of it.\l"
	.string "Yep.$"

Planet01_01_RobotGreeting_Text_14:
# 354 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "trapping me here?!$"

Planet01_01_RobotGreeting_Text_15:
# 362 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorrry kiddo.$"

Planet01_01_RobotGreeting_Text_16:
# 369 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is unsettling. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_17:
# 377 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you'rrre in luck. See these\n"
	.string "here wall scrrribbles?$"

Planet01_01_RobotGreeting_Text_18:
# 388 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave\n"
	.string "some notes for futurre explorrrerrrs.\p"
	.string "In fact, I've been rrreading them too.\n"
	.string "I've learrrned that our primarrry\l"
	.string "rrresearrrch facility was up the\l"
	.string "waterrrfall in the forrrest just\l"
	.string "overrr to the west.$"

Planet01_01_RobotGreeting_Text_19:
# 408 "data/maps/Planet01_01/scripts.pory"
	.string "Oh? That sounds like a promising place\n"
	.string "to investigate. Do you have, like a map?$"

Planet01_01_RobotGreeting_Text_20:
# 416 "data/maps/Planet01_01/scripts.pory"
	.string "Yes in fact I do! Let me load it up forrr\n"
	.string "you!$"

Planet01_01_RobotGreeting_Text_21:
# 429 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_22:
# 442 "data/maps/Planet01_01/scripts.pory"
	.string "Here you arrre!\n"
	.string "Our old lab is to the left.$"

Planet01_01_RobotGreeting_Text_23:
# 452 "data/maps/Planet01_01/scripts.pory"
	.string "Awesome, a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_24:
# 461 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_25:
# 468 "data/maps/Planet01_01/scripts.pory"
	.string "I'm like, almost 30.$"

Planet01_01_RobotGreeting_Text_26:
# 475 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy earrrly birrrrthday, kiddo.$"

Planet01_01_RobotGreeting_Text_27:
# 482 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_28:
# 489 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_29:
# 503 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 'WILD INDIGO'. \p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient\l"
	.string "places. Our objective is to create\l"
	.string "a lab here for scientific research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_JirachiAppears_Text_0:
# 573 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 581 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "corrupted by a powerful space virus.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 593 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}They will never stop pursuing you. They\n"
	.string "want to infect you and steal your ship.\l"
	.string "Your team... Magnezone... Hm. I guess\l"
	.string "this is the end.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 603 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 617 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 654 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?$"

Planet01_01_JirachiAppears_Text_6:
# 661 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 671 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, wow. Lucky. Very lucky...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 681 "data/maps/Planet01_01/scripts.pory"
	.string "Who the hell are you? I demand you tell\n"
	.string "me! Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 691 "data/maps/Planet01_01/scripts.pory"
	.string "Great. Amnesiac robots, space viruses,\n"
	.string "and psychic assholes. All in the middle\l"
	.string "of nowhere. Serves me right, in a way.$"

EventScript_TheCaptain_Text_0:
# 800 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 808 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yeah, those guys.\n"
	.string "They neverrr botherrred me before.$"

EventScript_TheCaptain_Text_2:
# 816 "data/maps/Planet01_01/scripts.pory"
	.string "...Sure. But what are they?$"

EventScript_TheCaptain_Text_3:
# 823 "data/maps/Planet01_01/scripts.pory"
	.string "I have memorrries of our team, when\n"
	.string "we firrrst arrrived. These things werrre\l"
	.string "not herrre.$"

EventScript_TheCaptain_Text_4:
# 832 "data/maps/Planet01_01/scripts.pory"
	.string "Anything else I should know?$"

EventScript_TheCaptain_Text_5:
# 839 "data/maps/Planet01_01/scripts.pory"
	.string "...The owls arrre not what they\n"
	.string "seem.$"

EventScript_TheCaptain_Text_6:
# 857 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_7:
# 865 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_8:
# 872 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your lab was is in the\n"
	.string "forest somewhere?$"

EventScript_TheCaptain_Text_9:
# 880 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterrrfall, yep.$"

EventScript_TheCaptain_Text_10:
# 890 "data/maps/Planet01_01/scripts.pory"
	.string "So, were you a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_11:
# 899 "data/maps/Planet01_01/scripts.pory"
	.string "Of courrrse! Have you seen my hat?$"

EventScript_TheCaptain_Text_12:
# 906 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_13:
# 914 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_14:
# 924 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_15:
# 932 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pokerrrmon with\n"
	.string "waterrrfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_16:
# 944 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "previous explorers.$"

EventScript_TheCaptain_Text_17:
# 952 "data/maps/Planet01_01/scripts.pory"
	.string "Firrre away.$"

EventScript_TheCaptain_Text_18:
# 959 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art Captobot by\n"
	.string "BOTech Enterprrrises. I was the latest\l"
	.string "model when we set out into space.\l"
	.string "Designed to keep up morrrale, maintain\l"
	.string "focus on our objectives, and give full,\l"
	.string "detailed rrreporrrts on all of our\l"
	.string "activities.$"

EventScript_TheCaptain_Text_19:
# 967 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in rrresearching alien PKMN.\n"
	.string "Quiet.\l"
	.string "Didn't like to be the centerrr of\l"
	.string "attention, and often would get lost\l"
	.string "wanderrring off on their own. Made\l"
	.string "excellent notes on this rrregion's\l"
	.string "biological life.$"

EventScript_TheCaptain_Text_20:
# 975 "data/maps/Planet01_01/scripts.pory"
	.string "A genius with an interrrest in building\n"
	.string "structurrres in challenging locations.\l"
	.string "Had their eyes on transforming hostile\l"
	.string "environments into life-sustaining ones\l"
	.string "forrr humans.$"

EventScript_TheCaptain_Text_21:
# 981 "data/maps/Planet01_01/scripts.pory"
	.string "PKMN experrrt and project organizerrr.\n"
	.string "Always ready to help, and easy to talk\l"
	.string "to about anything. Optimistic, harrrd\l"
	.string "worker. Loves giving people and things\l"
	.string "nicknames. Some records suggest they had \l"
	.string "a history with the Biologist, but that's\l"
	.string "just my opinion.$"

Planet01_01_Ending_Text_0:
# 1011 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', how are the psychic readings\n"
	.string "on the ship?$"

Planet01_01_Ending_Text_1:
# 1019 "data/maps/Planet01_01/scripts.pory"
	.string "Rrreadings negative, kiddo. Should be\n"
	.string "frrree forrr take off.$"

Planet01_01_Ending_Text_2:
# 1027 "data/maps/Planet01_01/scripts.pory"
	.string "...\n"
	.string "I've been thinking.\p"
	.string "How would you like to be the captain\n"
	.string "of a ship again?$"

Planet01_01_Ending_Text_3:
# 1037 "data/maps/Planet01_01/scripts.pory"
	.string "Kiddo. Arrre you... Perrrhaps, serrrious?\n"
	.string "Why, that would fill my ambiguously\l"
	.string "prrresent rrrobot soul with joy.$"

Planet01_01_Ending_Text_4:
# 1046 "data/maps/Planet01_01/scripts.pory"
	.string "Well, they're going to need a replacement.\n"
	.string "I'm quitting when we get back home.\l"
	.string "Let's go.$"

Planet01_01_Ending_Text_5:
# 1060 "data/maps/Planet01_01/scripts.pory"
	.string "Goodbye... Wild Indigo.$"
