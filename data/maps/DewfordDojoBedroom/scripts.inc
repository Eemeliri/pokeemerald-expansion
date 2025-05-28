DewfordDojoBedroom_MapScripts::
	.byte 0


tiredGirlDojo::
	lock
	faceplayer
	msgbox tiredGirlDojo_Text_0
	release
	end


oldLadyDojoBedroom::
	lock
	faceplayer
	msgbox oldLadyDojoBedroom_Text_0
	release
	end


friendlyBlackBeltDojoBedroom::
	lock
	faceplayer
	msgbox friendlyBlackBeltDojoBedroom_Text_0
	pokemart friendlyBlackBeltDojoBedroomShop
	msgbox friendlyBlackBeltDojoBedroom_Text_1
	release
	end


	.align 2
friendlyBlackBeltDojoBedroomShop:
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_NONE

tiredGirlDojo_Text_0:
	.string "I'm so tired from all the training. I wish\n"
	.string "I could take a nap.$"

oldLadyDojoBedroom_Text_0:
	.string "In this dojo, we all sleep in shared\n"
	.string "spaces. It's good for the spirit of\l"
	.string "unity.$"

friendlyBlackBeltDojoBedroom_Text_0:
	.string "Hey, need some refreshments?$"

friendlyBlackBeltDojoBedroom_Text_1:
	.string "Stop by if you need more!$"
