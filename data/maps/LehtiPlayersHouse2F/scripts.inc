LehtiPlayersHouse2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LehtiPlayersHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LehtiPlayersHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LEHTI_TOWN_STATE, 0, LehtiTown_MomFirstNotice
	.2byte 0


LehtiTown_MomFirstNotice::
	goto_if_unset FLAG_MOM_INTRO_DONE, LehtiTown_MomFirstNotice_2
	end

LehtiTown_MomFirstNotice_2:
	lock
	applymovement 1, LehtiTown_MomFirstNotice_Movement_0
	playse SE_PIN
	waitmovement 0
	applymovement 1, LehtiTown_MomFirstNotice_Movement_1
	waitmovement 0
	applymovement LOCALID_PLAYER, LehtiTown_MomFirstNotice_Movement_2
	waitmovement 0
	msgbox LehtiTown_MomFirstNotice_Text_0
	msgbox LehtiTown_MomFirstNotice_Text_1
	msgbox LehtiTown_MomFirstNotice_Text_2
	msgbox LehtiTown_MomFirstNotice_Text_3
	setflag FLAG_SYS_B_DASH
	playfanfare MUS_OBTAIN_ITEM
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
	waitfanfare
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox LehtiTown_MomFirstNotice_Text_4
	setflag FLAG_MOM_INTRO_DONE
	closemessage
	applymovement 1, LehtiTown_MomFirstNotice_Movement_3
	waitmovement 0
	release
	end


LehtiTown_Mom::
	lock
	faceplayer
	goto_if_unset FLAG_SHOWN_STARTER_TO_MOM, LehtiTown_Mom_2
	msgbox LehtiTown_Mom_Text_4
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox LehtiTown_Mom_Text_5
	release
	end

LehtiTown_Mom_2:
	msgbox LehtiTown_Mom_Text_0
	msgbox LehtiTown_Mom_Text_1
	giveitem ITEM_POTION
	msgbox LehtiTown_Mom_Text_2
	giveitem ITEM_TOWN_MAP
	setflag FLAG_SHOWN_STARTER_TO_MOM
	msgbox LehtiTown_Mom_Text_3
	release
	end


momsTV::
	lock
	random 9
	buffernumberstring STR_VAR_1, VAR_RESULT
	msgbox momsTV_Text_0
	msgbox momsTV_Text_1
	release
	end


momsBreloom::
	lock
	faceplayer
	playmoncry SPECIES_BRELOOM, CRY_MODE_NORMAL
	msgbox momsBreloom_Text_0
	waitmoncry
	applymovement 2, momsBreloom_Movement_0
	waitmovement 0
	msgbox momsBreloom_Text_1
	release
	end


momsFridge::
	msgbox momsFridge_Text_0, MSGBOX_SIGN
	end


LehtiTown_MomFirstNotice_Movement_0:
	emote_exclamation_mark
	step_end

LehtiTown_MomFirstNotice_Movement_1:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

LehtiTown_MomFirstNotice_Movement_2:
	face_down
	step_end

LehtiTown_MomFirstNotice_Movement_3:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	face_up
	step_end

momsBreloom_Movement_0:
	face_original_direction
	step_end

LehtiTown_MomFirstNotice_Text_0:
	.string "Mom: Hi {PLAYER}! Ready for the big\n"
	.string "day? I know you've been waiting for it.$"

LehtiTown_MomFirstNotice_Text_1:
	.string "You know back in the day I was quite a\n"
	.string "trainer and... Well nevermind, we can\l"
	.string "talk about that later.$"

LehtiTown_MomFirstNotice_Text_2:
	.string "Prof. Birch should be outside waiting\n"
	.string "for you.$"

LehtiTown_MomFirstNotice_Text_3:
	.string "But before you go, don't forget these!$"

LehtiTown_MomFirstNotice_Text_4:
	.string "Now, go make your mom proud!$"

LehtiTown_Mom_Text_0:
	.string "Mom: Oh! {PLAYER}! That's a cute\n"
	.string "Pokémon you have.$"

LehtiTown_Mom_Text_1:
	.string "If you're gonna go exploring, you should\n"
	.string "take this.$"

LehtiTown_Mom_Text_2:
	.string "This might be useful too!$"

LehtiTown_Mom_Text_3:
	.string "Remember, you're always welcome to come\n"
	.string "back and rest at home!$"

LehtiTown_Mom_Text_4:
	.string "Mom: You look tired {PLAYER}, you\n"
	.string "should take a rest.$"

LehtiTown_Mom_Text_5:
	.string "Mom: Just do your best sweetie, mom will\n"
	.string "always love you!$"

momsTV_Text_0:
	.string "Mom's favourite show seems to be on.$"

momsTV_Text_1:
	.string "They are currently airing season\n"
	.string "{STR_VAR_1}.$"

momsBreloom_Text_0:
	.string "Breloo!!$"

momsBreloom_Text_1:
	.string "Breloom is happily washing the dishes.$"

momsFridge_Text_0:
	.string "The fridge is full of delicious food!$"
