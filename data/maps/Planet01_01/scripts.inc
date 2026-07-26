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
	releaseall
	end


Planet01_01_EventScript_Item01::
# 44 "data/maps/Planet01_01/scripts.pory"
	lock
# 45 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 46 "data/maps/Planet01_01/scripts.pory"
	removeobject 12
# 47 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 48 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_EventScript_Item02::
# 53 "data/maps/Planet01_01/scripts.pory"
	lock
# 54 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 55 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 56 "data/maps/Planet01_01/scripts.pory"
	removeobject 11
# 57 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_AirWarning::
# 62 "data/maps/Planet01_01/scripts.pory"
	lockall
# 63 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirWarning_Text_0
# 64 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AirExpired::
# 69 "data/maps/Planet01_01/scripts.pory"
	lockall
# 70 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AirExpired_Text_0
# 71 "data/maps/Planet01_01/scripts.pory"
	warp MAP_SPACESHIP_DEV, 0, 12, 7
# 72 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 73 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior01::
# 78 "data/maps/Planet01_01/scripts.pory"
	lockall
# 79 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 150
# 80 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 81 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 82 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 84 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_TEMP_1
# 85 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 86 "data/maps/Planet01_01/scripts.pory"
	removeobject 9
# 87 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 88 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 89 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_AddAir_Minior02::
# 94 "data/maps/Planet01_01/scripts.pory"
	lockall
# 95 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_AIR_TIMER_STEPS, 150
# 96 "data/maps/Planet01_01/scripts.pory"
	special AddAirTimerMap
# 97 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_ENCOUNTER
# 98 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_0
# 100 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x02B
# 101 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 102 "data/maps/Planet01_01/scripts.pory"
	removeobject 2
# 103 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 104 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_AddAir_Minior01_Text_1
# 105 "data/maps/Planet01_01/scripts.pory"
	releaseall
	end


Planet01_01_HintText01::
# 110 "data/maps/Planet01_01/scripts.pory"
	lock
# 111 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText01_Text_0
# 119 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText02::
# 124 "data/maps/Planet01_01/scripts.pory"
	lock
# 125 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText02_Text_0
# 129 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText03::
# 134 "data/maps/Planet01_01/scripts.pory"
	lock
# 135 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText03_Text_0
# 140 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText04::
# 145 "data/maps/Planet01_01/scripts.pory"
	lock
# 146 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText04_Text_0
# 150 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_HintText05::
# 155 "data/maps/Planet01_01/scripts.pory"
	lock
# 156 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_HintText05_Text_0
# 160 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Carbink::
# 165 "data/maps/Planet01_01/scripts.pory"
	lock
# 166 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 167 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 168 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_0
# 169 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_UNUSED_0x04B
# 170 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 171 "data/maps/Planet01_01/scripts.pory"
	removeobject 1
# 172 "data/maps/Planet01_01/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 173 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Carbink_Text_1
# 174 "data/maps/Planet01_01/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 175 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_Elgyem::
# 180 "data/maps/Planet01_01/scripts.pory"
	lock
# 181 "data/maps/Planet01_01/scripts.pory"
	faceplayer
# 182 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 183 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_Elgyem_Text_0
# 185 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 186 "data/maps/Planet01_01/scripts.pory"
	warp MAP_PLANET01_02, 0, 21, 23
# 187 "data/maps/Planet01_01/scripts.pory"
	waitstate
# 188 "data/maps/Planet01_01/scripts.pory"
	release
	end


Planet01_01_JirachiAppears::
# 193 "data/maps/Planet01_01/scripts.pory"
	lock
# 194 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_DETERMINED
# 195 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 196 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_0
# 199 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 200 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 201 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 202 "data/maps/Planet01_01/scripts.pory"
	special Script_FadeOutMapMusic
# 203 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_FirstJirachiEncounter1
# 204 "data/maps/Planet01_01/scripts.pory"
	waitse
# 205 "data/maps/Planet01_01/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 206 "data/maps/Planet01_01/scripts.pory"
	delay 40
# 207 "data/maps/Planet01_01/scripts.pory"
	waitmoncry
# 208 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_JIRACHI_WORRIED
# 209 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 210 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_1
# 211 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 212 "data/maps/Planet01_01/scripts.pory"
	closemessage
# 213 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 214 "data/maps/Planet01_01/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Planet01_01_JirachiAppears_Movement_0
# 215 "data/maps/Planet01_01/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 216 "data/maps/Planet01_01/scripts.pory"
	delay 60
# 217 "data/maps/Planet01_01/scripts.pory"
	applymovement 14, Movement_FirstJirachiEncounter2
# 218 "data/maps/Planet01_01/scripts.pory"
	waitmovement 0
# 219 "data/maps/Planet01_01/scripts.pory"
	delay 30
# 220 "data/maps/Planet01_01/scripts.pory"
	removeobject 14
# 221 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_0x8000, MUGSHOT_PLAYER_SHOCK
# 222 "data/maps/Planet01_01/scripts.pory"
	callnative DrawMugshot
# 223 "data/maps/Planet01_01/scripts.pory"
	msgbox Planet01_01_JirachiAppears_Text_2
# 226 "data/maps/Planet01_01/scripts.pory"
	waitmessage
