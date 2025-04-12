SlateportMarket_MapScripts::
	.byte 0


HyperTrainer_Lady::
# 6 "data/maps/SlateportMarket/scripts.pory"
	lockall
# 7 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq HyperTrainer_Lady_2
HyperTrainer_Lady_1:
# 12 "data/maps/SlateportMarket/scripts.pory"
	checkitem ITEM_BOTTLE_CAP
# 13 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_5
# 18 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_2
# 19 "data/maps/SlateportMarket/scripts.pory"
	dynmultichoice 0, 0, FALSE, 7, 0, DYN_MULTICHOICE_CB_NONE, HyperTrainer_Lady_Text_3, HyperTrainer_Lady_Text_4, HyperTrainer_Lady_Text_5, HyperTrainer_Lady_Text_6, HyperTrainer_Lady_Text_7, HyperTrainer_Lady_Text_8, HyperTrainer_Lady_Text_9
# 20 "data/maps/SlateportMarket/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/SlateportMarket/scripts.pory"
	case 0, HyperTrainer_Lady_8
# 47 "data/maps/SlateportMarket/scripts.pory"
	case 1, HyperTrainer_Lady_9
# 72 "data/maps/SlateportMarket/scripts.pory"
	case 2, HyperTrainer_Lady_10
# 97 "data/maps/SlateportMarket/scripts.pory"
	case 3, HyperTrainer_Lady_11
# 122 "data/maps/SlateportMarket/scripts.pory"
	case 4, HyperTrainer_Lady_12
# 147 "data/maps/SlateportMarket/scripts.pory"
	case 5, HyperTrainer_Lady_13
# 173 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_19
# 174 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 175 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_2:
# 9 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_0
# 10 "data/maps/SlateportMarket/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto HyperTrainer_Lady_1

HyperTrainer_Lady_5:
# 14 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_1
# 15 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_8:
# 22 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 23 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 24 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 25 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_16
# 31 "data/maps/SlateportMarket/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 32 "data/maps/SlateportMarket/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 33 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_34
# 39 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 40 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 41 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 42 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 43 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_13
# 44 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 45 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_9:
# 48 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 49 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 50 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 51 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_19
# 57 "data/maps/SlateportMarket/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 58 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_37
# 64 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 65 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 66 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 67 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 68 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_13
# 69 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 70 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_10:
# 73 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 74 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 75 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 76 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_22
# 82 "data/maps/SlateportMarket/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 83 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_40
# 89 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 90 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 91 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 92 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 93 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_13
# 94 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 95 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_11:
# 98 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 99 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 100 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 101 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_25
# 107 "data/maps/SlateportMarket/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 108 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_43
# 114 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 115 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 116 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 117 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 118 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_13
# 119 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 120 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_12:
# 123 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 124 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 125 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 126 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_28
# 132 "data/maps/SlateportMarket/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 133 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_46
# 139 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 140 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 141 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 142 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 143 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_13
# 144 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 145 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_13:
# 148 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 149 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 150 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 151 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_31
# 157 "data/maps/SlateportMarket/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 158 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainer_Lady_49
# 164 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 165 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 166 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 167 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 168 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_13
# 169 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 170 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_16:
# 26 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_11
# 27 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 28 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_19:
# 52 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_11
# 53 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 54 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_22:
# 77 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_11
# 78 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 79 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_25:
# 102 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_11
# 103 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 104 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_28:
# 127 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_11
# 128 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 129 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_31:
# 152 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_11
# 153 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 154 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_34:
# 34 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_12
# 35 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 36 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_37:
# 59 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_14
# 60 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 61 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_40:
# 84 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_15
# 85 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 86 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_43:
# 109 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_16
# 110 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 111 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_46:
# 134 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_17
# 135 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 136 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_49:
# 159 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_18
# 160 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 161 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end


Oldman_Mint_Mart::
# 182 "data/maps/SlateportMarket/scripts.pory"
	lock
# 183 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 184 "data/maps/SlateportMarket/scripts.pory"
	msgbox Oldman_Mint_Mart_Text_0
# 185 "data/maps/SlateportMarket/scripts.pory"
	pokemart MintShopSunday
