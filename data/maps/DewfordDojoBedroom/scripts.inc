DewfordDojoBedroom_MapScripts::
	.byte 0


tiredGirlDojo::
# 4 "data/maps/DewfordDojoBedroom/scripts.pory"
	lock
# 5 "data/maps/DewfordDojoBedroom/scripts.pory"
	faceplayer
# 6 "data/maps/DewfordDojoBedroom/scripts.pory"
	msgbox tiredGirlDojo_Text_0
# 7 "data/maps/DewfordDojoBedroom/scripts.pory"
	release
	end


oldLadyDojoBedroom::
# 14 "data/maps/DewfordDojoBedroom/scripts.pory"
	lock
# 15 "data/maps/DewfordDojoBedroom/scripts.pory"
	faceplayer
# 16 "data/maps/DewfordDojoBedroom/scripts.pory"
	msgbox oldLadyDojoBedroom_Text_0
# 17 "data/maps/DewfordDojoBedroom/scripts.pory"
	release
	end


friendlyBlackBeltDojoBedroom::
# 22 "data/maps/DewfordDojoBedroom/scripts.pory"
	lock
# 23 "data/maps/DewfordDojoBedroom/scripts.pory"
	faceplayer
# 24 "data/maps/DewfordDojoBedroom/scripts.pory"
	msgbox friendlyBlackBeltDojoBedroom_Text_0
# 25 "data/maps/DewfordDojoBedroom/scripts.pory"
	pokemart friendlyBlackBeltDojoBedroomShop
# 26 "data/maps/DewfordDojoBedroom/scripts.pory"
	msgbox friendlyBlackBeltDojoBedroom_Text_1
# 27 "data/maps/DewfordDojoBedroom/scripts.pory"
	release
	end


	.align 2
# 31 "data/maps/DewfordDojoBedroom/scripts.pory"
friendlyBlackBeltDojoBedroomShop:
# 32 "data/maps/DewfordDojoBedroom/scripts.pory"
	.2byte ITEM_POTION
# 33 "data/maps/DewfordDojoBedroom/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 34 "data/maps/DewfordDojoBedroom/scripts.pory"
	.2byte ITEM_SODA_POP
# 35 "data/maps/DewfordDojoBedroom/scripts.pory"
	.2byte ITEM_LEMONADE
# 36 "data/maps/DewfordDojoBedroom/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_NONE

tiredGirlDojo_Text_0:
# 6 "data/maps/DewfordDojoBedroom/scripts.pory"
	.string "I'm so tired from all the training. I wish\n"
	.string "I could take a nap.$"

oldLadyDojoBedroom_Text_0:
# 16 "data/maps/DewfordDojoBedroom/scripts.pory"
	.string "In this dojo, we all sleep in shared\n"
	.string "spaces. It's good for the spirit of\l"
	.string "unity.$"

friendlyBlackBeltDojoBedroom_Text_0:
# 24 "data/maps/DewfordDojoBedroom/scripts.pory"
	.string "Hey, need some refreshments?$"

friendlyBlackBeltDojoBedroom_Text_1:
# 26 "data/maps/DewfordDojoBedroom/scripts.pory"
	.string "Stop by if you need more!$"
