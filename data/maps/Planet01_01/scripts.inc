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
# 295 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 296 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 297 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 299 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 300 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 301 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_9
# 302 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 303 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 304 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 306 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 307 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 308 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_10
# 309 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 310 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 311 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 313 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 314 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 315 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_11
# 318 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 319 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 320 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 322 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 323 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 324 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_12
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
	msgbox Planet01_01_RobotGreeting_Text_13
# 336 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 337 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 338 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 340 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 341 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 342 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_14
# 344 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 345 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 346 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 348 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 349 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 350 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_15
# 351 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 352 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 353 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 355 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 356 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 357 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_16
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
	msgbox Planet01_01_RobotGreeting_Text_17
# 367 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 368 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 369 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 371 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_0
# 372 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 374 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 375 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 376 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_18
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
	msgbox Planet01_01_RobotGreeting_Text_19
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
	msgbox Planet01_01_RobotGreeting_Text_20
# 406 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 407 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 408 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 410 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_4
# 411 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 413 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 415 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 416 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 417 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_21
# 419 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 420 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 421 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 423 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 425 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_RobotGreeting_Movement_5
# 426 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 428 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 429 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 430 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_RobotGreeting_Text_22
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
	msgbox Planet01_01_RobotGreeting_Text_23
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
	msgbox Planet01_01_RobotGreeting_Text_24
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
	msgbox Planet01_01_RobotGreeting_Text_25
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
	msgbox Planet01_01_RobotGreeting_Text_26
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
	msgbox Planet01_01_RobotGreeting_Text_27
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
	msgbox Planet01_01_RobotGreeting_Text_28
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
	msgbox Planet01_01_RobotGreeting_Text_29
# 499 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 500 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 501 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 505 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 506 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 507 "data/maps/Planet01_01/scripts.pory"
	face_up
# 508 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 509 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 510 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 511 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 512 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 513 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 514 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 515 "data/maps/Planet01_01/scripts.pory"
	face_up
# 516 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 517 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 518 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 519 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 520 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 521 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 522 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 525 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 526 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 527 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 528 "data/maps/Planet01_01/scripts.pory"
	face_right
# 529 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 530 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 531 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 532 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 533 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 534 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 535 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 536 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 537 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 538 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 539 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 540 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 541 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

Planet01_01_JirachiAppears::
# 545 "data/maps/Planet01_01/scripts.pory"
	lockall
# 546 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 548 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_1
# 549 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_1
# 550 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 552 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 554 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player2
# 555 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 557 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 559 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 560 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 561 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 563 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 564 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 565 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 567 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 568 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 569 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 571 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 572 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 573 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 575 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_12
# 576 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_12
# 577 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 579 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 580 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 581 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 585 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 586 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 587 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 589 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 590 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 591 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 593 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 594 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 595 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 597 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_2
# 598 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_2
# 599 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 601 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 603 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 604 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 605 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 606 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 607 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 608 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 610 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 611 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 612 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 613 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 615 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi1
# 616 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 618 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 619 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 620 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 621 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 622 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8004, 1
# 623 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8005, 1
# 624 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8006, 8
# 625 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8007, 5
# 626 "data/maps/Planet01_01/scripts.pory"
	special ShakeCamera
# 627 "data/maps/Planet01_01/scripts.pory"
	applymovement 19, Movement_Deoxo1_3
# 628 "data/maps/Planet01_01/scripts.pory"
	applymovement 20, Movement_Deoxo2_3
# 629 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_TO_WHITE
# 630 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 631 "data/maps/Planet01_01/scripts.pory"
	delay 10
# 632 "data/maps/Planet01_01/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 633 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 635 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 637 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_RobotGreeting_Movement_4
# 638 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 640 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 641 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 642 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 643 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 644 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 645 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 647 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 648 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 649 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 650 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 651 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 652 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 654 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_Jirachi2
# 655 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 657 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 658 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 659 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 660 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 661 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 662 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 664 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 665 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 667 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 668 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 669 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 673 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 674 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 675 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 677 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 678 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 679 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 682 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 683 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 684 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 687 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_CRISTIN
# 688 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 689 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 0
# 690 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 694 "data/maps/Planet01_01/scripts.pory"
Movement_Player2:
# 695 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 696 "data/maps/Planet01_01/scripts.pory"
	face_right
# 697 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 698 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 699 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 700 "data/maps/Planet01_01/scripts.pory"
	face_left
