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
	setvar VAR_TEMP_0, 1
Planet01_01_Enter_1:
# 28 "data/maps/Planet01_01/scripts.pory"
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


# 32 "data/maps/Planet01_01/scripts.pory"

# 33 "data/maps/Planet01_01/scripts.pory"
Planet01_01_FrameTable::
# 34 "data/maps/Planet01_01/scripts.pory"
	map_script_2 VAR_AIR_TIMER_TRIGGERED, 1, Planet01_01_StartAirTimer
# 35 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, Planet01_01_RobotGreeting
# 36 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 2, Planet01_01_JirachiAppears
# 37 "data/maps/Planet01_01/scripts.pory"
	.2byte 0

Planet01_01_StartAirTimer::
# 41 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 42 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 43 "data/maps/Planet01_01/scripts.pory"
	lockall
# 44 "data/maps/Planet01_01/scripts.pory"
	playse SE_REPEL
# 45 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 46 "data/maps/Planet01_01/scripts.pory"
	callnative EnableO2Meter
# 47 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_EventScript_Item01::
# 52 "data/maps/Planet01_01/scripts.pory"
	lock
# 53 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 54 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 55 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 56 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item02::
# 61 "data/maps/Planet01_01/scripts.pory"
	lock
# 62 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 63 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 64 "data/maps/Planet01_01/scripts.pory"
	removeobject 11
# 65 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item03::
# 70 "data/maps/Planet01_01/scripts.pory"
	lock
# 71 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_COMET_SHARD, 1
# 72 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 73 "data/maps/Planet01_01/scripts.pory"
	removeobject 18
# 74 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirWarning::
# 79 "data/maps/Planet01_01/scripts.pory"
	lockall
# 80 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 81 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AirExpired::
# 86 "data/maps/Planet01_01/scripts.pory"
	lockall
# 87 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 88 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 89 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 90 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 95 "data/maps/Planet01_01/scripts.pory"
	lockall
# 96 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 97 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 98 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 99 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 101 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1
# 102 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 103 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 104 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 105 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 106 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 107 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 108 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 109 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 114 "data/maps/Planet01_01/scripts.pory"
	lockall
# 115 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 116 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 117 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 118 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 120 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 121 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 122 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 123 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 124 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 125 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 126 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 127 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 128 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 133 "data/maps/Planet01_01/scripts.pory"
	lock
# 134 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 142 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 147 "data/maps/Planet01_01/scripts.pory"
	lock
# 148 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 152 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 157 "data/maps/Planet01_01/scripts.pory"
	lock
# 158 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 163 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 168 "data/maps/Planet01_01/scripts.pory"
	lock
# 169 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 173 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 178 "data/maps/Planet01_01/scripts.pory"
	lock
# 179 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 183 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 188 "data/maps/Planet01_01/scripts.pory"
	lock
# 189 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 190 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 191 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 192 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 193 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 194 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 195 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 196 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 197 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 198 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 199 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 200 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 205 "data/maps/Planet01_01/scripts.pory"
	lock
# 206 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 207 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 208 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 209 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 210 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 212 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 213 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 214 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 215 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_RobotGreeting::
# 220 "data/maps/Planet01_01/scripts.pory"
	lock
# 221 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 222 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 223 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 224 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 225 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 226 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 227 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 228 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_0
# 231 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 232 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 233 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 234 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 235 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 236 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_1
# 238 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 239 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 240 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 241 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_1
# 242 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 243 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 244 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 245 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_2
# 246 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 247 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 248 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 249 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 250 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 251 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 252 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_3
# 253 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 254 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 255 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 256 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 257 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 258 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_4
# 259 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 260 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 261 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 262 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 263 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 265 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 266 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 267 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_5
# 268 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 269 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 270 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 272 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 273 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 274 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_6
# 275 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 276 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 277 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 279 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 280 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 281 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_7
# 286 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 287 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 288 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 290 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 291 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 292 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_8
# 294 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 295 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 296 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 298 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 299 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 300 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
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
	msgbox Planet01_01_RobotGreeting_Text_10
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
	msgbox Planet01_01_RobotGreeting_Text_11
# 317 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 318 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 319 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 321 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 322 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 323 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
# 325 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 326 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 327 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 329 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 330 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 331 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_13
# 335 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 336 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 337 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 339 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 340 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 341 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 343 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 344 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 345 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 347 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 348 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 349 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 350 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 351 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 352 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 354 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 355 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 356 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
# 358 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 359 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 360 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 362 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 363 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 364 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_17
# 366 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 367 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 368 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 370 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 371 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 373 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 374 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 375 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
# 382 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 383 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 384 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 386 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_2
# 387 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 388 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 390 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_3
# 391 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 393 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 394 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 395 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_19
# 397 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 398 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 399 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 401 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 402 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 403 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_20
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
	msgbox Planet01_01_RobotGreeting_Text_21
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
	msgbox Planet01_01_RobotGreeting_Text_22
