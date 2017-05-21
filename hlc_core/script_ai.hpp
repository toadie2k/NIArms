#define __AI_AMMO_AUDIBLE0 2
#define __AI_AMMO_AUDIBLE1 100
#define __AI_AMMO_RANGE_HIT_FAR 1000
#define __AI_AMMO_RANGE_HIT_SMALL 5
#define __AI_AMMO_RANGE_CRACKS 100

#define __AI_DISPERSION_COEF aiDispersionCoefX = 6; aiDispersionCoefY = 8

/*
Fire modes
*/

//handgun
#define __AI_ROF_PISTOL_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.1;\
		midRange = 30;\
		midRangeProbab = 0.05;\
		maxRange = 70;\
		maxRangeProbab = 0.01

//gl
#define __AI_ROF_GL_SINGLE \
		aiRateOfFire = 4;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 3;\
		minRange = 60;\
		minRangeProbab = 0.5;\
		midRange = 200;\
		midRangeProbab = 0.7;\
		maxRange = 400;\
		maxRangeProbab = 0.04


//shotgun
#define __AI_ROF_SHOTGUN_SEMI \
		minRange = 0;\
		minRangeProbab = 0.7;\
		midRange = 50;\
		midRangeProbab = 0.6;\
		maxRange = 150;\
		maxRangeProbab = 0.02
#define __AI_ROF_SHOTGUN_AUTO \
		minRange = 0;\
		minRangeProbab = 0.8;\
		midRange = 30;\
		midRangeProbab = 0.7;\
		maxRange = 60;\
		maxRangeProbab = 0.02

//assault rifles, carbines
#define __AI_ROF_RIFLE_SMALL_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 350;\
		aiRateOfFireDispersion = 2;\
		minRange = 20;\
		minRangeProbab = 0.7;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_SMALL_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 200;\
		minRangeProbab = 0.8;\
		midRange = 300;\
		midRangeProbab = 0.6;\
		maxRange = 700;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 4;\
		minRange = 200;\
		minRangeProbab = 0.8;\
		midRange = 300;\
		midRangeProbab = 0.6;\
		maxRange = 900;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_SMALL_SHORT_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.2;\
		midRange = 20;\
		midRangeProbab = 0.8;\
		maxRange = 40;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_SMALL_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 5;\
		minRangeProbab = 0.8;\
		midRange = 10;\
		midRangeProbab = 0.7;\
		maxRange = 20;\
		maxRangeProbab = 0.2
#define __AI_ROF_RIFLE_SMALL_FULLAUTO \
		aiRateOfFire = 0.1;\
		aiRateOfFireDistance = 50;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 1;\
		midRangeProbab = 0.8;\
		maxRange = 5;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE \
		aiRateOfFire = 5;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 4;\
		minRange = 400;\
		minRangeProbab = 0.1;\
		midRange = 600;\
		midRangeProbab = 0.05;\
		maxRange = 800;\
		maxRangeProbab = 0.01

#define __AI_RIFLE_SMALL_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			__AI_ROF_RIFLE_SMALL_SINGLE; \
		}; \
		class FullAuto: ##fullbase { \
			__AI_ROF_RIFLE_SMALL_FULLAUTO; \
		}; \
		class AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 4; \
			__AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
		}; \
		class AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			__AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE; \
		}; \
		class AI_Single_optics2: AI_Single_optics1 { \
			requiredOpticType = 2; \
			__AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE; \
		}; \
		class SemiAuto: Single { \
			__AI_ROF_RIFLE_SMALL_SEMI; \
		}; \
		class Burst3: Single { \
			__AI_ROF_RIFLE_SMALL_SHORT_BURST; \
			burst = 3; \
			displayName = $STR_DN_MODE_BURST; \
			textureType = "burst"; \
			soundBurst = 0; \
		}; \
		class Burst2: Burst3 { \
			burst = 2; \
            textureType = "dual"; \
		}; \
		class AI_far: Single { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 5; \
            reloadtime = 0.2; \
			__AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE; \
		}


//CQB rifles (short barrels, small calibre)
#define __AI_ROF_CQB_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 30;\
		minRangeProbab = 0.7;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.04
#define __AI_ROF_CQB_SEMI \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 250;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.04
#define __AI_ROF_CQB_MSCOPE_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 120;\
		minRangeProbab = 0.8;\
		midRange = 200;\
		midRangeProbab = 0.6;\
		maxRange = 600;\
		maxRangeProbab = 0.01
