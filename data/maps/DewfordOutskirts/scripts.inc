DewfordOutskirts_MapScripts::
	.byte 0


fisherman_dewfordoutskkirts::
# 4 "data/maps/DewfordOutskirts/scripts.pory"
	msgbox fisherman_dewfordoutskkirts_Text_0, MSGBOX_NPC
	end


girl_dewfordoutskirts::
# 9 "data/maps/DewfordOutskirts/scripts.pory"
	msgbox girl_dewfordoutskirts_Text_0, MSGBOX_NPC
	end


skorupi_static::
# 14 "data/maps/DewfordOutskirts/scripts.pory"
	lock
# 15 "data/maps/DewfordOutskirts/scripts.pory"
	faceplayer
# 16 "data/maps/DewfordOutskirts/scripts.pory"
	playmoncry SPECIES_SKORUPI, CRY_MODE_ENCOUNTER
# 17 "data/maps/DewfordOutskirts/scripts.pory"
	delay 40
# 18 "data/maps/DewfordOutskirts/scripts.pory"
	waitmoncry
# 19 "data/maps/DewfordOutskirts/scripts.pory"
	setwildbattle2 SPECIES_SKORUPI, 12, ITEM_POISON_BARB, 2, MOVE_BITE, MOVE_FELL_STINGER, MOVE_POISON_FANG, MOVE_SKITTER_SMACK, FALSE
# 20 "data/maps/DewfordOutskirts/scripts.pory"
	dowildbattle
# 21 "data/maps/DewfordOutskirts/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 22 "data/maps/DewfordOutskirts/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq skorupi_static_2
skorupi_static_1:
# 25 "data/maps/DewfordOutskirts/scripts.pory"
	removeobject 5
# 26 "data/maps/DewfordOutskirts/scripts.pory"
	release
	end

skorupi_static_2:
# 23 "data/maps/DewfordOutskirts/scripts.pory"
	setflag FLAG_DEWFORD_OUTSKIRTS_SKORUPI
	goto skorupi_static_1


pokemaniac_dewfordoutskirts::
# 32 "data/maps/DewfordOutskirts/scripts.pory"
	msgbox pokemaniac_dewfordoutskirts_Text_0, MSGBOX_NPC
	end


ruin_maniac_dewfordoutskirts::
# 37 "data/maps/DewfordOutskirts/scripts.pory"
	trainerbattle_single TRAINER_DEWFORD_OUTSKIRTS_RM, ruin_maniac_dewfordoutskirts_Text_0, ruin_maniac_dewfordoutskirts_Text_1
# 38 "data/maps/DewfordOutskirts/scripts.pory"
	msgbox ruin_maniac_dewfordoutskirts_Text_2, MSGBOX_AUTOCLOSE
	end


aroma_lady_dewfordoutskirts::
# 43 "data/maps/DewfordOutskirts/scripts.pory"
	trainerbattle_single TRAINER_DEWFORD_OUTSKIRTS_AL, aroma_lady_dewfordoutskirts_Text_0, aroma_lady_dewfordoutskirts_Text_1
# 44 "data/maps/DewfordOutskirts/scripts.pory"
	msgbox aroma_lady_dewfordoutskirts_Text_2, MSGBOX_AUTOCLOSE
	end


fisherman_dewfordoutskkirts_Text_0:
# 4 "data/maps/DewfordOutskirts/scripts.pory"
	.string "A quiet spot away from the windy sea is\n"
	.string "quite nice, don't you think?$"

girl_dewfordoutskirts_Text_0:
# 9 "data/maps/DewfordOutskirts/scripts.pory"
	.string "I think I see a cave entrance on the\n"
	.string "island over there, shame I don't have a\l"
	.string "way to scale the wall.$"

pokemaniac_dewfordoutskirts_Text_0:
# 32 "data/maps/DewfordOutskirts/scripts.pory"
	.string "A rare bug Pokémon was sighted on this\n"
	.string "route and I will be the first to find it.$"

ruin_maniac_dewfordoutskirts_Text_0:
# 37 "data/maps/DewfordOutskirts/scripts.pory"
	.string "The thrill of exploration, can you feel\n"
	.string "it?$"

ruin_maniac_dewfordoutskirts_Text_1:
# 37 "data/maps/DewfordOutskirts/scripts.pory"
	.string "The thrill of defeat!$"

ruin_maniac_dewfordoutskirts_Text_2:
# 38 "data/maps/DewfordOutskirts/scripts.pory"
	.string "This island houses a secret, I can\n"
	.string "sense it!$"

aroma_lady_dewfordoutskirts_Text_0:
# 43 "data/maps/DewfordOutskirts/scripts.pory"
	.string "The smell of the sea is so refreshing, I\n"
	.string "could stay here all day!$"

aroma_lady_dewfordoutskirts_Text_1:
# 43 "data/maps/DewfordOutskirts/scripts.pory"
	.string "Swept away like a sea breeze!$"

aroma_lady_dewfordoutskirts_Text_2:
# 44 "data/maps/DewfordOutskirts/scripts.pory"
	.string "Rare berries tend to grow around here,\n"
	.string "you should gather some and plant more.$"
