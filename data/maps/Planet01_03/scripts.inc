Planet01_03_MapScripts::
# 2 "data/maps/Planet01_03/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Planet01_03_Enter
	.byte 0


Planet01_03_Enter::
# 6 "data/maps/Planet01_03/scripts.pory"
	special SetRandomFlags
# 7 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_10
# 8 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_11
# 9 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_12
# 10 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_13
# 11 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_14
# 12 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_15
# 13 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_16
# 14 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_17
# 15 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_18
# 16 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_19
# 17 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1A
# 18 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1B
# 19 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1C
# 20 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1D
# 21 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1E
# 22 "data/maps/Planet01_03/scripts.pory"
	clearflag FLAG_TEMP_1F
	end


Planet01_03_EventScript_Item01::
# 27 "data/maps/Planet01_03/scripts.pory"
	lock
# 28 "data/maps/Planet01_03/scripts.pory"
	giveitem ITEM_STAR_PIECE, 1
# 29 "data/maps/Planet01_03/scripts.pory"
	removeobject 32
# 30 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 31 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_Item02::
# 36 "data/maps/Planet01_03/scripts.pory"
	lock
# 37 "data/maps/Planet01_03/scripts.pory"
	giveitem ITEM_STARDUST, 1
# 38 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_UNUSED_0x498
# 39 "data/maps/Planet01_03/scripts.pory"
	removeobject 33
# 40 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash01::
# 45 "data/maps/Planet01_03/scripts.pory"
	lock
# 46 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 47 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 48 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_10
# 49 "data/maps/Planet01_03/scripts.pory"
	removeobject 29
# 50 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash02::
# 55 "data/maps/Planet01_03/scripts.pory"
	lock
# 56 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 57 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 58 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_11
# 59 "data/maps/Planet01_03/scripts.pory"
	removeobject 22
# 60 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash03::
# 65 "data/maps/Planet01_03/scripts.pory"
	lock
# 66 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 67 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 68 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_12
# 69 "data/maps/Planet01_03/scripts.pory"
	removeobject 23
# 70 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash04::
# 75 "data/maps/Planet01_03/scripts.pory"
	lock
# 76 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 77 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 78 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_13
# 79 "data/maps/Planet01_03/scripts.pory"
	removeobject 24
# 80 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash05::
# 85 "data/maps/Planet01_03/scripts.pory"
	lock
# 86 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 87 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 88 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_14
# 89 "data/maps/Planet01_03/scripts.pory"
	removeobject 28
# 90 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash06::
# 95 "data/maps/Planet01_03/scripts.pory"
	lock
# 96 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 97 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 98 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_15
# 99 "data/maps/Planet01_03/scripts.pory"
	removeobject 27
# 100 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash07::
# 105 "data/maps/Planet01_03/scripts.pory"
	lock
# 106 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 107 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 108 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_16
# 109 "data/maps/Planet01_03/scripts.pory"
	removeobject 26
# 110 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash08::
# 115 "data/maps/Planet01_03/scripts.pory"
	lock
# 116 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 117 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 118 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_17
# 119 "data/maps/Planet01_03/scripts.pory"
	removeobject 25
# 120 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash09::
# 125 "data/maps/Planet01_03/scripts.pory"
	lock
# 126 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 127 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 128 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_18
# 129 "data/maps/Planet01_03/scripts.pory"
	removeobject 17
# 130 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash10::
# 135 "data/maps/Planet01_03/scripts.pory"
	lock
# 136 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 137 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 138 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_19
# 139 "data/maps/Planet01_03/scripts.pory"
	removeobject 14
# 140 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash11::
# 145 "data/maps/Planet01_03/scripts.pory"
	lock
# 146 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 147 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 148 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1A
# 149 "data/maps/Planet01_03/scripts.pory"
	removeobject 16
# 150 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash12::
# 155 "data/maps/Planet01_03/scripts.pory"
	lock
# 156 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 157 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 158 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1B
# 159 "data/maps/Planet01_03/scripts.pory"
	removeobject 15
# 160 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash13::
# 165 "data/maps/Planet01_03/scripts.pory"
	lock
# 166 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 167 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 168 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1C
# 169 "data/maps/Planet01_03/scripts.pory"
	removeobject 19
# 170 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash14::
# 175 "data/maps/Planet01_03/scripts.pory"
	lock
# 176 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 177 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 178 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1D
# 179 "data/maps/Planet01_03/scripts.pory"
	removeobject 18
# 180 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash15::
# 185 "data/maps/Planet01_03/scripts.pory"
	lock
# 186 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 187 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 188 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1E
# 189 "data/maps/Planet01_03/scripts.pory"
	removeobject 20
# 190 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_EventScript_RockSmash16::
# 195 "data/maps/Planet01_03/scripts.pory"
	lock
# 196 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 197 "data/maps/Planet01_03/scripts.pory"
	call EventScript_RockSmash
# 198 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_TEMP_1F
# 199 "data/maps/Planet01_03/scripts.pory"
	removeobject 21
# 200 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_Carbink::
# 205 "data/maps/Planet01_03/scripts.pory"
	lock
# 206 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 207 "data/maps/Planet01_03/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_ENCOUNTER
# 208 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_0x8000, SPECIES_CARBINK
# 209 "data/maps/Planet01_03/scripts.pory"
	callnative RegisterSpeciesInDex
# 210 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_Carbink_Text_0
# 211 "data/maps/Planet01_03/scripts.pory"
	setflag FLAG_UNUSED_0x04A
# 212 "data/maps/Planet01_03/scripts.pory"
	fadeScreen FADE_TO_BLACK
