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
# 14 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	playse SE_PIN
# 15 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_First_Camp_Cave_UrsalunaEncounter_Movement_0
# 16 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0
# 19 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special SetBossBattle
# 20 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setwildbattle SPECIES_URSALUNA, 75, ITEM_NONE
# 25 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	dowildbattle
# 26 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special BossBattleOff
# 28 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
# 29 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	goto_if_eq PlayerLost
# 31 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 33 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x03B
# 34 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 1
# 36 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1
# 37 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 38 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 39 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 41 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, SPECIES_URSALUNA
# 42 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative RegisterSpeciesInDex
# 43 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
# 44 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	end
# 46 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
PlayerLost:
# 47 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end


Planet01_First_Camp_Cave_EventScript_Item01::
# 52 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 53 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 54 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 3
# 55 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 56 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_EventScript_Item02::
# 61 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 62 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 63 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 2
# 64 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_UNUSED_0x49C
# 65 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_EventScript_Item03::
# 70 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 71 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	giveitem ITEM_TM_PROTECT, 1
# 72 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	removeobject 5
# 73 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 74 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


Planet01_First_Camp_Cave_HintText01::
# 79 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 80 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_0
# 89 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 90 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 92 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq Planet01_First_Camp_Cave_HintText01_2
Planet01_First_Camp_Cave_HintText01_1:
# 96 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end

Planet01_First_Camp_Cave_HintText01_2:
# 93 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	call voicedialogueABC
	goto Planet01_First_Camp_Cave_HintText01_1


groundjournal_1::
# 101 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 103 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 104 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 105 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox groundjournal_1_Text_0
# 106 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 107 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 109 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox groundjournal_1_Text_1
# 121 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


voicedialogueABC::
# 126 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 0
	goto_if_eq voicedialogueABC_1
# 145 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq voicedialogueABC_2
# 259 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_eq voicedialogueABC_3
# 333 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 4
	goto_if_eq voicedialogueABC_4
# 384 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 5
	goto_if_eq voicedialogueABC_5
	end

voicedialogueABC_1:
# 127 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 128 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 129 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 130 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 131 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special ShakeCamera
# 133 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 134 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 135 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_0
# 137 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 138 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 139 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 140 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	clearflag FLAG_REGISTERED_CRISTIN
# 141 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitstate
# 142 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	releaseall
	end

voicedialogueABC_2:
# 146 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 147 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 148 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 149 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_1
# 150 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 151 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 152 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 153 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 155 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	playse SE_PIN
# 156 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_First_Camp_Cave_UrsalunaEncounter_Movement_0
# 157 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 158 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 159 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 160 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_2
# 161 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 162 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 163 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 164 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 166 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 167 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 168 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_3
# 170 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 171 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 172 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 173 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 175 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 176 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 177 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_4
# 179 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 180 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 181 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 182 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 184 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 185 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 186 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_5
# 191 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 192 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 193 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 194 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 196 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 197 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 198 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_6
# 200 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 201 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 202 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 204 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 205 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 206 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_7
# 216 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 217 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 218 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 219 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 221 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 222 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 223 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_8
# 224 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 225 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 226 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 228 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 229 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 230 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_9
# 235 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 236 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 237 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 238 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 240 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 241 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 242 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_10
# 243 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 244 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 245 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 247 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 30
# 249 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 250 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 251 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_11
# 254 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 255 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 256 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 257 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_3:
# 260 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 261 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 262 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 263 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_12
# 264 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 265 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 266 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 268 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	playse SE_PIN
# 269 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_First_Camp_Cave_UrsalunaEncounter_Movement_0
# 270 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 271 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 272 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 273 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_13
# 274 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 275 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 276 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 277 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 279 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 280 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 281 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_14
# 285 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 286 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 287 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 288 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 290 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 291 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 292 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_15
# 295 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 296 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 297 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 298 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 300 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 301 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 302 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_16
# 308 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 309 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 310 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 311 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 313 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 314 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 315 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_17
# 319 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 320 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 321 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 323 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 30
# 325 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 326 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 327 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_18
# 328 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 329 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 330 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 331 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_4:
# 334 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Script_FadeOutMapMusic
# 335 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 336 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 337 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_19
# 341 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 342 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 343 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 345 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 346 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 347 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_20
# 348 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 349 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 350 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 352 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 353 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 354 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_21
# 360 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 361 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 362 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 364 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 365 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 366 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_22
# 369 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 370 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 371 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 373 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 374 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 375 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_23
# 376 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 377 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 378 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 380 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 381 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_DAILY_SLOTS, 6
# 382 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	return

