
MauvilleCity_Mart_MapScripts::
	.byte 0

MauvilleCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
MauvilleCity_Mart_Pokemart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_X_ACCURACY
	pokemartlistend

MauvilleCity_Mart_EventScript_ExpertM::
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
	end

MauvilleCity_Mart_EventScript_Man::
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
	end

MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
	.string "There are items that temporarily\n"
	.string "elevate the stats of POKéMON.\p"
	.string "The ones I know you use in battle\n"
	.string "are X ATTACK and X DEFEND…\p"
	.string "I do believe that there are others\n"
	.string "like them.$"

MauvilleCity_Mart_Text_DecisionsDetermineBattle:
	.string "Use a certain move, or use an item\n"
	.string "instead…\p"
	.string "The TRAINER's decisions determine how\n"
	.string "battles turn out, I think.$"

MauvilleMart2_Clerk::
	lock
	message MauvilleMart2_Clerk_Text_0
	waitmessage
	pokemart Mauvillemart2
	msgbox MauvilleMart2_Clerk_Text_1
	release
	return


	.align 2
Mauvillemart2:
	.2byte ITEM_TM_VENOSHOCK
	.2byte ITEM_TM_AERIAL_ACE
	.2byte ITEM_TM_FACADE
	.2byte ITEM_TM_LOW_SWEEP
	.2byte ITEM_TM_CHARGE_BEAM
	.2byte ITEM_TM_BULLDOZE
	.2byte ITEM_TM_DRAGON_TAIL
	.2byte ITEM_TM_POWER_UP_PUNCH
	.2byte ITEM_NONE

MauvilleMart2_Clerk_Text_0:
	.string "Welcome!$"

MauvilleMart2_Clerk_Text_1:
	.string "Come again soon.$"
