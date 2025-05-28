SlateportMarket_MapScripts::
	.byte 0


HyperTrainer_Lady::
	lockall
	faceplayer
	compare VAR_TEMP_2, 0
	goto_if_eq HyperTrainer_Lady_2
HyperTrainer_Lady_1:
	checkitem ITEM_BOTTLE_CAP
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_5
	msgbox HyperTrainer_Lady_Text_2
	dynmultichoice 0, 0, FALSE, 7, 0, DYN_MULTICHOICE_CB_NONE, HyperTrainer_Lady_Text_3, HyperTrainer_Lady_Text_4, HyperTrainer_Lady_Text_5, HyperTrainer_Lady_Text_6, HyperTrainer_Lady_Text_7, HyperTrainer_Lady_Text_8, HyperTrainer_Lady_Text_9
	switch VAR_RESULT
	case 0, HyperTrainer_Lady_8
	case 1, HyperTrainer_Lady_9
	case 2, HyperTrainer_Lady_10
	case 3, HyperTrainer_Lady_11
	case 4, HyperTrainer_Lady_12
	case 5, HyperTrainer_Lady_13
	msgbox HyperTrainer_Lady_Text_19
	waitmessage
	releaseall
	end

HyperTrainer_Lady_2:
	msgbox HyperTrainer_Lady_Text_0
	setvar VAR_TEMP_2, 1
	goto HyperTrainer_Lady_1

HyperTrainer_Lady_5:
	msgbox HyperTrainer_Lady_Text_1
	releaseall
	end

HyperTrainer_Lady_8:
	msgbox HyperTrainer_Lady_Text_10
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_16
	copyvar VAR_RESULT, VAR_0x8004
	canhypertrain STAT_HP, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_34
	hypertrain STAT_HP, VAR_0x8004
	playfanfare MUS_LEVEL_UP
	waitfanfare
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox HyperTrainer_Lady_Text_13
	waitmessage
	releaseall
	end

HyperTrainer_Lady_9:
	msgbox HyperTrainer_Lady_Text_10
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_19
	canhypertrain STAT_ATK, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_37
	hypertrain STAT_ATK, VAR_0x8004
	playfanfare MUS_LEVEL_UP
	waitfanfare
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox HyperTrainer_Lady_Text_13
	waitmessage
	releaseall
	end

HyperTrainer_Lady_10:
	msgbox HyperTrainer_Lady_Text_10
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_22
	canhypertrain STAT_DEF, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_40
	hypertrain STAT_DEF, VAR_0x8004
	playfanfare MUS_LEVEL_UP
	waitfanfare
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox HyperTrainer_Lady_Text_13
	waitmessage
	releaseall
	end

HyperTrainer_Lady_11:
	msgbox HyperTrainer_Lady_Text_10
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_25
	canhypertrain STAT_SPATK, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_43
	hypertrain STAT_SPATK, VAR_0x8004
	playfanfare MUS_LEVEL_UP
	waitfanfare
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox HyperTrainer_Lady_Text_13
	waitmessage
	releaseall
	end

HyperTrainer_Lady_12:
	msgbox HyperTrainer_Lady_Text_10
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_28
	canhypertrain STAT_SPDEF, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_46
	hypertrain STAT_SPDEF, VAR_0x8004
	playfanfare MUS_LEVEL_UP
	waitfanfare
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox HyperTrainer_Lady_Text_13
	waitmessage
	releaseall
	end

HyperTrainer_Lady_13:
	msgbox HyperTrainer_Lady_Text_10
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_31
	canhypertrain STAT_SPEED, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_49
	hypertrain STAT_SPEED, VAR_0x8004
	playfanfare MUS_LEVEL_UP
	waitfanfare
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox HyperTrainer_Lady_Text_13
	waitmessage
	releaseall
	end

HyperTrainer_Lady_16:
	msgbox HyperTrainer_Lady_Text_11
	waitmessage
	releaseall
	end