# 701 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 702 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 703 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 706 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_1:
# 707 "data/maps/Planet01_01/scripts.pory"
	face_up
# 708 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 709 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 712 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_1:
# 713 "data/maps/Planet01_01/scripts.pory"
	face_up
# 714 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 715 "data/maps/Planet01_01/scripts.pory"
	jump_up
	step_end

# 718 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_12:
# 719 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 720 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 721 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 724 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_12:
# 725 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 726 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 727 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 730 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_2:
# 731 "data/maps/Planet01_01/scripts.pory"
	walk_right
	step_end

# 734 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_2:
# 735 "data/maps/Planet01_01/scripts.pory"
	walk_left
	step_end

# 738 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo1_3:
# 739 "data/maps/Planet01_01/scripts.pory"
	jump_left
# 740 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 743 "data/maps/Planet01_01/scripts.pory"
Movement_Deoxo2_3:
# 744 "data/maps/Planet01_01/scripts.pory"
	jump_right
# 745 "data/maps/Planet01_01/scripts.pory"
	set_invisible
	step_end

# 748 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi1:
# 749 "data/maps/Planet01_01/scripts.pory"
	face_down
# 750 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 751 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 752 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 753 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 754 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 755 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 756 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 757 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 758 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 759 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 760 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 761 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 762 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 763 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 764 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 765 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 766 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 769 "data/maps/Planet01_01/scripts.pory"
Movement_Jirachi2:
# 770 "data/maps/Planet01_01/scripts.pory"
	face_up
# 771 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 772 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 773 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 774 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 775 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 779 "data/maps/Planet01_01/scripts.pory"
	lock
# 781 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 833 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 866 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 900 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
# 920 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 4
	goto_if_eq EventScript_TheCaptain_6
EventScript_TheCaptain_1:
# 969 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 783 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 784 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 785 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 787 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 788 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 789 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 791 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 792 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 793 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 795 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 796 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 797 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 799 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 800 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 801 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
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
	msgbox EventScript_TheCaptain_Text_3
# 811 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 812 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 813 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 815 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 816 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 817 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 818 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 819 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 820 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 822 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 823 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 824 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 828 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 829 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 830 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 831 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 4
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 835 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 836 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 837 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 839 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 840 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 841 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 843 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 844 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 845 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 846 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 847 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 848 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 850 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 851 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 852 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
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
	msgbox EventScript_TheCaptain_Text_9
# 861 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 862 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 863 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 864 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 868 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 869 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 870 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 873 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 874 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 875 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 877 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 878 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 879 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 880 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 881 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 882 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 884 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 885 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 886 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
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
	msgbox EventScript_TheCaptain_Text_13
# 895 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 896 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 897 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 898 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 902 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 903 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 904 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 906 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 907 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 908 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 910 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 911 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 912 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 915 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 916 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 917 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 918 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_6:
# 922 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 923 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 924 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_16
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
	msgbox EventScript_TheCaptain_Text_17
# 933 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 934 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 935 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 937 "data/maps/Planet01_01/scripts.pory"
	multichoice 0, 0, MULTI_EXPLORERS_FACTS, FALSE
# 938 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_TheCaptain_12
# 946 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EventScript_TheCaptain_13
# 954 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EventScript_TheCaptain_14
# 960 "data/maps/Planet01_01/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq EventScript_TheCaptain_15
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_12:
# 939 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_18
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_13:
# 947 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_19
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_14:
# 955 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_20
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_15:
# 961 "data/maps/Planet01_01/scripts.pory"
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

# 410 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_4:
# 410 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 425 "data/maps/Planet01_01/scripts.pory"
Planet01_01_RobotGreeting_Movement_5:
# 425 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 664 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 664 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 664 "data/maps/Planet01_01/scripts.pory"
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
	.string "Why, I'm the rrrenown Captain of the\n"
	.string "experrrdition WILD INDIGO. Yep, I'm the\l"
	.string "captain. Never let a human do something\l"
	.string "important, that's my motto. It was also\l"
	.string "my company's slogan.$"

Planet01_01_RobotGreeting_Text_8:
# 292 "data/maps/Planet01_01/scripts.pory"
	.string "...Really. You're looking a bit rough...\n"
	.string "But uh, if that's true, is your human\l"
	.string "crew somewhere around here?$"

Planet01_01_RobotGreeting_Text_9:
# 301 "data/maps/Planet01_01/scripts.pory"
	.string "Noooope. They'rrrre long gone, kiddo.$"

