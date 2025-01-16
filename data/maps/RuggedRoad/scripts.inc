RuggedRoad_MapScripts::
	.byte 0


RuggedRoad_Lady::
# 4 "data/maps/RuggedRoad/scripts.pory"
	lock
# 5 "data/maps/RuggedRoad/scripts.pory"
	faceplayer
# 6 "data/maps/RuggedRoad/scripts.pory"
	msgbox RuggedRoad_Lady_Text_0
# 7 "data/maps/RuggedRoad/scripts.pory"
	release
	end


RuggedRoad_BoyRoute102::
# 12 "data/maps/RuggedRoad/scripts.pory"
	lock
# 13 "data/maps/RuggedRoad/scripts.pory"
	faceplayer
# 14 "data/maps/RuggedRoad/scripts.pory"
	msgbox RuggedRoad_BoyRoute102_Text_0
# 15 "data/maps/RuggedRoad/scripts.pory"
	release
	end


RuggedRoadNorthSign::
# 20 "data/maps/RuggedRoad/scripts.pory"
	msgbox RuggedRoadNorthSign_Text_0, MSGBOX_SIGN
	end


RuggedRoadSouthSign::
# 25 "data/maps/RuggedRoad/scripts.pory"
	msgbox RuggedRoadSouthSign_Text_0, MSGBOX_SIGN
	end


RuggedRoadCaveSign::
# 30 "data/maps/RuggedRoad/scripts.pory"
	msgbox RuggedRoadCaveSign_Text_0, MSGBOX_SIGN
	end


trainerSchooldKidRuggedRoad::
# 35 "data/maps/RuggedRoad/scripts.pory"
	trainerbattle_single TRAINER_RUGGED_ROAD_SCHOOLKID, trainerSchooldKidRuggedRoad_Text_0, trainerSchooldKidRuggedRoad_Text_1
# 36 "data/maps/RuggedRoad/scripts.pory"
	msgbox trainerSchooldKidRuggedRoad_Text_2, MSGBOX_AUTOCLOSE
	end


trainerHikerRuggedRoad::
# 41 "data/maps/RuggedRoad/scripts.pory"
	trainerbattle_single TRAINER_RUGGED_ROAD_HIKER, trainerHikerRuggedRoad_Text_0, trainerHikerRuggedRoad_Text_1
# 42 "data/maps/RuggedRoad/scripts.pory"
	msgbox trainerHikerRuggedRoad_Text_2, MSGBOX_AUTOCLOSE
	end


trainerPicnickerRuggedRoad::
# 47 "data/maps/RuggedRoad/scripts.pory"
	trainerbattle_single TRAINER_RUGGED_ROAD_PICNICKER, trainerPicnickerRuggedRoad_Text_0, trainerPicnickerRuggedRoad_Text_1
# 48 "data/maps/RuggedRoad/scripts.pory"
	msgbox trainerPicnickerRuggedRoad_Text_2, MSGBOX_AUTOCLOSE
	end


trainerCamperRuggedRoad::
# 53 "data/maps/RuggedRoad/scripts.pory"
	trainerbattle_single TRAINER_RUGGED_ROAD_CAMPER, trainerCamperRuggedRoad_Text_0, trainerCamperRuggedRoad_Text_1
# 54 "data/maps/RuggedRoad/scripts.pory"
	msgbox trainerCamperRuggedRoad_Text_2, MSGBOX_AUTOCLOSE
	end


RuggedRoad_Lady_Text_0:
# 6 "data/maps/RuggedRoad/scripts.pory"
	.string "This is a shortcut to Route 102, but\n"
	.string "there's no going back once you start\l"
	.string "hopping down the ledges!$"

RuggedRoad_BoyRoute102_Text_0:
# 14 "data/maps/RuggedRoad/scripts.pory"
	.string "I wanted to go meet my friend in the\n"
	.string "Rustboro City, but I guess the only way\l"
	.string "is through the Petalburg Woods.$"

RuggedRoadNorthSign_Text_0:
# 20 "data/maps/RuggedRoad/scripts.pory"
	.string "{DOWN_ARROW} Route 102\n"
	.string "Warning! One way cliffs!$"

RuggedRoadSouthSign_Text_0:
# 25 "data/maps/RuggedRoad/scripts.pory"
	.string "{UP_ARROW} Rugged Road$"

RuggedRoadCaveSign_Text_0:
# 30 "data/maps/RuggedRoad/scripts.pory"
	.string "Rugged Cave, beware of sudden\n"
	.string "temperature changes!$"

trainerSchooldKidRuggedRoad_Text_0:
# 35 "data/maps/RuggedRoad/scripts.pory"
	.string "I'm on my way back to Petalburg, but\n"
	.string "first let me test something I learned in\l"
	.string "school!$"

trainerSchooldKidRuggedRoad_Text_1:
# 35 "data/maps/RuggedRoad/scripts.pory"
	.string "I need to study harder...$"

trainerSchooldKidRuggedRoad_Text_2:
# 36 "data/maps/RuggedRoad/scripts.pory"
	.string "Have you already challenged Roxanne?\n"
	.string "She sometimes visits the trainer school\l"
	.string "to teach us!$"

trainerHikerRuggedRoad_Text_0:
# 41 "data/maps/RuggedRoad/scripts.pory"
	.string "I hear there is a cave around here, did\n"
	.string "you see it?$"

trainerHikerRuggedRoad_Text_1:
# 41 "data/maps/RuggedRoad/scripts.pory"
	.string "I might've missed it...$"

trainerHikerRuggedRoad_Text_2:
# 42 "data/maps/RuggedRoad/scripts.pory"
	.string "I wanted to see if there were any rare\n"
	.string "ice Pokémon inside the Rugged Cave.$"

trainerPicnickerRuggedRoad_Text_0:
# 47 "data/maps/RuggedRoad/scripts.pory"
	.string "Are you perhaps lost?$"

trainerPicnickerRuggedRoad_Text_1:
# 47 "data/maps/RuggedRoad/scripts.pory"
	.string "Right on the track!$"

trainerPicnickerRuggedRoad_Text_2:
# 48 "data/maps/RuggedRoad/scripts.pory"
	.string "I hear people sometimes drop items when\n"
	.string "admiring the flowers here.$"

trainerCamperRuggedRoad_Text_0:
# 53 "data/maps/RuggedRoad/scripts.pory"
	.string "Hey there! Let's have a fun battle to\n"
	.string "break up this trip$"

trainerCamperRuggedRoad_Text_1:
# 53 "data/maps/RuggedRoad/scripts.pory"
	.string "Nothing like a good battle!$"

trainerCamperRuggedRoad_Text_2:
# 54 "data/maps/RuggedRoad/scripts.pory"
	.string "Short camping trips can be very\n"
	.string "refreshing for body and mind!$"