# 186 "data/maps/SlateportMarket/scripts.pory"
	msgbox Oldman_Mint_Mart_Text_1
# 187 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 188 "data/maps/SlateportMarket/scripts.pory"
	release
	end


miscItemMartNPC::
# 193 "data/maps/SlateportMarket/scripts.pory"
	lock
# 194 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 195 "data/maps/SlateportMarket/scripts.pory"
	msgbox miscItemMartNPC_Text_0
# 196 "data/maps/SlateportMarket/scripts.pory"
	pokemart miscItemMart
# 197 "data/maps/SlateportMarket/scripts.pory"
	msgbox miscItemMartNPC_Text_1
# 198 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 199 "data/maps/SlateportMarket/scripts.pory"
	release
	end


berryMartNPC::
# 204 "data/maps/SlateportMarket/scripts.pory"
	lock
# 205 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 206 "data/maps/SlateportMarket/scripts.pory"
	msgbox berryMartNPC_Text_0
# 207 "data/maps/SlateportMarket/scripts.pory"
	pokemart miscBerryMart
# 208 "data/maps/SlateportMarket/scripts.pory"
	msgbox berryMartNPC_Text_1
# 209 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 210 "data/maps/SlateportMarket/scripts.pory"
	release
	end


stressedConsumerNPC::
# 215 "data/maps/SlateportMarket/scripts.pory"
	lock
# 216 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 217 "data/maps/SlateportMarket/scripts.pory"
	msgbox stressedConsumerNPC_Text_0
# 218 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 219 "data/maps/SlateportMarket/scripts.pory"
	release
	end


sailorShopperNPC::
# 224 "data/maps/SlateportMarket/scripts.pory"
	lock
# 225 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 226 "data/maps/SlateportMarket/scripts.pory"
	msgbox sailorShopperNPC_Text_0
# 227 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 228 "data/maps/SlateportMarket/scripts.pory"
	release
	end


sailorWatcherNPC::
# 233 "data/maps/SlateportMarket/scripts.pory"
	lock
# 234 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 235 "data/maps/SlateportMarket/scripts.pory"
	msgbox sailorWatcherNPC_Text_0
# 236 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 237 "data/maps/SlateportMarket/scripts.pory"
	release
	end


watcherOldMan::
# 242 "data/maps/SlateportMarket/scripts.pory"
	lock
# 243 "data/maps/SlateportMarket/scripts.pory"
	msgbox watcherOldMan_Text_0
# 244 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 245 "data/maps/SlateportMarket/scripts.pory"
	release
	end


azumarillPartner::
# 250 "data/maps/SlateportMarket/scripts.pory"
	lock
# 251 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 252 "data/maps/SlateportMarket/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 253 "data/maps/SlateportMarket/scripts.pory"
	waitmoncry
# 254 "data/maps/SlateportMarket/scripts.pory"
	release
	end


hyperTrainingSign::
# 259 "data/maps/SlateportMarket/scripts.pory"
	msgbox hyperTrainingSign_Text_0, MSGBOX_SIGN
	end


miscItemMartSign::
# 264 "data/maps/SlateportMarket/scripts.pory"
	msgbox miscItemMartSign_Text_0, MSGBOX_SIGN
	end


miscBerryMartSign::
# 269 "data/maps/SlateportMarket/scripts.pory"
	msgbox miscBerryMartSign_Text_0, MSGBOX_SIGN
	end


mysticTrader::
# 274 "data/maps/SlateportMarket/scripts.pory"
	lock
# 275 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 276 "data/maps/SlateportMarket/scripts.pory"
	goto_if_set FLAG_DAILY_STARTER_GACHA, mysticTrader_2
# 279 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_1
# 280 "data/maps/SlateportMarket/scripts.pory"
	checkmoney 5000
# 281 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq mysticTrader_6
# 286 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_3
# 287 "data/maps/SlateportMarket/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, mysticTrader_Text_4, mysticTrader_Text_5, mysticTrader_Text_6, mysticTrader_Text_7
# 288 "data/maps/SlateportMarket/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/SlateportMarket/scripts.pory"
	case 0, mysticTrader_10
