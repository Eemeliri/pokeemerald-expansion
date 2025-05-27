LehtiPlayersHouse2F_MapScripts::
# 2 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LehtiPlayersHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LehtiPlayersHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	map_script_2 VAR_LEHTI_TOWN_STATE, 0, LehtiTown_MomFirstNotice
	.2byte 0


LehtiTown_MomFirstNotice::
# 9 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	goto_if_unset FLAG_MOM_INTRO_DONE, LehtiTown_MomFirstNotice_2
	end

LehtiTown_MomFirstNotice_2:
# 10 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	lock
# 11 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	applymovement 1, LehtiTown_MomFirstNotice_Movement_0
# 12 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	playse SE_PIN
# 13 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	applymovement 1, LehtiTown_MomFirstNotice_Movement_1
# 16 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	waitmovement 0
# 17 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LehtiTown_MomFirstNotice_Movement_2
# 18 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	waitmovement 0
# 19 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_MomFirstNotice_Text_0
# 20 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_MomFirstNotice_Text_1
# 21 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_MomFirstNotice_Text_2
# 22 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_MomFirstNotice_Text_3
# 23 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 24 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 26 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	waitfanfare
# 27 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 28 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_MomFirstNotice_Text_4
# 29 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	setflag FLAG_MOM_INTRO_DONE
# 30 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	closemessage
# 31 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	applymovement 1, LehtiTown_MomFirstNotice_Movement_3
# 34 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	release
	end


LehtiTown_Mom::
# 42 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	lock
# 43 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	faceplayer
# 44 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	goto_if_unset FLAG_SHOWN_STARTER_TO_MOM, LehtiTown_Mom_2
# 55 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_Mom_Text_4
# 56 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 57 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_Mom_Text_5
# 58 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	release
	end

LehtiTown_Mom_2:
# 45 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_Mom_Text_0
# 46 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_Mom_Text_1
# 47 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	giveitem ITEM_POTION
# 48 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_Mom_Text_2
# 49 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 50 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	setflag FLAG_SHOWN_STARTER_TO_MOM
# 51 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox LehtiTown_Mom_Text_3
# 52 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	release
	end


momsTV::
# 63 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	lock
# 64 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	random 9
# 65 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 66 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox momsTV_Text_0
# 67 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox momsTV_Text_1
# 68 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	release
	end


momsBreloom::
# 73 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	lock
# 74 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	faceplayer
# 75 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	playmoncry SPECIES_BRELOOM, CRY_MODE_NORMAL
# 76 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox momsBreloom_Text_0
# 77 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	waitmoncry
# 78 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	applymovement 2, momsBreloom_Movement_0
# 79 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox momsBreloom_Text_1
# 81 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	release
	end


momsFridge::
# 86 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	msgbox momsFridge_Text_0, MSGBOX_SIGN
	end


# 11 "data/maps/LehtiPlayersHouse2F/scripts.pory"
LehtiTown_MomFirstNotice_Movement_0:
# 11 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 14 "data/maps/LehtiPlayersHouse2F/scripts.pory"
LehtiTown_MomFirstNotice_Movement_1:
# 14 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_left
# 14 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_left
# 14 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_left
# 15 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_up
# 15 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_up
	step_end

# 17 "data/maps/LehtiPlayersHouse2F/scripts.pory"
LehtiTown_MomFirstNotice_Movement_2:
# 17 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	face_down
	step_end

# 31 "data/maps/LehtiPlayersHouse2F/scripts.pory"
LehtiTown_MomFirstNotice_Movement_3:
# 31 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_down
# 31 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_down
# 32 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_right
# 32 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_right
# 32 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	walk_right
# 33 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	face_up
	step_end

# 78 "data/maps/LehtiPlayersHouse2F/scripts.pory"
momsBreloom_Movement_0:
# 78 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	face_original_direction
	step_end

LehtiTown_MomFirstNotice_Text_0:
# 19 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Mom: Hi {PLAYER}! Ready for the big\n"
	.string "day? I know you've been waiting for it.$"

LehtiTown_MomFirstNotice_Text_1:
# 20 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "You know back in the day I was quite a\n"
	.string "trainer and... Well nevermind, we can\l"
	.string "talk about that later.$"

LehtiTown_MomFirstNotice_Text_2:
# 21 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Prof. Birch should be outside waiting\n"
	.string "for you.$"

LehtiTown_MomFirstNotice_Text_3:
# 22 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "But before you go, don't forget these!$"

LehtiTown_MomFirstNotice_Text_4:
# 28 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Now, go make your mom proud!$"

LehtiTown_Mom_Text_0:
# 45 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Mom: Oh! {PLAYER}! That's a cute\n"
	.string "Pokémon you have.$"

LehtiTown_Mom_Text_1:
# 46 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "If you're gonna go exploring, you should\n"
	.string "take this.$"

LehtiTown_Mom_Text_2:
# 48 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "This might be useful too!$"

LehtiTown_Mom_Text_3:
# 51 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Remember, you're always welcome to come\n"
	.string "back and rest at home!$"

LehtiTown_Mom_Text_4:
# 55 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Mom: You look tired {PLAYER}, you\n"
	.string "should take a rest.$"

LehtiTown_Mom_Text_5:
# 57 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Mom: Just do your best sweetie, mom will\n"
	.string "always love you!$"

momsTV_Text_0:
# 66 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Mom's favourite show seems to be on.$"

momsTV_Text_1:
# 67 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "They are currently airing season\n"
	.string "{STR_VAR_1}.$"

momsBreloom_Text_0:
# 76 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Breloo!!$"

momsBreloom_Text_1:
# 80 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "Breloom is happily washing the dishes.$"

momsFridge_Text_0:
# 86 "data/maps/LehtiPlayersHouse2F/scripts.pory"
	.string "The fridge is full of delicious food!$"
