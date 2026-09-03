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
	setflag FLAG_UNUSED_0x03B
# 31 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 1
# 33 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1
# 35 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, SPECIES_URSALUNA
# 36 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative RegisterSpeciesInDex
# 37 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
# 38 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	end
# 40 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
PlayerLost:
# 41 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end


Planet01_First_Camp_Cave_EventScript_Item01::
# 46 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 47 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 48 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 3
# 49 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 50 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_EventScript_Item02::
# 55 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 56 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 57 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 2
# 58 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49C
# 59 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_EventScript_Item03::
# 64 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 65 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 66 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 5
# 67 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 68 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_HintText01::
# 73 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 74 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_0
# 83 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 84 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 85 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 60
# 87 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 88 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 89 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_1
# 91 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 92 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 93 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 95 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq Planet01_First_Camp_Cave_HintText01_2
Planet01_First_Camp_Cave_HintText01_1:
# 100 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end

Planet01_First_Camp_Cave_HintText01_2:
# 96 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	call voicedialogueABC
# 97 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Planet01_First_Camp_Cave_HintText01_1


groundjournal_1::
# 105 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 107 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 108 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 109 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox groundjournal_1_Text_0
# 110 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 111 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 113 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox groundjournal_1_Text_1
# 122 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


voicedialogueABC::
# 127 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq voicedialogueABC_1
# 146 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq voicedialogueABC_2
# 191 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_eq voicedialogueABC_3
# 289 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 4
	goto_if_eq voicedialogueABC_4
# 353 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 5
	goto_if_eq voicedialogueABC_5
	end

voicedialogueABC_1:
# 128 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 129 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 130 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 131 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 132 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special ShakeCamera
# 134 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 135 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 136 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_0
# 138 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 139 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 140 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 141 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
# 142 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitstate
# 143 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end

voicedialogueABC_2:
# 147 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 148 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 149 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_1
# 151 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 152 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 153 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 155 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 156 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 157 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_2
# 159 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 160 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 161 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 163 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 164 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 165 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_3
# 175 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 176 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 177 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 179 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 180 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 181 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_4
# 187 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 188 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 189 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_3:
# 192 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 193 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 194 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_5
# 195 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 196 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 197 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 199 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 200 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 201 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_6
# 203 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 204 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 205 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 207 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 208 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 209 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_7
# 216 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
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
# 224 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 225 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 227 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 228 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 229 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_9
# 231 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 232 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 233 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 235 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 236 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 237 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_10
# 238 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 239 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 241 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 242 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 243 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_11
# 249 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 250 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 251 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 253 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 254 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 255 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_12
# 257 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 258 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 260 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 261 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 262 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_13
# 263 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 264 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 265 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 267 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 268 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 269 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_14
# 270 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 271 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 273 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 274 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 275 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_15
# 278 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 279 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 280 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 282 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 283 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 284 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_16
# 285 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 286 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 287 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_4:
# 290 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 291 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 292 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_17
# 298 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 299 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 300 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 302 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 303 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 304 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_18
# 305 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 306 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 307 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 309 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 310 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 311 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_19
# 314 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 315 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 316 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 318 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 319 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 320 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_20
# 323 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 324 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 325 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 327 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 328 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 329 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_21
# 331 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 332 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 333 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 335 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 336 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 337 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_22
# 338 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 339 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 340 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 342 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 343 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 344 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_23
# 345 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 346 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 347 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 350 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_DAILY_SLOTS, 6
# 351 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	return

voicedialogueABC_5:
# 355 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 356 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 357 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_24
# 360 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 361 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 362 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 364 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 365 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 366 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_25
# 367 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 368 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
	return


Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0:
# 15 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The enormous Pokémon lets out\n"
	.string "a deafening roar!$"

Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1:
# 33 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The Ursaluna disappeared into the\n"
	.string "cave.$"

Planet01_First_Camp_Cave_HintText01_Text_0:
# 74 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Engineer: We made a research base\n"
	.string "here, but the local fauna discovered it\l"
	.string "and got aggressive, so we better move.\p"
	.string "There's another cave across the shore,\n"
	.string "maybe we can check it out?\p"
	.string "We might need to use our pokemon to dig\n"
	.string "around and create a wall between us and\l"
	.string "the icy caverns, though I do want to \l"
	.string "explore those too.$"

Planet01_First_Camp_Cave_HintText01_Text_1:
# 89 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "I was hoping to find these guys\n"
	.string "by now...$"

groundjournal_1_Text_0:
# 109 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Oh wow, a journal!$"