# 325 "data/maps/SlateportMarket/scripts.pory"
	case 1, mysticTrader_11
# 361 "data/maps/SlateportMarket/scripts.pory"
	case 2, mysticTrader_12
# 396 "data/maps/SlateportMarket/scripts.pory"
	case 3, mysticTrader_13
mysticTrader_8:
# 401 "data/maps/SlateportMarket/scripts.pory"
	playbgm MUS_HG_RECEIVE_POKEMON, FALSE
# 402 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_12
# 403 "data/maps/SlateportMarket/scripts.pory"
	delay 100
# 404 "data/maps/SlateportMarket/scripts.pory"
	removemoney 5000
# 405 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_13
# 406 "data/maps/SlateportMarket/scripts.pory"
	setflag FLAG_DAILY_STARTER_GACHA
mysticTrader_1:
# 408 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

mysticTrader_2:
# 277 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_0
	goto mysticTrader_1

mysticTrader_6:
# 282 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_2
# 283 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

mysticTrader_10:
# 290 "data/maps/SlateportMarket/scripts.pory"
	random 9
# 291 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_8
# 292 "data/maps/SlateportMarket/scripts.pory"
	playse SE_CONTEST_PLACE
# 293 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 294 "data/maps/SlateportMarket/scripts.pory"
	delay 60
# 295 "data/maps/SlateportMarket/scripts.pory"
	switch VAR_RESULT
# 296 "data/maps/SlateportMarket/scripts.pory"
	case 0, mysticTrader_15
# 299 "data/maps/SlateportMarket/scripts.pory"
	case 1, mysticTrader_16
# 302 "data/maps/SlateportMarket/scripts.pory"
	case 2, mysticTrader_17
# 305 "data/maps/SlateportMarket/scripts.pory"
	case 3, mysticTrader_18
# 308 "data/maps/SlateportMarket/scripts.pory"
	case 4, mysticTrader_19
# 311 "data/maps/SlateportMarket/scripts.pory"
	case 5, mysticTrader_20
# 314 "data/maps/SlateportMarket/scripts.pory"
	case 6, mysticTrader_21
# 317 "data/maps/SlateportMarket/scripts.pory"
	case 7, mysticTrader_22
# 320 "data/maps/SlateportMarket/scripts.pory"
	case 8, mysticTrader_23
	goto mysticTrader_8

mysticTrader_11:
# 326 "data/maps/SlateportMarket/scripts.pory"
	random 9
# 327 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_9
# 328 "data/maps/SlateportMarket/scripts.pory"
	playse SE_CONTEST_PLACE
# 329 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 330 "data/maps/SlateportMarket/scripts.pory"
	delay 60
# 331 "data/maps/SlateportMarket/scripts.pory"
	switch VAR_RESULT
# 332 "data/maps/SlateportMarket/scripts.pory"
	case 0, mysticTrader_25
# 336 "data/maps/SlateportMarket/scripts.pory"
	case 1, mysticTrader_26
# 339 "data/maps/SlateportMarket/scripts.pory"
	case 2, mysticTrader_27
# 342 "data/maps/SlateportMarket/scripts.pory"
	case 3, mysticTrader_28
# 345 "data/maps/SlateportMarket/scripts.pory"
	case 4, mysticTrader_29
# 348 "data/maps/SlateportMarket/scripts.pory"
	case 5, mysticTrader_30
# 351 "data/maps/SlateportMarket/scripts.pory"
	case 6, mysticTrader_31
# 354 "data/maps/SlateportMarket/scripts.pory"
	case 7, mysticTrader_32
# 357 "data/maps/SlateportMarket/scripts.pory"
	case 8, mysticTrader_33
	goto mysticTrader_8

mysticTrader_12:
# 362 "data/maps/SlateportMarket/scripts.pory"
	random 9
# 363 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_10
# 364 "data/maps/SlateportMarket/scripts.pory"
	playse SE_CONTEST_PLACE
# 365 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 366 "data/maps/SlateportMarket/scripts.pory"
	delay 60
# 367 "data/maps/SlateportMarket/scripts.pory"
	switch VAR_RESULT
# 368 "data/maps/SlateportMarket/scripts.pory"
	case 0, mysticTrader_35
