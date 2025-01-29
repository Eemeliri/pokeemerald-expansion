SlateportMarket_Underwater_MapScripts::
# 2 "data/maps/SlateportMarket_Underwater/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportMarket_Underwater_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SlateportMarket_Underwater_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SlateportMarket_Underwater/scripts.pory"
	goto_if_set FLAG_DAILY_FOSSIL, SlateportMarket_Underwater_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SlateportMarket_Underwater_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SlateportMarket_Underwater/scripts.pory"
	goto hideFossil
	return


hideFossil::
# 11 "data/maps/SlateportMarket_Underwater/scripts.pory"
	removeobject 1
# 12 "data/maps/SlateportMarket_Underwater/scripts.pory"
	removeobject 2
	return


lootFossilLeft::
# 15 "data/maps/SlateportMarket_Underwater/scripts.pory"
	lockall
# 16 "data/maps/SlateportMarket_Underwater/scripts.pory"
	random 7
# 17 "data/maps/SlateportMarket_Underwater/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 0, lootFossilLeft_3
# 20 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 1, lootFossilLeft_4
# 22 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 2, lootFossilLeft_5
# 24 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 3, lootFossilLeft_6
# 26 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 4, lootFossilLeft_7
# 28 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 5, lootFossilLeft_8
# 30 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 6, lootFossilLeft_9
lootFossilLeft_1:
# 33 "data/maps/SlateportMarket_Underwater/scripts.pory"
	setflag FLAG_DAILY_FOSSIL
# 34 "data/maps/SlateportMarket_Underwater/scripts.pory"
	removeobject 1
# 35 "data/maps/SlateportMarket_Underwater/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq lootFossilLeft_11
lootFossilLeft_10:
# 40 "data/maps/SlateportMarket_Underwater/scripts.pory"
	releaseall
	end

lootFossilLeft_3:
# 19 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_JAW_FOSSIL
	goto lootFossilLeft_1

lootFossilLeft_4:
# 21 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
	goto lootFossilLeft_1

lootFossilLeft_5:
# 23 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_DOME_FOSSIL
	goto lootFossilLeft_1

lootFossilLeft_6:
# 25 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
	goto lootFossilLeft_1

lootFossilLeft_7:
# 27 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_SAIL_FOSSIL
	goto lootFossilLeft_1

lootFossilLeft_8:
# 29 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_SKULL_FOSSIL
	goto lootFossilLeft_1

lootFossilLeft_9:
# 31 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_PLUME_FOSSIL
	goto lootFossilLeft_1

lootFossilLeft_11:
# 36 "data/maps/SlateportMarket_Underwater/scripts.pory"
	msgbox lootFossilLeft_Text_0
# 37 "data/maps/SlateportMarket_Underwater/scripts.pory"
	waitmessage
# 38 "data/maps/SlateportMarket_Underwater/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto lootFossilLeft_10


lootFossilRight::
# 45 "data/maps/SlateportMarket_Underwater/scripts.pory"
	lockall
# 46 "data/maps/SlateportMarket_Underwater/scripts.pory"
	random 7
# 47 "data/maps/SlateportMarket_Underwater/scripts.pory"
	switch VAR_RESULT
# 48 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 0, lootFossilRight_3
# 50 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 1, lootFossilRight_4
# 52 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 2, lootFossilRight_5
# 54 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 3, lootFossilRight_6
# 56 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 4, lootFossilRight_7
# 58 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 5, lootFossilRight_8
# 60 "data/maps/SlateportMarket_Underwater/scripts.pory"
	case 6, lootFossilRight_9
lootFossilRight_1:
# 64 "data/maps/SlateportMarket_Underwater/scripts.pory"
	removeobject 2
# 65 "data/maps/SlateportMarket_Underwater/scripts.pory"
	setflag FLAG_DAILY_FOSSIL
# 66 "data/maps/SlateportMarket_Underwater/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq lootFossilRight_11
lootFossilRight_10:
# 71 "data/maps/SlateportMarket_Underwater/scripts.pory"
	releaseall
	end

lootFossilRight_3:
# 49 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_ARMOR_FOSSIL
	goto lootFossilRight_1

lootFossilRight_4:
# 51 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_COVER_FOSSIL
	goto lootFossilRight_1

lootFossilRight_5:
# 53 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_HELIX_FOSSIL
	goto lootFossilRight_1

lootFossilRight_6:
# 55 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_JAW_FOSSIL
	goto lootFossilRight_1

lootFossilRight_7:
# 57 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
	goto lootFossilRight_1

lootFossilRight_8:
# 59 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_DOME_FOSSIL
	goto lootFossilRight_1

lootFossilRight_9:
# 61 "data/maps/SlateportMarket_Underwater/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
	goto lootFossilRight_1

lootFossilRight_11:
# 67 "data/maps/SlateportMarket_Underwater/scripts.pory"
	msgbox lootFossilLeft_Text_0
# 68 "data/maps/SlateportMarket_Underwater/scripts.pory"
	waitmessage
# 69 "data/maps/SlateportMarket_Underwater/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto lootFossilRight_10


lootFossilLeft_Text_0:
# 36 "data/maps/SlateportMarket_Underwater/scripts.pory"
	.string "The seafloor sand seems to shift\n"
	.string "rapidly, perhaps another day there will\l"
	.string "be more fossils to collect?$"
