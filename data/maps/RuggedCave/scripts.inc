RuggedCave_MapScripts::
	.byte 0


phanpyRuggedCave::
# 4 "data/maps/RuggedCave/scripts.pory"
	bufferspeciesname 0, SPECIES_PHANPY
	return


zubatRuggedCave::
# 8 "data/maps/RuggedCave/scripts.pory"
	bufferspeciesname 0, SPECIES_ZUBAT
	return


RuggedCaveHiker::
# 12 "data/maps/RuggedCave/scripts.pory"
	lock
# 13 "data/maps/RuggedCave/scripts.pory"
	faceplayer
# 14 "data/maps/RuggedCave/scripts.pory"
	msgbox RuggedCaveHiker_Text_0
# 15 "data/maps/RuggedCave/scripts.pory"
	release
	end


nemZubat::
# 20 "data/maps/RuggedCave/scripts.pory"
	lock
# 21 "data/maps/RuggedCave/scripts.pory"
	setwildbattle SPECIES_ZUBAT, 15
# 22 "data/maps/RuggedCave/scripts.pory"
	dowildbattle
# 23 "data/maps/RuggedCave/scripts.pory"
	setvar VAR_TEMP_2, 1
# 24 "data/maps/RuggedCave/scripts.pory"
	release
	end


RuggedCaveHiker_Text_0:
# 14 "data/maps/RuggedCave/scripts.pory"
	.string "I heard there was a colder area with\n"
	.string "rare Pokémon further into this cave,\l"
	.string "but I don't have Rock Smash to\l"
	.string "continue...$"
