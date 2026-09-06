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
# 255 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_eq voicedialogueABC_3
# 326 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 4
	goto_if_eq voicedialogueABC_4
# 377 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 155 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 156 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_2
# 157 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 158 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 159 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 160 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 162 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 163 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 164 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_3
# 166 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 167 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 168 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 169 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 171 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 172 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 173 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_4
# 175 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 176 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 177 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 178 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 180 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 181 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 182 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_5
# 187 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 188 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 189 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 190 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 192 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 193 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 194 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_6
# 196 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 197 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 198 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 200 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 201 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 202 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_7
# 212 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 213 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 214 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 215 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 217 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 218 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 219 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_8
# 220 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 221 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 222 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 224 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 225 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 226 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_9
# 231 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 232 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 233 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 234 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 236 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 237 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 238 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_10
# 239 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 240 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 241 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 243 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 30
# 245 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 246 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 247 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_11
# 250 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 251 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 252 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 253 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_3:
# 256 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 257 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 258 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 259 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_12
# 260 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 261 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 262 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 264 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 265 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 266 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_13
# 267 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 268 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 269 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 270 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 272 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 273 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 274 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_14
# 278 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 279 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 280 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 281 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 283 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 284 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 285 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_15
# 288 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 289 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 290 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 291 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 293 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 294 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 295 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_16
# 301 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 302 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 303 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 304 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 306 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 307 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 308 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_17
# 312 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 313 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 314 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 316 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 30
# 318 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 319 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 320 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_18
# 321 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 322 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 323 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 324 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_4:
# 327 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 328 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 329 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 330 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_19
# 334 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 335 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 336 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 338 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 339 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 340 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_20
# 341 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 342 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 343 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 345 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 346 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 347 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_21
# 353 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 354 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 355 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 357 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 358 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 359 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_22
# 362 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 363 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 364 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 366 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 367 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 368 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_23
# 369 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 370 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 371 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 373 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 374 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_DAILY_SLOTS, 6
# 375 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	return

voicedialogueABC_5:
# 379 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 380 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 381 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_24
# 384 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 385 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 386 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 388 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 389 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 390 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_25
# 391 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 392 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
	return


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
# 156 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You again!$"

voicedialogueABC_Text_3:
# 164 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I've decided. We have an opportunity\n"
	.string "here to help each other.>$"

voicedialogueABC_Text_4:
# 173 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Help each other? But I still don't know\n"
	.string "what's going on.$"

voicedialogueABC_Text_5:
# 182 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Your ship being held down by the\n"
	.string "psychic power of the Deoxys Cell: An\l"
	.string "biological mass that Deoxys, the space\l"
	.string "virus Pokémon, spawns from.\p"
	.string "Your only escape is to defeat it.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_6:
# 194 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Deoxys... Cell?! Good grief. But who are\n"
	.string "you, and how is your voice in my head?$"

voicedialogueABC_Text_7:
# 202 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
# 219 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "That's wild. How do I get to you?$"

voicedialogueABC_Text_9:
# 226 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I don't know how to get you up the \n"
	.string "waterfall yet, but this planet holds\l"
	.string "many surprises. That's all I have the\l"
	.string "chance to say for now. Good luck. And...\l"
	.string "Thank you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_10:
# 238 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ok. Well, that's progress!$"

voicedialogueABC_Text_11:
# 247 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wait, didn't Cap's Emergency Protocol\n"
	.string "thing supposedly send the crew home?\l"
	.string "Why would the Biologist be left behind?$"

voicedialogueABC_Text_12:
# 259 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hello, TARC? I need to talk to you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_13:
# 266 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You're back!$"

voicedialogueABC_Text_14:
# 274 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Yes. Communication takes a lot of\n"
	.string "mental focus; focus that I need to use\l"
	.string "to keep the force of the Deoxys Cell\l"
	.string "at bay on this planet.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_15:
# 285 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Huh? Are you having some kind of\n"
	.string "psychic battle with the Deoxys Cell\l"
	.string "now?!$"

voicedialogueABC_Text_16:
# 295 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Given I'm fully fused with it, it's\n"
	.string "really more of a... personal struggle?\p"
	.string "Deoxy's biological imperative is to\n"
	.string "spread, but my will can influence it as\l"
	.string "well. I'm going to give you an opening to\l"
	.string "attack it once you get to me.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_17:
# 308 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Woah there. You never mentioned that!\n"
	.string "...\p"
	.string "Wait, if I attack it... Am I attacking\n"
	.string "you? Hello?$"

voicedialogueABC_Text_18:
# 320 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Gone again.$"

voicedialogueABC_Text_19:
# 330 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<TARC. I can't hold them back anymore.\n"
	.string "The infected Pokemon are coming back.\l"
	.string "If you see them, try to walk slowly;\l"
	.string "running will alert them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_20:
# 340 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wow, really? Are you ok?$"

voicedialogueABC_Text_21:
# 347 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Am I... Ok? You're starting to sound\n"
	.string "like-\l"
	.string "...\p"
	.string "Well... It's kind of you to ask that, even\n"
	.string "though the answer is obviously no.\l"
	.string "You don't even know me.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_22:
# 359 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "We're partners now. You're the last\n"
	.string "person I might ever talk to. I'd prefer\l"
	.string "if we could be friends.$"

voicedialogueABC_Text_23:
# 368 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Good point. Hope to see you soon...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_24:
# 381 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Incredible. You're quite the scientist\n"
	.string "yourself! Terragem knows {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall{COLOR RED}{SHADOW LIGHT_RED}; get\l"
	.string "up that waterfall and I'll guide you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_25:
# 390 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Got it!$"
