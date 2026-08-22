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
	.2byte 0

Planet01_01_StartAirTimer::
# 35 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_TRIGGERED, 0
# 36 "data/maps/Planet01_01/scripts.pory"
	special StartAirTimerMap
# 37 "data/maps/Planet01_01/scripts.pory"
	lockall
# 38 "data/maps/Planet01_01/scripts.pory"
	playse SE_REPEL
# 39 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_StartAirTimer_Text_0
# 40 "data/maps/Planet01_01/scripts.pory"
	callnative EnableO2Meter
# 41 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_EventScript_Item01::
# 46 "data/maps/Planet01_01/scripts.pory"
	lock
# 47 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 48 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 49 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 50 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item02::
# 55 "data/maps/Planet01_01/scripts.pory"
	lock
# 56 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 57 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 58 "data/maps/Planet01_01/scripts.pory"
	removeobject 11
# 59 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirWarning::
# 64 "data/maps/Planet01_01/scripts.pory"
	lockall
# 65 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 66 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AirExpired::
# 71 "data/maps/Planet01_01/scripts.pory"
	lockall
# 72 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 73 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 74 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 75 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 80 "data/maps/Planet01_01/scripts.pory"
	lockall
# 81 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 82 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 83 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 84 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 86 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1
# 87 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 88 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 89 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 90 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 91 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 92 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 93 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 94 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 99 "data/maps/Planet01_01/scripts.pory"
	lockall
# 100 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 250
# 101 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 102 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 103 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 105 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 106 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 107 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 108 "data/maps/Planet01_01/scripts.pory"
	callnative RefreshO2Meter
# 109 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 110 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 111 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_MINIOR
# 112 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 113 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 118 "data/maps/Planet01_01/scripts.pory"
	lock
# 119 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 127 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_9
# 128 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq Planet01_01_HintText01_2
Planet01_01_HintText01_1:
# 131 "data/maps/Planet01_01/scripts.pory"
	release
	end

Planet01_01_HintText01_2:
# 129 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto Planet01_01_HintText01_1


Planet01_01_HintText02::
# 136 "data/maps/Planet01_01/scripts.pory"
	lock
# 137 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 141 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 146 "data/maps/Planet01_01/scripts.pory"
	lock
# 147 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 152 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 157 "data/maps/Planet01_01/scripts.pory"
	lock
# 158 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 162 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 167 "data/maps/Planet01_01/scripts.pory"
	lock
# 168 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 172 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 177 "data/maps/Planet01_01/scripts.pory"
	lock
# 178 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 179 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 180 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 181 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 182 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 183 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 184 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 185 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 186 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 187 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 188 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 189 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 194 "data/maps/Planet01_01/scripts.pory"
	lock
# 195 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 196 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 197 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 198 "data/maps/Planet01_01/scripts.pory"
	callnative RegisterSpeciesInDex
# 199 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 201 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 202 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_04, 1, 12, 1
# 203 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 204 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_JirachiAppears::
# 209 "data/maps/Planet01_01/scripts.pory"
	lock
# 210 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 211 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 212 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 215 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 216 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 217 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 218 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 219 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_FirstJirachiEncounter1
# 220 "data/maps/Planet01_01/scripts.pory"
	waitse
# 221 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 222 "data/maps/Planet01_01/scripts.pory"
	delay 40
# 223 "data/maps/Planet01_01/scripts.pory"
	waitmoncry
# 224 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 225 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 226 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 230 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 231 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 232 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 233 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 234 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 235 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 236 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_FirstJirachiEncounter2
# 237 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 238 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 239 "data/maps/Planet01_01/scripts.pory"
	removeobject 14
# 240 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 241 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 242 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 247 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 248 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 249 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 250 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 251 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 252 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 253 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_3
# 257 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 258 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 259 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 260 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 261 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 262 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 263 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 264 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 265 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_4
# 267 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 268 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 269 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 270 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_1
# 271 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 272 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 273 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 274 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_5
# 276 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 277 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 278 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 279 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 280 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 281 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 282 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 286 "data/maps/Planet01_01/scripts.pory"
Movement_FirstJirachiEncounter1:
# 287 "data/maps/Planet01_01/scripts.pory"
	face_down
