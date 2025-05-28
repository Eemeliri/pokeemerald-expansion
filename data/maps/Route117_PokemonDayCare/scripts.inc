

Route117_PokemonDayCare_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
	.byte 0

Route117_PokemonDayCare_OnTransition:
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	end

HatchEggNpc::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_2, HatchEggNpc_2
HatchEggNpc_1:
	showmoneybox 0, 0
	msgbox HatchEggNpc_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq HatchEggNpc_5
	hidemoneybox
	release
	end

HatchEggNpc_2:
	msgbox HatchEggNpc_Text_0, MSGBOX_DEFAULT
	msgbox HatchEggNpc_Text_1, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	goto HatchEggNpc_1

HatchEggNpc_4:
	getpartysize
	compare VAR_RESULT, 0
	goto_if_eq HatchEggNpc_9
	hidemoneybox
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge HatchEggNpc_14
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_ne HatchEggNpc_17
	showmoneybox 0, 0
	removemoney 1000
	updatemoneybox
	hidemoneybox
	special EggHatch
	waitstate
	return

HatchEggNpc_5:
	checkmoney 1000
	compare VAR_RESULT, FALSE
	goto_if_eq HatchEggNpc_11
	goto HatchEggNpc_4

HatchEggNpc_9:
	msgbox HatchEggNpc_Text_4, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

HatchEggNpc_11:
	msgbox HatchEggNpc_Text_3, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

HatchEggNpc_14:
	release
	end

HatchEggNpc_17:
	msgbox HatchEggNpc_Text_5, MSGBOX_DEFAULT
	release
	end


HatchEggNpc_Text_0:
	.string "Hi! Bored of walking around with your\n"
	.string "Eggs? I can help you with that!$"

HatchEggNpc_Text_1:
	.string "I will hatch an Egg for you for 1000\n"
	.string "Pokédollars!$"

HatchEggNpc_Text_2:
	.string "Do you want me to hatch an Egg for you?$"

HatchEggNpc_Text_3:
	.string "Hey, you can't afford that!$"

HatchEggNpc_Text_4:
	.string "You don't have any Pokémon in your\n"
	.string "party.$"

HatchEggNpc_Text_5:
	.string "You can't hatch an egg if you don't have\n"
	.string "one.$"