Planet01_01_RobotGreeting_Text_10:
# 308 "data/maps/Planet01_01/scripts.pory"
	.string "...Oh. Where'd they go?$"

Planet01_01_RobotGreeting_Text_11:
# 315 "data/maps/Planet01_01/scripts.pory"
	.string "I don't know. I don't really know much\n"
	.string "to be honest, on account of my memories\l"
	.string "missing; orrr, perrrhaps errrased.$"

Planet01_01_RobotGreeting_Text_12:
# 324 "data/maps/Planet01_01/scripts.pory"
	.string "...Ok. Well, any chance you know why I\n"
	.string "can't lift my ship off the ground?$"

Planet01_01_RobotGreeting_Text_13:
# 332 "data/maps/Planet01_01/scripts.pory"
	.string "Well sirrr/ma'am/sirrr'am, it's all\n"
	.string "account of the absurd levels of purrrre\l"
	.string "psychic energy layerrred on top of it.\l"
	.string "Yep.$"

Planet01_01_RobotGreeting_Text_14:
# 342 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "trapping me here?!$"

Planet01_01_RobotGreeting_Text_15:
# 350 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorrry kiddo.$"

Planet01_01_RobotGreeting_Text_16:
# 357 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is unsettling. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_RobotGreeting_Text_17:
# 365 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you'rrre in luck. See these\n"
	.string "here wall scrrribbles?$"

Planet01_01_RobotGreeting_Text_18:
# 376 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave\n"
	.string "some notes for futurre explorrrerrrs.\p"
	.string "In fact, I've been rrreading them too.\n"
	.string "I've learrrned that our primarrry\l"
	.string "rrresearrrch facility was up the\l"
	.string "waterrrfall in the forrrest just\l"
	.string "overrr to the west.$"

Planet01_01_RobotGreeting_Text_19:
# 396 "data/maps/Planet01_01/scripts.pory"
	.string "Oh? That sounds like a promising place\n"
	.string "to investigate. Do you have, like a map?$"

Planet01_01_RobotGreeting_Text_20:
# 404 "data/maps/Planet01_01/scripts.pory"
	.string "Yes in fact I do! Let me load it up forrr\n"
	.string "you!$"

Planet01_01_RobotGreeting_Text_21:
# 417 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_RobotGreeting_Text_22:
# 430 "data/maps/Planet01_01/scripts.pory"
	.string "Here you arrre!\n"
	.string "Our old lab is to the left.$"

Planet01_01_RobotGreeting_Text_23:
# 440 "data/maps/Planet01_01/scripts.pory"
	.string "Awesome, a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_RobotGreeting_Text_24:
# 449 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_RobotGreeting_Text_25:
# 456 "data/maps/Planet01_01/scripts.pory"
	.string "I'm like, almost 30.$"

Planet01_01_RobotGreeting_Text_26:
# 463 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy earrrly birrrrthday, kiddo.$"

Planet01_01_RobotGreeting_Text_27:
# 470 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_RobotGreeting_Text_28:
# 477 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

Planet01_01_RobotGreeting_Text_29:
# 491 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 'WILD INDIGO'. \p"
	.string "Our team has recorded notes for future\n"
	.string "explorers in hopefully convenient\l"
	.string "places. Our objective is to create\l"
	.string "a lab here for scientific research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_JirachiAppears_Text_0:
# 561 "data/maps/Planet01_01/scripts.pory"
	.string "Uh oh.\n"
	.string "I really don't like this.$"

Planet01_01_JirachiAppears_Text_1:
# 569 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey, you. See these monsters? They're\n"
	.string "corrupted by a powerful space virus.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 581 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}They will never stop pursuing you. They\n"
	.string "want to infect you and steal your ship.\l"
	.string "Your team... Magnezone... Hm. I guess\l"
	.string "this is the end.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_3:
# 591 "data/maps/Planet01_01/scripts.pory"
	.string "Who are you?\n"
	.string "What do you mean by that?!$"

Planet01_01_JirachiAppears_Text_4:
# 605 "data/maps/Planet01_01/scripts.pory"
	.string "H-HELP!$"

Planet01_01_JirachiAppears_Text_5:
# 642 "data/maps/Planet01_01/scripts.pory"
	.string "...Jirachi?$"

