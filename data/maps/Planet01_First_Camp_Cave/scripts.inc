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


Planet01_First_Camp_Cave_HintText01::
# 64 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 65 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_0
# 74 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 75 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	closemessage
# 76 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	delay 60
# 78 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_CONFUSED
# 79 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 80 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox Planet01_First_Camp_Cave_HintText01_Text_1
# 82 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 83 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 84 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 86 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq Planet01_First_Camp_Cave_HintText01_2
Planet01_First_Camp_Cave_HintText01_1:
# 91 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end

Planet01_First_Camp_Cave_HintText01_2:
# 87 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	call voicedialogueABC
# 88 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Planet01_First_Camp_Cave_HintText01_1


groundjournal_1::
# 96 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	lock
# 98 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 99 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 100 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox groundjournal_1_Text_0
# 101 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 102 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 104 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox groundjournal_1_Text_1
# 113 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
	end


voicedialogueABC::
# 118 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 1
	goto_if_eq voicedialogueABC_1
# 163 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 2
	goto_if_eq voicedialogueABC_2
# 261 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 4
	goto_if_eq voicedialogueABC_3
# 298 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	compare VAR_DAILY_SLOTS, 5
	goto_if_eq voicedialogueABC_4
	return

voicedialogueABC_1:
# 119 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 120 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 121 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_0
# 123 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 124 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 125 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 127 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 128 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 129 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_1
# 131 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 132 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 133 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 135 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 136 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 137 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_2
# 147 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 148 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 149 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 151 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 152 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 153 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_3
# 159 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 160 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 161 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_2:
# 164 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 165 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 166 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_4
# 167 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 168 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 169 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 171 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 172 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 173 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_5
# 175 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 176 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 177 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 179 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 180 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 181 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_6
# 188 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 189 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 190 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 192 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 193 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 194 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_7
# 196 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 197 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 199 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 200 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 201 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_8
# 203 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 204 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 205 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 207 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 208 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 209 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_9
# 210 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 211 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 213 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 214 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 215 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_10
# 221 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 222 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 223 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 225 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 226 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 227 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_11
# 228 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 229 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 231 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 232 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 233 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_12
# 234 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 235 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 236 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 238 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 239 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 240 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_13
# 241 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 242 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 244 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 245 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 246 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_14
# 250 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 251 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 252 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 254 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 255 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 256 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_15
# 257 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 258 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 259 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
	return

voicedialogueABC_3:
# 262 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 263 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 264 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_16
# 270 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 271 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 272 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 274 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 275 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 276 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_17
# 277 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 278 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 280 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 281 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 282 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_18
# 285 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 286 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 287 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 289 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_OK
# 290 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 291 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_19
# 293 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 294 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	addvar VAR_DAILY_SLOTS, 1
# 295 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 296 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_DAILY_SLOTS, 6
	return

voicedialogueABC_4:
# 300 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_UNKNOWN
# 301 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 302 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_20
# 305 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 306 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative ClearMugshot
# 307 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	release
# 309 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 310 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	callnative DrawMugshot
# 311 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	msgbox voicedialogueABC_Text_21
# 312 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	waitmessage
# 313 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
# 65 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
# 80 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "I was hoping to find these guys\n"
	.string "by now...$"

groundjournal_1_Text_0:
# 100 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Oh wow, a journal!$"

groundjournal_1_Text_1:
# 104 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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
# 121 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<A fly, caught in a web. I'm surprised\n"
	.string "you're still whole, to be honest.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_1:
# 129 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You again! Enough with the games! Just tell\n"
	.string "me who you are!$"

voicedialogueABC_Text_2:
# 137 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
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

voicedialogueABC_Text_3:
# 153 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Look, you're clearly going through a\n"
	.string "time, but I don't want to be here. Just\l"
	.string "tell me what I need to do to get my ship\l"
	.string "off the ground.\p"
	.string "Hello? Hello?!?!\p"
	.string "...Gone again? Damn.$"

voicedialogueABC_Text_4:
# 166 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I see you're persevering.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_5:
# 173 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "You again? Got anything meaningful to\n"
	.string "say?$"

voicedialogueABC_Text_6:
# 181 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<...>\n"
	.string "<I decided. You need to come to the \l"
	.string "primary facility. I don't know how to \l"
	.string "get you up the waterfall, but when you\l"
	.string "get up it, I can help you from there. I \l"
	.string "regret being a coward about this. \l"
	.string "Please don't give up.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_7:
# 194 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wow, that's a change in tune. Are you\n ready then to tell me who you are?$"

voicedialogueABC_Text_8:
# 201 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<...I would be, the one you've read\n"
	.string "about, the Biologist...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_9:
# 209 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ok. Interesting. Got a name?$"

voicedialogueABC_Text_10:
# 215 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<...>\p"
	.string "<We-, I-, ...a miscalculation was made.\n"
	.string "If it wasn't obvious, the space virus is\l"
	.string "some form of Deoxys. Its' psychic power\l"
	.string "is holding down your ship. Defeat Deoxys,\l"
	.string "and you might be able to escape.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_11:
# 227 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Yeah? And what are you up to then?$"

voicedialogueABC_Text_12:
# 233 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<You'll see. Just know, I am helping.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_13:
# 240 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "...How, exactly?$"

voicedialogueABC_Text_14:
# 246 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<I'll explain later... my only advice...\n"
	.string "The north and south of this planet, we\l"
	.string "never fully explored. Look there.\l"
	.string "Good luck.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_15:
# 256 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Ok. Well, I guess this is progress.$"

voicedialogueABC_Text_16:
# 264 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Hey... Those infected monsters are\n"
	.string "coming back. You can't understand now,\l"
	.string "but I've been trying to hold them back.\l"
	.string "Sorry I'm not stronger. I recommend\l"
	.string "you walk slowly, running with likely\l"
	.string "alert them.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_17:
# 276 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Wow, really? Are you, like ok?$"

voicedialogueABC_Text_18:
# 282 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Am I... Ok?\n"
	.string "Haven't heard anybody say that in\l"
	.string "quite a while...>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_19:
# 291 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "Hello?\p"
	.string "...Yeah, they are not ok.$"

voicedialogueABC_Text_20:
# 302 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}<Well, then. You're quite the scientist\n"
	.string "yourself. I'll be waiting at the top.\l"
	.string "I recommend you prepare your team.>{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

voicedialogueABC_Text_21:
# 311 "data/maps/Planet01_First_Camp_Cave/scripts.pory"
	.string "...Yeah. Got it.$"
