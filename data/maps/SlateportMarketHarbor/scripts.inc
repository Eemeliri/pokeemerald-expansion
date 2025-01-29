SlateportMarketHarbor_MapScripts::
	.byte 0


harborTourist::
# 6 "data/maps/SlateportMarketHarbor/scripts.pory"
	lock
# 7 "data/maps/SlateportMarketHarbor/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportMarketHarbor/scripts.pory"
	msgbox harborTourist_Text_0
# 9 "data/maps/SlateportMarketHarbor/scripts.pory"
	msgbox harborTourist_Text_1
# 10 "data/maps/SlateportMarketHarbor/scripts.pory"
	waitmessage
# 11 "data/maps/SlateportMarketHarbor/scripts.pory"
	release
	end


harborForeman::
# 16 "data/maps/SlateportMarketHarbor/scripts.pory"
	lock
# 17 "data/maps/SlateportMarketHarbor/scripts.pory"
	faceplayer
# 18 "data/maps/SlateportMarketHarbor/scripts.pory"
	msgbox harborForeman_Text_0
# 19 "data/maps/SlateportMarketHarbor/scripts.pory"
	msgbox harborForeman_Text_1
# 20 "data/maps/SlateportMarketHarbor/scripts.pory"
	waitmessage
# 21 "data/maps/SlateportMarketHarbor/scripts.pory"
	release
	end


harborResearcher::
# 26 "data/maps/SlateportMarketHarbor/scripts.pory"
	lock
# 27 "data/maps/SlateportMarketHarbor/scripts.pory"
	faceplayer
# 28 "data/maps/SlateportMarketHarbor/scripts.pory"
	msgbox harborResearcher_Text_0
# 29 "data/maps/SlateportMarketHarbor/scripts.pory"
	waitmessage
# 30 "data/maps/SlateportMarketHarbor/scripts.pory"
	release
	end


harborFerryman::
# 35 "data/maps/SlateportMarketHarbor/scripts.pory"
	lock
# 36 "data/maps/SlateportMarketHarbor/scripts.pory"
	faceplayer
# 37 "data/maps/SlateportMarketHarbor/scripts.pory"
	msgbox harborFerryman_Text_0
# 38 "data/maps/SlateportMarketHarbor/scripts.pory"
	waitmessage
# 41 "data/maps/SlateportMarketHarbor/scripts.pory"
	release
	end


harborTourist_Text_0:
# 8 "data/maps/SlateportMarketHarbor/scripts.pory"
	.string "I'm currently visiting Hoenn with my\n"
	.string "girlfriend. We've lived in Johto for our\l"
	.string "whole lives, but decided recently to\l"
	.string "start travelling the world.$"

harborTourist_Text_1:
# 9 "data/maps/SlateportMarketHarbor/scripts.pory"
	.string "Have you visited any other regions?$"

harborForeman_Text_0:
# 18 "data/maps/SlateportMarketHarbor/scripts.pory"
	.string "The ship experienced some technical\n"
	.string "difficulties during the last trip to\l"
	.string "Hoenn from Johto.$"

harborForeman_Text_1:
# 19 "data/maps/SlateportMarketHarbor/scripts.pory"
	.string "We're making sure that everything is\n"
	.string "functional for the return trip.$"

harborResearcher_Text_0:
# 28 "data/maps/SlateportMarketHarbor/scripts.pory"
	.string "I'm working on my thesis about Orange\n"
	.string "Archipelago and its native Pokémon\l"
	.string "species for Celadon university. Did you\l"
	.string "know there exists an island where all\l"
	.string "local species have turned pink?$"

harborFerryman_Text_0:
# 37 "data/maps/SlateportMarketHarbor/scripts.pory"
	.string "Hello! We're currently conducting\n"
	.string "maintenance work for the ship. Come\l"
	.string "back a bit later!$"