#define __AI_ROF_CQB_SHORT_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 1;\
		minRange = 0;\
		minRangeProbab = 0.2;\
		midRange = 30;\
		midRangeProbab = 0.8;\
		maxRange = 60;\
		maxRangeProbab = 0.1
#define __AI_ROF_CQB_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 5;\
		minRangeProbab = 0.8;\
		midRange = 15;\
		midRangeProbab = 0.7;\
		maxRange = 30;\
		maxRangeProbab = 0.2

#define __AI_RIFLE_SMALL_CQB_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			__AI_ROF_CQB_SINGLE; \
		}; \
		class FullAuto: ##fullbase { \
			__AI_ROF_RIFLE_SMALL_FULLAUTO; \
		}; \
		class AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 4; \
			__AI_ROF_CQB_CLOSE_BURST; \
		}; \
		class AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			__AI_ROF_CQB_MSCOPE_SINGLE; \
		}; \
		class AI_Single_optics2: AI_Single_optics1 { \
			requiredOpticType = 2; \
		}; \
		class SemiAuto: Single { \
			__AI_ROF_CQB_SEMI; \
		}; \
		class Burst3: Single { \
			__AI_ROF_CQB_SHORT_BURST; \
			showToPlayer = 1; \
			burst = 3; \
			displayName = $STR_DN_MODE_BURST; \
			textureType = "burst"; \
			soundBurst = 0; \
		}; \
		class Burst2: Burst3 { \
			burst = 2; \
		}


//battle rifles, 7.62 assault rifles
#define __AI_ROF_RIFLE_MEDIUM_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 350;\
		aiRateOfFireDispersion = 2;\
		minRange = 15;\
		minRangeProbab = 0.8;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_MEDIUM_SEMI \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 550;\
		aiRateOfFireDispersion = 3;\
		minRange = 150;\
		minRangeProbab = 0.9;\
		midRange = 300;\
		midRangeProbab = 0.8;\
		maxRange = 800;\
		maxRangeProbab = 0.1
#define __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE \
		aiRateOfFire = 6;\
		aiRateOfFireDistance = 1200;\
		aiRateOfFireDispersion = 4;\
		minRange = 150;\
		minRangeProbab = 0.7;\
		midRange = 500;\
		midRangeProbab = 0.8;\
		maxRange = 1200;\
		maxRangeProbab = 0.05
#define __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 5;\
		minRangeProbab = 0.8;\
		midRange = 10;\
		midRangeProbab = 0.7;\
		maxRange = 15;\
		maxRangeProbab = 0.2
#define __AI_ROF_RIFLE_MEDIUM_FULLAUTO \
		aiRateOfFire = 0.1;\
		aiRateOfFireDistance = 50;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 1;\
		midRangeProbab = 0.8;\
		maxRange = 5;\
		maxRangeProbab = 0.1

#define __AI_RIFLE_MEDIUM_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			__AI_ROF_RIFLE_MEDIUM_SINGLE; \
		}; \
		class FullAuto: ##fullbase { \
			__AI_ROF_RIFLE_MEDIUM_FULLAUTO; \
		}; \
		class AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 4; \
			__AI_ROF_RIFLE_MEDIUM_CLOSE_BURST; \
		}; \
		class AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			__AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE; \
		}; \
		class AI_Single_optics2: AI_Single_optics1 { \
			requiredOpticType = 2; \
			__AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE; \
		}; \
		class SemiAuto: Single { \
			__AI_ROF_RIFLE_MEDIUM_SEMI; \
		}

//AK special
#define __AI_ROF_AK_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 350;\
		aiRateOfFireDispersion = 2;\
		minRange = 100;\
		minRangeProbab = 0.7;\
		midRange = 150;\
		midRangeProbab = 0.5;\
		maxRange = 500;\
		maxRangeProbab = 0.1
#define __AI_ROF_AK_MSCOPE_SINGLE \
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 300;\
		minRangeProbab = 0.8;\
		midRange = 400;\
		midRangeProbab = 0.5;\
		maxRange = 600;\
		maxRangeProbab = 0.1
