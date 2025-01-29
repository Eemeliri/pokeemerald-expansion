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
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, HyperTrainer_Lady_Text_3, HyperTrainer_Lady_Text_4, HyperTrainer_Lady_Text_5, HyperTrainer_Lady_Text_6, HyperTrainer_Lady_Text_7, HyperTrainer_Lady_Text_8
# 20 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 21 "data/maps/SlateportMarket/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/SlateportMarket/scripts.pory"
	case 0, HyperTrainer_Lady_8
# 48 "data/maps/SlateportMarket/scripts.pory"
	case 1, HyperTrainer_Lady_9
# 74 "data/maps/SlateportMarket/scripts.pory"
	case 2, HyperTrainer_Lady_10
# 100 "data/maps/SlateportMarket/scripts.pory"
	case 3, HyperTrainer_Lady_11
# 126 "data/maps/SlateportMarket/scripts.pory"
	case 4, HyperTrainer_Lady_12
# 152 "data/maps/SlateportMarket/scripts.pory"
	case 5, HyperTrainer_Lady_13
# 179 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_18
# 180 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 181 "data/maps/SlateportMarket/scripts.pory"
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
# 23 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_9
# 24 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 25 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 26 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_16
# 32 "data/maps/SlateportMarket/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 33 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_HP, VAR_0x8008
# 34 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8008, FALSE
	goto_if_eq HyperTrainer_Lady_34
# 41 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 42 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 43 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 44 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_12
# 45 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 46 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_9:
# 49 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_9
# 50 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 51 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 52 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_19
# 58 "data/maps/SlateportMarket/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 59 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8008
# 60 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8008, FALSE
	goto_if_eq HyperTrainer_Lady_37
# 67 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 68 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 69 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 70 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_12
# 71 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 72 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_10:
# 75 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_9
# 76 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 77 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 78 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_22
# 84 "data/maps/SlateportMarket/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 85 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8008
# 86 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8008, FALSE
	goto_if_eq HyperTrainer_Lady_40
# 93 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 94 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 95 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 96 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_12
# 97 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 98 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_11:
# 101 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_9
# 102 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 103 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 104 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_25
# 110 "data/maps/SlateportMarket/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 111 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8008
# 112 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8008, FALSE
	goto_if_eq HyperTrainer_Lady_43
# 119 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 120 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 121 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 122 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_12
# 123 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 124 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_12:
# 127 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_9
# 128 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 129 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 130 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_28
# 136 "data/maps/SlateportMarket/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 137 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8008
# 138 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8008, FALSE
	goto_if_eq HyperTrainer_Lady_46
# 145 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 146 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 147 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 148 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_12
# 149 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 150 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_13:
# 153 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_9
# 154 "data/maps/SlateportMarket/scripts.pory"
	special ChoosePartyMon
# 155 "data/maps/SlateportMarket/scripts.pory"
	waitstate
# 156 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq HyperTrainer_Lady_31
# 162 "data/maps/SlateportMarket/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 163 "data/maps/SlateportMarket/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8008
# 164 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_0x8008, FALSE
	goto_if_eq HyperTrainer_Lady_49
# 171 "data/maps/SlateportMarket/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 172 "data/maps/SlateportMarket/scripts.pory"
	waitfanfare
# 173 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 174 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_12
# 175 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 176 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_16:
# 27 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 28 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 29 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_19:
# 53 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 54 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 55 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_22:
# 79 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 80 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 81 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_25:
# 105 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 106 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 107 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_28:
# 131 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 132 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 133 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_31:
# 157 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_10
# 158 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 159 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_34:
# 35 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_11
# 36 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 37 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_37:
# 61 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_13
# 62 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 63 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_40:
# 87 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_14
# 88 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 89 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_43:
# 113 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_15
# 114 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 115 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_46:
# 139 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_16
# 140 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 141 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

HyperTrainer_Lady_49:
# 165 "data/maps/SlateportMarket/scripts.pory"
	msgbox HyperTrainer_Lady_Text_17
# 166 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 167 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end


Oldman_Mint_Mart::
# 188 "data/maps/SlateportMarket/scripts.pory"
	lock
# 189 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 190 "data/maps/SlateportMarket/scripts.pory"
	msgbox Oldman_Mint_Mart_Text_0
# 191 "data/maps/SlateportMarket/scripts.pory"
	pokemart MintShopSunday
# 192 "data/maps/SlateportMarket/scripts.pory"
	msgbox Oldman_Mint_Mart_Text_1
# 193 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 194 "data/maps/SlateportMarket/scripts.pory"
	release
	end


miscItemMartNPC::
# 199 "data/maps/SlateportMarket/scripts.pory"
	lock
# 200 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 201 "data/maps/SlateportMarket/scripts.pory"
	msgbox miscItemMartNPC_Text_0
# 202 "data/maps/SlateportMarket/scripts.pory"
	pokemart miscItemMart
# 203 "data/maps/SlateportMarket/scripts.pory"
	msgbox miscItemMartNPC_Text_1
# 204 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 205 "data/maps/SlateportMarket/scripts.pory"
	release
	end


