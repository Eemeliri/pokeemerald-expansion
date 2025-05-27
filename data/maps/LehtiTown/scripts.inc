LehtiTown_MapScripts::
	.byte 0


LehtiTownTechnologyGuy::
# 5 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownTechnologyGuy_Text_0, MSGBOX_NPC
	end


LehtiTownSign::
# 10 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownSign_Text_0, MSGBOX_SIGN
	return


LehtiTownGirl::
# 14 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownGirl_Text_0, MSGBOX_NPC
	return


LehtiTownOldWoman::
# 18 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownOldWoman_Text_0, MSGBOX_NPC
	return


LehtiTownFisherman::
# 22 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownFisherman_Text_0, MSGBOX_NPC
	return


LehtiTownPlayerMailbox::
# 26 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownPlayerMailbox_Text_0, MSGBOX_SIGN
	return


LehtiTownLabSign::
# 30 "data/maps/LehtiTown/scripts.pory"
	lock
# 31 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownLabSign_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownLabSign_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/LehtiTown/scripts.pory"
	release
	end


LehtiTownLabMailbox::
# 38 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownLabMailbox_Text_0, MSGBOX_SIGN
	return


LehtiTownRailwaySign::
# 42 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownRailwaySign_Text_0, MSGBOX_SIGN
	return


birchDuringStarterPick::
# 46 "data/maps/LehtiTown/scripts.pory"
	msgbox birchDuringStarterPick_Text_0, MSGBOX_NPC
	end


birchNoticesPlayer::
# 51 "data/maps/LehtiTown/scripts.pory"
	lock
# 52 "data/maps/LehtiTown/scripts.pory"
	playse SE_PIN
# 53 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, birchNoticesPlayer_Movement_0
# 60 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_0
# 62 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 63 "data/maps/LehtiTown/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 64 "data/maps/LehtiTown/scripts.pory"
	switch VAR_TEMP_3
# 65 "data/maps/LehtiTown/scripts.pory"
	case 12, birchNoticesPlayer_3
# 71 "data/maps/LehtiTown/scripts.pory"
	case 13, birchNoticesPlayer_4
# 77 "data/maps/LehtiTown/scripts.pory"
	case 14, birchNoticesPlayer_5
# 84 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_2
birchNoticesPlayer_1:
# 89 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 90 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_1
# 91 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_2
# 92 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 93 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, birchNoticesPlayer_Movement_4
# 98 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_5
# 102 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_PICKING_STARTER, 1
# 104 "data/maps/LehtiTown/scripts.pory"
	applymovement 7, birchNoticesPlayer_Movement_6
# 105 "data/maps/LehtiTown/scripts.pory"
	applymovement 8, birchNoticesPlayer_Movement_6
# 106 "data/maps/LehtiTown/scripts.pory"
	applymovement 9, birchNoticesPlayer_Movement_6
# 107 "data/maps/LehtiTown/scripts.pory"
	waitmovement 9
# 108 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_3
# 109 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_4
# 110 "data/maps/LehtiTown/scripts.pory"
	release
	end

birchNoticesPlayer_3:
# 66 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_1
	goto birchNoticesPlayer_1

birchNoticesPlayer_4:
# 72 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_2
	goto birchNoticesPlayer_1

birchNoticesPlayer_5:
# 78 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_3
	goto birchNoticesPlayer_1


whereAreYouGoing::
# 115 "data/maps/LehtiTown/scripts.pory"
	lockall
# 116 "data/maps/LehtiTown/scripts.pory"
	msgbox whereAreYouGoing_Text_0
# 117 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 118 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, whereAreYouGoing_Movement_0
# 119 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/LehtiTown/scripts.pory"
	releaseall
	end


starterChespin::
# 125 "data/maps/LehtiTown/scripts.pory"
	lock
# 126 "data/maps/LehtiTown/scripts.pory"
	faceplayer
# 127 "data/maps/LehtiTown/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 128 "data/maps/LehtiTown/scripts.pory"
	playmoncry SPECIES_CHESPIN, CRY_MODE_NORMAL
