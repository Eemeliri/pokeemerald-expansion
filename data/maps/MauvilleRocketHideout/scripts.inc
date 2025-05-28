MauvilleRocketHideout_MapScripts::
	.byte 0


HideoutF1_Scientist::
	return


HideoutF1_SecurityComputer::
	lock
	goto_if_unset FLAG_DISABLED_SECURITY_HIDEOUT, HideoutF1_SecurityComputer_2
	msgbox HideoutF1_SecurityComputer_Text_2
	release
	end

HideoutF1_SecurityComputer_2:
	msgbox HideoutF1_SecurityComputer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq HideoutF1_SecurityComputer_4
	release
	end

HideoutF1_SecurityComputer_4:
	setflag FLAG_DISABLED_SECURITY_HIDEOUT
	playse SE_PIN
	delay 20
	playse SE_PIN
	delay 20
	playse SE_PIN
	delay 40
	msgbox HideoutF1_SecurityComputer_Text_1
	release
	end


HideoutF1_SecurityComputer_Text_0:
	.string "The computer seems to control the\n"
	.string "Electrode traps in this floor. Hit the\l"
	.string "big red button to shut it down?$"

HideoutF1_SecurityComputer_Text_1:
	.string "All traps on this floor have been\n"
	.string "disabled!$"

HideoutF1_SecurityComputer_Text_2:
	.string "The security system has already been\n"
	.string "turned off.$"
