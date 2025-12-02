# 1 "data/maps/Testing_Zone_01/scripts.pory"

# 2 "data/maps/Testing_Zone_01/scripts.pory"
Testing_Zone_01_MapScripts::
# 3 "data/maps/Testing_Zone_01/scripts.pory"
	.byte 0

Testing_Zone_01_EventScript_GiveCelebi::
# 7 "data/maps/Testing_Zone_01/scripts.pory"
	lockall
# 8 "data/maps/Testing_Zone_01/scripts.pory"
	givemon SPECIES_CELEBI, 30, ITEM_MASTER_BALL
# 9 "data/maps/Testing_Zone_01/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 10 "data/maps/Testing_Zone_01/scripts.pory"
	msgbox Testing_Zone_01_EventScript_GiveCelebi_Text_0
# 11 "data/maps/Testing_Zone_01/scripts.pory"
	removeobject 13
# 12 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 13 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 15 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_BADGE01_GET
# 16 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_BADGE02_GET
# 17 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_BADGE03_GET
# 18 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_BADGE04_GET
# 19 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_BADGE05_GET
# 20 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_BADGE06_GET
# 21 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_BADGE07_GET
# 22 "data/maps/Testing_Zone_01/scripts.pory"
	setflag FLAG_BADGE08_GET
# 23 "data/maps/Testing_Zone_01/scripts.pory"
	waitmessage
# 24 "data/maps/Testing_Zone_01/scripts.pory"
	releaseall
	end


Testing_Zone_01_EventScript_GiveCelebi_Text_0:
# 10 "data/maps/Testing_Zone_01/scripts.pory"
	.string "Bag 'em up!$"
