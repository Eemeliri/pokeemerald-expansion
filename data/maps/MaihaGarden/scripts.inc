MaihaGarden_MapScripts::
# 2 "data/maps/MaihaGarden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MaihaGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MaihaGarden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MaihaGarden/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


miltankBoy::
# 8 "data/maps/MaihaGarden/scripts.pory"
	msgbox miltankBoy_Text_0, MSGBOX_NPC
	return


rivalMaiha::
	return


miltankBoy_Text_0:
# 8 "data/maps/MaihaGarden/scripts.pory"
	.string "I'm taking care of the Miltanks! They\n"
	.string "give us Moomoo Milk every day!$"