# 227 "data/maps/Planet01_01/scripts.pory"
	callnative ClearMugshot
# 228 "data/maps/Planet01_01/scripts.pory"
	special Overworld_PlaySpecialMapMusic
# 229 "data/maps/Planet01_01/scripts.pory"
	setvar VAR_TEMP_0, 1
# 230 "data/maps/Planet01_01/scripts.pory"
	setflag FLAG_REGISTERED_ROSE
# 231 "data/maps/Planet01_01/scripts.pory"
	release
	end


# 235 "data/maps/Planet01_01/scripts.pory"
Movement_FirstJirachiEncounter1:
# 236 "data/maps/Planet01_01/scripts.pory"
	face_down
# 237 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 238 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 239 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 240 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 241 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 242 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 243 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 244 "data/maps/Planet01_01/scripts.pory"
	delay_4
# 245 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 246 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 247 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 248 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 249 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 250 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 251 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 252 "data/maps/Planet01_01/scripts.pory"
	delay_8
# 253 "data/maps/Planet01_01/scripts.pory"
	set_visible
# 254 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 255 "data/maps/Planet01_01/scripts.pory"
	set_invisible
# 256 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 257 "data/maps/Planet01_01/scripts.pory"
	set_visible
	step_end

# 260 "data/maps/Planet01_01/scripts.pory"
Movement_FirstJirachiEncounter2:
# 261 "data/maps/Planet01_01/scripts.pory"
	face_up
# 262 "data/maps/Planet01_01/scripts.pory"
	delay_16
# 263 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 264 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 265 "data/maps/Planet01_01/scripts.pory"
	walk_up
# 266 "data/maps/Planet01_01/scripts.pory"
	walk_up
	step_end

# 214 "data/maps/Planet01_01/scripts.pory"
Planet01_01_JirachiAppears_Movement_0:
# 214 "data/maps/Planet01_01/scripts.pory"
	face_up
	step_end

Planet01_01_StartAirTimer_Text_0:
# 38 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Low Oxygen detected. Supplying air.$"

Planet01_01_AirWarning_Text_0:
# 63 "data/maps/Planet01_01/scripts.pory"
	.string "Warning: Oxygen low.$"

Planet01_01_AirExpired_Text_0:
# 70 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Oxygen depleted. Teleporting back...$"

Planet01_01_AddAir_Minior01_Text_0:
# 82 "data/maps/Planet01_01/scripts.pory"
	.string "Minior is floating in a pocket of air!\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Oxygen captured!$"

Planet01_01_AddAir_Minior01_Text_1:
# 88 "data/maps/Planet01_01/scripts.pory"
	.string "Minior flew away...$"

Planet01_01_HintText01_Text_0:
# 111 "data/maps/Planet01_01/scripts.pory"
	.string "Captain: This is the captain of\n"
	.string "expedition XXX. \p"
	.string "Our team has placed notes for future \n"
	.string "explorers in hopefully convenient \l"
	.string "places. Our objective is to create\l"
	.string "a base here for research.\p"
	.string "Note: The gravity is low here. Tall \n"
	.string "ledges can be scaled easily!$"

Planet01_01_HintText02_Text_0:
# 125 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: The plants emit oxygen when\n"
	.string "stepped on. We can capture the O2 they\l"
	.string "generate and use it to refill the oxygen\l"
	.string "in our life support systems. How lucky!$"

Planet01_01_HintText03_Text_0:
# 135 "data/maps/Planet01_01/scripts.pory"
	.string "Engineer: The Steelix here have been\n"
	.string "digging deep into the planet's core;\l"
	.string "this blue liquid they've been exposed\l"
	.string "to has changed their type and color...\p"
	.string "I'll collect some samples...$"

Planet01_01_HintText04_Text_0:
# 146 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: Miniors are flying types,\n"
	.string "the air they generate can be captured\l"
	.string "and used to refill the oxygen in our \l"
	.string "life support systems. Handy!$"

Planet01_01_HintText05_Text_0:
# 156 "data/maps/Planet01_01/scripts.pory"
	.string "Biologist: There are a lot of\n"
	.string "members of the Clefairy family around\l"
	.string "these rocks. They must prefer to live\l"
	.string "in the mountains.$"

Planet01_01_Carbink_Text_0:
# 168 "data/maps/Planet01_01/scripts.pory"
	.string "The Carbink seems to want to play!$"

Planet01_01_Carbink_Text_1:
# 173 "data/maps/Planet01_01/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_01_Elgyem_Text_0:
# 183 "data/maps/Planet01_01/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's using Teleport-$"

Planet01_01_JirachiAppears_Text_0:
# 196 "data/maps/Planet01_01/scripts.pory"
	.string "So this is an alien planet, eh?\l"
	.string "Well, it better watch out. I don't get\n"
	.string "suprised easily.$"

Planet01_01_JirachiAppears_Text_1:
# 210 "data/maps/Planet01_01/scripts.pory"
	.string "...$"

Planet01_01_JirachiAppears_Text_2:
# 223 "data/maps/Planet01_01/scripts.pory"
	.string "...Was that a Jirachi?!\n"
	.string "That's good luck- I mean, I think it's\l"
	.string "good luck! Probably.$"