#define __AI_ROF_AK_HSCOPE_SINGLE \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 4;\
		minRange = 300;\
		minRangeProbab = 0.8;\
		midRange = 400;\
		midRangeProbab = 0.5;\
		maxRange = 800;\
		maxRangeProbab = 0.1
#define __AI_ROF_AK_SHORT_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 1;\
		minRange = 50;\
		minRangeProbab = 0.1;\
		midRange = 100;\
		midRangeProbab = 0.8;\
		maxRange = 200;\
		maxRangeProbab = 0.1
#define __AI_ROF_AK_CLOSE_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 5;\
		minRangeProbab = 0.8;\
		midRange = 50;\
		midRangeProbab = 0.7;\
		maxRange = 100;\
		maxRangeProbab = 0.2
#define __AI_ROF_AK_FULLAUTO \
		aiRateOfFire = 0.1;\
		aiRateOfFireDistance = 50;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 1;\
		midRangeProbab = 0.8;\
		maxRange = 5;\
		maxRangeProbab = 0.1
#define __AI_ROF_AK_FAR_BURST \
		aiRateOfFire = 5;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 5;\
		minRange = 400;\
		minRangeProbab = 0.05;\
		midRange = 500;\
		midRangeProbab = 0.3;\
		maxRange = 1000;\
		maxRangeProbab = 0.01

#define __AI_AK_MODES(semibase,fullbase) \
		class Single: ##semibase { \
			__AI_ROF_AK_SINGLE; \
		}; \
		class FullAuto: ##fullbase { \
			__AI_ROF_AK_FULLAUTO; \
		}; \
		class AI_Burst_close: FullAuto { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			burst = 7; \
			__AI_ROF_AK_CLOSE_BURST; \
		}; \
		class AI_Burst_far: AI_Burst_close { \
			burst = 4; \
			__AI_ROF_AK_FAR_BURST; \
		}; \
		class AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			__AI_ROF_AK_MSCOPE_SINGLE; \
		}; \
		class AI_Single_optics2: AI_Single_optics1 { \
			requiredOpticType = 2; \
			__AI_ROF_AK_HSCOPE_SINGLE; \
		}; \
		class Burst3: Single { \
			__AI_ROF_AK_SHORT_BURST; \
			showToPlayer = 1; \
			burst = 3; \
			displayName = $STR_DN_MODE_BURST; \
			textureType = "burst"; \
			soundBurst = 0; \
		}; \
		class Burst2: Burst3 { \
			burst = 2; \
            textureType = "dual"; \
		}

		
// light-medium machineguns
#define __AI_ROF_MG_FULLAUTO \
		aiRateOfFire = 0.1;\
		aiRateOfFireDistance = 50;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 10;\
		midRangeProbab = 0.7;\
		maxRange = 20;\
		maxRangeProbab = 0.1
#define __AI_ROF_MG_LONG_BURST \
		burst = 10;\
		aiRateOfFire = 0.5;\
		aiRateOfFireDistance = 50;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 10;\
		minRangeProbab = 0.1;\
		midRange = 25;\
		midRangeProbab = 0.8;\
		maxRange = 50;\
		maxRangeProbab = 0.1
#define __AI_ROF_MG_CLOSE_BURST \
		burst = 8;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 25;\
		minRangeProbab = 0.1;\
		midRange = 50;\
		midRangeProbab = 0.8;\
		maxRange = 100;\
		maxRangeProbab = 0.1
#define __AI_ROF_MG_SHORT_BURST \
		burst = 5;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 200;\
		aiRateOfFireDispersion = 1;\
		minRange = 50;\
		minRangeProbab = 0.1;\
		midRange = 100;\
		midRangeProbab = 0.8;\
		maxRange = 200;\
		maxRangeProbab = 0.1
#define __AI_ROF_MG_MEDIUM_BURST \
		burst = 4;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 400;\
		aiRateOfFireDispersion = 1;\
		minRange = 100;\
		minRangeProbab = 0.1;\
		midRange = 200;\
		midRangeProbab = 0.8;\
		maxRange = 400;\
		maxRangeProbab = 0.1
#define __AI_ROF_MG_FAR_BURST \
		burst = 4;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 400;\
		aiRateOfFireDispersion = 1;\
		minRange = 200;\
		minRangeProbab = 0.1;\
		midRange = 400;\
		midRangeProbab = 0.8;\
		maxRange = 800;\
		maxRangeProbab = 0.1
