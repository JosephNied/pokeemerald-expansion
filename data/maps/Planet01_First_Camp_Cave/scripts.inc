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
# 114 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


voicedialogueABC::
# 119 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq voicedialogueABC_1
# 138 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq voicedialogueABC_2
# 248 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_eq voicedialogueABC_3
# 318 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 4
	goto_if_eq voicedialogueABC_4
# 369 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 5
	goto_if_eq voicedialogueABC_5
	end

voicedialogueABC_1:
# 120 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 121 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 122 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 123 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 124 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special ShakeCamera
# 126 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 127 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 128 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_0
# 130 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 131 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 132 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 133 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
# 134 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitstate
# 135 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end

voicedialogueABC_2:
# 139 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 140 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 141 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 142 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_1
# 143 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 144 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 145 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 146 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 148 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 149 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 150 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_2
# 151 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 152 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 153 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 154 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 156 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 157 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 158 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_3
# 160 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 161 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 162 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 163 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 165 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 166 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 167 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_4
# 169 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 170 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 171 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 172 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 174 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 175 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 176 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_5
# 181 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 182 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 183 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 184 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 186 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 187 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 188 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_6
# 190 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 191 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 192 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 194 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 195 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 196 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_7
# 205 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 206 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 207 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 208 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 210 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 211 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 212 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_8
# 213 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 214 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 215 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 217 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 218 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 219 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_9
# 224 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 225 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 226 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 227 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 229 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 230 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 231 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_10
# 232 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 233 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 234 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 236 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 60
# 238 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 239 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 240 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_11
# 243 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 244 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 245 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 246 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_3:
# 249 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 250 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 251 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 252 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_12
# 253 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 254 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 255 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 257 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 258 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 259 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_13
# 260 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 261 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 262 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 263 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 265 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 266 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 267 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_14
# 271 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 272 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 273 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 274 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 276 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 277 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 278 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_15
# 280 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 281 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 282 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 283 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 285 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 286 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 287 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_16
# 293 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 294 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 295 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 296 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 298 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 299 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 300 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_17
# 304 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 305 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 306 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 308 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 30
# 310 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 311 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 312 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_18
# 313 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 314 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 315 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 316 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_4:
# 319 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 320 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 321 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 322 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_19
# 326 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 327 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 328 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 330 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 331 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 332 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_20
# 333 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 334 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 335 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 337 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 338 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 339 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_21
# 345 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 346 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 347 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 349 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 350 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 351 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_22
# 354 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 355 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 356 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 358 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 359 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 360 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_23
# 361 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 362 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 363 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 365 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 366 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_DAILY_SLOTS, 6
# 367 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	return

voicedialogueABC_5:
# 371 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 372 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 373 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_24
# 376 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 377 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 378 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 380 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 381 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 382 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_25
# 383 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 384 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
	.string "and got aggressive, so we better move.\p"
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
	.string "Biologist: Though the water here is\n"
	.string "safe for our Pokémon to drink, it\l"
	.string "transformed them in an unexpected way. \l"
	.string "They changed colors: Op's Excadrill,\l"
	.string "Kingdra, and Haxorus, and my Venusaur\l"
	.string "and Charizard.$"

voicedialogueABC_Text_0:
# 128 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Woah, what's going on?\n"
	.string "...I want to go check on my ship.$"

voicedialogueABC_Text_1:
# 142 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Can you hear me?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_2:
# 150 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You again!$"

voicedialogueABC_Text_3:
# 158 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I've decided. We have an opportunity\n"
	.string "here to help each other.>$"

voicedialogueABC_Text_4:
# 167 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Help each other? But I still don't know\n"
	.string "what's going on.$"

voicedialogueABC_Text_5:
# 176 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Deoxys, the space virus Pokémon, is\n"
	.string "using its psychic power to hold down\l"
	.string "your ship. It wants to infect you just\l"
	.string "like those scary Pokémon from earlier.\l"
	.string "Your only escape is to defeat Deoxys.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_6:
# 188 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Deoxys?! Good grief. But who are you,\n"
	.string "and how is your voice in my head?$"

voicedialogueABC_Text_7:
# 196 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I am- or, was- the Biologist on the EOD \n"
	.string "research team. Deoxys and I are both in\l"
	.string "the EOD lab above the waterfall in the \l"
	.string "forest. If you can defeat Deoxys, that\l"
	.string "will help me too with my... Unlucky\l"
	.string "situation. A situation that does have\l"
	.string "the silver lining of allowing my mind to\l"
	.string "project itself across the planet, hence\l"
	.string "our mental communication.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_8:
# 212 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "That's wild. How do I get to you?$"

voicedialogueABC_Text_9:
# 219 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I don't know how to get you up the \n"
	.string "waterfall yet, but this planet holds \l"
	.string "many surprises. That's all I have the \l"
	.string "chance to say for now. Good luck. And... \l"
	.string "Thank you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_10:
# 231 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ok. Well, that's progress!$"

voicedialogueABC_Text_11:
# 240 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wait, didn't Cap's Emergency Protocol\n"
	.string "thing supposedly send the crew home?\l"
	.string "Why would the Biologist be left behind?$"

voicedialogueABC_Text_12:
# 252 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hello, TARC? I need to talk to you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_13:
# 259 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You're back!$"

voicedialogueABC_Text_14:
# 267 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Yes. Communication takes a lot of\n"
	.string "mental focus; focus that I need to use\l"
	.string "to keep the force of Deoxys at bay on\l"
	.string "this planet.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_15:
# 278 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Huh? Are you having some kind of\n"
	.string "psychic battle with Deoxys right now?!$"

voicedialogueABC_Text_16:
# 287 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Given I'm fully fused with Deoxys, it's \n"
	.string "really more of a... personal struggle?\p"
	.string "Deoxy's biological imperative is to\n"
	.string "spread, but my will can influence it as\l"
	.string "well. I'm going to give you an opening to\l"
	.string "attack it once you get to me.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_17:
# 300 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Woah there. You never mentioned that!\n"
	.string "...\p"
	.string "Wait, if I attack it... Am I attacking\n"
	.string "you? Hello?$"

voicedialogueABC_Text_18:
# 312 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Gone again.$"

voicedialogueABC_Text_19:
# 322 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<TARC. I can't hold them back anymore.\n"
	.string "The infected Pokemon are coming back. \l"
	.string "If you see them, try to walk slowly;\l"
	.string "running will alert them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_20:
# 332 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wow, really? Are you ok?$"

voicedialogueABC_Text_21:
# 339 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Am I... Ok? You're starting to sound\n"
	.string "like-\l"
	.string "...\p"
	.string "Well... It's kind of you to ask that, even\n"
	.string "though the answer is obviously no.\l"
	.string "You don't even know me.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_22:
# 351 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "We're partners now. You're the last\n"
	.string "person I might ever talk to. I'd prefer\l"
	.string "if we could be friends.$"

voicedialogueABC_Text_23:
# 360 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Good point. Hope to see you soon...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_24:
# 373 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well, then. You're quite the scientist\n"
	.string "yourself. I'll be waiting at the top.\l"
	.string "I recommend you prepare your team.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_25:
# 382 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Got it!$"
