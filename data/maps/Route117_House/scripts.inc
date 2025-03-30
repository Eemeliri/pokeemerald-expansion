# 1 "data/maps/Route117_House/scripts.pory"

# 2 "data/maps/Route117_House/scripts.pory"
Route117_House_MapScripts::
# 3 "data/maps/Route117_House/scripts.pory"
	.byte 0

Erika_Route117_PostBattle::
# 6 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_PostBattle_Text_0
# 7 "data/maps/Route117_House/scripts.pory"
	waitmessage
# 8 "data/maps/Route117_House/scripts.pory"
	playmoncry SPECIES_VILEPLUME, CRY_MODE_NORMAL
# 9 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_PostBattle_Text_1, MSGBOX_DEFAULT
# 10 "data/maps/Route117_House/scripts.pory"
	waitmoncry
# 11 "data/maps/Route117_House/scripts.pory"
	waitmessage
# 12 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_PostBattle_Text_2
# 13 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_PostBattle_Text_3
# 14 "data/maps/Route117_House/scripts.pory"
	giveitem ITEM_SYRUPY_APPLE, 1
# 15 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_PostBattle_Text_4
# 16 "data/maps/Route117_House/scripts.pory"
	waitmessage
# 17 "data/maps/Route117_House/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 18 "data/maps/Route117_House/scripts.pory"
	closemessage
# 19 "data/maps/Route117_House/scripts.pory"
	removeobject 1
# 20 "data/maps/Route117_House/scripts.pory"
	removeobject 2
# 21 "data/maps/Route117_House/scripts.pory"
	delay 60
# 22 "data/maps/Route117_House/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 23 "data/maps/Route117_House/scripts.pory"
	release
	end


Erika_Route117_YesNo::
# 28 "data/maps/Route117_House/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/Route117_House/scripts.pory"
	case YES, Erika_Route117_YesNo_3
# 34 "data/maps/Route117_House/scripts.pory"
	case NO, Erika_Route117_YesNo_4
Erika_Route117_YesNo_1:
# 38 "data/maps/Route117_House/scripts.pory"
	release
	end

Erika_Route117_YesNo_3:
# 30 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_YesNo_Text_0
# 31 "data/maps/Route117_House/scripts.pory"
	waitmessage
# 32 "data/maps/Route117_House/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE117_ERIKA, Erika_Route117_YesNo_Text_1
# 33 "data/maps/Route117_House/scripts.pory"
	goto Erika_Route117_PostBattle
	goto Erika_Route117_YesNo_1

Erika_Route117_YesNo_4:
# 35 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_YesNo_Text_2
	goto Erika_Route117_YesNo_1


Erika_Route117::
# 43 "data/maps/Route117_House/scripts.pory"
	lock
# 44 "data/maps/Route117_House/scripts.pory"
	faceplayer
# 45 "data/maps/Route117_House/scripts.pory"
	goto_if_set FLAG_TEMP_1, Erika_Route117_1
# 49 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_Text_1
# 50 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_Text_2
# 51 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_Text_3
# 52 "data/maps/Route117_House/scripts.pory"
	goto_if_set FLAG_GRANITECAVE_BROCK, Erika_Route117_5
Erika_Route117_4:
# 55 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_Text_5, MSGBOX_YESNO
# 56 "data/maps/Route117_House/scripts.pory"
	setflag FLAG_TEMP_1
# 57 "data/maps/Route117_House/scripts.pory"
	goto Erika_Route117_YesNo
	return

Erika_Route117_1:
# 46 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_Text_0, MSGBOX_YESNO
# 47 "data/maps/Route117_House/scripts.pory"
	goto Erika_Route117_YesNo
	return

Erika_Route117_5:
# 53 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_Text_4
	goto Erika_Route117_4


Erikas_Vileplume::
# 62 "data/maps/Route117_House/scripts.pory"
	playmoncry SPECIES_VILEPLUME, CRY_MODE_NORMAL
# 63 "data/maps/Route117_House/scripts.pory"
	msgbox Erika_Route117_PostBattle_Text_1, MSGBOX_NPC
	return


Erika_Route117_PostBattle_Text_0:
# 6 "data/maps/Route117_House/scripts.pory"
	.string "That was marvelous, {PLAYER}. I can\n"
	.string "see your badges are well earned. Don't\l"
	.string "you agree, Vileplume?$"

Erika_Route117_PostBattle_Text_1:
# 9 "data/maps/Route117_House/scripts.pory"
	.string "VILEEEE!$"

Erika_Route117_PostBattle_Text_2:
# 12 "data/maps/Route117_House/scripts.pory"
	.string "I'm glad to have met you. I hope we can\n"
	.string "battle again in the future.$"

Erika_Route117_PostBattle_Text_3:
# 13 "data/maps/Route117_House/scripts.pory"
	.string "But before you go, you should take this.$"

Erika_Route117_PostBattle_Text_4:
# 15 "data/maps/Route117_House/scripts.pory"
	.string "I need to go find the others now.\n"
	.string "Farewell.$"

Erika_Route117_YesNo_Text_0:
# 30 "data/maps/Route117_House/scripts.pory"
	.string "Wonderful! I am quite looking forward\n"
	.string "to this.$"

Erika_Route117_YesNo_Text_1:
# 32 "data/maps/Route117_House/scripts.pory"
	.string "That was like a spring rain, absolutely\n"
	.string "refreshing!$"

Erika_Route117_YesNo_Text_2:
# 35 "data/maps/Route117_House/scripts.pory"
	.string "I see... That's unfortunate.$"

Erika_Route117_Text_0:
# 46 "data/maps/Route117_House/scripts.pory"
	.string "Hello again, did you change your mind?$"

Erika_Route117_Text_1:
# 49 "data/maps/Route117_House/scripts.pory"
	.string "Oh, hello. What brings you here?$"

Erika_Route117_Text_2:
# 50 "data/maps/Route117_House/scripts.pory"
	.string "...I see. You are a trainer participating\n"
	.string "in the gym challenge. That's wonderful.$"

Erika_Route117_Text_3:
# 51 "data/maps/Route117_House/scripts.pory"
	.string "My name is Erika, I am a gym leader from\n"
	.string "Kanto. I'm visiting Hoenn alongside my\l"
	.string "colleagues.$"

Erika_Route117_Text_4:
# 53 "data/maps/Route117_House/scripts.pory"
	.string "I heard from Brock that you are a very\n"
	.string "skilled trainer. He was quite impressed\l"
	.string "by your skills.$"

Erika_Route117_Text_5:
# 55 "data/maps/Route117_House/scripts.pory"
	.string "Would you be willing to show me your\n"
	.string "battling skills?$"
