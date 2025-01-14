DewfordDojo_MapScripts::
	.byte 0


dewfordDojoMakuhita::
# 5 "data/maps/DewfordDojo/scripts.pory"
	bufferspeciesname 0, SPECIES_MAKUHITA
# 7 "data/maps/DewfordDojo/scripts.pory"
	lock
# 8 "data/maps/DewfordDojo/scripts.pory"
	faceplayer
# 9 "data/maps/DewfordDojo/scripts.pory"
	playmoncry SPECIES_MAKUHITA, CRY_MODE_NORMAL
# 10 "data/maps/DewfordDojo/scripts.pory"
	delay 40
# 11 "data/maps/DewfordDojo/scripts.pory"
	waitmoncry
# 12 "data/maps/DewfordDojo/scripts.pory"
	release
	end


dewfordDojoMeditite::
# 17 "data/maps/DewfordDojo/scripts.pory"
	bufferspeciesname 0, SPECIES_MEDITITE
# 19 "data/maps/DewfordDojo/scripts.pory"
	lock
# 20 "data/maps/DewfordDojo/scripts.pory"
	faceplayer
# 21 "data/maps/DewfordDojo/scripts.pory"
	playmoncry SPECIES_MEDITITE, CRY_MODE_NORMAL
# 22 "data/maps/DewfordDojo/scripts.pory"
	delay 40
# 23 "data/maps/DewfordDojo/scripts.pory"
	waitmoncry
# 24 "data/maps/DewfordDojo/scripts.pory"
	release
	end


dewfordDojoBattleItemSeller::
# 29 "data/maps/DewfordDojo/scripts.pory"
	lock
# 30 "data/maps/DewfordDojo/scripts.pory"
	faceplayer
# 31 "data/maps/DewfordDojo/scripts.pory"
	msgbox dewfordDojoBattleItemSeller_Text_0
# 32 "data/maps/DewfordDojo/scripts.pory"
	pokemart powerItemsDewford
# 33 "data/maps/DewfordDojo/scripts.pory"
	msgbox dewfordDojoBattleItemSeller_Text_1
# 34 "data/maps/DewfordDojo/scripts.pory"
	release
	end


	.align 2
# 38 "data/maps/DewfordDojo/scripts.pory"
powerItemsDewford:
# 39 "data/maps/DewfordDojo/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 40 "data/maps/DewfordDojo/scripts.pory"
	.2byte ITEM_POWER_BAND
# 41 "data/maps/DewfordDojo/scripts.pory"
	.2byte ITEM_POWER_BELT
# 42 "data/maps/DewfordDojo/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 43 "data/maps/DewfordDojo/scripts.pory"
	.2byte ITEM_POWER_LENS
# 44 "data/maps/DewfordDojo/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_NONE

blackbeltDewfordDojo::
# 48 "data/maps/DewfordDojo/scripts.pory"
	lock
# 49 "data/maps/DewfordDojo/scripts.pory"
	faceplayer
# 50 "data/maps/DewfordDojo/scripts.pory"
	msgbox blackbeltDewfordDojo_Text_0
# 51 "data/maps/DewfordDojo/scripts.pory"
	release
	end


battlegirlDewfordDojo::
# 56 "data/maps/DewfordDojo/scripts.pory"
	lock
# 57 "data/maps/DewfordDojo/scripts.pory"
	faceplayer
# 58 "data/maps/DewfordDojo/scripts.pory"
	msgbox battlegirlDewfordDojo_Text_0
# 59 "data/maps/DewfordDojo/scripts.pory"
	release
	end


oceanmanDewfordDojo::
# 64 "data/maps/DewfordDojo/scripts.pory"
	lock
# 65 "data/maps/DewfordDojo/scripts.pory"
	msgbox oceanmanDewfordDojo_Text_0
# 66 "data/maps/DewfordDojo/scripts.pory"
	playmoncry SPECIES_MEDITITE, CRY_MODE_NORMAL
# 68 "data/maps/DewfordDojo/scripts.pory"
	msgbox oceanmanDewfordDojo_Text_1
# 69 "data/maps/DewfordDojo/scripts.pory"
	waitmoncry
# 70 "data/maps/DewfordDojo/scripts.pory"
	release
	end


veteranDewfordDojo::
# 75 "data/maps/DewfordDojo/scripts.pory"
	lock
# 76 "data/maps/DewfordDojo/scripts.pory"
	faceplayer
# 77 "data/maps/DewfordDojo/scripts.pory"
	msgbox veteranDewfordDojo_Text_0
# 78 "data/maps/DewfordDojo/scripts.pory"
	release
	end


dewfordDojoBattleItemSeller_Text_0:
# 31 "data/maps/DewfordDojo/scripts.pory"
	.string "Not feeling the progress? I have\n"
	.string "something that might help you if you\l"
	.string "can help me fund my training fees...$"

dewfordDojoBattleItemSeller_Text_1:
# 33 "data/maps/DewfordDojo/scripts.pory"
	.string "Come again!$"

blackbeltDewfordDojo_Text_0:
# 50 "data/maps/DewfordDojo/scripts.pory"
	.string "Makuhita and I are training in hopes of\n"
	.string "passing the gym test. Those who pass\l"
	.string "are allowed to work in Brawly's gym!$"

battlegirlDewfordDojo_Text_0:
# 58 "data/maps/DewfordDojo/scripts.pory"
	.string "The training never stops! Brawly says\n"
	.string "endurance is as important as strength,\l"
	.string "so I'm going to run until I faint!$"

oceanmanDewfordDojo_Text_0:
# 65 "data/maps/DewfordDojo/scripts.pory"
	.string "I wonder how long we would need to swim\n"
	.string "in order to reach another region...$"

oceanmanDewfordDojo_Text_1:
# 68 "data/maps/DewfordDojo/scripts.pory"
	.string "Medii...$"

veteranDewfordDojo_Text_0:
# 77 "data/maps/DewfordDojo/scripts.pory"
	.string "Our dojo is renowned for its training\n"
	.string "methods. If you are interested in\l"
	.string "strengthening yourself or your\l"
	.string "Pokémon, you have come to the right\l"
	.string "place.$"
