LehtiPlayersHouse_MapScripts::
# 2 "data/maps/LehtiPlayersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LehtiPlayersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LehtiPlayersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LehtiPlayersHouse/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYERS_HOUSE
	return

