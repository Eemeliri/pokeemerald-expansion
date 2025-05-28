/*
battle_tower_spreads.h
	set up EVs, IVs, ability types, items, moves, ball type, etc, for trainers in the battle tower.
*/	

const struct BattleTowerSpread gFrontierSpreads[] =
{
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 132,
		.spAtkEv = 112,
		.spdEv = 12,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CHLOROPHYLL
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SLUDGE_BOMB,
			MOVE_LEECH_SEED,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERGROW
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SLUDGE_BOMB,
			MOVE_EARTH_POWER,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CHLOROPHYLL
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERGROW
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_INGRAIN,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CHLOROPHYLL
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SLUDGE_BOMB,
			MOVE_SLEEP_POWDER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_BLAZE_KICK,
			MOVE_DUAL_WINGBEAT,
			MOVE_EARTHQUAKE,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_CHARIZARDITE_X,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_DRAGON_CLAW,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_CHARIZARDITE_X,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_DRAGON_CLAW,
			MOVE_ROOST,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_CHARIZARDITE_Y,
		.moves =
		{
			MOVE_WEATHER_BALL,
			MOVE_SOLAR_BEAM,
			MOVE_AIR_SLASH,
			MOVE_SCORCHING_SANDS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHARIZARD,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_CHARIZARDITE_Y,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_SOLAR_BEAM,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_BLASTOISINITE,
		.moves =
		{
			MOVE_WATER_PULSE,
			MOVE_AURA_SPHERE,
			MOVE_DARK_PULSE,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_BLASTOISINITE,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_RAPID_SPIN,
			MOVE_AURA_SPHERE,
			MOVE_DARK_PULSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 176,
		.atkEv = 252,
		.spdEv = 80,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ICE_PUNCH,
			MOVE_ZEN_HEADBUTT,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RAINDISH
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_AQUA_RING,
			MOVE_SUBSTITUTE,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RAINDISH
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLIP_TURN,
			MOVE_FAKE_OUT,
			MOVE_FOLLOW_ME,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BUTTERFREE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPOUNDEYES
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_HURRICANE,
			MOVE_SLEEP_POWDER,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_BUTTERFREE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TINTEDLENS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AIR_SLASH,
			MOVE_QUIVER_DANCE,
			MOVE_SUBSTITUTE,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BUTTERFREE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPOUNDEYES
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_SLEEP_POWDER,
			MOVE_NIGHTMARE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BUTTERFREE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TINTEDLENS
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_POLLEN_PUFF,
			MOVE_ROOST,
			MOVE_TAILWIND,
			MOVE_SAFEGUARD,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_BEEDRILL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_BUG_GEM,
		.moves =
		{
			MOVE_FELL_STINGER,
			MOVE_DRILL_RUN,
			MOVE_NEEDLE_ARM,
			MOVE_THIEF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEEDRILL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNIPER
		.item = ITEM_BEEDRILLITE,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_DRILL_RUN,
			MOVE_KNOCK_OFF,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEEDRILL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWARM
		.item = ITEM_BEEDRILLITE,
		.moves =
		{
			MOVE_FELL_STINGER,
			MOVE_POISON_JAB,
			MOVE_DRILL_RUN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEEDRILL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNIPER
		.item = ITEM_BEEDRILLITE,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_POISON_JAB,
			MOVE_BRICK_BREAK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PIDGEOT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALEWINGS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_RETURN,
			MOVE_STEEL_WING,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PIDGEOT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALEWINGS
		.item = ITEM_CHARTI_BERRY,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_MIRROR_MOVE,
			MOVE_FEATHERDANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PIDGEOT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALEWINGS
		.item = ITEM_PIDGEOTITE,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_HEAT_WAVE,
			MOVE_U_TURN,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PIDGEOT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_KEENEYE
		.item = ITEM_PIDGEOTITE,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_HEAT_WAVE,
			MOVE_HYPER_BEAM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RATICATE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_SUCKER_PUNCH,
			MOVE_U_TURN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RATICATE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_HYPER_FANG,
			MOVE_CRUNCH,
			MOVE_PSYCHIC_FANGS,
			MOVE_ICE_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RATICATE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUSTLE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_WILD_CHARGE,
			MOVE_THROAT_CHOP,
			MOVE_QUICK_ATTACK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RATICATE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GUTS
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_ASSURANCE,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RATICATE_ALOLA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GLUTTONY
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_KNOCK_OFF,
			MOVE_PSYCHIC_FANGS,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RATICATE_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_CRUNCH,
			MOVE_COUNTER,
			MOVE_QUICK_ATTACK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RATICATE_ALOLA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GLUTTONY
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_FINAL_GAMBIT,
			MOVE_TOXIC,
			MOVE_SCARY_FACE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RATICATE_ALOLA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SNARL,
			MOVE_U_TURN,
			MOVE_ENDEAVOR,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FEAROW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRILLBEAK
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_DRILL_PECK,
			MOVE_DRILL_RUN,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FEAROW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNIPER
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_BEAK_BLAST,
			MOVE_DRILL_RUN,
			MOVE_FOCUS_ENERGY,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FEAROW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRILLBEAK
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DRILL_PECK,
			MOVE_U_TURN,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FEAROW,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_KEENEYE
		.item = ITEM_WACAN_BERRY,
		.moves =
		{
			MOVE_BEAK_BLAST,
			MOVE_TAILWIND,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARBOK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_GUNK_SHOT,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_SCALE_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARBOK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MERCILESS
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_EARTHQUAKE,
			MOVE_SUCKER_PUNCH,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARBOK,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MERCILESS
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_GUNK_SHOT,
			MOVE_DRAGON_TAIL,
			MOVE_COIL,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARBOK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_EJECT_BUTTON,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_PURSUIT,
			MOVE_GLARE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAICHU,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FOCUS_BLAST,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAICHU,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STATIC
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_VOLT_TACKLE,
			MOVE_EXTREMESPEED,
			MOVE_PLAY_ROUGH,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAICHU,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CHARGE_BEAM,
			MOVE_CHARM,
			MOVE_SWEET_KISS,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAICHU,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_EXTREMESPEED,
			MOVE_KNOCK_OFF,
			MOVE_ENCORE,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAICHU_ALOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SURGESURFER
		.item = ITEM_ALORAICHIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_PSYSHOCK,
			MOVE_FOCUS_BLAST,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAICHU_ALOLA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SURGESURFER
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_PSYCHIC,
			MOVE_FOCUS_BLAST,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAICHU_ALOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SURGESURFER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_YAWN,
			MOVE_ENCORE,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAICHU_ALOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SURGESURFER
		.item = ITEM_PSYCHIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_PSYCHIC,
			MOVE_FAKE_OUT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDSLASH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDRUSH
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_KNOCK_OFF,
			MOVE_RAPID_SPIN,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDSLASH,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDRUSH
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_SWORDS_DANCE,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDSLASH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDRUSH
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_POISON_JAB,
			MOVE_X_SCISSOR,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDSLASH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDRUSH
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_POISON_JAB,
			MOVE_RAPID_SPIN,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SANDSLASH_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLUSHRUSH
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_EARTHQUAKE,
			MOVE_RAPID_SPIN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDSLASH_ALOLA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLUSHRUSH
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_IRON_HEAD,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDSLASH_ALOLA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SNOWCLOAK
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_ICE_BALL,
			MOVE_ROLLOUT,
			MOVE_DOUBLE_TEAM,
			MOVE_DEFENSE_CURL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDSLASH_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLUSHRUSH
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_ABSORB_BULB,
		.moves =
		{
			MOVE_EARTH_POWER,
			MOVE_SHELL_SIDE_ARM,
			MOVE_THUNDERBOLT,
			MOVE_SHADOW_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_SHELL_SIDE_ARM,
			MOVE_EARTHQUAKE,
			MOVE_SUPERPOWER,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUEENLYMAJESTY
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_ROAR,
			MOVE_STEALTH_ROCK,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIDOQUEEN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUEENLYMAJESTY
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIDOKING,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_EARTH_POWER,
			MOVE_SLUDGE_WAVE,
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIDOKING,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_POISON_TAIL,
			MOVE_DRILL_RUN,
			MOVE_SHADOW_CLAW,
			MOVE_FOCUS_ENERGY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIDOKING,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_EARTH_POWER,
			MOVE_FOCUS_BLAST,
			MOVE_ICE_BEAM,
			MOVE_HEAD_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIDOKING,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_POISONPOINT
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_ROAR,
			MOVE_STEALTH_ROCK,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_RED_CARD,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_KNOCK_OFF,
			MOVE_STEALTH_ROCK,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_WISH,
			MOVE_HEAL_BELL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_STORED_POWER,
			MOVE_CALM_MIND,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 164,
		.spDefEv = 92,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_SAFETY_GOGGLES,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_FOLLOW_ME,
			MOVE_THUNDER_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINETALES,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DROUGHT
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SOLAR_BEAM,
			MOVE_PSYSHOCK,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINETALES,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DROUGHT
		.item = ITEM_CHARTI_BERRY,
		.moves =
		{
			MOVE_SCORCHING_SANDS,
			MOVE_HEX,
			MOVE_WILL_O_WISP,
			MOVE_CONFUSE_RAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINETALES,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 8,
		.spDefEv = 252,
		.spdEv = 248,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DROUGHT
		.item = ITEM_POISONIUM_Z,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_SNORE,
			MOVE_TOXIC,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINETALES,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DROUGHT
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_WILL_O_WISP,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINETALES_ALOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNOWWARNING
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_MOONBLAST,
			MOVE_PSYSHOCK,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINETALES_ALOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNOWWARNING
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_MOONBLAST,
			MOVE_NASTY_PLOT,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINETALES_ALOLA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNOWWARNING
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_TOXIC,
			MOVE_AURORA_VEIL,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINETALES_ALOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.defEv = 40,
		.spAtkEv = 88,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNOWWARNING
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_FREEZE_DRY,
			MOVE_ENCORE,
			MOVE_AURORA_VEIL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WIGGLYTUFF,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUGEPOWER
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_DOUBLE_EDGE,
			MOVE_FIRE_PUNCH,
			MOVE_THUNDER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WIGGLYTUFF,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CUTECHARM
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_WISH,
			MOVE_STEALTH_ROCK,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WIGGLYTUFF,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CUTECHARM
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_HEAL_PULSE,
			MOVE_MAGIC_COAT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WIGGLYTUFF,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.defEv = 128,
		.spAtkEv = 252,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPETITIVE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_DAZZLING_GLEAM,
			MOVE_THUNDERBOLT,
			MOVE_INCINERATE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_VILEPLUME,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_EFFECTSPORE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_APPLE_ACID,
			MOVE_SLUDGE_WAVE,
			MOVE_MOONBLAST,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
	},
	{
		.species = SPECIES_VILEPLUME,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_EFFECTSPORE
		.item = ITEM_PERSIM_BERRY,
		.moves =
		{
			MOVE_PETAL_DANCE,
			MOVE_STUN_SPORE,
			MOVE_TEETER_DANCE,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VILEPLUME,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_EFFECTSPORE
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VILEPLUME,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_VENOSHOCK,
			MOVE_TOXIC,
			MOVE_TEETER_DANCE,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VILEPLUME,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_SLUDGE_WAVE,
			MOVE_POLLEN_PUFF,
			MOVE_GROWTH,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_PARASECT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRYSKIN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_THROAT_CHOP,
			MOVE_SWORDS_DANCE,
			MOVE_SPORE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PARASECT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRYSKIN
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LEECH_LIFE,
			MOVE_LEECH_SEED,
			MOVE_SPORE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PARASECT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TOXICBOOST
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_THROAT_CHOP,
			MOVE_LEECH_LIFE,
			MOVE_AGILITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PARASECT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EFFECTSPORE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LEECH_LIFE,
			MOVE_SPORE,
			MOVE_LEECH_SEED,
			MOVE_ROTOTILLER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VENOMOTH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TINTEDLENS
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_SLUDGE_BOMB,
			MOVE_SLEEP_POWDER,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VENOMOTH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TINTEDLENS
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_SLEEP_POWDER,
			MOVE_QUIVER_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VENOMOTH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LEVITATE
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_TOXIC,
			MOVE_PROTECT,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VENOMOTH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LEVITATE
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_SLEEP_POWDER,
			MOVE_TOXIC_SPIKES,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUGTRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ARENATRAP
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_REVERSAL,
			MOVE_STONE_EDGE,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUGTRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ARENATRAP
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUGTRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ARENATRAP
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_SUBSTITUTE,
			MOVE_MEMENTO,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUGTRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ARENATRAP
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_REVERSAL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUGTRIO_ALOLA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEELYSPIRIT
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRON_HEAD,
			MOVE_NIGHT_SLASH,
			MOVE_STONE_EDGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUGTRIO_ALOLA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TANGLINGHAIR
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRON_HEAD,
			MOVE_SUCKER_PUNCH,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUGTRIO_ALOLA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDFORCE
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_SUBSTITUTE,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUGTRIO_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDFORCE
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_HIGH_HORSEPOWER,
			MOVE_IRON_HEAD,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_PERSIAN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TECHNICIAN
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SWIFT,
			MOVE_THUNDERBOLT,
			MOVE_WATER_PULSE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERSIAN,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TECHNICIAN
		.item = ITEM_NORMAL_GEM,
		.moves =
		{
			MOVE_COVET,
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERSIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NINELIVES
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_PLAY_ROUGH,
			MOVE_HYPNOSIS,
			MOVE_SWAGGER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERSIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NINELIVES
		.item = ITEM_SILK_SCARF,
		.moves =
		{
			MOVE_RETURN,
			MOVE_FAKE_OUT,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERSIAN_ALOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FURCOAT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_NIGHT_DAZE,
			MOVE_THUNDERBOLT,
			MOVE_BURNING_JEALOUSY,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERSIAN_ALOLA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FURCOAT
		.item = ITEM_LAGGING_TAIL,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_U_TURN,
			MOVE_SCREECH,
			MOVE_SWITCHEROO,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERSIAN_ALOLA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FURCOAT
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_TOXIC,
			MOVE_PARTING_SHOT,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERSIAN_ALOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TECHNICIAN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SNARL,
			MOVE_ICY_WIND,
			MOVE_BURNING_JEALOUSY,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLDUCK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NEUROFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ICE_PUNCH,
			MOVE_CROSS_CHOP,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLDUCK,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_POWER_GEM,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLDUCK,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NEUROFORCE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_FOCUS_BLAST,
			MOVE_POWER_GEM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLDUCK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CLOUDNINE
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_AQUA_JET,
			MOVE_ICY_WIND,
			MOVE_YAWN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMEAPE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMEAPE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_THUNDEROUS_KICK,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
			MOVE_THUNDER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMEAPE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VITALSPIRIT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_STONE_EDGE,
			MOVE_COUNTER,
			MOVE_ENDEAVOR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMEAPE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_THUNDEROUS_KICK,
			MOVE_ROCK_SLIDE,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCANINE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_CLOSE_COMBAT,
			MOVE_PLAY_ROUGH,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCANINE,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FLASHFIRE
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_OVERHEAT,
			MOVE_SOLAR_BEAM,
			MOVE_EXTREMESPEED,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCANINE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 8,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_EXTREMESPEED,
			MOVE_MORNING_SUN,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCANINE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_HYPER_VOICE,
			MOVE_SNARL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLIWRATH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 112,
		.atkEv = 252,
		.spdEv = 144,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_SHELL_BELL,
		.moves =
		{
			MOVE_SURGING_STRIKES,
			MOVE_FOCUS_PUNCH,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLIWRATH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SURGING_STRIKES,
			MOVE_CLOSE_COMBAT,
			MOVE_HYPNOSIS,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLIWRATH,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_CIRCLE_THROW,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLIWRATH,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_TOXIC,
			MOVE_HELPING_HAND,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALAKAZAM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_FOCUS_BLAST,
			MOVE_DAZZLING_GLEAM,
			MOVE_ENERGY_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALAKAZAM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_FOCUS_BLAST,
			MOVE_GUARD_SPLIT,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALAKAZAM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_ALAKAZITE,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_FOCUS_BLAST,
			MOVE_SHADOW_BALL,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALAKAZAM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_TAUNT,
			MOVE_GUARD_SPLIT,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MACHAMP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_FACADE,
			MOVE_MACH_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MACHAMP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 172,
		.atkEv = 252,
		.spdEv = 84,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NOGUARD
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DYNAMICPUNCH,
			MOVE_STONE_EDGE,
			MOVE_DARKEST_LARIAT,
			MOVE_BULLET_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MACHAMP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FOCUSBELT
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_THUNDER_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_BULK_UP,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MACHAMP,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NOGUARD
		.item = ITEM_PAYAPA_BERRY,
		.moves =
		{
			MOVE_DYNAMICPUNCH,
			MOVE_KNOCK_OFF,
			MOVE_WIDE_GUARD,
			MOVE_COACHING,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_VICTREEBEL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_SLUDGE_BOMB,
			MOVE_SLEEP_POWDER,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTREEBEL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CORROSION
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_SLUDGE_BOMB,
			MOVE_HIDDEN_POWER, //TYPE_ROCK
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTREEBEL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CORROSION
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_STRENGTH_SAP,
			MOVE_TOXIC,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTREEBEL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GLUTTONY
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_GRAV_APPLE,
			MOVE_KNOCK_OFF,
			MOVE_STRENGTH_SAP,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTREEBEL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GRAV_APPLE,
			MOVE_POISON_JAB,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_TENTACRUEL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_POISON_JAB,
			MOVE_RAPID_SPIN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TENTACRUEL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_SLUDGE_BOMB,
			MOVE_ICE_BEAM,
			MOVE_GIGA_DRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TENTACRUEL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_LIQUIDOOZE
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_SCALD,
			MOVE_RAPID_SPIN,
			MOVE_TOXIC_SPIKES,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TENTACRUEL,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_LIQUIDOOZE
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_RAPID_SPIN,
			MOVE_TOXIC_SPIKES,
			MOVE_ACUPRESSURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLEM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_HEAVY_SLAM,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLEM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_SUCKER_PUNCH,
			MOVE_AUTOTOMIZE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLEM,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 32,
		.spDefEv = 224,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDSPIT
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLEM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_STEALTH_ROCK,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLEM_ALOLA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGNETPULL
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLEM_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALVANIZE
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLEM_ALOLA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALVANIZE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_DOUBLE_EDGE,
			MOVE_BULLDOZE,
			MOVE_COUNTER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLEM_ALOLA,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_ELECTROWEB,
			MOVE_STEALTH_ROCK,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAPIDASH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FIERYNEIGH
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_HIGH_HORSEPOWER,
			MOVE_WILD_CHARGE,
			MOVE_DOUBLE_EDGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAPIDASH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FLASHFIRE
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SOLAR_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAPIDASH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FIERYNEIGH
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_HIGH_HORSEPOWER,
			MOVE_WILD_CHARGE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAPIDASH,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLAMEBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_TOXIC,
			MOVE_MORNING_SUN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWBRO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_PSYSHOCK,
			MOVE_YAWN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWBRO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_SLOWBRONITE,
		.moves =
		{
			MOVE_SCALD,
			MOVE_PSYSHOCK,
			MOVE_NASTY_PLOT,
			MOVE_SLACK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWBRO,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_SLOWBRONITE,
		.moves =
		{
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_BLIZZARD,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWBRO,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_SLOWBRONITE,
		.moves =
		{
			MOVE_SCALD,
			MOVE_PSYCHIC,
			MOVE_NASTY_PLOT,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FARFETCHD,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_DOUBLE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FARFETCHD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_LEEK,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_LEAF_BLADE,
			MOVE_NIGHT_SLASH,
			MOVE_SLASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FARFETCHD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DUAL_WINGBEAT,
			MOVE_CLOSE_COMBAT,
			MOVE_QUICK_ATTACK,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FARFETCHD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_SOLAR_BLADE,
			MOVE_METEOR_ASSAULT,
			MOVE_TAILWIND,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DODRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_BRAVE_BIRD,
			MOVE_JUMP_KICK,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DODRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_BRAVE_BIRD,
			MOVE_JUMP_KICK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DODRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_EARLYBIRD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_QUICK_ATTACK,
			MOVE_DRILL_PECK,
			MOVE_STOMPING_TANTRUM,
			MOVE_ENDEAVOR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DODRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TANGLEDFEET
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_QUICK_ATTACK,
			MOVE_DRILL_PECK,
			MOVE_ENDEAVOR,
			MOVE_ACUPRESSURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEWGONG,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AVALANCHE,
			MOVE_LIQUIDATION,
			MOVE_DRILL_RUN,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEWGONG,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEWGONG,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_WHIRLPOOL,
			MOVE_PERISH_SONG,
			MOVE_ENCORE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEWGONG,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_FAKE_OUT,
			MOVE_HAIL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONTOUCH
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_GUNK_SHOT,
			MOVE_SHADOW_SNEAK,
			MOVE_FIRE_PUNCH,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GOOEY
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_GUNK_SHOT,
			MOVE_KNOCK_OFF,
			MOVE_ICE_PUNCH,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUK,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STICKYHOLD
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_KNOCK_OFF,
			MOVE_ROCK_SLIDE,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GOOEY
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_GUNK_SHOT,
			MOVE_ROCK_SLIDE,
			MOVE_KNOCK_OFF,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUK_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_POISONTOUCH
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_KNOCK_OFF,
			MOVE_ICE_PUNCH,
			MOVE_SHADOW_SNEAK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUK_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GLUTTONY
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_CRUNCH,
			MOVE_STONE_EDGE,
			MOVE_SHADOW_SNEAK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUK_ALOLA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POWEROFALCHEMY
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_ACID_SPRAY,
			MOVE_SNARL,
			MOVE_MINIMIZE,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUK_ALOLA,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 96,
		.spDefEv = 160,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GLUTTONY
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_SNARL,
			MOVE_KNOCK_OFF,
			MOVE_DISABLE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SKILLLINK
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ICICLE_SPEAR,
			MOVE_ROCK_BLAST,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SKILLLINK
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_ICICLE_SPEAR,
			MOVE_RAPID_SPIN,
			MOVE_SHELL_SMASH,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 1,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_RAPID_SPIN,
			MOVE_SPIKES,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLOYSTER,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_RAPID_SPIN,
			MOVE_SPIKES,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_SLUDGE_WAVE,
			MOVE_FOCUS_BLAST,
			MOVE_THUNDERBOLT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_GENGARITE,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_SLUDGE_WAVE,
			MOVE_FOCUS_BLAST,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_GENGARITE,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_PERISH_SONG,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GENGAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 28,
		.defEv = 36,
		.spAtkEv = 188,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_GENGARITE,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_SLUDGE_BOMB,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HYPNO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_DAZZLING_GLEAM,
			MOVE_SHADOW_BALL,
			MOVE_FOCUS_BLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HYPNO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INSOMNIA
		.item = ITEM_LAGGING_TAIL,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_TRICK,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HYPNO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HYPNO,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_TRICK_ROOM,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KINGLER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_CRABHAMMER,
			MOVE_X_SCISSOR,
			MOVE_DOUBLE_EDGE,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KINGLER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_CRABHAMMER,
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_KINGLER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ROCK_SLIDE,
			MOVE_SUPERPOWER,
			MOVE_AGILITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KINGLER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_CRABHAMMER,
			MOVE_KNOCK_OFF,
			MOVE_TICKLE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_ELECTRODE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOUNDPROOF
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_SIGNAL_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTRODE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOUNDPROOF
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_SIGNAL_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTRODE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 192,
		.spdEv = 64,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOUNDPROOF
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_THUNDER,
			MOVE_VOLT_SWITCH,
			MOVE_RAIN_DANCE,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTRODE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOUNDPROOF
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_EXPLOSION,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXEGGUTOR,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_MENTAL_HERB,
		.moves =
		{
			MOVE_ENERGY_BALL,
			MOVE_PSYCHIC,
			MOVE_SHADOW_BALL,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXEGGUTOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_PSYSHOCK,
			MOVE_SUNNY_DAY,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXEGGUTOR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXEGGUTOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_PSYCHIC,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_SYNTHESIS,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_EXEGGUTOR_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.atkEv = 252,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_WOOD_HAMMER,
			MOVE_DRAGON_HAMMER,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXEGGUTOR_ALOLA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.spAtkEv = 252,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FRISK
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_DRACO_METEOR,
			MOVE_FLAMETHROWER,
			MOVE_SLUDGE_BOMB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXEGGUTOR_ALOLA,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_LEECH_SEED,
			MOVE_SLEEP_POWDER,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXEGGUTOR_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_DRAGON_HAMMER,
			MOVE_LEECH_SEED,
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAROWAK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ROCKHEAD
		.item = ITEM_THICK_CLUB,
		.moves =
		{
			MOVE_BONEMERANG,
			MOVE_HEAD_SMASH,
			MOVE_DOUBLE_EDGE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAROWAK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SKILLLINK
		.item = ITEM_THICK_CLUB,
		.moves =
		{
			MOVE_BONE_RUSH,
			MOVE_ROCK_BLAST,
			MOVE_SHADOW_BONE,
			MOVE_POWER_UP_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAROWAK,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_BATTLEARMOR
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_PAIN_SPLIT,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAROWAK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SKILLLINK
		.item = ITEM_THICK_CLUB,
		.moves =
		{
			MOVE_BONE_RUSH,
			MOVE_ROCK_SLIDE,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAROWAK_ALOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROCKHEAD
		.item = ITEM_THICK_CLUB,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_POLTERGEIST,
			MOVE_BONEMERANG,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAROWAK_ALOLA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CURSEDBODY
		.item = ITEM_RED_CARD,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_WILL_O_WISP,
			MOVE_PAIN_SPLIT,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAROWAK_ALOLA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spAtkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_LIGHTNINGROD
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_HEX,
			MOVE_FIRE_BLAST,
			MOVE_WILL_O_WISP,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAROWAK_ALOLA,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROCKHEAD
		.item = ITEM_THICK_CLUB,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_POLTERGEIST,
			MOVE_BONEMERANG,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_HITMONLEE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_STONE_EDGE,
			MOVE_POISON_JAB,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONLEE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_THUNDEROUS_KICK,
			MOVE_MACH_PUNCH,
			MOVE_STONE_EDGE,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONLEE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_REVERSAL,
			MOVE_PYRO_BALL,
			MOVE_EARTHQUAKE,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONLEE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_RECKLESS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_PYRO_BALL,
			MOVE_FAKE_OUT,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONCHAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_IRONFIST
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_ICE_PUNCH,
			MOVE_THUNDER_PUNCH,
			MOVE_BULLET_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONCHAN,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 216,
		.atkEv = 252,
		.spdEv = 40,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNSEENFIST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_THROAT_CHOP,
			MOVE_AGILITY,
			MOVE_COUNTER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONCHAN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_IRONFIST
		.item = ITEM_RED_CARD,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_BULLET_PUNCH,
			MOVE_RAPID_SPIN,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONCHAN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_FAKE_OUT,
			MOVE_QUICK_GUARD,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEEZING,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_STRANGE_STEAM,
			MOVE_PAIN_SPLIT,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEEZING,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_RED_CARD,
		.moves =
		{
			MOVE_EXPLOSION,
			MOVE_WILL_O_WISP,
			MOVE_DESTINY_BOND,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEEZING,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NEUTRALIZINGGAS
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_INFESTATION,
			MOVE_WILL_O_WISP,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEEZING,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_VENOSHOCK,
			MOVE_POISON_GAS,
			MOVE_VENOM_DRENCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHANSEY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 236,
		.defEv = 252,
		.spDefEv = 12,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_SEISMIC_TOSS,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_AROMATHERAPY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHANSEY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
			MOVE_CALM_MIND,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHANSEY,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_GRAVITY,
			MOVE_STEALTH_ROCK,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHANSEY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_SEISMIC_TOSS,
			MOVE_ICY_WIND,
			MOVE_STEALTH_ROCK,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KANGASKHAN,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SCRAPPY
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_REVERSAL,
			MOVE_ROCK_SLIDE,
			MOVE_SUCKER_PUNCH,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KANGASKHAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EARLYBIRD
		.item = ITEM_KANGASKHANITE,
		.moves =
		{
			MOVE_RETURN,
			MOVE_SUCKER_PUNCH,
			MOVE_EARTHQUAKE,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KANGASKHAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EARLYBIRD
		.item = ITEM_KANGASKHANITE,
		.moves =
		{
			MOVE_DIZZY_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_POWER_UP_PUNCH,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KANGASKHAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EARLYBIRD
		.item = ITEM_KANGASKHANITE,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_CRUNCH,
			MOVE_FAKE_OUT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEAKING,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FISHIOUS_REND,
			MOVE_KNOCK_OFF,
			MOVE_MEGAHORN,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEAKING,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_FISHIOUS_REND,
			MOVE_POISON_JAB,
			MOVE_DRILL_RUN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEAKING,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_SOAK,
			MOVE_AQUA_RING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEAKING,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ICY_WIND,
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_POWER_GEM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VICTORYSTAR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_PSYSHOCK,
			MOVE_THUNDER,
			MOVE_BLIZZARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NATURALCURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_RAPID_SPIN,
			MOVE_TOXIC,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STARMIE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VICTORYSTAR
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_THUNDER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MR_MIME,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_DRAINING_KISS,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MR_MIME,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 4,
		.defEv = 4,
		.spAtkEv = 248,
		.spDefEv = 4,
		.spdEv = 248,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_DRAINING_KISS,
			MOVE_MAGICAL_LEAF,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
		},
		
		
		
		
	},
	{
		.species = SPECIES_MR_MIME,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FILTER
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MR_MIME,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FILTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_FAKE_OUT,
			MOVE_TEETER_DANCE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JYNX,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_PSYCHIC,
			MOVE_FOCUS_BLAST,
			MOVE_SHADOW_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JYNX,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FROST_BREATH,
			MOVE_PSYSHOCK,
			MOVE_NASTY_PLOT,
			MOVE_LOVELY_KISS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JYNX,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_LOVELY_KISS,
			MOVE_REFLECT,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JYNX,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRYSKIN
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_HYPER_VOICE,
			MOVE_FAKE_OUT,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOLDBREAKER
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_EARTHQUAKE,
			MOVE_CLOSE_COMBAT,
			MOVE_GUILLOTINE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_PINSIRITE,
		.moves =
		{
			MOVE_RETURN,
			MOVE_EARTHQUAKE,
			MOVE_FEINT,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_PINSIRITE,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_THRASH,
			MOVE_CLOSE_COMBAT,
			MOVE_STONE_EDGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_BUG_BITE,
			MOVE_EARTHQUAKE,
			MOVE_FEINT,
			MOVE_ME_FIRST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAUROS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HEAD_CHARGE,
			MOVE_CLOSE_COMBAT,
			MOVE_THROAT_CHOP,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAUROS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_GIGA_IMPACT,
			MOVE_CLOSE_COMBAT,
			MOVE_THROAT_CHOP,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAUROS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_ENDEAVOR,
			MOVE_REVERSAL,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAUROS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEAD_CHARGE,
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOXIE
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_AQUA_TAIL,
			MOVE_EARTHQUAKE,
			MOVE_POWER_WHIP,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 220,
		.defEv = 244,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_ICE_FANG,
			MOVE_THUNDER_WAVE,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_GYARADOSITE,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_CRUNCH,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_BOUNCE,
			MOVE_DRAGON_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LAPRAS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 200,
		.defEv = 8,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HYDRATION
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_THUNDER,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LAPRAS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_ICE_SHARD,
			MOVE_DRILL_RUN,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LAPRAS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.defEv = 252,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_TOXIC,
			MOVE_CONFUSE_RAY,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LAPRAS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_WHIRLPOOL,
			MOVE_SING,
			MOVE_PERISH_SONG,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DITTO,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IMPOSTER
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_TRANSFORM,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DITTO,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IMPOSTER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_TRANSFORM,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DITTO,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IMPOSTER
		.item = ITEM_SAFETY_GOGGLES,
		.moves =
		{
			MOVE_TRANSFORM,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DITTO,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IMPOSTER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_TRANSFORM,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VAPOREON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_HYPER_VOICE,
			MOVE_WORK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VAPOREON,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VAPOREON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 172,
		.spDefEv = 84,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_WISH,
			MOVE_CURSE,
			MOVE_SUBSTITUTE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VAPOREON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICY_WIND,
			MOVE_AQUA_RING,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JOLTEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_SHADOW_BALL,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JOLTEON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_QUICKFEET
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_LIGHT_SCREEN,
			MOVE_MAGNET_RISE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JOLTEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_WISH,
			MOVE_SUBSTITUTE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JOLTEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_YAWN,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLAREON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_SACRED_FIRE,
			MOVE_SUPERPOWER,
			MOVE_DOUBLE_EDGE,
			MOVE_QUICK_ATTACK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLAREON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GUTS
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_SACRED_FIRE,
			MOVE_SUPERPOWER,
			MOVE_FACADE,
			MOVE_QUICK_ATTACK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLAREON,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LAVA_PLUME,
			MOVE_WISH,
			MOVE_HEAL_BELL,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLAREON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FIRE_SPIN,
			MOVE_WILL_O_WISP,
			MOVE_YAWN,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OMASTAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SURF,
			MOVE_ANCIENTPOWER,
			MOVE_ICE_BEAM,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OMASTAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.defEv = 128,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WEAKARMOR
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ANCIENTPOWER,
			MOVE_ICE_BEAM,
			MOVE_EARTH_POWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OMASTAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHELLARMOR
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_SCALD,
			MOVE_STEALTH_ROCK,
			MOVE_SPIKES,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OMASTAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHELLARMOR
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_SURF,
			MOVE_KNOCK_OFF,
			MOVE_STEALTH_ROCK,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KABUTOPS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_AQUA_TAIL,
			MOVE_SUPERPOWER,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KABUTOPS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STONE_AXE,
			MOVE_LIQUIDATION,
			MOVE_AQUA_JET,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KABUTOPS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WEAKARMOR
		.item = ITEM_RINDO_BERRY,
		.moves =
		{
			MOVE_STONE_AXE,
			MOVE_RAPID_SPIN,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KABUTOPS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_WATERFALL,
			MOVE_KNOCK_OFF,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_DUAL_WINGBEAT,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PRESSURE
		.item = ITEM_AERODACTYLITE,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_DUAL_WINGBEAT,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PRESSURE
		.item = ITEM_AERODACTYLITE,
		.moves =
		{
			MOVE_DUAL_WINGBEAT,
			MOVE_IRON_HEAD,
			MOVE_FIRE_FANG,
			MOVE_ICE_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AERODACTYL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 188,
		.defEv = 144,
		.spDefEv = 176,
		.ability = FRONTIER_ABILITY_2, //ABILITY_THICKFAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_CURSE,
			MOVE_REST,
			MOVE_SLEEP_TALK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GLUTTONY
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_YAWN,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_THICKFAT
		.item = ITEM_SNORLIUM_Z,
		.moves =
		{
			MOVE_GIGA_IMPACT,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GLUTTONY
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_RETURN,
			MOVE_HIGH_HORSEPOWER,
			MOVE_BELLY_DRUM,
			MOVE_RECYCLE,
		},
		
		
		
		
		
		
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GLUTTONY
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_HEAT_CRASH,
			MOVE_CURSE,
			MOVE_RECYCLE,
		},
		
		
		
		
		
		
	},
	{
		.species = SPECIES_ARTICUNO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_FREEZE_DRY,
			MOVE_SHEER_COLD,
			MOVE_MIND_READER,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARTICUNO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPETITIVE
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_FREEZE_DRY,
			MOVE_HURRICANE,
			MOVE_HIDDEN_POWER, //TYPE_FIGHTING
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARTICUNO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_FROST_BREATH,
			MOVE_HAIL,
			MOVE_AURORA_VEIL,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARTICUNO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_GLACIATE,
			MOVE_TOXIC,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_ZAPDOS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_HEAT_WAVE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAPDOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_BOLT_BEAK,
			MOVE_BRAVE_BIRD,
			MOVE_STEEL_WING,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAPDOS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_THUNDER_WAVE,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAPDOS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 244,
		.defEv = 80,
		.spAtkEv = 64,
		.spDefEv = 56,
		.spdEv = 64,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_THUNDER,
			MOVE_HURRICANE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_TAILWIND,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MOLTRES,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BERSERK
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_OVERHEAT,
			MOVE_AEROBLAST,
			MOVE_SCORCHING_SANDS,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOLTRES,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BERSERK
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_AEROBLAST,
			MOVE_SOLAR_BEAM,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOLTRES,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 44,
		.spdEv = 216,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_TOXIC,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOLTRES,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BERSERK
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BURN_UP,
			MOVE_AEROBLAST,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_PUNCH,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_BLUNDER_POLICY,
		.moves =
		{
			MOVE_DRAGON_RUSH,
			MOVE_IRON_TAIL,
			MOVE_AQUA_JET,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_DRAGON_PULSE,
			MOVE_HURRICANE,
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGONITE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAGON_PULSE,
			MOVE_FLAMETHROWER,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEGANIUM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_STOMPING_TANTRUM,
			MOVE_DRAGON_TAIL,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEGANIUM,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_TOXIC,
			MOVE_AROMATHERAPY,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEGANIUM,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_GIGA_DRAIN,
			MOVE_EARTH_POWER,
			MOVE_BODY_SLAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEGANIUM,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_POLLEN_PUFF,
			MOVE_LEECH_SEED,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYPHLOSION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DROUGHT
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_WILD_CHARGE,
			MOVE_EARTHQUAKE,
			MOVE_POWER_UP_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYPHLOSION,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DROUGHT
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_ERUPTION,
			MOVE_SCORCHING_SANDS,
			MOVE_SOLAR_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYPHLOSION,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DROUGHT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BURN_UP,
			MOVE_SOLAR_BEAM,
			MOVE_SCORCHING_SANDS,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYPHLOSION,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DROUGHT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_SOLAR_BEAM,
			MOVE_SCORCHING_SANDS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FERALIGATR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ICE_PUNCH,
			MOVE_CRUNCH,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FERALIGATR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_AQUA_TAIL,
			MOVE_SUPERPOWER,
			MOVE_SCALE_SHOT,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FERALIGATR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FERALIGATR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ICE_PUNCH,
			MOVE_SUPERPOWER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FURRET,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUSTLE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_EXTREMESPEED,
			MOVE_KNOCK_OFF,
			MOVE_U_TURN,
			MOVE_AQUA_TAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FURRET,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUSTLE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_KNOCK_OFF,
			MOVE_U_TURN,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FURRET,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_KEENEYE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_KNOCK_OFF,
			MOVE_SWAGGER,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FURRET,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_KEENEYE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_KNOCK_OFF,
			MOVE_EXTREMESPEED,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NOCTOWL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TINTEDLENS
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_MOONBLAST,
			MOVE_NASTY_PLOT,
			MOVE_HYPNOSIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NOCTOWL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INSOMNIA
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_NIGHT_SHADE,
			MOVE_TOXIC,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NOCTOWL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INSOMNIA
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_CALM_MIND,
			MOVE_ROOST,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NOCTOWL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 128,
		.spAtkEv = 128,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INSOMNIA
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_FEATHERDANCE,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEDIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUGEPOWER
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_TAILWIND,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEDIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUGEPOWER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_MACH_PUNCH,
			MOVE_AERIAL_ACE,
			MOVE_THUNDER_PUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEDIAN,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_EARLYBIRD
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_TOXIC,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEDIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUGEPOWER
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_ACROBATICS,
			MOVE_CLOSE_COMBAT,
			MOVE_VICTORY_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARIADOS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MERCILESS
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_LEECH_LIFE,
			MOVE_SHADOW_SNEAK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARIADOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INSOMNIA
		.item = ITEM_BUG_GEM,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_FELL_STINGER,
			MOVE_SHADOW_SNEAK,
			MOVE_AGILITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARIADOS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MERCILESS
		.item = ITEM_EJECT_BUTTON,
		.moves =
		{
			MOVE_FIRST_IMPRESSION,
			MOVE_SUCKER_PUNCH,
			MOVE_STICKY_WEB,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARIADOS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INSOMNIA
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_SUCKER_PUNCH,
			MOVE_RAGE_POWDER,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CROBAT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_ACROBATICS,
			MOVE_U_TURN,
			MOVE_HYPNOSIS,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CROBAT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_CHARTI_BERRY,
		.moves =
		{
			MOVE_SLUDGE_BOMB,
			MOVE_AIR_SLASH,
			MOVE_SHADOW_BALL,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CROBAT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_HYPNOSIS,
			MOVE_TAUNT,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CROBAT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_TAILWIND,
			MOVE_TAUNT,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANTURN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 40,
		.defEv = 220,
		.spDefEv = 248,
		.ability = FRONTIER_ABILITY_2, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_VOLT_SWITCH,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANTURN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANTURN,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_CHARGE_BEAM,
			MOVE_STOCKPILE,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANTURN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_RINDO_BERRY,
		.moves =
		{
			MOVE_VOLT_SWITCH,
			MOVE_ICY_WIND,
			MOVE_THUNDER_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XATU,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_DAZZLING_GLEAM,
			MOVE_SHADOW_BALL,
			MOVE_HEAT_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XATU,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 240,
		.spdEv = 16,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_GRASS_KNOT,
			MOVE_U_TURN,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XATU,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_LAGGING_TAIL,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_TRICK,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XATU,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_MIRACLE_EYE,
			MOVE_ROOST,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMPHAROS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STATIC
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_THUNDER_CAGE,
			MOVE_ELECTRIC_TERRAIN,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMPHAROS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TANGLINGWOOL
		.item = ITEM_AMPHAROSITE,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FOCUS_BLAST,
			MOVE_DRAGON_PULSE,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMPHAROS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TANGLINGWOOL
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_THUNDER_PUNCH,
			MOVE_BRICK_BREAK,
			MOVE_SCREECH,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMPHAROS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TANGLINGWOOL
		.item = ITEM_AMPHAROSITE,
		.moves =
		{
			MOVE_THUNDER_CAGE,
			MOVE_REST,
			MOVE_TOXIC,
			MOVE_COTTON_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMPHAROS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TANGLINGWOOL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_THUNDER_CAGE,
			MOVE_ELECTROWEB,
			MOVE_FOCUS_BLAST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BELLOSSOM,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TRIAGE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_FIERY_DANCE,
			MOVE_HIDDEN_POWER, //TYPE_ROCK
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BELLOSSOM,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TRIAGE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SLEEP_POWDER,
			MOVE_STRENGTH_SAP,
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BELLOSSOM,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_FIERY_DANCE,
			MOVE_SLEEP_POWDER,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BELLOSSOM,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TRIAGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_APPLE_ACID,
			MOVE_STRENGTH_SAP,
			MOVE_FLORAL_HEALING,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AZUMARILL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUGEPOWER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_PLAY_ROUGH,
			MOVE_KNOCK_OFF,
			MOVE_AQUA_JET,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AZUMARILL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUGEPOWER
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_PLAY_ROUGH,
			MOVE_AQUA_JET,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AZUMARILL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SAPSIPPER
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_RAIN_DANCE,
			MOVE_AQUA_RING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AZUMARILL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUGEPOWER
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_AQUA_JET,
			MOVE_PLAY_ROUGH,
			MOVE_BELLY_DRUM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUDOWOODO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ROCKHEAD
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_EARTHQUAKE,
			MOVE_WOOD_HAMMER,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUDOWOODO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_SUCKER_PUNCH,
			MOVE_EXPLOSION,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUDOWOODO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SAPSIPPER
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUDOWOODO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_COUNTER,
			MOVE_COPYCAT,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLITOED,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_EARTHQUAKE,
			MOVE_BELLY_DRUM,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLITOED,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_ZOOM_LENS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_FOCUS_BLAST,
			MOVE_HYPNOSIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLITOED,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spDefEv = 164,
		.spdEv = 96,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICE_BEAM,
			MOVE_HYPNOSIS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLITOED,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 188,
		.spAtkEv = 60,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICY_WIND,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SIMPLE
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_ACROBATICS,
			MOVE_SWORDS_DANCE,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_LEECH_SEED,
			MOVE_SLEEP_POWDER,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SIMPLE
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_STRENGTH_SAP,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_COTTON_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JUMPLUFF,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_LEECH_SEED,
			MOVE_STRENGTH_SAP,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUNFLORA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_EARTH_POWER,
			MOVE_SLUDGE_BOMB,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUNFLORA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SOLARPOWER
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_EARTH_POWER,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUNFLORA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSDASH
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_TOXIC,
			MOVE_LEECH_SEED,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUNFLORA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSDASH
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_LEECH_SEED,
			MOVE_SYNTHESIS,
			MOVE_FLOWER_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QUAGSIRE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_EARTH_POWER,
			MOVE_ACID_SPRAY,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QUAGSIRE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QUAGSIRE,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_EARTHQUAKE,
			MOVE_CURSE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QUAGSIRE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ICY_WIND,
			MOVE_RECOVER,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ESPEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_SHADOW_BALL,
			MOVE_DAZZLING_GLEAM,
			MOVE_POWER_GEM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ESPEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_SHADOW_BALL,
			MOVE_CALM_MIND,
			MOVE_MORNING_SUN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ESPEON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DREAM_EATER,
			MOVE_YAWN,
			MOVE_CALM_MIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ESPEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_DAZZLING_GLEAM,
			MOVE_SHADOW_BALL,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UMBREON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UMBREON,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_SNARL,
			MOVE_CONFUSE_RAY,
			MOVE_MOONLIGHT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UMBREON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PAYBACK,
			MOVE_CURSE,
			MOVE_MOONLIGHT,
			MOVE_CONFUSE_RAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UMBREON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SNARL,
			MOVE_HELPING_HAND,
			MOVE_HEAL_BELL,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_NASTY_PLOT,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SCALD,
			MOVE_PSYSHOCK,
			MOVE_FIRE_BLAST,
			MOVE_DRAGON_TAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 188,
		.spDefEv = 68,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_THUNDER_WAVE,
			MOVE_CALM_MIND,
			MOVE_SLACK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_YAWN,
			MOVE_HEAL_PULSE,
			MOVE_SLACK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UNOWN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HIDDEN_POWER, //TYPE_PSYCHIC
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UNOWN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_HIDDEN_POWER, //TYPE_PSYCHIC
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UNOWN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HIDDEN_POWER, //TYPE_PSYCHIC
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UNOWN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_NONE,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WOBBUFFET,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 204,
		.defEv = 32,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHADOWTAG
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_COUNTER,
			MOVE_MIRROR_COAT,
			MOVE_ENCORE,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WOBBUFFET,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 204,
		.defEv = 252,
		.spDefEv = 32,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHADOWTAG
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_COUNTER,
			MOVE_MIRROR_COAT,
			MOVE_ENCORE,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WOBBUFFET,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 204,
		.defEv = 32,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHADOWTAG
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_COUNTER,
			MOVE_MIRROR_COAT,
			MOVE_ENCORE,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WOBBUFFET,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_COUNTER,
			MOVE_MIRROR_COAT,
			MOVE_ENCORE,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GIRAFARIG,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BRAINBOND
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_PSYSHOCK,
			MOVE_SHADOW_BALL,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIRAFARIG,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BRAINBOND
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_RETURN,
			MOVE_PSYCHIC_FANGS,
			MOVE_CRUNCH,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIRAFARIG,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SAPSIPPER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_NASTY_PLOT,
			MOVE_PROTECT,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIRAFARIG,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_DAZZLING_GLEAM,
			MOVE_CALM_MIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FORRETRESS,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_VOLT_SWITCH,
			MOVE_STEALTH_ROCK,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FORRETRESS,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_STEALTH_ROCK,
			MOVE_SPIKES,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FORRETRESS,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_DRILL_RUN,
			MOVE_EXPLOSION,
			MOVE_POWER_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FORRETRESS,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_RAPID_SPIN,
			MOVE_BODY_PRESS,
			MOVE_STEALTH_ROCK,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUNSPARCE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_KINGS_ROCK,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_DRAGON_RUSH,
			MOVE_HEADBUTT,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUNSPARCE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_YAWN,
			MOVE_STEALTH_ROCK,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUNSPARCE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEADBUTT,
			MOVE_GLARE,
			MOVE_COIL,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUNSPARCE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_STEALTH_ROCK,
			MOVE_REST,
			MOVE_SLEEP_TALK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLIGAR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 200,
		.spdEv = 56,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IMMUNITY
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLIGAR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 200,
		.spdEv = 56,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SANDVEIL
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_KNOCK_OFF,
			MOVE_SANDSTORM,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLIGAR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 200,
		.spdEv = 56,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IMMUNITY
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_AGILITY,
			MOVE_BATON_PASS,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLIGAR,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IMMUNITY
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STEELIX,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STEELIX,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STEELIX,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 56,
		.spDefEv = 200,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_STEELIXITE,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_BODY_PRESS,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STEELIX,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_STEELIXITE,
		.moves =
		{
			MOVE_DRAGON_TAIL,
			MOVE_STEALTH_ROCK,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STEELIX,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_STEELIXITE,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_HEAVY_SLAM,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GRANBULL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_ICE_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRANBULL,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_METRONOME,
			MOVE_THUNDER_WAVE,
			MOVE_HEAL_BELL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRANBULL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUICKFEET
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_SUPER_FANG,
			MOVE_THUNDER_WAVE,
			MOVE_ROAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRANBULL,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_SNARL,
			MOVE_THUNDER_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QWILFISH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_POISON_JAB,
			MOVE_THROAT_CHOP,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QWILFISH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_EXPLOSION,
			MOVE_SWORDS_DANCE,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QWILFISH,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_SCALD,
			MOVE_HAZE,
			MOVE_SPIKES,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QWILFISH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_ACID_SPRAY,
			MOVE_ICY_WIND,
			MOVE_TOXIC_SPIKES,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TECHNICIAN
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_BULLET_PUNCH,
			MOVE_CLOSE_COMBAT,
			MOVE_DUAL_WINGBEAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 96,
		.atkEv = 252,
		.spDefEv = 160,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTMETAL
		.item = ITEM_SCIZORITE,
		.moves =
		{
			MOVE_BUG_BITE,
			MOVE_BULLET_PUNCH,
			MOVE_SWORDS_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTMETAL
		.item = ITEM_SCIZORITE,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_BULLET_PUNCH,
			MOVE_TOXIC,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCIZOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 136,
		.spDefEv = 36,
		.spdEv = 84,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTMETAL
		.item = ITEM_SCIZORITE,
		.moves =
		{
			MOVE_BUG_BITE,
			MOVE_BULLET_PUNCH,
			MOVE_SWORDS_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHUCKLE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_STICKY_WEB,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHUCKLE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_SKITTER_SMACK,
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_POWER_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHUCKLE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_TOXIC,
			MOVE_POWER_SPLIT,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHUCKLE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_STICKY_WEB,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HERACROSS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_FACADE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HERACROSS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOXIE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_REVERSAL,
			MOVE_FLAIL,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HERACROSS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOXIE
		.item = ITEM_HERACRONITE,
		.moves =
		{
			MOVE_PIN_MISSILE,
			MOVE_CLOSE_COMBAT,
			MOVE_ROCK_BLAST,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HERACROSS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOXIE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_MEGAHORN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSARING,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUICKFEET
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_CLOSE_COMBAT,
			MOVE_PLAY_ROUGH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSARING,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TOUGHCLAWS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_ICE_PUNCH,
			MOVE_CRUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSARING,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TOUGHCLAWS
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_RETURN,
			MOVE_SLEEP_TALK,
			MOVE_BULK_UP,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSARING,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TOUGHCLAWS
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_CLOSE_COMBAT,
			MOVE_CRUNCH,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGCARGO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WEAKARMOR
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_POWER_GEM,
			MOVE_EARTH_POWER,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGCARGO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EVAPORATE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_MAGMA_STORM,
			MOVE_RECOVER,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGCARGO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EVAPORATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MAGMA_STORM,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGCARGO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EVAPORATE
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_YAWN,
			MOVE_SWAGGER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORSOLA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORSOLA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_WISE_GLASSES,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_POWER_GEM,
			MOVE_CALM_MIND,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORSOLA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_RECOVER,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORSOLA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_LIFE_DEW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OCTILLERY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.spAtkEv = 252,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SUCTIONCUPS
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_ENERGY_BALL,
			MOVE_FIRE_BLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OCTILLERY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SKILLLINK
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_ROCK_BLAST,
			MOVE_BULLET_SEED,
			MOVE_SCALE_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OCTILLERY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_OCTAZOOKA,
			MOVE_OCTOLOCK,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OCTILLERY,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_OCTAZOOKA,
			MOVE_OCTOLOCK,
			MOVE_THUNDER_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OCTILLERY,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SKILLLINK
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WATER_SPOUT,
			MOVE_SLUDGE_WAVE,
			MOVE_BULLET_SEED,
			MOVE_ROCK_BLAST,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DELIBIRD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_ICE_PUNCH,
			MOVE_BRAVE_BIRD,
			MOVE_GUNK_SHOT,
			MOVE_POWER_UP_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELIBIRD,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DEFOG,
			MOVE_TOXIC,
			MOVE_DESTINY_BOND,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELIBIRD,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_SPIKES,
			MOVE_HAIL,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELIBIRD,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_MACHO_BRACE,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_FAKE_OUT,
			MOVE_BESTOW,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANTINE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_WATERABSORB
		.item = ITEM_ENIGMA_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_MIRROR_COAT,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANTINE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 40,
		.spDefEv = 220,
		.ability = FRONTIER_ABILITY_2, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANTINE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 40,
		.spDefEv = 220,
		.ability = FRONTIER_ABILITY_2, //ABILITY_WATERABSORB
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_SCALD,
			MOVE_DEFOG,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANTINE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_RAIN_DANCE,
			MOVE_ROOST,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SKARMORY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WEAKARMOR
		.item = ITEM_CELL_BATTERY,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_IRON_HEAD,
			MOVE_SWORDS_DANCE,
			MOVE_AUTOTOMIZE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SKARMORY,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_SPIKES,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SKARMORY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_SPIKES,
			MOVE_WHIRLWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SKARMORY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_WHIRLWIND,
			MOVE_STEALTH_ROCK,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FLASHFIRE
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_FIERY_WRATH,
			MOVE_SCORCHING_SANDS,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EARLYBIRD
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_CRUNCH,
			MOVE_FLAME_CHARGE,
			MOVE_HOWL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FLASHFIRE
		.item = ITEM_HOUNDOOMINITE,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_FIERY_WRATH,
			MOVE_SCORCHING_SANDS,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SNARL,
			MOVE_WILL_O_WISP,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOUNDOOM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FLASHFIRE
		.item = ITEM_HOUNDOOMINITE,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_FIERY_WRATH,
			MOVE_SOLAR_BEAM,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 1,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNIPER
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_SNIPE_SHOT,
			MOVE_DRAGON_PULSE,
			MOVE_ICE_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_ELECTRIC
		},
		
		
		
		
	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNIPER
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_DRACO_METEOR,
			MOVE_ICE_BEAM,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_DRAGON_PULSE,
			MOVE_HURRICANE,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_DRACO_METEOR,
			MOVE_MUDDY_WATER,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DONPHAN,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_PLAY_ROUGH,
			MOVE_HEAD_SMASH,
			MOVE_ICE_SHARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DONPHAN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_RAPID_SPIN,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DONPHAN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDVEIL
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_SANDSTORM,
			MOVE_DOUBLE_TEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DONPHAN,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDVEIL
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PORYGON2,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 128,
		.spAtkEv = 252,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DOWNLOAD
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_TRI_ATTACK,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PORYGON2,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 252,
		.defEv = 200,
		.spDefEv = 56,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRACE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_TRI_ATTACK,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_TOXIC,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PORYGON2,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 200,
		.spDefEv = 56,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRACE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_THUNDER_WAVE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PORYGON2,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRACE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_FOUL_PLAY,
			MOVE_RECOVER,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STANTLER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SAPSIPPER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_SUCKER_PUNCH,
			MOVE_MEGAHORN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STANTLER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_RETURN,
			MOVE_JUMP_KICK,
			MOVE_SUCKER_PUNCH,
			MOVE_NO_RETREAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STANTLER,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_HYPNOSIS,
			MOVE_SUBSTITUTE,
			MOVE_GRAVITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STANTLER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_RETURN,
			MOVE_HYPNOSIS,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SMEARGLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOODY
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SPORE,
			MOVE_AQUA_RING,
			MOVE_TAIL_GLOW,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SMEARGLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOODY
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SPORE,
			MOVE_SHELL_SMASH,
			MOVE_SPIKY_SHIELD,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SMEARGLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TRACE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SPORE,
			MOVE_MAGIC_COAT,
			MOVE_STEALTH_ROCK,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SMEARGLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TRACE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_ERUPTION,
			MOVE_WATER_SPOUT,
			MOVE_DRAGON_ENERGY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SMEARGLE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOODY
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SPORE,
			MOVE_FOLLOW_ME,
			MOVE_SPIKY_SHIELD,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONTOP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TECHNICIAN
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_STONE_EDGE,
			MOVE_PURSUIT,
			MOVE_BULLET_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONTOP,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_MACH_PUNCH,
			MOVE_RAPID_SPIN,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONTOP,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_COBA_BERRY,
		.moves =
		{
			MOVE_BULLET_PUNCH,
			MOVE_COUNTER,
			MOVE_RAPID_SPIN,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HITMONTOP,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 132,
		.defEv = 100,
		.spDefEv = 20,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_FEINT,
			MOVE_FAKE_OUT,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MILTANK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SCRAPPY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_PUNCH,
			MOVE_MILK_DRINK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MILTANK,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_THUNDER_WAVE,
			MOVE_STEALTH_ROCK,
			MOVE_MILK_DRINK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MILTANK,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEISMIC_TOSS,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_MILK_DRINK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MILTANK,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_DIZZY_PUNCH,
			MOVE_STEALTH_ROCK,
			MOVE_HELPING_HAND,
			MOVE_MILK_DRINK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLISSEY,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEISMIC_TOSS,
			MOVE_TOXIC,
			MOVE_HEAL_BELL,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLISSEY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_CALM_MIND,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLISSEY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_MUD_BOMB,
			MOVE_TOXIC,
			MOVE_MINIMIZE,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLISSEY,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SERENEGRACE
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_TOXIC,
			MOVE_BESTOW,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAIKOU,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_VOLTABSORB
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_SHADOW_BALL,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAIKOU,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_VOLTABSORB
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_AURA_SPHERE,
			MOVE_SCALD,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAIKOU,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_VOLTABSORB
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_ROAR,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAIKOU,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_VOLTABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_SNARL,
			MOVE_CALM_MIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ENTEI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLASHFIRE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_SACRED_FIRE,
			MOVE_STONE_EDGE,
			MOVE_IRON_HEAD,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ENTEI,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLASHFIRE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_SACRED_FIRE,
			MOVE_EXTRASENSORY,
			MOVE_SNARL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ENTEI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLASHFIRE
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_LAVA_PLUME,
			MOVE_WILL_O_WISP,
			MOVE_CALM_MIND,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ENTEI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLASHFIRE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_SNARL,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUICUNE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERABSORB
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_SIGNAL_BEAM,
			MOVE_MIRROR_COAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUICUNE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 212,
		.spAtkEv = 36,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_SLEEP_TALK,
			MOVE_REST,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUICUNE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERABSORB
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_SCALD,
			MOVE_SNARL,
			MOVE_TOXIC,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SUICUNE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 48,
		.spAtkEv = 44,
		.spDefEv = 108,
		.spdEv = 56,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERABSORB
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICE_BEAM,
			MOVE_TAILWIND,
			MOVE_ROAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_PAYBACK,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_PURSUIT,
			MOVE_THUNDER_WAVE,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 120,
		.atkEv = 136,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_TYRANITARITE,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_CRUNCH,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 180,
		.atkEv = 252,
		.spdEv = 76,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_CRUNCH,
			MOVE_ICE_BEAM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERGROW
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_NIGHT_SLASH,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_FOCUS_BLAST,
			MOVE_GIGA_DRAIN,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERGROW
		.item = ITEM_SCEPTILITE,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_DUAL_CHOP,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCEPTILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 196,
		.defEv = 60,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_RED_CARD,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SUBSTITUTE,
			MOVE_LEECH_SEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_BLAZE_KICK,
			MOVE_REVERSAL,
			MOVE_U_TURN,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_BULK_UP,
			MOVE_BATON_PASS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_BLAZIKENITE,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_LOW_KICK,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLAZIKEN,
		.nature = NATURE_NAUGHTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_FIRE_GEM,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_VACUUM_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_BODY_PRESS,
			MOVE_CURSE,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DAMP
		.item = ITEM_JABOCA_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_COUNTER,
			MOVE_MIRROR_COAT,
			MOVE_ROAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DAMP
		.item = ITEM_SWAMPERTITE,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWAMPERT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 44,
		.defEv = 64,
		.spDefEv = 136,
		.spdEv = 12,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DAMP
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_ICY_WIND,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIGHTYENA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOXIE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CRUNCH,
			MOVE_SUCKER_PUNCH,
			MOVE_PLAY_ROUGH,
			MOVE_IRON_TAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIGHTYENA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_CRUNCH,
			MOVE_PSYCHIC_FANGS,
			MOVE_FIRE_FANG,
			MOVE_THUNDER_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIGHTYENA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_SUPER_FANG,
			MOVE_YAWN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIGHTYENA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SNARL,
			MOVE_HYPER_VOICE,
			MOVE_BURNING_JEALOUSY,
			MOVE_SUPER_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LINOONE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 148,
		.atkEv = 252,
		.spdEv = 108,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GLUTTONY
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_EXTREMESPEED,
			MOVE_STOMPING_TANTRUM,
			MOVE_SEED_BOMB,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LINOONE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_QUICKFEET
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_WHIRLPOOL,
			MOVE_TOXIC,
			MOVE_SWAGGER,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LINOONE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_QUICKFEET
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_THUNDER_WAVE,
			MOVE_TRICK,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LINOONE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 220,
		.atkEv = 252,
		.spdEv = 36,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GLUTTONY
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_EXTREMESPEED,
			MOVE_SHADOW_CLAW,
			MOVE_BELLY_DRUM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEAUTIFLY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SERENEGRACE
		.item = ITEM_BUGINIUM_Z,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_HURRICANE,
			MOVE_QUIVER_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEAUTIFLY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SERENEGRACE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_AIR_SLASH,
			MOVE_GIGA_DRAIN,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEAUTIFLY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWARM
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_VENOSHOCK,
			MOVE_TOXIC,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEAUTIFLY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWARM
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STRUGGLE_BUG,
			MOVE_ELECTROWEB,
			MOVE_TAILWIND,
			MOVE_SAFEGUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUSTOX,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DUSTYSCALES
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_TOXIC_THREAD,
			MOVE_IRON_DEFENSE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUSTOX,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DUSTYSCALES
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_VENOSHOCK,
			MOVE_TOXIC_THREAD,
			MOVE_QUIVER_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUSTOX,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DUSTYSCALES
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_DEFOG,
			MOVE_TAILWIND,
			MOVE_TOXIC_THREAD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUSTOX,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DUSTYSCALES
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_ELECTROWEB,
			MOVE_STRUGGLE_BUG,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUDICOLO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OWNTEMPO
		.item = ITEM_TANGA_BERRY,
		.moves =
		{
			MOVE_SURF,
			MOVE_LEAF_STORM,
			MOVE_FAKE_OUT,
			MOVE_TICKLE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUDICOLO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_GIGA_DRAIN,
			MOVE_ICE_BEAM,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUDICOLO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_RAINDISH
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SCALD,
			MOVE_GIGA_DRAIN,
			MOVE_TOXIC,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUDICOLO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ENERGY_BALL,
			MOVE_ICE_BEAM,
			MOVE_FAKE_OUT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SHIFTRY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_DARK_PULSE,
			MOVE_HEAT_WAVE,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHIFTRY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_SUCKER_PUNCH,
			MOVE_X_SCISSOR,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHIFTRY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PICKPOCKET
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_ROCK_SLIDE,
			MOVE_EXPLOSION,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHIFTRY,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.atkEv = 252,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_HEAT_WAVE,
			MOVE_BEAT_UP,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_NINJASK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SPEEDBOOST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_SWORDS_DANCE,
			MOVE_BATON_PASS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINJASK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SPEEDBOOST
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_LEECH_LIFE,
			MOVE_DUAL_WINGBEAT,
			MOVE_DIG,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINJASK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_DUAL_WINGBEAT,
			MOVE_FINAL_GAMBIT,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NINJASK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_SKITTER_SMACK,
			MOVE_DEFOG,
			MOVE_SPITE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_LONELY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WONDERGUARD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_POLTERGEIST,
			MOVE_WILL_O_WISP,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WONDERGUARD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_SHADOW_SNEAK,
			MOVE_SWORDS_DANCE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_NAUGHTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WONDERGUARD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_DOUBLE_TEAM,
			MOVE_SWORDS_DANCE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHEDINJA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WONDERGUARD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SHADOW_SNEAK,
			MOVE_WILL_O_WISP,
			MOVE_CONFUSE_RAY,
			MOVE_HEAL_BLOCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWELLOW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_BRAVE_BIRD,
			MOVE_STEEL_WING,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWELLOW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_AIR_SLASH,
			MOVE_HEAT_WAVE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWELLOW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_FEATHERDANCE,
			MOVE_ROOST,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWELLOW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_BOOMBURST,
			MOVE_QUICK_GUARD,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRELOOM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BULLET_SEED,
			MOVE_MACH_PUNCH,
			MOVE_SPORE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRELOOM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_POISONHEAL
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_FOCUS_PUNCH,
			MOVE_SPORE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRELOOM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BULLET_SEED,
			MOVE_ROCK_TOMB,
			MOVE_SPORE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRELOOM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_BULLET_SEED,
			MOVE_CLOSE_COMBAT,
			MOVE_ROCK_SLIDE,
			MOVE_SPORE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPINDA,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_RETURN,
			MOVE_SUPERPOWER,
			MOVE_SUCKER_PUNCH,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPINDA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUGEPOWER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_SUPERPOWER,
			MOVE_WILD_CHARGE,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPINDA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUGEPOWER
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_RETURN,
			MOVE_DRAIN_PUNCH,
			MOVE_POWER_UP_PUNCH,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPINDA,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUGEPOWER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_FAKE_OUT,
			MOVE_HELPING_HAND,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PELIPPER,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRIZZLE
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_HURRICANE,
			MOVE_KNOCK_OFF,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PELIPPER,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRIZZLE
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SCALD,
			MOVE_HURRICANE,
			MOVE_AGILITY,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PELIPPER,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 36,
		.spDefEv = 224,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRIZZLE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PELIPPER,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRIZZLE
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_HURRICANE,
			MOVE_TAILWIND,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MASQUERAIN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPOUNDEYES
		.item = ITEM_BUGINIUM_Z,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_HURRICANE,
			MOVE_HYDRO_PUMP,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MASQUERAIN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_STUN_SPORE,
			MOVE_TAILWIND,
			MOVE_DOUBLE_TEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MASQUERAIN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPOUNDEYES
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_STICKY_WEB,
			MOVE_BATON_PASS,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MASQUERAIN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_OMINOUS_WIND,
			MOVE_DEFOG,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WAILORD,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_AVALANCHE,
			MOVE_HEAVY_SLAM,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WAILORD,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_NOBLE_ROAR,
			MOVE_SOAK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WAILORD,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_OBLIVIOUS
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_WATER_SPOUT,
			MOVE_ICE_BEAM,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WAILORD,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_WATER_SPOUT,
			MOVE_EARTHQUAKE,
			MOVE_ICY_WIND,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELCATTY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NORMALIZE
		.item = ITEM_SILK_SCARF,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_SUCKER_PUNCH,
			MOVE_FAKE_OUT,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELCATTY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WONDERSKIN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_FAKE_OUT,
			MOVE_THUNDER_WAVE,
			MOVE_TICKLE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELCATTY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WONDERSKIN
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_THUNDER_WAVE,
			MOVE_WISH,
			MOVE_COSMIC_POWER,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELCATTY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WONDERSKIN
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_FAKE_OUT,
			MOVE_HELPING_HAND,
			MOVE_HEAL_BELL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KECLEON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PROTEAN
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_POWER_UP_PUNCH,
			MOVE_SEED_BOMB,
			MOVE_SHADOW_SNEAK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KECLEON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PROTEAN
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KECLEON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COLORCHANGE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_BIND,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KECLEON,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COLORCHANGE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_SWAGGER,
			MOVE_TRICK_ROOM,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLAYDOL,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTIEYE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ZEN_HEADBUTT,
			MOVE_POWER_TRICK,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLAYDOL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTIEYE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
			MOVE_SHORE_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLAYDOL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_EARTH_POWER,
			MOVE_SHADOW_BALL,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLAYDOL,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTIEYE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_RAPID_SPIN,
			MOVE_TOXIC,
			MOVE_SANDSTORM,
			MOVE_SHORE_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORKOAL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DROUGHT
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SOLAR_BEAM,
			MOVE_EARTH_POWER,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORKOAL,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 232,
		.spDefEv = 28,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LAVA_PLUME,
			MOVE_RAPID_SPIN,
			MOVE_YAWN,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORKOAL,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DROUGHT
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_LAVA_PLUME,
			MOVE_BODY_PRESS,
			MOVE_WILL_O_WISP,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORKOAL,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DROUGHT
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_FLAMETHROWER,
			MOVE_SOLAR_BEAM,
			MOVE_EARTH_POWER,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SABLEYE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_WILL_O_WISP,
			MOVE_TAUNT,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SABLEYE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_SABLENITE,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_FAKE_OUT,
			MOVE_TOXIC,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SABLEYE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_NIGHT_SHADE,
			MOVE_CONFUSE_RAY,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SABLEYE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spDefEv = 252,
		.spdEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_EJECT_BUTTON,
		.moves =
		{
			MOVE_FAKE_OUT,
			MOVE_TAUNT,
			MOVE_QUASH,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHISCASH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_EARTHQUAKE,
			MOVE_BOUNCE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHISCASH,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_ZOOM_LENS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_EARTH_POWER,
			MOVE_BLIZZARD,
			MOVE_FISSURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHISCASH,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OBLIVIOUS
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_WHIRLPOOL,
			MOVE_TOXIC,
			MOVE_REST,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHISCASH,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ICY_WIND,
			MOVE_RAIN_DANCE,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUVDISC,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
			MOVE_DRAINING_KISS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUVDISC,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_WHIRLPOOL,
			MOVE_SWEET_KISS,
			MOVE_AQUA_RING,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUVDISC,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_HEAL_PULSE,
			MOVE_SAFEGUARD,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUVDISC,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_AQUA_JET,
			MOVE_HEAL_PULSE,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CRABHAMMER,
			MOVE_KNOCK_OFF,
			MOVE_CLOSE_COMBAT,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CRABHAMMER,
			MOVE_KNOCK_OFF,
			MOVE_AQUA_JET,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHELLARMOR
		.item = ITEM_STICKY_BARB,
		.moves =
		{
			MOVE_WHIRLPOOL,
			MOVE_SWITCHEROO,
			MOVE_TAUNT,
			MOVE_COUNTER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRAWDAUNT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_ZOOM_LENS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_ROCK_SLIDE,
			MOVE_GUILLOTINE,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MILOTIC,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPETITIVE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_DRAGON_PULSE,
			MOVE_HIDDEN_POWER, //TYPE_GHOST
		},
		
		
		
		
	},
	{
		.species = SPECIES_MILOTIC,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_ENIGMA_BERRY,
		.moves =
		{
			MOVE_SURF,
			MOVE_MIRROR_COAT,
			MOVE_CONFUSE_RAY,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MILOTIC,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_HAZE,
			MOVE_RECOVER,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MILOTIC,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 56,
		.spAtkEv = 116,
		.spDefEv = 84,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPETITIVE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_HYPNOSIS,
			MOVE_COIL,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHARPEDO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_JAW_LOCK,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHARPEDO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_JAW_LOCK,
			MOVE_POISON_JAB,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHARPEDO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_SHARPEDONITE,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_CRUNCH,
			MOVE_PSYCHIC_FANGS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHARPEDO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_SNARL,
			MOVE_ICY_WIND,
			MOVE_DESTINY_BOND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_EARTHQUAKE,
			MOVE_IRON_TAIL,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DRAGON_RUSH,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PUNKROCK
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_CLANGING_SCALES,
			MOVE_EARTH_POWER,
			MOVE_BOOMBURST,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLYGON,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PUNKROCK
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLANGING_SCALES,
			MOVE_EARTHQUAKE,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HARIYAMA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_BULLET_PUNCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HARIYAMA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_REVERSAL,
			MOVE_BULLET_PUNCH,
			MOVE_ENDURE,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HARIYAMA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 12,
		.defEv = 252,
		.spDefEv = 244,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_REVENGE,
			MOVE_TOXIC,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HARIYAMA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_FAKE_OUT,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANECTRIC,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_LIGHTNINGROD
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_VOLT_SWITCH,
			MOVE_OVERHEAT,
			MOVE_SWITCHEROO,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANECTRIC,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLAREBOOST
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_VOLT_SWITCH,
			MOVE_FLAMETHROWER,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANECTRIC,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_LIGHTNINGROD
		.item = ITEM_MANECTITE,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FLAMETHROWER,
			MOVE_VOLT_SWITCH,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANECTRIC,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STATIC
		.item = ITEM_MANECTITE,
		.moves =
		{
			MOVE_VOLT_SWITCH,
			MOVE_OVERHEAT,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANECTRIC,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_LIGHTNINGROD
		.item = ITEM_MANECTITE,
		.moves =
		{
			MOVE_VOLT_SWITCH,
			MOVE_SNARL,
			MOVE_LIGHT_SCREEN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CAMERUPT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SOLIDROCK
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_SOLAR_BEAM,
			MOVE_FLASH_CANNON,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CAMERUPT,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SOLIDROCK
		.item = ITEM_PASSHO_BERRY,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CAMERUPT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SOLIDROCK
		.item = ITEM_CAMERUPTITE,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_EARTH_POWER,
			MOVE_NATURE_POWER,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CAMERUPT,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SOLIDROCK
		.item = ITEM_CAMERUPTITE,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_SCORCHING_SANDS,
			MOVE_HEAT_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_METRONOME,
		.moves =
		{
			MOVE_ICE_BALL,
			MOVE_EARTHQUAKE,
			MOVE_ENCORE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_FROST_BREATH,
			MOVE_TOXIC,
			MOVE_STOCKPILE,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SURF,
			MOVE_SUPER_FANG,
			MOVE_TOXIC,
			MOVE_ROAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WALREIN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ICEBODY
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_SURF,
			MOVE_BLIZZARD,
			MOVE_AQUA_RING,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CACTURNE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDVEIL
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_NASTY_PLOT,
			MOVE_DOUBLE_TEAM,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CACTURNE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERABSORB
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_SUCKER_PUNCH,
			MOVE_STOMPING_TANTRUM,
			MOVE_DRAIN_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CACTURNE,
		.nature = NATURE_MILD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PRANKSTER
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_SYNTHESIS,
			MOVE_SWITCHEROO,
			MOVE_ENCORE,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CACTURNE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PRANKSTER
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_LEECH_SEED,
			MOVE_ENCORE,
			MOVE_DESTINY_BOND,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOODY
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_FREEZE_DRY,
			MOVE_SHADOW_BALL,
			MOVE_WATER_PULSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 160,
		.spDefEv = 96,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FROST_BREATH,
			MOVE_SHEER_COLD,
			MOVE_SPIKES,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ICEBODY
		.item = ITEM_GLALITITE,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLALIE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOODY
		.item = ITEM_GLALITITE,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_ICY_WIND,
			MOVE_DARK_PULSE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLROCK,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ANCIENTPOWER,
			MOVE_TOXIC,
			MOVE_CALM_MIND,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLROCK,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_WILL_O_WISP,
			MOVE_STEALTH_ROCK,
			MOVE_MORNING_SUN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLROCK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_ZEN_HEADBUTT,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLROCK,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HYPNOSIS,
			MOVE_HEAL_BLOCK,
			MOVE_HELPING_HAND,
			MOVE_MORNING_SUN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNATONE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_POWER_GEM,
			MOVE_EARTH_POWER,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNATONE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EERIE_SPELL,
			MOVE_EARTH_POWER,
			MOVE_CALM_MIND,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNATONE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_SAND_TOMB,
			MOVE_HYPNOSIS,
			MOVE_COSMIC_POWER,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNATONE,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
			MOVE_HELPING_HAND,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRUMPIG,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_POWER_GEM,
			MOVE_RECOVER,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRUMPIG,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_MIRROR_COAT,
			MOVE_RECOVER,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRUMPIG,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_SHADOW_BALL,
			MOVE_FOCUS_BLAST,
			MOVE_POWER_GEM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRUMPIG,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_SIMPLE_BEAM,
			MOVE_TEETER_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PLUSLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PLUSLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_GRASS_KNOT,
			MOVE_SIGNAL_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
	},
	{
		.species = SPECIES_PLUSLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_LIGHTNINGROD
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_ELECTROWEB,
			MOVE_CAPTIVATE,
			MOVE_FAKE_TEARS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PLUSLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_NUZZLE,
			MOVE_ENCORE,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MINUN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MINUN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_GRASS_KNOT,
			MOVE_MUD_SLAP,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_MINUN,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_VOLTABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ENCORE,
			MOVE_SWEET_KISS,
			MOVE_WISH,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MINUN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_ELECTROWEB,
			MOVE_HELPING_HAND,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAWILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_IRON_HEAD,
			MOVE_SUCKER_PUNCH,
			MOVE_PSYCHIC_FANGS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAWILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 92,
		.atkEv = 252,
		.spdEv = 164,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INTIMIDATE
		.item = ITEM_MAWILITE,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_SUCKER_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAWILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INTIMIDATE
		.item = ITEM_MAWILITE,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_IRON_HEAD,
			MOVE_FIRE_FANG,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAWILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INTIMIDATE
		.item = ITEM_WEPEAR_BERRY,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_METAL_BURST,
			MOVE_ATTRACT,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEDICHAM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HUGEPOWER
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_ZEN_HEADBUTT,
			MOVE_THUNDER_PUNCH,
			MOVE_BULLET_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEDICHAM,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_PSYCHIUM_Z,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_SHADOW_BALL,
			MOVE_ENERGY_BALL,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEDICHAM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_MEDICHAMITE,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_ZEN_HEADBUTT,
			MOVE_ICE_PUNCH,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEDICHAM,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FAKE_OUT,
			MOVE_ACUPRESSURE,
			MOVE_HELPING_HAND,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALTARIA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_HURRICANE,
			MOVE_ICE_BEAM,
			MOVE_FIRE_BLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALTARIA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 72,
		.atkEv = 252,
		.spdEv = 184,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COTTONCLOUD
		.item = ITEM_ALTARIANITE,
		.moves =
		{
			MOVE_RETURN,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALTARIA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COTTONCLOUD
		.item = ITEM_ALTARIANITE,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_TOXIC,
			MOVE_COTTON_GUARD,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALTARIA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COTTONCLOUD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_HEAL_BELL,
			MOVE_COTTON_GUARD,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALTARIA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CLOUDNINE
		.item = ITEM_ALTARIANITE,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_HEAT_WAVE,
			MOVE_DEFOG,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLAKING,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRUANT
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_GIGA_IMPACT,
			MOVE_EARTHQUAKE,
			MOVE_HAMMER_ARM,
			MOVE_SHADOW_CLAW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLAKING,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRUANT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GIGA_IMPACT,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
			MOVE_PURSUIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLAKING,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRUANT
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_BODY_PRESS,
			MOVE_ENCORE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLAKING,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRUANT
		.item = ITEM_EJECT_BUTTON,
		.moves =
		{
			MOVE_GIGA_IMPACT,
			MOVE_ROCK_SLIDE,
			MOVE_FIRE_PUNCH,
			MOVE_PUNISHMENT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWALOT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GLUTTONY
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_BULLET_SEED,
			MOVE_FIRE_PUNCH,
			MOVE_GUNK_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWALOT,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spAtkEv = 200,
		.spDefEv = 60,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GOOEY
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SLUDGE_BOMB,
			MOVE_EARTHQUAKE,
			MOVE_GIGA_DRAIN,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWALOT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STICKYHOLD
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_INFESTATION,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWALOT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GOOEY
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_VENOSHOCK,
			MOVE_TOXIC,
			MOVE_VENOM_DRENCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TROPIUS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_HURRICANE,
			MOVE_ROOST,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TROPIUS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_AIR_SLASH,
			MOVE_LEECH_SEED,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TROPIUS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_RIPEN
		.item = ITEM_STARF_BERRY,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_AIR_SLASH,
			MOVE_ENDURE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TROPIUS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_LEECH_SEED,
			MOVE_TAILWIND,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXPLOUD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_RETURN,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXPLOUD,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PUNKROCK
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_FOCUS_BLAST,
			MOVE_FIRE_BLAST,
			MOVE_SURF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXPLOUD,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_COUNTER,
			MOVE_ENDEAVOR,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXPLOUD,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PUNKROCK
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_ICY_WIND,
			MOVE_TAUNT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HUNTAIL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_AQUA_TAIL,
			MOVE_ICE_FANG,
			MOVE_CRUNCH,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HUNTAIL,
		.nature = NATURE_NAUGHTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERVEIL
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_SUCKER_PUNCH,
			MOVE_ICE_BEAM,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HUNTAIL,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_CONFUSE_RAY,
			MOVE_AQUA_RING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HUNTAIL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.spAtkEv = 128,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ICY_WIND,
			MOVE_AQUA_RING,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOREBYSS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_ENERGY_BALL,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOREBYSS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOREBYSS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HYDRATION
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_CLAMP,
			MOVE_COIL,
			MOVE_AQUA_RING,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOREBYSS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HYDRATION
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ICY_WIND,
			MOVE_REST,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SUPERLUCK
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_NIGHT_SLASH,
			MOVE_PSYCHO_CUT,
			MOVE_PLAY_ROUGH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SUPERLUCK
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_NIGHT_SLASH,
			MOVE_PSYCHO_CUT,
			MOVE_ME_FIRST,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_ABSOLITE,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_PURSUIT,
			MOVE_FIRE_BLAST,
			MOVE_IRON_TAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_ABSOLITE,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_SUPERPOWER,
			MOVE_ZEN_HEADBUTT,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BANETTE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INSOMNIA
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_SUCKER_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BANETTE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CURSEDBODY
		.item = ITEM_STICKY_BARB,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_CURSE,
			MOVE_THUNDER_WAVE,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BANETTE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 40,
		.atkEv = 252,
		.spdEv = 216,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FRISK
		.item = ITEM_BANETTITE,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_GUNK_SHOT,
			MOVE_DESTINY_BOND,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BANETTE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INSOMNIA
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_OMINOUS_WIND,
			MOVE_ICY_WIND,
			MOVE_WILL_O_WISP,
			MOVE_PAIN_SPLIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEVIPER,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_FLAMETHROWER,
			MOVE_GIGA_DRAIN,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEVIPER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLIPPERYTAIL
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_POISON_TAIL,
			MOVE_AQUA_TAIL,
			MOVE_IRON_TAIL,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEVIPER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHEDSKIN
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_KNOCK_OFF,
			MOVE_REST,
			MOVE_COIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEVIPER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLIPPERYTAIL
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_POISON_TAIL,
			MOVE_AQUA_TAIL,
			MOVE_GLARE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZANGOOSE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TOXICBOOST
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_QUICK_ATTACK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZANGOOSE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TOUGHCLAWS
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_THROAT_CHOP,
			MOVE_FINAL_GAMBIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZANGOOSE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 124,
		.atkEv = 132,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TOUGHCLAWS
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_QUICK_ATTACK,
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZANGOOSE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TOUGHCLAWS
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_CRUSH_CLAW,
			MOVE_ROCK_SLIDE,
			MOVE_FINAL_GAMBIT,
			MOVE_QUICK_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RELICANTH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ROCKHEAD
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_HEAD_SMASH,
			MOVE_EARTHQUAKE,
			MOVE_ZEN_HEADBUTT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RELICANTH,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 52,
		.spDefEv = 252,
		.spdEv = 204,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_BULLDOZE,
			MOVE_RAIN_DANCE,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RELICANTH,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RELICANTH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_RAIN_DANCE,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AGGRON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ROCKHEAD
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_HEAD_SMASH,
			MOVE_EARTHQUAKE,
			MOVE_AQUA_TAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AGGRON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_AGGRONITE,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AGGRON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 56,
		.spDefEv = 200,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_AGGRONITE,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_BODY_PRESS,
			MOVE_ICE_PUNCH,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AGGRON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ROCKHEAD
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_HEAD_SMASH,
			MOVE_HIGH_HORSEPOWER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CASTFORM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FORECAST
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_THUNDER,
			MOVE_HURRICANE,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CASTFORM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FORECAST
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_AVALANCHE,
			MOVE_TAILWIND,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CASTFORM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FORECAST
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_CLEAR_SMOG,
			MOVE_DEFOG,
			MOVE_TAILWIND,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CASTFORM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FORECAST
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_WEATHER_BALL,
			MOVE_REST,
			MOVE_SNORE,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLBEAT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
			MOVE_ENCORE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLBEAT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_METRONOME,
			MOVE_TOXIC,
			MOVE_ENCORE,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLBEAT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_TAIL_GLOW,
			MOVE_SUBSTITUTE,
			MOVE_THUNDER_WAVE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLBEAT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ENCORE,
			MOVE_HELPING_HAND,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ILLUMISE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TINTEDLENS
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_GIGA_DRAIN,
			MOVE_TAIL_GLOW,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ILLUMISE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_THUNDER_WAVE,
			MOVE_ENCORE,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ILLUMISE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_TAIL_GLOW,
			MOVE_SUBSTITUTE,
			MOVE_ENCORE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ILLUMISE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DEFOG,
			MOVE_HELPING_HAND,
			MOVE_ENCORE,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRADILY,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STORMDRAIN
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_MIRROR_COAT,
			MOVE_INGRAIN,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRADILY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SIMPLE
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_METEOR_BEAM,
			MOVE_GIGA_DRAIN,
			MOVE_EARTH_POWER,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRADILY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SIMPLE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_STONE_EDGE,
			MOVE_CURSE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRADILY,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STORMDRAIN
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_LEECH_SEED,
			MOVE_SANDSTORM,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARMALDO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TOUGHCLAWS
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_X_SCISSOR,
			MOVE_EARTHQUAKE,
			MOVE_AQUA_JET,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARMALDO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 44,
		.spdEv = 212,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_ROCK_BLAST,
			MOVE_CROSS_POISON,
			MOVE_KNOCK_OFF,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARMALDO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TOUGHCLAWS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ACCELEROCK,
			MOVE_AQUA_JET,
			MOVE_LIQUIDATION,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARMALDO,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BATTLEARMOR
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_RAPID_SPIN,
			MOVE_STEALTH_ROCK,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARMALDO,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TOUGHCLAWS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ACCELEROCK,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GARDEVOIR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TRACE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_MOONBLAST,
			MOVE_AURA_SPHERE,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARDEVOIR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_GARDEVOIRITE,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_HYPER_VOICE,
			MOVE_MYSTICAL_FIRE,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARDEVOIR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_GARDEVOIRITE,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_HYPER_VOICE,
			MOVE_CALM_MIND,
			MOVE_DOUBLE_TEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARDEVOIR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_GARDEVOIRITE,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_HYPER_VOICE,
			MOVE_AURA_SPHERE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOXIE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_DUAL_WINGBEAT,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 44,
		.atkEv = 252,
		.spdEv = 212,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 116,
		.atkEv = 62,
		.defEv = 4,
		.spDefEv = 156,
		.spdEv = 172,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_RETURN,
			MOVE_DRAGON_DANCE,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_METAGROSS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_METEOR_MASH,
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_METAGROSS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_METAGROSSITE,
		.moves =
		{
			MOVE_BULLET_PUNCH,
			MOVE_ZEN_HEADBUTT,
			MOVE_HAMMER_ARM,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_METAGROSS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_METAGROSSITE,
		.moves =
		{
			MOVE_METEOR_MASH,
			MOVE_ZEN_HEADBUTT,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_METAGROSS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_METAGROSSITE,
		.moves =
		{
			MOVE_METEOR_MASH,
			MOVE_THUNDER_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIROCK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 8,
		.spdEv = 248,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_DRAIN_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIROCK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_EXPLOSION,
			MOVE_SUNNY_DAY,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIROCK,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 180,
		.spDefEv = 76,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_BODY_PRESS,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIROCK,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_SAFEGUARD,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGICE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 8,
		.spdEv = 248,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_FOCUS_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGICE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FROST_BREATH,
			MOVE_CHARGE_BEAM,
			MOVE_AMNESIA,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGICE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_ANCIENTPOWER,
			MOVE_TOXIC,
			MOVE_SWAGGER,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGICE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_SAFEGUARD,
			MOVE_HAIL,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGISTEEL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spDefEv = 4,
		.spdEv = 248,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_EARTHQUAKE,
			MOVE_SUPERPOWER,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGISTEEL,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_THUNDER_WAVE,
			MOVE_CURSE,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGISTEEL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEISMIC_TOSS,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGISTEEL,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_THUNDER_WAVE,
			MOVE_GRAVITY,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIAS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SERENEGRACE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_MIST_BALL,
			MOVE_AURA_SPHERE,
			MOVE_SHADOW_BALL,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIAS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_MIST_BALL,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIAS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LATIASITE,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_AURA_SPHERE,
			MOVE_CALM_MIND,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIAS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 76,
		.spDefEv = 4,
		.spdEv = 176,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LATIASITE,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_TOXIC,
			MOVE_DEFOG,
			MOVE_HEALING_WISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIAS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_PSYCHO_SHIFT,
			MOVE_RECOVER,
			MOVE_HEAL_PULSE,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIOS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_PSYSHOCK,
			MOVE_MYSTICAL_FIRE,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIOS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SERENEGRACE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_LUSTER_PURGE,
			MOVE_DRACO_METEOR,
			MOVE_AURA_SPHERE,
			MOVE_AIR_SLASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LATIOSITE,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_ZEN_HEADBUTT,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIOS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LATIOSITE,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_MYSTICAL_FIRE,
			MOVE_CALM_MIND,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LATIOS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LATIOSITE,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_PSYSHOCK,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHIMECHO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LEVITATE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_DAZZLING_GLEAM,
			MOVE_SHADOW_BALL,
			MOVE_PSYCHIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHIMECHO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_HEALING_WISH,
			MOVE_RECOVER,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHIMECHO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_TAUNT,
			MOVE_DEFOG,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHIMECHO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_HEAL_PULSE,
			MOVE_RECOVER,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORTERRA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 60,
		.defEv = 196,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_WOOD_HAMMER,
			MOVE_EARTHQUAKE,
			MOVE_STEALTH_ROCK,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORTERRA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_HEADLONG_RUSH,
			MOVE_STONE_EDGE,
			MOVE_ROCK_POLISH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORTERRA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_LEECH_SEED,
			MOVE_SUBSTITUTE,
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORTERRA,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_HEADLONG_RUSH,
			MOVE_ROCK_SLIDE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_CLOSE_COMBAT,
			MOVE_STONE_EDGE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_VACUUM_WAVE,
			MOVE_SCORCHING_SANDS,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IRONFIST
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FIRE_PUNCH,
			MOVE_DRAIN_PUNCH,
			MOVE_THUNDER_PUNCH,
			MOVE_MACH_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INFERNAPE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IRONFIST
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_ACROBATICS,
			MOVE_MACH_PUNCH,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMPOLEON,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 76,
		.spDefEv = 180,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMPOLEON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDRO_CANNON,
			MOVE_FLASH_CANNON,
			MOVE_ICE_BEAM,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMPOLEON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WAVE_CRASH,
			MOVE_EARTHQUAKE,
			MOVE_DRILL_PECK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMPOLEON,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_WACAN_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICY_WIND,
			MOVE_GRASS_KNOT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_DOUBLE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_BRAVE_BIRD,
			MOVE_CLOSE_COMBAT,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_U_TURN,
			MOVE_FINAL_GAMBIT,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STARAPTOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 68,
		.spdEv = 188,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_CLOSE_COMBAT,
			MOVE_U_TURN,
			MOVE_FINAL_GAMBIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BIBAREL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SIMPLE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_TAIL_SLAP,
			MOVE_WATERFALL,
			MOVE_AQUA_JET,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BIBAREL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SIMPLE
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_RETURN,
			MOVE_AQUA_JET,
			MOVE_SWORDS_DANCE,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BIBAREL,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SIMPLE
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_QUICK_ATTACK,
			MOVE_NO_RETREAT,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BIBAREL,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICY_WIND,
			MOVE_STEALTH_ROCK,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KRICKETUNE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_BUG_GEM,
		.moves =
		{
			MOVE_FELL_STINGER,
			MOVE_POWER_UP_PUNCH,
			MOVE_THIEF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KRICKETUNE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_PERISH_SONG,
			MOVE_MUD_SLAP,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KRICKETUNE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_THIEF,
			MOVE_ENDEAVOR,
			MOVE_TAUNT,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KRICKETUNE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_STRUGGLE_BUG,
			MOVE_PERISH_SONG,
			MOVE_STICKY_WEB,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUXRAY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_VOLT_TACKLE,
			MOVE_ICE_FANG,
			MOVE_PLAY_ROUGH,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUXRAY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_VOLT_TACKLE,
			MOVE_ICE_FANG,
			MOVE_PSYCHIC_FANGS,
			MOVE_THROAT_CHOP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUXRAY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INTIMIDATE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_THUNDER_WAVE,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUXRAY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INTIMIDATE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_SNARL,
			MOVE_VOLT_SWITCH,
			MOVE_PROTECT,
		},
		
		
		
		 //Change Thunderbolt to Discharge if appropriate
	},
	{
		.species = SPECIES_ROSERADE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_POISONIUM_Z,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_SLUDGE_BOMB,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ROSERADE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SLUDGE_BOMB,
			MOVE_DAZZLING_GLEAM,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
		},
		
		
		
		
	},
	{
		.species = SPECIES_ROSERADE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_LEECH_SEED,
			MOVE_SPIKES,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ROSERADE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_SLUDGE_BOMB,
			MOVE_DAZZLING_GLEAM,
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_RAMPARDOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_ZEN_HEADBUTT,
			MOVE_FIRE_PUNCH,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAMPARDOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_WILD_CHARGE,
			MOVE_DOUBLE_EDGE,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAMPARDOS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MOLDBREAKER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_EARTHQUAKE,
			MOVE_AVALANCHE,
			MOVE_HAMMER_ARM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAMPARDOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MOLDBREAKER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_PURSUIT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASTIODON,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_METAL_BURST,
			MOVE_TOXIC,
			MOVE_ROAR,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASTIODON,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_METAL_BURST,
			MOVE_TOXIC,
			MOVE_REST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASTIODON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DAUNTLESSSHIELD
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_BEHEMOTH_BASH,
			MOVE_EARTHQUAKE,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASTIODON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DAUNTLESSSHIELD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BEHEMOTH_BASH,
			MOVE_TAUNT,
			MOVE_MAGIC_COAT,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOTHIM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ADAPTABILITY
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_GIGA_DRAIN,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOTHIM,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SUBTERFUGE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_AIR_SLASH,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOTHIM,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPOUNDEYES
		.item = ITEM_BUGINIUM_Z,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_HURRICANE,
			MOVE_QUIVER_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOTHIM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SUBTERFUGE
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_STRUGGLE_BUG,
			MOVE_HURRICANE,
			MOVE_ELECTROWEB,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VESPIQUEN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HONEYGUARD
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_DUAL_WINGBEAT,
			MOVE_TOXIC,
			MOVE_DEFEND_ORDER,
			MOVE_HEAL_ORDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VESPIQUEN,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HONEYGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_TOXIC,
			MOVE_SUBSTITUTE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VESPIQUEN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUEENLYMAJESTY
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_AIR_SLASH,
			MOVE_VENOSHOCK,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VESPIQUEN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUEENLYMAJESTY
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_HEAL_ORDER,
			MOVE_DESTINY_BOND,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PACHIRISU,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_HEADBUTT,
			MOVE_BITE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PACHIRISU,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_VOLTABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_NUZZLE,
			MOVE_U_TURN,
			MOVE_SUPER_FANG,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PACHIRISU,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_VOLTABSORB
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_NUZZLE,
			MOVE_VOLT_SWITCH,
			MOVE_SUPER_FANG,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PACHIRISU,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_VOLTABSORB
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_NUZZLE,
			MOVE_SUPER_FANG,
			MOVE_FOLLOW_ME,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLOATZEL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WATER_PULSE,
			MOVE_MUD_SHOT,
			MOVE_ICY_WIND,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLOATZEL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_AQUA_JET,
			MOVE_ROCK_TOMB,
			MOVE_TAIL_SLAP,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLOATZEL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ICE_PUNCH,
			MOVE_BRICK_BREAK,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLOATZEL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ICE_PUNCH,
			MOVE_FOCUS_PUNCH,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_CHERRIM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLOWERGIFT
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_SOLAR_BLADE,
			MOVE_PLAY_ROUGH,
			MOVE_SUNNY_DAY,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHERRIM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLOWERGIFT
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_ENERGY_BALL,
			MOVE_DAZZLING_GLEAM,
			MOVE_NATURE_POWER,
			MOVE_HEALING_WISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHERRIM,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLOWERGIFT
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_DAZZLING_GLEAM,
			MOVE_HIDDEN_POWER, //TYPE_ROCK
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHERRIM,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLOWERGIFT
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_WEATHER_BALL,
			MOVE_POLLEN_PUFF,
			MOVE_HELPING_HAND,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GASTRODON,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GASTRODON,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SURF,
			MOVE_SLUDGE_WAVE,
			MOVE_COUNTER,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GASTRODON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_EARTHQUAKE,
			MOVE_CURSE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GASTRODON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 26,
		.hpEv = 124,
		.defEv = 148,
		.spAtkEv = 100,
		.spDefEv = 132,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_EARTH_POWER,
			MOVE_ICE_BEAM,
			MOVE_CLEAR_SMOG,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMBIPOM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RETURN,
			MOVE_KNOCK_OFF,
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMBIPOM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_SILK_SCARF,
		.moves =
		{
			MOVE_LAST_RESORT,
			MOVE_FAKE_OUT,
			MOVE_NONE,
			MOVE_NONE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMBIPOM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_KINGS_ROCK,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_THIEF,
			MOVE_FLING,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMBIPOM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_NORMAL_GEM,
		.moves =
		{
			MOVE_RETURN,
			MOVE_LOW_KICK,
			MOVE_ACROBATICS,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRIFBLIM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 128,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_ACROBATICS,
			MOVE_SUCKER_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRIFBLIM,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLAREBOOST
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_ASTRAL_BARRAGE,
			MOVE_THUNDERBOLT,
			MOVE_STRENGTH_SAP,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRIFBLIM,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 88,
		.spAtkEv = 240,
		.spdEv = 180,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_ASTRAL_BARRAGE,
			MOVE_ACROBATICS,
			MOVE_THUNDERBOLT,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRIFBLIM,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 128,
		.spDefEv = 252,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_GHOST_GEM,
		.moves =
		{
			MOVE_ASTRAL_BARRAGE,
			MOVE_WILL_O_WISP,
			MOVE_STRENGTH_SAP,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIMBER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_HIGH_JUMP_KICK,
			MOVE_TRIPLE_AXEL,
			MOVE_MACH_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_KLUTZ
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_ENTRAINMENT,
			MOVE_SWITCHEROO,
			MOVE_ENCORE,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIMBER
		.item = ITEM_LOPUNNITE,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_PLAY_ROUGH,
			MOVE_POWER_UP_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIMBER
		.item = ITEM_LOPUNNITE,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_DRAIN_PUNCH,
			MOVE_MACH_PUNCH,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MISMAGIUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_FAIRIUM_Z,
		.moves =
		{
			MOVE_MOONGEIST_BEAM,
			MOVE_DAZZLING_GLEAM,
			MOVE_TAUNT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MISMAGIUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_MOONGEIST_BEAM,
			MOVE_MYSTICAL_FIRE,
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MISMAGIUS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONGEIST_BEAM,
			MOVE_DAZZLING_GLEAM,
			MOVE_WILL_O_WISP,
			MOVE_PAIN_SPLIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MISMAGIUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_PERISH_SONG,
			MOVE_TAUNT,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HONCHKROW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOXIE
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_BRAVE_BIRD,
			MOVE_SUPERPOWER,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HONCHKROW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SUPERLUCK
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_NIGHT_SLASH,
			MOVE_DRILL_PECK,
			MOVE_SUCKER_PUNCH,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HONCHKROW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SUPERLUCK
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_OBLIVION_WING,
			MOVE_HEAT_WAVE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HONCHKROW,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INSOMNIA
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SNARL,
			MOVE_OBLIVION_WING,
			MOVE_HEAT_WAVE,
			MOVE_ICY_WIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PURUGLY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_SUCKER_PUNCH,
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PURUGLY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_KNOCK_OFF,
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PURUGLY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_BLUNDER_POLICY,
		.moves =
		{
			MOVE_STOMPING_TANTRUM,
			MOVE_PLAY_ROUGH,
			MOVE_HONE_CLAWS,
			MOVE_HYPNOSIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PURUGLY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_ASSURANCE,
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
			MOVE_HYPNOSIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SKUNTANK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_AFTERMATH
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_SUCKER_PUNCH,
			MOVE_PURSUIT,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SKUNTANK,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_AFTERMATH
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_ACID_SPRAY,
			MOVE_DARK_PULSE,
			MOVE_FIRE_BLAST,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SKUNTANK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONTOUCH
		.item = ITEM_POISONIUM_Z,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_SUCKER_PUNCH,
			MOVE_CRUNCH,
			MOVE_MEMENTO,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SKUNTANK,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_AFTERMATH
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_VENOSHOCK,
			MOVE_POISON_GAS,
			MOVE_VENOM_DRENCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRONZONG,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRONZONG,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_DOOM_DESIRE,
			MOVE_BODY_PRESS,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRONZONG,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HEATPROOF
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_DOOM_DESIRE,
			MOVE_PSYSHOCK,
			MOVE_CALM_MIND,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRONZONG,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 96,
		.spDefEv = 160,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_HYPNOSIS,
			MOVE_TRICK_ROOM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHATOT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PUNKROCK
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_HURRICANE,
			MOVE_HEAT_WAVE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHATOT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PUNKROCK
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_HURRICANE,
			MOVE_HIDDEN_POWER, //TYPE_FIGHTING
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHATOT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PUNKROCK
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_CHATTER,
			MOVE_OMINOUS_WIND,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHATOT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PUNKROCK
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_BOOMBURST,
			MOVE_CHATTER,
			MOVE_HEAT_WAVE,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPIRITOMB,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_BLACK_GLASSES,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_SUCKER_PUNCH,
			MOVE_PURSUIT,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPIRITOMB,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BADDREAMS
		.item = ITEM_ZOOM_LENS,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_DREAM_EATER,
			MOVE_CALM_MIND,
			MOVE_HYPNOSIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPIRITOMB,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_WILL_O_WISP,
			MOVE_PAIN_SPLIT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPIRITOMB,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_WILL_O_WISP,
			MOVE_TAUNT,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROUGHSKIN
		.item = ITEM_GARCHOMPITE,
		.moves =
		{
			MOVE_SCALE_SHOT,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROUGHSKIN
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_CLAW,
			MOVE_STONE_EDGE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROUGHSKIN
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_OUTRAGE,
			MOVE_STONE_EDGE,
			MOVE_IRON_HEAD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 240,
		.defEv = 176,
		.spdEv = 92,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROUGHSKIN
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_DRAGON_TAIL,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_BLAST,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROUGHSKIN
		.item = ITEM_GARCHOMPITE,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SWORDS_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_BULLET_PUNCH,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 60,
		.atkEv = 60,
		.defEv = 124,
		.spDefEv = 124,
		.spdEv = 140,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_LUCARIONITE,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_METEOR_MASH,
			MOVE_BLAZE_KICK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STEADFAST
		.item = ITEM_LUCARIONITE,
		.moves =
		{
			MOVE_AURA_SPHERE,
			MOVE_FLASH_CANNON,
			MOVE_DARK_PULSE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUCARIO,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STEADFAST
		.item = ITEM_LUCARIONITE,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_FLASH_CANNON,
			MOVE_EXTREMESPEED,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HIPPOWDON,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_SLACK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HIPPOWDON,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ICE_FANG,
			MOVE_CURSE,
			MOVE_SLACK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HIPPOWDON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROAR,
			MOVE_STEALTH_ROCK,
			MOVE_SLACK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HIPPOWDON,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_CURSE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_HIPPOWDON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDFORCE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_IRON_HEAD,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DRAPION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNIPER
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_CROSS_POISON,
			MOVE_NIGHT_SLASH,
			MOVE_AQUA_TAIL,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAPION,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BATTLEARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TAUNT,
			MOVE_WHIRLWIND,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAPION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SUPERLUCK
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_CROSS_POISON,
			MOVE_KNOCK_OFF,
			MOVE_EARTHQUAKE,
			MOVE_PURSUIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAPION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SUPERLUCK
		.item = ITEM_POISONIUM_Z,
		.moves =
		{
			MOVE_CROSS_POISON,
			MOVE_KNOCK_OFF,
			MOVE_ROCK_SLIDE,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXICROAK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONTOUCH
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GUNK_SHOT,
			MOVE_CLOSE_COMBAT,
			MOVE_SUCKER_PUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXICROAK,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRYSKIN
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_FOCUS_BLAST,
			MOVE_DARK_PULSE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXICROAK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONTOUCH
		.item = ITEM_PAYAPA_BERRY,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_SUCKER_PUNCH,
			MOVE_TAUNT,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXICROAK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 64,
		.atkEv = 252,
		.spdEv = 192,
		.ability = FRONTIER_ABILITY_2, //ABILITY_DRYSKIN
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_DRAIN_PUNCH,
			MOVE_FEINT,
			MOVE_FAKE_OUT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_CARNIVINE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 188,
		.atkEv = 252,
		.spdEv = 68,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_WATMEL_BERRY,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_KNOCK_OFF,
			MOVE_NATURAL_GIFT,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARNIVINE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 188,
		.atkEv = 252,
		.spdEv = 68,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_KNOCK_OFF,
			MOVE_SLEEP_POWDER,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARNIVINE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_ACID_SPRAY,
			MOVE_EARTH_POWER,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARNIVINE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_SLEEP_POWDER,
			MOVE_DEFOG,
			MOVE_RAGE_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUMINEON,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERBUBBLE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_SIGNAL_BEAM,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUMINEON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 248,
		.spdEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERBUBBLE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICE_BEAM,
			MOVE_FLIP_TURN,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUMINEON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 248,
		.spdEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUMINEON,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 248,
		.spdEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_WACAN_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_FLIP_TURN,
			MOVE_DEFOG,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ABOMASNOW,
		.nature = NATURE_MILD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SNOWWARNING
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_LEAF_STORM,
			MOVE_EARTHQUAKE,
			MOVE_ICE_SHARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ABOMASNOW,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SNOWWARNING
		.item = ITEM_ABOMASITE,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_WOOD_HAMMER,
			MOVE_EARTHQUAKE,
			MOVE_GIGA_DRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ABOMASNOW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SOUNDPROOF
		.item = ITEM_ABOMASITE,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_ICICLE_SPEAR,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ABOMASNOW,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SNOWWARNING
		.item = ITEM_ABOMASITE,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_GIGA_DRAIN,
			MOVE_AURORA_VEIL,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_WEAVILE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_KNOCK_OFF,
			MOVE_ICE_SHARD,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEAVILE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_KNOCK_OFF,
			MOVE_PSYCHO_CUT,
			MOVE_ICE_SHARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEAVILE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_TRIPLE_AXEL,
			MOVE_KNOCK_OFF,
			MOVE_ICE_SHARD,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEAVILE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PICKPOCKET
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_BEAT_UP,
			MOVE_TAUNT,
			MOVE_FAKE_OUT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGNETPULL
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_STEEL_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 8,
		.defEv = 4,
		.spAtkEv = 244,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGNETPULL
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FLASH_CANNON,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 1,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FLASH_CANNON,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FLASH_CANNON,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LICKILICKY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 172,
		.atkEv = 252,
		.spdEv = 84,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RETURN,
			MOVE_EARTHQUAKE,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LICKILICKY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_THICKFAT
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_EARTHQUAKE,
			MOVE_HAMMER_ARM,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LICKILICKY,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_OBLIVIOUS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LICKILICKY,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CLOUDNINE
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_EXPLOSION,
			MOVE_ROCK_SLIDE,
			MOVE_ICY_WIND,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SOLIDROCK
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_EARTHQUAKE,
			MOVE_HEAT_CRASH,
			MOVE_DOUBLE_EDGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SOLIDROCK
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LIGHTNINGROD
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_HAMMER_ARM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RHYPERIOR,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_EARTHQUAKE,
			MOVE_MEGAHORN,
			MOVE_THUNDER_PUNCH,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_TANGROWTH,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 28,
		.spDefEv = 228,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SLUDGE_BOMB,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TANGROWTH,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 212,
		.spDefEv = 48,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_KNOCK_OFF,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TANGROWTH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_SLEEP_POWDER,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TANGROWTH,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 212,
		.spDefEv = 48,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_LEECH_SEED,
			MOVE_SLEEP_POWDER,
			MOVE_INGRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TANGROWTH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SOLAR_BLADE,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_GROWTH,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MOTORDRIVE
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_PLASMA_FISTS,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
			MOVE_CROSS_CHOP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MOTORDRIVE
		.item = ITEM_BLUNDER_POLICY,
		.moves =
		{
			MOVE_THUNDER,
			MOVE_FLAMETHROWER,
			MOVE_FOCUS_BLAST,
			MOVE_PSYCHIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MOTORDRIVE
		.item = ITEM_ELECTRIC_SEED,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_BULLDOZE,
			MOVE_THUNDER_WAVE,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTIVIRE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MOTORDRIVE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_PLASMA_FISTS,
			MOVE_ROCK_SLIDE,
			MOVE_FIRE_PUNCH,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGMORTAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_SCORCHING_SANDS,
			MOVE_PSYCHIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGMORTAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_EARTHQUAKE,
			MOVE_MACH_PUNCH,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGMORTAR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLAMEBODY
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_LAVA_PLUME,
			MOVE_WILL_O_WISP,
			MOVE_CONFUSE_RAY,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGMORTAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_POISONIUM_Z,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_BELCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOGEKISS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SUPERLUCK
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_AIR_SLASH,
			MOVE_AURA_SPHERE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOGEKISS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SERENEGRACE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_AIR_SLASH,
			MOVE_AURA_SPHERE,
			MOVE_FLAMETHROWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOGEKISS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 160,
		.spdEv = 96,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SERENEGRACE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AIR_SLASH,
			MOVE_THUNDER_WAVE,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOGEKISS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 204,
		.spDefEv = 24,
		.spdEv = 28,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SERENEGRACE
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_AIR_SLASH,
			MOVE_ENCORE,
			MOVE_TAILWIND,
			MOVE_FOLLOW_ME,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YANMEGA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TINTEDLENS
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_AIR_SLASH,
			MOVE_GIGA_DRAIN,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YANMEGA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SPEEDBOOST
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_AIR_SLASH,
			MOVE_GIGA_DRAIN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YANMEGA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SPEEDBOOST
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_AIR_SLASH,
			MOVE_ANCIENTPOWER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YANMEGA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SPEEDBOOST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_AIR_CUTTER,
			MOVE_SHADOW_BALL,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEAFEON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SAPSIPPER
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_IRON_TAIL,
			MOVE_X_SCISSOR,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEAFEON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_TROP_KICK,
			MOVE_KNOCK_OFF,
			MOVE_SUNNY_DAY,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEAFEON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SAPSIPPER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_X_SCISSOR,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEAFEON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SAPSIPPER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TROP_KICK,
			MOVE_KNOCK_OFF,
			MOVE_LEECH_SEED,
			MOVE_HEAL_BELL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLACEON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_FREEZE_DRY,
			MOVE_SHADOW_BALL,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLACEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_HIDDEN_POWER, //TYPE_FIGHTING
			MOVE_CELEBRATE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLACEON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_SIGNAL_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLACEON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GLACIATE,
			MOVE_HEAL_BELL,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLACEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SNOWCLOAK
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_YAWN,
			MOVE_AURORA_VEIL,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 244,
		.defEv = 44,
		.spDefEv = 68,
		.spdEv = 152,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONHEAL
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_KNOCK_OFF,
			MOVE_STEALTH_ROCK,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 184,
		.atkEv = 252,
		.spdEv = 72,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONHEAL
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_FACADE,
			MOVE_SWORDS_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.atkEv = 4,
		.defEv = 36,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONHEAL
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 124,
		.spDefEv = 132,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ACROBATICS,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 44,
		.atkEv = 212,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ICICLE_SPEAR,
			MOVE_ICE_SHARD,
			MOVE_FISSURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ICE_SHARD,
			MOVE_KNOCK_OFF,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ICICLE_CRASH,
			MOVE_ICE_SHARD,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HIGH_HORSEPOWER,
			MOVE_ICICLE_SPEAR,
			MOVE_ICE_SHARD,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNOWCLOAK
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_SUBSTITUTE,
			MOVE_ROAR,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_PORYGON_Z,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ADAPTABILITY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_TRI_ATTACK,
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PORYGON_Z,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ADAPTABILITY
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_CONVERSION,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PORYGON_Z,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ADAPTABILITY
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_TRI_ATTACK,
			MOVE_DARK_PULSE,
			MOVE_ICE_BEAM,
			MOVE_THUNDERBOLT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PORYGON_Z,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_ZOOM_LENS,
		.moves =
		{
			MOVE_TRI_ATTACK,
			MOVE_DARK_PULSE,
			MOVE_BLIZZARD,
			MOVE_ELECTROWEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOXIE
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_PSYCHO_CUT,
			MOVE_CLOSE_COMBAT,
			MOVE_NIGHT_SLASH,
			MOVE_LEAF_BLADE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_GALLADITE,
		.moves =
		{
			MOVE_PSYCHO_CUT,
			MOVE_DRAIN_PUNCH,
			MOVE_SHADOW_SNEAK,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_GALLADITE,
		.moves =
		{
			MOVE_ZEN_HEADBUTT,
			MOVE_DRAIN_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOXIE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_ZEN_HEADBUTT,
			MOVE_CLOSE_COMBAT,
			MOVE_SHADOW_SNEAK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_GALLADITE,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_CLOSE_COMBAT,
			MOVE_QUICK_GUARD,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PROBOPASS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 172,
		.spAtkEv = 252,
		.spdEv = 84,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_FLASH_CANNON,
			MOVE_EARTH_POWER,
			MOVE_VOLT_SWITCH,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PROBOPASS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGNETPULL
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_POWER_GEM,
			MOVE_EARTH_POWER,
			MOVE_DAZZLING_GLEAM,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PROBOPASS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_GANLON_BERRY,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_TAUNT,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PROBOPASS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_VOLT_SWITCH,
			MOVE_THUNDER_WAVE,
			MOVE_STEALTH_ROCK,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_WILL_O_WISP,
			MOVE_CONFUSE_RAY,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.atkEv = 252,
		.defEv = 44,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IRONFIST
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_POWER_UP_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_THUNDER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_NIGHT_SHADE,
			MOVE_PAIN_SPLIT,
			MOVE_WILL_O_WISP,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUSKNOIR,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 236,
		.defEv = 36,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_MENTAL_HERB,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_WILL_O_WISP,
			MOVE_TRICK_ROOM,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSLASS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PERISHBODY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_TRIPLE_AXEL,
			MOVE_WAKE_UP_SLAP,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSLASS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CURSEDBODY
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_HEX,
			MOVE_WILL_O_WISP,
			MOVE_TAUNT,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSLASS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PERISHBODY
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_WILL_O_WISP,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSLASS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CURSEDBODY
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_THUNDER_WAVE,
			MOVE_SPIKES,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSLASS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SNOWCLOAK
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_SUBSTITUTE,
			MOVE_THUNDER_WAVE,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_UXIE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMATOSE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_SNORE,
			MOVE_SHADOW_BALL,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UXIE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 40,
		.spdEv = 216,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMATOSE
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_MYSTICAL_POWER,
			MOVE_YAWN,
			MOVE_MEMENTO,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UXIE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_U_TURN,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UXIE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_MENTAL_HERB,
		.moves =
		{
			MOVE_STEALTH_ROCK,
			MOVE_MAGIC_COAT,
			MOVE_HELPING_HAND,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MESPRIT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 240,
		.spDefEv = 16,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_U_TURN,
			MOVE_THUNDER_WAVE,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MESPRIT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 208,
		.spDefEv = 48,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_ICE_BEAM,
			MOVE_CALM_MIND,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MESPRIT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_MYSTICAL_POWER,
			MOVE_ICE_BEAM,
			MOVE_SIGNAL_BEAM,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MESPRIT,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 16,
		.spDefEv = 240,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_ROOM_SERVICE,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_KNOCK_OFF,
			MOVE_HELPING_HAND,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AZELF,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_EXPLOSION,
			MOVE_TAUNT,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AZELF,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_EXPLOSION,
			MOVE_STEALTH_ROCK,
			MOVE_MAGIC_COAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AZELF,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_MYSTICAL_POWER,
			MOVE_FLAMETHROWER,
			MOVE_THUNDERBOLT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AZELF,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_NORMAL_GEM,
		.moves =
		{
			MOVE_ZEN_HEADBUTT,
			MOVE_ICE_PUNCH,
			MOVE_EXPLOSION,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HEATRAN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_MAGMA_STORM,
			MOVE_SOLAR_BEAM,
			MOVE_EARTH_POWER,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HEATRAN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_EARTH_POWER,
			MOVE_FLASH_CANNON,
			MOVE_DARK_PULSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HEATRAN,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 40,
		.spDefEv = 220,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MAGMA_STORM,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HEATRAN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 56,
		.defEv = 8,
		.spAtkEv = 192,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_EARTH_POWER,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_REGIGIGAS,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STALL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GIGA_IMPACT,
			MOVE_DRAIN_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIGIGAS,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STALL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_REST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIGIGAS,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STALL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_RETURN,
			MOVE_DRAIN_PUNCH,
			MOVE_SUBSTITUTE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIGIGAS,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 64,
		.defEv = 84,
		.spDefEv = 112,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SLOWSTART
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_ICY_WIND,
			MOVE_THUNDER_WAVE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRESSELIA,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICIAN
		.item = ITEM_ROOM_SERVICE,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_TRICK_ROOM,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRESSELIA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_PSYCHO_SHIFT,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRESSELIA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 240,
		.spdEv = 16,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_FAIRIUM_Z,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_MOONBLAST,
			MOVE_CALM_MIND,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRESSELIA,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICIAN
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_TRICK_ROOM,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SERPERIOR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERGROW
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_AQUA_TAIL,
			MOVE_SCALE_SHOT,
			MOVE_COIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SERPERIOR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_GIGA_DRAIN,
			MOVE_DRAGON_PULSE,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
		},
		
		
		
		
	},
	{
		.species = SPECIES_SERPERIOR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_LEECH_SEED,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SERPERIOR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_GIGA_DRAIN,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_SUPERPOWER,
			MOVE_WILD_CHARGE,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SCALD,
			MOVE_SCORCHING_SANDS,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_SUBSTITUTE,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMBOAR,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_HAMMER_ARM,
			MOVE_ROCK_SLIDE,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SAMUROTT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_SACRED_SWORD,
			MOVE_AQUA_JET,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAMUROTT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_GRASS_KNOT,
			MOVE_SECRET_SWORD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAMUROTT,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_KNOCK_OFF,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAMUROTT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICY_WIND,
			MOVE_HELPING_HAND,
			MOVE_DETECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WATCHOG,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STAKEOUT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RETURN,
			MOVE_KNOCK_OFF,
			MOVE_LOW_KICK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WATCHOG,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HYPER_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_FOCUS_BLAST,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WATCHOG,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_KEENEYE
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_HYPNOSIS,
			MOVE_CONFUSE_RAY,
			MOVE_MEAN_LOOK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WATCHOG,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STAKEOUT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FACADE,
			MOVE_THUNDER_WAVE,
			MOVE_HELPING_HAND,
			MOVE_DETECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STOUTLAND,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_RETURN,
			MOVE_SUPERPOWER,
			MOVE_CRUNCH,
			MOVE_PLAY_ROUGH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STOUTLAND,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_CRUNCH,
			MOVE_PSYCHIC_FANGS,
			MOVE_FIRE_FANG,
			MOVE_ICE_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STOUTLAND,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_RETURN,
			MOVE_THUNDER_WAVE,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STOUTLAND,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_RETURN,
			MOVE_PURSUIT,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STOUTLAND,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.atkEv = 252,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SANDRUSH
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CRUNCH,
			MOVE_PSYCHIC_FANGS,
			MOVE_FIRE_FANG,
			MOVE_ICE_FANG,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LIEPARD,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LIMBER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_PLAY_ROUGH,
			MOVE_SUCKER_PUNCH,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LIEPARD,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_NIGHT_DAZE,
			MOVE_BURNING_JEALOUSY,
			MOVE_HIDDEN_POWER, //TYPE_FIGHTING
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LIEPARD,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_THUNDER_WAVE,
			MOVE_ENCORE,
			MOVE_COPYCAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LIEPARD,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_FAKE_OUT,
			MOVE_SNARL,
			MOVE_TAUNT,
			MOVE_CHARM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMISAGE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GLUTTONY
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_KNOCK_OFF,
			MOVE_POWER_UP_PUNCH,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMISAGE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_FOCUS_BLAST,
			MOVE_HIDDEN_POWER, //TYPE_ROCK
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMISAGE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_LEECH_SEED,
			MOVE_SYNTHESIS,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMISAGE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_ROCK_SLIDE,
			MOVE_LEECH_SEED,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMISEAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SCORCHING_SANDS,
			MOVE_GRASS_KNOT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMISEAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GLUTTONY
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_FIRE_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_ACROBATICS,
			MOVE_POWER_UP_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMISEAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GLUTTONY
		.item = ITEM_APICOT_BERRY,
		.moves =
		{
			MOVE_RECYCLE,
			MOVE_WILL_O_WISP,
			MOVE_TAUNT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMISEAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_FIRE_GEM,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_GRASS_KNOT,
			MOVE_SCORCHING_SANDS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMIPOUR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_FOCUS_BLAST,
			MOVE_GRASS_KNOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMIPOUR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_SUPERPOWER,
			MOVE_GUNK_SHOT,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMIPOUR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_KNOCK_OFF,
			MOVE_TAUNT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIMIPOUR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GLUTTONY
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_GRASS_KNOT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUSHARNA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SYNCHRONIZE
		.item = ITEM_FAIRIUM_Z,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_MOONBLAST,
			MOVE_MOONLIGHT,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUSHARNA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGICGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FUTURE_SIGHT,
			MOVE_TOXIC,
			MOVE_CALM_MIND,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUSHARNA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spAtkEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGICGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_MOONLIGHT,
			MOVE_CALM_MIND,
			MOVE_BARRIER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUSHARNA,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_MENTAL_HERB,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_TRICK_ROOM,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UNFEZANT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SUPERLUCK
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_RETURN,
			MOVE_BRAVE_BIRD,
			MOVE_NIGHT_SLASH,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UNFEZANT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PROUD
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_GIGA_IMPACT,
			MOVE_BRAVE_BIRD,
			MOVE_STEEL_WING,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UNFEZANT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SUPERLUCK
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_HYPNOSIS,
			MOVE_FEATHERDANCE,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_UNFEZANT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PROUD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_U_TURN,
			MOVE_TAILWIND,
			MOVE_DETECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEBSTRIKA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOTORDRIVE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_VOLT_SWITCH,
			MOVE_OVERHEAT,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEBSTRIKA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHOCKINGNEIGH
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_VOLT_TACKLE,
			MOVE_FLARE_BLITZ,
			MOVE_LEECH_LIFE,
			MOVE_THUNDEROUS_KICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEBSTRIKA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHOCKINGNEIGH
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_VOLT_TACKLE,
			MOVE_FLARE_BLITZ,
			MOVE_THUNDEROUS_KICK,
			MOVE_FLAME_CHARGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEBSTRIKA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SAPSIPPER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_VOLT_TACKLE,
			MOVE_PURSUIT,
			MOVE_FEINT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIGALITH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIGALITH,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SANDSTREAM
		.item = ITEM_RAWST_BERRY,
		.moves =
		{
			MOVE_ROCK_BLAST,
			MOVE_BULLDOZE,
			MOVE_CURSE,
			MOVE_GRAVITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIGALITH,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_ROCK_BLAST,
			MOVE_EXPLOSION,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIGALITH,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SANDSTREAM
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_WIDE_GUARD,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SWOOBAT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SIMPLE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_SIGNAL_BEAM,
			MOVE_CALM_MIND,
			MOVE_DOUBLE_TEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWOOBAT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_KLUTZ
		.item = ITEM_STICKY_BARB,
		.moves =
		{
			MOVE_PSYCHIC_FANGS,
			MOVE_TOXIC,
			MOVE_TRICK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWOOBAT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNAWARE
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_TOXIC,
			MOVE_MAGIC_COAT,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWOOBAT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNAWARE
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_ESPER_WING,
			MOVE_AIR_SLASH,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDRUSH
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRON_HEAD,
			MOVE_ROCK_SLIDE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOLDBREAKER
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_POISON_JAB,
			MOVE_RAPID_SPIN,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOLDBREAKER
		.item = ITEM_OCCA_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_RAPID_SPIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EXCADRILL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDRUSH
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRON_HEAD,
			MOVE_SWORDS_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_KLUTZ - for Entrainment
		.item = ITEM_STICKY_BARB,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_THUNDER_WAVE,
			MOVE_ENTRAINMENT,
			MOVE_HEAL_BELL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_AUDINITE,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_CALM_MIND,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HEALER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_DECORATE,
			MOVE_HEAL_PULSE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_AUDINITE,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_HEAL_PULSE,
			MOVE_DECORATE,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CONKELDURR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 20,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_MACH_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_POISON_JAB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CONKELDURR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 20,
		.spDefEv = 236,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_IRONFIST
		.item = ITEM_IRON_BALL,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_MACH_PUNCH,
			MOVE_FLING,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CONKELDURR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 48,
		.atkEv = 252,
		.spdEv = 208,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_POWER_UP_PUNCH,
			MOVE_MACH_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CONKELDURR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_CLOSE_COMBAT,
			MOVE_POISON_JAB,
			MOVE_HIGH_HORSEPOWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEISMITOAD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_POISONTOUCH
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_EARTHQUAKE,
			MOVE_KNOCK_OFF,
			MOVE_POWER_WHIP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEISMITOAD,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 60,
		.defEv = 196,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_EARTH_POWER,
			MOVE_SLUDGE_WAVE,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEISMITOAD,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 244,
		.spDefEv = 12,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERABSORB
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_KNOCK_OFF,
			MOVE_REST,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SEISMITOAD,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTH_POWER,
			MOVE_MUDDY_WATER,
			MOVE_SLUDGE_BOMB,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_THROH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_STORM_THROW,
			MOVE_FACADE,
			MOVE_KNOCK_OFF,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THROH,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INNERFOCUS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_STORM_THROW,
			MOVE_KNOCK_OFF,
			MOVE_RECOVER,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THROH,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_PAYAPA_BERRY,
		.moves =
		{
			MOVE_CIRCLE_THROW,
			MOVE_KNOCK_OFF,
			MOVE_REST,
			MOVE_SLEEP_TALK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THROH,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_STORM_THROW,
			MOVE_ROCK_SLIDE,
			MOVE_HELPING_HAND,
			MOVE_MAT_BLOCK,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SAWK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOLDBREAKER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAWK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INNERFOCUS
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_BULLDOZE,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAWK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_REVERSAL,
			MOVE_THROAT_CHOP,
			MOVE_DUAL_CHOP,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAWK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INNERFOCUS
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_ROCK_SLIDE,
			MOVE_QUICK_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEAVANNY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SKITTER_SMACK,
			MOVE_LEAF_BLADE,
			MOVE_KNOCK_OFF,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEAVANNY,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_PETAYA_BERRY,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_ELECTROWEB,
			MOVE_KNOCK_OFF,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEAVANNY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWARM
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_LEAF_BLADE,
			MOVE_SLASH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LEAVANNY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CHLOROPHYLL
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_SKITTER_SMACK,
			MOVE_LEAF_BLADE,
			MOVE_POISON_JAB,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SCOLIPEDE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_EARTHQUAKE,
			MOVE_AQUA_TAIL,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCOLIPEDE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SWORDS_DANCE,
			MOVE_SUBSTITUTE,
			MOVE_BATON_PASS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCOLIPEDE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_ENDEAVOR,
			MOVE_TOXIC_SPIKES,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCOLIPEDE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_POISON_JAB,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHIMSICOTT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_COBA_BERRY,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_TAUNT,
			MOVE_LIGHT_SCREEN,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHIMSICOTT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_NATURE_POWER,
			MOVE_LEECH_SEED,
			MOVE_ENCORE,
			MOVE_MISTY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHIMSICOTT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_ENERGY_BALL,
			MOVE_MOONBLAST,
			MOVE_PSYCHIC,
			MOVE_SWITCHEROO,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHIMSICOTT,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_TAILWIND,
			MOVE_ENCORE,
			MOVE_COTTON_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WHIMSICOTT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BEAT_UP,
			MOVE_HELPING_HAND,
			MOVE_ENCORE,
			MOVE_LEECH_SEED,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 8,
		.spAtkEv = 252,
		.spdEv = 248,
		.ability = FRONTIER_ABILITY_2, //ABILITY_OWNTEMPO
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_PETAL_DANCE,
			MOVE_HIDDEN_POWER, //TYPE_ROCK
			MOVE_SLEEP_POWDER,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_POLLEN_PUFF,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_OWNTEMPO
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DANCER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_POLLEN_PUFF,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_POLLEN_PUFF,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_BASCULIN_RED_STRIPED,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_PSYCHIC_FANGS,
			MOVE_ICE_FANG,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULIN_RED_STRIPED,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_WAVE_CRASH,
			MOVE_HEAD_SMASH,
			MOVE_DOUBLE_EDGE,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULIN_RED_STRIPED,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_CRUNCH,
			MOVE_PSYCHIC_FANGS,
			MOVE_BOUNCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULIN_BLUE_STRIPED,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ROCKHEAD
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_WAVE_CRASH,
			MOVE_HEAD_SMASH,
			MOVE_DOUBLE_EDGE,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULIN_BLUE_STRIPED,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SPEEDBOOST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ICY_WIND,
			MOVE_FINAL_GAMBIT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOXIE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_KNOCK_OFF,
			MOVE_STONE_EDGE,
			MOVE_SUPERPOWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_POWER_TRIP,
			MOVE_IRON_TAIL,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_TAUNT,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_DARKEST_LARIAT,
			MOVE_CLOSE_COMBAT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_SUPERPOWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHEERFORCE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_FIRE_PUNCH,
			MOVE_EARTHQUAKE,
			MOVE_YAWN,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ZENMODE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_PSYCHIC,
			MOVE_FOCUS_BLAST,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ZENMODE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_WILL_O_WISP,
			MOVE_ENCORE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MARACTUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STORMDRAIN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_HYPER_VOICE,
			MOVE_HIDDEN_POWER, //TYPE_ROCK
			MOVE_TAIL_GLOW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MARACTUS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.spAtkEv = 252,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_SYNTHESIS,
			MOVE_COTTON_GUARD,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MARACTUS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_LEECH_SEED,
			MOVE_SPIKES,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MARACTUS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CHLOROPHYLL
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_HIDDEN_POWER, //TYPE_ROCK
			MOVE_TAIL_GLOW,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_CRUSTLE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRUSTLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STURDY
		.item = ITEM_EJECT_BUTTON,
		.moves =
		{
			MOVE_FIRST_IMPRESSION,
			MOVE_STONE_EDGE,
			MOVE_KNOCK_OFF,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRUSTLE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHELLARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ROCK_BLAST,
			MOVE_BODY_PRESS,
			MOVE_STEALTH_ROCK,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRUSTLE,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHELLARMOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SCRAFTY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOXIE
		.item = ITEM_ROSELI_BERRY,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_KNOCK_OFF,
			MOVE_POISON_JAB,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCRAFTY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_FOCUS_PUNCH,
			MOVE_FAKE_OUT,
			MOVE_BULK_UP,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCRAFTY,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_SUPER_FANG,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SCRAFTY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_SNARL,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIGILYPH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_AIR_SLASH,
			MOVE_HEAT_WAVE,
			MOVE_ENERGY_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIGILYPH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 16,
		.spdEv = 240,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_PSYCHO_SHIFT,
			MOVE_COSMIC_POWER,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIGILYPH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_WACAN_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_ROOST,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIGILYPH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_HYPNOSIS,
			MOVE_GRAVITY,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COFAGRIGUS,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MUMMY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_HIDDEN_POWER, //TYPE_FIGHTING
			MOVE_NASTY_PLOT,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COFAGRIGUS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MUMMY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_PAIN_SPLIT,
			MOVE_WILL_O_WISP,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COFAGRIGUS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MUMMY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_INFESTATION,
			MOVE_PAIN_SPLIT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COFAGRIGUS,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MUMMY
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_WILL_O_WISP,
			MOVE_DESTINY_BOND,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARRACOSTA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_AQUA_JET,
			MOVE_STONE_EDGE,
			MOVE_SUPERPOWER,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARRACOSTA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWIFTSWIM
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ROCK_SLIDE,
			MOVE_SWAGGER,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARRACOSTA,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 192,
		.spDefEv = 64,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOLIDROCK
		.item = ITEM_RINDO_BERRY,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARRACOSTA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWIFTSWIM
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_ARCHEOPS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFEATIST
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_ACROBATICS,
			MOVE_EARTHQUAKE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCHEOPS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_KLUTZ
		.item = ITEM_NONE,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_DUAL_WINGBEAT,
			MOVE_FLYING_PRESS,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCHEOPS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFEATIST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_ENDEAVOR,
			MOVE_TAUNT,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCHEOPS,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_KLUTZ
		.item = ITEM_NONE,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_HEAT_WAVE,
			MOVE_TAILWIND,
			MOVE_QUICK_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARBODOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_WEAKARMOR
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GUNK_SHOT,
			MOVE_BODY_SLAM,
			MOVE_DRAIN_PUNCH,
			MOVE_EXPLOSION,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GARBODOR,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AFTERMATH
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_PAIN_SPLIT,
			MOVE_SPIKES,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GARBODOR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AFTERMATH
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_VENOSHOCK,
			MOVE_TOXIC,
			MOVE_INFESTATION,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GARBODOR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AFTERMATH
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_GUNK_SHOT,
			MOVE_DRAIN_PUNCH,
			MOVE_HAZE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_ZOROARK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ILLUSION
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_LEECH_LIFE,
			MOVE_LOW_KICK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZOROARK,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ILLUSION
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_FLAMETHROWER,
			MOVE_FOCUS_BLAST,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZOROARK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ILLUSION
		.item = ITEM_FOCUS_BAND,
		.moves =
		{
			MOVE_NIGHT_SLASH,
			MOVE_SHADOW_CLAW,
			MOVE_TAUNT,
			MOVE_COUNTER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZOROARK,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ILLUSION
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_NIGHT_DAZE,
			MOVE_BURNING_JEALOUSY,
			MOVE_TAUNT,
			MOVE_DETECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CINCCINO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SKILLLINK
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_TAIL_SLAP,
			MOVE_ROCK_BLAST,
			MOVE_BONE_RUSH,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CINCCINO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SKILLLINK
		.item = ITEM_KINGS_ROCK,
		.moves =
		{
			MOVE_TAIL_SLAP,
			MOVE_BULLET_SEED,
			MOVE_ROCK_BLAST,
			MOVE_BONE_RUSH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CINCCINO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TECHNICIAN
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_TAIL_SLAP,
			MOVE_BONE_RUSH,
			MOVE_TRIPLE_AXEL,
			MOVE_SING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CINCCINO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TECHNICIAN
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_TAIL_SLAP,
			MOVE_TRIPLE_AXEL,
			MOVE_THUNDER_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOTHITELLE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHADOWTAG
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_MIRROR_COAT,
			MOVE_MIRACLE_EYE,
			MOVE_TICKLE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOTHITELLE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPETITIVE
		.item = ITEM_WISE_GLASSES,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_SHADOW_BALL,
			MOVE_THUNDERBOLT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOTHITELLE,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHADOWTAG
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOTHITELLE,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 84,
		.spDefEv = 172,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHADOWTAG
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_FAKE_OUT,
			MOVE_HEAL_PULSE,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REUNICLUS,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_PSYCHIUM_Z,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_SHADOW_BALL,
			MOVE_FOCUS_BLAST,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REUNICLUS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_TOXIC,
			MOVE_RECOVER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REUNICLUS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_RECOVER,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REUNICLUS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_HELPING_HAND,
			MOVE_RECOVER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWANNA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_KEENEYE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_BRAVE_BIRD,
			MOVE_TRIPLE_AXEL,
			MOVE_STEEL_WING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWANNA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HYDRATION
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SURF,
			MOVE_HURRICANE,
			MOVE_ROOST,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWANNA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPETITIVE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SURF,
			MOVE_AIR_SLASH,
			MOVE_ICE_BEAM,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SWANNA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPETITIVE
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_HURRICANE,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_VANILLUXE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNOWWARNING
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_FREEZE_DRY,
			MOVE_FLASH_CANNON,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
	},
	{
		.species = SPECIES_VANILLUXE,
		.nature = NATURE_MILD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNOWWARNING
		.item = ITEM_OCCA_BERRY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_NATURAL_GIFT,
			MOVE_ICE_SHARD,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VANILLUXE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WEAKARMOR
		.item = ITEM_WISE_GLASSES,
		.moves =
		{
			MOVE_FROST_BREATH,
			MOVE_FLASH_CANNON,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_AUTOTOMIZE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VANILLUXE,
		.nature = NATURE_MILD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNOWWARNING
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_HYPER_VOICE,
			MOVE_AURORA_VEIL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAWSBUCK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SAPSIPPER
		.item = ITEM_SHELL_BELL,
		.moves =
		{
			MOVE_HORN_LEECH,
			MOVE_DOUBLE_EDGE,
			MOVE_JUMP_KICK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAWSBUCK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HEADBUTT,
			MOVE_SWORDS_DANCE,
			MOVE_AGILITY,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAWSBUCK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SAPSIPPER
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_HORN_LEECH,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAWSBUCK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHLOROPHYLL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_TROP_KICK,
			MOVE_RETURN,
			MOVE_STOMPING_TANTRUM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMOLGA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOTORDRIVE
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_ACROBATICS,
			MOVE_KNOCK_OFF,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMOLGA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_AIR_SLASH,
			MOVE_ENERGY_BALL,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMOLGA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_VOLT_SWITCH,
			MOVE_AIR_SLASH,
			MOVE_ENERGY_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EMOLGA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_NUZZLE,
			MOVE_ENCORE,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ESCAVALIER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_IRON_HEAD,
			MOVE_DRILL_RUN,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ESCAVALIER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ESCAVALIER,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_OCCA_BERRY,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_PURSUIT,
			MOVE_METAL_BURST,
			MOVE_SWAGGER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ESCAVALIER,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_MEGAHORN,
			MOVE_IRON_HEAD,
			MOVE_CLOSE_COMBAT,
			MOVE_RAZOR_SHELL,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_AMOONGUSS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SLUDGE_BOMB,
			MOVE_CLEAR_SMOG,
			MOVE_SPORE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMOONGUSS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SPORE,
			MOVE_INGRAIN,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMOONGUSS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_SPORE,
			MOVE_DOUBLE_TEAM,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AMOONGUSS,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 200,
		.spDefEv = 56,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_SPORE,
			MOVE_RAGE_POWDER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JELLICENT,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_SHADOW_BALL,
			MOVE_GIGA_DRAIN,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JELLICENT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 176,
		.spDefEv = 84,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_WILL_O_WISP,
			MOVE_TAUNT,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JELLICENT,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CURSEDBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_HEX,
			MOVE_TOXIC,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JELLICENT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_GIGA_DRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALOMOMOLA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALOMOMOLA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALOMOMOLA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_DIVE,
			MOVE_AQUA_JET,
			MOVE_MIRROR_COAT,
			MOVE_WISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALOMOMOLA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 228,
		.defEv = 252,
		.spDefEv = 28,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HYDRATION
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_HEAL_PULSE,
			MOVE_HELPING_HAND,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GALVANTULA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPOUNDEYES
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_WILD_CHARGE,
			MOVE_CROSS_POISON,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GALVANTULA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPOUNDEYES
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_THUNDER,
			MOVE_BUG_BUZZ,
			MOVE_ENERGY_BALL,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GALVANTULA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNNERVE
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_ELECTRO_BALL,
			MOVE_BUG_BUZZ,
			MOVE_AGILITY,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GALVANTULA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNNERVE
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_BUG_BUZZ,
			MOVE_THUNDER_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FERROTHORN,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONBARBS
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_GYRO_BALL,
			MOVE_INGRAIN,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FERROTHORN,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONBARBS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_LEECH_SEED,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FERROTHORN,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONBARBS
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_PAYBACK,
			MOVE_CURSE,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FERROTHORN,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 88,
		.defEv = 88,
		.spDefEv = 80,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONBARBS
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_POWER_WHIP,
			MOVE_STEALTH_ROCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLINKLANG,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOTORDRIVE
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_GEAR_GRIND,
			MOVE_WILD_CHARGE,
			MOVE_RETURN,
			MOVE_SHIFT_GEAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLINKLANG,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOTORDRIVE
		.item = ITEM_OCCA_BERRY,
		.moves =
		{
			MOVE_GEAR_GRIND,
			MOVE_THUNDER_WAVE,
			MOVE_SCREECH,
			MOVE_MAGNET_RISE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLINKLANG,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CLEARBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLASH_CANNON,
			MOVE_THUNDERBOLT,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLINKLANG,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOTORDRIVE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_STEEL_BEAM,
			MOVE_POWER_GEM,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EELEKTROSS,
		.nature = NATURE_NAUGHTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_MAGNET,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_THUNDERBOLT,
			MOVE_DRAGON_CLAW,
			MOVE_FLAMETHROWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EELEKTROSS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_THUNDER_CAGE,
			MOVE_VOLT_SWITCH,
			MOVE_FLAMETHROWER,
			MOVE_GIGA_DRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EELEKTROSS,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_CRUNCH,
			MOVE_BRICK_BREAK,
			MOVE_COIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EELEKTROSS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_THUNDER_CAGE,
			MOVE_GRASS_KNOT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEHEEYEM,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ANALYTIC
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_SIGNAL_BEAM,
			MOVE_NASTY_PLOT,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEHEEYEM,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_ENERGY_BALL,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEHEEYEM,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ANALYTIC
		.item = ITEM_IRON_BALL,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_SIMPLE_BEAM,
			MOVE_TRICK,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEHEEYEM,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_DESTINY_BOND,
			MOVE_TRICK_ROOM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHANDELURE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHADOWTAG
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SHADOW_BALL,
			MOVE_ENERGY_BALL,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHANDELURE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SHADOW_BALL,
			MOVE_CALM_MIND,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHANDELURE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHADOWTAG
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_OVERHEAT,
			MOVE_SHADOW_BALL,
			MOVE_WILL_O_WISP,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHANDELURE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_OVERHEAT,
			MOVE_SHADOW_BALL,
			MOVE_WILL_O_WISP,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HAXORUS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOLDBREAKER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_EARTHQUAKE,
			MOVE_IRON_TAIL,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HAXORUS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOLDBREAKER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_EARTHQUAKE,
			MOVE_POISON_JAB,
			MOVE_CLOSE_COMBAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HAXORUS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOLDBREAKER
		.item = ITEM_HABAN_BERRY,
		.moves =
		{
			MOVE_DUAL_CHOP,
			MOVE_EARTHQUAKE,
			MOVE_TAUNT,
			MOVE_ROAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HAXORUS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_EARTHQUAKE,
			MOVE_CLOSE_COMBAT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEARTIC,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SLUSHRUSH
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_PLAY_ROUGH,
			MOVE_LIQUIDATION,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEARTIC,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWIFTSWIM
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_SUPERPOWER,
			MOVE_THROAT_CHOP,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEARTIC,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SNOWCLOAK
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_FOCUS_PUNCH,
			MOVE_YAWN,
			MOVE_DOUBLE_TEAM,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEARTIC,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SLUSHRUSH
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_SUPERPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_BEARTIC,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SNOWCLOAK
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_ICE_HAMMER,
			MOVE_SUPERPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_CRYOGONAL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_FREEZE_DRY,
			MOVE_RECOVER,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRYOGONAL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 196,
		.spAtkEv = 248,
		.spdEv = 64,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_FREEZE_DRY,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_RAPID_SPIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRYOGONAL,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_REFLECT_TYPE,
			MOVE_IRON_DEFENSE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRYOGONAL,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FILTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_ICY_WIND,
			MOVE_AURORA_VEIL,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_ACCELGOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_FOCUS_BLAST,
			MOVE_ENERGY_BALL,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ACCELGOR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_SLUDGE_BOMB,
			MOVE_U_TURN,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ACCELGOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_FOCUS_BLAST,
			MOVE_ENERGY_BALL,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ACCELGOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_FOCUS_BLAST,
			MOVE_ENCORE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STUNFISK,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_SNAP_TRAP,
			MOVE_SHORE_UP,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STUNFISK,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_WATERABSORB
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_EARTH_POWER,
			MOVE_SCALD,
			MOVE_SLUDGE_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STUNFISK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STATIC
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_FLAIL,
			MOVE_YAWN,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STUNFISK,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDVEIL
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_SNAP_TRAP,
			MOVE_SHORE_UP,
			MOVE_SANDSTORM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIENSHAO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_KNOCK_OFF,
			MOVE_POISON_JAB,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIENSHAO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_STONE_EDGE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIENSHAO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_CALM_MIND,
			MOVE_ENDURE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIENSHAO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_ROCK_SLIDE,
			MOVE_FAKE_OUT,
			MOVE_QUICK_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRUDDIGON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOLDBREAKER
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_SCALE_SHOT,
			MOVE_CRUNCH,
			MOVE_DUAL_WINGBEAT,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRUDDIGON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRAGON_HAMMER,
			MOVE_FIRE_PUNCH,
			MOVE_GUNK_SHOT,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRUDDIGON,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ROUGHSKIN
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_DRAGON_TAIL,
			MOVE_EARTHQUAKE,
			MOVE_GLARE,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRUDDIGON,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ROUGHSKIN
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_DRAGON_HAMMER,
			MOVE_SUCKER_PUNCH,
			MOVE_GLARE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLURK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_DRAIN_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLURK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NOGUARD
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_EARTHQUAKE,
			MOVE_DYNAMICPUNCH,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLURK,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_SHADOW_PUNCH,
			MOVE_GYRO_BALL,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLURK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_POWERSPOT
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLURK,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_POWERSPOT
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_BISHARP,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFIANT
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_IRON_HEAD,
			MOVE_SUCKER_PUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BISHARP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFIANT
		.item = ITEM_CHOPLE_BERRY,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_IRON_HEAD,
			MOVE_LOW_SWEEP,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BISHARP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFIANT
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_IRON_HEAD,
			MOVE_METAL_BURST,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BISHARP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFIANT
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_IRON_HEAD,
			MOVE_SUCKER_PUNCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BOUFFALANT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RECKLESS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_HEAD_CHARGE,
			MOVE_EARTHQUAKE,
			MOVE_MEGAHORN,
			MOVE_WILD_CHARGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BOUFFALANT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SAPSIPPER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_RETURN,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BOUFFALANT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STAMINA
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_REST,
			MOVE_SLEEP_TALK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BOUFFALANT,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RECKLESS
		.item = ITEM_ROOM_SERVICE,
		.moves =
		{
			MOVE_HEAD_CHARGE,
			MOVE_WILD_CHARGE,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_BRAVIARY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_DOUBLE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRAVIARY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_SKY_ATTACK,
			MOVE_CLOSE_COMBAT,
			MOVE_SHADOW_CLAW,
			MOVE_PLAY_ROUGH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRAVIARY,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_CLOSE_COMBAT,
			MOVE_BULK_UP,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRAVIARY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_ROCK_SLIDE,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANDIBUZZ,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 136,
		.spDefEv = 108,
		.spdEv = 16,
		.ability = FRONTIER_ABILITY_2, //ABILITY_OVERCOAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANDIBUZZ,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_OVERCOAT
		.item = ITEM_WACAN_BERRY,
		.moves =
		{
			MOVE_PUNISHMENT,
			MOVE_SWAGGER,
			MOVE_ROOST,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANDIBUZZ,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WEAKARMOR
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_AIR_SLASH,
			MOVE_INCINERATE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANDIBUZZ,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 220,
		.defEv = 252,
		.spDefEv = 36,
		.ability = FRONTIER_ABILITY_2, //ABILITY_OVERCOAT
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_TAUNT,
			MOVE_WHIRLWIND,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HEATMOR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GLUTTONY
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_FIRE_LASH,
			MOVE_SUCKER_PUNCH,
			MOVE_KNOCK_OFF,
			MOVE_DRAIN_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HEATMOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FLASHFIRE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SCORCHING_SANDS,
			MOVE_GIGA_DRAIN,
			MOVE_FOCUS_BLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HEATMOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BERSERK
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_SPIT_UP,
			MOVE_SWALLOW,
			MOVE_STOCKPILE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HEATMOR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BERSERK
		.item = ITEM_PETAYA_BERRY,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_GIGA_DRAIN,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DURANT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_SUPERPOWER,
			MOVE_CRUNCH,
			MOVE_HONE_CLAWS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DURANT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TRUANT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_X_SCISSOR,
			MOVE_IRON_HEAD,
			MOVE_SHADOW_CLAW,
			MOVE_ENTRAINMENT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DURANT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWARM
		.item = ITEM_OCCA_BERRY,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_IRON_DEFENSE,
			MOVE_AGILITY,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DURANT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_SUPERPOWER,
			MOVE_CRUNCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HYDREIGON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_POISONIUM_Z,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_DARK_PULSE,
			MOVE_FIRE_BLAST,
			MOVE_BELCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HYDREIGON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_DRAGON_RUSH,
			MOVE_THROAT_CHOP,
			MOVE_IRON_TAIL,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HYDREIGON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_FLASH_CANNON,
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HYDREIGON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_FIRE_BLAST,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLCARONA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLAMEBODY
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_FIRE_BLAST,
			MOVE_QUIVER_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLCARONA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWARM
		.item = ITEM_BUGINIUM_Z,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_FIERY_DANCE,
			MOVE_HURRICANE,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLCARONA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLAMEBODY
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_FIRE_SPIN,
			MOVE_DEFOG,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLCARONA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLAMEBODY
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_GIGA_DRAIN,
			MOVE_QUIVER_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COBALION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_CLOSE_COMBAT,
			MOVE_STONE_EDGE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COBALION,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NOGUARD
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_STEEL_BEAM,
			MOVE_FOCUS_BLAST,
			MOVE_VOLT_SWITCH,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COBALION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_CLOSE_COMBAT,
			MOVE_VOLT_SWITCH,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COBALION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NOGUARD
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_CLOSE_COMBAT,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TERRAKION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TERRAKION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_ZEN_HEADBUTT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TERRAKION,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_SACRED_SWORD,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TERRAKION,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.atkEv = 252,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEADFAST
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_QUICK_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIRIZION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NOGUARD
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_CLOSE_COMBAT,
			MOVE_STONE_EDGE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIRIZION,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NOGUARD
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_FOCUS_BLAST,
			MOVE_STONE_EDGE,
			MOVE_MEGAHORN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIRIZION,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SACRED_SWORD,
			MOVE_SWORDS_DANCE,
			MOVE_SYNTHESIS,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIRIZION,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_CLOSE_COMBAT,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORNADUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_DARK_PULSE,
			MOVE_HEAT_WAVE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORNADUS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_BLEAKWIND_STORM,
			MOVE_SWAGGER,
			MOVE_DEFOG,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORNADUS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_ACROBATICS,
			MOVE_SUPERPOWER,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORNADUS_THERIAN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_REGENERATOR
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_AIR_SLASH,
			MOVE_DARK_PULSE,
			MOVE_TAILWIND,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORNADUS_THERIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_REGENERATOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_DEFOG,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TORNADUS_THERIAN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 8,
		.spAtkEv = 248,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_REGENERATOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BLEAKWIND_STORM,
			MOVE_DARK_PULSE,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THUNDURUS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_CRUNCH,
			MOVE_REVENGE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THUNDURUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_WILDBOLT_STORM,
			MOVE_VOLT_SWITCH,
			MOVE_FOCUS_BLAST,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THUNDURUS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_PROTECTIVE_PADS,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_KNOCK_OFF,
			MOVE_SUPERPOWER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THUNDURUS_THERIAN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FOCUS_BLAST,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THUNDURUS_THERIAN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FOCUS_BLAST,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_SLUDGE_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THUNDURUS_THERIAN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_VOLT_SWITCH,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_SLUDGE_BOMB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANDORUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SANDSEAR_STORM,
			MOVE_SLUDGE_WAVE,
			MOVE_PSYCHIC,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANDORUS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDFORCE
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_U_TURN,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANDORUS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_IRON_TAIL,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 240,
		.spDefEv = 8,
		.spdEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_U_TURN,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LANDORUS_THERIAN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 44,
		.spAtkEv = 136,
		.spDefEv = 48,
		.spdEv = 28,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_YACHE_BERRY,
		.moves =
		{
			MOVE_SANDSEAR_STORM,
			MOVE_U_TURN,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHESNAUGHT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BULLETPROOF
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_DRUM_BEATING,
			MOVE_BRICK_BREAK,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_CLAW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHESNAUGHT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BULLETPROOF
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ENERGY_BALL,
			MOVE_FOCUS_BLAST,
			MOVE_SLUDGE_BOMB,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHESNAUGHT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BULLETPROOF
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_LEECH_SEED,
			MOVE_SYNTHESIS,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CHESNAUGHT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BULLETPROOF
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_LEECH_SEED,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELPHOX,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_PSYCHIC,
			MOVE_SHADOW_BALL,
			MOVE_SCORCHING_SANDS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELPHOX,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_MYSTICAL_FIRE,
			MOVE_PSYSHOCK,
			MOVE_SCORCHING_SANDS,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELPHOX,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_WILL_O_WISP,
			MOVE_FIRE_SPIN,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DELPHOX,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_DAZZLING_GLEAM,
			MOVE_SCORCHING_SANDS,
			MOVE_HYPNOSIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PROTEAN
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_DARK_PULSE,
			MOVE_GUNK_SHOT,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PROTEAN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TAUNT,
			MOVE_SPIKES,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_BATTLEBOND
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_DARK_PULSE,
			MOVE_WATER_SHURIKEN,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRENINJA,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 64,
		.spAtkEv = 236,
		.spdEv = 208,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PROTEAN
		.item = ITEM_ICE_GEM,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_BLIZZARD,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DIGGERSBY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUGEPOWER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_RETURN,
			MOVE_EARTHQUAKE,
			MOVE_FIRE_PUNCH,
			MOVE_QUICK_ATTACK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIGGERSBY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUGEPOWER
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
			MOVE_IRON_HEAD,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIGGERSBY,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 208,
		.defEv = 252,
		.spdEv = 48,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CHEEKPOUCH
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIGGERSBY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUGEPOWER
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_RETURN,
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TALONFLAME,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 252,
		.defEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALEWINGS
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_U_TURN,
			MOVE_SWORDS_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TALONFLAME,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALEWINGS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_FLARE_BLITZ,
			MOVE_STEEL_WING,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TALONFLAME,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spDefEv = 252,
		.spdEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALEWINGS
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_ACROBATICS,
			MOVE_ROOST,
			MOVE_BULK_UP,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TALONFLAME,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GALEWINGS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_OVERHEAT,
			MOVE_TAILWIND,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIVILLON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPOUNDEYES
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_HURRICANE,
			MOVE_SLEEP_POWDER,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIVILLON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPOUNDEYES
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_POWDER,
			MOVE_DEFOG,
			MOVE_SLEEP_POWDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIVILLON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPOUNDEYES
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_INFESTATION,
			MOVE_SLEEP_POWDER,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIVILLON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 160,
		.spAtkEv = 96,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_COMPOUNDEYES
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_STRUGGLE_BUG,
			MOVE_ELECTROWEB,
			MOVE_SLEEP_POWDER,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PYROAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_HYPER_VOICE,
			MOVE_DARK_PULSE,
			MOVE_SCORCHING_SANDS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PYROAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ROYALROAR
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_SCORCHING_SANDS,
			MOVE_SOLAR_BEAM,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PYROAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_OVERHEAT,
			MOVE_HYPER_VOICE,
			MOVE_SCORCHING_SANDS,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PYROAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNNERVE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SNARL,
			MOVE_SCORCHING_SANDS,
			MOVE_HELPING_HAND,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLOETTE_ETERNAL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLOWERVEIL
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_LIGHT_OF_RUIN,
			MOVE_GIGA_DRAIN,
			MOVE_PSYCHIC,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLOETTE_ETERNAL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLOWERVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LIGHT_OF_RUIN,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLOETTE_ETERNAL,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLOWERVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_HELPING_HAND,
			MOVE_SYNTHESIS,
			MOVE_SAFEGUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLORGES,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_AROMAVEIL
		.item = ITEM_BABIRI_BERRY,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_DEFOG,
			MOVE_SYNTHESIS,
			MOVE_AROMATHERAPY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLORGES,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLOWERVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLORGES,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_AROMAVEIL
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_PSYCHIC,
			MOVE_SYNTHESIS,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLORGES,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SYMBIOSIS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_HELPING_HAND,
			MOVE_SYNTHESIS,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLORGES,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SYMBIOSIS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_HELPING_HAND,
			MOVE_SYNTHESIS,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOGOAT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_EARTHQUAKE,
			MOVE_WILD_CHARGE,
			MOVE_BRICK_BREAK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOGOAT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_MILK_DRINK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOGOAT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HORN_LEECH,
			MOVE_ROCK_SLIDE,
			MOVE_BULK_UP,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOGOAT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_HORN_LEECH,
			MOVE_GRASSY_GLIDE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PANGORO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_WICKED_BLOW,
			MOVE_GUNK_SHOT,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PANGORO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_ICE_PUNCH,
			MOVE_THUNDER_PUNCH,
			MOVE_BULLET_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PANGORO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_POWER_UP_PUNCH,
			MOVE_POWER_TRIP,
			MOVE_BULLET_PUNCH,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PANGORO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOLDBREAKER
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_CIRCLE_THROW,
			MOVE_KNOCK_OFF,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FURFROU,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FURCOAT
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_RETURN,
			MOVE_SUCKER_PUNCH,
			MOVE_HIGH_HORSEPOWER,
			MOVE_WORK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FURFROU,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FURCOAT
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_HIGH_HORSEPOWER,
			MOVE_TOXIC,
			MOVE_DOUBLE_TEAM,
			MOVE_ROAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FURFROU,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FURCOAT
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_SNARL,
			MOVE_TOXIC,
			MOVE_SWAGGER,
			MOVE_COTTON_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FURFROU,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FURCOAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_SNARL,
			MOVE_TOXIC,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEOWSTIC,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_THUNDER_WAVE,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEOWSTIC,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_SUBSTITUTE,
			MOVE_TOXIC,
			MOVE_CHARM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEOWSTIC,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_HELPING_HAND,
			MOVE_HEAL_BELL,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEOWSTIC_F,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 12,
		.spAtkEv = 248,
		.spdEv = 248,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_SHADOW_BALL,
			MOVE_HIDDEN_POWER, //TYPE_FIGHTING
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEOWSTIC_F,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPETITIVE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_SHADOW_BALL,
			MOVE_CHARGE_BEAM,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEOWSTIC_F,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 12,
		.spAtkEv = 248,
		.spdEv = 248,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_SHADOW_BALL,
			MOVE_THUNDERBOLT,
			MOVE_HIDDEN_POWER, //TYPE_FIGHTING
		},
		
		
		
		
	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STANCECHANGE
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_SHADOW_SNEAK,
			MOVE_IRON_HEAD,
			MOVE_SWORDS_DANCE,
			MOVE_KINGS_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.atkEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STANCECHANGE
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_SHADOW_CLAW,
			MOVE_GYRO_BALL,
			MOVE_SHADOW_SNEAK,
			MOVE_KINGS_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STANCECHANGE
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_FLASH_CANNON,
			MOVE_SHADOW_SNEAK,
			MOVE_KINGS_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 212,
		.spAtkEv = 252,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STANCECHANGE
		.item = ITEM_SPOOKY_PLATE,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_FLASH_CANNON,
			MOVE_WIDE_GUARD,
			MOVE_KINGS_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AROMATISSE,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 1,
		.hpEv = 252,
		.spAtkEv = 248,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_AROMAVEIL
		.item = ITEM_FAIRIUM_Z,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_NASTY_PLOT,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AROMATISSE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_WISH,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AROMATISSE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_WISH,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AROMATISSE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HEALER
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_HEAL_PULSE,
			MOVE_PROTECT,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLURPUFF,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_DRAIN_PUNCH,
			MOVE_YAWN,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLURPUFF,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNBURDEN
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_FLAMETHROWER,
			MOVE_THUNDERBOLT,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLURPUFF,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWEETVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_SUBSTITUTE,
			MOVE_YAWN,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLURPUFF,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWEETVEIL
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_STRING_SHOT,
			MOVE_STICKY_WEB,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MALAMAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CONTRARY
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_NIGHT_SLASH,
			MOVE_PSYCHO_CUT,
			MOVE_SUPERPOWER,
			MOVE_LIQUIDATION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MALAMAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_FLAMETHROWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MALAMAR,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CONTRARY
		.item = ITEM_DARK_GEM,
		.moves =
		{
			MOVE_SUPERPOWER,
			MOVE_PSYCHO_CUT,
			MOVE_PAYBACK,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MALAMAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CONTRARY
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_SUPERPOWER,
			MOVE_HAPPY_HOUR,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BARBARACLE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TOUGHCLAWS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BARBARACLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNIPER
		.item = ITEM_RAZOR_CLAW,
		.moves =
		{
			MOVE_RAZOR_SHELL,
			MOVE_STONE_EDGE,
			MOVE_CROSS_CHOP,
			MOVE_SHADOW_CLAW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BARBARACLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TOUGHCLAWS
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_DRAGON_CLAW,
			MOVE_EARTHQUAKE,
			MOVE_NIGHT_SLASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BARBARACLE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PICKPOCKET
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_RAZOR_SHELL,
			MOVE_FLING,
			MOVE_HELPING_HAND,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGALGE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_POISONTOUCH
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_DRAGON_TAIL,
			MOVE_FLIP_TURN,
			MOVE_PLAY_ROUGH,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGALGE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_SLUDGE_WAVE,
			MOVE_FOCUS_BLAST,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGALGE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_POISONPOINT
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_SCALD,
			MOVE_SLEEP_TALK,
			MOVE_REST,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGALGE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_POISONPOINT
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_DRAGON_TAIL,
			MOVE_SLUDGE_BOMB,
			MOVE_ICY_WIND,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLAWITZER,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MEGALAUNCHER
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_WATER_PULSE,
			MOVE_DARK_PULSE,
			MOVE_DRAGON_PULSE,
			MOVE_AURA_SPHERE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLAWITZER,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MEGALAUNCHER
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SCALD,
			MOVE_AURA_SPHERE,
			MOVE_ICE_BEAM,
			MOVE_AQUA_JET,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLAWITZER,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MEGALAUNCHER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_VENOSHOCK,
			MOVE_TOXIC,
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CLAWITZER,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MEGALAUNCHER
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ICY_WIND,
			MOVE_AURA_SPHERE,
			MOVE_HEAL_PULSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRYSKIN
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_HYPER_VOICE,
			MOVE_SURF,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SANDVEIL
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_CHARGE_BEAM,
			MOVE_SURF,
			MOVE_DOUBLE_TEAM,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRYSKIN
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_THUNDER,
			MOVE_VOLT_SWITCH,
			MOVE_RAIN_DANCE,
			MOVE_GLARE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRYSKIN
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_PARABOLIC_CHARGE,
			MOVE_HYPER_VOICE,
			MOVE_ELECTROWEB,
			MOVE_SURF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HELIOLISK,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SANDVEIL
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_PARABOLIC_CHARGE,
			MOVE_HYPER_VOICE,
			MOVE_GLARE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_TYRANTRUM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROCKHEAD
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_OUTRAGE,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYRANTRUM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_SCALE_SHOT,
			MOVE_CRUNCH,
			MOVE_POISON_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYRANTRUM,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROCKHEAD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_SUBSTITUTE,
			MOVE_SWAGGER,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYRANTRUM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROCKHEAD
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_ROCK_SLIDE,
			MOVE_CLOSE_COMBAT,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AURORUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNOWWARNING
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_EARTH_POWER,
			MOVE_FLASH_CANNON,
			MOVE_THUNDERBOLT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AURORUS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNOWWARNING
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_BLIZZARD,
			MOVE_EARTH_POWER,
			MOVE_REFLECT_TYPE,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AURORUS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNOWWARNING
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_METEOR_BEAM,
			MOVE_BLIZZARD,
			MOVE_EARTH_POWER,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AURORUS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNOWWARNING
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_DISCHARGE,
			MOVE_AURORA_VEIL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SYLVEON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PIXILATE
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_PSYSHOCK,
			MOVE_SHADOW_BALL,
			MOVE_MYSTICAL_FIRE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SYLVEON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PIXILATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_WISH,
			MOVE_PROTECT,
			MOVE_HEAL_BELL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SYLVEON,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PIXILATE
		.item = ITEM_MISTY_SEED,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_CALM_MIND,
			MOVE_MISTY_TERRAIN,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SYLVEON,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PIXILATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_YAWN,
			MOVE_HELPING_HAND,
			MOVE_HEAL_BELL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_FLYING_GEM,
		.moves =
		{
			MOVE_HIGH_JUMP_KICK,
			MOVE_ACROBATICS,
			MOVE_SWORDS_DANCE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_ACROBATICS,
			MOVE_SWORDS_DANCE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_FIGHTING_GEM,
		.moves =
		{
			MOVE_FLYING_PRESS,
			MOVE_BRAVE_BIRD,
			MOVE_STONE_EDGE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HAWLUCHA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_SKY_ATTACK,
			MOVE_ROCK_SLIDE,
			MOVE_ENCORE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEDENNE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MISTYSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_DAZZLING_GLEAM,
			MOVE_GRASS_KNOT,
			MOVE_MAGNET_RISE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEDENNE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHEEKPOUCH
		.item = ITEM_MARANGA_BERRY,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_STUFF_CHEEKS,
			MOVE_RECYCLE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEDENNE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHEEKPOUCH
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_SUPER_FANG,
			MOVE_STUFF_CHEEKS,
			MOVE_RECYCLE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEDENNE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHEEKPOUCH
		.item = ITEM_PETAYA_BERRY,
		.moves =
		{
			MOVE_PARABOLIC_CHARGE,
			MOVE_DAZZLING_GLEAM,
			MOVE_STUFF_CHEEKS,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARBINK,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_IRON_BALL,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_EXPLOSION,
			MOVE_STEALTH_ROCK,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARBINK,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_SANDSTORM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARBINK,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MISTYSURGE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_MISTY_EXPLOSION,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CARBINK,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MISTYSURGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_REFLECT,
			MOVE_TRICK_ROOM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GOOEY
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_FIRE_BLAST,
			MOVE_SLUDGE_WAVE,
			MOVE_THUNDERBOLT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GOOEY
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_EARTHQUAKE,
			MOVE_POWER_WHIP,
			MOVE_BODY_SLAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HYDRATION
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SURF,
			MOVE_INFESTATION,
			MOVE_TOXIC,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOODRA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HYDRATION
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_RAIN_DANCE,
			MOVE_TOXIC,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEFKI,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_THUNDER_WAVE,
			MOVE_SPIKES,
			MOVE_RECYCLE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEFKI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_THUNDER_WAVE,
			MOVE_SPIKES,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEFKI,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_THUNDER_WAVE,
			MOVE_SPIKES,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEFKI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
			MOVE_FAIRY_LOCK,
			MOVE_CRAFTY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TREVENANT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_WOOD_HAMMER,
			MOVE_POLTERGEIST,
			MOVE_EARTHQUAKE,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TREVENANT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PHANTOM_FORCE,
			MOVE_LEECH_SEED,
			MOVE_WILL_O_WISP,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TREVENANT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_HORN_LEECH,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TREVENANT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 176,
		.spDefEv = 80,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HARVEST
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_LEECH_SEED,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOURGEIST,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HEATPROOF
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SPIRIT_SHACKLE,
			MOVE_LEECH_SEED,
			MOVE_WILL_O_WISP,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOURGEIST_AVERAGE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HEATPROOF
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_POLTERGEIST,
			MOVE_EXPLOSION,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOURGEIST_LARGE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HEATPROOF
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_SPIRIT_SHACKLE,
			MOVE_ROCK_SLIDE,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOURGEIST_SUPER,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HEATPROOF
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_LEECH_SEED,
			MOVE_WILL_O_WISP,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOURGEIST_SUPER,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PICKUP
		.item = ITEM_ROOM_SERVICE,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_PAIN_SPLIT,
			MOVE_WILL_O_WISP,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AVALUGG,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_RAPID_SPIN,
			MOVE_RECOVER,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AVALUGG,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AVALANCHE,
			MOVE_RAPID_SPIN,
			MOVE_RECOVER,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AVALUGG,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_IRON_BALL,
		.moves =
		{
			MOVE_MOUNTAIN_GALE,
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_GYRO_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AVALUGG,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_ROCK_SLIDE,
			MOVE_STEALTH_ROCK,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NOIVERN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PUNKROCK
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_AEROBLAST,
			MOVE_FLAMETHROWER,
			MOVE_BOOMBURST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NOIVERN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_AEROBLAST,
			MOVE_DRAGON_PULSE,
			MOVE_FLAMETHROWER,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NOIVERN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_YACHE_BERRY,
		.moves =
		{
			MOVE_AEROBLAST,
			MOVE_SUPER_FANG,
			MOVE_TAUNT,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NOIVERN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PUNKROCK
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_DRAGON_PULSE,
			MOVE_HEAT_WAVE,
			MOVE_BOOMBURST,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DECIDUEYE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LONGREACH
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_POLTERGEIST,
			MOVE_SUCKER_PUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DECIDUEYE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERGROW
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_SHADOW_BALL,
			MOVE_HURRICANE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DECIDUEYE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERGROW
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SPIRIT_SHACKLE,
			MOVE_CURSE,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DECIDUEYE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 160,
		.spdEv = 96,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LONGREACH
		.item = ITEM_DECIDIUM_Z,
		.moves =
		{
			MOVE_SPIRIT_SHACKLE,
			MOVE_LEAF_BLADE,
			MOVE_DEFOG,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INCINEROAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_INCINIUM_Z,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_DARKEST_LARIAT,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INCINEROAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_RAZOR_FANG,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_THROAT_CHOP,
			MOVE_CROSS_CHOP,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INCINEROAR,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_SNARL,
			MOVE_WILL_O_WISP,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INCINEROAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 108,
		.defEv = 20,
		.spDefEv = 116,
		.spdEv = 12,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_KNOCK_OFF,
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMARINA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_PRIMARIUM_Z,
		.moves =
		{
			MOVE_SPARKLING_ARIA,
			MOVE_MOONBLAST,
			MOVE_ICE_BEAM,
			MOVE_PSYCHIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMARINA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIQUIDVOICE
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_RELIC_SONG,
			MOVE_MOONBLAST,
			MOVE_ENERGY_BALL,
			MOVE_SING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMARINA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_MOONBLAST,
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMARINA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_AQUA_RING,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PRIMARINA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIQUIDVOICE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_RELIC_SONG,
			MOVE_ICY_WIND,
			MOVE_HELPING_HAND,
			MOVE_LIFE_DEW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOUCANNON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHEERFORCE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_DRILL_PECK,
			MOVE_STEEL_WING,
			MOVE_SMACK_DOWN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOUCANNON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 92,
		.atkEv = 252,
		.spdEv = 164,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SKILLLINK
		.item = ITEM_KINGS_ROCK,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_ROCK_BLAST,
			MOVE_BULLET_SEED,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOUCANNON,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_KEENEYE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_BEAK_BLAST,
			MOVE_OVERHEAT,
			MOVE_ROOST,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOUCANNON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SKILLLINK
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_ROCK_BLAST,
			MOVE_BULLET_SEED,
			MOVE_FEATHERDANCE,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GUMSHOOS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ADAPTABILITY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_RETURN,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_PURSUIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GUMSHOOS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_HYPER_FANG,
			MOVE_CRUNCH,
			MOVE_FIRE_FANG,
			MOVE_ICE_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GUMSHOOS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STAKEOUT
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SUPER_FANG,
			MOVE_STOMPING_TANTRUM,
			MOVE_YAWN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GUMSHOOS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STAKEOUT
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_RETURN,
			MOVE_EARTHQUAKE,
			MOVE_SUPER_FANG,
			MOVE_FLING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPOUNDEYES
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_THUNDER,
			MOVE_ENERGY_BALL,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPOUNDEYES
		.item = ITEM_BLUNDER_POLICY,
		.moves =
		{
			MOVE_ZAP_CANNON,
			MOVE_GUILLOTINE,
			MOVE_CHARGE,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_MUD_SLAP,
			MOVE_STICKY_WEB,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_ELECTROWEB,
			MOVE_STICKY_WEB,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRABOMINABLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CRABBYTACTICS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_ICE_HAMMER,
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRABOMINABLE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_IRONFIST
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_ICE_HAMMER,
			MOVE_DRAIN_PUNCH,
			MOVE_BULK_UP,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRABOMINABLE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_ICY_ROCK,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ENDEAVOR,
			MOVE_SUBSTITUTE,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRABOMINABLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_ICE_HAMMER,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RIBOMBEE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHIELDDUST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_POLLEN_PUFF,
			MOVE_MOONBLAST,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RIBOMBEE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHIELDDUST
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_POWDER,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RIBOMBEE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWEETVEIL
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SILVER_WIND,
			MOVE_QUIVER_DANCE,
			MOVE_DOUBLE_TEAM,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RIBOMBEE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWEETVEIL
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_HELPING_HAND,
			MOVE_TAILWIND,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TOUGHCLAWS
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ACCELEROCK,
			MOVE_CLOSE_COMBAT,
			MOVE_DRILL_RUN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEADFAST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_SNARL,
			MOVE_TAUNT,
			MOVE_QUICK_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SANDRUSH
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_CLOSE_COMBAT,
			MOVE_DRILL_RUN,
			MOVE_CRUNCH,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC_MIDNIGHT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TOUGHCLAWS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ACCELEROCK,
			MOVE_CLOSE_COMBAT,
			MOVE_SUCKER_PUNCH,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC_MIDNIGHT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 68,
		.atkEv = 252,
		.spdEv = 188,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NOGUARD
		.item = ITEM_LYCANIUM_Z,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_IRON_TAIL,
			MOVE_CLOSE_COMBAT,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC_MIDNIGHT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NOGUARD
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_IRON_TAIL,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC_DUSK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TOUGHCLAWS
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_ACCELEROCK,
			MOVE_CLOSE_COMBAT,
			MOVE_PSYCHIC_FANGS,
			MOVE_HAPPY_HOUR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC_DUSK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TOUGHCLAWS
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ACCELEROCK,
			MOVE_COUNTER,
			MOVE_ENDEAVOR,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LYCANROC_DUSK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TOUGHCLAWS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_STOMPING_TANTRUM,
			MOVE_PLAY_ROUGH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WISHIWASHI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SCHOOLING
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_AQUA_TAIL,
			MOVE_EARTHQUAKE,
			MOVE_IRON_TAIL,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WISHIWASHI,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SCHOOLING
		.item = ITEM_ZOOM_LENS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_FLIP_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WISHIWASHI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SCHOOLING
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_WHIRLPOOL,
			MOVE_TOXIC,
			MOVE_AQUA_RING,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WISHIWASHI,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 128,
		.spAtkEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SCHOOLING
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_EARTHQUAKE,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXAPEX,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MERCILESS
		.item = ITEM_POISON_GEM,
		.moves =
		{
			MOVE_SCALD,
			MOVE_VENOSHOCK,
			MOVE_TOXIC_SPIKES,
			MOVE_BANEFUL_BUNKER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXAPEX,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_EJECT_BUTTON,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_RECOVER,
			MOVE_TOXIC_SPIKES,
			MOVE_BANEFUL_BUNKER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXAPEX,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_SCALD,
			MOVE_RECOVER,
			MOVE_TOXIC,
			MOVE_BANEFUL_BUNKER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXAPEX,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_TOXIC_SPIKES,
			MOVE_RECOVER,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUDSDALE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STAMINA
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_CLOSE_COMBAT,
			MOVE_HEAVY_SLAM,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUDSDALE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STAMINA
		.item = ITEM_PASSHO_BERRY,
		.moves =
		{
			MOVE_HIGH_HORSEPOWER,
			MOVE_BODY_PRESS,
			MOVE_ROAR,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUDSDALE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 104,
		.spDefEv = 152,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STAMINA
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_REST,
			MOVE_SLEEP_TALK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MUDSDALE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STAMINA
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_BODY_PRESS,
			MOVE_ROAR,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARAQUANID,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERBUBBLE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_LEECH_LIFE,
			MOVE_CRUNCH,
			MOVE_STICKY_WEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARAQUANID,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 96,
		.atkEv = 220,
		.spdEv = 192,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERBUBBLE
		.item = ITEM_SPLASH_PLATE,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_INFESTATION,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARAQUANID,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WATERABSORB
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_TOXIC,
			MOVE_AQUA_RING,
			MOVE_DOUBLE_TEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARAQUANID,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERBUBBLE
		.item = ITEM_SPLASH_PLATE,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_STICKY_WEB,
			MOVE_WIDE_GUARD,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_LURANTIS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_SOLAR_BLADE,
			MOVE_SUPERPOWER,
			MOVE_POISON_JAB,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LURANTIS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_CHLOROPHYLL
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_WEATHER_BALL,
			MOVE_SYNTHESIS,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LURANTIS,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_SUPERPOWER,
			MOVE_DEFOG,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LURANTIS,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_PETAL_BLIZZARD,
			MOVE_SUPERPOWER,
			MOVE_LEECH_LIFE,
			MOVE_PSYCHO_CUT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_SHIINOTIC,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_SPORE,
			MOVE_LEECH_SEED,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHIINOTIC,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_EFFECTSPORE
		.item = ITEM_LAX_INCENSE,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_CONFUSE_RAY,
			MOVE_STRENGTH_SAP,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHIINOTIC,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_MOONBLAST,
			MOVE_SLUDGE_BOMB,
			MOVE_CHARGE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHIINOTIC,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_POLLEN_PUFF,
			MOVE_SPORE,
			MOVE_LEECH_SEED,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SALAZZLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OBLIVIOUS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_FLAMETHROWER,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SALAZZLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CORROSION
		.item = ITEM_POISON_GEM,
		.moves =
		{
			MOVE_VENOSHOCK,
			MOVE_FLAMETHROWER,
			MOVE_TOXIC,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SALAZZLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CORROSION
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_SLUDGE_BOMB,
			MOVE_KNOCK_OFF,
			MOVE_DISABLE,
			MOVE_ENCORE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SALAZZLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CORROSION
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ENCORE,
			MOVE_FAKE_OUT,
			MOVE_POISON_GAS,
			MOVE_VENOM_DRENCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEWEAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLUFFY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_RETURN,
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEWEAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 252,
		.spdEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLUFFY
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_ICE_PUNCH,
			MOVE_THUNDER_PUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEWEAR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLUFFY
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_BIND,
			MOVE_TOXIC,
			MOVE_PAIN_SPLIT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BEWEAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLUFFY
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_CLOSE_COMBAT,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TSAREENA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUEENLYMAJESTY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_HIGH_JUMP_KICK,
			MOVE_KNOCK_OFF,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TSAREENA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUEENLYMAJESTY
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_TROP_KICK,
			MOVE_PLAY_ROUGH,
			MOVE_TRIPLE_AXEL,
			MOVE_FEINT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TSAREENA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_QUEENLYMAJESTY
		.item = ITEM_ZOOM_LENS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_SUBSTITUTE,
			MOVE_GRASSWHISTLE,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TSAREENA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.defEv = 128,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWEETVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TROP_KICK,
			MOVE_GRASSWHISTLE,
			MOVE_ACUPRESSURE,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COMFEY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TRIAGE
		.item = ITEM_PETAYA_BERRY,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_ENERGY_BALL,
			MOVE_SYNTHESIS,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COMFEY,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_NATURALCURE
		.item = ITEM_GRIP_CLAW,
		.moves =
		{
			MOVE_WRAP,
			MOVE_LEECH_SEED,
			MOVE_SWEET_KISS,
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COMFEY,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TRIAGE
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_DRAINING_KISS,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COMFEY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.defEv = 252,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TRIAGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLORAL_HEALING,
			MOVE_HELPING_HAND,
			MOVE_TAILWIND,
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ORANGURU,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_SHADOW_BALL,
			MOVE_THUNDERBOLT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ORANGURU,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_FOUL_PLAY,
			MOVE_PROTECT,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ORANGURU,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ORANGURU,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INNERFOCUS
		.item = ITEM_MENTAL_HERB,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_INSTRUCT,
			MOVE_TRICK_ROOM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PASSIMIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_IRON_HEAD,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PASSIMIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_ROCK_SLIDE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PASSIMIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_REVERSAL,
			MOVE_ACROBATICS,
			MOVE_ROCK_SLIDE,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PASSIMIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_QUICK_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLISOPOD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_LEECH_LIFE,
			MOVE_AQUA_JET,
			MOVE_SUCKER_PUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLISOPOD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EMERGENCYEXIT
		.item = ITEM_EJECT_BUTTON,
		.moves =
		{
			MOVE_FIRST_IMPRESSION,
			MOVE_LIQUIDATION,
			MOVE_LEECH_LIFE,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLISOPOD,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LEECH_LIFE,
			MOVE_PAIN_SPLIT,
			MOVE_TOXIC,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOLISOPOD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_EMERGENCYEXIT
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_FIRST_IMPRESSION,
			MOVE_ROCK_SLIDE,
			MOVE_AQUA_JET,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALOSSAND,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERCOMPACTION
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCORCHING_SANDS,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALOSSAND,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDVEIL
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_SCORCHING_SANDS,
			MOVE_SANDSTORM,
			MOVE_SHORE_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALOSSAND,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERCOMPACTION
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_TOXIC,
			MOVE_CURSE,
			MOVE_SHORE_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALOSSAND,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDVEIL
		.item = ITEM_SMOOTH_ROCK,
		.moves =
		{
			MOVE_SCORCHING_SANDS,
			MOVE_STEALTH_ROCK,
			MOVE_SANDSTORM,
			MOVE_SHORE_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PYUKUMUKU,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_SPITE,
			MOVE_BLOCK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PYUKUMUKU,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_COUNTER,
			MOVE_MIRROR_COAT,
			MOVE_TOXIC,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PYUKUMUKU,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_CURSE,
			MOVE_BATON_PASS,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PYUKUMUKU,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNAWARE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_HELPING_HAND,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SILVALLY_STEEL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RKS_SYSTEM
		.item = ITEM_STEEL_MEMORY,
		.moves =
		{
			MOVE_MULTI_ATTACK,
			MOVE_FLAMETHROWER,
			MOVE_U_TURN,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SILVALLY_GHOST,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RKS_SYSTEM
		.item = ITEM_GHOST_MEMORY,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_FLAMETHROWER,
			MOVE_PARTING_SHOT,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SILVALLY_DRAGON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RKS_SYSTEM
		.item = ITEM_DRAGON_MEMORY,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_FLAMETHROWER,
			MOVE_FLASH_CANNON,
			MOVE_PARTING_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SILVALLY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RKS_SYSTEM
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_HEAT_WAVE,
			MOVE_SHADOW_BALL,
			MOVE_PARTING_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SILVALLY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RKS_SYSTEM
		.item = ITEM_ELECTRIC_MEMORY,
		.moves =
		{
			MOVE_TERRAIN_PULSE,
			MOVE_HEAT_WAVE,
			MOVE_SURF,
			MOVE_SNARL,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MINIOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHIELDSDOWN
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_ACROBATICS,
			MOVE_EARTHQUAKE,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MINIOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHIELDSDOWN
		.item = ITEM_ABSORB_BULB,
		.moves =
		{
			MOVE_ANCIENTPOWER,
			MOVE_CHARGE_BEAM,
			MOVE_CONFUSE_RAY,
			MOVE_COSMIC_POWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MINIOR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHIELDSDOWN
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ROCK_TOMB,
			MOVE_U_TURN,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MINIOR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 136,
		.defEv = 100,
		.spDefEv = 56,
		.spdEv = 216,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHIELDSDOWN
		.item = ITEM_ROOM_SERVICE,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_CONFUSE_RAY,
			MOVE_STEALTH_ROCK,
			MOVE_SANDSTORM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMALA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMATOSE
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_RETURN,
			MOVE_PLAY_ROUGH,
			MOVE_WOOD_HAMMER,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMALA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_RETURN,
			MOVE_SUPERPOWER,
			MOVE_RAPID_SPIN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMALA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMATOSE
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_THRASH,
			MOVE_ROLLOUT,
			MOVE_DEFENSE_CURL,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMALA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_RAPID_SPIN,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TURTONATOR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_WEAKARMOR
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_SEARING_SHOT,
			MOVE_DRACO_METEOR,
			MOVE_SCORCHING_SANDS,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TURTONATOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHELLARMOR
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SEARING_SHOT,
			MOVE_SOLAR_BEAM,
			MOVE_DRACO_METEOR,
			MOVE_SUNNY_DAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TURTONATOR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHELLARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_SHELL_TRAP,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TURTONATOR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHELLARMOR
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_HYPER_VOICE,
			MOVE_DRACO_METEOR,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOGEDEMARU,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_POISON_JAB,
			MOVE_FELL_STINGER,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOGEDEMARU,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_ZING_ZAP,
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOGEDEMARU,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONBARBS
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_ZING_ZAP,
			MOVE_TOXIC,
			MOVE_WISH,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOGEDEMARU,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONBARBS
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_NUZZLE,
			MOVE_FAKE_OUT,
			MOVE_HELPING_HAND,
			MOVE_SPIKY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIMIKYU,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DISGUISE
		.item = ITEM_MIMIKIUM_Z,
		.moves =
		{
			MOVE_SHADOW_CLAW,
			MOVE_PLAY_ROUGH,
			MOVE_SHADOW_SNEAK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIMIKYU,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DISGUISE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_WILL_O_WISP,
			MOVE_SUBSTITUTE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIMIKYU,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DISGUISE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SHADOW_SNEAK,
			MOVE_INFESTATION,
			MOVE_CURSE,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MIMIKYU,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DISGUISE
		.item = ITEM_MENTAL_HERB,
		.moves =
		{
			MOVE_SHADOW_SNEAK,
			MOVE_PLAY_ROUGH,
			MOVE_WILL_O_WISP,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRUXISH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_AQUA_JET,
			MOVE_PSYCHIC_FANGS,
			MOVE_CRUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRUXISH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_WACAN_BERRY,
		.moves =
		{
			MOVE_AQUA_JET,
			MOVE_SCALE_SHOT,
			MOVE_SCREECH,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRUXISH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_MUSCLE_BAND,
		.moves =
		{
			MOVE_PSYCHIC_FANGS,
			MOVE_CRUNCH,
			MOVE_ICE_FANG,
			MOVE_POISON_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRUXISH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DAZZLING
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_PSYCHIC_FANGS,
			MOVE_AFTER_YOU,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAMPA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BERSERK
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_DRAGON_ENERGY,
			MOVE_THUNDERBOLT,
			MOVE_FOCUS_BLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAMPA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SAPSIPPER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_TOXIC,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAMPA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BERSERK
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DRAGON_PULSE,
			MOVE_FLAMETHROWER,
			MOVE_GLARE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAMPA,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BERSERK
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRAGON_ENERGY,
			MOVE_DRAGON_PULSE,
			MOVE_HYPER_VOICE,
			MOVE_HEAT_WAVE,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DHELMISE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AFTERMATH
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_POWER_WHIP,
			MOVE_SYNTHESIS,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DHELMISE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STEELWORKER
		.item = ITEM_FLOAT_STONE,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_POWER_WHIP,
			MOVE_HEAVY_SLAM,
			MOVE_SWITCHEROO,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DHELMISE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AFTERMATH
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_ANCHOR_SHOT,
			MOVE_TOXIC,
			MOVE_SYNTHESIS,
			MOVE_DOUBLE_TEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DHELMISE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STEELWORKER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ANCHOR_SHOT,
			MOVE_KNOCK_OFF,
			MOVE_SYNTHESIS,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMMO_O,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BULLETPROOF
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_CLOSE_COMBAT,
			MOVE_POISON_JAB,
			MOVE_CLANGOROUS_SOUL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMMO_O,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_KOMMONIUM_Z,
		.moves =
		{
			MOVE_CLANGING_SCALES,
			MOVE_AURA_SPHERE,
			MOVE_BOOMBURST,
			MOVE_AUTOTOMIZE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMMO_O,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_CLANGING_SCALES,
			MOVE_CLOSE_COMBAT,
			MOVE_BOOMBURST,
			MOVE_FLASH_CANNON,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMMO_O,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_OVERCOAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_BODY_PRESS,
			MOVE_POISON_JAB,
			MOVE_IRON_DEFENSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KOMMO_O,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SOUNDPROOF
		.item = ITEM_KOMMONIUM_Z,
		.moves =
		{
			MOVE_CLANGING_SCALES,
			MOVE_BOOMBURST,
			MOVE_FLAMETHROWER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_KOKO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ELECTRICSURGE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_BRAVE_BIRD,
			MOVE_IRON_HEAD,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_KOKO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ELECTRICSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_DAZZLING_GLEAM,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_KOKO,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ELECTRICSURGE
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_WILD_CHARGE,
			MOVE_DAZZLING_GLEAM,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_KOKO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ELECTRICSURGE
		.item = ITEM_FAIRIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_DAZZLING_GLEAM,
			MOVE_VOLT_SWITCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_LELE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PSYCHICSURGE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_MOONBLAST,
			MOVE_FOCUS_BLAST,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_LELE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PSYCHICSURGE
		.item = ITEM_PSYCHIUM_Z,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_MOONBLAST,
			MOVE_FOCUS_BLAST,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_LELE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PSYCHICSURGE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_NATURES_MADNESS,
			MOVE_DEFOG,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_LELE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 60,
		.spAtkEv = 112,
		.spdEv = 84,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PSYCHICSURGE
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_MOONBLAST,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_BULU,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GRASSYSURGE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_WOOD_HAMMER,
			MOVE_HORN_LEECH,
			MOVE_CLOSE_COMBAT,
			MOVE_STONE_EDGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_BULU,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GRASSYSURGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HORN_LEECH,
			MOVE_CLOSE_COMBAT,
			MOVE_SWORDS_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_BULU,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GRASSYSURGE
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_HORN_LEECH,
			MOVE_NATURES_MADNESS,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_BULU,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 56,
		.spDefEv = 116,
		.spdEv = 84,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GRASSYSURGE
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_WOOD_HAMMER,
			MOVE_CLOSE_COMBAT,
			MOVE_SWORDS_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_FINI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MISTYSURGE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_NATURES_MADNESS,
			MOVE_DEFOG,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_FINI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MISTYSURGE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_MOONBLAST,
			MOVE_SHADOW_BALL,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_FINI,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MISTYSURGE
		.item = ITEM_STICKY_BARB,
		.moves =
		{
			MOVE_SCALD,
			MOVE_DEFOG,
			MOVE_TRICK,
			MOVE_AQUA_RING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TAPU_FINI,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 140,
		.spAtkEv = 116,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MISTYSURGE
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_NATURES_MADNESS,
			MOVE_HEAL_PULSE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIHILEGO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_POWER_GEM,
			MOVE_SLUDGE_WAVE,
			MOVE_THUNDERBOLT,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIHILEGO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_ACID_SPRAY,
			MOVE_THUNDER_WAVE,
			MOVE_TOXIC_SPIKES,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIHILEGO,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_BIND,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NIHILEGO,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_VENOSHOCK,
			MOVE_TOXIC,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BUZZWOLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_LEECH_LIFE,
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_POISON_JAB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BUZZWOLE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.defEv = 184,
		.spDefEv = 76,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_IRON_BALL,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_GYRO_BALL,
			MOVE_FLING,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BUZZWOLE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 184,
		.spDefEv = 76,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_EARTHQUAKE,
			MOVE_TOXIC,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BUZZWOLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_LEECH_LIFE,
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_LUNGE,
			MOVE_POISON_JAB,
			MOVE_TRIPLE_AXEL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_FOCUS_BLAST,
			MOVE_ICE_BEAM,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_CLOSE_COMBAT,
			MOVE_THROAT_CHOP,
			MOVE_DRILL_RUN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_FOCUS_BLAST,
			MOVE_ICE_BEAM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHEROMOSA,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_ICE_GEM,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_BUG_BUZZ,
			MOVE_BLIZZARD,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_XURKITREE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_DAZZLING_GLEAM,
			MOVE_ENERGY_BALL,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XURKITREE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_DAZZLING_GLEAM,
			MOVE_ENERGY_BALL,
			MOVE_TAIL_GLOW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XURKITREE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_BIND,
			MOVE_HYPNOSIS,
			MOVE_TAIL_GLOW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XURKITREE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_DAZZLING_GLEAM,
			MOVE_VOLT_SWITCH,
			MOVE_HYPNOSIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_FLASH_CANNON,
			MOVE_AIR_SLASH,
			MOVE_FIRE_BLAST,
			MOVE_GIGA_DRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 8,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 104,
		.spDefEv = 156,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_MACHO_BRACE,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_SMACK_DOWN,
			MOVE_LEECH_SEED,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELESTEELA,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 120,
		.defEv = 12,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_LEECH_SEED,
			MOVE_FLAMETHROWER,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KARTANA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_SMART_STRIKE,
			MOVE_SACRED_SWORD,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KARTANA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_NIGHT_SLASH,
			MOVE_PSYCHO_CUT,
			MOVE_SACRED_SWORD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KARTANA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_OCCA_BERRY,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_DEFOG,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KARTANA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_SACRED_SWORD,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GUZZLORD,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_LASH_OUT,
			MOVE_CORE_ENFORCER,
			MOVE_FIRE_BLAST,
			MOVE_SLUDGE_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GUZZLORD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_DRAGON_RUSH,
			MOVE_DRAIN_PUNCH,
			MOVE_POISON_JAB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GUZZLORD,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SNARL,
			MOVE_TOXIC,
			MOVE_IRON_DEFENSE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GUZZLORD,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.defEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_CORE_ENFORCER,
			MOVE_HEAT_WAVE,
			MOVE_SLUDGE_WAVE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NAGANADEL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_WISE_GLASSES,
		.moves =
		{
			MOVE_DRAGON_PULSE,
			MOVE_SLUDGE_WAVE,
			MOVE_FLAMETHROWER,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NAGANADEL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_SLUDGE_WAVE,
			MOVE_FIRE_BLAST,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NAGANADEL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_RAZOR_CLAW,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_POISON_JAB,
			MOVE_SHADOW_CLAW,
			MOVE_FELL_STINGER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NAGANADEL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_SLUDGE_BOMB,
			MOVE_FIRE_BLAST,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STAKATAKA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_GYRO_BALL,
			MOVE_EARTHQUAKE,
			MOVE_BODY_PRESS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STAKATAKA,
		.nature = NATURE_LONELY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 14,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_GYRO_BALL,
			MOVE_STEALTH_ROCK,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STAKATAKA,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STAKATAKA,
		.nature = NATURE_LONELY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 14,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_GYRO_BALL,
			MOVE_TRICK_ROOM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLACEPHALON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 232,
		.defEv = 4,
		.spAtkEv = 20,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_SHADOW_BALL,
			MOVE_CALM_MIND,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLACEPHALON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_MIND_BLOWN,
			MOVE_SHADOW_BALL,
			MOVE_PSYSHOCK,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLACEPHALON,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spDefEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_STICKY_BARB,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_WILL_O_WISP,
			MOVE_PAIN_SPLIT,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BLACEPHALON,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BEASTBOOST
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_OVERHEAT,
			MOVE_HEAT_WAVE,
			MOVE_KNOCK_OFF,
			MOVE_AFTER_YOU,
		},
		
		
		
		
	},

	//Gen 8
	{
		.species = SPECIES_RILLABOOM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_SUPERPOWER,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RILLABOOM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_EARTHQUAKE,
			MOVE_U_TURN,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RILLABOOM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 100,
		.atkEv = 252,
		.spdEv = 156,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_GRASSY_SEED,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_DRAIN_PUNCH,
			MOVE_ACROBATICS,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RILLABOOM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 124,
		.defEv = 36,
		.spDefEv = 100,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GRASSYSURGE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CINDERACE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIBERO
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PYRO_BALL,
			MOVE_HIGH_JUMP_KICK,
			MOVE_GUNK_SHOT,
			MOVE_IRON_HEAD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CINDERACE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIBERO
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_PYRO_BALL,
			MOVE_SUCKER_PUNCH,
			MOVE_U_TURN,
			MOVE_COURT_CHANGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CINDERACE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIBERO
		.item = ITEM_LIECHI_BERRY,
		.moves =
		{
			MOVE_PYRO_BALL,
			MOVE_SUCKER_PUNCH,
			MOVE_REVERSAL,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CINDERACE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIBERO
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PYRO_BALL,
			MOVE_GUNK_SHOT,
			MOVE_LOW_KICK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INTELEON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_DARK_PULSE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INTELEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNIPER
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_SNIPE_SHOT,
			MOVE_ICE_BEAM,
			MOVE_DARK_PULSE,
			MOVE_FOCUS_ENERGY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INTELEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SNIPER
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_SNIPE_SHOT,
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_ICE_SHARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INTELEON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spDefEv = 8,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_U_TURN,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GREEDENT,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 44,
		.defEv = 124,
		.spdEv = 84,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHEEKPOUCH
		.item = ITEM_APICOT_BERRY,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_PAYBACK,
			MOVE_SUPER_FANG,
			MOVE_STUFF_CHEEKS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GREEDENT,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GLUTTONY
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_RETURN,
			MOVE_PAYBACK,
			MOVE_GYRO_BALL,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GREEDENT,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GLUTTONY
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GIGA_IMPACT,
			MOVE_EARTHQUAKE,
			MOVE_PSYCHIC_FANGS,
			MOVE_COUNTER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GREEDENT,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 96,
		.spDefEv = 160,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHEEKPOUCH
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_SUPER_FANG,
			MOVE_COUNTER,
			MOVE_STOCKPILE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORVIKNIGHT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 168,
		.spDefEv = 88,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_U_TURN,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORVIKNIGHT,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MIRRORARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_TAUNT,
			MOVE_BULK_UP,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORVIKNIGHT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 100,
		.spDefEv = 80,
		.spdEv = 80,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_BODY_PRESS,
			MOVE_IRON_DEFENSE,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORVIKNIGHT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 100,
		.spDefEv = 80,
		.spdEv = 80,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_TAUNT,
			MOVE_ROOST,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ORBEETLE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 108,
		.spAtkEv = 8,
		.spDefEv = 140,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FRISK
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_CALM_MIND,
			MOVE_IRON_DEFENSE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ORBEETLE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spAtkEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FRISK
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_U_TURN,
			MOVE_STICKY_WEB,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ORBEETLE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FRISK
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_MIRROR_COAT,
			MOVE_IRON_DEFENSE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ORBEETLE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spDefEv = 8,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FRISK
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_STICKY_WEB,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THIEVUL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STAKEOUT
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_PSYCHIC,
			MOVE_BURNING_JEALOUSY,
			MOVE_PARTING_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THIEVUL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_UNBURDEN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_PSYCHIC,
			MOVE_GRASS_KNOT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THIEVUL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_SNARL,
			MOVE_BURNING_JEALOUSY,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_HYPER_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_THIEVUL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_SNARL,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELDEGOSS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 236,
		.spAtkEv = 236,
		.spdEv = 36,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_GIGA_DRAIN,
			MOVE_POLLEN_PUFF,
			MOVE_RAPID_SPIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELDEGOSS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COTTONDOWN
		.item = ITEM_HEAT_ROCK,
		.moves =
		{
			MOVE_SOLAR_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
			MOVE_SUNNY_DAY,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELDEGOSS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_LEECH_SEED,
			MOVE_SLEEP_POWDER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELDEGOSS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_POLLEN_PUFF,
			MOVE_LEECH_SEED,
			MOVE_SLEEP_POWDER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUBWOOL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLUFFY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_BODY_PRESS,
			MOVE_PAYBACK,
			MOVE_COTTON_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUBWOOL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLUFFY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RETURN,
			MOVE_WILD_CHARGE,
			MOVE_BODY_PRESS,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUBWOOL,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLUFFY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_COTTON_GUARD,
			MOVE_SUBSTITUTE,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DUBWOOL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STEADFAST
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RETURN,
			MOVE_BODY_PRESS,
			MOVE_THUNDER_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DREDNAW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_LIQUIDATION,
			MOVE_ICE_FANG,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DREDNAW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWIFTSWIM
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_LIQUIDATION,
			MOVE_EARTHQUAKE,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DREDNAW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_HEAD_SMASH,
			MOVE_LIQUIDATION,
			MOVE_ICE_FANG,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DREDNAW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SWIFTSWIM
		.item = ITEM_RINDO_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_LIQUIDATION,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BOLTUND,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BOLT_STRIKE,
			MOVE_PLAY_ROUGH,
			MOVE_PSYCHIC_FANGS,
			MOVE_HONE_CLAWS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BOLTUND,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_BOLT_STRIKE,
			MOVE_PSYCHIC_FANGS,
			MOVE_FIRE_FANG,
			MOVE_CRUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BOLTUND,
		.nature = NATURE_NAUGHTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_BOLT_STRIKE,
			MOVE_PSYCHIC_FANGS,
			MOVE_FIRE_FANG,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BOLTUND,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPETITIVE
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_HYPER_VOICE,
			MOVE_SNARL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COALOSSAL,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FLAMEBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_EARTHQUAKE,
			MOVE_RAPID_SPIN,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COALOSSAL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 76,
		.atkEv = 252,
		.spdEv = 180,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STEAMENGINE
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COALOSSAL,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STEAMENGINE
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_BURN_UP,
			MOVE_METEOR_BEAM,
			MOVE_SCALD,
			MOVE_SCORCHING_SANDS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COALOSSAL,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_FLAMEBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_HEAVY_SLAM,
			MOVE_RAPID_SPIN,
			MOVE_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COALOSSAL,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STEAMENGINE
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_EARTH_POWER,
			MOVE_WILL_O_WISP,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLAPPLE,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUSTLE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_GRAV_APPLE,
			MOVE_SUCKER_PUNCH,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLAPPLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RIPEN
		.item = ITEM_YACHE_BERRY,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_GRAV_APPLE,
			MOVE_SUCKER_PUNCH,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLAPPLE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUSTLE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_GRAV_APPLE,
			MOVE_SUCKER_PUNCH,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FLAPPLE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUSTLE
		.item = ITEM_YACHE_BERRY,
		.moves =
		{
			MOVE_GRAV_APPLE,
			MOVE_SUCKER_PUNCH,
			MOVE_DRAGON_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_APPLETUN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 20,
		.spAtkEv = 252,
		.spdEv = 236,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_DRAGON_PULSE,
			MOVE_APPLE_ACID,
			MOVE_GIGA_DRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_APPLETUN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 196,
		.spDefEv = 64,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RIPEN
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_APPLE_ACID,
			MOVE_LEECH_SEED,
			MOVE_RECOVER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_APPLETUN,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 64,
		.defEv = 56,
		.spDefEv = 136,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEED_BOMB,
			MOVE_BODY_PRESS,
			MOVE_GYRO_BALL,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_APPLETUN,
		.nature = NATURE_NAUGHTY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 120,
		.spDefEv = 136,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_APPLE_ACID,
			MOVE_LEECH_SEED,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDACONDA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 244,
		.spdEv = 12,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEDSKIN
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_GLARE,
			MOVE_STEALTH_ROCK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDACONDA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEDSKIN
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_COIL,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDACONDA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEDSKIN
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_BODY_PRESS,
			MOVE_IRON_DEFENSE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SANDACONDA,
		.nature = 0,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSPIT
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_BULLDOZE,
			MOVE_ROCK_SLIDE,
			MOVE_GLARE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRAMORANT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 8,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GULPMISSILE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_SURF,
			MOVE_HURRICANE,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRAMORANT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 248,
		.defEv = 8,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GULPMISSILE
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_DIVE,
			MOVE_BRAVE_BIRD,
			MOVE_THROAT_CHOP,
			MOVE_SUPERPOWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRAMORANT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.defEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GULPMISSILE
		.item = ITEM_KEE_BERRY,
		.moves =
		{
			MOVE_SURF,
			MOVE_STOCKPILE,
			MOVE_AMNESIA,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CRAMORANT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GULPMISSILE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICY_WIND,
			MOVE_TAILWIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BARRASKEWDA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_CLOSE_COMBAT,
			MOVE_FLIP_TURN,
			MOVE_AQUA_JET,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BARRASKEWDA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_CLOSE_COMBAT,
			MOVE_PSYCHIC_FANGS,
			MOVE_THROAT_CHOP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BARRASKEWDA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWIFTSWIM
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_CLOSE_COMBAT,
			MOVE_DRILL_RUN,
			MOVE_POISON_JAB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BARRASKEWDA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PROPELLERTAIL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_CLOSE_COMBAT,
			MOVE_THROAT_CHOP,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXTRICITY_LOW_KEY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PUNKROCK
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_SLUDGE_BOMB,
			MOVE_OVERDRIVE,
			MOVE_VOLT_SWITCH,
			MOVE_BOOMBURST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXTRICITY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PUNKROCK
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_POISON_JAB,
			MOVE_THUNDER_PUNCH,
			MOVE_FIRE_PUNCH,
			MOVE_SHIFT_GEAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXTRICITY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.spAtkEv = 252,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PUNKROCK
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_OVERDRIVE,
			MOVE_BOOMBURST,
			MOVE_ACID_SPRAY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TOXTRICITY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PUNKROCK
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_SLUDGE_WAVE,
			MOVE_OVERDRIVE,
			MOVE_BOOMBURST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CENTISKORCH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_FIRE_LASH,
			MOVE_LEECH_LIFE,
			MOVE_POWER_WHIP,
			MOVE_COIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CENTISKORCH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_RAGING_FURY,
			MOVE_LEECH_LIFE,
			MOVE_THUNDER_FANG,
			MOVE_KNOCK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CENTISKORCH,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spAtkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_BUG_BUZZ,
			MOVE_SCALD,
			MOVE_SCORCHING_SANDS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CENTISKORCH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_BUG_BUZZ,
			MOVE_STRUGGLE_BUG,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRAPPLOCT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LIMBER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_LIQUIDATION,
			MOVE_TAUNT,
			MOVE_OCTOLOCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRAPPLOCT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LIMBER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_SUCKER_PUNCH,
			MOVE_OCTOLOCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRAPPLOCT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 240,
		.defEv = 244,
		.spDefEv = 24,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TECHNICIAN
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_POWER_UP_PUNCH,
			MOVE_ICE_PUNCH,
			MOVE_AQUA_JET,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRAPPLOCT,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 6,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LIMBER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_COACHING,
			MOVE_OCTOLOCK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLTEAGEIST,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WEAKARMOR
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_GIGA_DRAIN,
			MOVE_STORED_POWER,
			MOVE_SHELL_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLTEAGEIST,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CURSEDBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEX,
			MOVE_WILL_O_WISP,
			MOVE_STRENGTH_SAP,
			MOVE_AROMATHERAPY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLTEAGEIST,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 36,
		.spAtkEv = 252,
		.spdEv = 220,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WEAKARMOR
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_HEX,
			MOVE_TRICK,
			MOVE_ENDURE,
			MOVE_MEMENTO,
		},
		
		
		
		
	},
	{
		.species = SPECIES_POLTEAGEIST,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CURSEDBODY
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_STRENGTH_SAP,
			MOVE_SHELL_SMASH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HATTERENE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 244,
		.spdEv = 12,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_DRAINING_KISS,
			MOVE_MYSTICAL_FIRE,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HATTERENE,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_DAZZLING_GLEAM,
			MOVE_MYSTICAL_FIRE,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HATTERENE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_DRAINING_KISS,
			MOVE_GIGA_DRAIN,
			MOVE_MYSTICAL_FIRE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HATTERENE,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICBOUNCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_DAZZLING_GLEAM,
			MOVE_TRICK_ROOM,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.defEv = 84,
		.spDefEv = 212,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_TAUNT,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 172,
		.defEv = 252,
		.spDefEv = 84,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_LAGGING_TAIL,
		.moves =
		{
			MOVE_SPIRIT_BREAK,
			MOVE_TRICK,
			MOVE_TORMENT,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PICKPOCKET
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_DARKEST_LARIAT,
			MOVE_DRAIN_PUNCH,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.defEv = 84,
		.spDefEv = 212,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_SPIRIT_BREAK,
			MOVE_THUNDER_WAVE,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GRIMMSNARL,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_TAUNT,
			MOVE_THUNDER_WAVE,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OBSTAGOON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_KNOCK_OFF,
			MOVE_CLOSE_COMBAT,
			MOVE_OBSTRUCT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OBSTAGOON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RECKLESS
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_THROAT_CHOP,
			MOVE_GUNK_SHOT,
			MOVE_OBSTRUCT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OBSTAGOON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RECKLESS
		.item = ITEM_NORMAL_GEM,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_THIEF,
			MOVE_PARTING_SHOT,
			MOVE_OBSTRUCT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OBSTAGOON,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RECKLESS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_HELPING_HAND,
			MOVE_PARTING_SHOT,
			MOVE_OBSTRUCT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERRSERKER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TOUGHCLAWS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_CLOSE_COMBAT,
			MOVE_SEED_BOMB,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERRSERKER,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 8,
		.atkEv = 252,
		.spDefEv = 248,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TOUGHCLAWS
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_GYRO_BALL,
			MOVE_PLAY_ROUGH,
			MOVE_CRUNCH,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERRSERKER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEELYSPIRIT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_SEED_BOMB,
			MOVE_SWORDS_DANCE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PERRSERKER,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 8,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEELYSPIRIT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_FAKE_OUT,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CURSOLA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WEAKARMOR
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_METEOR_BEAM,
			MOVE_BURNING_JEALOUSY,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CURSOLA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WEAKARMOR
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_BURNING_JEALOUSY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CURSOLA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PERISHBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEX,
			MOVE_GIGA_DRAIN,
			MOVE_WILL_O_WISP,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CURSOLA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PERISHBODY
		.item = ITEM_BIG_ROOT,
		.moves =
		{
			MOVE_NIGHT_SHADE,
			MOVE_GIGA_DRAIN,
			MOVE_STRENGTH_SAP,
			MOVE_DISABLE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIRFETCHD,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_BRAVE_BIRD,
			MOVE_KNOCK_OFF,
			MOVE_FIRST_IMPRESSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIRFETCHD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_METEOR_ASSAULT,
			MOVE_BRAVE_BIRD,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIRFETCHD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_METEOR_ASSAULT,
			MOVE_SKY_ATTACK,
			MOVE_SOLAR_BLADE,
			MOVE_FIRST_IMPRESSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SIRFETCHD,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_METEOR_ASSAULT,
			MOVE_BRAVE_BIRD,
			MOVE_SWORDS_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MR_RIME,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SCREENCLEANER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_TRIPLE_AXEL,
			MOVE_ZEN_HEADBUTT,
			MOVE_STOMPING_TANTRUM,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MR_RIME,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SCREENCLEANER
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_FREEZE_DRY,
			MOVE_RAPID_SPIN,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MR_RIME,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spAtkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_2, //ABILITY_TANGLEDFEET
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_FOCUS_BLAST,
			MOVE_ENERGY_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MR_RIME,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spAtkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SCREENCLEANER
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_ICE_BEAM,
			MOVE_FOCUS_BLAST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RUNERIGUS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WANDERINGSPIRIT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_WILL_O_WISP,
			MOVE_STEALTH_ROCK,
			MOVE_TOXIC_SPIKES,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RUNERIGUS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WANDERINGSPIRIT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_IRON_DEFENSE,
			MOVE_AMNESIA,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RUNERIGUS,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WANDERINGSPIRIT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_NIGHT_SHADE,
			MOVE_WILL_O_WISP,
			MOVE_DESTINY_BOND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RUNERIGUS,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WANDERINGSPIRIT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_WILL_O_WISP,
			MOVE_TRICK_ROOM,
			MOVE_HAZE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALCREMIE_STRAWBERRY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AROMAVEIL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_MYSTICAL_FIRE,
			MOVE_PSYCHIC,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALCREMIE_STRAWBERRY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AROMAVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_MYSTICAL_FIRE,
			MOVE_CALM_MIND,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALCREMIE_STRAWBERRY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AROMAVEIL
		.item = ITEM_CHESTO_BERRY,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_CALM_MIND,
			MOVE_ACID_ARMOR,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ALCREMIE_STRAWBERRY,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AROMAVEIL
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_DECORATE,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FALINKS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_THROAT_CHOP,
			MOVE_ZEN_HEADBUTT,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FALINKS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_SHED_SHELL,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_IRON_HEAD,
			MOVE_ROCK_SLIDE,
			MOVE_NO_RETREAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FALINKS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_REVERSAL,
			MOVE_THROAT_CHOP,
			MOVE_NO_RETREAT,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FALINKS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DEFIANT
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_ROCK_SLIDE,
			MOVE_NO_RETREAT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PINCURCHIN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_TOXIC_SPIKES,
			MOVE_SPIKES,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PINCURCHIN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_ELECTRIC_SEED,
		.moves =
		{
			MOVE_ZING_ZAP,
			MOVE_LIQUIDATION,
			MOVE_CURSE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PINCURCHIN,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ELECTRICSURGE
		.item = ITEM_ELECTRIC_SEED,
		.moves =
		{
			MOVE_ZING_ZAP,
			MOVE_BARB_BARRAGE,
			MOVE_TOXIC_SPIKES,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PINCURCHIN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LIGHTNINGROD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DISCHARGE,
			MOVE_SCALD,
			MOVE_SPIKES,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSMOTH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_BUG_BUZZ,
			MOVE_GIGA_DRAIN,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSMOTH,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_HURRICANE,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSMOTH,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_BUG_BUZZ,
			MOVE_DAZZLING_GLEAM,
			MOVE_QUIVER_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_FROSMOTH,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ICESCALES
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_STRUGGLE_BUG,
			MOVE_TAILWIND,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STONJOURNER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SOLIDROCK
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_SELFDESTRUCT,
			MOVE_EARTHQUAKE,
			MOVE_HEAT_CRASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STONJOURNER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SOLIDROCK
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_BODY_PRESS,
			MOVE_EARTHQUAKE,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STONJOURNER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SOLIDROCK
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_STONE_EDGE,
			MOVE_HEAT_CRASH,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STONJOURNER,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_POWERSPOT
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_WIDE_GUARD,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EISCUE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ICEFACE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_HEAD_SMASH,
			MOVE_BELLY_DRUM,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EISCUE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ICEFACE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_HEAD_SMASH,
			MOVE_LIQUIDATION,
			MOVE_PSYCHIC_FANGS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EISCUE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ICEFACE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_LIQUIDATION,
			MOVE_HAIL,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_EISCUE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ICEFACE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ICY_WIND,
			MOVE_WHIRLPOOL,
			MOVE_HAIL,
			MOVE_AURORA_VEIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INDEEDEE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_MYSTICAL_FIRE,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INDEEDEE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_MYSTICAL_FIRE,
			MOVE_ENERGY_BALL,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
	},
	{
		.species = SPECIES_INDEEDEE_F,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_MYSTICAL_FIRE,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_HEALING_WISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_INDEEDEE_F,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PSYCHICSURGE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_FOLLOW_ME,
			MOVE_HELPING_HAND,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MORPEKO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HUNGERSWITCH
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_AURA_WHEEL,
			MOVE_CRUNCH,
			MOVE_ICE_FANG,
			MOVE_PSYCHIC_FANGS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MORPEKO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HUNGERSWITCH
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_DARK_PULSE,
			MOVE_NASTY_PLOT,
			MOVE_AGILITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MORPEKO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 8,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HUNGERSWITCH
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AURA_WHEEL,
			MOVE_FAKE_OUT,
			MOVE_RAPID_SPIN,
			MOVE_PARTING_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MORPEKO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HUNGERSWITCH
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_AURA_WHEEL,
			MOVE_ELECTROWEB,
			MOVE_PARTING_SHOT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COPPERAJAH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 156,
		.atkEv = 100,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HEAVYMETAL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_POWER_WHIP,
			MOVE_HEAT_CRASH,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COPPERAJAH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HEAVYMETAL
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_POWER_WHIP,
			MOVE_SUPERPOWER,
			MOVE_STONE_EDGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COPPERAJAH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_POWER_WHIP,
			MOVE_PLAY_ROUGH,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_COPPERAJAH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HEAVYMETAL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEAVY_SLAM,
			MOVE_HEAT_CRASH,
			MOVE_EARTHQUAKE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRACOZOLT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_BLUNDER_POLICY,
		.moves =
		{
			MOVE_BOLT_BEAK,
			MOVE_DRAGON_CLAW,
			MOVE_EARTHQUAKE,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRACOZOLT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDRUSH
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_DISCHARGE,
			MOVE_FIRE_BLAST,
			MOVE_METEOR_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRACOZOLT,
		.nature = NATURE_LONELY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 184,
		.spAtkEv = 140,
		.spdEv = 184,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SANDRUSH
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_BOLT_BEAK,
			MOVE_FIRE_SPIN,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRACOZOLT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_BLUNDER_POLICY,
		.moves =
		{
			MOVE_BOLT_BEAK,
			MOVE_BREAKING_SWIPE,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLUSHRUSH
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_BOLT_BEAK,
			MOVE_ICICLE_CRASH,
			MOVE_STONE_EDGE,
			MOVE_LOW_KICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STATIC
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
			MOVE_SURF,
			MOVE_HYPER_VOICE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLUSHRUSH
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_BOLT_BEAK,
			MOVE_STOMPING_TANTRUM,
			MOVE_HAIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCTOZOLT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLUSHRUSH
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BOLT_BEAK,
			MOVE_ICICLE_CRASH,
			MOVE_BULLDOZE,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRACOVISH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_FISHIOUS_REND,
			MOVE_PSYCHIC_FANGS,
			MOVE_CRUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRACOVISH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FISHIOUS_REND,
			MOVE_PSYCHIC_FANGS,
			MOVE_ROCK_SLIDE,
			MOVE_ICE_FANG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRACOVISH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_BLUNDER_POLICY,
		.moves =
		{
			MOVE_FISHIOUS_REND,
			MOVE_DRAGON_RUSH,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRACOVISH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STRONGJAW
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FISHIOUS_REND,
			MOVE_ICE_FANG,
			MOVE_LEECH_LIFE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCTOVISH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLUSHRUSH
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_FISHIOUS_REND,
			MOVE_ICICLE_CRASH,
			MOVE_PSYCHIC_FANGS,
			MOVE_STONE_EDGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCTOVISH,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_ICE_BEAM,
			MOVE_METEOR_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCTOVISH,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 236,
		.spAtkEv = 40,
		.spdEv = 232,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SLUSHRUSH
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FISHIOUS_REND,
			MOVE_ICICLE_CRASH,
			MOVE_FREEZE_DRY,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCTOVISH,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ICEBODY
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICY_WIND,
			MOVE_AURORA_VEIL,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DURALUDON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HEAVYMETAL
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_HEAVY_SLAM,
			MOVE_BODY_PRESS,
			MOVE_BREAKING_SWIPE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DURALUDON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LIGHTMETAL
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_STEEL_BEAM,
			MOVE_DRACO_METEOR,
			MOVE_THUNDERBOLT,
			MOVE_DARK_PULSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DURALUDON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 80,
		.spAtkEv = 252,
		.spdEv = 176,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LIGHTMETAL
		.item = ITEM_BLUNDER_POLICY,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_FLASH_CANNON,
			MOVE_THUNDER,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DURALUDON,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STALWART
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_STEEL_BEAM,
			MOVE_DRACO_METEOR,
			MOVE_THUNDERBOLT,
			MOVE_DARK_PULSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_SHADOW_BALL,
			MOVE_FLAMETHROWER,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_DRAGON_GEM,
		.moves =
		{
			MOVE_PHANTOM_FORCE,
			MOVE_DRAGON_DARTS,
			MOVE_ACROBATICS,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_INFILTRATOR
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_HEX,
			MOVE_U_TURN,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DRAGAPULT,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_BREAKING_SWIPE,
			MOVE_WILL_O_WISP,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIELEKI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRANSISTOR
		.item = ITEM_MAGNET,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_VOLT_SWITCH,
			MOVE_SIGNAL_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIELEKI,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 244,
		.spAtkEv = 252,
		.spdEv = 12,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRANSISTOR
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_VOLT_SWITCH,
			MOVE_ELECTRO_BALL,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIELEKI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRANSISTOR
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_VOLT_SWITCH,
			MOVE_EXPLOSION,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIELEKI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TRANSISTOR
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ELECTROWEB,
			MOVE_EXPLOSION,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIDRAGO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRAGONSMAW
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_THUNDER_FANG,
			MOVE_FIRE_FANG,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIDRAGO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRAGONSMAW
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DRAGON_ENERGY,
			MOVE_DRACO_METEOR,
			MOVE_DRAGON_PULSE,
			MOVE_HYPER_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIDRAGO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRAGONSMAW
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DRAGON_ENERGY,
			MOVE_DRACO_METEOR,
			MOVE_DRAGON_PULSE,
			MOVE_HYPER_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIDRAGO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRAGONSMAW
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_THUNDER_FANG,
			MOVE_DRAGON_DANCE,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIDRAGO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRAGONSMAW
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DRAGON_ENERGY,
			MOVE_DRAGON_PULSE,
			MOVE_HYPER_BEAM,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_REGIDRAGO,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRAGONSMAW
		.item = ITEM_IRON_BALL,
		.moves =
		{
			MOVE_DRAGON_ENERGY,
			MOVE_DRAGON_PULSE,
			MOVE_ANCIENTPOWER,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_RAPIDASH_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PASTELVEIL
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_PSYSHIELD_BASH,
			MOVE_HIGH_HORSEPOWER,
			MOVE_LOW_KICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAPIDASH_GALAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PASTELVEIL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_DAZZLING_GLEAM,
			MOVE_MYSTICAL_FIRE,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAPIDASH_GALAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PASTELVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_MYSTICAL_FIRE,
			MOVE_CALM_MIND,
			MOVE_MORNING_SUN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAPIDASH_GALAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_PASTELVEIL
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_DAZZLING_GLEAM,
			MOVE_MYSTICAL_FIRE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWBRO_GALAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_QUICKDRAW
		.item = ITEM_QUICK_CLAW,
		.moves =
		{
			MOVE_SHELL_SIDE_ARM,
			MOVE_ZEN_HEADBUTT,
			MOVE_DRAIN_PUNCH,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWBRO_GALAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.spAtkEv = 252,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_SHELL_SIDE_ARM,
			MOVE_FLAMETHROWER,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING_GALAR,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FUTURE_SIGHT,
			MOVE_SLUDGE_BOMB,
			MOVE_EARTHQUAKE,
			MOVE_FLAMETHROWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWBRO_GALAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_SLUDGE_BOMB,
			MOVE_SCALD,
			MOVE_PROTECT,
			MOVE_SLACK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING_GALAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_FLAMETHROWER,
			MOVE_CALM_MIND,
			MOVE_SLACK_OFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING_GALAR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 12,
		.spAtkEv = 124,
		.spDefEv = 120,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_FUTURE_SIGHT,
			MOVE_SLUDGE_BOMB,
			MOVE_FLAMETHROWER,
			MOVE_SCALD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING_GALAR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_EERIE_SPELL,
			MOVE_HEX,
			MOVE_TRICK,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SLOWKING_GALAR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_EERIE_SPELL,
			MOVE_TOXIC,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEEZING_GALAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MISTYSURGE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_MISTY_EXPLOSION,
			MOVE_SLUDGE_WAVE,
			MOVE_STRANGE_STEAM,
			MOVE_FLAMETHROWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEEZING_GALAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NEUTRALIZINGGAS
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_SLUDGE_BOMB,
			MOVE_STRANGE_STEAM,
			MOVE_WILL_O_WISP,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEEZING_GALAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 16,
		.spAtkEv = 112,
		.spDefEv = 84,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NEUTRALIZINGGAS
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_SLUDGE_BOMB,
			MOVE_TOXIC_SPIKES,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WEEZING_GALAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 16,
		.spAtkEv = 112,
		.spDefEv = 84,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_2, //ABILITY_NEUTRALIZINGGAS
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_SLUDGE_BOMB,
			MOVE_TOXIC_SPIKES,
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARTICUNO_GALAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPETITIVE
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_FREEZING_GLARE,
			MOVE_AIR_SLASH,
			MOVE_SHADOW_BALL,
			MOVE_AGILITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARTICUNO_GALAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPETITIVE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_FUTURE_SIGHT,
			MOVE_HURRICANE,
			MOVE_U_TURN,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARTICUNO_GALAR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 252,
		.spAtkEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPETITIVE
		.item = ITEM_PSYCHIC_GEM,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_CALM_MIND,
			MOVE_AGILITY,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARTICUNO_GALAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_COMPETITIVE
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_HYPER_VOICE,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAPDOS_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFIANT
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_CLOSE_COMBAT,
			MOVE_THUNDEROUS_KICK,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAPDOS_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFIANT
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_BRAVE_BIRD,
			MOVE_CLOSE_COMBAT,
			MOVE_THROAT_CHOP,
			MOVE_STOMPING_TANTRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAPDOS_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFIANT
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_BRAVE_BIRD,
			MOVE_BLAZE_KICK,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAPDOS_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DEFIANT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_DUAL_WINGBEAT,
			MOVE_COACHING,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOLTRES_GALAR,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BERSERK
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_FIERY_WRATH,
			MOVE_NASTY_PLOT,
			MOVE_AGILITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOLTRES_GALAR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.spDefEv = 116,
		.spdEv = 144,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BERSERK
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_FIERY_WRATH,
			MOVE_NASTY_PLOT,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOLTRES_GALAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BERSERK
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FIERY_WRATH,
			MOVE_AIR_SLASH,
			MOVE_SUBSTITUTE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MOLTRES_GALAR,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BERSERK
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FIERY_WRATH,
			MOVE_AIR_SLASH,
			MOVE_TAUNT,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORSOLA_GALAR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CURSEDBODY
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_NIGHT_SHADE,
			MOVE_WILL_O_WISP,
			MOVE_STRENGTH_SAP,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORSOLA_GALAR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CURSEDBODY
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_NIGHT_SHADE,
			MOVE_WHIRLPOOL,
			MOVE_WILL_O_WISP,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CORSOLA_GALAR,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CURSEDBODY
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_NIGHT_SHADE,
			MOVE_PROTECT,
			MOVE_WILL_O_WISP,
			MOVE_STRENGTH_SAP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN_GALAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GORILLATACTICS
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_FLARE_BLITZ,
			MOVE_ROCK_SLIDE,
			MOVE_SUPERPOWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GORILLATACTICS
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_FLARE_BLITZ,
			MOVE_ROCK_SLIDE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ZENMODE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_EARTHQUAKE,
			MOVE_BELLY_DRUM,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN_GALAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ZENMODE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_FIRE_PUNCH,
			MOVE_REVERSAL,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GORILLATACTICS
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_FLARE_BLITZ,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARMANITAN_GALAR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ZENMODE
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_FLARE_BLITZ,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STUNFISK_GALAR,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MIMICRY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_STONE_EDGE,
			MOVE_STEALTH_ROCK,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STUNFISK_GALAR,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MIMICRY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_SNAP_TRAP,
			MOVE_PAIN_SPLIT,
			MOVE_YAWN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_STUNFISK_GALAR,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MIMICRY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
			MOVE_CURSE,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},

	//Hisui
	{
		.species = SPECIES_WYRDEER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 6,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_PSYSHIELD_BASH,
			MOVE_EARTHQUAKE,
			MOVE_MEGAHORN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WYRDEER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SCRAPPY
		.item = ITEM_SHED_SHELL,
		.moves =
		{
			MOVE_RETURN,
			MOVE_PSYSHIELD_BASH,
			MOVE_EARTHQUAKE,
			MOVE_NO_RETREAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WYRDEER,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_UPROAR,
			MOVE_PSYCHIC,
			MOVE_SHADOW_BALL,
			MOVE_NO_RETREAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_WYRDEER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_BODY_SLAM,
			MOVE_THUNDER_WAVE,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULEGION_M,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ADAPTABILITY
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_WAVE_CRASH,
			MOVE_POLTERGEIST,
			MOVE_FLIP_TURN,
			MOVE_HEAD_SMASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULEGION_M,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_RATTLED
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_WATERFALL,
			MOVE_REVERSAL,
			MOVE_FLAIL,
			MOVE_SCALE_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULEGION_F,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 6,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOLDBREAKER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEX,
			MOVE_TOXIC,
			MOVE_PAIN_SPLIT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULEGION_M,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_ADAPTABILITY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_WAVE_CRASH,
			MOVE_POLTERGEIST,
			MOVE_HEAD_SMASH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BASCULEGION_F,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MOLDBREAKER
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_SHADOW_BALL,
			MOVE_ICY_WIND,
			MOVE_FINAL_GAMBIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_STONE_AXE,
			MOVE_LUNGE,
			MOVE_CLOSE_COMBAT,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_STONE_AXE,
			MOVE_LUNGE,
			MOVE_CLOSE_COMBAT,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SWARM
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_STONE_AXE,
			MOVE_LUNGE,
			MOVE_REVERSAL,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEADFAST
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_CALM_MIND,
			MOVE_AGILITY,
			MOVE_ROOST,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KLEAVOR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ROCK_SLIDE,
			MOVE_KNOCK_OFF,
			MOVE_FEINT,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCANINE_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_RAGING_FURY,
			MOVE_STONE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_PLAY_ROUGH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCANINE_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_RAGING_FURY,
			MOVE_STONE_EDGE,
			MOVE_CLOSE_COMBAT,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCANINE_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BURN_UP,
			MOVE_MORNING_SUN,
			MOVE_WILL_O_WISP,
			MOVE_TELEPORT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ARCANINE_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ROCKIUM_Z,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_ROCK_SLIDE,
			MOVE_CLOSE_COMBAT,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRAVIARY_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_AIR_SLASH,
			MOVE_PSYCHIC,
			MOVE_HEAT_WAVE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRAVIARY_HISUI,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 1,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_ZOOM_LENS,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_ESPER_WING,
			MOVE_HEAT_WAVE,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRAVIARY_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_PSYCHIC,
			MOVE_HEAT_WAVE,
			MOVE_AGILITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_BRAVIARY_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPETITIVE
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_HURRICANE,
			MOVE_ESPER_WING,
			MOVE_HEAT_WAVE,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZOROARK_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ILLUSION
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_HYPER_VOICE,
			MOVE_FLAMETHROWER,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZOROARK_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ILLUSION
		.item = ITEM_THROAT_SPRAY,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_HYPER_VOICE,
			MOVE_FLAMETHROWER,
			MOVE_SLUDGE_BOMB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZOROARK_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ILLUSION
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_RETURN,
			MOVE_LOW_KICK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZOROARK_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ILLUSION
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_BITTER_MALICE,
			MOVE_HYPER_VOICE,
			MOVE_BURNING_JEALOUSY,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTRODE_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AFTERMATH
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_CHLOROBLAST,
			MOVE_ELECTRO_BALL,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTRODE_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOUNDPROOF
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_VOLT_SWITCH,
			MOVE_EXPLOSION,
			MOVE_THUNDER_WAVE,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTRODE_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AFTERMATH
		.item = ITEM_MENTAL_HERB,
		.moves =
		{
			MOVE_VOLT_SWITCH,
			MOVE_THUNDER_WAVE,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ELECTRODE_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STATIC
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_EXPLOSION,
			MOVE_TAUNT,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSALUNA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_2, //ABILITY_BULLETPROOF
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_DOUBLE_EDGE,
			MOVE_HEADLONG_RUSH,
			MOVE_PLAY_ROUGH,
			MOVE_HAMMER_ARM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSALUNA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 6,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_HEADLONG_RUSH,
			MOVE_ICE_PUNCH,
			MOVE_GUNK_SHOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSALUNA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.atkEv = 10,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_BULLETPROOF
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_EARTHQUAKE,
			MOVE_SLEEP_TALK,
			MOVE_REST,
			MOVE_BELLY_DRUM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSALUNA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_FLAME_ORB,
		.moves =
		{
			MOVE_FACADE,
			MOVE_HEADLONG_RUSH,
			MOVE_HAMMER_ARM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONTOUCH
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_GUNK_SHOT,
			MOVE_SHADOW_CLAW,
			MOVE_PURSUIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONTOUCH
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_POISON_JAB,
			MOVE_KNOCK_OFF,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONTOUCH
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_GUNK_SHOT,
			MOVE_DIG,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SNEASLER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONTOUCH
		.item = ITEM_NORMAL_GEM,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_FEINT,
			MOVE_COACHING,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOODRA_HISUI,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GOOEY
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_HYDRO_PUMP,
			MOVE_FIRE_BLAST,
			MOVE_THUNDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOODRA_HISUI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_2, //ABILITY_OVERCOAT
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_IRON_DEFENSE,
			MOVE_LIFE_DEW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOODRA_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GOOEY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_EARTHQUAKE,
			MOVE_POWER_WHIP,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GOODRA_HISUI,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 6,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GOOEY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BREAKING_SWIPE,
			MOVE_COUNTER,
			MOVE_LIFE_DEW,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_QWILFISH_HISUI,
		.nature = 0,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 6,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_THUNDER_WAVE,
			MOVE_TOXIC_SPIKES,
			MOVE_SPIKES,
			MOVE_HAZE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OVERQWIL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SWIFTSWIM
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_THROAT_CHOP,
			MOVE_BARB_BARRAGE,
			MOVE_LIQUIDATION,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OVERQWIL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_BUG_GEM,
		.moves =
		{
			MOVE_THROAT_CHOP,
			MOVE_BARB_BARRAGE,
			MOVE_LIQUIDATION,
			MOVE_FELL_STINGER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_OVERQWIL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 6,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTIMIDATE
		.item = ITEM_RED_CARD,
		.moves =
		{
			MOVE_AQUA_JET,
			MOVE_THUNDER_WAVE,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_DRAIN_PUNCH,
			MOVE_POISON_JAB,
			MOVE_VICTORY_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_CLOSE_COMBAT,
			MOVE_SLEEP_POWDER,
			MOVE_VICTORY_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_CLOSE_COMBAT,
			MOVE_HEALING_WISH,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LILLIGANT_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_HUSTLE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_ENCORE,
			MOVE_TEETER_DANCE,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AVALUGG_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 6,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STRONGJAW
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_MOUNTAIN_GALE,
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_CRUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AVALUGG_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 6,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_MOUNTAIN_GALE,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_CURSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AVALUGG_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 6,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOUNTAIN_GALE,
			MOVE_BODY_PRESS,
			MOVE_GYRO_BALL,
			MOVE_MIRROR_COAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_AVALUGG_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 6,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STURDY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICE_SHARD,
			MOVE_ROCK_SLIDE,
			MOVE_EARTHQUAKE,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DECIDUEYE_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LONGREACH
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_TRIPLE_ARROWS,
			MOVE_BRAVE_BIRD,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DECIDUEYE_HISUI,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERGROW
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_AURA_SPHERE,
			MOVE_HURRICANE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DECIDUEYE_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LONGREACH
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_TRIPLE_ARROWS,
			MOVE_SUCKER_PUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DECIDUEYE_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LONGREACH
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LEAF_BLADE,
			MOVE_BRICK_BREAK,
			MOVE_BRAVE_BIRD,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYPHLOSION_HISUI,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLASHFIRE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_INFERNAL_PARADE,
			MOVE_FIRE_BLAST,
			MOVE_EXTRASENSORY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYPHLOSION_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLASHFIRE
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_BURN_UP,
			MOVE_INFERNAL_PARADE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_WILL_O_WISP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYPHLOSION_HISUI,
		.nature = NATURE_MILD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BLAZE
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_INFERNAL_PARADE,
			MOVE_REVERSAL,
			MOVE_ENDURE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_TYPHLOSION_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLASHFIRE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_BURNING_JEALOUSY,
			MOVE_INFERNAL_PARADE,
			MOVE_FOCUS_BLAST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAMUROTT_HISUI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_DARK_PULSE,
			MOVE_SECRET_SWORD,
			MOVE_AIR_SLASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAMUROTT_HISUI,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_CEASELESS_EDGE,
			MOVE_MEGAHORN,
			MOVE_SACRED_SWORD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAMUROTT_HISUI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TORRENT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_CEASELESS_EDGE,
			MOVE_MEGAHORN,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SAMUROTT_HISUI,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SHELLARMOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_ENCORE,
			MOVE_HELPING_HAND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ENAMORUS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CONTRARY
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_FLY,
			MOVE_SUPERPOWER,
			MOVE_HAMMER_ARM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ENAMORUS,
		.nature = NATURE_TIMID,
		.hpIv = 30,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HEALER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SPRINGTIDE_STORM,
			MOVE_HIDDEN_POWER, //TYPE_FLYING
			MOVE_EARTH_POWER,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ENAMORUS_THERIAN,
		.nature = NATURE_MODEST,
		.hpIv = 30,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERCOAT
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_HIDDEN_POWER, //TYPE_FLYING
			MOVE_EARTH_POWER,
			MOVE_MYSTICAL_FIRE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ENAMORUS_THERIAN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 6,
		.ability = FRONTIER_ABILITY_1, //ABILITY_OVERCOAT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_EARTH_POWER,
			MOVE_MYSTICAL_FIRE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
};

const struct BattleTowerSpread gFrontierLegendarySpreads[] =
{
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PSYSTRIKE,
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_AURA_SPHERE,
			MOVE_SHADOW_BALL,
			MOVE_PSYCHIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_MEWTWONITE_X,
		.moves =
		{
			MOVE_ZEN_HEADBUTT,
			MOVE_POWER_UP_PUNCH,
			MOVE_STONE_EDGE,
			MOVE_FIRE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_MEWTWONITE_X,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_ZEN_HEADBUTT,
			MOVE_FOUL_PLAY,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_MEWTWONITE_X,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_ROCK_SLIDE,
			MOVE_HEAL_PULSE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_MEWTWONITE_Y,
		.moves =
		{
			MOVE_PSYSTRIKE,
			MOVE_THUNDERBOLT,
			MOVE_AURA_SPHERE,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_MEWTWONITE_Y,
		.moves =
		{
			MOVE_PSYSTRIKE,
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_MEWTWONITE_Y,
		.moves =
		{
			MOVE_PSYSTRIKE,
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_UNNERVE
		.item = ITEM_MEWTWONITE_Y,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_AURA_SPHERE,
			MOVE_SHADOW_BALL,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_MEWNIUM_Z,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_EXPANDING_FORCE,
			MOVE_AURA_SPHERE,
			MOVE_SHADOW_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_PSYCHIC_FANGS,
			MOVE_CLOSE_COMBAT,
			MOVE_POLTERGEIST,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_THUNDER_WAVE,
			MOVE_BARRIER,
			MOVE_NASTY_PLOT,
			MOVE_BATON_PASS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_BARRIER,
			MOVE_AMNESIA,
			MOVE_SOFTBOILED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_FAKE_OUT,
			MOVE_STEALTH_ROCK,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SYNCHRONIZE
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_ENCORE,
			MOVE_PSYCHIC_TERRAIN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MEW,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MAGICGUARD
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_BURNING_JEALOUSY,
			MOVE_SNARL,
			MOVE_ELECTROWEB,
			MOVE_POLLEN_PUFF,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUGIA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_AEROBLAST,
			MOVE_EARTH_POWER,
			MOVE_CALM_MIND,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUGIA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DUAL_WINGBEAT,
			MOVE_ZEN_HEADBUTT,
			MOVE_EARTHQUAKE,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUGIA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 160,
		.spdEv = 96,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_ROOST,
			MOVE_REFLECT,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUGIA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_WHIRLWIND,
			MOVE_TOXIC,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUGIA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MULTISCALE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AEROBLAST,
			MOVE_ICY_WIND,
			MOVE_CALM_MIND,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_SACRED_FIRE,
			MOVE_BRAVE_BIRD,
			MOVE_EARTHQUAKE,
			MOVE_ZEN_HEADBUTT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 104,
		.atkEv = 252,
		.spdEv = 152,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_SACRED_FIRE,
			MOVE_BRAVE_BIRD,
			MOVE_SUBSTITUTE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_BRAVE_BIRD,
			MOVE_EARTHQUAKE,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 240,
		.defEv = 204,
		.spDefEv = 68,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_HEAVY_DUTY_BOOTS,
		.moves =
		{
			MOVE_SACRED_FIRE,
			MOVE_TOXIC,
			MOVE_DEFOG,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HO_OH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_SACRED_FIRE,
			MOVE_BRAVE_BIRD,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELEBI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_GRASSIUM_Z,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_PSYCHIC,
			MOVE_EARTH_POWER,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELEBI,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_THUNDER_WAVE,
			MOVE_STEALTH_ROCK,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELEBI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_GIGA_DRAIN,
			MOVE_U_TURN,
			MOVE_LEECH_SEED,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELEBI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ZEN_HEADBUTT,
			MOVE_LEAF_BLADE,
			MOVE_SUCKER_PUNCH,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELEBI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_SHADOW_BALL,
			MOVE_AURA_SPHERE,
			MOVE_PSYCHIC_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CELEBI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_POLLEN_PUFF,
			MOVE_DAZZLING_GLEAM,
			MOVE_HELPING_HAND,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 84,
		.spAtkEv = 252,
		.spdEv = 172,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRIZZLE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_WATER_SPOUT,
			MOVE_SCALD,
			MOVE_ICE_BEAM,
			MOVE_THUNDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_NAUGHTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 32,
		.atkEv = 252,
		.defEv = 64,
		.spdEv = 160,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRIZZLE
		.item = ITEM_BLUE_ORB,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_EARTHQUAKE,
			MOVE_THUNDER,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRIZZLE
		.item = ITEM_BLUE_ORB,
		.moves =
		{
			MOVE_ORIGIN_PULSE,
			MOVE_THUNDER,
			MOVE_ICE_BEAM,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRIZZLE
		.item = ITEM_BLUE_ORB,
		.moves =
		{
			MOVE_WATER_SPOUT,
			MOVE_SCALD,
			MOVE_ICE_BEAM,
			MOVE_THUNDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 248,
		.defEv = 236,
		.spDefEv = 24,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRIZZLE
		.item = ITEM_BLUE_ORB,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYOGRE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DRIZZLE
		.item = ITEM_BLUE_ORB,
		.moves =
		{
			MOVE_ORIGIN_PULSE,
			MOVE_ICE_BEAM,
			MOVE_THUNDER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DROUGHT
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_PRECIPICE_BLADES,
			MOVE_HEAT_CRASH,
			MOVE_STONE_EDGE,
			MOVE_HAMMER_ARM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 144,
		.atkEv = 156,
		.spDefEv = 56,
		.spdEv = 152,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DROUGHT
		.item = ITEM_RED_ORB,
		.moves =
		{
			MOVE_PRECIPICE_BLADES,
			MOVE_ROCK_TOMB,
			MOVE_STEALTH_ROCK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_MILD,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 100,
		.spdEv = 156,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DROUGHT
		.item = ITEM_RED_ORB,
		.moves =
		{
			MOVE_PRECIPICE_BLADES,
			MOVE_FIRE_BLAST,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DROUGHT
		.item = ITEM_RED_ORB,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_PRECIPICE_BLADES,
			MOVE_SOLAR_BEAM,
			MOVE_HEAT_CRASH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DROUGHT
		.item = ITEM_RED_ORB,
		.moves =
		{
			MOVE_PRECIPICE_BLADES,
			MOVE_HEAT_CRASH,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GROUDON,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DROUGHT
		.item = ITEM_RED_ORB,
		.moves =
		{
			MOVE_PRECIPICE_BLADES,
			MOVE_HEAT_CRASH,
			MOVE_SWORDS_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AIRLOCK
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_DRAGON_ASCENT,
			MOVE_EARTHQUAKE,
			MOVE_IRON_HEAD,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AIRLOCK
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_DRAGON_ASCENT,
			MOVE_EARTHQUAKE,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AIRLOCK
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_DRAGON_ASCENT,
			MOVE_HYDRO_PUMP,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AIRLOCK
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_DRAGON_ASCENT,
			MOVE_V_CREATE,
			MOVE_EXTREMESPEED,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AIRLOCK
		.item = ITEM_FIGY_BERRY,
		.moves =
		{
			MOVE_DRAGON_ASCENT,
			MOVE_EXTREMESPEED,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RAYQUAZA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AIRLOCK
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DRAGON_PULSE,
			MOVE_HURRICANE,
			MOVE_HYDRO_PUMP,
			MOVE_THUNDER,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_JIRACHI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_FIRE_PUNCH,
			MOVE_U_TURN,
			MOVE_HEALING_WISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JIRACHI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SUPERLUCK
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_STORED_POWER,
			MOVE_FLASH_CANNON,
			MOVE_THUNDERBOLT,
			MOVE_HAPPY_HOUR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JIRACHI,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_DOOM_DESIRE,
			MOVE_MIST_BALL,
			MOVE_AURA_SPHERE,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JIRACHI,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_METEOR_MASH,
			MOVE_BODY_SLAM,
			MOVE_WISH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JIRACHI,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_FOLLOW_ME,
			MOVE_TRICK_ROOM,
			MOVE_GRAVITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_JIRACHI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TRACE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_AURA_SPHERE,
			MOVE_FLASH_CANNON,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DEOXYS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIMBER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EXTREMESPEED,
			MOVE_TAUNT,
			MOVE_MIRROR_COAT,
			MOVE_COUNTER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEOXYS_ATTACK,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIMBER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_PSYCHO_BOOST,
			MOVE_SUPERPOWER,
			MOVE_ICE_BEAM,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEOXYS_ATTACK,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIMBER
		.item = ITEM_PSYCHIUM_Z,
		.moves =
		{
			MOVE_PSYCHO_BOOST,
			MOVE_SUPERPOWER,
			MOVE_EXTREMESPEED,
			MOVE_DETECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEOXYS_ATTACK,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIMBER
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_SUPERPOWER,
			MOVE_SHADOW_BALL,
			MOVE_DETECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_DEOXYS_DEFENSE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_SHELL_BELL,
		.moves =
		{
			MOVE_PSYSHOCK,
			MOVE_FOCUS_BLAST,
			MOVE_SHADOW_BALL,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEOXYS_DEFENSE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_TOXIC,
			MOVE_TAUNT,
			MOVE_SPIKES,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DEOXYS_SPEED,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_TAUNT,
			MOVE_MAGIC_COAT,
			MOVE_SPIKES,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 104,
		.spAtkEv = 252,
		.spdEv = 152,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_ROAR_OF_TIME,
			MOVE_FIRE_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_FLASH_CANNON,
			MOVE_CLANGING_SCALES,
			MOVE_EARTH_POWER,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_BODY_PRESS,
			MOVE_TOXIC,
			MOVE_IRON_DEFENSE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIALGA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 244,
		.spDefEv = 252,
		.spdEv = 12,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLASH_CANNON,
			MOVE_DRACO_METEOR,
			MOVE_ROAR,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIALGA_ORIGIN,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_ADAMANT_ORB,
		.moves =
		{
			MOVE_FLASH_CANNON,
			MOVE_CLANGING_SCALES,
			MOVE_AURA_SPHERE,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALKIA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_ORIGIN_PULSE,
			MOVE_SPACIAL_REND,
			MOVE_THUNDER,
			MOVE_FIRE_BLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALKIA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_ORIGIN_PULSE,
			MOVE_SPACIAL_REND,
			MOVE_EARTH_POWER,
			MOVE_FLAMETHROWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALKIA,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_SPACIAL_REND,
			MOVE_POWER_GEM,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALKIA_ORIGIN,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LUSTROUS_ORB,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_SPACIAL_REND,
			MOVE_THUNDER,
			MOVE_DRACO_METEOR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PALKIA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_BREAKING_SWIPE,
			MOVE_LIQUIDATION,
			MOVE_ROCK_SLIDE,
			MOVE_BULLDOZE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIRATINA_ORIGIN,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_GRISEOUS_ORB,
		.moves =
		{
			MOVE_POLTERGEIST,
			MOVE_DRAGON_CLAW,
			MOVE_EARTHQUAKE,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIRATINA_ORIGIN,
		.nature = NATURE_LONELY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_GRISEOUS_ORB,
		.moves =
		{
			MOVE_SHADOW_FORCE,
			MOVE_DRACO_METEOR,
			MOVE_EARTHQUAKE,
			MOVE_SHADOW_SNEAK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIRATINA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAGON_PULSE,
			MOVE_SHADOW_BALL,
			MOVE_AURA_SPHERE,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIRATINA,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DRAGON_TAIL,
			MOVE_SLEEP_TALK,
			MOVE_TOXIC,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GIRATINA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_STONE_EDGE,
			MOVE_DESTINY_BOND,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANAPHY,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SOULHEART
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_SHADOW_BALL,
			MOVE_MOONBLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANAPHY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SOULHEART
		.item = ITEM_MAGO_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICE_BEAM,
			MOVE_MOONBLAST,
			MOVE_TAIL_GLOW,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANAPHY,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYDRATION
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_KNOCK_OFF,
			MOVE_FLIP_TURN,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANAPHY,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYDRATION
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_TOXIC,
			MOVE_REST,
			MOVE_RAIN_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANAPHY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SOULHEART
		.item = ITEM_SALAC_BERRY,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_TAKE_HEART,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANAPHY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SOULHEART
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_SURF,
			MOVE_DAZZLING_GLEAM,
			MOVE_ICE_BEAM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MANAPHY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYDRATION
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_SURF,
			MOVE_PSYCHIC,
			MOVE_TAIL_GLOW,
			MOVE_REST,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_PHIONE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_GRASS_KNOT,
			MOVE_MOONBLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHIONE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SCALD,
			MOVE_U_TURN,
			MOVE_ICY_WIND,
			MOVE_HEAL_BELL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHIONE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_SURF,
			MOVE_ICE_BEAM,
			MOVE_MOONBLAST,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHIONE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 248,
		.spdEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYDRATION
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_WHIRLPOOL,
			MOVE_TOXIC,
			MOVE_AQUA_RING,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_PHIONE,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_DRIZZLE
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_SCALD,
			MOVE_ICY_WIND,
			MOVE_PROTECT,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARKRAI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_ICE_BEAM,
			MOVE_SLUDGE_BOMB,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARKRAI,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INFILTRATOR
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_ICE_BEAM,
			MOVE_SLUDGE_BOMB,
			MOVE_PSYCHIC,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARKRAI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BADDREAMS
		.item = ITEM_WIDE_LENS,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_FOCUS_BLAST,
			MOVE_THUNDER,
			MOVE_DARK_VOID,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARKRAI,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BADDREAMS
		.item = ITEM_PSYCHIUM_Z,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_ICE_BEAM,
			MOVE_HYPNOSIS,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DARKRAI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BADDREAMS
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_DARK_VOID,
			MOVE_TAUNT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_EARTH_POWER,
			MOVE_AIR_SLASH,
			MOVE_SYNTHESIS,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLOWERVEIL
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_EARTH_POWER,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_CELEBRATE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_LEECH_SEED,
			MOVE_TOXIC,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_NATURALCURE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_GRASSY_GLIDE,
			MOVE_PLAY_ROUGH,
			MOVE_QUICK_ATTACK,
			MOVE_ENDEAVOR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLOWERVEIL
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_FLORAL_HEALING,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLOWERVEIL
		.item = ITEM_GRASSY_SEED,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_FLORAL_HEALING,
			MOVE_SYNTHESIS,
			MOVE_GRASSY_TERRAIN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN_SKY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_AIR_SLASH,
			MOVE_EARTH_POWER,
			MOVE_HEALING_WISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN_SKY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_AIR_SLASH,
			MOVE_EARTH_POWER,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN_SKY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_AIR_SLASH,
			MOVE_EARTH_POWER,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN_SKY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_AIR_SLASH,
			MOVE_LEECH_SEED,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SHAYMIN_SKY,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLOWERVEIL
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_SEED_FLARE,
			MOVE_AIR_SLASH,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTINI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VICTORYSTAR
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_SEARING_SHOT,
			MOVE_STORED_POWER,
			MOVE_FOCUS_BLAST,
			MOVE_CELEBRATE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTINI,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VICTORYSTAR
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_V_CREATE,
			MOVE_ZEN_HEADBUTT,
			MOVE_BOLT_STRIKE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTINI,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VICTORYSTAR
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_BLUE_FLARE,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_DAZZLING_GLEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTINI,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_SYNCHRONIZE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SEARING_SHOT,
			MOVE_U_TURN,
			MOVE_LIGHT_SCREEN,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VICTINI,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VICTORYSTAR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_V_CREATE,
			MOVE_PSYCHIC,
			MOVE_BOLT_STRIKE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RESHIRAM,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TURBOBLAZE
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_BLUE_FLARE,
			MOVE_EARTH_POWER,
			MOVE_FOCUS_BLAST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RESHIRAM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TURBOBLAZE
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_FLARE_BLITZ,
			MOVE_STONE_EDGE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RESHIRAM,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TURBOBLAZE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SCALE_SHOT,
			MOVE_BLUE_FLARE,
			MOVE_EARTH_POWER,
			MOVE_SHADOW_BALL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RESHIRAM,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FLASHFIRE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BLUE_FLARE,
			MOVE_TOXIC,
			MOVE_ROOST,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_RESHIRAM,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TURBOBLAZE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_DRACO_METEOR,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEKROM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_BOLT_STRIKE,
			MOVE_CRUNCH,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEKROM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_BOLT_STRIKE,
			MOVE_STONE_EDGE,
			MOVE_VOLT_SWITCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEKROM,
		.nature = NATURE_NAUGHTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SCALE_SHOT,
			MOVE_DRACO_METEOR,
			MOVE_BOLT_STRIKE,
			MOVE_CRUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEKROM,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_HABAN_BERRY,
		.moves =
		{
			MOVE_DRAGON_CLAW,
			MOVE_THUNDER_WAVE,
			MOVE_DEFOG,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEKROM,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BREAKING_SWIPE,
			MOVE_BOLT_STRIKE,
			MOVE_ROOST,
			MOVE_TAILWIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZEKROM,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_PETAYA_BERRY,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_DRACO_METEOR,
			MOVE_EARTH_POWER,
			MOVE_ROOST,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 30,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REFRIGERATE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_DRACO_METEOR,
			MOVE_HYPER_VOICE,
			MOVE_EARTH_POWER,
			MOVE_HIDDEN_POWER, //TYPE_FIRE
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REFRIGERATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RETURN,
			MOVE_DRAGON_CLAW,
			MOVE_IRON_HEAD,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_ROCKY_HELMET,
		.moves =
		{
			MOVE_GLACIATE,
			MOVE_BREAKING_SWIPE,
			MOVE_BODY_PRESS,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM_BLACK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_ICICLE_SPEAR,
			MOVE_OUTRAGE,
			MOVE_FUSION_BOLT,
			MOVE_IRON_HEAD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM_BLACK,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_FREEZE_SHOCK,
			MOVE_DRAGON_CLAW,
			MOVE_FUSION_BOLT,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM_BLACK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TERAVOLT
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ICICLE_SPEAR,
			MOVE_BREAKING_SWIPE,
			MOVE_FUSION_BOLT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM_WHITE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TURBOBLAZE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_DRACO_METEOR,
			MOVE_FUSION_FLARE,
			MOVE_EARTH_POWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM_WHITE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TURBOBLAZE
		.item = ITEM_WHITE_HERB,
		.moves =
		{
			MOVE_ICE_BEAM,
			MOVE_DRACO_METEOR,
			MOVE_FUSION_FLARE,
			MOVE_FREEZE_DRY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KYUREM_WHITE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TURBOBLAZE
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_GLACIATE,
			MOVE_DRACO_METEOR,
			MOVE_FUSION_FLARE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KELDEO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTREPIDSWORD
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_CLOSE_COMBAT,
			MOVE_POISON_JAB,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KELDEO_RESOLUTE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYDRO_PUMP,
			MOVE_SECRET_SWORD,
			MOVE_AURORA_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_GRASS
		},
		
		
		
		
	},
	{
		.species = SPECIES_KELDEO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_INTREPIDSWORD
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_LIQUIDATION,
			MOVE_CLOSE_COMBAT,
			MOVE_STONE_EDGE,
			MOVE_MEGAHORN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KELDEO_RESOLUTE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_SECRET_SWORD,
			MOVE_CALM_MIND,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_KELDEO,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_JUSTIFIED
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_MUDDY_WATER,
			MOVE_ICY_WIND,
			MOVE_COACHING,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MELOETTA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPETITIVE
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_PSYCHIC,
			MOVE_FOCUS_BLAST,
			MOVE_CELEBRATE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MELOETTA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_LUSTER_PURGE,
			MOVE_U_TURN,
			MOVE_THUNDER_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MELOETTA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPETITIVE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_RETURN,
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_RELIC_SONG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MELOETTA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SERENEGRACE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_LUSTER_PURGE,
			MOVE_SHADOW_BALL,
			MOVE_THUNDERBOLT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MELOETTA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_COMPETITIVE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_PSYCHIC,
			MOVE_SHADOW_BALL,
			MOVE_DAZZLING_GLEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GENESECT,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DOWNLOAD
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_IRON_HEAD,
			MOVE_EXTREMESPEED,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GENESECT,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DOWNLOAD
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_FLASH_CANNON,
			MOVE_FLAMETHROWER,
			MOVE_THUNDER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GENESECT,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_BURN_DRIVE,
		.moves =
		{
			MOVE_FLASH_CANNON,
			MOVE_TECHNO_BLAST,
			MOVE_THUNDERBOLT,
			MOVE_ICE_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GENESECT_DOUSE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_DOUSE_DRIVE,
		.moves =
		{
			MOVE_BUG_BUZZ,
			MOVE_FLASH_CANNON,
			MOVE_TECHNO_BLAST,
			MOVE_THUNDERBOLT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GENESECT,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DOWNLOAD
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_U_TURN,
			MOVE_FLASH_CANNON,
			MOVE_ICE_BEAM,
			MOVE_ELECTROWEB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PIXILATE
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_RETURN,
			MOVE_ZEN_HEADBUTT,
			MOVE_CLOSE_COMBAT,
			MOVE_HORN_LEECH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FAIRYAURA
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_THUNDERBOLT,
			MOVE_FOCUS_BLAST,
			MOVE_GEOMANCY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FAIRYAURA
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_PSYCHIC,
			MOVE_THUNDERBOLT,
			MOVE_CLOSE_COMBAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FAIRYAURA
		.item = ITEM_FAIRIUM_Z,
		.moves =
		{
			MOVE_DRAINING_KISS,
			MOVE_GEOMANCY,
			MOVE_INGRAIN,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_XERNEAS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PIXILATE
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_THUNDERBOLT,
			MOVE_GEOMANCY,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DARKAURA
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_DARK_PULSE,
			MOVE_OBLIVION_WING,
			MOVE_HEAT_WAVE,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AERILATE
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_RETURN,
			MOVE_DRAGON_RUSH,
			MOVE_ROCK_SLIDE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_AERILATE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_HYPER_VOICE,
			MOVE_DARK_PULSE,
			MOVE_HEAT_WAVE,
			MOVE_SUCKER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 72,
		.spdEv = 184,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DARKAURA
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FOUL_PLAY,
			MOVE_TOXIC,
			MOVE_TAUNT,
			MOVE_ROOST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_YVELTAL,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DARKAURA
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_SUCKER_PUNCH,
			MOVE_OBLIVION_WING,
			MOVE_SNARL,
			MOVE_HEAT_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZYGARDE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AURABREAK
		.item = ITEM_YACHE_BERRY,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_THOUSAND_ARROWS,
			MOVE_EXTREMESPEED,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZYGARDE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 76,
		.atkEv = 252,
		.spdEv = 180,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POWERCONSTRUCT
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_THOUSAND_ARROWS,
			MOVE_EXTREMESPEED,
			MOVE_DRAGON_DANCE,
			MOVE_GLARE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZYGARDE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POWERCONSTRUCT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_THOUSAND_WAVES,
			MOVE_BREAKING_SWIPE,
			MOVE_TOXIC,
			MOVE_COIL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZYGARDE,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POWERCONSTRUCT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_THOUSAND_ARROWS,
			MOVE_GLARE,
			MOVE_REST,
			MOVE_SLEEP_TALK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZYGARDE,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POWERCONSTRUCT
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CORE_ENFORCER,
			MOVE_THOUSAND_ARROWS,
			MOVE_EXTREMESPEED,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZYGARDE_10,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AURABREAK
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_THOUSAND_ARROWS,
			MOVE_IRON_TAIL,
			MOVE_EXTREMESPEED,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZYGARDE_10,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_AURABREAK
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_OUTRAGE,
			MOVE_THOUSAND_ARROWS,
			MOVE_EXTREMESPEED,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIANCIE,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DIAMOND_STORM,
			MOVE_MOONBLAST,
			MOVE_BODY_PRESS,
			MOVE_STEALTH_ROCK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIANCIE,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_DIANCITE,
		.moves =
		{
			MOVE_DIAMOND_STORM,
			MOVE_MOONBLAST,
			MOVE_EARTH_POWER,
			MOVE_MYSTICAL_FIRE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIANCIE,
		.nature = NATURE_RASH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 212,
		.spAtkEv = 252,
		.spdEv = 44,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_DIANCITE,
		.moves =
		{
			MOVE_DIAMOND_STORM,
			MOVE_MOONBLAST,
			MOVE_EARTH_POWER,
			MOVE_ROCK_POLISH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIANCIE,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_DIAMOND_STORM,
			MOVE_MOONBLAST,
			MOVE_STEALTH_ROCK,
			MOVE_HEAL_BELL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_DIANCIE,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 160,
		.spAtkEv = 96,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_DIAMOND_STORM,
			MOVE_DAZZLING_GLEAM,
			MOVE_TRICK_ROOM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_HYPERSPACE_HOLE,
			MOVE_SHADOW_BALL,
			MOVE_FOCUS_BLAST,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_FOCUS_BLAST,
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_DESTINY_BOND,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGICIAN
		.item = ITEM_PSYCHIC_GEM,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_HYPERSPACE_HOLE,
			MOVE_FOCUS_BLAST,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PRANKSTER
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_HYPERSPACE_HOLE,
			MOVE_THUNDERBOLT,
			MOVE_TRICK_ROOM,
			MOVE_DESTINY_BOND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGICIAN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_SHADOW_BALL,
			MOVE_FOCUS_BLAST,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA_UNBOUND,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_PORTALPOWER
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_ZEN_HEADBUTT,
			MOVE_HYPERSPACE_FURY,
			MOVE_GUNK_SHOT,
			MOVE_FIRE_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA_UNBOUND,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGICIAN
		.item = ITEM_ROOM_SERVICE,
		.moves =
		{
			MOVE_HYPERSPACE_HOLE,
			MOVE_DRAIN_PUNCH,
			MOVE_TOXIC,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA_UNBOUND,
		.nature = NATURE_HASTY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGICIAN
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_HYPERSPACE_HOLE,
			MOVE_HYPERSPACE_FURY,
			MOVE_GUNK_SHOT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_HOOPA_UNBOUND,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_MAGICIAN
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_DARK_PULSE,
			MOVE_FOCUS_BLAST,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_CUSTAP_BERRY,
		.moves =
		{
			MOVE_FLARE_BLITZ,
			MOVE_LIQUIDATION,
			MOVE_EARTHQUAKE,
			MOVE_EXPLOSION,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEAMENGINE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_FIRE_BLAST,
			MOVE_STEAM_ERUPTION,
			MOVE_STRANGE_STEAM,
			MOVE_EARTH_POWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEAMENGINE
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_STEAM_ERUPTION,
			MOVE_FLAMETHROWER,
			MOVE_SCORCHING_SANDS,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_STEAM_ERUPTION,
			MOVE_TOXIC,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STEAMENGINE
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_HEAT_WAVE,
			MOVE_STEAM_ERUPTION,
			MOVE_STRANGE_STEAM,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLGALEO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FULLMETALBODY
		.item = ITEM_SOLGANIUM_Z,
		.moves =
		{
			MOVE_SUNSTEEL_STRIKE,
			MOVE_ZEN_HEADBUTT,
			MOVE_WILD_CHARGE,
			MOVE_EARTHQUAKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLGALEO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FULLMETALBODY
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_SUNSTEEL_STRIKE,
			MOVE_FLARE_BLITZ,
			MOVE_EARTHQUAKE,
			MOVE_CLOSE_COMBAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLGALEO,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BATTLEARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SUNSTEEL_STRIKE,
			MOVE_TOXIC,
			MOVE_COSMIC_POWER,
			MOVE_MORNING_SUN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLGALEO,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_BATTLEARMOR
		.item = ITEM_BRIGHT_POWDER,
		.moves =
		{
			MOVE_METAL_BURST,
			MOVE_TOXIC,
			MOVE_SUBSTITUTE,
			MOVE_MORNING_SUN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SOLGALEO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FULLMETALBODY
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_SUNSTEEL_STRIKE,
			MOVE_EARTHQUAKE,
			MOVE_HEAT_CRASH,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNALA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LEVITATE
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_MOONGEIST_BEAM,
			MOVE_PSYCHIC,
			MOVE_MOONBLAST,
			MOVE_HEAT_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNALA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHADOWSHIELD
		.item = ITEM_LUNALIUM_Z,
		.moves =
		{
			MOVE_MOONGEIST_BEAM,
			MOVE_PSYSHOCK,
			MOVE_MOONBLAST,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNALA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHADOWSHIELD
		.item = ITEM_MACHO_BRACE,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_WILL_O_WISP,
			MOVE_TRICK,
			MOVE_DEFOG,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNALA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHADOWSHIELD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PHANTOM_FORCE,
			MOVE_TOXIC,
			MOVE_ROOST,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_LUNALA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SHADOWSHIELD
		.item = ITEM_COLBUR_BERRY,
		.moves =
		{
			MOVE_MOONGEIST_BEAM,
			MOVE_PSYSHOCK,
			MOVE_ROOST,
			MOVE_WIDE_GUARD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MIRRORARMOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_KNOCK_OFF,
			MOVE_TOXIC,
			MOVE_STEALTH_ROCK,
			MOVE_MOONLIGHT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_LUM_BERRY,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_EARTHQUAKE,
			MOVE_X_SCISSOR,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_HEAT_WAVE,
			MOVE_POWER_GEM,
			MOVE_CALM_MIND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MIRRORARMOR
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_HEAT_WAVE,
			MOVE_CALM_MIND,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_MIRRORARMOR
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_HEAT_WAVE,
			MOVE_DARK_PULSE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_SOLGANIUM_Z,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_SUNSTEEL_STRIKE,
			MOVE_EARTHQUAKE,
			MOVE_DRAGON_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_SUNSTEEL_STRIKE,
			MOVE_STONE_EDGE,
			MOVE_EARTHQUAKE,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_LUNALIUM_Z,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_MOONGEIST_BEAM,
			MOVE_POWER_GEM,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_MOONGEIST_BEAM,
			MOVE_HEAT_WAVE,
			MOVE_EARTH_POWER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_DRAGON_PULSE,
			MOVE_EARTH_POWER,
			MOVE_HEAT_WAVE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_SHADOW_CLAW,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DUSK_MANE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_PSYCHIC_FANGS,
			MOVE_OUTRAGE,
			MOVE_EARTHQUAKE,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_MOONGEIST_BEAM,
			MOVE_DRAGON_PULSE,
			MOVE_POWER_GEM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_PHOTON_GEYSER,
			MOVE_DRAGON_PULSE,
			MOVE_HEAT_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_NECROZMA_DAWN_WINGS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRISMARMOR
		.item = ITEM_ULTRANECROZIUM_Z,
		.moves =
		{
			MOVE_EXPANDING_FORCE,
			MOVE_MOONGEIST_BEAM,
			MOVE_HEAT_WAVE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOULHEART
		.item = ITEM_SHUCA_BERRY,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_BRICK_BREAK,
			MOVE_SPIRIT_BREAK,
			MOVE_SHIFT_GEAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOULHEART
		.item = ITEM_STEELIUM_Z,
		.moves =
		{
			MOVE_STEEL_BEAM,
			MOVE_DAZZLING_GLEAM,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
			MOVE_SHIFT_GEAR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOULHEART
		.item = ITEM_FAIRIUM_Z,
		.moves =
		{
			MOVE_FLEUR_CANNON,
			MOVE_AURA_SPHERE,
			MOVE_THUNDERBOLT,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_FLEUR_CANNON,
			MOVE_VOLT_SWITCH,
			MOVE_HEART_SWAP,
			MOVE_PAIN_SPLIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ANALYTIC
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SPIRIT_BREAK,
			MOVE_ELECTROWEB,
			MOVE_HELPING_HAND,
			MOVE_CRAFTY_SHIELD,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MAGEARNA,
		.nature = NATURE_QUIET,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 1,
		.hpEv = 252,
		.defEv = 4,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SOULHEART
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DAZZLING_GLEAM,
			MOVE_FLASH_CANNON,
			MOVE_ICE_BEAM,
			MOVE_HIDDEN_POWER, //TYPE_GROUND
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_POLTERGEIST,
			MOVE_SHADOW_SNEAK,
			MOVE_ROCK_TOMB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LONGREACH
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_SPECTRAL_THIEF,
			MOVE_STONE_EDGE,
			MOVE_PURSUIT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_MARSHADIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_SPECTRAL_THIEF,
			MOVE_SHADOW_SNEAK,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LONGREACH
		.item = ITEM_MARSHADIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_SPECTRAL_THIEF,
			MOVE_SUBSTITUTE,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MARSHADOW,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_TECHNICIAN
		.item = ITEM_FIGHTING_GEM,
		.moves =
		{
			MOVE_DRAIN_PUNCH,
			MOVE_THIEF,
			MOVE_COACHING,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZERAORA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_EJECT_PACK,
		.moves =
		{
			MOVE_PLASMA_FISTS,
			MOVE_CLOSE_COMBAT,
			MOVE_FIRE_PUNCH,
			MOVE_PLAY_ROUGH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZERAORA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_PLASMA_FISTS,
			MOVE_CLOSE_COMBAT,
			MOVE_KNOCK_OFF,
			MOVE_BLAZE_KICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZERAORA,
		.nature = NATURE_NAIVE,
		.hpIv = 31,
		.atkIv = 30,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_PLASMA_FISTS,
			MOVE_CLOSE_COMBAT,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_WORK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZERAORA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_EJECT_BUTTON,
		.moves =
		{
			MOVE_PLASMA_FISTS,
			MOVE_FAKE_OUT,
			MOVE_TOXIC,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZERAORA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_ELECTROWEB,
			MOVE_SNARL,
			MOVE_VOLT_SWITCH,
			MOVE_FAKE_OUT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZERAORA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_VOLTABSORB
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_RISING_VOLTAGE,
			MOVE_AURA_SPHERE,
			MOVE_ELECTRIC_TERRAIN,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_DOUBLE_IRON_BASH,
			MOVE_ICE_PUNCH,
			MOVE_EARTHQUAKE,
			MOVE_THUNDER_PUNCH,
		},
		
		
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_DOUBLE_IRON_BASH,
			MOVE_SUPERPOWER,
			MOVE_DARKEST_LARIAT,
			MOVE_THUNDER_PUNCH,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_DOUBLE_IRON_BASH,
			MOVE_EARTHQUAKE,
			MOVE_ICE_PUNCH,
			MOVE_ACID_ARMOR,
		},
		
		
		
		
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CLEARBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICE_PUNCH,
			MOVE_TOXIC,
			MOVE_THUNDER_WAVE,
			MOVE_REST,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CLEARBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DOUBLE_IRON_BASH,
			MOVE_HIGH_HORSEPOWER,
			MOVE_ROCK_SLIDE,
			MOVE_PROTECT,
		},
		
		
		
		
		
	},
	{
		.species = SPECIES_MELMETAL,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_TERRAIN_EXTENDER,
		.moves =
		{
			MOVE_DOUBLE_IRON_BASH,
			MOVE_HIGH_HORSEPOWER,
			MOVE_THUNDER_PUNCH,
			MOVE_ELECTRIC_TERRAIN,
		},
		
		
		
		
		
	},

	//Gen 8
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTREPIDSWORD
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_IRON_HEAD,
			MOVE_CLOSE_COMBAT,
			MOVE_WILD_CHARGE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTREPIDSWORD
		.item = ITEM_RUSTED_SWORD,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_IRON_HEAD,
			MOVE_QUICK_ATTACK,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTREPIDSWORD
		.item = ITEM_RUSTED_SWORD,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_WILD_CHARGE,
			MOVE_CLOSE_COMBAT,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTREPIDSWORD
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_WILD_CHARGE,
			MOVE_DIG,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTREPIDSWORD
		.item = ITEM_FAIRIUM_Z,
		.moves =
		{
			MOVE_PLAY_ROUGH,
			MOVE_WILD_CHARGE,
			MOVE_CLOSE_COMBAT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZACIAN,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTREPIDSWORD
		.item = ITEM_RUSTED_SWORD,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_PLAY_ROUGH,
			MOVE_CLOSE_COMBAT,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAMAZENTA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DAUNTLESSSHIELD
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_IRON_HEAD,
			MOVE_WILD_CHARGE,
			MOVE_HOWL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAMAZENTA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 24,
		.atkEv = 252,
		.spdEv = 232,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DAUNTLESSSHIELD
		.item = ITEM_RUSTED_SHIELD,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_IRON_HEAD,
			MOVE_PLAY_ROUGH,
			MOVE_HOWL,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAMAZENTA,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DAUNTLESSSHIELD
		.item = ITEM_RUSTED_SHIELD,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_IRON_HEAD,
			MOVE_WILD_CHARGE,
			MOVE_METAL_BURST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAMAZENTA,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DAUNTLESSSHIELD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_WILD_CHARGE,
			MOVE_PSYCHIC_FANGS,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZAMAZENTA_CROWNED,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_DAUNTLESSSHIELD
		.item = ITEM_RUSTED_SHIELD,
		.moves =
		{
			MOVE_IRON_HEAD,
			MOVE_PLAY_ROUGH,
			MOVE_HELPING_HAND,
			MOVE_LIGHT_SCREEN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_DYNAMAX_CANNON,
			MOVE_SLUDGE_BOMB,
			MOVE_FLAMETHROWER,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_POWER_HERB,
		.moves =
		{
			MOVE_DYNAMAX_CANNON,
			MOVE_SLUDGE_BOMB,
			MOVE_FLAMETHROWER,
			MOVE_METEOR_BEAM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_BLACK_SLUDGE,
		.moves =
		{
			MOVE_MYSTICAL_FIRE,
			MOVE_TOXIC,
			MOVE_COSMIC_POWER,
			MOVE_RECOVER,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ETERNATUS,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_ETERNABEAM,
			MOVE_MYSTICAL_FIRE,
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSHIFU_SINGLE_STRIKE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNSEENFIST
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_WICKED_BLOW,
			MOVE_LOW_KICK,
			MOVE_SUCKER_PUNCH,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSHIFU_SINGLE_STRIKE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNSEENFIST
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_WICKED_BLOW,
			MOVE_SUCKER_PUNCH,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSHIFU_SINGLE_STRIKE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 240,
		.atkEv = 164,
		.spdEv = 104,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNSEENFIST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_WICKED_BLOW,
			MOVE_DRAIN_PUNCH,
			MOVE_BULK_UP,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSHIFU_SINGLE_STRIKE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNSEENFIST
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_WICKED_BLOW,
			MOVE_SUCKER_PUNCH,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSHIFU_RAPID_STRIKE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNSEENFIST
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_SURGING_STRIKES,
			MOVE_CLOSE_COMBAT,
			MOVE_ICE_PUNCH,
			MOVE_AQUA_JET,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSHIFU_RAPID_STRIKE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNSEENFIST
		.item = ITEM_FIRIUM_Z,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_SURGING_STRIKES,
			MOVE_FIRE_PUNCH,
			MOVE_POISON_JAB,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSHIFU_RAPID_STRIKE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 92,
		.spdEv = 164,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNSEENFIST
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BODY_PRESS,
			MOVE_SURGING_STRIKES,
			MOVE_BULK_UP,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_URSHIFU_RAPID_STRIKE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNSEENFIST
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_CLOSE_COMBAT,
			MOVE_SURGING_STRIKES,
			MOVE_AQUA_JET,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZARUDE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEAFGUARD
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_THROAT_CHOP,
			MOVE_CLOSE_COMBAT,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZARUDE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEAFGUARD
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_DARKEST_LARIAT,
			MOVE_CLOSE_COMBAT,
			MOVE_U_TURN,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZARUDE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 120,
		.spdEv = 136,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEAFGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DARKEST_LARIAT,
			MOVE_POWER_WHIP,
			MOVE_JUNGLE_HEALING,
			MOVE_BULK_UP,
		},
		
		
		
		
	},
	{
		.species = SPECIES_ZARUDE,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 116,
		.spDefEv = 12,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEAFGUARD
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_POWER_WHIP,
			MOVE_SNARL,
			MOVE_TAUNT,
			MOVE_JUNGLE_HEALING,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLASTRIER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHILLINGNEIGH
		.item = ITEM_CHOICE_BAND,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_HIGH_HORSEPOWER,
			MOVE_CLOSE_COMBAT,
			MOVE_SMART_STRIKE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLASTRIER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHILLINGNEIGH
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_HIGH_HORSEPOWER,
			MOVE_SMART_STRIKE,
			MOVE_CLOSE_COMBAT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLASTRIER,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 4,
		.atkEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHILLINGNEIGH
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_BODY_PRESS,
			MOVE_SLEEP_TALK,
			MOVE_REST,
		},
		
		
		
		
	},
	{
		.species = SPECIES_GLASTRIER,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CHILLINGNEIGH
		.item = ITEM_LIFE_ORB,
		.moves =
		{
			MOVE_ICICLE_CRASH,
			MOVE_CLOSE_COMBAT,
			MOVE_HIGH_HORSEPOWER,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPECTRIER,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GRIMNEIGH
		.item = ITEM_CHOICE_SCARF,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_HYPER_BEAM,
			MOVE_DARK_PULSE,
			MOVE_HIDDEN_POWER, //TYPE_ICE
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPECTRIER,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 52,
		.defEv = 200,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GRIMNEIGH
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_HEX,
			MOVE_WILL_O_WISP,
			MOVE_CALM_MIND,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPECTRIER,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 30,
		.spDefIv = 30,
		.spdIv = 30,
		.hpEv = 4,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GRIMNEIGH
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_HIDDEN_POWER, //TYPE_FIGHTING
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_SPECTRIER,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 30,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 6,
		.spAtkEv = 252,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GRIMNEIGH
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_SHADOW_BALL,
			MOVE_HIDDEN_POWER, //TYPE_ICE
			MOVE_WILL_O_WISP,
			MOVE_TAUNT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNNERVE
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_LEAF_STORM,
			MOVE_PSYCHIC,
			MOVE_POLLEN_PUFF,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 128,
		.spAtkEv = 252,
		.spdEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNNERVE
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_PSYCHIC,
			MOVE_GIGA_DRAIN,
			MOVE_CALM_MIND,
			MOVE_REFLECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 6,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_UNNERVE
		.item = ITEM_LIGHT_CLAY,
		.moves =
		{
			MOVE_LIGHT_SCREEN,
			MOVE_REFLECT,
			MOVE_HEAL_PULSE,
			MOVE_HELPING_HAND,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX_SHADOW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ASONE_GRIM
		.item = ITEM_CHOICE_SPECS,
		.moves =
		{
			MOVE_ASTRAL_BARRAGE,
			MOVE_PSYSHOCK,
			MOVE_GIGA_DRAIN,
			MOVE_TRICK,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX_SHADOW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ASONE_GRIM
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_ASTRAL_BARRAGE,
			MOVE_EXPANDING_FORCE,
			MOVE_DRAINING_KISS,
			MOVE_NASTY_PLOT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX_SHADOW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 60,
		.spAtkEv = 196,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ASONE_GRIM
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_ASTRAL_BARRAGE,
			MOVE_LEECH_SEED,
			MOVE_NASTY_PLOT,
			MOVE_SUBSTITUTE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX_SHADOW,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ASONE_GRIM
		.item = ITEM_GHOSTIUM_Z,
		.moves =
		{
			MOVE_ASTRAL_BARRAGE,
			MOVE_EXPANDING_FORCE,
			MOVE_POLLEN_PUFF,
			MOVE_PROTECT,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX_ICE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ASONE_CHILLING
		.item = ITEM_ICIUM_Z,
		.moves =
		{
			MOVE_GLACIAL_LANCE,
			MOVE_HIGH_HORSEPOWER,
			MOVE_CLOSE_COMBAT,
			MOVE_SWORDS_DANCE,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX_ICE,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ASONE_CHILLING
		.item = ITEM_WEAKNESS_POLICY,
		.moves =
		{
			MOVE_GLACIAL_LANCE,
			MOVE_HIGH_HORSEPOWER,
			MOVE_CLOSE_COMBAT,
			MOVE_AGILITY,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX_ICE,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.atkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ASONE_CHILLING
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_GLACIAL_LANCE,
			MOVE_HIGH_HORSEPOWER,
			MOVE_SWORDS_DANCE,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
	{
		.species = SPECIES_CALYREX_ICE,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 248,
		.atkEv = 252,
		.spDefEv = 8,
		.ability = FRONTIER_ABILITY_1, //ABILITY_ASONE_CHILLING
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_GLACIAL_LANCE,
			MOVE_HIGH_HORSEPOWER,
			MOVE_CLOSE_COMBAT,
			MOVE_TRICK_ROOM,
		},
		
		
		
		
	},
};

const u16 gNumFrontierSpreads = ARRAY_COUNT(gFrontierSpreads);
const u16 gNumFrontierLegendarySpreads = ARRAY_COUNT(gFrontierLegendarySpreads);