#define __AI_ROF_MG_VERYFAR_BURST \
		burst = 5;\
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 800;\
		aiRateOfFireDispersion = 2;\
		minRange = 400;\
		minRangeProbab = 0.1;\
		midRange = 800;\
		midRangeProbab = 0.2;\
		maxRange = 1000;\
		maxRangeProbab = 0.01
#define __AI_ROF_MG_FAR_SCOPE_BURST \
		burst = 3;\
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 800;\
		aiRateOfFireDispersion = 1;\
		minRange = 400;\
		minRangeProbab = 0.2;\
		midRange = 800;\
		midRangeProbab = 0.8;\
		maxRange = 1200;\
		maxRangeProbab = 0.2
#define __AI_ROF_MG_VERYFAR_SCOPE_BURST \
		burst = 2;\
		aiRateOfFire = 2;\
		aiRateOfFireDistance = 1200;\
		aiRateOfFireDispersion = 2;\
		minRange = 800;\
		minRangeProbab = 0.4;\
		midRange = 1200;\
		midRangeProbab = 0.6;\
		maxRange = 1600;\
		maxRangeProbab = 0.1
#define __AI_ROF_MG_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 1;\
		minRange = 300;\
		minRangeProbab = 0.1;\
		midRange = 400;\
		midRangeProbab = 0.1;\
		maxRange = 500;\
		maxRangeProbab = 0.1

#define __AI_MG_MODES(m,fullbase,semibase) \
		class ##m: ##fullbase { \
			__AI_ROF_MG_FULLAUTO; \
		}; \
		class AI_long: ##m { \
			showToPlayer = 0; \
            aiBurstTerminable = 1; \
			__AI_ROF_MG_LONG_BURST; \
		}; \
		class AI_close: AI_long { \
			__AI_ROF_MG_CLOSE_BURST; \
		}; \
		class AI_short: AI_close { \
			__AI_ROF_MG_SHORT_BURST; \
		}; \
		class AI_medium: AI_close { \
			__AI_ROF_MG_MEDIUM_BURST; \
		}; \
		class AI_far: AI_close { \
			__AI_ROF_MG_FAR_BURST; \
		}; \
		class AI_toofar: AI_far { \
			__AI_ROF_MG_VERYFAR_BURST; \
		}; \
		class AI_far_optic1: AI_far { \
			requiredOpticType = 1; \
			__AI_ROF_MG_FAR_SCOPE_BURST; \
		}; \
		class AI_toofar_optic1: AI_far_optic1 { \
			__AI_ROF_MG_VERYFAR_SCOPE_BURST; \
		}; \
		class AI_far_optic2: AI_far_optic1 { \
			requiredOpticType = 2; \
		}; \
		class AI_toofar_optic2: AI_toofar_optic1 { \
			requiredOpticType = 2; \
		}; \
		class Single: ##semibase { \
			__AI_ROF_MG_SINGLE; \
		}

// submachineguns
#define __AI_ROF_SMG_SINGLE \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 1;\
		minRange = 50;\
		minRangeProbab = 0.9;\
		midRange = 80;\
		midRangeProbab = 0.5;\
		maxRange = 300;\
		maxRangeProbab = 0.01
#define __AI_ROF_SMG_BURST \
		aiRateOfFire = 1;\
		aiRateOfFireDistance = 100;\
		aiRateOfFireDispersion = 0.5;\
		minRange = 20;\
		minRangeProbab = 0.8;\
		midRange = 30;\
		midRangeProbab = 0.5;\
		maxRange = 60;\
		maxRangeProbab = 0.4
#define __AI_ROF_SMG_FULLAUTO \
		aiRateOfFire = 0.1;\
		aiRateOfFireDistance = 50;\
		minRange = 0;\
		minRangeProbab = 0.9;\
		midRange = 10;\
		midRangeProbab = 0.8;\
		maxRange = 20;\
		maxRangeProbab = 0.4

#define __AI_SMG_MODES \
		class Single: Mode_SemiAuto { \
			__AI_ROF_SMG_SINGLE; \
		}; \
		class Burst: Mode_Burst { \
			__AI_ROF_SMG_BURST; \
		}; \
		class FullAuto: Mode_FullAuto { \
			__AI_ROF_SMG_FULLAUTO; \
		}

