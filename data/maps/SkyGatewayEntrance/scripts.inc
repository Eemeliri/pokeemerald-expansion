SkyGatewayEntrance_MapScripts::
	.byte 0


SkyGatewayEntrance_TiredMan::
	msgbox SkyGatewayEntrance_TiredMan_Text_0, MSGBOX_NPC
	return


SkyGatewayEntrance_OldLady::
	msgbox SkyGatewayEntrance_OldLady_Text_0, MSGBOX_NPC
	return


SkyGatewayEntrance_Battlegirl::
	msgbox SkyGatewayEntrance_Battlegirl_Text_0, MSGBOX_NPC
	return


SkyGatewayEntrance_AceTrainer::
	msgbox SkyGatewayEntrance_AceTrainer_Text_0, MSGBOX_NPC
	return


SkyGatewayEntrance_Shop::
	msgbox SkyGatewayEntrance_Shop_Text_0, MSGBOX_DEFAULT
	bpmart SkyGatewayBPMart, FALSE
	release
	end


SkyGatewayEntrance_Porygon::
	lock
	faceplayer
	goto EventScript_PC
	release
	end


SkyGatewayMarshadow::
	lock
	faceplayer
	playmoncry SPECIES_MARSHADOW, CRY_MODE_NORMAL
	msgbox SkyGatewayMarshadow_Text_0, MSGBOX_DEFAULT
	msgbox SkyGatewayMarshadow_Text_1
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, SkyGatewayMarshadow_Text_2, SkyGatewayMarshadow_Text_3, SkyGatewayMarshadow_Text_4, SkyGatewayMarshadow_Text_5, SkyGatewayMarshadow_Text_6
	switch VAR_RESULT
	case 0, SkyGatewayMarshadow_3
	case 1, SkyGatewayMarshadow_4
	case 2, SkyGatewayMarshadow_5
	case 3, SkyGatewayMarshadow_6
	playmoncry SPECIES_MARSHADOW, CRY_MODE_NORMAL
	msgbox SkyGatewayMarshadow_Text_11, MSGBOX_DEFAULT
	waitmessage
	release
	end

	release
	end

SkyGatewayMarshadow_3:
	msgbox SkyGatewayMarshadow_Text_7, MSGBOX_DEFAULT
	release
	end

SkyGatewayMarshadow_4:
	msgbox SkyGatewayMarshadow_Text_8, MSGBOX_DEFAULT
	release
	end

SkyGatewayMarshadow_5:
	msgbox SkyGatewayMarshadow_Text_9, MSGBOX_DEFAULT
	release
	end

SkyGatewayMarshadow_6:
	msgbox SkyGatewayMarshadow_Text_10, MSGBOX_DEFAULT
	release
	end


	.align 2
SkyGatewayBPMart:
	.2byte ITEM_BOTTLE_CAP
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE

SkyGatewayDynamicMultichoice::
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, SkyGatewayDynamicMultichoice_Text_0, SkyGatewayDynamicMultichoice_Text_1, SkyGatewayMarshadow_Text_6
	switch VAR_RESULT
	case 0, SkyGatewayDynamicMultichoice_2
	case 1, SkyGatewayDynamicMultichoice_3
	msgbox SkyGatewayDynamicMultichoice_Text_7
	waitmessage
	releaseall
	end

SkyGatewayDynamicMultichoice_2:
	msgbox SkyGatewayDynamicMultichoice_Text_2
	release
	end

SkyGatewayDynamicMultichoice_3:
	msgbox SkyGatewayDynamicMultichoice_Text_3
	msgbox SkyGatewayDynamicMultichoice_Text_4
	msgbox SkyGatewayDynamicMultichoice_Text_5
	msgbox SkyGatewayDynamicMultichoice_Text_6
	goto SkyGatewayDynamicMultichoice
	return


SkyGatewayEntrance_Receptionist::
	lock
	faceplayer
	msgbox SkyGatewayEntrance_Receptionist_Text_0, MSGBOX_DEFAULT
	goto SkyGatewayDynamicMultichoice
	return


