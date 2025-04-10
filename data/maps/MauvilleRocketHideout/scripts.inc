MauvilleRocketHideout_MapScripts::
	.byte 0


HideoutF1_Scientist::
	return


HideoutF1_SecurityComputer::
# 8 "data/maps/MauvilleRocketHideout/scripts.pory"
	lock
# 9 "data/maps/MauvilleRocketHideout/scripts.pory"
	goto_if_unset FLAG_DISABLED_SECURITY_HIDEOUT, HideoutF1_SecurityComputer_2
# 27 "data/maps/MauvilleRocketHideout/scripts.pory"
	msgbox HideoutF1_SecurityComputer_Text_2
# 28 "data/maps/MauvilleRocketHideout/scripts.pory"
	release
	end

HideoutF1_SecurityComputer_2:
# 10 "data/maps/MauvilleRocketHideout/scripts.pory"
	msgbox HideoutF1_SecurityComputer_Text_0, MSGBOX_YESNO
# 11 "data/maps/MauvilleRocketHideout/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HideoutF1_SecurityComputer_4
# 23 "data/maps/MauvilleRocketHideout/scripts.pory"
	release
	end

HideoutF1_SecurityComputer_4:
# 12 "data/maps/MauvilleRocketHideout/scripts.pory"
	setflag FLAG_DISABLED_SECURITY_HIDEOUT
# 13 "data/maps/MauvilleRocketHideout/scripts.pory"
	playse SE_PIN
# 14 "data/maps/MauvilleRocketHideout/scripts.pory"
	delay 20
# 15 "data/maps/MauvilleRocketHideout/scripts.pory"
	playse SE_PIN
# 16 "data/maps/MauvilleRocketHideout/scripts.pory"
	delay 20
# 17 "data/maps/MauvilleRocketHideout/scripts.pory"
	playse SE_PIN
# 18 "data/maps/MauvilleRocketHideout/scripts.pory"
	delay 40
# 19 "data/maps/MauvilleRocketHideout/scripts.pory"
	msgbox HideoutF1_SecurityComputer_Text_1
# 20 "data/maps/MauvilleRocketHideout/scripts.pory"
	release
	end


HideoutF1_SecurityComputer_Text_0:
# 10 "data/maps/MauvilleRocketHideout/scripts.pory"
	.string "The computer seems to control the\n"
	.string "Electrode traps in this floor. Hit the\l"
	.string "big red button to shut it down?$"

HideoutF1_SecurityComputer_Text_1:
# 19 "data/maps/MauvilleRocketHideout/scripts.pory"
	.string "All traps on this floor have been\n"
	.string "disabled!$"

HideoutF1_SecurityComputer_Text_2:
# 27 "data/maps/MauvilleRocketHideout/scripts.pory"
	.string "The security system has already been\n"
	.string "turned off.$"