# 371 "data/maps/SlateportMarket/scripts.pory"
	case 1, mysticTrader_36
# 374 "data/maps/SlateportMarket/scripts.pory"
	case 2, mysticTrader_37
# 377 "data/maps/SlateportMarket/scripts.pory"
	case 3, mysticTrader_38
# 380 "data/maps/SlateportMarket/scripts.pory"
	case 4, mysticTrader_39
# 383 "data/maps/SlateportMarket/scripts.pory"
	case 5, mysticTrader_40
# 386 "data/maps/SlateportMarket/scripts.pory"
	case 6, mysticTrader_41
# 389 "data/maps/SlateportMarket/scripts.pory"
	case 7, mysticTrader_42
# 392 "data/maps/SlateportMarket/scripts.pory"
	case 8, mysticTrader_43
	goto mysticTrader_8

mysticTrader_13:
# 397 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_11
# 398 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

mysticTrader_15:
# 297 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 298 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
	goto mysticTrader_8

mysticTrader_16:
# 300 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 301 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
	goto mysticTrader_8

mysticTrader_17:
# 303 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 304 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
	goto mysticTrader_8

mysticTrader_18:
# 306 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 307 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIMCHAR
	goto mysticTrader_8

mysticTrader_19:
# 309 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 310 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TEPIG
	goto mysticTrader_8

mysticTrader_20:
# 312 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 313 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FENNEKIN
	goto mysticTrader_8

mysticTrader_21:
# 315 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 316 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITTEN
	goto mysticTrader_8

mysticTrader_22:
# 318 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 319 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SCORBUNNY
	goto mysticTrader_8

mysticTrader_23:
# 321 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 322 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FUECOCO
	goto mysticTrader_8

mysticTrader_25:
# 333 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 334 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
	goto mysticTrader_8

mysticTrader_26:
# 337 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 338 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
	goto mysticTrader_8

mysticTrader_27:
# 340 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 341 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
	goto mysticTrader_8

mysticTrader_28:
# 343 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 344 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
	goto mysticTrader_8

mysticTrader_29:
# 346 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 347 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OSHAWOTT
	goto mysticTrader_8

mysticTrader_30:
# 349 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 350 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_FROAKIE
	goto mysticTrader_8

mysticTrader_31:
# 352 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 353 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POPPLIO
	goto mysticTrader_8

mysticTrader_32:
# 355 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 356 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SOBBLE
	goto mysticTrader_8

mysticTrader_33:
# 358 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 359 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_QUAXLY
	goto mysticTrader_8

mysticTrader_35:
# 369 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 370 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
	goto mysticTrader_8

mysticTrader_36:
# 372 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 373 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
	goto mysticTrader_8

mysticTrader_37:
# 375 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 376 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
	goto mysticTrader_8

mysticTrader_38:
# 378 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 379 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
	goto mysticTrader_8

mysticTrader_39:
# 381 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 382 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SNIVY
	goto mysticTrader_8

mysticTrader_40:
# 384 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 385 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
	goto mysticTrader_8

mysticTrader_41:
# 387 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 388 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROWLET
	goto mysticTrader_8

mysticTrader_42:
# 390 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 391 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_GROOKEY
	goto mysticTrader_8

mysticTrader_43:
# 393 "data/maps/SlateportMarket/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 394 "data/maps/SlateportMarket/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPRIGATITO
	goto mysticTrader_8


mysticSign::
# 413 "data/maps/SlateportMarket/scripts.pory"
	lock
# 414 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticSign_Text_0
# 415 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 416 "data/maps/SlateportMarket/scripts.pory"
	release
	end


	.align 2
# 420 "data/maps/SlateportMarket/scripts.pory"
miscBerryMart:
# 421 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 422 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 423 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 424 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 425 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 426 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 427 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 428 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 429 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
	.2byte ITEM_NONE

	.align 2
# 432 "data/maps/SlateportMarket/scripts.pory"
miscItemMart:
# 433 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 434 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 435 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 436 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 437 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_RING_TARGET
	.2byte ITEM_NONE

	.align 2