berryMartNPC::
# 210 "data/maps/SlateportMarket/scripts.pory"
	lock
# 211 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 212 "data/maps/SlateportMarket/scripts.pory"
	msgbox berryMartNPC_Text_0
# 213 "data/maps/SlateportMarket/scripts.pory"
	pokemart miscBerryMart
# 214 "data/maps/SlateportMarket/scripts.pory"
	msgbox berryMartNPC_Text_1
# 215 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 216 "data/maps/SlateportMarket/scripts.pory"
	release
	end


stressedConsumerNPC::
# 221 "data/maps/SlateportMarket/scripts.pory"
	lock
# 222 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 223 "data/maps/SlateportMarket/scripts.pory"
	msgbox stressedConsumerNPC_Text_0
# 224 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 225 "data/maps/SlateportMarket/scripts.pory"
	release
	end


sailorShopperNPC::
# 230 "data/maps/SlateportMarket/scripts.pory"
	lock
# 231 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 232 "data/maps/SlateportMarket/scripts.pory"
	msgbox sailorShopperNPC_Text_0
# 233 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 234 "data/maps/SlateportMarket/scripts.pory"
	release
	end


sailorWatcherNPC::
# 239 "data/maps/SlateportMarket/scripts.pory"
	lock
# 240 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 241 "data/maps/SlateportMarket/scripts.pory"
	msgbox sailorWatcherNPC_Text_0
# 242 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 243 "data/maps/SlateportMarket/scripts.pory"
	release
	end


watcherOldMan::
# 248 "data/maps/SlateportMarket/scripts.pory"
	lock
# 249 "data/maps/SlateportMarket/scripts.pory"
	msgbox watcherOldMan_Text_0
# 250 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 251 "data/maps/SlateportMarket/scripts.pory"
	release
	end


azumarillPartner::
# 256 "data/maps/SlateportMarket/scripts.pory"
	lock
# 257 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 258 "data/maps/SlateportMarket/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 259 "data/maps/SlateportMarket/scripts.pory"
	waitmoncry
# 260 "data/maps/SlateportMarket/scripts.pory"
	release
	end


hyperTrainingSign::
# 265 "data/maps/SlateportMarket/scripts.pory"
	msgbox hyperTrainingSign_Text_0, MSGBOX_SIGN
	end


miscItemMartSign::
# 270 "data/maps/SlateportMarket/scripts.pory"
	msgbox miscItemMartSign_Text_0, MSGBOX_SIGN
	end


miscBerryMartSign::
# 275 "data/maps/SlateportMarket/scripts.pory"
	msgbox miscBerryMartSign_Text_0, MSGBOX_SIGN
	end


mysticTrader::
# 280 "data/maps/SlateportMarket/scripts.pory"
	lock
# 281 "data/maps/SlateportMarket/scripts.pory"
	faceplayer
# 282 "data/maps/SlateportMarket/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE, mysticTrader_5
mysticTrader_4:
# 286 "data/maps/SlateportMarket/scripts.pory"
	goto_if_set FLAG_ITEM_ALAKAZITE, mysticTrader_3
# 291 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_2
	checkitem ITEM_PSYCHIC_GEM
# 0 "data/maps/SlateportMarket/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq mysticTrader_9
mysticTrader_8:
# 299 "data/maps/SlateportMarket/scripts.pory"
	releaseall
	end

mysticTrader_2:
# 283 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_0
# 284 "data/maps/SlateportMarket/scripts.pory"
	release
	end

mysticTrader_3:
# 287 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_1
# 288 "data/maps/SlateportMarket/scripts.pory"
	release
	end

mysticTrader_5:
# 282 "data/maps/SlateportMarket/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, mysticTrader_2
	goto mysticTrader_4

mysticTrader_9:
# 293 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticTrader_Text_3
# 294 "data/maps/SlateportMarket/scripts.pory"
	giveitem ITEM_ALAKAZITE
# 295 "data/maps/SlateportMarket/scripts.pory"
	removeitem ITEM_PSYCHIC_GEM, 1
# 296 "data/maps/SlateportMarket/scripts.pory"
	setflag FLAG_ITEM_ALAKAZITE
# 297 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
	goto mysticTrader_8


mysticSign::
# 304 "data/maps/SlateportMarket/scripts.pory"
	lock
# 305 "data/maps/SlateportMarket/scripts.pory"
	msgbox mysticSign_Text_0
# 306 "data/maps/SlateportMarket/scripts.pory"
	waitmessage
# 307 "data/maps/SlateportMarket/scripts.pory"
	release
	end


	.align 2
# 311 "data/maps/SlateportMarket/scripts.pory"
miscBerryMart:
# 312 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 313 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 314 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 315 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 316 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 317 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 318 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 319 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 320 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
	.2byte ITEM_NONE

	.align 2
# 323 "data/maps/SlateportMarket/scripts.pory"
miscItemMart:
# 324 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 325 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 326 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 327 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
	.2byte ITEM_NONE

	.align 2
