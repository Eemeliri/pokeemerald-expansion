DewfordDojoRematchRoom_MapScripts::
	.byte 0


DewfordDojoBrawlyNPC::
# 4 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	lock
# 5 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 6 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	compare VAR_TEMP_0, 12
	goto_if_eq DewfordDojoBrawlyNPC_2
# 9 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerwalkstoBrawlyfromLeft
DewfordDojoBrawlyNPC_1:
# 11 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 12 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoBrawlyNPC_Text_0
# 13 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoBrawlyNPC_Text_1
# 14 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	playse SE_PIN
# 15 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement 4, chuckSurprised
# 16 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement 1, brawlySurprised
# 17 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitmovement 1
# 18 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitse
# 19 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoBrawlyNPC_Text_2
# 20 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoBrawlyNPC_Text_3
# 21 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement 1, brawlyFarewellsChuck
# 22 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitmovement 1
# 23 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoBrawlyNPC_Text_4
# 24 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement 1, brawlyFarewellsChuck2
# 25 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoBrawlyNPC_Text_5
# 26 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerDodgesBrawly
# 27 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 28 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement 1, brawlyLeaves
# 29 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitmovement 1
# 30 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	playse SE_EXIT
# 31 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	removeobject 1
# 32 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement 4, chucktakesOneStepDown
# 33 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitmovement 4
# 34 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoBrawlyNPC_Text_6
# 35 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoBrawlyNPC_Text_7
# 36 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitmessage
# 37 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement 4, chuckLeaves
# 38 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	waitmovement 4
# 39 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	playse SE_EXIT
# 40 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	removeobject 4
# 41 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	addvar VAR_DEWFORD_TOWN_STATE, 1
# 42 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	release
	end

DewfordDojoBrawlyNPC_2:
# 7 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerwalkstoBrawlyfromRight
	goto DewfordDojoBrawlyNPC_1


DewfordDojoRematchRoomBlackbelt::
# 47 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	lock
# 48 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	faceplayer
# 49 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoRematchRoomBlackbelt_Text_0
# 50 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	release
	end


DewfordDojoRematchRoomGirl::
# 55 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	lock
# 56 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	faceplayer
# 57 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	msgbox DewfordDojoRematchRoomGirl_Text_0
# 58 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	release
	end


DewfordDojoRematchRoomMankey::
# 63 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	bufferspeciesname 0, SPECIES_MANKEY
	return


# 66 "data/maps/DewfordDojoRematchRoom/scripts.pory"
playerwalkstoBrawlyfromLeft:
# 67 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_up
# 67 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_up
# 68 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_right
# 69 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	face_up
# 70 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 73 "data/maps/DewfordDojoRematchRoom/scripts.pory"
playerwalkstoBrawlyfromRight:
# 74 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_up
# 74 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_up
# 75 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 78 "data/maps/DewfordDojoRematchRoom/scripts.pory"
chuckSurprised:
# 79 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	face_down
# 80 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	emote_exclamation_mark
# 81 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 84 "data/maps/DewfordDojoRematchRoom/scripts.pory"
brawlySurprised:
# 85 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	face_down
# 86 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	emote_exclamation_mark
# 87 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 90 "data/maps/DewfordDojoRematchRoom/scripts.pory"
brawlyFarewellsChuck:
# 91 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	face_left
# 92 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 95 "data/maps/DewfordDojoRematchRoom/scripts.pory"
brawlyFarewellsChuck2:
# 96 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	face_down
# 97 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 100 "data/maps/DewfordDojoRematchRoom/scripts.pory"
playerDodgesBrawly:
# 101 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_right
# 102 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	face_left
# 103 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 106 "data/maps/DewfordDojoRematchRoom/scripts.pory"
brawlyLeaves:
# 107 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 107 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 107 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 107 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 107 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 107 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 108 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 111 "data/maps/DewfordDojoRematchRoom/scripts.pory"
chucktakesOneStepDown:
# 112 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 113 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	face_right
# 114 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

# 117 "data/maps/DewfordDojoRematchRoom/scripts.pory"
chuckLeaves:
# 118 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 118 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 118 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 118 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 118 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	walk_down
# 119 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	step_end

DewfordDojoBrawlyNPC_Text_0:
# 12 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "Brawly: I did not expect you to come\n"
	.string "here all the way from Johto, Chuck.$"

DewfordDojoBrawlyNPC_Text_1:
# 13 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "Chuck: When I heard what you folks\n"
	.string "have been setting up, I couldn't just\l"
	.string "sit still, you know I'm always raring for\l"
	.string "a good match!$"

DewfordDojoBrawlyNPC_Text_2:
# 19 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "Brawly: Hmm? Are you a trainer? Sorry\n"
	.string "but the arena is not open yet.$"

DewfordDojoBrawlyNPC_Text_3:
# 20 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "A gym challenge? I'm sorry I did not\n"
	.string "realize I had been here for so long.$"

DewfordDojoBrawlyNPC_Text_4:
# 23 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "We'll continue this later old friend.$"

DewfordDojoBrawlyNPC_Text_5:
# 25 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "I'll return to the gym now. Feel free to\n"
	.string "use the dojo's training facility in the\l"
	.string "nearby room if you feel unprepared.$"

DewfordDojoBrawlyNPC_Text_6:
# 34 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "Chuck: ...$"

DewfordDojoBrawlyNPC_Text_7:
# 35 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "I sense some potential in you kid, make\n"
	.string "sure to give Brawly a good beating so he\l"
	.string "doesn't get too full of himself.\l"
	.string "Wahhahha!$"

DewfordDojoRematchRoomBlackbelt_Text_0:
# 49 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "We're still setting things up, so you\n"
	.string "should come back later if you want to\l"
	.string "participate.$"

DewfordDojoRematchRoomGirl_Text_0:
# 57 "data/maps/DewfordDojoRematchRoom/scripts.pory"
	.string "We're planning to host a tournament and\n"
	.string "invite gym leaders to come showcase\l"
	.string "their skills! It will be amazing!$"
