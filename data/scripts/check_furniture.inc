
EventScript_PictureBookShelf::
	msgbox Text_PictureBookShelf, MSGBOX_SIGN
	end

EventScript_BookShelf::
	msgbox Text_BookShelf, MSGBOX_SIGN
	end

EventScript_PokemonCenterBookShelf::
	msgbox Text_PokemonCenterBookShelf, MSGBOX_SIGN
	end

EventScript_Vase::
	msgbox Text_Vase, MSGBOX_SIGN
	end

EventScript_EmptyTrashCan::
	msgbox Text_EmptyTrashCan, MSGBOX_SIGN
	end

EventScript_ShopShelf::
	msgbox Text_ShopShelf, MSGBOX_SIGN
	end

EventScript_Blueprint::
	msgbox Text_Blueprint, MSGBOX_SIGN
	end

EventScript_CagedPokemon::
	msgbox EventScript_CagedPokemon_Text_0, MSGBOX_SIGN
	end


EventScript_CageNoPokemon::
	msgbox EventScript_CageNoPokemon_Text_0, MSGBOX_SIGN
	end


EventScript_StrangeMachinery::
	msgbox EventScript_StrangeMachinery_Text_0, MSGBOX_SIGN
	end


EventScript_ElectrodeTrap::
	lock
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 40
	setwildbattle SPECIES_ELECTRODE, 35
	dowildbattle
	release
	end


EventScript_CagedPokemon_Text_0:
	.string "Captured Pokémon are trapped inside\n"
	.string "the cages.$"

EventScript_CageNoPokemon_Text_0:
	.string "The cage is empty.$"

EventScript_StrangeMachinery_Text_0:
	.string "Strange numbers and graphs are\n"
	.string "displayed on the monitor. Better not\l"
	.string "touch.$"