# 129 "data/maps/LehtiTown/scripts.pory"
	waitmoncry
# 130 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_0, MSGBOX_YESNO
# 131 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterChespin_2
# 153 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 154 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_1
# 156 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterChespin_2:
# 132 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 133 "data/maps/LehtiTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
# 134 "data/maps/LehtiTown/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 135 "data/maps/LehtiTown/scripts.pory"
	removeobject 7
# 136 "data/maps/LehtiTown/scripts.pory"
	call obtainedStarter
# 137 "data/maps/LehtiTown/scripts.pory"
	updatefollowingmon
# 138 "data/maps/LehtiTown/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 19, 26
# 139 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
# 140 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 141 "data/maps/LehtiTown/scripts.pory"
	release
# 142 "data/maps/LehtiTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 143 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterChespin_6
starterChespin_5:
# 147 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 148 "data/maps/LehtiTown/scripts.pory"
	call birchCommonEndSpeech
# 149 "data/maps/LehtiTown/scripts.pory"
	call removeBirchandStarters
# 150 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterChespin_6:
# 144 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_0x8004, 0
# 145 "data/maps/LehtiTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto starterChespin_5


starterFennekin::
# 161 "data/maps/LehtiTown/scripts.pory"
	lock
# 162 "data/maps/LehtiTown/scripts.pory"
	faceplayer
# 163 "data/maps/LehtiTown/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 164 "data/maps/LehtiTown/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 165 "data/maps/LehtiTown/scripts.pory"
	waitmoncry
# 166 "data/maps/LehtiTown/scripts.pory"
	msgbox starterFennekin_Text_0, MSGBOX_YESNO
# 167 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterFennekin_2
# 188 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 189 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_1
# 191 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterFennekin_2:
# 168 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 169 "data/maps/LehtiTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
# 170 "data/maps/LehtiTown/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 171 "data/maps/LehtiTown/scripts.pory"
	removeobject 8
# 172 "data/maps/LehtiTown/scripts.pory"
	call obtainedStarter
# 173 "data/maps/LehtiTown/scripts.pory"
	updatefollowingmon
# 174 "data/maps/LehtiTown/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 20, 26
# 175 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
# 176 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/LehtiTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 178 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterFennekin_6
starterFennekin_5:
# 182 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 183 "data/maps/LehtiTown/scripts.pory"
	call birchCommonEndSpeech
# 184 "data/maps/LehtiTown/scripts.pory"
	call removeBirchandStarters
# 185 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterFennekin_6:
# 179 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_0x8004, 0
# 180 "data/maps/LehtiTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto starterFennekin_5


starterFroakie::
# 196 "data/maps/LehtiTown/scripts.pory"
	lock
# 197 "data/maps/LehtiTown/scripts.pory"
	faceplayer
# 198 "data/maps/LehtiTown/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 199 "data/maps/LehtiTown/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_NORMAL
# 200 "data/maps/LehtiTown/scripts.pory"
	waitmoncry
# 201 "data/maps/LehtiTown/scripts.pory"
	msgbox starterFroakie_Text_0, MSGBOX_YESNO
# 202 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterFroakie_2
# 223 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 224 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_1
# 226 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterFroakie_2:
# 203 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 204 "data/maps/LehtiTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FROAKIE
# 205 "data/maps/LehtiTown/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 206 "data/maps/LehtiTown/scripts.pory"
	removeobject 9
# 207 "data/maps/LehtiTown/scripts.pory"
	call obtainedStarter
# 208 "data/maps/LehtiTown/scripts.pory"
	updatefollowingmon
# 209 "data/maps/LehtiTown/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 21, 26
# 210 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
# 211 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 212 "data/maps/LehtiTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 213 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterFroakie_6
starterFroakie_5:
# 217 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 218 "data/maps/LehtiTown/scripts.pory"
	call birchCommonEndSpeech
# 219 "data/maps/LehtiTown/scripts.pory"
	call removeBirchandStarters
