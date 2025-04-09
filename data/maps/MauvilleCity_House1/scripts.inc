# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude::
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_House1/scripts.pory"

# 17 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_House1/scripts.pory"

# 22 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
# 23 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I hear people call me the ROCK SMASH\n"
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "GUY, but I find that sort of degrading.\p"
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I think I deserve a bit more respect,\n"
# 27 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "like maybe the ROCK SMASH DUDE.\p"
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Anyways, your POKéMON look pretty\n"
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "strong.\p"
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I like that!\n"
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Here, take this HIDDEN MACHINE!$"
# 33 "data/maps/MauvilleCity_House1/scripts.pory"

# 34 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash:
# 35 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "That HM contains ROCK SMASH.\p"
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "If you come across large boulders\n"
# 37 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "that block your path…\p"
# 38 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Well, use that HM move and smash\n"
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "them right out of your way!\p"
# 40 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Yes, sir! Smash rocks aside, I say!\n"
# 41 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
# 42 "data/maps/MauvilleCity_House1/scripts.pory"

# 43 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
# 44 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
# 45 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "could come flying out of hiding.\p"
# 46 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"

RockSmashDudeNew::
# 51 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 52 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 53 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, RockSmashDudeNew_2
# 56 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox RockSmashDudeNew_Text_1
# 57 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox RockSmashDudeNew_Text_2
RockSmashDudeNew_1:
# 59 "data/maps/MauvilleCity_House1/scripts.pory"
	release
	end

RockSmashDudeNew_2:
# 54 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox RockSmashDudeNew_Text_0
	goto RockSmashDudeNew_1


RockSmashDudeNew_Text_0:
# 54 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hey you got back my Rock Smash TM!\n"
	.string "Thanks, but you can keep it, I ordered a\l"
	.string "new from the internet. Technology is\l"
	.string "quite marvelous!$"

RockSmashDudeNew_Text_1:
# 56 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo! People call me the Rock Smash\n"
	.string "guy! At least, that's what they used to\l"
	.string "call me. But now Team Rocket has taken\l"
	.string "my Rock Smash, so what does that make\l"
	.string "me now?$"

RockSmashDudeNew_Text_2:
# 57 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I hear they run some shady operation at\n"
	.string "the casino. Though I'd advise against\l"
	.string "going there. You might run into trouble!$"