HyperTrainer_Lady_19:
	msgbox HyperTrainer_Lady_Text_11
	waitmessage
	releaseall
	end

HyperTrainer_Lady_22:
	msgbox HyperTrainer_Lady_Text_11
	waitmessage
	releaseall
	end

HyperTrainer_Lady_25:
	msgbox HyperTrainer_Lady_Text_11
	waitmessage
	releaseall
	end

HyperTrainer_Lady_28:
	msgbox HyperTrainer_Lady_Text_11
	waitmessage
	releaseall
	end

HyperTrainer_Lady_31:
	msgbox HyperTrainer_Lady_Text_11
	waitmessage
	releaseall
	end

HyperTrainer_Lady_34:
	msgbox HyperTrainer_Lady_Text_12
	waitmessage
	releaseall
	end

HyperTrainer_Lady_37:
	msgbox HyperTrainer_Lady_Text_14
	waitmessage
	releaseall
	end

HyperTrainer_Lady_40:
	msgbox HyperTrainer_Lady_Text_15
	waitmessage
	releaseall
	end

HyperTrainer_Lady_43:
	msgbox HyperTrainer_Lady_Text_16
	waitmessage
	releaseall
	end

HyperTrainer_Lady_46:
	msgbox HyperTrainer_Lady_Text_17
	waitmessage
	releaseall
	end

HyperTrainer_Lady_49:
	msgbox HyperTrainer_Lady_Text_18
	waitmessage
	releaseall
	end


Oldman_Mint_Mart::
	lock
	faceplayer
	msgbox Oldman_Mint_Mart_Text_0
	pokemart MintShopSunday
	msgbox Oldman_Mint_Mart_Text_1
	waitmessage
	release
	end


miscItemMartNPC::
	lock
	faceplayer
	msgbox miscItemMartNPC_Text_0
	pokemart miscItemMart
	msgbox miscItemMartNPC_Text_1
	waitmessage
	release
	end


berryMartNPC::
	lock
	faceplayer
	msgbox berryMartNPC_Text_0
	pokemart miscBerryMart
	msgbox berryMartNPC_Text_1
	waitmessage
	release
	end


stressedConsumerNPC::
	lock
	faceplayer
	msgbox stressedConsumerNPC_Text_0
	waitmessage
	release
	end


sailorShopperNPC::
	lock
	faceplayer
	msgbox sailorShopperNPC_Text_0
	waitmessage
	release
	end


sailorWatcherNPC::
	lock
	faceplayer
	msgbox sailorWatcherNPC_Text_0
	waitmessage
	release
	end


watcherOldMan::
	lock
	msgbox watcherOldMan_Text_0
	waitmessage
	release
	end


azumarillPartner::
	lock
	faceplayer
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	waitmoncry
	release
	end


hyperTrainingSign::
	msgbox hyperTrainingSign_Text_0, MSGBOX_SIGN
	end


miscItemMartSign::
	msgbox miscItemMartSign_Text_0, MSGBOX_SIGN
	end


miscBerryMartSign::
	msgbox miscBerryMartSign_Text_0, MSGBOX_SIGN
	end


mysticTrader::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_STARTER_GACHA, mysticTrader_2
	msgbox mysticTrader_Text_1
	checkmoney 5000
	compare VAR_RESULT, FALSE
	goto_if_eq mysticTrader_6
	msgbox mysticTrader_Text_3
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, mysticTrader_Text_4, mysticTrader_Text_5, mysticTrader_Text_6, mysticTrader_Text_7
	switch VAR_RESULT
	case 0, mysticTrader_10
	case 1, mysticTrader_11
	case 2, mysticTrader_12
	case 3, mysticTrader_13
mysticTrader_8:
	playbgm MUS_HG_RECEIVE_POKEMON, FALSE
	msgbox mysticTrader_Text_12
	delay 100
	removemoney 5000
	msgbox mysticTrader_Text_13
	setflag FLAG_DAILY_STARTER_GACHA
mysticTrader_1:
	releaseall
	end

