DewfordDojoEVRoom_MapScripts::
	.byte 0


expTrainerDojo::
	lock
	faceplayer
	msgbox expTrainerDojo_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq expTrainerDojo_2
expTrainerDojo_1:
	release
	end

expTrainerDojo_2:
	trainerbattle_no_intro TRAINER_DewfordDojo_EXP, expTrainerDojo_Text_1
	msgbox expTrainerDojo_Text_2
	goto_if_set FLAG_IS_CHAMPION, expTrainerDojo_4
	goto_if_set FLAG_BADGE08_GET, expTrainerDojo_5
	goto_if_set FLAG_BADGE07_GET, expTrainerDojo_6
	goto_if_set FLAG_BADGE06_GET, expTrainerDojo_7
	goto_if_set FLAG_BADGE05_GET, expTrainerDojo_8
	goto_if_set FLAG_BADGE04_GET, expTrainerDojo_9
	goto_if_set FLAG_BADGE03_GET, expTrainerDojo_10
	goto_if_set FLAG_BADGE02_GET, expTrainerDojo_11
	goto_if_set FLAG_BADGE01_GET, expTrainerDojo_12
	goto expTrainerDojo_1

expTrainerDojo_4:
	giveitem ITEM_EXP_CANDY_XL, 5
	goto expTrainerDojo_1

expTrainerDojo_5:
	giveitem ITEM_EXP_CANDY_L, 5
	goto expTrainerDojo_1

expTrainerDojo_6:
	giveitem ITEM_EXP_CANDY_L, 2
	goto expTrainerDojo_1

expTrainerDojo_7:
	giveitem ITEM_EXP_CANDY_M, 5
	goto expTrainerDojo_1

expTrainerDojo_8:
	giveitem ITEM_EXP_CANDY_M, 2
	goto expTrainerDojo_1

expTrainerDojo_9:
	giveitem ITEM_EXP_CANDY_S, 5
	goto expTrainerDojo_1

expTrainerDojo_10:
	giveitem ITEM_EXP_CANDY_S, 2
	goto expTrainerDojo_1

expTrainerDojo_11:
	giveitem ITEM_EXP_CANDY_XS, 5
	goto expTrainerDojo_1

expTrainerDojo_12:
	giveitem ITEM_EXP_CANDY_XS, 2
	goto expTrainerDojo_1


nurseJoyEvTraining::
	lock
	faceplayer
	msgbox nurseJoyEvTraining_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq nurseJoyEvTraining_2
nurseJoyEvTraining_1:
	release
	end

nurseJoyEvTraining_2:
	playse MUS_HEAL
	special HealPlayerParty
	waitse
	goto nurseJoyEvTraining_1


PcAccessEvTraining::
	bufferspeciesname 0, SPECIES_PORYGON
	lock
	goto EventScript_PC
	release
	end


expTrainerDojo_Text_0:
	.string "Do you wish to grow your Pokémon\n"
	.string "through battles?$"

expTrainerDojo_Text_1:
	.string "Well done.$"

expTrainerDojo_Text_2:
	.string "Have some candy too.$"

nurseJoyEvTraining_Text_0:
	.string "Welcome to the training room, would you\n"
	.string "like me to heal your Pokémon?$"
