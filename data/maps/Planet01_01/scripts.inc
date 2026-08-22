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
	goto_if_unset FLAG_REGISTERED_ROSE, Planet01_01_Enter_2
# 12 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_01_Enter_1:
# 15 "data/maps/Planet01_01/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 16 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8004, 18
# 17 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 18 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8005, 10
# 19 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 21 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 22 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 24 "data/maps/Planet01_01/scripts.pory"
End:
	end

Planet01_01_Enter_2:
# 10 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_01_Enter_1


# 28 "data/maps/Planet01_01/scripts.pory"

# 29 "data/maps/Planet01_01/scripts.pory"
Planet01_01_FrameTable::
# 30 "data/maps/Planet01_01/scripts.pory"
	map_script_2 VAR_AIR_TIMER_TRIGGERED, 1, Planet01_01_StartAirTimer
# 31 "data/maps/Planet01_01/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, Planet01_01_JirachiAppears
# 32 "data/maps/Planet01_01/scripts.pory"
	.2byte 0

Planet01_01_StartAirTimer::
# 36 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 37 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 38 "data/maps/Planet01_01/scripts.pory"
	lockall
# 39 "data/maps/Planet01_01/scripts.pory"
	playse SE_REPEL
# 40 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 41 "data/maps/Planet01_01/scripts.pory"
	callnative EnableO2Meter
# 42 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_EventScript_Item01::
# 47 "data/maps/Planet01_01/scripts.pory"
	lock
# 48 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 49 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 50 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 51 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item02::
# 56 "data/maps/Planet01_01/scripts.pory"
	lock
# 57 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 58 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 59 "data/maps/Planet01_01/scripts.pory"
	removeobject 11
# 60 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item03::
# 65 "data/maps/Planet01_01/scripts.pory"
	lock
# 66 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_COMET_SHARD, 1
# 67 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 68 "data/maps/Planet01_01/scripts.pory"
	removeobject 18
# 69 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirWarning::
# 74 "data/maps/Planet01_01/scripts.pory"
	lockall
# 75 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 76 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AirExpired::
# 81 "data/maps/Planet01_01/scripts.pory"
	lockall
# 82 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 83 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 84 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 85 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 90 "data/maps/Planet01_01/scripts.pory"
	lockall
# 91 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 92 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 93 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 94 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 96 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1
# 97 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 98 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 99 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 100 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 101 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 102 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 103 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 104 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 109 "data/maps/Planet01_01/scripts.pory"
	lockall
# 110 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 111 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 112 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 113 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 115 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 116 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 117 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 118 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 119 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 120 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 121 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 122 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 123 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 128 "data/maps/Planet01_01/scripts.pory"
	lock
# 129 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 137 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 142 "data/maps/Planet01_01/scripts.pory"
	lock
# 143 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 147 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 152 "data/maps/Planet01_01/scripts.pory"
	lock
# 153 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 158 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 163 "data/maps/Planet01_01/scripts.pory"
	lock
# 164 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 168 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 173 "data/maps/Planet01_01/scripts.pory"
	lock
# 174 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 178 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 183 "data/maps/Planet01_01/scripts.pory"
	lock
# 184 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 185 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 186 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 187 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 188 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 189 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 190 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 191 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 192 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 193 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 194 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 195 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 200 "data/maps/Planet01_01/scripts.pory"
	lock
# 201 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 202 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 203 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 204 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 205 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 207 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 208 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 209 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 210 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_JirachiAppears::
# 215 "data/maps/Planet01_01/scripts.pory"
	lock
# 216 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player0
# 217 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 218 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 219 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 220 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 221 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 222 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 223 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 226 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 227 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 228 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 229 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 230 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 231 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 233 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 234 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 235 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 236 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_1
# 237 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 238 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 239 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 240 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 241 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 242 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 243 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 244 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 245 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 246 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 247 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 248 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 249 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 250 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 251 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 252 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 253 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 254 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 255 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 256 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 257 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player1
# 258 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 260 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 261 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 262 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 263 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 264 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 265 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 267 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 268 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 269 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_6
# 270 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 271 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 272 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 274 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 275 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 276 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_7
# 281 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 282 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 283 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 285 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 286 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 287 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_8
# 289 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 290 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 291 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 293 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 294 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 295 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_9
# 296 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 297 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 298 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 300 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 301 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 302 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_10
# 303 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 304 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 305 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 307 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 308 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 309 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_11
# 312 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 313 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 314 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 316 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 317 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 318 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_12
# 320 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 321 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 322 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 324 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 325 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 326 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_13
# 330 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 331 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 332 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 334 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 335 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 336 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_14
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
	msgbox Planet01_01_JirachiAppears_Text_15
