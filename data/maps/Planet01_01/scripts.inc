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
	goto_if_unset FLAG_REGISTERED_ROSE, Planet01_01_Enter_2
# 11 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
Planet01_01_Enter_1:
# 14 "data/maps/Planet01_01/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 15 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8004, 18
# 16 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 17 "data/maps/Planet01_01/scripts.pory"
	compare VAR_0x8005, 10
# 18 "data/maps/Planet01_01/scripts.pory"
	goto_if_ne End, 0
# 20 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 21 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 1
# 23 "data/maps/Planet01_01/scripts.pory"
End:
	end

Planet01_01_Enter_2:
# 9 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto Planet01_01_Enter_1


# 27 "data/maps/Planet01_01/scripts.pory"

# 28 "data/maps/Planet01_01/scripts.pory"
Planet01_01_FrameTable::
# 29 "data/maps/Planet01_01/scripts.pory"
	map_script_2 VAR_AIR_TIMER_TRIGGERED, 1, Planet01_01_StartAirTimer
# 30 "data/maps/Planet01_01/scripts.pory"
	.2byte 0

Planet01_01_StartAirTimer::
# 34 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 35 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 36 "data/maps/Planet01_01/scripts.pory"
	lockall
# 37 "data/maps/Planet01_01/scripts.pory"
	playse SE_REPEL
# 38 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 39 "data/maps/Planet01_01/scripts.pory"
	callnative EnableO2Meter
# 40 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_EventScript_Item01::
# 45 "data/maps/Planet01_01/scripts.pory"
	lock
# 46 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 47 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 48 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 49 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item02::
# 54 "data/maps/Planet01_01/scripts.pory"
	lock
# 55 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 56 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 57 "data/maps/Planet01_01/scripts.pory"
	removeobject 11
# 58 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirWarning::
# 63 "data/maps/Planet01_01/scripts.pory"
	lockall
# 64 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 65 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AirExpired::
# 70 "data/maps/Planet01_01/scripts.pory"
	lockall
# 71 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 72 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 73 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 74 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 79 "data/maps/Planet01_01/scripts.pory"
	lockall
# 80 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 81 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 82 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 83 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 85 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1
# 86 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 87 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 88 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 89 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 90 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 91 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 92 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 93 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 98 "data/maps/Planet01_01/scripts.pory"
	lockall
# 99 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 100 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 101 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 102 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 104 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 105 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 106 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 107 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 108 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 109 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 110 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 111 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 112 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 117 "data/maps/Planet01_01/scripts.pory"
	lock
# 118 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 126 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 127 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_01_HintText01_2
Planet01_01_HintText01_1:
# 130 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_HintText01_2:
# 128 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto Planet01_01_HintText01_1


Planet01_01_HintText02::
# 135 "data/maps/Planet01_01/scripts.pory"
	lock
# 136 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 139 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 144 "data/maps/Planet01_01/scripts.pory"
	lock
# 145 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 150 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 155 "data/maps/Planet01_01/scripts.pory"
	lock
# 156 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 160 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 165 "data/maps/Planet01_01/scripts.pory"
	lock
# 166 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 170 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 175 "data/maps/Planet01_01/scripts.pory"
	lock
# 176 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 177 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 178 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 179 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 180 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 181 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 182 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 183 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 184 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 185 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 186 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 187 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 192 "data/maps/Planet01_01/scripts.pory"
	lock
# 193 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 194 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 195 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 196 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 197 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 199 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 200 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_02, 0, 21, 23
# 201 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 202 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_JirachiAppears::
# 207 "data/maps/Planet01_01/scripts.pory"
	lock
# 208 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 209 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 210 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 213 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 214 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 215 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 216 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 217 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_FirstJirachiEncounter1
# 218 "data/maps/Planet01_01/scripts.pory"
	waitse
# 219 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 220 "data/maps/Planet01_01/scripts.pory"
	delay 40
# 221 "data/maps/Planet01_01/scripts.pory"
	waitmoncry
# 222 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 223 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 224 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 228 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 229 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 230 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 231 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 232 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 233 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 234 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_FirstJirachiEncounter2
# 235 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 236 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 237 "data/maps/Planet01_01/scripts.pory"
	removeobject 14
# 238 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 239 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 240 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 245 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 246 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 247 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 248 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 249 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 250 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 251 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 255 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 256 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 257 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 258 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 259 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 260 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 261 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 262 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 263 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 265 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 266 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 267 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 268 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_1
# 269 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 270 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 271 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 272 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 274 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 275 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 276 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 277 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 278 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 279 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 280 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 284 "data/maps/Planet01_01/scripts.pory"
Movement_FirstJirachiEncounter1:
# 285 "data/maps/Planet01_01/scripts.pory"
	face_down
# 286 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 287 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 288 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 289 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 290 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 291 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 292 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 293 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 294 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 295 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 296 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 297 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 298 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 299 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 300 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 301 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 302 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 303 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 304 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 305 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 306 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 309 "data/maps/Planet01_01/scripts.pory"
Movement_FirstJirachiEncounter2:
# 310 "data/maps/Planet01_01/scripts.pory"
	face_up
# 311 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 312 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 313 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 314 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 315 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 319 "data/maps/Planet01_01/scripts.pory"
	lock