# 431 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 432 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 433 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 435 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 437 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 438 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 439 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_23
# 442 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 443 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 444 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 446 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 447 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 448 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_24
# 449 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 450 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 451 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 453 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 454 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 455 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_25
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
	msgbox Planet01_01_RobotGreeting_Text_26
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
	msgbox Planet01_01_RobotGreeting_Text_27
# 470 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 471 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 472 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 474 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 475 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 476 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_28
# 477 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 478 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 479 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 481 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 482 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 484 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 486 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 487 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 488 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 490 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 498 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 499 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 500 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 504 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 505 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 506 "data/maps/Planet01_01/scripts.pory"
	face_up
# 507 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 508 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 509 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 510 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 511 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 512 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 513 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 514 "data/maps/Planet01_01/scripts.pory"
	face_up
# 515 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 516 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 517 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 518 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 519 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 520 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 521 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 524 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 525 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 526 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 527 "data/maps/Planet01_01/scripts.pory"
	face_right
# 528 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 529 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 530 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 531 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 532 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 533 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 534 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 535 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 536 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 537 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 538 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 539 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 540 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 544 "data/maps/Planet01_01/scripts.pory"
	lockall
# 545 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 547 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 548 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 549 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 551 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 553 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 554 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 556 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 558 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 559 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 560 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 562 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 563 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 564 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 566 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 567 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 568 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 570 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 571 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 572 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 574 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 575 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 576 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 578 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 579 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 580 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 584 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 585 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 586 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 588 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 589 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 590 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 592 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 593 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 594 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 596 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 597 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 598 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 600 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 602 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 603 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 604 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 605 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 606 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 607 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 609 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 610 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 611 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 612 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 614 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 615 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 617 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 618 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 619 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 620 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 621 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 622 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 623 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 624 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 625 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 626 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 627 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 628 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 629 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 630 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 631 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 632 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 634 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 636 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 637 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 639 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 640 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 641 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 642 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 643 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 644 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 646 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 647 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 648 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 649 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 650 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 651 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 653 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 654 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 656 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 657 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 658 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 659 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 660 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 661 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 663 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 664 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 666 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 667 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 668 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 672 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 673 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 674 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 676 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 677 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 678 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 681 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 682 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 683 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 686 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 687 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 688 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 689 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 693 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 694 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 695 "data/maps/Planet01_01/scripts.pory"
	face_right
# 696 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 697 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 698 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 699 "data/maps/Planet01_01/scripts.pory"
	face_left
# 700 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 701 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 702 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 705 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 706 "data/maps/Planet01_01/scripts.pory"
	face_up
# 707 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 708 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 711 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 712 "data/maps/Planet01_01/scripts.pory"
	face_up
# 713 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 714 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 717 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 718 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 719 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 720 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 723 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 724 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 725 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 726 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 729 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 730 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 733 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 734 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 737 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 738 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 739 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 742 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 743 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 744 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 747 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 748 "data/maps/Planet01_01/scripts.pory"
	face_down
# 749 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 750 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 751 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 752 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 753 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 754 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 755 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 756 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 757 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 758 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 759 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 760 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 761 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 762 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 763 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 764 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 765 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 768 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 769 "data/maps/Planet01_01/scripts.pory"
	face_up
# 770 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 771 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 772 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 773 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 774 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 778 "data/maps/Planet01_01/scripts.pory"
	lock
# 780 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 832 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 865 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 899 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 919 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 968 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 782 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 783 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 784 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 786 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 787 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 788 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 790 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 791 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 792 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 794 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 795 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 796 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 798 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 799 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 800 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 801 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 802 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 803 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 805 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 806 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 807 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 810 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 811 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 812 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 814 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 815 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 816 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
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
	msgbox EventScript_TheCaptain_Text_5
# 827 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 828 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 829 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 830 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 834 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 835 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 836 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
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
	msgbox EventScript_TheCaptain_Text_7
# 845 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 846 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 847 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 849 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 850 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 851 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 853 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 854 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 855 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 857 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 858 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 859 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 860 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 861 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 862 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 863 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 867 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 868 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 869 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 872 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 873 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 874 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 876 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 877 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 878 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 879 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 880 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 881 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 883 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 884 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 885 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
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
	msgbox EventScript_TheCaptain_Text_13
