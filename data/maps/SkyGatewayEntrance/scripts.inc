SkyGatewayEntrance_MapScripts::
	.byte 0


SkyGatewayEntrance_TiredMan::
# 4 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayEntrance_TiredMan_Text_0, MSGBOX_NPC
	return


SkyGatewayEntrance_OldLady::
# 8 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayEntrance_OldLady_Text_0, MSGBOX_NPC
	return


SkyGatewayEntrance_Battlegirl::
# 12 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayEntrance_Battlegirl_Text_0, MSGBOX_NPC
	return


SkyGatewayEntrance_AceTrainer::
# 16 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayEntrance_AceTrainer_Text_0, MSGBOX_NPC
	return


SkyGatewayEntrance_Shop::
# 20 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayEntrance_Shop_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/SkyGatewayEntrance/scripts.pory"
	bpmart SkyGatewayBPMart, FALSE
# 22 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end


SkyGatewayEntrance_Porygon::
# 27 "data/maps/SkyGatewayEntrance/scripts.pory"
	lock
# 28 "data/maps/SkyGatewayEntrance/scripts.pory"
	faceplayer
# 29 "data/maps/SkyGatewayEntrance/scripts.pory"
	goto EventScript_PC
# 30 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end


SkyGatewayMarshadow::
# 35 "data/maps/SkyGatewayEntrance/scripts.pory"
	lock
# 36 "data/maps/SkyGatewayEntrance/scripts.pory"
	faceplayer
# 37 "data/maps/SkyGatewayEntrance/scripts.pory"
	playmoncry SPECIES_MARSHADOW, CRY_MODE_NORMAL
# 38 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayMarshadow_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayMarshadow_Text_1
# 40 "data/maps/SkyGatewayEntrance/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, SkyGatewayMarshadow_Text_2, SkyGatewayMarshadow_Text_3, SkyGatewayMarshadow_Text_4, SkyGatewayMarshadow_Text_5, SkyGatewayMarshadow_Text_6
# 41 "data/maps/SkyGatewayEntrance/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/SkyGatewayEntrance/scripts.pory"
	case 0, SkyGatewayMarshadow_3
# 47 "data/maps/SkyGatewayEntrance/scripts.pory"
	case 1, SkyGatewayMarshadow_4
# 52 "data/maps/SkyGatewayEntrance/scripts.pory"
	case 2, SkyGatewayMarshadow_5
# 57 "data/maps/SkyGatewayEntrance/scripts.pory"
	case 3, SkyGatewayMarshadow_6
# 63 "data/maps/SkyGatewayEntrance/scripts.pory"
	playmoncry SPECIES_MARSHADOW, CRY_MODE_NORMAL
# 64 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayMarshadow_Text_11, MSGBOX_DEFAULT
# 65 "data/maps/SkyGatewayEntrance/scripts.pory"
	waitmessage
# 66 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end

# 69 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end

SkyGatewayMarshadow_3:
# 43 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayMarshadow_Text_7, MSGBOX_DEFAULT
# 44 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end

SkyGatewayMarshadow_4:
# 48 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayMarshadow_Text_8, MSGBOX_DEFAULT
# 49 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end

SkyGatewayMarshadow_5:
# 53 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayMarshadow_Text_9, MSGBOX_DEFAULT
# 54 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end

SkyGatewayMarshadow_6:
# 58 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayMarshadow_Text_10, MSGBOX_DEFAULT
# 59 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end


	.align 2
# 73 "data/maps/SkyGatewayEntrance/scripts.pory"
SkyGatewayBPMart:
# 74 "data/maps/SkyGatewayEntrance/scripts.pory"
	.2byte ITEM_BOTTLE_CAP
# 75 "data/maps/SkyGatewayEntrance/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 76 "data/maps/SkyGatewayEntrance/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

SkyGatewayDynamicMultichoice::
# 81 "data/maps/SkyGatewayEntrance/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, SkyGatewayDynamicMultichoice_Text_0, SkyGatewayDynamicMultichoice_Text_1, SkyGatewayMarshadow_Text_6
# 82 "data/maps/SkyGatewayEntrance/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/SkyGatewayEntrance/scripts.pory"
	case 0, SkyGatewayDynamicMultichoice_2
# 88 "data/maps/SkyGatewayEntrance/scripts.pory"
	case 1, SkyGatewayDynamicMultichoice_3
# 96 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayDynamicMultichoice_Text_7
# 97 "data/maps/SkyGatewayEntrance/scripts.pory"
	waitmessage
# 98 "data/maps/SkyGatewayEntrance/scripts.pory"
	releaseall
	end

SkyGatewayDynamicMultichoice_2:
# 84 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayDynamicMultichoice_Text_2
# 85 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end

SkyGatewayDynamicMultichoice_3:
# 89 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayDynamicMultichoice_Text_3
# 90 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayDynamicMultichoice_Text_4
# 91 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayDynamicMultichoice_Text_5
# 92 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayDynamicMultichoice_Text_6
# 93 "data/maps/SkyGatewayEntrance/scripts.pory"
	goto SkyGatewayDynamicMultichoice
	return


