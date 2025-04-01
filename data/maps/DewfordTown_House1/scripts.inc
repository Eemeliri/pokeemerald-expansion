# 1 "data/maps/DewfordTown_House1/scripts.pory"

# 2 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_MapScripts::
# 3 "data/maps/DewfordTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House1/scripts.pory"

# 5 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Man::
# 6 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
# 7 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 8 "data/maps/DewfordTown_House1/scripts.pory"

# 9 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Woman::
# 10 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
# 11 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 12 "data/maps/DewfordTown_House1/scripts.pory"

# 13 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Zigzagoon::
# 14 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 15 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 16 "data/maps/DewfordTown_House1/scripts.pory"
	waitse
# 17 "data/maps/DewfordTown_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 18 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 19 "data/maps/DewfordTown_House1/scripts.pory"
	waitmoncry
# 20 "data/maps/DewfordTown_House1/scripts.pory"
	release
# 21 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 22 "data/maps/DewfordTown_House1/scripts.pory"

# 23 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Trader::
# 24 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 25 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 26 "data/maps/DewfordTown_House1/scripts.pory"
	goto_if_set FLAG_DEWFORD_TRADE_COMPLETED, DewfordTown_House1_EventScript_TradeCompleted
# 27 "data/maps/DewfordTown_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_WOOPER
# 28 "data/maps/DewfordTown_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 29 "data/maps/DewfordTown_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 30 "data/maps/DewfordTown_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 31 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 32 "data/maps/DewfordTown_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_House1_EventScript_DeclineTrade
# 33 "data/maps/DewfordTown_House1/scripts.pory"
	special ChoosePartyMon
# 34 "data/maps/DewfordTown_House1/scripts.pory"
	waitstate
# 35 "data/maps/DewfordTown_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 36 "data/maps/DewfordTown_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_House1_EventScript_DeclineTrade
# 37 "data/maps/DewfordTown_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 38 "data/maps/DewfordTown_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 39 "data/maps/DewfordTown_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 40 "data/maps/DewfordTown_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, DewfordTown_House1_EventScript_NotRequestedMon
# 41 "data/maps/DewfordTown_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 42 "data/maps/DewfordTown_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 43 "data/maps/DewfordTown_House1/scripts.pory"
	special CreateInGameTradePokemon
# 44 "data/maps/DewfordTown_House1/scripts.pory"
	special DoInGameTradeScene
# 45 "data/maps/DewfordTown_House1/scripts.pory"
	waitstate
# 46 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 47 "data/maps/DewfordTown_House1/scripts.pory"
	setflag FLAG_DEWFORD_TRADE_COMPLETED
# 48 "data/maps/DewfordTown_House1/scripts.pory"
	release
# 49 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 50 "data/maps/DewfordTown_House1/scripts.pory"

# 51 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_DeclineTrade::
# 52 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 53 "data/maps/DewfordTown_House1/scripts.pory"
	release
# 54 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 55 "data/maps/DewfordTown_House1/scripts.pory"

# 56 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_NotRequestedMon::
# 57 "data/maps/DewfordTown_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 58 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 59 "data/maps/DewfordTown_House1/scripts.pory"
	release
# 60 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 61 "data/maps/DewfordTown_House1/scripts.pory"

# 62 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_TradeCompleted::
# 63 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 64 "data/maps/DewfordTown_House1/scripts.pory"
	release
# 65 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 66 "data/maps/DewfordTown_House1/scripts.pory"

# 67 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_IllTradeIfYouWant:
# 68 "data/maps/DewfordTown_House1/scripts.pory"
    .string "Hey! Are you from the mainland? Would\n"
# 69 "data/maps/DewfordTown_House1/scripts.pory"
	.string "you please trade with me? I wanna play\l"
# 70 "data/maps/DewfordTown_House1/scripts.pory"
	.string "with {STR_VAR_1}. I can give you my {STR_VAR_2}\l"
# 71 "data/maps/DewfordTown_House1/scripts.pory"
	.string "for it. She's not like a regular {STR_VAR_2}!$"
# 72 "data/maps/DewfordTown_House1/scripts.pory"

# 73 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_PleaseBeGoodToMyPokemon:
# 74 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Hehe.\n"
# 75 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Please take good care of her.$"
# 76 "data/maps/DewfordTown_House1/scripts.pory"

# 77 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_DoesntLookLikeMonToMe:
# 78 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 79 "data/maps/DewfordTown_House1/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 80 "data/maps/DewfordTown_House1/scripts.pory"

# 81 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_YouDontWantToThatsOkay:
# 82 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
# 83 "data/maps/DewfordTown_House1/scripts.pory"
	.string "I was really hoping though…$"
# 84 "data/maps/DewfordTown_House1/scripts.pory"

# 85 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_AnyPokemonCanBeCute:
# 86 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Thank you!\n"
# 87 "data/maps/DewfordTown_House1/scripts.pory"
	.string "I'll take good care of {STR_VAR_1}.$"
# 88 "data/maps/DewfordTown_House1/scripts.pory"

# 89 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
# 90 "data/maps/DewfordTown_House1/scripts.pory"
	.string "There's a lot to be said for living on\n"
# 91 "data/maps/DewfordTown_House1/scripts.pory"
	.string "a small island like this in harmony with\l"
# 92 "data/maps/DewfordTown_House1/scripts.pory"
	.string "POKéMON and the family.$"
# 93 "data/maps/DewfordTown_House1/scripts.pory"

# 94 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
# 95 "data/maps/DewfordTown_House1/scripts.pory"
	.string "I left the major port of SLATEPORT\n"
# 96 "data/maps/DewfordTown_House1/scripts.pory"
	.string "CITY when I married my husband here.\p"
# 97 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Life goes by slowly on this little\n"
# 98 "data/maps/DewfordTown_House1/scripts.pory"
	.string "island. But being surrounded by the\l"
# 99 "data/maps/DewfordTown_House1/scripts.pory"
	.string "beautiful sea--that's happiness, too.$"
# 100 "data/maps/DewfordTown_House1/scripts.pory"

# 101 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_Zigzagoon:
# 102 "data/maps/DewfordTown_House1/scripts.pory"
	.string "ZIGZAGOON: Guguuh!$"

DewfordTown_House1_unused::
# 107 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_unused_Text_0
	return


DewfordTown_House1_unused_Text_0:
# 107 "data/maps/DewfordTown_House1/scripts.pory"
	.string "unused, just compile this code pls$"