mysticTrader_2:
	msgbox mysticTrader_Text_0
	goto mysticTrader_1

mysticTrader_6:
	msgbox mysticTrader_Text_2
	releaseall
	end

mysticTrader_10:
	random 9
	msgbox mysticTrader_Text_8
	playse SE_CONTEST_PLACE
	waitmessage
	delay 60
	switch VAR_RESULT
	case 0, mysticTrader_15
	case 1, mysticTrader_16
	case 2, mysticTrader_17
	case 3, mysticTrader_18
	case 4, mysticTrader_19
	case 5, mysticTrader_20
	case 6, mysticTrader_21
	case 7, mysticTrader_22
	case 8, mysticTrader_23
	goto mysticTrader_8

mysticTrader_11:
	random 9
	msgbox mysticTrader_Text_9
	playse SE_CONTEST_PLACE
	waitmessage
	delay 60
	switch VAR_RESULT
	case 0, mysticTrader_25
	case 1, mysticTrader_26
	case 2, mysticTrader_27
	case 3, mysticTrader_28
	case 4, mysticTrader_29
	case 5, mysticTrader_30
	case 6, mysticTrader_31
	case 7, mysticTrader_32
	case 8, mysticTrader_33
	goto mysticTrader_8

mysticTrader_12:
	random 9
	msgbox mysticTrader_Text_10
	playse SE_CONTEST_PLACE
	waitmessage
	delay 60
	switch VAR_RESULT
	case 0, mysticTrader_35
	case 1, mysticTrader_36
	case 2, mysticTrader_37
	case 3, mysticTrader_38
	case 4, mysticTrader_39
	case 5, mysticTrader_40
	case 6, mysticTrader_41
	case 7, mysticTrader_42
	case 8, mysticTrader_43
	goto mysticTrader_8

mysticTrader_13:
	msgbox mysticTrader_Text_11
	releaseall
	end

mysticTrader_15:
	givemon SPECIES_CHARMANDER, 5
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	goto mysticTrader_8

mysticTrader_16:
	givemon SPECIES_CYNDAQUIL, 5
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	goto mysticTrader_8

mysticTrader_17:
	givemon SPECIES_TORCHIC, 5
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
	goto mysticTrader_8

mysticTrader_18:
	givemon SPECIES_CHIMCHAR, 5
	bufferspeciesname STR_VAR_1, SPECIES_CHIMCHAR
	goto mysticTrader_8

mysticTrader_19:
	givemon SPECIES_TEPIG, 5
	bufferspeciesname STR_VAR_1, SPECIES_TEPIG
	goto mysticTrader_8

mysticTrader_20:
	givemon SPECIES_FENNEKIN, 5
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
	goto mysticTrader_8

mysticTrader_21:
	givemon SPECIES_LITTEN, 5
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
	goto mysticTrader_8

mysticTrader_22:
	givemon SPECIES_SCORBUNNY, 5
	bufferspeciesname STR_VAR_1, SPECIES_SCORBUNNY
	goto mysticTrader_8

mysticTrader_23:
	givemon SPECIES_FUECOCO, 5
	bufferspeciesname STR_VAR_1, SPECIES_FUECOCO
	goto mysticTrader_8

mysticTrader_25:
	givemon SPECIES_SQUIRTLE, 5
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	goto mysticTrader_8

mysticTrader_26:
	givemon SPECIES_TOTODILE, 5
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	goto mysticTrader_8

mysticTrader_27:
	givemon SPECIES_MUDKIP, 5
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
	goto mysticTrader_8

mysticTrader_28:
	givemon SPECIES_PIPLUP, 5
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
	goto mysticTrader_8

mysticTrader_29:
	givemon SPECIES_OSHAWOTT, 5
	bufferspeciesname STR_VAR_1, SPECIES_OSHAWOTT
	goto mysticTrader_8

mysticTrader_30:
	givemon SPECIES_FROAKIE, 5
	bufferspeciesname STR_VAR_1, SPECIES_FROAKIE
	goto mysticTrader_8

