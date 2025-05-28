MaihaGarden_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MaihaGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MaihaGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Common_EventScript_SetupRivalGfxId
	return


miltankBoy::
	msgbox miltankBoy_Text_0, MSGBOX_NPC
	return


rivalMaiha::
	lock
	msgbox rivalMaiha_Text_0
	return


miltankBoy_Text_0:
	.string "I'm taking care of the Miltanks! They\n"
	.string "give us Moomoo Milk every day!$"

rivalMaiha_Text_0:
	.string "$"