# 220 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterFroakie_6:
# 214 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_0x8004, 0
# 215 "data/maps/LehtiTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto starterFroakie_5


obtainedStarter::
# 231 "data/maps/LehtiTown/scripts.pory"
	playfanfare MUS_HG_EVOLVED
# 232 "data/maps/LehtiTown/scripts.pory"
	msgbox obtainedStarter_Text_0
# 233 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_PICKING_STARTER, 2
# 234 "data/maps/LehtiTown/scripts.pory"
	waitmessage
# 235 "data/maps/LehtiTown/scripts.pory"
	waitfanfare
	return


birchCommonEndSpeech::
# 240 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_LEHTI_TOWN_STATE, 1
# 241 "data/maps/LehtiTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 242 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, birchCommonEndSpeech_Movement_0
# 243 "data/maps/LehtiTown/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq birchCommonEndSpeech_2
# 259 "data/maps/LehtiTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq birchCommonEndSpeech_3
# 276 "data/maps/LehtiTown/scripts.pory"
	applymovement 7, birchCommonEndSpeech_Movement_1
# 280 "data/maps/LehtiTown/scripts.pory"
	playse SE_BALL
# 281 "data/maps/LehtiTown/scripts.pory"
	waitse
# 282 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 283 "data/maps/LehtiTown/scripts.pory"
	applymovement 8, birchCommonEndSpeech_Movement_1
# 287 "data/maps/LehtiTown/scripts.pory"
	playse SE_BALL
# 288 "data/maps/LehtiTown/scripts.pory"
	waitse
# 289 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
birchCommonEndSpeech_1:
# 291 "data/maps/LehtiTown/scripts.pory"
	msgbox birchCommonEndSpeech_Text_0
# 292 "data/maps/LehtiTown/scripts.pory"
	msgbox birchCommonEndSpeech_Text_1
# 293 "data/maps/LehtiTown/scripts.pory"
	msgbox birchCommonEndSpeech_Text_2
# 294 "data/maps/LehtiTown/scripts.pory"
	closemessage
	return

birchCommonEndSpeech_2:
# 244 "data/maps/LehtiTown/scripts.pory"
	applymovement 8, birchCommonEndSpeech_Movement_1
# 248 "data/maps/LehtiTown/scripts.pory"
	playse SE_BALL
# 249 "data/maps/LehtiTown/scripts.pory"
	waitse
# 250 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 251 "data/maps/LehtiTown/scripts.pory"
	applymovement 9, birchCommonEndSpeech_Movement_1
# 255 "data/maps/LehtiTown/scripts.pory"
	playse SE_BALL
# 256 "data/maps/LehtiTown/scripts.pory"
	waitse
# 257 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
	goto birchCommonEndSpeech_1

birchCommonEndSpeech_3:
# 260 "data/maps/LehtiTown/scripts.pory"
	applymovement 7, birchCommonEndSpeech_Movement_1
# 264 "data/maps/LehtiTown/scripts.pory"
	playse SE_BALL
# 265 "data/maps/LehtiTown/scripts.pory"
	waitse
# 266 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 267 "data/maps/LehtiTown/scripts.pory"
	applymovement 9, birchCommonEndSpeech_Movement_1
# 272 "data/maps/LehtiTown/scripts.pory"
	playse SE_BALL
# 273 "data/maps/LehtiTown/scripts.pory"
	waitse
# 274 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
	goto birchCommonEndSpeech_1


removeBirchandStarters::
# 299 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, removeBirchandStarters_Movement_0
# 303 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/LehtiTown/scripts.pory"
	removeobject 7
# 305 "data/maps/LehtiTown/scripts.pory"
	removeobject 8
# 306 "data/maps/LehtiTown/scripts.pory"
	removeobject 9
# 307 "data/maps/LehtiTown/scripts.pory"
	removeobject 1
# 308 "data/maps/LehtiTown/scripts.pory"
	setflag FLAG_HIDE_AFTER_STARTER
	return


# 53 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_0:
# 54 "data/maps/LehtiTown/scripts.pory"
	face_left