mysticTrader_31:
	givemon SPECIES_POPPLIO, 5
	bufferspeciesname STR_VAR_1, SPECIES_POPPLIO
	goto mysticTrader_8

mysticTrader_32:
	givemon SPECIES_SOBBLE, 5
	bufferspeciesname STR_VAR_1, SPECIES_SOBBLE
	goto mysticTrader_8

mysticTrader_33:
	givemon SPECIES_QUAXLY, 5
	bufferspeciesname STR_VAR_1, SPECIES_QUAXLY
	goto mysticTrader_8

mysticTrader_35:
	givemon SPECIES_BULBASAUR, 5
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	goto mysticTrader_8

mysticTrader_36:
	givemon SPECIES_CHIKORITA, 5
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	goto mysticTrader_8

mysticTrader_37:
	givemon SPECIES_TREECKO, 5
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
	goto mysticTrader_8

mysticTrader_38:
	givemon SPECIES_TURTWIG, 5
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
	goto mysticTrader_8

mysticTrader_39:
	givemon SPECIES_SNIVY, 5
	bufferspeciesname STR_VAR_1, SPECIES_SNIVY
	goto mysticTrader_8

mysticTrader_40:
	givemon SPECIES_CHESPIN, 5
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
	goto mysticTrader_8

mysticTrader_41:
	givemon SPECIES_ROWLET, 5
	bufferspeciesname STR_VAR_1, SPECIES_ROWLET
	goto mysticTrader_8

mysticTrader_42:
	givemon SPECIES_GROOKEY, 5
	bufferspeciesname STR_VAR_1, SPECIES_GROOKEY
	goto mysticTrader_8

mysticTrader_43:
	givemon SPECIES_SPRIGATITO, 5
	bufferspeciesname STR_VAR_1, SPECIES_SPRIGATITO
	goto mysticTrader_8


mysticSign::
	lock
	msgbox mysticSign_Text_0
	waitmessage
	release
	end


	.align 2
miscBerryMart:
	.2byte ITEM_LIECHI_BERRY
	.2byte ITEM_GANLON_BERRY
	.2byte ITEM_SALAC_BERRY
	.2byte ITEM_PETAYA_BERRY
	.2byte ITEM_APICOT_BERRY
	.2byte ITEM_LANSAT_BERRY
	.2byte ITEM_STARF_BERRY
	.2byte ITEM_JABOCA_BERRY
	.2byte ITEM_ROWAP_BERRY
	.2byte ITEM_NONE

	.align 2
miscItemMart:
	.2byte ITEM_ABSORB_BULB
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_COVERT_CLOAK
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_RING_TARGET
	.2byte ITEM_NONE

	.align 2
MintShopSunday:
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE

HyperTrainer_Lady_Text_0:
	.string "Hello there young one. Are you\n"
	.string "interested in strenghtening your\l"
	.string "Pokemon? I may not look like it, but I\l"
	.string "was quite a drill sergeant in my youth!\l"
	.string "If you find me some silvery bottle caps,\l"
	.string "I can unlock your Pokemon's true\l"
	.string "potential.$"

HyperTrainer_Lady_Text_1:
	.string "Come back when you have found some\n"
	.string "bottle caps.$"

HyperTrainer_Lady_Text_2:
	.string "Which stat would you like to train?$"

HyperTrainer_Lady_Text_3:
	.string "HP$"

HyperTrainer_Lady_Text_4:
	.string "Attack$"

HyperTrainer_Lady_Text_5:
	.string "Defense$"

HyperTrainer_Lady_Text_6:
	.string "Sp. Atk$"

HyperTrainer_Lady_Text_7:
	.string "Sp. Def$"

HyperTrainer_Lady_Text_8:
	.string "Speed$"

HyperTrainer_Lady_Text_9:
	.string "Cancel$"

HyperTrainer_Lady_Text_10:
	.string "Alright, Please choose a Pokemon to\n"
	.string "train.$"

