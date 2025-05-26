LehtiTown_MapScripts::
	.byte 0


LehtiTownTechnologyGuy::
# 5 "data/maps/LehtiTown/scripts.pory"
	msgbox LehtiTownTechnologyGuy_Text_0, MSGBOX_NPC
	end


LehtiTownGirl::
	return


LehtiTownOldWoman::
	return


LehtiTownFisherman::
	return


LehtiTownWallyStarterScene::
	return


LehtiTownPlayerMailbox::
	return


LehtiTownRivalMailbox::
	return


LehtiTownLabSign::
	return


LehtiTownLabMailbox::
	return


LehtiTownRailwaySign::
	return


rivalStarterPick::
	return


birchDuringStarterPick::
# 50 "data/maps/LehtiTown/scripts.pory"
	msgbox birchDuringStarterPick_Text_0, MSGBOX_NPC
	end


birchNoticesPlayer::
# 55 "data/maps/LehtiTown/scripts.pory"
	lock
# 56 "data/maps/LehtiTown/scripts.pory"
	playse SE_PIN
# 57 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, birchNoticesPlayer_Movement_0
# 64 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 65 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_0
# 66 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 67 "data/maps/LehtiTown/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 68 "data/maps/LehtiTown/scripts.pory"
	switch VAR_TEMP_3
# 69 "data/maps/LehtiTown/scripts.pory"
	case 12, birchNoticesPlayer_3
# 75 "data/maps/LehtiTown/scripts.pory"
	case 13, birchNoticesPlayer_4
# 81 "data/maps/LehtiTown/scripts.pory"
	case 14, birchNoticesPlayer_5
# 88 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_2
birchNoticesPlayer_1:
# 93 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 94 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_1
# 95 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_2
# 96 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 97 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, birchNoticesPlayer_Movement_4
# 102 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_5
# 106 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 107 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_PICKING_STARTER, 1
# 108 "data/maps/LehtiTown/scripts.pory"
	applymovement 7, birchNoticesPlayer_Movement_6
# 109 "data/maps/LehtiTown/scripts.pory"
	applymovement 8, birchNoticesPlayer_Movement_6
# 110 "data/maps/LehtiTown/scripts.pory"
	applymovement 9, birchNoticesPlayer_Movement_6
# 111 "data/maps/LehtiTown/scripts.pory"
	waitmovement 9
# 112 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_3
# 113 "data/maps/LehtiTown/scripts.pory"
	msgbox birchNoticesPlayer_Text_4
# 114 "data/maps/LehtiTown/scripts.pory"
	release
	end

birchNoticesPlayer_3:
# 70 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_1
	goto birchNoticesPlayer_1

birchNoticesPlayer_4:
# 76 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_2
	goto birchNoticesPlayer_1

birchNoticesPlayer_5:
# 82 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, birchNoticesPlayer_Movement_3
	goto birchNoticesPlayer_1


whereAreYouGoing::
# 119 "data/maps/LehtiTown/scripts.pory"
	lockall
# 120 "data/maps/LehtiTown/scripts.pory"
	msgbox whereAreYouGoing_Text_0
# 121 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 122 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, whereAreYouGoing_Movement_0
# 123 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 124 "data/maps/LehtiTown/scripts.pory"
	releaseall
	end


starterChespin::
# 129 "data/maps/LehtiTown/scripts.pory"
	lock
# 130 "data/maps/LehtiTown/scripts.pory"
	faceplayer
# 131 "data/maps/LehtiTown/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 132 "data/maps/LehtiTown/scripts.pory"
	playmoncry SPECIES_CHESPIN, CRY_MODE_NORMAL
# 133 "data/maps/LehtiTown/scripts.pory"
	waitmoncry
# 134 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_0, MSGBOX_YESNO
# 135 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterChespin_2
# 161 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 162 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_3
# 164 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterChespin_2:
# 136 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 137 "data/maps/LehtiTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
# 138 "data/maps/LehtiTown/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 139 "data/maps/LehtiTown/scripts.pory"
	removeobject 7
# 140 "data/maps/LehtiTown/scripts.pory"
	call obtainedStarter
# 141 "data/maps/LehtiTown/scripts.pory"
	updatefollowingmon
# 142 "data/maps/LehtiTown/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 19, 26
# 143 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
# 144 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/LehtiTown/scripts.pory"
	release
# 146 "data/maps/LehtiTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 147 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterChespin_6
starterChespin_5:
# 151 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 152 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_LEHTI_TOWN_STATE, 1
# 153 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, starterChespin_Movement_1
# 154 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_1
# 155 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_2
# 156 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 157 "data/maps/LehtiTown/scripts.pory"
	call removeBirchandStarters
# 158 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterChespin_6:
# 148 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_0x8004, 0
# 149 "data/maps/LehtiTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto starterChespin_5


starterFennekin::
# 169 "data/maps/LehtiTown/scripts.pory"
	lock
# 170 "data/maps/LehtiTown/scripts.pory"
	faceplayer