SkyGatewayEntrance_Teleporter::
	lock
	msgbox SkyGatewayEntrance_Teleporter_Text_0, MSGBOX_DEFAULT
	release
	end


SkyGatewayEntrance_TiredMan_Text_0:
	.string "<Pant> Ascending those stairs took a\n"
	.string "lot... Maybe I'll rest here for a bit...$"

SkyGatewayEntrance_OldLady_Text_0:
	.string "No matter how many times I come here,\n"
	.string "the view from here is truly astonishing!$"

SkyGatewayEntrance_Battlegirl_Text_0:
	.string "This board displays the names of those\n"
	.string "who have climbed the furthest up the\l"
	.string "Sky Gateway! I wonder if I'll ever make\l"
	.string "it up there...$"

SkyGatewayEntrance_AceTrainer_Text_0:
	.string "I can't even see the top! They say at\n"
	.string "the top resides the greatest treasure.$"

SkyGatewayEntrance_Shop_Text_0:
	.string "Welcome! We sell rare items!$"

SkyGatewayMarshadow_Text_0:
	.string "Whee! Are you going to climb? Many\n"
	.string "dangers up ahead! Bring me items held\l"
	.string "close by the guardians and I will help\l"
	.string "you!$"

SkyGatewayMarshadow_Text_1:
	.string "Which item would you like?$"

SkyGatewayMarshadow_Text_2:
	.string "Wind Talisman$"

SkyGatewayMarshadow_Text_3:
	.string "Sky Compass$"

SkyGatewayMarshadow_Text_4:
	.string "Divine Amulet$"

SkyGatewayMarshadow_Text_5:
	.string "Rainbow Feather$"

SkyGatewayMarshadow_Text_6:
	.string "Cancel$"

SkyGatewayMarshadow_Text_7:
	.string "The Wind Talisman is a powerful item\n"
	.string "that can help you climb the Sky\l"
	.string "Gateway!$"

SkyGatewayMarshadow_Text_8:
	.string "The Sky Compass is a powerful item that\n"
	.string "can help you climb the Sky Gateway!$"

SkyGatewayMarshadow_Text_9:
	.string "The Divine Amulet is a powerful item\n"
	.string "that can help you climb the Sky\l"
	.string "Gateway!$"

SkyGatewayMarshadow_Text_10:
	.string "The Rainbow Feather is a powerful item\n"
	.string "that can help you climb the Sky\l"
	.string "Gateway!$"

SkyGatewayMarshadow_Text_11:
	.string "Whee! Come back safe!$"

SkyGatewayDynamicMultichoice_Text_0:
	.string "Climb$"

SkyGatewayDynamicMultichoice_Text_1:
	.string "What is this?$"

SkyGatewayDynamicMultichoice_Text_2:
	.string "TODO: Start climb$"

SkyGatewayDynamicMultichoice_Text_3:
	.string "Sky Gateway is a multi-layered dungeon\n"
	.string "that any trainer can climb. The higher\l"
	.string "you ascend, the fiercer the challenges\l"
	.string "get.$"

SkyGatewayDynamicMultichoice_Text_4:
	.string "Each layer is divided into a certain\n"
	.string "number of floors, and at the end of\l"
	.string "each layer is a guardian that you must\l"
	.string "defeat to proceed.$"

SkyGatewayDynamicMultichoice_Text_5:
	.string "There will occasionally be obstacles\n"
	.string "that require you to have a certain\l"
	.string "amount of gym badges.$"

SkyGatewayDynamicMultichoice_Text_6:
	.string "You can expect to find rare treasure,\n"
	.string "strong trainers to battle and\l"
	.string "something even greater as you ascend!$"

SkyGatewayDynamicMultichoice_Text_7:
	.string "We hope to see you again!$"

SkyGatewayEntrance_Receptionist_Text_0:
	.string "Welcome! This is the entrance to the\n"
	.string "Sky Gateway, a path to the heavens and\l"
	.string "beyond!$"

SkyGatewayEntrance_Teleporter_Text_0:
	.string "The device appears to be inactive.$"