# 288 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 289 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 290 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 291 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 292 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 293 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 294 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 295 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 296 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 297 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 298 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 299 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 300 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 301 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 302 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 303 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 304 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 305 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 306 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 307 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 308 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 311 "data/maps/Planet01_01/scripts.pory"
Movement_FirstJirachiEncounter2:
# 312 "data/maps/Planet01_01/scripts.pory"
	face_up
# 313 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 314 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 315 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 316 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 317 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

EventScript_TheCaptain::
# 321 "data/maps/Planet01_01/scripts.pory"
	lock
# 323 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 0
	goto_if_eq EventScript_TheCaptain_2
# 397 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 1
	goto_if_eq EventScript_TheCaptain_3
# 434 "data/maps/Planet01_01/scripts.pory"
	compare VAR_CAPTAIN_DIALOGUE, 2
	goto_if_eq EventScript_TheCaptain_4
EventScript_TheCaptain_1:
# 473 "data/maps/Planet01_01/scripts.pory"
	release
	end

EventScript_TheCaptain_2:
# 325 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 326 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 327 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_0
# 331 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 332 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 333 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 335 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 336 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 337 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_1
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
	msgbox EventScript_TheCaptain_Text_2
# 348 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 349 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 350 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 352 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, Planet01_01_JirachiAppears_Movement_0
# 353 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 355 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 357 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 358 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 359 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_3
# 361 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 362 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 363 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 365 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 367 "data/maps/Planet01_01/scripts.pory"
	applymovement 17, EventScript_TheCaptain_Movement_0
# 368 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 370 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 371 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 372 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_4
# 374 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 375 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 376 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 378 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 380 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 381 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 382 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_5
# 385 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 386 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 387 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 389 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 390 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 391 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_6
# 392 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 393 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 394 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 395 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 1
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_3:
# 399 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 400 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 401 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_7
# 403 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 404 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 405 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 407 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 408 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 409 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_8
# 410 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 411 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 412 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 414 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 415 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 416 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_9
# 418 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 419 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 420 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 422 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 423 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 424 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_10
# 426 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 427 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 428 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 430 "data/maps/Planet01_01/scripts.pory"
	goto_if_set FLAG_TEMP_9, EventScript_TheCaptain_8
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_4:
# 436 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 437 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 438 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_11
# 440 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 441 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 442 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 444 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 445 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 446 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_12
# 447 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 448 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 449 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 451 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 452 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 453 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_13
# 454 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 455 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 456 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 458 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 459 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 460 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_14
# 461 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 462 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 463 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 465 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_CAPTAIN_SAD
# 466 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 467 "data/maps/Planet01_01/scripts.pory"
	msgbox EventScript_TheCaptain_Text_15
# 469 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 470 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 471 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
	goto EventScript_TheCaptain_1

EventScript_TheCaptain_8:
# 431 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_CAPTAIN_DIALOGUE, 2
	goto EventScript_TheCaptain_1


# 233 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 233 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

# 270 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_1:
# 270 "data/maps/Planet01_01/scripts.pory"
	emote_exclamation_mark
# 270 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

# 367 "data/maps/Planet01_01/scripts.pory"
EventScript_TheCaptain_Movement_0:
# 367 "data/maps/Planet01_01/scripts.pory"
	face_down
	step_end

Planet01_01_StartAirTimer_Text_0:
# 39 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 65 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 72 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 84 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 91 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 119 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition 001. \p"
	.string "Our team has placed notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a lab here for biological research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 137 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. Our Oxygen Systems can\l"
	.string "capture it, preventing our O2 levels\l"
	.string "from lowering while we're on the grass!$"

Planet01_01_HintText03_Text_0:
# 147 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 158 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 168 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: There are a lot of\n"
	.string "members of the Clefairy family around\l"
	.string "these rocks. They must prefer to live\l"
	.string "in the mountains.$"

Planet01_01_Carbink_Text_0:
# 182 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 187 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 199 "data/maps/Planet01_01/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's flashing red-$"

Planet01_01_JirachiAppears_Text_0:
# 212 "data/maps/Planet01_01/scripts.pory"
	.string "So this is an alien planet, eh?\l"
	.string "Well, it better watch out. I don't get\n"
	.string "suprised easily.$"

Planet01_01_JirachiAppears_Text_1:
# 226 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}...\p"
	.string "<More humans? Again, to cause more\n"
	.string "trouble?>\p"
	.string "...$"