# 171 "data/maps/LehtiTown/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 172 "data/maps/LehtiTown/scripts.pory"
	playmoncry SPECIES_FENNEKIN, CRY_MODE_NORMAL
# 173 "data/maps/LehtiTown/scripts.pory"
	waitmoncry
# 174 "data/maps/LehtiTown/scripts.pory"
	msgbox starterFennekin_Text_0, MSGBOX_YESNO
# 175 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterFennekin_2
# 200 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 201 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_3
# 203 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterFennekin_2:
# 176 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 177 "data/maps/LehtiTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
# 178 "data/maps/LehtiTown/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 179 "data/maps/LehtiTown/scripts.pory"
	removeobject 8
# 180 "data/maps/LehtiTown/scripts.pory"
	call obtainedStarter
# 181 "data/maps/LehtiTown/scripts.pory"
	updatefollowingmon
# 182 "data/maps/LehtiTown/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 20, 26
# 183 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
# 184 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 185 "data/maps/LehtiTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 186 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterFennekin_6
starterFennekin_5:
# 190 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 191 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_LEHTI_TOWN_STATE, 1
# 192 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, starterChespin_Movement_1
# 193 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_1
# 194 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_2
# 195 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 196 "data/maps/LehtiTown/scripts.pory"
	call removeBirchandStarters
# 197 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterFennekin_6:
# 187 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_0x8004, 0
# 188 "data/maps/LehtiTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto starterFennekin_5


starterFroakie::
# 208 "data/maps/LehtiTown/scripts.pory"
	lock
# 209 "data/maps/LehtiTown/scripts.pory"
	faceplayer
# 210 "data/maps/LehtiTown/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 211 "data/maps/LehtiTown/scripts.pory"
	playmoncry SPECIES_FROAKIE, CRY_MODE_NORMAL
# 212 "data/maps/LehtiTown/scripts.pory"
	waitmoncry
# 213 "data/maps/LehtiTown/scripts.pory"
	msgbox starterFroakie_Text_0, MSGBOX_YESNO
# 214 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterFroakie_2
# 239 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 240 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_3
# 242 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterFroakie_2:
# 215 "data/maps/LehtiTown/scripts.pory"
	hidemonpic
# 216 "data/maps/LehtiTown/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FROAKIE
# 217 "data/maps/LehtiTown/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 218 "data/maps/LehtiTown/scripts.pory"
	removeobject 9
# 219 "data/maps/LehtiTown/scripts.pory"
	call obtainedStarter
# 220 "data/maps/LehtiTown/scripts.pory"
	updatefollowingmon
# 221 "data/maps/LehtiTown/scripts.pory"
	setobjectxy OBJ_EVENT_ID_FOLLOWER, 21, 26
# 222 "data/maps/LehtiTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, starterChespin_Movement_0
# 223 "data/maps/LehtiTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/LehtiTown/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 225 "data/maps/LehtiTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq starterFroakie_6
starterFroakie_5:
# 229 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 230 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_LEHTI_TOWN_STATE, 1
# 231 "data/maps/LehtiTown/scripts.pory"
	applymovement 1, starterChespin_Movement_1
# 232 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_1
# 233 "data/maps/LehtiTown/scripts.pory"
	msgbox starterChespin_Text_2
# 234 "data/maps/LehtiTown/scripts.pory"
	closemessage
# 235 "data/maps/LehtiTown/scripts.pory"
	call removeBirchandStarters
# 236 "data/maps/LehtiTown/scripts.pory"
	release
	end

starterFroakie_6:
# 226 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_0x8004, 0
# 227 "data/maps/LehtiTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto starterFroakie_5


obtainedStarter::
# 247 "data/maps/LehtiTown/scripts.pory"
	playfanfare MUS_HG_EVOLVED
# 248 "data/maps/LehtiTown/scripts.pory"
	msgbox obtainedStarter_Text_0
# 249 "data/maps/LehtiTown/scripts.pory"
	setvar VAR_PICKING_STARTER, 2
# 250 "data/maps/LehtiTown/scripts.pory"
	waitmessage
# 251 "data/maps/LehtiTown/scripts.pory"
	waitfanfare
	return


removeBirchandStarters::
# 256 "data/maps/LehtiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK, 0
# 257 "data/maps/LehtiTown/scripts.pory"
	removeobject 7
# 258 "data/maps/LehtiTown/scripts.pory"
	removeobject 8
# 259 "data/maps/LehtiTown/scripts.pory"
	removeobject 9
# 260 "data/maps/LehtiTown/scripts.pory"
	removeobject 1
# 261 "data/maps/LehtiTown/scripts.pory"
	setflag FLAG_HIDE_AFTER_STARTER
# 262 "data/maps/LehtiTown/scripts.pory"
	delay 60
# 263 "data/maps/LehtiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK, 0
	return


# 57 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_0:
# 58 "data/maps/LehtiTown/scripts.pory"
	face_left
# 59 "data/maps/LehtiTown/scripts.pory"
	emote_exclamation_mark
