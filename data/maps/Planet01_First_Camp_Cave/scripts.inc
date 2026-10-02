Planet01_First_Camp_Cave_MapScripts::
# 2 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_First_Camp_Cave_Enter
	.byte 0


Planet01_First_Camp_Cave_Enter::
# 7 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_TEMP_2, 0
	end


Planet01_First_Camp_Cave_UrsalunaEncounter::
# 12 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lockall
# 13 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	faceplayer
# 15 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0
# 18 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special SetBossBattle
# 19 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 75, ITEM_NONE
# 24 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	dowildbattle
# 25 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special BossBattleOff
# 27 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 28 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	goto_if_eq PlayerLost
# 30 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 32 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x03B
# 33 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 1
# 35 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1
# 36 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 37 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 38 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 40 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, SPECIES_URSALUNA
# 41 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative RegisterSpeciesInDex
# 42 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
# 43 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	end
# 45 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
PlayerLost:
# 46 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end


Planet01_First_Camp_Cave_EventScript_Item01::
# 51 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 52 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 53 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 3
# 54 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 55 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_EventScript_Item02::
# 60 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 61 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 62 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 2
# 63 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49C
# 64 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_EventScript_Item03::
# 69 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 70 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 71 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 5
# 72 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 73 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_HintText01::
# 78 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 79 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_0
# 88 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 89 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 91 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_First_Camp_Cave_HintText01_2
Planet01_First_Camp_Cave_HintText01_1:
# 95 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end

Planet01_First_Camp_Cave_HintText01_2:
# 92 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	call voicedialogueABC
	goto Planet01_First_Camp_Cave_HintText01_1


groundjournal_1::
# 100 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 102 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 103 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 104 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox groundjournal_1_Text_0
# 105 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 106 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 108 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox groundjournal_1_Text_1
# 120 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


voicedialogueABC::
# 125 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq voicedialogueABC_1
# 144 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq voicedialogueABC_2
# 258 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_eq voicedialogueABC_3
# 332 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 4
	goto_if_eq voicedialogueABC_4
# 383 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 5
	goto_if_eq voicedialogueABC_5
	end

voicedialogueABC_1:
# 126 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 127 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 128 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 129 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 130 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special ShakeCamera
# 132 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 133 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 134 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_0
# 136 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 137 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 138 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 139 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
# 140 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitstate
# 141 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end

voicedialogueABC_2:
# 145 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 146 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 147 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 148 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_1
# 149 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 150 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 151 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 152 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 154 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	playse SE_PIN
# 155 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, voicedialogueABC_Movement_0
# 156 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 157 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 158 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 159 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_2
# 160 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 161 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 162 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 163 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 165 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 166 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 167 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_3
# 169 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 170 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 171 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 172 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 174 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 175 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 176 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_4
# 178 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 179 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 180 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 181 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 183 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 184 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 185 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_5
# 190 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 191 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 192 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 193 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 195 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 196 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 197 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_6
# 199 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 200 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 201 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 203 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 204 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 205 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_7
# 215 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 216 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 217 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 218 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 220 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 221 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 222 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_8
# 223 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 224 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 225 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 227 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 228 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 229 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_9
# 234 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 235 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 236 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 237 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 239 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 240 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 241 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_10
# 242 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 243 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 244 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 246 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 30
# 248 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 249 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 250 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_11
# 253 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 254 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 255 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 256 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_3:
# 259 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 260 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 261 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 262 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_12
# 263 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 264 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 265 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 267 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	playse SE_PIN
# 268 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, voicedialogueABC_Movement_0
# 269 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 270 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 271 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 272 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_13
# 273 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 274 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 275 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 276 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 278 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 279 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 280 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_14
# 284 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 285 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 286 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 287 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 289 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 290 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 291 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_15
# 294 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 295 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 296 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 297 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 299 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 300 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 301 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_16
# 307 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 308 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 309 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 310 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 312 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 313 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 314 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_17
# 318 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 319 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 320 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 322 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 30
# 324 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 325 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 326 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_18
# 327 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 328 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 329 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 330 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_4:
# 333 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 334 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 335 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 336 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_19
# 340 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 341 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 342 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 344 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 345 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 346 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_20
# 347 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 348 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 349 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 351 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 352 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 353 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_21
# 359 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 360 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 361 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 363 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 364 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 365 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_22
# 368 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 369 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 370 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 372 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 373 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 374 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_23
# 375 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 376 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 377 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 379 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 380 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_DAILY_SLOTS, 6
# 381 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	return

voicedialogueABC_5:
# 385 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 386 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 387 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_24
# 390 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 391 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 392 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 394 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 395 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 396 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_25
# 397 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 398 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
	return


# 155 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
voicedialogueABC_Movement_0:
# 155 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	emote_exclamation_mark
	step_end

Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0:
# 15 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The enormous Pokémon lets out\n"
	.string "a deafening roar!$"

Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1:
# 35 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The Ursaluna scampered away.$"