# 440 "data/maps/SlateportMarket/scripts.pory"
MintShopSunday:
# 441 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 442 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 443 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 444 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 445 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 446 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 447 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_CALM_MINT
# 448 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 449 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 450 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 451 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 452 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 453 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LAX_MINT
# 454 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 455 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_MILD_MINT
# 456 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 457 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 458 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 459 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 460 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_RASH_MINT
# 461 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 462 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 463 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 464 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_NONE

HyperTrainer_Lady_Text_0:
# 9 "data/maps/SlateportMarket/scripts.pory"
	.string "Hello there young one. Are you\n"
	.string "interested in strenghtening your\l"
	.string "Pokemon? I may not look like it, but I\l"
	.string "was quite a drill sergeant in my youth!\l"
	.string "If you find me some silvery bottle caps,\l"
	.string "I can unlock your Pokemon's true\l"
	.string "potential.$"

HyperTrainer_Lady_Text_1:
# 14 "data/maps/SlateportMarket/scripts.pory"
	.string "Come back when you have found some\n"
	.string "bottle caps.$"

HyperTrainer_Lady_Text_2:
# 18 "data/maps/SlateportMarket/scripts.pory"
	.string "Which stat would you like to train?$"

HyperTrainer_Lady_Text_3:
# 19 "data/maps/SlateportMarket/scripts.pory"
	.string "HP$"

HyperTrainer_Lady_Text_4:
# 19 "data/maps/SlateportMarket/scripts.pory"
	.string "Attack$"

HyperTrainer_Lady_Text_5:
# 19 "data/maps/SlateportMarket/scripts.pory"
	.string "Defense$"

HyperTrainer_Lady_Text_6:
# 19 "data/maps/SlateportMarket/scripts.pory"
	.string "Sp. Atk$"

HyperTrainer_Lady_Text_7:
# 19 "data/maps/SlateportMarket/scripts.pory"
	.string "Sp. Def$"

HyperTrainer_Lady_Text_8:
# 19 "data/maps/SlateportMarket/scripts.pory"
	.string "Speed$"

HyperTrainer_Lady_Text_9:
# 19 "data/maps/SlateportMarket/scripts.pory"
	.string "Cancel$"

HyperTrainer_Lady_Text_10:
# 22 "data/maps/SlateportMarket/scripts.pory"
	.string "Alright, Please choose a Pokemon to\n"
	.string "train.$"

HyperTrainer_Lady_Text_11:
# 26 "data/maps/SlateportMarket/scripts.pory"
	.string "Having trouble deciding? Take your\n"
	.string "time.$"

HyperTrainer_Lady_Text_12:
# 34 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's HP is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_13:
# 43 "data/maps/SlateportMarket/scripts.pory"
	.string "It's done. Your Pokémon looks much\n"
	.string "stronger now.$"

HyperTrainer_Lady_Text_14:
# 59 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Attack is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_15:
# 84 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Defense is already at\n"
	.string "its peak!$"

HyperTrainer_Lady_Text_16:
# 109 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Sp. Atk is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_17:
# 134 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Sp. Def is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_18:
# 159 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Speed is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_19:
# 173 "data/maps/SlateportMarket/scripts.pory"
	.string "Changed your mind? Fine then.$"

Oldman_Mint_Mart_Text_0:
# 184 "data/maps/SlateportMarket/scripts.pory"
	.string "Hello! Are you interested in fresh mints\n"
	.string "I've harvested today?$"

Oldman_Mint_Mart_Text_1:
# 186 "data/maps/SlateportMarket/scripts.pory"
	.string "Come again soon.$"

miscItemMartNPC_Text_0:
# 195 "data/maps/SlateportMarket/scripts.pory"
	.string "Hey you! Take a loot at my wares!$"

miscItemMartNPC_Text_1:
# 197 "data/maps/SlateportMarket/scripts.pory"
	.string "Come back to buy more soon!$"

berryMartNPC_Text_0:
# 206 "data/maps/SlateportMarket/scripts.pory"
	.string "Greetings. May I interest you with\n"
	.string "these rare berries?$"

berryMartNPC_Text_1:
# 208 "data/maps/SlateportMarket/scripts.pory"
	.string "I hope to see you again!$"