# 894 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 895 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 896 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 897 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 901 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 902 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 903 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 905 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 906 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 907 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 909 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 910 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 911 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 914 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 915 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 916 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 917 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 921 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 922 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 923 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
# 925 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 926 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 927 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 929 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 930 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 931 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_17
# 932 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 933 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 934 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 936 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 937 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 945 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 953 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
# 959 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TheCaptain_15
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 938 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 946 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 954 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_15:
# 960 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_21
	goto EventScript_TheCaptain_1


# 224 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_0:
# 224 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 224 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 241 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_1:
# 241 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 241 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 386 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_2:
# 386 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 386 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 390 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_3:
# 390 "data/maps/Planet01_01/scripts.pory"
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

# 663 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 663 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 663 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

Planet01_01_StartAirTimer_Text_0:
# 45 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 80 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 87 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 99 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 106 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 134 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 001. \p"
	.string "Our team has placed notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a lab here for biological research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 148 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 158 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 169 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 179 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: There are a lot of\n"
	.string "members of the Clefairy family around\l"
	.string "these rocks. They must prefer to live\l"
	.string "in the mountains.$"

Planet01_01_Carbink_Text_0:
# 193 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 198 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 210 "data/maps/Planet01_01/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's flashing red-$"

Planet01_01_RobotGreeting_Text_0:
# 228 "data/maps/Planet01_01/scripts.pory"
	.string "...I see can't anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_RobotGreeting_Text_1:
# 236 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down herrre, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_2:
# 245 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_RobotGreeting_Text_3:
# 252 "data/maps/Planet01_01/scripts.pory"
	.string "...Hello? How do I get down?$"

Planet01_01_RobotGreeting_Text_4:
# 258 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_RobotGreeting_Text_5:
# 267 "data/maps/Planet01_01/scripts.pory"
	.string "Hello, frrreind.$"

Planet01_01_RobotGreeting_Text_6:
# 274 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_RobotGreeting_Text_7:
# 281 "data/maps/Planet01_01/scripts.pory"
	.string "Why, I'm the captain of the \n"
	.string "experrrdition LYDIAN. Yep, I'm the\l"
	.string "captain. Never let a human do something\l"
	.string "important, that's my motto. It was also\l"
	.string "my company's slogan.$"

Planet01_01_RobotGreeting_Text_8:
# 292 "data/maps/Planet01_01/scripts.pory"
	.string "...Really. Uh, if that's so, is your\n"
	.string "human crew somewhere around here?$"

Planet01_01_RobotGreeting_Text_9:
# 300 "data/maps/Planet01_01/scripts.pory"
	.string "Noooope. They'rrrre long gone, kiddo.$"

Planet01_01_RobotGreeting_Text_10:
# 307 "data/maps/Planet01_01/scripts.pory"
	.string "...Oh. Where'd they go?$"

Planet01_01_RobotGreeting_Text_11:
# 314 "data/maps/Planet01_01/scripts.pory"
	.string "I don't know. I don't really know much\n"
	.string "to be honest, on account of my memories\l"
	.string "missing; orrr, perrrhaps errrased.$"

Planet01_01_RobotGreeting_Text_12:
# 323 "data/maps/Planet01_01/scripts.pory"
	.string "...Ok. Well, any chance you know why I\n"
	.string "can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_13:
# 331 "data/maps/Planet01_01/scripts.pory"
	.string "Well sirrr/ma'am/sirrr'am, it's all\n"
	.string "account of the absurd levels of purrrre\l"
	.string "psychic energy layerrred on top of it.\l"
	.string "Yep.$"

Planet01_01_RobotGreeting_Text_14:
# 341 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "trapping me here?!$"

Planet01_01_RobotGreeting_Text_15:
# 349 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorrry kiddo.$"

Planet01_01_RobotGreeting_Text_16:
# 356 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is unsettling. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_17:
# 364 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you'rrre in luck. See these\n"
	.string "here wall scribbles?$"

Planet01_01_RobotGreeting_Text_18:
# 375 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave\n"
	.string "some notes for futurre explorrrerrrs.\p"
	.string "In fact, I've been rrreading them too.\n"
	.string "I've learrrned that our primary\l"
	.string "rrresearrrch facility was up the\l"
	.string "waterrrfall in the forrrest just\l"
	.string "overrr to the west.$"

Planet01_01_RobotGreeting_Text_19:
# 395 "data/maps/Planet01_01/scripts.pory"
	.string "Oh? That sounds like a promising place\n"
	.string "to investigate. Do you have, like a map?$"

Planet01_01_RobotGreeting_Text_20:
# 403 "data/maps/Planet01_01/scripts.pory"
	.string "Yes in fact I do! Let me load it up for\n"
	.string "you!$"

Planet01_01_RobotGreeting_Text_21:
# 416 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_22:
# 429 "data/maps/Planet01_01/scripts.pory"
	.string "Here you arrre!\n"
	.string "Our old lab is to the left.$"

