LehtiTown_MapScripts::
	.byte 0


LehtiTownTechnologyGuy::
	msgbox LehtiTownTechnologyGuy_Text_0, MSGBOX_NPC
	end


LehtiTownSign::
	msgbox LehtiTownSign_Text_0, MSGBOX_SIGN
	return


LehtiTownGirl::
	msgbox LehtiTownGirl_Text_0, MSGBOX_NPC
	return


LehtiTownOldWoman::
	msgbox LehtiTownOldWoman_Text_0, MSGBOX_NPC
	return


LehtiTownFisherman::
	msgbox LehtiTownFisherman_Text_0, MSGBOX_NPC
	return


LehtiTownPlayerMailbox::
	msgbox LehtiTownPlayerMailbox_Text_0, MSGBOX_SIGN
	return


LehtiTownLabSign::
	lock
	msgbox LehtiTownLabSign_Text_0, MSGBOX_DEFAULT
	msgbox LehtiTownLabSign_Text_1, MSGBOX_DEFAULT
	release
	end


LehtiTownLabMailbox::
	msgbox LehtiTownLabMailbox_Text_0, MSGBOX_SIGN
	return


LehtiTownRailwaySign::
	msgbox LehtiTownRailwaySign_Text_0, MSGBOX_SIGN
	return


birchDuringStarterPick::
	msgbox birchDuringStarterPick_Text_0, MSGBOX_NPC
	end


birchNoticesPlayer::
	lock
	playse SE_PIN
	applymovement 1, birchNoticesPlayer_Movement_0
	waitmovement 0
	msgbox birchNoticesPlayer_Text_0
	closemessage
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	switch VAR_TEMP_3
	case 12, birchNoticesPlayer_3
	case 13, birchNoticesPlayer_4
	case 14, birchNoticesPlayer_5
	applymovement LOCALID_PLAYER, birchNoticesPlayer_Movement_2
birchNoticesPlayer_1:
	waitmovement 0
	msgbox birchNoticesPlayer_Text_1
	msgbox birchNoticesPlayer_Text_2
	closemessage
	applymovement 1, birchNoticesPlayer_Movement_4
	applymovement LOCALID_PLAYER, birchNoticesPlayer_Movement_5
	waitmovement 0
	setvar VAR_PICKING_STARTER, 1
	applymovement 7, birchNoticesPlayer_Movement_6
	applymovement 8, birchNoticesPlayer_Movement_6
	applymovement 9, birchNoticesPlayer_Movement_6
	waitmovement 9
	msgbox birchNoticesPlayer_Text_3
	msgbox birchNoticesPlayer_Text_4
	release
	end

birchNoticesPlayer_3:
	applymovement LOCALID_PLAYER, birchNoticesPlayer_Movement_1
	goto birchNoticesPlayer_1

birchNoticesPlayer_4:
	applymovement LOCALID_PLAYER, birchNoticesPlayer_Movement_2
	goto birchNoticesPlayer_1

birchNoticesPlayer_5:
	applymovement LOCALID_PLAYER, birchNoticesPlayer_Movement_3
	goto birchNoticesPlayer_1


whereAreYouGoing::
	lockall
	msgbox whereAreYouGoing_Text_0
	closemessage
	applymovement LOCALID_PLAYER, whereAreYouGoing_Movement_0
	waitmovement 0
	releaseall
	end


starterChespin::
	lock
	faceplayer
	showmonpic SPECIES_CHESPIN, 10, 3
	playmoncry SPECIES_CHESPIN, CRY_MODE_NORMAL
	waitmoncry
	msgbox starterChespin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq starterChespin_2
	hidemonpic
	msgbox starterChespin_Text_1
	release
	end

starterChespin_2:
	hidemonpic
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
	givemon SPECIES_CHESPIN, 5
	removeobject 7
	call obtainedStarter
	updatefollowingmon
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 19, 26
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
	waitmovement 0
	release
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq starterChespin_6
starterChespin_5:
	setvar VAR_STARTER_MON, 0
	call birchCommonEndSpeech
	call removeBirchandStarters
	release
	end

starterChespin_6:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto starterChespin_5


