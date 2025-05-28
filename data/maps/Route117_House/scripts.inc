
Route117_House_MapScripts::
	.byte 0

Erika_Route117_PostBattle::
	msgbox Erika_Route117_PostBattle_Text_0
	waitmessage
	playmoncry SPECIES_VILEPLUME, CRY_MODE_NORMAL
	msgbox Erika_Route117_PostBattle_Text_1, MSGBOX_DEFAULT
	waitmoncry
	waitmessage
	msgbox Erika_Route117_PostBattle_Text_2
	msgbox Erika_Route117_PostBattle_Text_3
	giveitem ITEM_SYRUPY_APPLE, 1
	msgbox Erika_Route117_PostBattle_Text_4
	waitmessage
	fadescreenswapbuffers FADE_TO_BLACK
	closemessage
	removeobject 1
	removeobject 2
	delay 60
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


Erika_Route117_YesNo::
	switch VAR_RESULT
	case YES, Erika_Route117_YesNo_3
	case NO, Erika_Route117_YesNo_4
Erika_Route117_YesNo_1:
	release
	end

Erika_Route117_YesNo_3:
	msgbox Erika_Route117_YesNo_Text_0
	waitmessage
	trainerbattle_no_intro TRAINER_ROUTE117_ERIKA, Erika_Route117_YesNo_Text_1
	goto Erika_Route117_PostBattle
	goto Erika_Route117_YesNo_1

Erika_Route117_YesNo_4:
	msgbox Erika_Route117_YesNo_Text_2
	goto Erika_Route117_YesNo_1


Erika_Route117::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, Erika_Route117_1
	msgbox Erika_Route117_Text_1
	msgbox Erika_Route117_Text_2
	msgbox Erika_Route117_Text_3
	goto_if_set FLAG_GRANITECAVE_BROCK, Erika_Route117_5
Erika_Route117_4:
	msgbox Erika_Route117_Text_5, MSGBOX_YESNO
	setflag FLAG_TEMP_1
	goto Erika_Route117_YesNo
	return

Erika_Route117_1:
	msgbox Erika_Route117_Text_0, MSGBOX_YESNO
	goto Erika_Route117_YesNo
	return

Erika_Route117_5:
	msgbox Erika_Route117_Text_4
	goto Erika_Route117_4


Erikas_Vileplume::
	playmoncry SPECIES_VILEPLUME, CRY_MODE_NORMAL
	msgbox Erika_Route117_PostBattle_Text_1, MSGBOX_NPC
	return


Erika_Route117_PostBattle_Text_0:
	.string "That was marvelous, {PLAYER}. I can\n"
	.string "see your badges are well earned. Don't\l"
	.string "you agree, Vileplume?$"

Erika_Route117_PostBattle_Text_1:
	.string "VILEEEE!$"

Erika_Route117_PostBattle_Text_2:
	.string "I'm glad to have met you. I hope we can\n"
	.string "battle again in the future.$"

Erika_Route117_PostBattle_Text_3:
	.string "But before you go, you should take this.$"

Erika_Route117_PostBattle_Text_4:
	.string "I need to go find the others now.\n"
	.string "Farewell.$"

Erika_Route117_YesNo_Text_0:
	.string "Wonderful! I am quite looking forward\n"
	.string "to this.$"

Erika_Route117_YesNo_Text_1:
	.string "That was like a spring rain, absolutely\n"
	.string "refreshing!$"

Erika_Route117_YesNo_Text_2:
	.string "I see... That's unfortunate.$"

Erika_Route117_Text_0:
	.string "Hello again, did you change your mind?$"

Erika_Route117_Text_1:
	.string "Oh, hello. What brings you here?$"

Erika_Route117_Text_2:
	.string "...I see. You are a trainer participating\n"
	.string "in the gym challenge. That's wonderful.$"

Erika_Route117_Text_3:
	.string "My name is Erika, I am a gym leader from\n"
	.string "Kanto. I'm visiting Hoenn alongside my\l"
	.string "colleagues.$"

Erika_Route117_Text_4:
	.string "I heard from Brock that you are a very\n"
	.string "skilled trainer. He was quite impressed\l"
	.string "by your skills.$"

Erika_Route117_Text_5:
	.string "Would you be willing to show me your\n"
	.string "battling skills?$"
