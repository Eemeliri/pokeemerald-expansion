DewfordDojoRematchRoom_MapScripts::
	.byte 0


DewfordDojoBrawlyNPC::
	lock
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 12
	goto_if_eq DewfordDojoBrawlyNPC_2
	applymovement LOCALID_PLAYER, playerwalkstoBrawlyfromLeft
DewfordDojoBrawlyNPC_1:
	waitmovement LOCALID_PLAYER
	msgbox DewfordDojoBrawlyNPC_Text_0
	msgbox DewfordDojoBrawlyNPC_Text_1
	playse SE_PIN
	applymovement 4, chuckSurprised
	applymovement 1, brawlySurprised
	waitmovement 1
	waitse
	msgbox DewfordDojoBrawlyNPC_Text_2
	msgbox DewfordDojoBrawlyNPC_Text_3
	applymovement 1, brawlyFarewellsChuck
	waitmovement 1
	msgbox DewfordDojoBrawlyNPC_Text_4
	applymovement 1, brawlyFarewellsChuck2
	msgbox DewfordDojoBrawlyNPC_Text_5
	applymovement LOCALID_PLAYER, playerDodgesBrawly
	waitmovement LOCALID_PLAYER
	applymovement 1, brawlyLeaves
	waitmovement 1
	playse SE_EXIT
	removeobject 1
	applymovement 4, chucktakesOneStepDown
	waitmovement 4
	msgbox DewfordDojoBrawlyNPC_Text_6
	msgbox DewfordDojoBrawlyNPC_Text_7
	waitmessage
	applymovement 4, chuckLeaves
	waitmovement 4
	playse SE_EXIT
	removeobject 4
	addvar VAR_DEWFORD_TOWN_STATE, 1
	release
	end

DewfordDojoBrawlyNPC_2:
	applymovement LOCALID_PLAYER, playerwalkstoBrawlyfromRight
	goto DewfordDojoBrawlyNPC_1


DewfordDojoRematchRoomBlackbelt::
	lock
	faceplayer
	msgbox DewfordDojoRematchRoomBlackbelt_Text_0
	release
	end


DewfordDojoRematchRoomGirl::
	lock
	faceplayer
	msgbox DewfordDojoRematchRoomGirl_Text_0
	release
	end


DewfordDojoRematchRoomMankey::
	bufferspeciesname 0, SPECIES_MANKEY
	return


playerwalkstoBrawlyfromLeft:
	walk_up
	walk_up
	walk_right
	face_up
	step_end

playerwalkstoBrawlyfromRight:
	walk_up
	walk_up
	step_end

chuckSurprised:
	face_down
	emote_exclamation_mark
	step_end

brawlySurprised:
	face_down
	emote_exclamation_mark
	step_end

brawlyFarewellsChuck:
	face_left
	step_end

brawlyFarewellsChuck2:
	face_down
	step_end

playerDodgesBrawly:
	walk_right
	face_left
	step_end

brawlyLeaves:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

chucktakesOneStepDown:
	walk_down
	face_right
	step_end

chuckLeaves:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

DewfordDojoBrawlyNPC_Text_0:
	.string "Brawly: I did not expect you to come\n"
	.string "here all the way from Johto, Chuck.$"

DewfordDojoBrawlyNPC_Text_1:
	.string "Chuck: When I heard what you folks\n"
	.string "have been setting up, I couldn't just\l"
	.string "sit still, you know I'm always raring for\l"
	.string "a good match!$"

DewfordDojoBrawlyNPC_Text_2:
	.string "Brawly: Hmm? Are you a trainer? Sorry\n"
	.string "but the arena is not open yet.$"

DewfordDojoBrawlyNPC_Text_3:
	.string "A gym challenge? I'm sorry I did not\n"
	.string "realize I had been here for so long.$"

DewfordDojoBrawlyNPC_Text_4:
	.string "We'll continue this later old friend.$"

DewfordDojoBrawlyNPC_Text_5:
	.string "I'll return to the gym now. Feel free to\n"
	.string "use the dojo's training facility in the\l"
	.string "nearby room if you feel unprepared.$"

DewfordDojoBrawlyNPC_Text_6:
	.string "Chuck: ...$"

DewfordDojoBrawlyNPC_Text_7:
	.string "I sense some potential in you kid, make\n"
	.string "sure to give Brawly a good beating so he\l"
	.string "doesn't get too full of himself.\l"
	.string "Wahhahha!$"

DewfordDojoRematchRoomBlackbelt_Text_0:
	.string "We're still setting things up, so you\n"
	.string "should come back later if you want to\l"
	.string "participate.$"

DewfordDojoRematchRoomGirl_Text_0:
	.string "We're planning to host a tournament and\n"
	.string "invite gym leaders to come showcase\l"
	.string "their skills! It will be amazing!$"