starterFennekin::
	lock
	faceplayer
	showmonpic SPECIES_FENNEKIN, 10, 3
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
	waitmoncry
	msgbox starterFennekin_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq starterFennekin_2
	hidemonpic
	msgbox starterChespin_Text_1
	release
	end

starterFennekin_2:
	hidemonpic
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
	givemon SPECIES_FENNEKIN, 5
	removeobject 8
	call obtainedStarter
	updatefollowingmon
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 20, 26
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
	waitmovement 0
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq starterFennekin_6
starterFennekin_5:
	setvar VAR_STARTER_MON, 1
	call birchCommonEndSpeech
	call removeBirchandStarters
	release
	end

starterFennekin_6:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto starterFennekin_5


starterFroakie::
	lock
	faceplayer
	showmonpic SPECIES_FROAKIE, 10, 3
	playmoncry SPECIES_FROAKIE, CRY_MODE_NORMAL
	waitmoncry
	msgbox starterFroakie_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq starterFroakie_2
	hidemonpic
	msgbox starterChespin_Text_1
	release
	end

starterFroakie_2:
	hidemonpic
	bufferspeciesname STR_VAR_1, SPECIES_FROAKIE
	givemon SPECIES_FROAKIE, 5
	removeobject 9
	call obtainedStarter
	updatefollowingmon
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 21, 26
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
	waitmovement 0
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq starterFroakie_6
starterFroakie_5:
	setvar VAR_STARTER_MON, 2
	call birchCommonEndSpeech
	call removeBirchandStarters
	release
	end

starterFroakie_6:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto starterFroakie_5


obtainedStarter::
	playfanfare MUS_HG_EVOLVED
	msgbox obtainedStarter_Text_0
	setvar VAR_PICKING_STARTER, 2
	waitmessage
	waitfanfare
	return


birchCommonEndSpeech::
	setvar VAR_LEHTI_TOWN_STATE, 1
	setflag FLAG_SYS_POKEMON_GET
	applymovement 1, birchCommonEndSpeech_Movement_0
	compare VAR_STARTER_MON, 0
	goto_if_eq birchCommonEndSpeech_2
	compare VAR_STARTER_MON, 1
	goto_if_eq birchCommonEndSpeech_3
	applymovement 7, birchCommonEndSpeech_Movement_1
	playse SE_BALL
	waitse
	waitmovement 0
	applymovement 8, birchCommonEndSpeech_Movement_1
	playse SE_BALL
	waitse
	waitmovement 0
birchCommonEndSpeech_1:
	msgbox birchCommonEndSpeech_Text_0
	msgbox birchCommonEndSpeech_Text_1
	msgbox birchCommonEndSpeech_Text_2
	closemessage
	return

birchCommonEndSpeech_2:
	applymovement 8, birchCommonEndSpeech_Movement_1
	playse SE_BALL
	waitse
	waitmovement 0
	applymovement 9, birchCommonEndSpeech_Movement_1
	playse SE_BALL
	waitse
	waitmovement 0
	goto birchCommonEndSpeech_1

birchCommonEndSpeech_3:
	applymovement 7, birchCommonEndSpeech_Movement_1
	playse SE_BALL
	waitse
	waitmovement 0
	applymovement 9, birchCommonEndSpeech_Movement_1
	playse SE_BALL
	waitse
	waitmovement 0
	goto birchCommonEndSpeech_1


removeBirchandStarters::
	applymovement 1, removeBirchandStarters_Movement_0
	waitmovement 0
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 1
	setflag FLAG_HIDE_AFTER_STARTER
	return


birchNoticesPlayer_Movement_0:
	face_left
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	step_end

birchNoticesPlayer_Movement_1:
	walk_right
	walk_down
	walk_right
	step_end

birchNoticesPlayer_Movement_2:
	walk_right
	walk_right
	step_end

birchNoticesPlayer_Movement_3:
	walk_right
	walk_up
	walk_right
	step_end

birchNoticesPlayer_Movement_4:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	face_down
	step_end

birchNoticesPlayer_Movement_5:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

birchNoticesPlayer_Movement_6:
	face_up
	step_end