Planet01_01_JirachiAppears_Text_6:
# 649 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_7:
# 659 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Oh, wow. Lucky. Very lucky...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_8:
# 669 "data/maps/Planet01_01/scripts.pory"
	.string "Who the hell are you? I demand you tell\n"
	.string "me! Hello?\l"
	.string "...Hello?!\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_9:
# 679 "data/maps/Planet01_01/scripts.pory"
	.string "Great. Amnesiac robots, space viruses,\n"
	.string "and psychic assholes. All in the middle\l"
	.string "of nowhere. Serves me right, in a way.$"

EventScript_TheCaptain_Text_0:
# 785 "data/maps/Planet01_01/scripts.pory"
	.string "Did you see those monsters? I almost\n"
	.string "died! You didn't warn me about those!$"

EventScript_TheCaptain_Text_1:
# 793 "data/maps/Planet01_01/scripts.pory"
	.string "Ah, yeah, those guys.\n"
	.string "They neverrr botherrred me before.$"

EventScript_TheCaptain_Text_2:
# 801 "data/maps/Planet01_01/scripts.pory"
	.string "...Sure. But what are they?$"

EventScript_TheCaptain_Text_3:
# 808 "data/maps/Planet01_01/scripts.pory"
	.string "I have memorrries of our team, when\n"
	.string "we firrrst arrrived. These things werrre\l"
	.string "not herrre.$"

EventScript_TheCaptain_Text_4:
# 817 "data/maps/Planet01_01/scripts.pory"
	.string "How long ago was the expedition?$"

EventScript_TheCaptain_Text_5:
# 824 "data/maps/Planet01_01/scripts.pory"
	.string "Memorrry gap ends a while back...\n"
	.string "I'd estimate five yearrrs? But I don't\l"
	.string "know how long we werrre herrre, or\l"
	.string "how long ago we arrrived.$"

EventScript_TheCaptain_Text_6:
# 837 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_7:
# 845 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_8:
# 852 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your lab was is in the\n"
	.string "forest somewhere?$"

EventScript_TheCaptain_Text_9:
# 860 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterrrfall, yep.$"

EventScript_TheCaptain_Text_10:
# 870 "data/maps/Planet01_01/scripts.pory"
	.string "So, were you a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_11:
# 879 "data/maps/Planet01_01/scripts.pory"
	.string "Of courrrse! Have you seen my hat?$"

EventScript_TheCaptain_Text_12:
# 886 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_13:
# 894 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_14:
# 904 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_15:
# 912 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pokerrrmon with\n"
	.string "waterrrfall somewhere, kiddo. Don't give\l"
	.string "up.$"

EventScript_TheCaptain_Text_16:
# 924 "data/maps/Planet01_01/scripts.pory"
	.string "I want to ask some questions about the\n"
	.string "previous explorers.$"

EventScript_TheCaptain_Text_17:
# 932 "data/maps/Planet01_01/scripts.pory"
	.string "Firrre away.$"

EventScript_TheCaptain_Text_18:
# 939 "data/maps/Planet01_01/scripts.pory"
	.string "Me? State-of-the-art Captobot by\n"
	.string "BOTech Enterprrrises. I was the latest\l"
	.string "model when we set out into space.\l"
	.string "Designed to keep up morrrale, maintain\l"
	.string "focus on our objectives, and give full,\l"
	.string "detailed rrreporrrts on all of our\l"
	.string "activities.$"

EventScript_TheCaptain_Text_19:
# 947 "data/maps/Planet01_01/scripts.pory"
	.string "Expert in rrresearching alien PKMN.\n"
	.string "Quiet.\l"
	.string "Didn't like to be the centerrr of\l"
	.string "attention, and often would get lost\l"
	.string "wanderrring off on their own. Made\l"
	.string "excellent notes on this rrregion's\l"
	.string "biological life.$"

EventScript_TheCaptain_Text_20:
# 955 "data/maps/Planet01_01/scripts.pory"
	.string "A genius with an interrrest in building\n"
	.string "structurrres in challenging locations.\l"
	.string "Had their eyes on transforming hostile\l"
	.string "environments into life-sustaining ones\l"
	.string "forrr humans.$"

EventScript_TheCaptain_Text_21:
# 961 "data/maps/Planet01_01/scripts.pory"
	.string "PKMN experrrt and project organizerrr.\n"
	.string "Always ready to help, and easy to talk\l"
	.string "to about anything. Optimistic, harrrd\l"
	.string "worker. Some records suggest they had \l"
	.string "a history with the Biologist, but that's\l"
	.string "just my intuition.$"