groundjournal_1_Text_1:
# 113 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Biologist: Though the water here is\n"
	.string "safe for our Pokémon to drink, it\l"
	.string "transformed them in an unexpected way. \l"
	.string "They changed colors: The Engineer's \l"
	.string "Excadrill and Kingdra, my Venusaur and \l"
	.string "Charizard, and Ops' Haxorus. Ops' \l"
	.string "Dragonite, however, was fine; I really \l"
	.string "want to figure out why Dragonite in \l"
	.string "particular is so resilient to change.$"

voicedialogueABC_Text_0:
# 136 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Woah, what's going on?\n"
	.string "...I want to go check on my ship.$"

voicedialogueABC_Text_1:
# 149 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<A fly, caught in a web. I'm surprised\n"
	.string "you're still whole, to be honest.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_2:
# 157 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You again! Enough with the games! Just\n"
	.string "tell me who you are!$"

voicedialogueABC_Text_3:
# 165 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Who am I... Good question... Nothing\n"
	.string "important. In truth, I was going to tell\l"
	.string "you how you might escape by getting to\l"
	.string "the research facility at the top of the\l"
	.string "waterfall. But, I guess I still don't\l"
	.string "know if that's what I want... I don't\l"
	.string "mean you any harm. But it's probably\l"
	.string "better you don't listen to me; a lost\l"
	.string "soul in the dark. However you choose to\l"
	.string "end this... I'm sorry.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_4:
# 181 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Look, you're clearly going through a\n"
	.string "time, but I don't want to be here. Just\l"
	.string "tell me what I need to do to get my ship\l"
	.string "off the ground.\p"
	.string "Hello? Hello?!?!\p"
	.string "...Gone again? Damn.$"

voicedialogueABC_Text_5:
# 194 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I see you're persevering.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_6:
# 201 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You again? Got anything meaningful to\n"
	.string "say?$"

voicedialogueABC_Text_7:
# 209 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<...>\n"
	.string "<I decided. You need to come to the \l"
	.string "primary facility. I don't know how to \l"
	.string "get you up the waterfall, but when you\l"
	.string "get there, I can guide you. I regret\l"
	.string "being a coward about this.\p"
	.string "Please don't give up.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_8:
# 222 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wow, that's a change in tune! Are you\n ready then to tell me who you are?$"

voicedialogueABC_Text_9:
# 229 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<...I would be, the one you've read\n"
	.string "about, the Biologist...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_10:
# 237 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ok. Interesting. Got a name?$"

voicedialogueABC_Text_11:
# 243 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<...>\p"
	.string "<We-, I-, ...a miscalculation was made.\n"
	.string "If it wasn't obvious, the space virus is\l"
	.string "some form of Deoxys. Its psychic power\l"
	.string "is holding your ship. Defeat Deoxys,\l"
	.string "and you might be able to escape.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_12:
# 255 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "I have to do that?! So what are you\n"
	.string "up to then?$"

voicedialogueABC_Text_13:
# 262 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<You'll see. Just know, I am helping.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_14:
# 269 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "...How, exactly?$"

voicedialogueABC_Text_15:
# 275 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I'll explain later... my only advice...\n"
	.string "The north and south of this planet, we\l"
	.string "never fully explored. Look there.{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_16:
# 284 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ok. Well, I guess this is progress.$"

voicedialogueABC_Text_17:
# 292 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey... Those infected monsters are\n"
	.string "coming back. You can't understand now,\l"
	.string "but I've been trying to hold them back.\l"
	.string "Sorry I'm not stronger. I recommend\l"
	.string "you walk slowly, running with likely\l"
	.string "alert them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_18:
# 304 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wow, really? Are you, like ok?$"

voicedialogueABC_Text_19:
# 311 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Am I... Ok?\p"
	.string "You're starting to sounds like- Well,\n"
	.string "whatever.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_20:
# 320 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "...We're partners now. You're the last\n"
	.string "person I might ever talk to. I'd prefer\l"
	.string "if we could be friends.$"

voicedialogueABC_Text_21:
# 329 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Now you really sound like them. I can't\n"
	.string "be much of a 'friend.'>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_22:
# 337 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Pssh, ok, 'Shadow the Edgehog.'$"

voicedialogueABC_Text_23:
# 344 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Ugghhh>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_24:
# 357 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well, then. You're quite the scientist\n"
	.string "yourself. I'll be waiting at the top.\l"
	.string "I recommend you prepare your team.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_25:
# 366 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "...Yeah. Got it.$"