//sniper rifles (hi mag. scopes, medium-high calibre)
#define __AI_ROF_RIFLE_SNIPER762_SEMI \
		aiRateOfFire = 7;\
		aiRateOfFireDistance = 1000;\
		aiRateOfFireDispersion = 3;\
		minRange = 0;\
		minRangeProbab = 0.4;\
		midRange = 500;\
		midRangeProbab = 0.8;\
		maxRange = 1600;\
		maxRangeProbab = 0.01


#define __AI_ROF_338SNIPER_SEMI \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 300;\
		aiRateOfFireDispersion = 2;\
		minRange = 1;\
		minRangeProbab = 0.4;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 500;\
		maxRangeProbab = 0.1
#define __AI_ROF_338SNIPER_MSCOPE_SEMI \
		aiRateOfFire = 4;\
		aiRateOfFireDistance = 500;\
		aiRateOfFireDispersion = 3;\
		minRange = 150;\
		minRangeProbab = 0.2;\
		midRange = 500;\
		midRangeProbab = 0.7;\
		maxRange = 1000;\
		maxRangeProbab = 0.05
#define __AI_ROF_338SNIPER_HSCOPE_SEMI \
		aiRateOfFire = 8;\
		aiRateOfFireDistance = 1000;\
		aiRateOfFireDispersion = 4;\
		minRange = 250;\
		minRangeProbab = 0.2;\
		midRange = 750;\
		midRangeProbab = 0.7;\
		maxRange = 2000;\
		maxRangeProbab = 0.05

#define __AI_338SNIPER_MODES(semibase) \
		class Single: ##semibase { \
			__AI_ROF_338SNIPER_SEMI; \
		}; \
		class AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			__AI_ROF_338SNIPER_MSCOPE_SEMI; \
		}; \
		class AI_Single_optics2: AI_Single_optics1 { \
			requiredOpticType = 2; \
			__AI_ROF_338SNIPER_HSCOPE_SEMI; \
		}


#define __AI_ROF_BIGSNIPER_SEMI \
		aiRateOfFire = 3;\
		aiRateOfFireDistance = 400;\
		aiRateOfFireDispersion = 2;\
		minRange = 1;\
		minRangeProbab = 0.4;\
		midRange = 150;\
		midRangeProbab = 0.7;\
		maxRange = 500;\
		maxRangeProbab = 0.1
#define __AI_ROF_BIGSNIPER_MSCOPE_SEMI \
		aiRateOfFire = 4;\
		aiRateOfFireDistance = 600;\
		aiRateOfFireDispersion = 3;\
		minRange = 150;\
		minRangeProbab = 0.2;\
		midRange = 500;\
		midRangeProbab = 0.7;\
		maxRange = 1000;\
		maxRangeProbab = 0.1
#define __AI_ROF_BIGSNIPER_HSCOPE_SEMI \
		aiRateOfFire = 8;\
		aiRateOfFireDistance = 1100;\
		aiRateOfFireDispersion = 4;\
		minRange = 250;\
		minRangeProbab = 0.2;\
		midRange = 750;\
		midRangeProbab = 0.7;\
		maxRange = 1500;\
		maxRangeProbab = 0.4
#define __AI_ROF_BIGSNIPER_HSCOPE_FAR_SEMI \
		aiRateOfFire = 10;\
		aiRateOfFireDistance = 1500;\
		aiRateOfFireDispersion = 5;\
		minRange = 500;\
		minRangeProbab = 0.3;\
		midRange = 1200;\
		midRangeProbab = 0.7;\
		maxRange = 2500;\
		maxRangeProbab = 0.1

#define __AI_BIGSNIPER_MODES(semibase) \
		class Single: ##semibase { \
			__AI_ROF_BIGSNIPER_SEMI; \
		}; \
		class AI_Single_optics1: Single { \
			showToPlayer = 0; \
			requiredOpticType = 1; \
			__AI_ROF_BIGSNIPER_MSCOPE_SEMI; \
		}; \
		class AI_Single_optics2: AI_Single_optics1 { \
			requiredOpticType = 2; \
			__AI_ROF_BIGSNIPER_HSCOPE_SEMI; \
		}; \
		class AI_Single_far_optics2: AI_Single_optics2 { \
			__AI_ROF_BIGSNIPER_HSCOPE_FAR_SEMI; \
		}
