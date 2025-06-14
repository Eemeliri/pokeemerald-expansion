
MauvilleCity_House1_MapScripts::
	.byte 0

MauvilleCity_House1_EventScript_RockSmashDude::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_EventScript_ReceivedRockSmash::
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
	.string "Woohoo!\p"
	.string "I hear people call me the ROCK SMASH\n"
	.string "GUY, but I find that sort of degrading.\p"
	.string "I think I deserve a bit more respect,\n"
	.string "like maybe the ROCK SMASH DUDE.\p"
	.string "Woohoo!\p"
	.string "Anyways, your POKéMON look pretty\n"
	.string "strong.\p"
	.string "I like that!\n"
	.string "Here, take this HIDDEN MACHINE!$"

MauvilleCity_House1_Text_ExplainRockSmash:
	.string "That HM contains ROCK SMASH.\p"
	.string "If you come across large boulders\n"
	.string "that block your path…\p"
	.string "Well, use that HM move and smash\n"
	.string "them right out of your way!\p"
	.string "Yes, sir! Smash rocks aside, I say!\n"
	.string "Woohoo!$"

MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
	.string "could come flying out of hiding.\p"
	.string "Woohoo!$"

RockSmashDudeNew::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, RockSmashDudeNew_2
	msgbox RockSmashDudeNew_Text_1
	msgbox RockSmashDudeNew_Text_2
RockSmashDudeNew_1:
	release
	end

RockSmashDudeNew_2:
	msgbox RockSmashDudeNew_Text_0
	goto RockSmashDudeNew_1


RockSmashDudeNew_Text_0:
	.string "Hey you got back my Rock Smash TM!\n"
	.string "Thanks, but you can keep it, I ordered a\l"
	.string "new from the internet. Technology is\l"
	.string "quite marvelous!$"

RockSmashDudeNew_Text_1:
	.string "Woohoo! People call me the Rock Smash\n"
	.string "guy! At least, that's what they used to\l"
	.string "call me. But now Team Rocket has taken\l"
	.string "my Rock Smash, so what does that make\l"
	.string "me now?$"

RockSmashDudeNew_Text_2:
	.string "I hear they run some shady operation at\n"
	.string "the casino. Though I'd advise against\l"
	.string "going there. You might run into trouble!$"
