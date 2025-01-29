RuggedCave3_MapScripts::
	.byte 0


SneaselRuggedCave3::
# 4 "data/maps/RuggedCave3/scripts.pory"
	bufferspeciesname 0, SPECIES_SNEASEL
# 6 "data/maps/RuggedCave3/scripts.pory"
	lock
# 7 "data/maps/RuggedCave3/scripts.pory"
	faceplayer
# 8 "data/maps/RuggedCave3/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 9 "data/maps/RuggedCave3/scripts.pory"
	delay 40
# 10 "data/maps/RuggedCave3/scripts.pory"
	waitmoncry
# 11 "data/maps/RuggedCave3/scripts.pory"
	setwildbattle2 SPECIES_SNEASEL, 25, ITEM_NEVER_MELT_ICE, 2, MOVE_METAL_CLAW, MOVE_ICY_WIND, MOVE_QUICK_ATTACK, MOVE_ICICLE_CRASH, FALSE
# 12 "data/maps/RuggedCave3/scripts.pory"
	dowildbattle
# 13 "data/maps/RuggedCave3/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/RuggedCave3/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SneaselRuggedCave3_2
SneaselRuggedCave3_1:
# 17 "data/maps/RuggedCave3/scripts.pory"
	removeobject 1
# 18 "data/maps/RuggedCave3/scripts.pory"
	release
	end

SneaselRuggedCave3_2:
# 15 "data/maps/RuggedCave3/scripts.pory"
	setflag FLAG_RUGGED_CAVE3_SNEASEL
	goto SneaselRuggedCave3_1

