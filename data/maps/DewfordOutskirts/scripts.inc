DewfordOutskirts_MapScripts::
	.byte 0


fisherman_dewfordoutskkirts::
	msgbox fisherman_dewfordoutskkirts_Text_0, MSGBOX_NPC
	end


girl_dewfordoutskirts::
	msgbox girl_dewfordoutskirts_Text_0, MSGBOX_NPC
	end


skorupi_static::
	lock
	faceplayer
	playmoncry SPECIES_SKORUPI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle2 SPECIES_SKORUPI, 12, ITEM_POISON_BARB, 2, MOVE_BITE, MOVE_FELL_STINGER, MOVE_POISON_FANG, MOVE_SKITTER_SMACK, FALSE
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq skorupi_static_2
skorupi_static_1:
	removeobject 5
	release
	end

skorupi_static_2:
	setflag FLAG_DEWFORD_OUTSKIRTS_SKORUPI
	goto skorupi_static_1


pokemaniac_dewfordoutskirts::
	msgbox pokemaniac_dewfordoutskirts_Text_0, MSGBOX_NPC
	end


ruin_maniac_dewfordoutskirts::
	trainerbattle_single TRAINER_DEWFORD_OUTSKIRTS_RM, ruin_maniac_dewfordoutskirts_Text_0, ruin_maniac_dewfordoutskirts_Text_1
	msgbox ruin_maniac_dewfordoutskirts_Text_2, MSGBOX_AUTOCLOSE
	end


aroma_lady_dewfordoutskirts::
	trainerbattle_single TRAINER_DEWFORD_OUTSKIRTS_AL, aroma_lady_dewfordoutskirts_Text_0, aroma_lady_dewfordoutskirts_Text_1
	msgbox aroma_lady_dewfordoutskirts_Text_2, MSGBOX_AUTOCLOSE
	end


fisherman_dewfordoutskkirts_Text_0:
	.string "A quiet spot away from the windy sea is\n"
	.string "quite nice, don't you think?$"

girl_dewfordoutskirts_Text_0:
	.string "I think I see a cave entrance on the\n"
	.string "island over there, shame I don't have a\l"
	.string "way to scale the wall.$"

pokemaniac_dewfordoutskirts_Text_0:
	.string "A rare bug Pokémon was sighted on this\n"
	.string "route and I will be the first to find it.$"

ruin_maniac_dewfordoutskirts_Text_0:
	.string "The thrill of exploration, can you feel\n"
	.string "it?$"

ruin_maniac_dewfordoutskirts_Text_1:
	.string "The thrill of defeat!$"

ruin_maniac_dewfordoutskirts_Text_2:
	.string "This island houses a secret, I can\n"
	.string "sense it!$"

aroma_lady_dewfordoutskirts_Text_0:
	.string "The smell of the sea is so refreshing, I\n"
	.string "could stay here all day!$"

aroma_lady_dewfordoutskirts_Text_1:
	.string "Swept away like a sea breeze!$"

aroma_lady_dewfordoutskirts_Text_2:
	.string "Rare berries tend to grow around here,\n"
	.string "you should gather some and plant more.$"