SkyGatewayEntrance_Receptionist::
# 104 "data/maps/SkyGatewayEntrance/scripts.pory"
	lock
# 105 "data/maps/SkyGatewayEntrance/scripts.pory"
	faceplayer
# 106 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayEntrance_Receptionist_Text_0, MSGBOX_DEFAULT
# 107 "data/maps/SkyGatewayEntrance/scripts.pory"
	goto SkyGatewayDynamicMultichoice
	return


SkyGatewayEntrance_Teleporter::
# 111 "data/maps/SkyGatewayEntrance/scripts.pory"
	lock
# 112 "data/maps/SkyGatewayEntrance/scripts.pory"
	msgbox SkyGatewayEntrance_Teleporter_Text_0, MSGBOX_DEFAULT
# 113 "data/maps/SkyGatewayEntrance/scripts.pory"
	release
	end


SkyGatewayEntrance_TiredMan_Text_0:
# 4 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "<Pant> Ascending those stairs took a\n"
	.string "lot... Maybe I'll rest here for a bit...$"

SkyGatewayEntrance_OldLady_Text_0:
# 8 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "No matter how many times I come here,\n"
	.string "the view from here is truly astonishing!$"

SkyGatewayEntrance_Battlegirl_Text_0:
# 12 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "This board displays the names of those\n"
	.string "who have climbed the furthest up the\l"
	.string "Sky Gateway! I wonder if I'll ever make\l"
	.string "it up there...$"

SkyGatewayEntrance_AceTrainer_Text_0:
# 16 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "I can't even see the top! They say at\n"
	.string "the top resides the greatest treasure.$"

SkyGatewayEntrance_Shop_Text_0:
# 20 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Welcome! We sell rare items!$"

SkyGatewayMarshadow_Text_0:
# 38 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Whee! Are you going to climb? Many\n"
	.string "dangers up ahead! Bring me items held\l"
	.string "close by the guardians and I will help\l"
	.string "you!$"

SkyGatewayMarshadow_Text_1:
# 39 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Which item would you like?$"

SkyGatewayMarshadow_Text_2:
# 40 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Wind Talisman$"

SkyGatewayMarshadow_Text_3:
# 40 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Sky Compass$"

SkyGatewayMarshadow_Text_4:
# 40 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Divine Amulet$"

SkyGatewayMarshadow_Text_5:
# 40 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Rainbow Feather$"

SkyGatewayMarshadow_Text_6:
# 40 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Cancel$"

SkyGatewayMarshadow_Text_7:
# 43 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "The Wind Talisman is a powerful item\n"
	.string "that can help you climb the Sky\l"
	.string "Gateway!$"

SkyGatewayMarshadow_Text_8:
# 48 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "The Sky Compass is a powerful item that\n"
	.string "can help you climb the Sky Gateway!$"

SkyGatewayMarshadow_Text_9:
# 53 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "The Divine Amulet is a powerful item\n"
	.string "that can help you climb the Sky\l"
	.string "Gateway!$"

SkyGatewayMarshadow_Text_10:
# 58 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "The Rainbow Feather is a powerful item\n"
	.string "that can help you climb the Sky\l"
	.string "Gateway!$"

SkyGatewayMarshadow_Text_11:
# 64 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Whee! Come back safe!$"

SkyGatewayDynamicMultichoice_Text_0:
# 81 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Climb$"

SkyGatewayDynamicMultichoice_Text_1:
# 81 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "What is this?$"

SkyGatewayDynamicMultichoice_Text_2:
# 84 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "TODO: Start climb$"

SkyGatewayDynamicMultichoice_Text_3:
# 89 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Sky Gateway is a multi-layered dungeon\n"
	.string "that any trainer can climb. The higher\l"
	.string "you ascend, the fiercer the challenges\l"
	.string "get.$"

SkyGatewayDynamicMultichoice_Text_4:
# 90 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Each layer is divided into a certain\n"
	.string "number of floors, and at the end of\l"
	.string "each layer is a guardian that you must\l"
	.string "defeat to proceed.$"

SkyGatewayDynamicMultichoice_Text_5:
# 91 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "There will occasionally be obstacles\n"
	.string "that require you to have a certain\l"
	.string "amount of gym badges.$"

SkyGatewayDynamicMultichoice_Text_6:
# 92 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "You can expect to find rare treasure,\n"
	.string "strong trainers to battle and\l"
	.string "something even greater as you ascend!$"

SkyGatewayDynamicMultichoice_Text_7:
# 96 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "We hope to see you again!$"

SkyGatewayEntrance_Receptionist_Text_0:
# 106 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "Welcome! This is the entrance to the\n"
	.string "Sky Gateway, a path to the heavens and\l"
	.string "beyond!$"

SkyGatewayEntrance_Teleporter_Text_0:
# 112 "data/maps/SkyGatewayEntrance/scripts.pory"
	.string "The device appears to be inactive.$"
