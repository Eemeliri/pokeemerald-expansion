DewfordDojoEVRoom_MapScripts::
	.byte 0


expTrainerDojo::
# 4 "data/maps/DewfordDojoEVRoom/scripts.pory"
	lock
# 5 "data/maps/DewfordDojoEVRoom/scripts.pory"
	faceplayer
# 6 "data/maps/DewfordDojoEVRoom/scripts.pory"
	msgbox expTrainerDojo_Text_0, MSGBOX_YESNO
# 7 "data/maps/DewfordDojoEVRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq expTrainerDojo_2
expTrainerDojo_1:
# 30 "data/maps/DewfordDojoEVRoom/scripts.pory"
	release
	end

expTrainerDojo_2:
# 8 "data/maps/DewfordDojoEVRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DewfordDojo_EXP, expTrainerDojo_Text_1
# 9 "data/maps/DewfordDojoEVRoom/scripts.pory"
	msgbox expTrainerDojo_Text_2
# 10 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, expTrainerDojo_4
# 12 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, expTrainerDojo_5
# 14 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, expTrainerDojo_6
# 16 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, expTrainerDojo_7
# 18 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, expTrainerDojo_8
# 20 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, expTrainerDojo_9
# 22 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, expTrainerDojo_10
# 24 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, expTrainerDojo_11
# 26 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, expTrainerDojo_12
	goto expTrainerDojo_1

expTrainerDojo_4:
# 11 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 5
	goto expTrainerDojo_1

expTrainerDojo_5:
# 13 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_L, 5
	goto expTrainerDojo_1

expTrainerDojo_6:
# 15 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_L, 2
	goto expTrainerDojo_1

expTrainerDojo_7:
# 17 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 5
	goto expTrainerDojo_1

expTrainerDojo_8:
# 19 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_M, 2
	goto expTrainerDojo_1

expTrainerDojo_9:
# 21 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 5
	goto expTrainerDojo_1

expTrainerDojo_10:
# 23 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_S, 2
	goto expTrainerDojo_1

expTrainerDojo_11:
# 25 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 5
	goto expTrainerDojo_1

expTrainerDojo_12:
# 27 "data/maps/DewfordDojoEVRoom/scripts.pory"
	giveitem ITEM_EXP_CANDY_XS, 2
	goto expTrainerDojo_1


nurseJoyEvTraining::
# 35 "data/maps/DewfordDojoEVRoom/scripts.pory"
	lock
# 36 "data/maps/DewfordDojoEVRoom/scripts.pory"
	faceplayer
# 37 "data/maps/DewfordDojoEVRoom/scripts.pory"
	msgbox nurseJoyEvTraining_Text_0, MSGBOX_YESNO
# 38 "data/maps/DewfordDojoEVRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq nurseJoyEvTraining_2
nurseJoyEvTraining_1:
# 43 "data/maps/DewfordDojoEVRoom/scripts.pory"
	release
	end

nurseJoyEvTraining_2:
# 39 "data/maps/DewfordDojoEVRoom/scripts.pory"
	playse MUS_HEAL
# 40 "data/maps/DewfordDojoEVRoom/scripts.pory"
	special HealPlayerParty
# 41 "data/maps/DewfordDojoEVRoom/scripts.pory"
	waitse
	goto nurseJoyEvTraining_1


PcAccessEvTraining::
# 48 "data/maps/DewfordDojoEVRoom/scripts.pory"
	bufferspeciesname 0, SPECIES_PORYGON
# 49 "data/maps/DewfordDojoEVRoom/scripts.pory"
	lock
# 50 "data/maps/DewfordDojoEVRoom/scripts.pory"
	goto EventScript_PC
# 51 "data/maps/DewfordDojoEVRoom/scripts.pory"
	release
	end


expTrainerDojo_Text_0:
# 6 "data/maps/DewfordDojoEVRoom/scripts.pory"
	.string "Do you wish to grow your Pokémon\n"
	.string "through battles?$"

expTrainerDojo_Text_1:
# 8 "data/maps/DewfordDojoEVRoom/scripts.pory"
	.string "Well done.$"

expTrainerDojo_Text_2:
# 9 "data/maps/DewfordDojoEVRoom/scripts.pory"
	.string "Have some candy too.$"

nurseJoyEvTraining_Text_0:
# 37 "data/maps/DewfordDojoEVRoom/scripts.pory"
	.string "Welcome to the training room, would you\n"
	.string "like me to heal your Pokémon?$"