# 55 "data/maps/LehtiTown/scripts.pory"
	emote_exclamation_mark
# 56 "data/maps/LehtiTown/scripts.pory"
	delay_16
# 57 "data/maps/LehtiTown/scripts.pory"
	delay_16
# 58 "data/maps/LehtiTown/scripts.pory"
	delay_16
	step_end

# 66 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_1:
# 67 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 68 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 69 "data/maps/LehtiTown/scripts.pory"
	walk_right
	step_end

# 72 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_2:
# 73 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 74 "data/maps/LehtiTown/scripts.pory"
	walk_right
	step_end

# 78 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_3:
# 79 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 80 "data/maps/LehtiTown/scripts.pory"
	walk_up
# 81 "data/maps/LehtiTown/scripts.pory"
	walk_right
	step_end

# 93 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_4:
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 94 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 95 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 96 "data/maps/LehtiTown/scripts.pory"
	face_down
	step_end

# 98 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_5:
# 99 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 100 "data/maps/LehtiTown/scripts.pory"
	walk_down
	step_end

# 104 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_6:
# 104 "data/maps/LehtiTown/scripts.pory"
	face_up
	step_end

# 118 "data/maps/LehtiTown/scripts.pory"
whereAreYouGoing_Movement_0:
# 118 "data/maps/LehtiTown/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/LehtiTown/scripts.pory"
starterChespin_Movement_0:
# 139 "data/maps/LehtiTown/scripts.pory"
	exit_pokeball
# 139 "data/maps/LehtiTown/scripts.pory"
	set_visible
# 139 "data/maps/LehtiTown/scripts.pory"
	face_player
	step_end

# 242 "data/maps/LehtiTown/scripts.pory"
birchCommonEndSpeech_Movement_0:
# 242 "data/maps/LehtiTown/scripts.pory"
	face_down
	step_end

# 244 "data/maps/LehtiTown/scripts.pory"
birchCommonEndSpeech_Movement_1:
# 245 "data/maps/LehtiTown/scripts.pory"
	enter_pokeball
# 246 "data/maps/LehtiTown/scripts.pory"
	set_invisible
	step_end

# 299 "data/maps/LehtiTown/scripts.pory"
removeBirchandStarters_Movement_0:
# 299 "data/maps/LehtiTown/scripts.pory"
	walk_up
# 299 "data/maps/LehtiTown/scripts.pory"
	walk_up
# 299 "data/maps/LehtiTown/scripts.pory"
	walk_up
# 299 "data/maps/LehtiTown/scripts.pory"
	walk_up
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 300 "data/maps/LehtiTown/scripts.pory"
	walk_left
# 301 "data/maps/LehtiTown/scripts.pory"
	walk_up
# 302 "data/maps/LehtiTown/scripts.pory"
	set_invisible
	step_end

LehtiTownTechnologyGuy_Text_0:
# 5 "data/maps/LehtiTown/scripts.pory"
	.string "Technology is amazing! You can trade\n"
	.string "with people all around the world!$"

LehtiTownSign_Text_0:
# 10 "data/maps/LehtiTown/scripts.pory"
	.string "Lehti Town, where peaceful winds blow.$"

LehtiTownGirl_Text_0:
# 14 "data/maps/LehtiTown/scripts.pory"
	.string "Wow you got a Pokémon?! I'm so jealous!$"

LehtiTownOldWoman_Text_0:
# 18 "data/maps/LehtiTown/scripts.pory"
	.string "Life out here is quite peaceful, don't\n"
	.string "you think? The hustle of city can be\l"
	.string "quite taxing at my age.$"

LehtiTownFisherman_Text_0:
# 22 "data/maps/LehtiTown/scripts.pory"
	.string "Sometimes I wonder what's above the\n"
	.string "waterfall of the village. It would take\l"
	.string "an experienced trainer to get up there.$"

LehtiTownPlayerMailbox_Text_0:
# 26 "data/maps/LehtiTown/scripts.pory"
	.string "{PLAYER}'s house$"

