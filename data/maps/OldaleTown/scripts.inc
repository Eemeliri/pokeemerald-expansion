# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 2
# 3 "data/maps/OldaleTown/scripts.pory"

# 4 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 5 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 6 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 7 "data/maps/OldaleTown/scripts.pory"

# 8 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 9 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 11 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 12 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 13 "data/maps/OldaleTown/scripts.pory"
	end
# 14 "data/maps/OldaleTown/scripts.pory"

# 15 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 16 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 17 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 18 "data/maps/OldaleTown/scripts.pory"
	return
# 19 "data/maps/OldaleTown/scripts.pory"

# 20 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 21 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 22 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 23 "data/maps/OldaleTown/scripts.pory"
	return
# 24 "data/maps/OldaleTown/scripts.pory"

# 25 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 26 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 27 "data/maps/OldaleTown/scripts.pory"
	end
# 28 "data/maps/OldaleTown/scripts.pory"

# 29 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 30 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 31 "data/maps/OldaleTown/scripts.pory"
	end
# 32 "data/maps/OldaleTown/scripts.pory"

# 33 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 34 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 35 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 36 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 37 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 38 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 39 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 40 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 41 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 42 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 43 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 44 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 45 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 46 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 47 "data/maps/OldaleTown/scripts.pory"
	step_end
# 48 "data/maps/OldaleTown/scripts.pory"

# 49 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 50 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 51 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 52 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 53 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 54 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 55 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 56 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 57 "data/maps/OldaleTown/scripts.pory"
	step_end
# 58 "data/maps/OldaleTown/scripts.pory"

# 59 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 60 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 61 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 62 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 63 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 64 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 65 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 66 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 67 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 68 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 69 "data/maps/OldaleTown/scripts.pory"
	step_end
# 70 "data/maps/OldaleTown/scripts.pory"

# 71 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 72 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 73 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 74 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 75 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 76 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 77 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 78 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 79 "data/maps/OldaleTown/scripts.pory"
	step_end
# 80 "data/maps/OldaleTown/scripts.pory"

# 81 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 82 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 83 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 84 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 85 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 86 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 87 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 88 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 89 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 90 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 91 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 93 "data/maps/OldaleTown/scripts.pory"
	step_end
# 94 "data/maps/OldaleTown/scripts.pory"

# 95 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 96 "data/maps/OldaleTown/scripts.pory"
	lock
# 97 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 98 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 99 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 100 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 101 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 102 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/OldaleTown/scripts.pory"
	release
# 104 "data/maps/OldaleTown/scripts.pory"
	end
# 105 "data/maps/OldaleTown/scripts.pory"

# 106 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 107 "data/maps/OldaleTown/scripts.pory"
	lockall
# 108 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 109 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 110 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 112 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 113 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 114 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 115 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 116 "data/maps/OldaleTown/scripts.pory"
	end
# 117 "data/maps/OldaleTown/scripts.pory"

# 118 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 119 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 120 "data/maps/OldaleTown/scripts.pory"
	release
# 121 "data/maps/OldaleTown/scripts.pory"
	end
# 122 "data/maps/OldaleTown/scripts.pory"

# 123 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 124 "data/maps/OldaleTown/scripts.pory"
	lockall
# 125 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 126 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 128 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 129 "data/maps/OldaleTown/scripts.pory"
	end
# 130 "data/maps/OldaleTown/scripts.pory"

# 131 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 132 "data/maps/OldaleTown/scripts.pory"
	lockall
# 133 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 134 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 136 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 138 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 139 "data/maps/OldaleTown/scripts.pory"
	end
# 140 "data/maps/OldaleTown/scripts.pory"

# 141 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 142 "data/maps/OldaleTown/scripts.pory"
	lockall
# 143 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 144 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 146 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 148 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 149 "data/maps/OldaleTown/scripts.pory"
	end
# 150 "data/maps/OldaleTown/scripts.pory"

# 151 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 152 "data/maps/OldaleTown/scripts.pory"
	lockall
# 153 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 154 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 156 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 158 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 159 "data/maps/OldaleTown/scripts.pory"
	end
# 160 "data/maps/OldaleTown/scripts.pory"