Planet01_First_Camp_Cave_HintText01_Text_0:
# 79 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ops Lead: We made a research base\n"
	.string "here, but the local fauna discovered it\l"
	.string "and is getting aggressive, so we'll move.\p"
	.string "There's another cave across the shore,\n"
	.string "maybe we can check it out?\p"
	.string "We might need to use our pokemon to dig\n"
	.string "around and create a wall between us and\l"
	.string "the icy caverns, though I do want to \l"
	.string "explore those too.$"

groundjournal_1_Text_0:
# 104 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Oh wow, a journal!$"

groundjournal_1_Text_1:
# 108 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Biologist: Getting to explore this\n"
	.string "amazing planet with Ops has been a\l"
	.string "dream. Who knew that when we first met\l"
	.string "years ago we'd get such an\l"
	.string "opportunity?\p"
	.string "The Best part? The EDGE OF DAWN\n"
	.string "company is perfectly happy with us\l"
	.string "doing our research, our way.\p"
	.string "This is the perfect place for me to\n"
	.string "make my big discovery: The one that's\l"
	.string "gonna let Ops and I make our mark on\l"
	.string "scientific history.$"

voicedialogueABC_Text_0:
# 134 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Woah, what's going on?\n"
	.string "...I want to go check on my ship.$"

voicedialogueABC_Text_1:
# 148 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Can you hear me?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_2:
# 159 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You again!$"

voicedialogueABC_Text_3:
# 167 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I've decided. We have an opportunity\n"
	.string "here to help each other.>$"

voicedialogueABC_Text_4:
# 176 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Help each other? But I still don't know\n"
	.string "what's going on.$"

voicedialogueABC_Text_5:
# 185 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Your ship is being held down by the\n"
	.string "psychic power of the Deoxys Cell: A\l"
	.string "biological mass that Deoxys, the space\l"
	.string "virus Pokémon, spawns from.\p"
	.string "Your only escape is to defeat it.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_6:
# 197 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Deoxys... Cell?! Good grief. But who are\n"
	.string "you, and how is your voice in my head?$"

voicedialogueABC_Text_7:
# 205 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I am- or, was- the Biologist on the EOD\n"
	.string "research team. The Deoxys Cell and I\l"
	.string "are both in the EOD lab above the\l"
	.string "waterfall.\p"
	.string "If you can defeat the Deoxys Cell, that\n"
	.string "will help me too with my... Unlucky\l"
	.string "situation. A situation that does have\l"
	.string "the silver lining of allowing my mind to\l"
	.string "project itself across the planet, hence\l"
	.string "our mental communication.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_8:
# 222 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "That's wild. How do I get to you?$"

voicedialogueABC_Text_9:
# 229 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I don't know how to get you up the \n"
	.string "waterfall yet, but this planet holds\l"
	.string "many surprises. That's all I have the\l"
	.string "chance to say for now. Good luck. And...\l"
	.string "Thank you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_10:
# 241 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ok. Well, that's progress!$"

voicedialogueABC_Text_11:
# 250 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wait, didn't Cap's Emergency Protocol\n"
	.string "thing supposedly send the crew home?\l"
	.string "Why would the Biologist be left behind?$"

voicedialogueABC_Text_12:
# 262 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hello, TARC? I need to talk to you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_13:
# 272 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You're back!$"

voicedialogueABC_Text_14:
# 280 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Yes. Communication takes a lot of\n"
	.string "mental focus; focus that I need to use\l"
	.string "to keep the force of the Deoxys Cell\l"
	.string "at bay on this planet.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_15:
# 291 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Huh? Are you having some kind of\n"
	.string "psychic battle with the Deoxys Cell\l"
	.string "now?!$"

voicedialogueABC_Text_16:
# 301 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Given I'm fully fused with it, it's\n"
	.string "really more of a... personal struggle?\p"
	.string "Deoxy's biological imperative is to\n"
	.string "spread, but my will can influence it as\l"
	.string "well. I'm going to give you an opening to\l"
	.string "attack it once you get to me.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_17:
# 314 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Woah there. You never mentioned that!\n"
	.string "...\p"
	.string "Wait, if I attack it... Am I attacking\n"
	.string "you? Hello?$"

voicedialogueABC_Text_18:
# 326 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Gone again.$"

voicedialogueABC_Text_19:
# 336 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<TARC. I can't hold them back anymore.\n"
	.string "The infected Pokemon are coming back.\l"
	.string "If you see them, try to walk slowly;\l"
	.string "running will alert them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_20:
# 346 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wow, really? Are you ok?$"

voicedialogueABC_Text_21:
# 353 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Am I... Ok? You're starting to sound\n"
	.string "like-\l"
	.string "...\p"
	.string "Well... It's kind of you to ask that, even\n"
	.string "though the answer is obviously no.\l"
	.string "You don't even know me.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_22:
# 365 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "We're partners now. You're the last\n"
	.string "person I might ever talk to. I'd prefer\l"
	.string "if we could be friends.$"

voicedialogueABC_Text_23:
# 374 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Good point. Hope to see you soon...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_24:
# 387 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Incredible. You're quite the scientist\n"
	.string "yourself! Terragem knows {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall{COLOR RED}{SHADOW LIGHT_RED}; get\l"
	.string "up that waterfall and I'll guide you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_25:
# 396 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Got it!$"
