
DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_DEWFORD_TRADE_COMPLETED, DewfordTown_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_WOOPER
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox DewfordTown_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, DewfordTown_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, DewfordTown_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox DewfordTown_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
	setflag FLAG_DEWFORD_TRADE_COMPLETED
	release
	end

DewfordTown_House1_EventScript_DeclineTrade::
	msgbox DewfordTown_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox DewfordTown_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_EventScript_TradeCompleted::
	msgbox DewfordTown_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_Text_IllTradeIfYouWant:
    .string "Hey! Are you from the mainland? Would\n"
	.string "you please trade with me? I wanna play\l"
	.string "with {STR_VAR_1}. I can give you my {STR_VAR_2}\l"
	.string "for it. She's not like a regular {STR_VAR_2}!$"

DewfordTown_House1_Text_PleaseBeGoodToMyPokemon:
	.string "Hehe.\n"
	.string "Please take good care of her.$"

DewfordTown_House1_Text_DoesntLookLikeMonToMe:
	.string "Huh? That doesn't look anything like\n"
	.string "a {STR_VAR_1} to me.$"

DewfordTown_House1_Text_YouDontWantToThatsOkay:
	.string "Oh, if you don't want to, that's okay.\n"
	.string "I was really hoping though…$"

DewfordTown_House1_Text_AnyPokemonCanBeCute:
	.string "Thank you!\n"
	.string "I'll take good care of {STR_VAR_1}.$"

DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "POKéMON and the family.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string "I left the major port of SLATEPORT\n"
	.string "CITY when I married my husband here.\p"
	.string "Life goes by slowly on this little\n"
	.string "island. But being surrounded by the\l"
	.string "beautiful sea--that's happiness, too.$"

DewfordTown_House1_Text_Zigzagoon:
	.string "ZIGZAGOON: Guguuh!$"

DewfordTown_House1_unused::
	msgbox DewfordTown_House1_unused_Text_0
	return


DewfordTown_House1_unused_Text_0:
	.string "unused, just compile this code pls$"
