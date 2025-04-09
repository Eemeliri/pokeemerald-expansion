# 1 "data/scripts/check_furniture.pory"

# 2 "data/scripts/check_furniture.pory"
EventScript_PictureBookShelf::
# 3 "data/scripts/check_furniture.pory"
	msgbox Text_PictureBookShelf, MSGBOX_SIGN
# 4 "data/scripts/check_furniture.pory"
	end
# 5 "data/scripts/check_furniture.pory"

# 6 "data/scripts/check_furniture.pory"
EventScript_BookShelf::
# 7 "data/scripts/check_furniture.pory"
	msgbox Text_BookShelf, MSGBOX_SIGN
# 8 "data/scripts/check_furniture.pory"
	end
# 9 "data/scripts/check_furniture.pory"

# 10 "data/scripts/check_furniture.pory"
EventScript_PokemonCenterBookShelf::
# 11 "data/scripts/check_furniture.pory"
	msgbox Text_PokemonCenterBookShelf, MSGBOX_SIGN
# 12 "data/scripts/check_furniture.pory"
	end
# 13 "data/scripts/check_furniture.pory"

# 14 "data/scripts/check_furniture.pory"
EventScript_Vase::
# 15 "data/scripts/check_furniture.pory"
	msgbox Text_Vase, MSGBOX_SIGN
# 16 "data/scripts/check_furniture.pory"
	end
# 17 "data/scripts/check_furniture.pory"

# 18 "data/scripts/check_furniture.pory"
EventScript_EmptyTrashCan::
# 19 "data/scripts/check_furniture.pory"
	msgbox Text_EmptyTrashCan, MSGBOX_SIGN
# 20 "data/scripts/check_furniture.pory"
	end
# 21 "data/scripts/check_furniture.pory"

# 22 "data/scripts/check_furniture.pory"
EventScript_ShopShelf::
# 23 "data/scripts/check_furniture.pory"
	msgbox Text_ShopShelf, MSGBOX_SIGN
# 24 "data/scripts/check_furniture.pory"
	end
# 25 "data/scripts/check_furniture.pory"

# 26 "data/scripts/check_furniture.pory"
EventScript_Blueprint::
# 27 "data/scripts/check_furniture.pory"
	msgbox Text_Blueprint, MSGBOX_SIGN
# 28 "data/scripts/check_furniture.pory"
	end

EventScript_CagedPokemon::
# 31 "data/scripts/check_furniture.pory"
	msgbox EventScript_CagedPokemon_Text_0, MSGBOX_SIGN
	end


EventScript_CageNoPokemon::
# 36 "data/scripts/check_furniture.pory"
	msgbox EventScript_CageNoPokemon_Text_0, MSGBOX_SIGN
	end


EventScript_StrangeMachinery::
# 41 "data/scripts/check_furniture.pory"
	msgbox EventScript_StrangeMachinery_Text_0, MSGBOX_SIGN
	end


EventScript_CagedPokemon_Text_0:
# 31 "data/scripts/check_furniture.pory"
	.string "Captured Pokémon are trapped inside\n"
	.string "the cages.$"

EventScript_CageNoPokemon_Text_0:
# 36 "data/scripts/check_furniture.pory"
	.string "The cage is empty.$"

EventScript_StrangeMachinery_Text_0:
# 41 "data/scripts/check_furniture.pory"
	.string "Strange numbers and graphs are\n"
	.string "displayed on the monitor. Better not\l"
	.string "touch.$"