voicedialogueABC_5:
# 386 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 387 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 388 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_24
# 391 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 392 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 393 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 395 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 396 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 397 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_25
# 398 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 399 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
	return


# 15 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
Planet01_First_Camp_Cave_UrsalunaEncounter_Movement_0:
# 15 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	emote_exclamation_mark
	step_end

Planet01_First_Camp_Cave_UrsalunaEncounter_Text_0:
# 16 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The enormous Pokémon lets out\n"
	.string "a deafening roar!$"

Planet01_First_Camp_Cave_UrsalunaEncounter_Text_1:
# 36 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "The Ursaluna scampered away.$"

Planet01_First_Camp_Cave_HintText01_Text_0:
# 80 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
# 105 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Oh wow, a journal!$"

groundjournal_1_Text_1:
# 109 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
# 135 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Woah, what's going on?\n"
	.string "...I want to go check on my ship.$"

voicedialogueABC_Text_1:
# 149 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Can you hear me?>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_2:
# 160 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You again!$"

voicedialogueABC_Text_3:
# 168 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I've decided. We have an opportunity\n"
	.string "here to help each other.>$"

voicedialogueABC_Text_4:
# 177 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Help each other? But I still don't know\n"
	.string "what's going on.$"

voicedialogueABC_Text_5:
# 186 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Your ship is being held down by the\n"
	.string "psychic power of the Deoxys Cell: A\l"
	.string "biological mass that Deoxys, the space\l"
	.string "virus Pokémon, spawns from.\p"
	.string "Your only escape is to defeat it.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_6:
# 198 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Deoxys... Cell?! Good grief. But who are\n"
	.string "you, and how is your voice in my head?$"

voicedialogueABC_Text_7:
# 206 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
# 223 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "That's wild. How do I get to you?$"

voicedialogueABC_Text_9:
# 230 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I don't know how to get you up the \n"
	.string "waterfall yet, but this planet holds\l"
	.string "many surprises. That's all I have the\l"
	.string "chance to say for now. Good luck. And...\l"
	.string "Thank you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_10:
# 242 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ok. Well, that's progress!$"

voicedialogueABC_Text_11:
# 251 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wait, didn't Cap's Emergency Protocol\n"
	.string "thing supposedly send the crew home?\l"
	.string "Why would the Biologist be left behind?$"

voicedialogueABC_Text_12:
# 263 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hello, TARC? I need to talk to you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_13:
# 273 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You're back!$"

voicedialogueABC_Text_14:
# 281 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Yes. Communication takes a lot of\n"
	.string "mental focus; focus that I need to use\l"
	.string "to keep the force of the Deoxys Cell\l"
	.string "at bay on this planet.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_15:
# 292 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Huh? Are you having some kind of\n"
	.string "psychic battle with the Deoxys Cell\l"
	.string "now?!$"

voicedialogueABC_Text_16:
# 302 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Given I'm fully fused with it, it's\n"
	.string "really more of a... personal struggle?\p"
	.string "Deoxy's biological imperative is to\n"
	.string "spread, but my will can influence it as\l"
	.string "well. I'm going to give you an opening to\l"
	.string "attack it once you get to me.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_17:
# 315 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Woah there. You never mentioned that!\n"
	.string "...\p"
	.string "Wait, if I attack it... Am I attacking\n"
	.string "you? Hello?$"

voicedialogueABC_Text_18:
# 327 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Gone again.$"

voicedialogueABC_Text_19:
# 337 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<TARC. I can't hold them back anymore.\n"
	.string "The infected Pokemon are coming back.\l"
	.string "If you see them, try to walk slowly;\l"
	.string "running will alert them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_20:
# 347 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wow, really? Are you ok?$"

voicedialogueABC_Text_21:
# 354 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Am I... Ok? You're starting to sound\n"
	.string "like-\l"
	.string "...\p"
	.string "Well... It's kind of you to ask that, even\n"
	.string "though the answer is obviously no.\l"
	.string "You don't even know me.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_22:
# 366 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "We're partners now. You're the last\n"
	.string "person I might ever talk to. I'd prefer\l"
	.string "if we could be friends.$"

voicedialogueABC_Text_23:
# 375 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Good point. Hope to see you soon...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_24:
# 388 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Incredible. You're quite the scientist\n"
	.string "yourself! Terragem knows {COLOR BLUE}{SHADOW LIGHT_BLUE}Waterfall{COLOR RED}{SHADOW LIGHT_RED}; get\l"
	.string "up that waterfall and I'll guide you.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_25:
# 397 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Got it!$"