HyperTrainer_Lady_Text_11:
	.string "Having trouble deciding? Take your\n"
	.string "time.$"

HyperTrainer_Lady_Text_12:
	.string "That Pokémon's HP is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_13:
	.string "It's done. Your Pokémon looks much\n"
	.string "stronger now.$"

HyperTrainer_Lady_Text_14:
	.string "That Pokémon's Attack is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_15:
	.string "That Pokémon's Defense is already at\n"
	.string "its peak!$"

HyperTrainer_Lady_Text_16:
	.string "That Pokémon's Sp. Atk is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_17:
	.string "That Pokémon's Sp. Def is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_18:
	.string "That Pokémon's Speed is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_19:
	.string "Changed your mind? Fine then.$"

Oldman_Mint_Mart_Text_0:
	.string "Hello! Are you interested in fresh mints\n"
	.string "I've harvested today?$"

Oldman_Mint_Mart_Text_1:
	.string "Come again soon.$"

miscItemMartNPC_Text_0:
	.string "Hey you! Take a loot at my wares!$"

miscItemMartNPC_Text_1:
	.string "Come back to buy more soon!$"

berryMartNPC_Text_0:
	.string "Greetings. May I interest you with\n"
	.string "these rare berries?$"

berryMartNPC_Text_1:
	.string "I hope to see you again!$"

stressedConsumerNPC_Text_0:
	.string "Ever since this harbor market was built,\n"
	.string "many strong trainers have started\l"
	.string "visiting the city.$"

sailorShopperNPC_Text_0:
	.string "Stocking up supplies for long trips is a\n"
	.string "must for a sailor. Good thing Slateport\l"
	.string "offers it all!$"

sailorWatcherNPC_Text_0:
	.string "Ever seen a Gyarados leap over the bow\n"
	.string "at sunrise? There's no sight more\l"
	.string "majestic... or terrifying, if you're not\l"
	.string "prepared!$"

watcherOldMan_Text_0:
	.string "This place used to be nothing more than\n"
	.string "a few houses in my youth. Time truly\l"
	.string "travels fast when you're with Pokémon.\l"
	.string "I only wish I had explored the world\l"
	.string "more.$"

hyperTrainingSign_Text_0:
	.string "Former drill sergeant offering hyper\n"
	.string "training services.$"

miscItemMartSign_Text_0:
	.string "Market goods for affordable prices!\n"
	.string "Buy!!$"

miscBerryMartSign_Text_0:
	.string "Rare berries from distant lands.$"

mysticTrader_Text_0:
	.string "My apogies, but you've already had your\n"
	.string "daily box of surprises. Come back\l"
	.string "tomorrow.$"

mysticTrader_Text_1:
	.string "Greetings traveller, would you be\n"
	.string "interesting in buying one of my lootb- I\l"
	.string "mean surprise boxes! I can offer you\l"
	.string "one each day for 5000 Pokedollars.$"

mysticTrader_Text_2:
	.string "Oh you're too poor for a surprise box.$"

mysticTrader_Text_3:
	.string "Each box contains a rare Pokémon. So\n"
	.string "come on, pick one!$"

mysticTrader_Text_4:
	.string "Red$"

mysticTrader_Text_5:
	.string "Blue$"

mysticTrader_Text_6:
	.string "Green$"

mysticTrader_Text_7:
	.string "Decline$"

mysticTrader_Text_8:
	.string "You peer into the red box and find...!$"

mysticTrader_Text_9:
	.string "You peer into the blue box and find...!$"

mysticTrader_Text_10:
	.string "You peer into the green box and find...!$"

mysticTrader_Text_11:
	.string "O-oh, not into a game of chance? Shame.$"

mysticTrader_Text_12:
	.string "{STR_VAR_1}! Amazing!$"

mysticTrader_Text_13:
	.string "Hope you are satisfied with this\n"
	.string "outcome. Come back tomorrow if not.\l"
	.string "Heeheehee...$"

mysticSign_Text_0:
	.string "Mystic Maya's surprise boxes!$"
