# 1 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 3 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_MapScripts::
# 4 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
# 5 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.byte 0
# 6 "data/maps/Route117_PokemonDayCare/scripts.pory"

# 7 "data/maps/Route117_PokemonDayCare/scripts.pory"
Route117_PokemonDayCare_OnTransition:
# 8 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
# 9 "data/maps/Route117_PokemonDayCare/scripts.pory"
	end

HatchEggNpc::
# 13 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock
# 14 "data/maps/Route117_PokemonDayCare/scripts.pory"
	faceplayer
# 15 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto_if_unset FLAG_TEMP_2, HatchEggNpc_2
HatchEggNpc_1:
# 20 "data/maps/Route117_PokemonDayCare/scripts.pory"
	showmoneybox 0, 0
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox HatchEggNpc_Text_2, MSGBOX_YESNO
# 22 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HatchEggNpc_5
# 31 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 32 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
	end

HatchEggNpc_2:
# 16 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox HatchEggNpc_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox HatchEggNpc_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_TEMP_2
	goto HatchEggNpc_1

HatchEggNpc_4:
# 35 "data/maps/Route117_PokemonDayCare/scripts.pory"
	getpartysize
# 36 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq HatchEggNpc_9
# 42 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 43 "data/maps/Route117_PokemonDayCare/scripts.pory"
	special ChoosePartyMon
# 44 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitstate
# 45 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge HatchEggNpc_14
# 49 "data/maps/Route117_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 50 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_ne HatchEggNpc_17
# 55 "data/maps/Route117_PokemonDayCare/scripts.pory"
	showmoneybox 0, 0
# 56 "data/maps/Route117_PokemonDayCare/scripts.pory"
	removemoney 1000
# 57 "data/maps/Route117_PokemonDayCare/scripts.pory"
	updatemoneybox
# 58 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 59 "data/maps/Route117_PokemonDayCare/scripts.pory"
	special EggHatch
# 60 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitstate
	return

HatchEggNpc_5:
# 23 "data/maps/Route117_PokemonDayCare/scripts.pory"
	checkmoney 1000
# 24 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HatchEggNpc_11
	goto HatchEggNpc_4

HatchEggNpc_9:
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox HatchEggNpc_Text_4, MSGBOX_DEFAULT
# 38 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 39 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
	end

HatchEggNpc_11:
# 25 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox HatchEggNpc_Text_3, MSGBOX_DEFAULT
# 26 "data/maps/Route117_PokemonDayCare/scripts.pory"
	hidemoneybox
# 27 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
	end

HatchEggNpc_14:
# 46 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
	end

HatchEggNpc_17:
# 51 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox HatchEggNpc_Text_5, MSGBOX_DEFAULT
# 52 "data/maps/Route117_PokemonDayCare/scripts.pory"
	release
	end


HatchEggNpc_Text_0:
# 16 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Hi! Bored of walking around with your\n"
	.string "Eggs? I can help you with that!$"

HatchEggNpc_Text_1:
# 17 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I will hatch an Egg for you for 1000\n"
	.string "Pokédollars!$"

HatchEggNpc_Text_2:
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Do you want me to hatch an Egg for you?$"

HatchEggNpc_Text_3:
# 25 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Hey, you can't afford that!$"

HatchEggNpc_Text_4:
# 37 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "You don't have any Pokémon in your\n"
	.string "party.$"

HatchEggNpc_Text_5:
# 51 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "You can't hatch an egg if you don't have\n"
	.string "one.$"