# 213 "data/maps/Planet01_03/scripts.pory"
	removeobject 34
# 214 "data/maps/Planet01_03/scripts.pory"
	fadeScreen FADE_FROM_BLACK
# 215 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_Carbink_Text_1
# 216 "data/maps/Planet01_03/scripts.pory"
	giveitem ITEM_CHIPPED_POT, 1
# 217 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_Elgyem::
# 222 "data/maps/Planet01_03/scripts.pory"
	lock
# 223 "data/maps/Planet01_03/scripts.pory"
	faceplayer
# 224 "data/maps/Planet01_03/scripts.pory"
	playmoncry SPECIES_ELGYEM, CRY_MODE_ENCOUNTER
# 225 "data/maps/Planet01_03/scripts.pory"
	setvar VAR_0x8000, SPECIES_ELGYEM
# 226 "data/maps/Planet01_03/scripts.pory"
	callnative RegisterSpeciesInDex
# 227 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_Elgyem_Text_0
# 229 "data/maps/Planet01_03/scripts.pory"
	waitmessage
# 230 "data/maps/Planet01_03/scripts.pory"
	warp MAP_PLANET01_05, 1, 32, 1
# 231 "data/maps/Planet01_03/scripts.pory"
	waitstate
# 232 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText01::
# 237 "data/maps/Planet01_03/scripts.pory"
	lock
# 238 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText01_Text_0
# 244 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText02::
# 249 "data/maps/Planet01_03/scripts.pory"
	lock
# 250 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText02_Text_0
# 254 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText03::
# 259 "data/maps/Planet01_03/scripts.pory"
	lock
# 260 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText03_Text_0
# 268 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText04::
# 273 "data/maps/Planet01_03/scripts.pory"
	lock
# 274 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText04_Text_0
# 280 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText05::
# 285 "data/maps/Planet01_03/scripts.pory"
	lock
# 286 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText05_Text_0
# 292 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText06::
# 297 "data/maps/Planet01_03/scripts.pory"
	lock
# 298 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText06_Text_0
# 304 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_HintText07::
# 309 "data/maps/Planet01_03/scripts.pory"
	lock
# 310 "data/maps/Planet01_03/scripts.pory"
	msgbox Planet01_03_HintText07_Text_0
# 314 "data/maps/Planet01_03/scripts.pory"
	release
	end


Planet01_03_Carbink_Text_0:
# 210 "data/maps/Planet01_03/scripts.pory"
	.string "The Carbink really seems to like you!$"

Planet01_03_Carbink_Text_1:
# 215 "data/maps/Planet01_03/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Carbink climbed into your bag!$"

Planet01_03_Elgyem_Text_0:
# 227 "data/maps/Planet01_03/scripts.pory"
	.string "Elgyem seems taken off-guard!\n"
	.string "My bad- Huh?! It's flashing yellow-$"

Planet01_03_HintText01_Text_0:
# 238 "data/maps/Planet01_03/scripts.pory"
	.string "Biologist: There's a small, dark rock-like\n"
	.string "Pokémon lurking around this canyon; one\l"
	.string "that I've never seen before.\p"
	.string "I don't think it exists back home. Surely\n"
	.string "it'd be well-worth studying; perhaps it\l"
	.string "can even evolve.$"

Planet01_03_HintText02_Text_0:
# 250 "data/maps/Planet01_03/scripts.pory"
	.string "Captain: Beyond here lies our tragic\n"
	.string "first attempt at establishing a base.\p"
	.string "Apparently it was already somebody\n"
	.string "else's home.$"

Planet01_03_HintText03_Text_0:
# 260 "data/maps/Planet01_03/scripts.pory"
	.string "Captain: We wanted this second cave to\n"
	.string "be our base, but the artificial wall\l"
	.string "our Engineer contructed couldn't\l"
	.string "shield us from the unbearable cold.\p"
	.string "The Engineer already discovered a cave\n"
	.string "up on top of the waterfall to the North\l"
	.string "that looks promising. Let's hope it can\l"
	.string "be a more permanent home.$"

Planet01_03_HintText04_Text_0:
# 274 "data/maps/Planet01_03/scripts.pory"
	.string "Engineer: Was it a coincidence that the\n"
	.string "white trees corresponded to the path\l"
	.string "through the misty cave?\p"
	.string "Or could it be that something was trying\n"
	.string "to communicate with us? You can never\l"
	.string "tell with ghost-type Pokémon...$"

Planet01_03_HintText05_Text_0:
# 286 "data/maps/Planet01_03/scripts.pory"
	.string "Biologist: The Pokémon on this planet\n"
	.string "have achieved perfect mutualism, and\l"
	.string "thus have no need to level up.\p"
	.string "But I can't help but wonder whether it's\n"
	.string "still possible whether the Staryu can\l"
	.string "still evolve using water stones.$"

Planet01_03_HintText06_Text_0:
# 298 "data/maps/Planet01_03/scripts.pory"
	.string "Biologist: The Staryu love to skip across\n"
	.string "the water; though, they aren't large\l"
	.string "enough for us to {COLOR BLUE}{SHADOW LIGHT_BLUE}Surf{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} on them.\p"
	.string "Fortunately, we brought our own\n"
	.string "Surfing Pokémon, so we were able to\l"
	.string "setup camps across the water.$"

Planet01_03_HintText07_Text_0:
# 310 "data/maps/Planet01_03/scripts.pory"
	.string "Biologist: We saw a lot of smashed rocks\n"
	.string "around the mountain covered in blue\l"
	.string "plants; I would bet that a Pokémon with\l"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Rock Smash{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is likely up there, hiding.$"
