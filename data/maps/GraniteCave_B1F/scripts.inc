# 1 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 2 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_B1F/scripts.pory"

# 7 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 8 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	end

graniteCaveBrock::
# 15 "data/maps/GraniteCave_B1F/scripts.pory"
	lock
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, graniteCaveBrock_2
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_5
# 32 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
# 33 "data/maps/GraniteCave_B1F/scripts.pory"
	playse SE_PIN
# 34 "data/maps/GraniteCave_B1F/scripts.pory"
	applymovement 2, graniteCaveBrockSurprised
# 35 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmovement 2
# 36 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_6
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
# 38 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_7
# 39 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_8
# 40 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_9, MSGBOX_YESNO
# 41 "data/maps/GraniteCave_B1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq graniteCaveBrock_5
# 50 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_4
# 51 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_TEMP_4
graniteCaveBrock_4:
# 53 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end

graniteCaveBrock_2:
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_0, MSGBOX_YESNO
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq graniteCaveBrock_9
graniteCaveBrock_8:
# 27 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_4
# 28 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end

graniteCaveBrock_5:
# 42 "data/maps/GraniteCave_B1F/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, graniteCaveBrock_12
# 45 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_2
graniteCaveBrock_11:
# 47 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRANITECAVE_BROCK, graniteCaveBrock_Text_3
# 48 "data/maps/GraniteCave_B1F/scripts.pory"
	goto graniteCaveBrockPostBattle
	goto graniteCaveBrock_4

graniteCaveBrock_9:
# 19 "data/maps/GraniteCave_B1F/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, graniteCaveBrock_16
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_2
graniteCaveBrock_15:
# 24 "data/maps/GraniteCave_B1F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRANITECAVE_BROCK, graniteCaveBrock_Text_3
# 25 "data/maps/GraniteCave_B1F/scripts.pory"
	goto graniteCaveBrockPostBattle
	goto graniteCaveBrock_8

graniteCaveBrock_12:
# 43 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_1
	goto graniteCaveBrock_11

graniteCaveBrock_16:
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrock_Text_1
	goto graniteCaveBrock_15


graniteCaveBrockPostBattle::
# 58 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrockPostBattle_Text_0
# 59 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrockPostBattle_Text_1
# 60 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrockPostBattle_Text_2
# 61 "data/maps/GraniteCave_B1F/scripts.pory"
	giveegg SPECIES_GROWLITHE_HISUI
# 62 "data/maps/GraniteCave_B1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq graniteCaveBrockPostBattle_2
# 67 "data/maps/GraniteCave_B1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 68 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrockPostBattle_Text_4
# 69 "data/maps/GraniteCave_B1F/scripts.pory"
	waitfanfare
graniteCaveBrockPostBattle_1:
# 71 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrockPostBattle_Text_5
# 72 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
# 73 "data/maps/GraniteCave_B1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 74 "data/maps/GraniteCave_B1F/scripts.pory"
	closemessage
# 75 "data/maps/GraniteCave_B1F/scripts.pory"
	removeobject 2
# 76 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 60
# 77 "data/maps/GraniteCave_B1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 78 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end

graniteCaveBrockPostBattle_2:
# 63 "data/maps/GraniteCave_B1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 64 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox graniteCaveBrockPostBattle_Text_3
# 65 "data/maps/GraniteCave_B1F/scripts.pory"
	waitfanfare
	goto graniteCaveBrockPostBattle_1


# 82 "data/maps/GraniteCave_B1F/scripts.pory"
graniteCaveBrockSurprised:
# 83 "data/maps/GraniteCave_B1F/scripts.pory"
	emote_exclamation_mark
# 84 "data/maps/GraniteCave_B1F/scripts.pory"
	delay_16
# 85 "data/maps/GraniteCave_B1F/scripts.pory"
	delay_16
# 86 "data/maps/GraniteCave_B1F/scripts.pory"
	delay_16
# 87 "data/maps/GraniteCave_B1F/scripts.pory"
	face_down
# 88 "data/maps/GraniteCave_B1F/scripts.pory"
	step_end

graniteCaveBrock_Text_0:
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Oh hey! Had a change of mind?$"

graniteCaveBrock_Text_1:
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Excelent! Don't worry I won't go all out\n"
	.string "since you're still a rookie.$"

graniteCaveBrock_Text_2:
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Excelent! This should be exciting!$"

graniteCaveBrock_Text_3:
# 24 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Incredible! You will go far!$"

graniteCaveBrock_Text_4:
# 27 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I see, perhaps another time then?$"

graniteCaveBrock_Text_5:
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "???: No signs for fossils here either...$"

graniteCaveBrock_Text_6:
# 36 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Ah, I didn't see you there! My name is\n"
	.string "Brock and I come from Kanto region. I am\l"
	.string "currently excavating the caves in\l"
	.string "Hoenn for fossils.$"

graniteCaveBrock_Text_7:
# 38 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Brock: Unfortunately I've not found\n"
	.string "any yet...$"

graniteCaveBrock_Text_8:
# 39 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Regardless, what are you doing in this\n"
	.string "place? Are you a trainer taking on the\l"
	.string "gyms?$"

graniteCaveBrock_Text_9:
# 40 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "If you don't mind, would you care to\n"
	.string "battle me? I haven't had a chance to\l"
	.string "battle in a while so it would be a great\l"
	.string "workout.$"

graniteCaveBrockPostBattle_Text_0:
# 58 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I am surprised, you are extremely\n"
	.string "skilled for a such a fresh trainer! I\l"
	.string "enjoyed that battle immensely.$"

graniteCaveBrockPostBattle_Text_1:
# 59 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I have to get back to my work now, but I\n"
	.string "hope we meet again. It would be great to\l"
	.string "fight you at full strength once you\l"
	.string "have even more experience.$"

graniteCaveBrockPostBattle_Text_2:
# 60 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Before I go, I would like you to have\n"
	.string "this egg, it is for a very special\l"
	.string "Pokémon that you can't find easily\l"
	.string "anymore.$"

graniteCaveBrockPostBattle_Text_3:
# 64 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "{PLAYER} obtained a mysterious Egg!\n"
	.string "It was sent to PC.$"

graniteCaveBrockPostBattle_Text_4:
# 68 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "{PLAYER} obtained a mysterious Egg!$"

graniteCaveBrockPostBattle_Text_5:
# 71 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "And with that, I bid you farewell.$"