LehtiTownLabSign_Text_0:
# 31 "data/maps/LehtiTown/scripts.pory"
	.string "Prof. Birch's Laboratory$"

LehtiTownLabSign_Text_1:
# 32 "data/maps/LehtiTown/scripts.pory"
	.string "...Someone has scribbled a '2.0' with a\n"
	.string "marker pen below the text.$"

LehtiTownLabMailbox_Text_0:
# 38 "data/maps/LehtiTown/scripts.pory"
	.string "Prof. Birch's mailbox, it seems to be full\n"
	.string "of mail...$"

LehtiTownRailwaySign_Text_0:
# 42 "data/maps/LehtiTown/scripts.pory"
	.string "Underground Subway project of Hoenn\n"
	.string "has started!$"

birchDuringStarterPick_Text_0:
# 46 "data/maps/LehtiTown/scripts.pory"
	.string "Don't think too hard about it, just go\n"
	.string "with the choice your heart tells you.$"

birchNoticesPlayer_Text_0:
# 61 "data/maps/LehtiTown/scripts.pory"
	.string "Ah, there you are, {PLAYER}!$"

birchNoticesPlayer_Text_1:
# 90 "data/maps/LehtiTown/scripts.pory"
	.string "Are you ready? It's a big day for you!\n"
	.string "Today you will receive your very own\l"
	.string "Pokémon and begin your adventure!$"

birchNoticesPlayer_Text_2:
# 91 "data/maps/LehtiTown/scripts.pory"
	.string "I have prepared some rare species to\n"
	.string "choose from. Let's go see them right\l"
	.string "away!$"

birchNoticesPlayer_Text_3:
# 108 "data/maps/LehtiTown/scripts.pory"
	.string "These little ones come all the way from\n"
	.string "Kalos region. You won't find many with\l"
	.string "these Pokémon around these parts.$"

birchNoticesPlayer_Text_4:
# 109 "data/maps/LehtiTown/scripts.pory"
	.string "So {PLAYER}, which one would you like\n"
	.string "to pick? Take as long as you need, this\l"
	.string "is a monumental step in your journey.$"

whereAreYouGoing_Text_0:
# 116 "data/maps/LehtiTown/scripts.pory"
	.string "Where are you going? You haven't picked\n"
	.string "your starter Pokémon yet!$"

starterChespin_Text_0:
# 130 "data/maps/LehtiTown/scripts.pory"
	.string "That's the Grass-type Pokémon,\n"
	.string "Chespin. Is that the one you want?$"

starterChespin_Text_1:
# 154 "data/maps/LehtiTown/scripts.pory"
	.string "Take your time. It's an important\n"
	.string "decision.$"

starterFennekin_Text_0:
# 166 "data/maps/LehtiTown/scripts.pory"
	.string "That's the Fire-type Pokémon, Fennekin.\n"
	.string "Is that the one you want?$"

starterFroakie_Text_0:
# 201 "data/maps/LehtiTown/scripts.pory"
	.string "That's the Water-type Pokémon,\n"
	.string "Froakie. Is that the one you want?$"

obtainedStarter_Text_0:
# 232 "data/maps/LehtiTown/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\nfrom Prof. Birch!$"

birchCommonEndSpeech_Text_0:
# 291 "data/maps/LehtiTown/scripts.pory"
	.string "You two will get along well. Why not take\n"
	.string "a trip to Route 103? You can get there\l"
	.string "by heading west until you reach Oldale\l"
	.string "Town. After that head north.$"

birchCommonEndSpeech_Text_1:
# 292 "data/maps/LehtiTown/scripts.pory"
	.string "If you run into my assistant, tell them\n"
	.string "to swing by the lab later, I've got to\l"
	.string "get back to dealing with all the\l"
	.string "paperwork this job comes with.$"

birchCommonEndSpeech_Text_2:
# 293 "data/maps/LehtiTown/scripts.pory"
	.string "Oh, and don't forget to show\n"
	.string "{STR_VAR_1} to your mom!$"
