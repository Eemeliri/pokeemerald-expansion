DewfordDojoTrainingRoom_MapScripts::
	.byte 0


dojoFexpert::
# 4 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	lock
# 5 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	faceplayer
# 6 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	msgbox dojoFexpert_Text_0
# 7 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FOCUS_BAND, dojoFexpert_2
dojoFexpert_1:
# 12 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	release
	end

dojoFexpert_2:
# 8 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	msgbox dojoFexpert_Text_1
# 9 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 10 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	setflag FLAG_RECEIVED_FOCUS_BAND
	goto dojoFexpert_1


dojoTrainer::
# 17 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	msgbox dojoTrainer_Text_0, MSGBOX_AUTOCLOSE
	end


dojoFexpert_Text_0:
# 6 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	.string "Training yourself mentally and\n"
	.string "physically is as important as training\l"
	.string "your Pokémon. Tough challenges cannot\l"
	.string "be faced with weak body and mind.$"

dojoFexpert_Text_1:
# 8 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	.string "Perhaps this will help you focus on your\n"
	.string "training.$"

dojoTrainer_Text_0:
# 17 "data/maps/DewfordDojoTrainingRoom/scripts.pory"
	.string "The student is meditating, it would be\n"
	.string "rude to disturb them.$"