# 345 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 346 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 347 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 349 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 350 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 351 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_16
# 353 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 354 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 355 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 357 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 358 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 359 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_17
# 361 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 362 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 363 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 365 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 366 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 368 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 369 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 370 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_18
# 377 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 378 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 379 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 381 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_2
# 382 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 383 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 385 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_3
# 386 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 388 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 389 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 390 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_19
# 392 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 393 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 394 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 396 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 397 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 398 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_20
# 400 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 401 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 402 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 404 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_JirachiAppears_Movement_4
# 405 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 407 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 409 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 410 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 411 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_21
# 413 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 414 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 415 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 417 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 419 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_JirachiAppears_Movement_5
# 420 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 422 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 423 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 424 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_22
# 426 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 427 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 428 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 430 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 432 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 433 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 434 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_23
# 437 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 438 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 439 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 441 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 442 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 443 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_24
# 444 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 445 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 446 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 448 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 449 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 450 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_25
# 451 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 452 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 453 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 455 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 456 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 457 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_26
# 458 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 459 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 460 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 462 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 463 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 464 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_27
# 465 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 466 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 467 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 469 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 470 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 471 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_28
# 472 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 473 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 474 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 476 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_4
# 477 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 479 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 481 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 482 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 483 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 485 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 493 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 494 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
# 495 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 499 "data/maps/Planet01_01/scripts.pory"
Movement_Player0:
# 500 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 501 "data/maps/Planet01_01/scripts.pory"
	face_up
# 502 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 503 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 504 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 505 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 506 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 507 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 508 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 509 "data/maps/Planet01_01/scripts.pory"
	face_up
# 510 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 511 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 512 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 513 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 514 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 515 "data/maps/Planet01_01/scripts.pory"
	walk_left
# 516 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 519 "data/maps/Planet01_01/scripts.pory"
Movement_Player1:
# 520 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 521 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 522 "data/maps/Planet01_01/scripts.pory"
	face_right
# 523 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 524 "data/maps/Planet01_01/scripts.pory"
	walk_right
# 525 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 526 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 527 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 528 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 529 "data/maps/Planet01_01/scripts.pory"
	walk_down
# 530 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 531 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 532 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 533 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 534 "data/maps/Planet01_01/scripts.pory"
	jump_down
# 535 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

EventScript_TheCaptain::
# 539 "data/maps/Planet01_01/scripts.pory"
	lock
# 541 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 615 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 648 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
# 682 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 3
	goto_if_eq EventScript_TheCaptain_5
EventScript_TheCaptain_1:
# 702 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 543 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 544 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 545 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 549 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 550 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 551 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 553 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 554 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 555 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 557 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 558 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 559 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 561 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 562 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 563 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 566 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 567 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 568 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 570 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_JirachiAppears_Movement_4
# 571 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 573 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 575 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 576 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 577 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 579 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 580 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 581 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 583 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 585 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_JirachiAppears_Movement_5
# 586 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 588 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 589 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 590 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 592 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 593 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 594 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 596 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 598 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 599 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 600 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_23
# 603 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 604 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 605 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 607 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 608 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 609 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 610 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 611 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 612 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 613 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 617 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 618 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 619 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 621 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 622 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 623 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 625 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 626 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 627 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 628 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 629 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 630 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 632 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 633 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 634 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 636 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 637 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 638 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 640 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 641 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 642 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 643 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 644 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 645 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 646 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 650 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 651 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 652 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 655 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 656 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 657 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 659 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 660 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 661 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 662 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 663 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 664 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 666 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 667 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 668 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 670 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 671 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 672 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 674 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 675 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 676 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 677 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 678 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 679 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 680 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_5:
# 684 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 685 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 686 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 688 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 689 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 690 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 692 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 693 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 694 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 697 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 698 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 699 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 700 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 3
	goto EventScript_TheCaptain_1


# 219 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 219 "data/maps/Planet01_01/scripts.pory"
	emote_question_mark
# 219 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 236 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_1:
# 236 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 236 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 381 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_2:
# 381 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 381 "data/maps/Planet01_01/scripts.pory"
	face_left
	step_end

# 385 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_3:
# 385 "data/maps/Planet01_01/scripts.pory"
	face_right
	step_end