Planet01_01_RobotGreeting_Text_23:
# 439 "data/maps/Planet01_01/scripts.pory"
	.string "Awesome, a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_24:
# 448 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_25:
# 455 "data/maps/Planet01_01/scripts.pory"
	.string "I'm like, almost 30.$"

Planet01_01_RobotGreeting_Text_26:
# 462 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo.$"

Planet01_01_RobotGreeting_Text_27:
# 469 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_28:
# 476 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_JirachiAppears_Text_0:
# 560 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 568 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "corrupted by a powerful space virus.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 580 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}They will never stop pursuing you. They\n"
	.string "want to infect you and steal your ship.\l"
	.string "Your team... Magnezone... Hm. I guess\l"
	.string "this is the end.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 590 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 604 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 641 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?$"

Planet01_01_JirachiAppears_Text_6:
# 648 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 658 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, wow. Lucky. Very lucky...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 668 "data/maps/Planet01_01/scripts.pory"
	.string "Who the hell are you? I demand you tell\n"
	.string "me! Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 678 "data/maps/Planet01_01/scripts.pory"
	.string "Great. Amnesiac robots, space viruses,\n"
	.string "and psychic assholes. All in the middle\l"
	.string "of nowhere. Serves me right, in a way.$"

EventScript_TheCaptain_Text_0:
# 784 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 792 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yeah, those guys.\n"
	.string "They neverrr botherrred me before.$"

EventScript_TheCaptain_Text_2:
# 800 "data/maps/Planet01_01/scripts.pory"
	.string "...Sure. But what are they?$"

EventScript_TheCaptain_Text_3:
# 807 "data/maps/Planet01_01/scripts.pory"
	.string "I have memorrries of our team, when\n"
	.string "we firrrst arrrived. These things werrre\l"
	.string "not herrre.$"

EventScript_TheCaptain_Text_4:
# 816 "data/maps/Planet01_01/scripts.pory"
	.string "How long ago was the expedition?$"

EventScript_TheCaptain_Text_5:
# 823 "data/maps/Planet01_01/scripts.pory"
	.string "Memorrry gap ends a while back...\n"
	.string "I'd estimate five yearrrs? But I don't\l"
	.string "know how long we werrre herrre, or\l"
	.string "how long ago we arrrived.$"

EventScript_TheCaptain_Text_6:
# 836 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_7:
# 844 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_8:
# 851 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your lab was is in the\n"
	.string "forest somewhere?$"

EventScript_TheCaptain_Text_9:
# 859 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterrrfall, yep.$"

EventScript_TheCaptain_Text_10:
# 869 "data/maps/Planet01_01/scripts.pory"
	.string "So, were you a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_11:
# 878 "data/maps/Planet01_01/scripts.pory"
	.string "Of courrrse! Have you seen my hat?$"

EventScript_TheCaptain_Text_12:
# 885 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_13:
# 893 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_14:
# 903 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_15:
# 911 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pokerrrmon with\n"
	.string "waterrrfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_16:
# 923 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "previous explorers.$"

EventScript_TheCaptain_Text_17:
# 931 "data/maps/Planet01_01/scripts.pory"
	.string "Firrre away.$"

EventScript_TheCaptain_Text_18:
# 938 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art Captobot by\n"
	.string "BOTech Enterprrrises. I was the latest\l"
	.string "model when we set out into space.\l"
	.string "Designed to keep up morrrale, maintain\l"
	.string "focus on our objectives, and give full,\l"
	.string "detailed rrreporrrts on all of our\l"
	.string "activities.$"

EventScript_TheCaptain_Text_19:
# 946 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in rrresearching alien PKMN.\n"
	.string "Quiet.\l"
	.string "Didn't like to be the centerrr of\l"
	.string "attention, and often would get lost\l"
	.string "wanderrring off on their own. Made\l"
	.string "excellent notes on this rrregion's\l"
	.string "biological life.$"

EventScript_TheCaptain_Text_20:
# 954 "data/maps/Planet01_01/scripts.pory"
	.string "A genius with an interrrest in building\n"
	.string "structurrres in challenging locations.\l"
	.string "Had their eyes on transforming hostile\l"
	.string "environments into life-sustaining ones\l"
	.string "forrr humans.$"

EventScript_TheCaptain_Text_21:
# 960 "data/maps/Planet01_01/scripts.pory"
	.string "PKMN experrrt and project organizerrr.\n"
	.string "Always ready to help, and easy to talk\l"
	.string "to about anything. Optimistic, harrrd\l"
	.string "worker. Some records suggest they had \l"
	.string "a history with the Biologist, but that's\l"
	.string "just my intuition.$"