# 330 "data/maps/SlateportMarket/scripts.pory"
MintShopSunday:
# 331 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 332 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 333 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 334 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 335 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 336 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 337 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_CALM_MINT
# 338 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 339 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 340 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 341 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 342 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 343 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LAX_MINT
# 344 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 345 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_MILD_MINT
# 346 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 347 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 348 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 349 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 350 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_RASH_MINT
# 351 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 352 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 353 "data/maps/SlateportMarket/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 354 "data/maps/SlateportMarket/scripts.pory"
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
# 23 "data/maps/SlateportMarket/scripts.pory"
	.string "Alright, Please choose a Pokemon to\n"
	.string "train.$"

HyperTrainer_Lady_Text_10:
# 27 "data/maps/SlateportMarket/scripts.pory"
	.string "Having trouble deciding? Take your\n"
	.string "time.$"

HyperTrainer_Lady_Text_11:
# 35 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's HP is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_12:
# 44 "data/maps/SlateportMarket/scripts.pory"
	.string "It's done. Your Pokémon looks much\n"
	.string "stronger now.$"

HyperTrainer_Lady_Text_13:
# 61 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Attack is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_14:
# 87 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Defense is already at\n"
	.string "its peak!$"

HyperTrainer_Lady_Text_15:
# 113 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Sp. Atk is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_16:
# 139 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Sp. Def is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_17:
# 165 "data/maps/SlateportMarket/scripts.pory"
	.string "That Pokémon's Speed is already at its\n"
	.string "peak!$"

HyperTrainer_Lady_Text_18:
# 179 "data/maps/SlateportMarket/scripts.pory"
	.string "Changed your mind? Fine then.$"

Oldman_Mint_Mart_Text_0:
# 190 "data/maps/SlateportMarket/scripts.pory"
	.string "Hello! Are you interested in fresh mints\n"
	.string "I've harvested today?$"

Oldman_Mint_Mart_Text_1:
# 192 "data/maps/SlateportMarket/scripts.pory"
	.string "Come again soon.$"

miscItemMartNPC_Text_0:
# 201 "data/maps/SlateportMarket/scripts.pory"
	.string "Hey you! Take a loot at my wares!$"

miscItemMartNPC_Text_1:
# 203 "data/maps/SlateportMarket/scripts.pory"
	.string "Come back to buy more soon!$"

berryMartNPC_Text_0:
# 212 "data/maps/SlateportMarket/scripts.pory"
	.string "Greetings. May I interest you with\n"
	.string "these rare berries?$"

berryMartNPC_Text_1:
# 214 "data/maps/SlateportMarket/scripts.pory"
	.string "I hope to see you again!$"

stressedConsumerNPC_Text_0:
# 223 "data/maps/SlateportMarket/scripts.pory"
	.string "Ever since this harbor market was built,\n"
	.string "many strong trainers have started\l"
	.string "visiting the city.$"

sailorShopperNPC_Text_0:
# 232 "data/maps/SlateportMarket/scripts.pory"
	.string "Stocking up supplies for long trips is a\n"
	.string "must for a sailor. Good thing Slateport\l"
	.string "offers it all!$"

sailorWatcherNPC_Text_0:
# 241 "data/maps/SlateportMarket/scripts.pory"
	.string "Ever seen a Gyarados leap over the bow\n"
	.string "at sunrise? There's no sight more\l"
	.string "majestic... or terrifying, if you're not\l"
	.string "prepared!$"

watcherOldMan_Text_0:
# 249 "data/maps/SlateportMarket/scripts.pory"
	.string "This place used to be nothing more than\n"
	.string "a few houses in my youth. Time truly\l"
	.string "travels fast when you're with Pokémon.\l"
	.string "I only wish I had explored the world\l"
	.string "more.$"

hyperTrainingSign_Text_0:
# 265 "data/maps/SlateportMarket/scripts.pory"
	.string "Former drill sergeant offering hyper\n"
	.string "training services.$"

miscItemMartSign_Text_0:
# 270 "data/maps/SlateportMarket/scripts.pory"
	.string "Market goods for affordable prices!\n"
	.string "Buy!!$"

miscBerryMartSign_Text_0:
# 275 "data/maps/SlateportMarket/scripts.pory"
	.string "Rare berries from distant lands.$"

mysticTrader_Text_0:
# 283 "data/maps/SlateportMarket/scripts.pory"
	.string "I knew you were destined for greatness,\n"
	.string "champion of Hoenn.$"

mysticTrader_Text_1:
# 287 "data/maps/SlateportMarket/scripts.pory"
	.string "I look forward to seeing your progress.$"

mysticTrader_Text_2:
# 291 "data/maps/SlateportMarket/scripts.pory"
	.string "You! Yes you, I sense great potential\n"
	.string "within you. I can aid your growth\l"
	.string "towards greatness if you bring me a\l"
	.string "Psychic Gem.$"

mysticTrader_Text_3:
# 293 "data/maps/SlateportMarket/scripts.pory"
	.string "Yes! That is truly a beatiful specimen\n"
	.string "of a Psychic Gem! As promised I will\l"
	.string "grant you this stone to foster your\l"
	.string "growth towards greatness.$"

mysticSign_Text_0:
# 305 "data/maps/SlateportMarket/scripts.pory"
	.string "Mystic Maya sees all.$"