Planet01_01_JirachiAppears_Text_2:
# 242 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}...Was that a Jirachi?!\n"
	.string "I think I could hear it somehow... Are\l"
	.string "there other humans here somewhere?!\l"
	.string "I bet they would know why my ship was\l"
	.string "dragged here. I need to look for them!$"

Planet01_01_JirachiAppears_Text_3:
# 253 "data/maps/Planet01_01/scripts.pory"
	.string "...Seeing a Jirachi is supposed\n"
	.string "to be good luck. It didn't seem too\l"
	.string "happy with me being here, though...\p"
	.string "I don't have a good feeling about this.$"

Planet01_01_JirachiAppears_Text_4:
# 265 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}H-H-HEY!\n"
	.string "D-D-DOWN H-H-HERE!{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Planet01_01_JirachiAppears_Text_5:
# 274 "data/maps/Planet01_01/scripts.pory"
	.string "What was that? A person?!\n"
	.string "...Hello?$"

EventScript_TheCaptain_Text_0:
# 327 "data/maps/Planet01_01/scripts.pory"
	.string "I N-N-NEED P-POWER\n"
	.string "P-PLEASE H-H-HELP ME.\l"
	.string "A-A-AMETHYST- CRYSTAL-\l"
	.string "BRIN-N-NG I-IT TO ME.$"

EventScript_TheCaptain_Text_1:
# 337 "data/maps/Planet01_01/scripts.pory"
	.string "Uh, an Amethyst will power you up?\n"
	.string "Ok... Where can I find one?$"

EventScript_TheCaptain_Text_2:
# 345 "data/maps/Planet01_01/scripts.pory"
	.string "...\n"
	.string "...\l"
	.string "O-ONE SE-SECOND...\n$"

EventScript_TheCaptain_Text_3:
# 359 "data/maps/Planet01_01/scripts.pory"
	.string "<Its drawing something? Where\n"
	.string "did it get that paper and pencil?>$"

EventScript_TheCaptain_Text_4:
# 372 "data/maps/Planet01_01/scripts.pory"
	.string "U-UP THE W-W-WATERFALL IN THE FOREST.\n"
	.string "O-O-OUR OLD L-L-LAB. GO WEST.$"

EventScript_TheCaptain_Text_5:
# 382 "data/maps/Planet01_01/scripts.pory"
	.string "Awesome, a map!\n"
	.string "...\l"
	.string "...You're quite the artist!$"

EventScript_TheCaptain_Text_6:
# 391 "data/maps/Planet01_01/scripts.pory"
	.string "TH-THANKS.$"

EventScript_TheCaptain_Text_7:
# 401 "data/maps/Planet01_01/scripts.pory"
	.string "Your map is great, but I'm a bit\n"
	.string "confused. Where are we now?$"

EventScript_TheCaptain_Text_8:
# 409 "data/maps/Planet01_01/scripts.pory"
	.string "TW-TWILIGHT PLATEAU.$"

EventScript_TheCaptain_Text_9:
# 416 "data/maps/Planet01_01/scripts.pory"
	.string "Ok, and your crystal is in the\n"
	.string "forest somewhere?$"

EventScript_TheCaptain_Text_10:
# 424 "data/maps/Planet01_01/scripts.pory"
	.string "U-UP IN THE LAB, A-A-ABOVE THE\n"
	.string "WATERFALL.$"

EventScript_TheCaptain_Text_11:
# 438 "data/maps/Planet01_01/scripts.pory"
	.string "So, were you a part of this team of\n"
	.string "researchers?$"

EventScript_TheCaptain_Text_12:
# 446 "data/maps/Planet01_01/scripts.pory"
	.string "Y-YES...$"

EventScript_TheCaptain_Text_13:
# 453 "data/maps/Planet01_01/scripts.pory"
	.string "Wow, that's cool!$"

EventScript_TheCaptain_Text_14:
# 460 "data/maps/Planet01_01/scripts.pory"
	.string "...Uh, what happened?$"

EventScript_TheCaptain_Text_15:
# 467 "data/maps/Planet01_01/scripts.pory"
	.string "T-TALKING H-H-HURTS...\n"
	.string "C-CRYSTAL FIRS-ST-ST-ST...$"