# 321 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 385 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 421 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
EventScript_TheCaptain_1:
# 460 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 323 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 324 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 325 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 329 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 330 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 331 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 333 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 334 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 335 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
# 337 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 338 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 339 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 341 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 342 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 343 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_2
# 346 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 347 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 348 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 350 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_JirachiAppears_Movement_0
# 351 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 353 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 355 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, EventScript_TheCaptain_Movement_0
# 356 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 358 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 359 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 360 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 362 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 363 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 364 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 366 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 368 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 369 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 370 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 373 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 374 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 375 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 377 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 378 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 379 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 380 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 381 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 382 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 383 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 387 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 388 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 389 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 391 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 392 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 393 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 395 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 396 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 397 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 398 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 399 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 400 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 402 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 403 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 404 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 406 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 407 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 408 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 410 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 411 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 412 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 413 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 414 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 415 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 417 "data/maps/Planet01_01/scripts.pory"
	goto_if_set FLAG_TEMP_9, EventScript_TheCaptain_8
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 423 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 424 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 425 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 427 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 428 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 429 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 431 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 432 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 433 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 434 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 435 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 436 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 438 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 439 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 440 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 441 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 442 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 443 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 445 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 446 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 447 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 448 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 449 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 450 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 452 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 453 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 454 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 456 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 457 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 458 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_8:
# 418 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1


# 231 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 231 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 268 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_1:
# 268 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 268 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 355 "data/maps/Planet01_01/scripts.pory"
EventScript_TheCaptain_Movement_0:
# 355 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

Planet01_01_StartAirTimer_Text_0:
# 38 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 64 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 71 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 83 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 90 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 118 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 001. \p"
	.string "Our team has placed notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a lab here for biological research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 136 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen System can capture\l"
	.string "it and prevent our O2 levels from lowering!$"

Planet01_01_HintText03_Text_0:
# 145 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 156 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 166 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: There are a lot of\n"
	.string "members of the Clefairy family around\l"
	.string "these rocks. They must prefer to live\l"
	.string "in the mountains.$"

Planet01_01_Carbink_Text_0:
# 180 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 185 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 197 "data/maps/Planet01_01/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's using Teleport-$"

Planet01_01_JirachiAppears_Text_0:
# 210 "data/maps/Planet01_01/scripts.pory"
	.string "So this is an alien planet, eh?\l"
	.string "Well, it better watch out. I don't get\n"
	.string "suprised easily.$"

Planet01_01_JirachiAppears_Text_1:
# 224 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...\p"
	.string "<More humans? Again, to cause more\n"
	.string "trouble?>\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_2:
# 240 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}...Was that a Jirachi?!\n"
	.string "I think I could hear it somehow... Are\l"
	.string "there other humans here somewhere?!\l"
	.string "I bet they would know why my ship was\l"
	.string "dragged here. I need to look for them!$"

Planet01_01_JirachiAppears_Text_3:
# 251 "data/maps/Planet01_01/scripts.pory"
	.string "...Seeing a Jirachi is supposed\n"
	.string "to be good luck. It didn't seem too\l"
	.string "happy with me being here, though...\p"
	.string "I don't have a good feeling about this.$"

Planet01_01_JirachiAppears_Text_4:
# 263 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}H-H-HEY!\n"
	.string "D-D-DOWN H-H-HERE!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_5:
# 272 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!\n"
	.string "...Hello?$"

EventScript_TheCaptain_Text_0:
# 325 "data/maps/Planet01_01/scripts.pory"
	.string "I N-N-NEED P-POWER\n"
	.string "P-PLEASE H-H-HELP ME.\l"
	.string "AM-A-AMETHYST- CR-CRYSTAL-\l"
	.string "BRIN-N-NG I-IT TO ME.$"

EventScript_TheCaptain_Text_1:
# 335 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, an Amethyst crystal will power you\n"
	.string "up? Where can I find one?$"

EventScript_TheCaptain_Text_2:
# 343 "data/maps/Planet01_01/scripts.pory"
	.string "...\n"
	.string "...\l"
	.string "O-ONE SE-SECOND...\n$"

EventScript_TheCaptain_Text_3:
# 360 "data/maps/Planet01_01/scripts.pory"
	.string "U-U-UP T-THE WATERFALL.\n"
	.string "O-OUR OLD LAB.$"

EventScript_TheCaptain_Text_4:
# 370 "data/maps/Planet01_01/scripts.pory"
	.string "Awesome, a map!\n"
	.string "...\l"
	.string "You're, uh, quite the artist!$"

EventScript_TheCaptain_Text_5:
# 379 "data/maps/Planet01_01/scripts.pory"
	.string "TH-THANKS.$"

EventScript_TheCaptain_Text_6:
# 389 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_7:
# 397 "data/maps/Planet01_01/scripts.pory"
	.string "TW-TWILIGHT PLATEAU.$"

EventScript_TheCaptain_Text_8:
# 404 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your crystal is up the\n"
	.string "waterfall in the forest?$"

EventScript_TheCaptain_Text_9:
# 412 "data/maps/Planet01_01/scripts.pory"
	.string "P-P-P-PRECISTELY-Y-Y.$"

EventScript_TheCaptain_Text_10:
# 425 "data/maps/Planet01_01/scripts.pory"
	.string "So, were you a part of this team of\n"
	.string "researchers?$"

EventScript_TheCaptain_Text_11:
# 433 "data/maps/Planet01_01/scripts.pory"
	.string "Y-YES...$"

EventScript_TheCaptain_Text_12:
# 440 "data/maps/Planet01_01/scripts.pory"
	.string "Wow, that's cool!$"

EventScript_TheCaptain_Text_13:
# 447 "data/maps/Planet01_01/scripts.pory"
	.string "...Uh, what happened?$"

EventScript_TheCaptain_Text_14:
# 454 "data/maps/Planet01_01/scripts.pory"
	.string "T-TALKING H-H-HURTS...\n"
	.string "C-CRYSTAL FIRS-ST-ST-ST...$"
