LehtiRoad_MapScripts::
	.byte 0


girlInGrass::
	msgbox girlInGrass_Text_0, MSGBOX_NPC
	return


artistOnBridge::
	msgbox artistOnBridge_Text_0, MSGBOX_NPC
	return


boyOnLeft::
	msgbox boyOnLeft_Text_0, MSGBOX_NPC
	return


girlInGrass_Text_0:
	.string "I'm here to gather some flowers for my\n"
	.string "homework. We were asked to bring 10\l"
	.string "different kinds of flowers. I've only\l"
	.string "found one so far...$"

artistOnBridge_Text_0:
	.string "This view shall be my next artistic\n"
	.string "masterpiece! Just you wait, darling!$"

boyOnLeft_Text_0:
	.string "It's quite a trip to nearest Pokémart.\n"
	.string "We need to always keep a Pokémon with\l"
	.string "us.$"
