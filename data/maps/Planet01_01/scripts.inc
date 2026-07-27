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
	setvar VAR_AIR_TIMER_STEPS, 150
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
	giveitem ITEM_STARDUST, 1
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
	setvar VAR_AIR_TIMER_STEPS, 150
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
	fadeScreen FADE_FROM_BLACK
# 89 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 90 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 95 "data/maps/Planet01_01/scripts.pory"
	lockall
# 96 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 150
# 97 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 98 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 99 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 101 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 102 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 103 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 104 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 105 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 106 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 111 "data/maps/Planet01_01/scripts.pory"
	lock
# 112 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 120 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 125 "data/maps/Planet01_01/scripts.pory"
	lock
# 126 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 130 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 135 "data/maps/Planet01_01/scripts.pory"
	lock
# 136 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 141 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 146 "data/maps/Planet01_01/scripts.pory"
	lock
# 147 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 151 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 156 "data/maps/Planet01_01/scripts.pory"
	lock
# 157 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 161 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 166 "data/maps/Planet01_01/scripts.pory"
	lock
# 167 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 168 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 169 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 170 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 171 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 172 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 173 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 174 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 175 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 176 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 181 "data/maps/Planet01_01/scripts.pory"
	lock
# 182 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 183 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 184 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 186 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 187 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_02, 0, 21, 23
# 188 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 189 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_JirachiAppears::
# 194 "data/maps/Planet01_01/scripts.pory"
	lock
# 195 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 196 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 197 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 200 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 201 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 202 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 203 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 204 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_FirstJirachiEncounter1
# 205 "data/maps/Planet01_01/scripts.pory"
	waitse
# 206 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 207 "data/maps/Planet01_01/scripts.pory"
	delay 40
# 208 "data/maps/Planet01_01/scripts.pory"
	waitmoncry
# 209 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 210 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 211 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 212 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 213 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 214 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 215 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 216 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 217 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 218 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_FirstJirachiEncounter2
# 219 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 220 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 221 "data/maps/Planet01_01/scripts.pory"
	removeobject 14
# 222 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 223 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 224 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 227 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 228 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 229 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 230 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 231 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 232 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 236 "data/maps/Planet01_01/scripts.pory"
Movement_FirstJirachiEncounter1:
# 237 "data/maps/Planet01_01/scripts.pory"
	face_down
# 238 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 239 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 240 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 241 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 242 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 243 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 244 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 245 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 246 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 247 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 248 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 249 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 250 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 251 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 252 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 253 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 254 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 255 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 256 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 257 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 258 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 261 "data/maps/Planet01_01/scripts.pory"
Movement_FirstJirachiEncounter2:
# 262 "data/maps/Planet01_01/scripts.pory"
	face_up
# 263 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 264 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 265 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 266 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 267 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

# 215 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 215 "data/maps/Planet01_01/scripts.pory"
	face_up
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
# 89 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 112 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition XXX. \p"
	.string "Our team has placed notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a base here for research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 126 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. We can capture the O2 they\l"
	.string "generate and use it to refill the oxygen\l"
	.string "in our life support systems. How lucky!$"

Planet01_01_HintText03_Text_0:
# 136 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 147 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 157 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: There are a lot of\n"
	.string "members of the Clefairy family around\l"
	.string "these rocks. They must prefer to live\l"
	.string "in the mountains.$"

Planet01_01_Carbink_Text_0:
# 169 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 174 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 184 "data/maps/Planet01_01/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's using Teleport-$"

Planet01_01_JirachiAppears_Text_0:
# 197 "data/maps/Planet01_01/scripts.pory"
	.string "So this is an alien planet, eh?\l"
	.string "Well, it better watch out. I don't get\n"
	.string "suprised easily.$"

Planet01_01_JirachiAppears_Text_1:
# 211 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_JirachiAppears_Text_2:
# 224 "data/maps/Planet01_01/scripts.pory"
	.string "...Was that a Jirachi?!\n"
	.string "That's good luck- I mean, I think it's\l"
	.string "good luck! Probably.$"