stressedConsumerNPC_Text_0:
# 217 "data/maps/SlateportMarket/scripts.pory"
	.string "Ever since this harbor market was built,\n"
	.string "many strong trainers have started\l"
	.string "visiting the city.$"

sailorShopperNPC_Text_0:
# 226 "data/maps/SlateportMarket/scripts.pory"
	.string "Stocking up supplies for long trips is a\n"
	.string "must for a sailor. Good thing Slateport\l"
	.string "offers it all!$"

sailorWatcherNPC_Text_0:
# 235 "data/maps/SlateportMarket/scripts.pory"
	.string "Ever seen a Gyarados leap over the bow\n"
	.string "at sunrise? There's no sight more\l"
	.string "majestic... or terrifying, if you're not\l"
	.string "prepared!$"

watcherOldMan_Text_0:
# 243 "data/maps/SlateportMarket/scripts.pory"
	.string "This place used to be nothing more than\n"
	.string "a few houses in my youth. Time truly\l"
	.string "travels fast when you're with Pokémon.\l"
	.string "I only wish I had explored the world\l"
	.string "more.$"

hyperTrainingSign_Text_0:
# 259 "data/maps/SlateportMarket/scripts.pory"
	.string "Former drill sergeant offering hyper\n"
	.string "training services.$"

miscItemMartSign_Text_0:
# 264 "data/maps/SlateportMarket/scripts.pory"
	.string "Market goods for affordable prices!\n"
	.string "Buy!!$"

miscBerryMartSign_Text_0:
# 269 "data/maps/SlateportMarket/scripts.pory"
	.string "Rare berries from distant lands.$"

mysticTrader_Text_0:
# 277 "data/maps/SlateportMarket/scripts.pory"
	.string "My apogies, but you've already had your\n"
	.string "daily box of surprises. Come back\l"
	.string "tomorrow.$"

mysticTrader_Text_1:
# 279 "data/maps/SlateportMarket/scripts.pory"
	.string "Greetings traveller, would you be\n"
	.string "interesting in buying one of my lootb- I\l"
	.string "mean surprise boxes! I can offer you\l"
	.string "one each day for 5000 Pokedollars.$"

mysticTrader_Text_2:
# 282 "data/maps/SlateportMarket/scripts.pory"
	.string "Oh you're too poor for a surprise box.$"

mysticTrader_Text_3:
# 286 "data/maps/SlateportMarket/scripts.pory"
	.string "Each box contains a rare Pokémon. So\n"
	.string "come on, pick one!$"

mysticTrader_Text_4:
# 287 "data/maps/SlateportMarket/scripts.pory"
	.string "Red$"

mysticTrader_Text_5:
# 287 "data/maps/SlateportMarket/scripts.pory"
	.string "Blue$"

mysticTrader_Text_6:
# 287 "data/maps/SlateportMarket/scripts.pory"
	.string "Green$"

mysticTrader_Text_7:
# 287 "data/maps/SlateportMarket/scripts.pory"
	.string "Decline$"

mysticTrader_Text_8:
# 291 "data/maps/SlateportMarket/scripts.pory"
	.string "You peer into the red box and find...!$"

mysticTrader_Text_9:
# 327 "data/maps/SlateportMarket/scripts.pory"
	.string "You peer into the blue box and find...!$"

mysticTrader_Text_10:
# 363 "data/maps/SlateportMarket/scripts.pory"
	.string "You peer into the green box and find...!$"

mysticTrader_Text_11:
# 397 "data/maps/SlateportMarket/scripts.pory"
	.string "O-oh, not into a game of chance? Shame.$"

mysticTrader_Text_12:
# 402 "data/maps/SlateportMarket/scripts.pory"
	.string "{STR_VAR_1}! Amazing!$"

mysticTrader_Text_13:
# 405 "data/maps/SlateportMarket/scripts.pory"
	.string "Hope you are satisfied with this\n"
	.string "outcome. Come back tomorrow if not.\l"
	.string "Heeheehee...$"

mysticSign_Text_0:
# 414 "data/maps/SlateportMarket/scripts.pory"
	.string "Mystic Maya's surprise boxes!$"
