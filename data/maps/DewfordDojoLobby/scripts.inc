DewfordDojoLobby_MapScripts::
	.byte 0


megaKickTrainer::
# 4 "data/maps/DewfordDojoLobby/scripts.pory"
	lock
# 5 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox megaKickTrainer_Text_0
# 6 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end


megaPunchTrainer::
# 11 "data/maps/DewfordDojoLobby/scripts.pory"
	lock
# 12 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox megaPunchTrainer_Text_0
# 13 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end


DojoTourist::
# 18 "data/maps/DewfordDojoLobby/scripts.pory"
	lock
# 19 "data/maps/DewfordDojoLobby/scripts.pory"
	faceplayer
# 20 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox DojoTourist_Text_0
# 21 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end


DojoTrainee::
# 26 "data/maps/DewfordDojoLobby/scripts.pory"
	lock
# 27 "data/maps/DewfordDojoLobby/scripts.pory"
	faceplayer
# 28 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox DojoTrainee_Text_0
# 29 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end


DojoTeacher::
# 34 "data/maps/DewfordDojoLobby/scripts.pory"
	lock
# 35 "data/maps/DewfordDojoLobby/scripts.pory"
	faceplayer
# 36 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox DojoTeacher_Text_0
# 37 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end


dojoKubfu::
# 42 "data/maps/DewfordDojoLobby/scripts.pory"
	bufferspeciesname 0, SPECIES_KUBFU
# 43 "data/maps/DewfordDojoLobby/scripts.pory"
	lock
# 44 "data/maps/DewfordDojoLobby/scripts.pory"
	faceplayer
# 45 "data/maps/DewfordDojoLobby/scripts.pory"
	playmoncry SPECIES_KUBFU, CRY_MODE_NORMAL
# 46 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox dojoKubfu_Text_0
# 47 "data/maps/DewfordDojoLobby/scripts.pory"
	waitmoncry
# 48 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end


dojoKubfuGentleman::
# 53 "data/maps/DewfordDojoLobby/scripts.pory"
	lock
# 54 "data/maps/DewfordDojoLobby/scripts.pory"
	faceplayer
# 55 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox dojoKubfuGentleman_Text_0
# 56 "data/maps/DewfordDojoLobby/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, dojoKubfuGentleman_2
# 96 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox dojoKubfuGentleman_Text_6
# 97 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end

dojoKubfuGentleman_2:
# 57 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox dojoKubfuGentleman_Text_1, MSGBOX_YESNO
# 58 "data/maps/DewfordDojoLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq dojoKubfuGentleman_4
# 91 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox dojoKubfuGentleman_Text_5
# 92 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end

dojoKubfuGentleman_4:
# 59 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox dojoKubfuGentleman_Text_2
# 60 "data/maps/DewfordDojoLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 61 "data/maps/DewfordDojoLobby/scripts.pory"
	givemon SPECIES_KUBFU, 5, ITEM_NONE, ITEM_CHERISH_BALL
# 62 "data/maps/DewfordDojoLobby/scripts.pory"
	removeobject 7
# 63 "data/maps/DewfordDojoLobby/scripts.pory"
	showmonpic SPECIES_KUBFU, 10, 3
# 64 "data/maps/DewfordDojoLobby/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KUBFU
# 65 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox dojoKubfuGentleman_Text_3
# 66 "data/maps/DewfordDojoLobby/scripts.pory"
	waitfanfare
# 67 "data/maps/DewfordDojoLobby/scripts.pory"
	waitmessage
# 68 "data/maps/DewfordDojoLobby/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq dojoKubfuGentleman_8
# 76 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 77 "data/maps/DewfordDojoLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq dojoKubfuGentleman_13
dojoKubfuGentleman_7:
# 81 "data/maps/DewfordDojoLobby/scripts.pory"
	hidemonpic
# 82 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox dojoKubfuGentleman_Text_4
# 83 "data/maps/DewfordDojoLobby/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 84 "data/maps/DewfordDojoLobby/scripts.pory"
	closemessage
# 85 "data/maps/DewfordDojoLobby/scripts.pory"
	removeobject 6
# 86 "data/maps/DewfordDojoLobby/scripts.pory"
	delay 50
# 87 "data/maps/DewfordDojoLobby/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 88 "data/maps/DewfordDojoLobby/scripts.pory"
	release
	end

dojoKubfuGentleman_8:
# 69 "data/maps/DewfordDojoLobby/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 70 "data/maps/DewfordDojoLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq dojoKubfuGentleman_11
	goto dojoKubfuGentleman_7

dojoKubfuGentleman_11:
# 71 "data/maps/DewfordDojoLobby/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 72 "data/maps/DewfordDojoLobby/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto dojoKubfuGentleman_7

dojoKubfuGentleman_13:
# 78 "data/maps/DewfordDojoLobby/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto dojoKubfuGentleman_7


megaKickTrainer_Text_0:
# 5 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "No no, you don't get it, Mega Punch is\n"
	.string "the superior move!$"

megaPunchTrainer_Text_0:
# 12 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "Fool! Everyone knows Mega Kick is the\n"
	.string "true path to power!$"

DojoTourist_Text_0:
# 20 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "The doors behind me lead to training\n"
	.string "room and battle arena. I hear the arena\l"
	.string "is still under construction though.$"

DojoTrainee_Text_0:
# 28 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "If you want to grow stronger, you\n"
	.string "should visit the training room.$"

DojoTeacher_Text_0:
# 36 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "Ahead is the practice room for\n"
	.string "students, take care not to disturb\l"
	.string "them.$"

dojoKubfu_Text_0:
# 46 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "Kub?$"

dojoKubfuGentleman_Text_0:
# 55 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "I came here looking for someone strong\n"
	.string "enough to take care of my Kubfu. I am\l"
	.string "not capable of giving it the training it\l"
	.string "requires, such lifestyle is past me now.$"

dojoKubfuGentleman_Text_1:
# 57 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "You! You have the badge from Brawly\n"
	.string "don't you?! Please, take Kubfu and show\l"
	.string "it the world. Surely a trainer of your\l"
	.string "caliber is capable of giving it the\l"
	.string "training it needs?$"

dojoKubfuGentleman_Text_2:
# 59 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "Thank you! Please take good care of\n"
	.string "Kubfu!$"

dojoKubfuGentleman_Text_3:
# 65 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from the gentleman!$"

dojoKubfuGentleman_Text_4:
# 82 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "Take care now.$"

dojoKubfuGentleman_Text_5:
# 91 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "Oh... I guess you are too busy for such\n"
	.string "Pokémon...$"

dojoKubfuGentleman_Text_6:
# 96 "data/maps/DewfordDojoLobby/scripts.pory"
	.string "Nobody here seems to have the\n"
	.string "experience it takes... Perhaps we will\l"
	.string "wait until someone of high caliber\l"
	.string "arrives...$"