# 60 "data/maps/LehtiTown/scripts.pory"
	delay_16
# 61 "data/maps/LehtiTown/scripts.pory"
	delay_16
# 62 "data/maps/LehtiTown/scripts.pory"
	delay_16
	step_end

# 70 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_1:
# 71 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 72 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 73 "data/maps/LehtiTown/scripts.pory"
	walk_right
	step_end

# 76 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_2:
# 77 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 78 "data/maps/LehtiTown/scripts.pory"
	walk_right
	step_end

# 82 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_3:
# 83 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 84 "data/maps/LehtiTown/scripts.pory"
	walk_up
# 85 "data/maps/LehtiTown/scripts.pory"
	walk_right
	step_end

# 97 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_4:
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 98 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 99 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 100 "data/maps/LehtiTown/scripts.pory"
	face_down
	step_end

# 102 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_5:
# 103 "data/maps/LehtiTown/scripts.pory"
	walk_right
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
# 104 "data/maps/LehtiTown/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/LehtiTown/scripts.pory"
birchNoticesPlayer_Movement_6:
# 108 "data/maps/LehtiTown/scripts.pory"
	face_up
	step_end

# 122 "data/maps/LehtiTown/scripts.pory"
whereAreYouGoing_Movement_0:
# 122 "data/maps/LehtiTown/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/LehtiTown/scripts.pory"
starterChespin_Movement_0:
# 143 "data/maps/LehtiTown/scripts.pory"
	exit_pokeball
# 143 "data/maps/LehtiTown/scripts.pory"
	set_visible
# 143 "data/maps/LehtiTown/scripts.pory"
	face_player
	step_end

# 153 "data/maps/LehtiTown/scripts.pory"
starterChespin_Movement_1:
# 153 "data/maps/LehtiTown/scripts.pory"
	face_down
	step_end

LehtiTownTechnologyGuy_Text_0:
# 5 "data/maps/LehtiTown/scripts.pory"
	.string "Technology is amazing! You can connect\n"
	.string "to the internet with Game Boy games!$"

birchDuringStarterPick_Text_0:
# 50 "data/maps/LehtiTown/scripts.pory"
	.string "Don't think too hard about it, just go\n"
	.string "with the choice your heart tells you.$"

birchNoticesPlayer_Text_0:
# 65 "data/maps/LehtiTown/scripts.pory"
	.string "Ah, there you are, {PLAYER}!$"

birchNoticesPlayer_Text_1:
# 94 "data/maps/LehtiTown/scripts.pory"
	.string "Are you excited? It's a big day for you!\n"
	.string "Today you will receive your very own\l"
	.string "Pokémon.$"

birchNoticesPlayer_Text_2:
# 95 "data/maps/LehtiTown/scripts.pory"
	.string "I have prepared some rare species to\n"
	.string "choose from. Let's go see them right\l"
	.string "away!$"

birchNoticesPlayer_Text_3:
# 112 "data/maps/LehtiTown/scripts.pory"
	.string "These little ones come all the way from\n"
	.string "Kalos region. You won't find many with\l"
	.string "these Pokémon around these parts.$"

birchNoticesPlayer_Text_4:
# 113 "data/maps/LehtiTown/scripts.pory"
	.string "So {PLAYER}, which one would you like\n"
	.string "to pick? Take as long as you need, this\l"
	.string "is a monumental step in your journey.$"

whereAreYouGoing_Text_0:
# 120 "data/maps/LehtiTown/scripts.pory"
	.string "Where are you going? You haven't picked\n"
	.string "your starter Pokémon yet!$"

starterChespin_Text_0:
# 134 "data/maps/LehtiTown/scripts.pory"
	.string "That's the Grass-type Pokémon,\n"
	.string "Chespin. Is that the one you want?$"

starterChespin_Text_1:
# 154 "data/maps/LehtiTown/scripts.pory"
	.string "You two will get along well. Why not take\n"
	.string "a trip to Route 103? You can get there\l"
	.string "by heading west until you reach Oldale\l"
	.string "Town. After that head north.$"

starterChespin_Text_2:
# 155 "data/maps/LehtiTown/scripts.pory"
	.string "If you run into my assistant, tell them\n"
	.string "to swing by the lab later, I've got to\l"
	.string "get back to dealing with all the\l"
	.string "paperwork this job comes with.$"

starterChespin_Text_3:
# 162 "data/maps/LehtiTown/scripts.pory"
	.string "Take your time. It's an important\n"
	.string "decision.$"

starterFennekin_Text_0:
# 174 "data/maps/LehtiTown/scripts.pory"
	.string "That's the Fire-type Pokémon, Fennekin.\n"
	.string "Is that the one you want?$"

starterFroakie_Text_0:
# 213 "data/maps/LehtiTown/scripts.pory"
	.string "That's the Water-type Pokémon,\n"
	.string "Froakie. Is that the one you want?$"

obtainedStarter_Text_0:
# 248 "data/maps/LehtiTown/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\nfrom Prof. Birch!$"