# 161 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 162 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 163 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 164 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 165 "data/maps/OldaleTown/scripts.pory"
	end
# 166 "data/maps/OldaleTown/scripts.pory"

# 167 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 168 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 169 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 170 "data/maps/OldaleTown/scripts.pory"
	end
# 171 "data/maps/OldaleTown/scripts.pory"

# 172 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 173 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 174 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 175 "data/maps/OldaleTown/scripts.pory"
	end
# 176 "data/maps/OldaleTown/scripts.pory"

# 177 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 178 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 179 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 180 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 181 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 182 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 183 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 184 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 185 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 186 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 187 "data/maps/OldaleTown/scripts.pory"
	end
# 188 "data/maps/OldaleTown/scripts.pory"

# 189 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 190 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 191 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 192 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/OldaleTown/scripts.pory"
	return
# 194 "data/maps/OldaleTown/scripts.pory"

# 195 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 196 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 197 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 198 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 199 "data/maps/OldaleTown/scripts.pory"
	return
# 200 "data/maps/OldaleTown/scripts.pory"

# 201 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 203 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 204 "data/maps/OldaleTown/scripts.pory"
	step_end
# 205 "data/maps/OldaleTown/scripts.pory"

# 206 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 207 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 208 "data/maps/OldaleTown/scripts.pory"
	step_end
# 209 "data/maps/OldaleTown/scripts.pory"

# 210 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 211 "data/maps/OldaleTown/scripts.pory"
	face_left
# 212 "data/maps/OldaleTown/scripts.pory"
	step_end
# 213 "data/maps/OldaleTown/scripts.pory"

# 214 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 215 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 216 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 217 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 218 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 219 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 220 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 221 "data/maps/OldaleTown/scripts.pory"
	step_end
# 222 "data/maps/OldaleTown/scripts.pory"

# 223 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 224 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 225 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 226 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 227 "data/maps/OldaleTown/scripts.pory"
	step_end
# 228 "data/maps/OldaleTown/scripts.pory"

# 229 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 230 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 231 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 232 "data/maps/OldaleTown/scripts.pory"
	step_end
# 233 "data/maps/OldaleTown/scripts.pory"

# 234 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 235 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 236 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 237 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 238 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 239 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 240 "data/maps/OldaleTown/scripts.pory"
	step_end
# 241 "data/maps/OldaleTown/scripts.pory"

# 242 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 243 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 244 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 245 "data/maps/OldaleTown/scripts.pory"
	step_end
# 246 "data/maps/OldaleTown/scripts.pory"

# 247 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 248 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 249 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 250 "data/maps/OldaleTown/scripts.pory"

# 251 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 252 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 253 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 254 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 255 "data/maps/OldaleTown/scripts.pory"

# 256 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 257 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 258 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 259 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 260 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 261 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 262 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 263 "data/maps/OldaleTown/scripts.pory"

# 264 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 265 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 266 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 267 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 268 "data/maps/OldaleTown/scripts.pory"

# 269 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 270 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 271 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 272 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 273 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 274 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 275 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 276 "data/maps/OldaleTown/scripts.pory"

# 277 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 278 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 279 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 280 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 281 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 282 "data/maps/OldaleTown/scripts.pory"

# 283 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 284 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 285 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 286 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 287 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 288 "data/maps/OldaleTown/scripts.pory"

# 289 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 290 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 291 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 292 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 293 "data/maps/OldaleTown/scripts.pory"

# 294 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 295 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 296 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 297 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 298 "data/maps/OldaleTown/scripts.pory"

# 299 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 300 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 301 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleLady::
# 306 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleLady_Text_0, MSGBOX_NPC
	return


OldaleHiker::
# 310 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleHiker_Text_0, MSGBOX_NPC
	return


OldaleLady_Text_0:
# 306 "data/maps/OldaleTown/scripts.pory"
	.string "Gotta remember to stock up on\n"
	.string "Antidotes for Petalburg Forest! My last\l"
	.string "trip ended poorly due to poisoning.$"

OldaleHiker_Text_0:
# 310 "data/maps/OldaleTown/scripts.pory"
	.string "Nearby towns get a fresh produce of\n"
	.string "Moomoo Milk from the small farm up\l"
	.string "north. You should check it out.$"