whereAreYouGoing_Movement_0:
	walk_down
	step_end

starterChespin_Movement_0:
	exit_pokeball
	set_visible
	face_player
	step_end

birchCommonEndSpeech_Movement_0:
	face_down
	step_end

birchCommonEndSpeech_Movement_1:
	enter_pokeball
	set_invisible
	step_end

removeBirchandStarters_Movement_0:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	set_invisible
	step_end

LehtiTownTechnologyGuy_Text_0:
	.string "Technology is amazing! You can trade\n"
	.string "with people all around the world!$"

LehtiTownSign_Text_0:
	.string "Lehti Town, where peaceful winds blow.$"

LehtiTownGirl_Text_0:
	.string "Wow you got a Pokémon?! I'm so jealous!$"

LehtiTownOldWoman_Text_0:
	.string "Life out here is quite peaceful, don't\n"
	.string "you think? The hustle of city can be\l"
	.string "quite taxing at my age.$"

LehtiTownFisherman_Text_0:
	.string "Sometimes I wonder what's above the\n"
	.string "waterfall of the village. It would take\l"
	.string "an experienced trainer to get up there.$"

LehtiTownPlayerMailbox_Text_0:
	.string "{PLAYER}'s house$"

LehtiTownLabSign_Text_0:
	.string "Prof. Birch's Laboratory$"

LehtiTownLabSign_Text_1:
	.string "...Someone has scribbled a '2.0' with a\n"
	.string "marker pen below the text.$"

LehtiTownLabMailbox_Text_0:
	.string "Prof. Birch's mailbox, it seems to be full\n"
	.string "of mail...$"

LehtiTownRailwaySign_Text_0:
	.string "Underground Subway project of Hoenn\n"
	.string "has started!$"

birchDuringStarterPick_Text_0:
	.string "Don't think too hard about it, just go\n"
	.string "with the choice your heart tells you.$"

birchNoticesPlayer_Text_0:
	.string "Ah, there you are, {PLAYER}!$"

birchNoticesPlayer_Text_1:
	.string "Are you ready? It's a big day for you!\n"
	.string "Today you will receive your very own\l"
	.string "Pokémon and begin your adventure!$"

birchNoticesPlayer_Text_2:
	.string "I have prepared some rare species to\n"
	.string "choose from. Let's go see them right\l"
	.string "away!$"

birchNoticesPlayer_Text_3:
	.string "These little ones come all the way from\n"
	.string "Kalos region. You won't find many with\l"
	.string "these Pokémon around these parts.$"

birchNoticesPlayer_Text_4:
	.string "So {PLAYER}, which one would you like\n"
	.string "to pick? Take as long as you need, this\l"
	.string "is a monumental step in your journey.$"

whereAreYouGoing_Text_0:
	.string "Where are you going? You haven't picked\n"
	.string "your starter Pokémon yet!$"

starterChespin_Text_0:
	.string "That's the Grass-type Pokémon,\n"
	.string "Chespin. Is that the one you want?$"

starterChespin_Text_1:
	.string "Take your time. It's an important\n"
	.string "decision.$"

starterFennekin_Text_0:
	.string "That's the Fire-type Pokémon, Fennekin.\n"
	.string "Is that the one you want?$"

starterFroakie_Text_0:
	.string "That's the Water-type Pokémon,\n"
	.string "Froakie. Is that the one you want?$"

obtainedStarter_Text_0:
	.string "{PLAYER} received the {STR_VAR_1}\nfrom Prof. Birch!$"

birchCommonEndSpeech_Text_0:
	.string "You two will get along well. Why not take\n"
	.string "a trip to Route 103? You can get there\l"
	.string "by heading west until you reach Oldale\l"
	.string "Town. After that head north.$"

birchCommonEndSpeech_Text_1:
	.string "If you run into my assistant, tell them\n"
	.string "to swing by the lab later, I've got to\l"
	.string "get back to dealing with all the\l"
	.string "paperwork this job comes with.$"

birchCommonEndSpeech_Text_2:
	.string "Oh, and don't forget to show\n"
	.string "{STR_VAR_1} to your mom!$"