# 404 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_4:
# 404 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 419 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_5:
# 419 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

Planet01_01_StartAirTimer_Text_0:
# 40 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 75 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 82 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 94 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 101 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 129 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 001. \p"
	.string "Our team has placed notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a lab here for biological research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 143 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 153 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 164 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 174 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: There are a lot of\n"
	.string "members of the Clefairy family around\l"
	.string "these rocks. They must prefer to live\l"
	.string "in the mountains.$"

Planet01_01_Carbink_Text_0:
# 188 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 193 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 205 "data/maps/Planet01_01/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's flashing red-$"

Planet01_01_JirachiAppears_Text_0:
# 223 "data/maps/Planet01_01/scripts.pory"
	.string "...I see can't anything wrong with my\n"
	.string "ship.\p"
	.string "No hull damage, fuel is good. What-$"

Planet01_01_JirachiAppears_Text_1:
# 231 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Hey!\n"
	.string "Down herrre, pal!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_2:
# 240 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!$"

Planet01_01_JirachiAppears_Text_3:
# 247 "data/maps/Planet01_01/scripts.pory"
	.string "...Hello? How do I get down?$"

Planet01_01_JirachiAppears_Text_4:
# 253 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Just jump, it's safe!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_5:
# 262 "data/maps/Planet01_01/scripts.pory"
	.string "Hello, frrreind.$"

Planet01_01_JirachiAppears_Text_6:
# 269 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, hello. Who are you?$"

Planet01_01_JirachiAppears_Text_7:
# 276 "data/maps/Planet01_01/scripts.pory"
	.string "Why, I'm the captain of the \n"
	.string "experrrdition LYDIAN. Yep, I'm the\l"
	.string "captain. Never let a human do something\l"
	.string "important, that's my motto. It was also\l"
	.string "my company's slogan.$"

Planet01_01_JirachiAppears_Text_8:
# 287 "data/maps/Planet01_01/scripts.pory"
	.string "...Really. Uh, if that's so, is your\n"
	.string "human crew somewhere around here?$"

Planet01_01_JirachiAppears_Text_9:
# 295 "data/maps/Planet01_01/scripts.pory"
	.string "Noooope. They'rrrre long gone, kiddo.$"

Planet01_01_JirachiAppears_Text_10:
# 302 "data/maps/Planet01_01/scripts.pory"
	.string "...Oh. Where'd they go?$"

Planet01_01_JirachiAppears_Text_11:
# 309 "data/maps/Planet01_01/scripts.pory"
	.string "I don't know. I don't really know much\n"
	.string "to be honest, on account of my memories\l"
	.string "missing; orrr, perrrhaps errrased.$"

Planet01_01_JirachiAppears_Text_12:
# 318 "data/maps/Planet01_01/scripts.pory"
	.string "...Ok. Well, any chance you know why I\n"
	.string "can't lift my ship off the ground?$"

Planet01_01_JirachiAppears_Text_13:
# 326 "data/maps/Planet01_01/scripts.pory"
	.string "Well sirrr/ma'am/sirrr'am, it's all\n"
	.string "account of the absurd levels of purrrre\l"
	.string "psychic energy layerrred on top of it.\l"
	.string "Yep.$"

Planet01_01_JirachiAppears_Text_14:
# 336 "data/maps/Planet01_01/scripts.pory"
	.string "...WHAT? So you're saying something is\n"
	.string "trapping me here?!$"

Planet01_01_JirachiAppears_Text_15:
# 344 "data/maps/Planet01_01/scripts.pory"
	.string "I suppose. Sorrry kiddo.$"

Planet01_01_JirachiAppears_Text_16:
# 351 "data/maps/Planet01_01/scripts.pory"
	.string "...Well this is unsettling. I have more\n"
	.string "questions. A lot more questions.$"

Planet01_01_JirachiAppears_Text_17:
# 359 "data/maps/Planet01_01/scripts.pory"
	.string "Well kiddo, you'rrre in luck. See these\n here wall scribbles?$"

Planet01_01_JirachiAppears_Text_18:
# 370 "data/maps/Planet01_01/scripts.pory"
	.string "My team was kind enough to leave\n"
	.string "some notes for futurre explorrrerrrs.\p"
	.string "In fact, I've been rrreading them too.\n"
	.string "I've learrrned that our primary\l"
	.string "rrresearrrch facility was up the\l"
	.string "waterrrfall in the forrrest just\l"
	.string "overrr to the west.$"

Planet01_01_JirachiAppears_Text_19:
# 390 "data/maps/Planet01_01/scripts.pory"
	.string "Oh? That sounds like a promising place\n to investigate. Do you have, like a map?$"

Planet01_01_JirachiAppears_Text_20:
# 398 "data/maps/Planet01_01/scripts.pory"
	.string "Yes in fact I do! Let me load it up for\n you!$"

Planet01_01_JirachiAppears_Text_21:
# 411 "data/maps/Planet01_01/scripts.pory"
	.string "<Its... drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

Planet01_01_JirachiAppears_Text_22:
# 424 "data/maps/Planet01_01/scripts.pory"
	.string "Here you arrre!\n"
	.string "Our old lab is to the left.$"

Planet01_01_JirachiAppears_Text_23:
# 434 "data/maps/Planet01_01/scripts.pory"
	.string "Awesome, a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

Planet01_01_JirachiAppears_Text_24:
# 443 "data/maps/Planet01_01/scripts.pory"
	.string "Thank you, kiddo.$"

Planet01_01_JirachiAppears_Text_25:
# 450 "data/maps/Planet01_01/scripts.pory"
	.string "I'm like, almost 30.$"

Planet01_01_JirachiAppears_Text_26:
# 457 "data/maps/Planet01_01/scripts.pory"
	.string "Well happy early birthday, kiddo.$"

Planet01_01_JirachiAppears_Text_27:
# 464 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_JirachiAppears_Text_28:
# 471 "data/maps/Planet01_01/scripts.pory"
	.string "Guess I'll start reading these notes!$"

EventScript_TheCaptain_Text_0:
# 545 "data/maps/Planet01_01/scripts.pory"
	.string "I N-N-NEED P-POWER\n"
	.string "P-PLEASE H-H-HELP ME.\l"
	.string "A-A-AMETHYST- CRYSTAL-\l"
	.string "BRIN-N-NG I-IT TO ME.$"

EventScript_TheCaptain_Text_1:
# 555 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, an Amethyst will power you up?\n"
	.string "Ok... Where can I find one?$"

EventScript_TheCaptain_Text_2:
# 563 "data/maps/Planet01_01/scripts.pory"
	.string "...\n"
	.string "...\l"
	.string "O-ONE SE-SECOND...\n$"

EventScript_TheCaptain_Text_3:
# 577 "data/maps/Planet01_01/scripts.pory"
	.string "<Its drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

EventScript_TheCaptain_Text_4:
# 590 "data/maps/Planet01_01/scripts.pory"
	.string "U-UP THE W-W-WATERFALL IN THE FOREST.\n"
	.string "O-O-OUR OLD L-L-LAB. GO WEST.$"

EventScript_TheCaptain_Text_5:
# 609 "data/maps/Planet01_01/scripts.pory"
	.string "TH-THANKS.$"

EventScript_TheCaptain_Text_6:
# 619 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_7:
# 627 "data/maps/Planet01_01/scripts.pory"
	.string "The Twilight Plateau.$"

EventScript_TheCaptain_Text_8:
# 634 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your lab was is in the\n"
	.string "forest somewhere?$"

EventScript_TheCaptain_Text_9:
# 642 "data/maps/Planet01_01/scripts.pory"
	.string "Up the waterrrfall, yep.$"

EventScript_TheCaptain_Text_10:
# 652 "data/maps/Planet01_01/scripts.pory"
	.string "So, were you a part of this team of\n"
	.string "researchers? Are you sure you were the\l"
	.string "captain?$"

EventScript_TheCaptain_Text_11:
# 661 "data/maps/Planet01_01/scripts.pory"
	.string "Of courrrse! Have you seen my hat?$"

EventScript_TheCaptain_Text_12:
# 668 "data/maps/Planet01_01/scripts.pory"
	.string "...I don't know if that's especially\n"
	.string "great evidence.$"

EventScript_TheCaptain_Text_13:
# 676 "data/maps/Planet01_01/scripts.pory"
	.string "Don't take this from me, kiddo.$"

EventScript_TheCaptain_Text_14:
# 686 "data/maps/Planet01_01/scripts.pory"
	.string "Hey Cap', I can't get up the waterfall.\n"
	.string "What do I do now?$"

EventScript_TheCaptain_Text_15:
# 694 "data/maps/Planet01_01/scripts.pory"
	.string "There's gotta be a pokerrrmon with\n"
	.string "waterrrfall somewhere, kiddo. Don't give\l"
	.string "up.$"
