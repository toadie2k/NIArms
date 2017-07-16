
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
	//300Blackout AR15 Generic Soundshaders: Based off Katiba
	/*
	class 300BLK_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 },
			{ "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 } };
		volume = 1.2;
		range = 5;
	};
	class 300BLK_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\Generic\300blk_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class 300BLK_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\Generic\300blk_mid", 1 } };
		volume = 0.9;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	class 300BLK_distShot_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_02", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_03", 1 } };
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 1800, 1 } };
	};
	class 300BLK_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\generic\300blk_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class 300BLK_tailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class 300BLK_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\300aac_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class 300BLK_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\Generic\300blk_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class 300BLK_tailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_houses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class 300BLK_Shot_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_close", 1 }};
		volume = 1.0;
		range = 400;
	};
	class 300BLK_tailInterior_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\Generic\300blk_sil_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class 300BLK_tailTrees_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class 300BLK_tailForest_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_forest", 1 } };
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class 300BLK_tailMeadows_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_meadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class 300BLK_tailHouses_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_houses", 1 } };
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	class badger_Shot_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_close", 1 } };
		volume = 1.0;
		range = 400;
	};
	class badger_tailInterior_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\HBADGER\hb_sil_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class badger_tailTrees_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class badger_tailForest_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\300aac_sil_forest", 1 } };
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class badger_tailMeadows_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class badger_tailHouses_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_houses", 1 } };
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	*/

		class acr_Closure_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_first", 1 },
				{ "hlc_wp_acr\snd\acr_first", 1 } };
			range = 5;
            volume = 1.4;
		};
		class acr_closeShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_close", 1 },
				{ "hlc_wp_acr\snd\acr_close", 1 } };
			volume = 0.8;
			range = 50;
			rangeCurve = "closeShotCurve";
		};
		class acr_midShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_mid", 1 } };
            volume = 1.6252;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0.2 },
				{ 50, 1 },
				{ 300, 0 },
				{ 2000, 0 } };
		};
		class acr_distShot_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\acr_dist", 1 } };
			volume = 1.0;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0 },
				{ 50, 0 },
				{ 300, 1 },
				{ 2000, 1 } };
		};
		class acr_tailDistant_SoundShader
		{
			samples[] = {
				{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
			volume = 0.4;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0 },
				{ 600, 0.7 },
				{ 2000, 1 } };
			limitation = 1;
		};
		class acr_tailForest_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\five56\acr_forest", 1 } };
            volume = " 3.85*((1-interior/1.4)*Forest/3)";
			range = 2000;
			rangeCurve[] = {
				{ 0, 1 },
				{ 2000, 0 } };
			limitation = 1;
		};
		class acr_tailHouses_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\five56\ACR_Urban", 1 } };
            volume = " 3.85*((1-interior/1.4)*houses/3)";
			range = 1500;
			rangeCurve[] = {
				{ 0, 1 },
				{ 250, 0.3 },
				{ 1500, 0 } };
			limitation = 1;
		};
		class acr_tailInterior_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\five56\ACR_indoor", 1 } };
            volume = " 3.85*((interior)*0.65)";
			range = 350;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.4 },
				{ 100, 0.2 },
				{ 350, 0 } };
			limitation = 1;
		};
		class acr_tailMeadows_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\five56\ACR_meadows", 1 } };
            volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
			range = 2000;
			rangeCurve[] = {
				{ 0, 1 },
				{ 2000, 0 } };
			limitation = 1;
		};
		class acr_tailTrees_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\five56\ACR_Trees", 1 } };
            volume = " 3.85*((1-interior/1.4)*trees/3)";
			range = 2000;
			rangeCurve[] = {
				{ 0, 1 },
				{ 2000, 0 } };
			limitation = 1;
		};
		class acr_silencerShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_suppressed_close", 1 } };
			volume = 1.0;
            range = 50;
            rangeCurve[] = {
                { 0, 1 },
                { 50, 0 }
            };
		};
        class acr_silencerShot_mid_SoundShader{
            samples[] = {
                { "hlc_wp_acr\snd\acr_suppressed_mid", 1 }
            };
            volume = 1.0;
            range = 250;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 250, 0 }
            };
        };
		class acr_silencerTailForest_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 } };
			volume = "(1-interior/1.4)*forest/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acr_silencerTailHouses_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 } };
			volume = "(1-interior/1.4)*houses/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0 } };
			limitation = 1;
		};
		class acr_silencerTailInterior_SoundShader
		{
			samples[] = {
				{ "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_indoor", 1 } };
			volume = "interior";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.3 },
				{ 150, 0 } };
			limitation = 1;
		};
		class acr_silencerTailMeadows_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_suppressed_meadow", 1 } };
			volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acr_silencerTailTrees_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
			volume = "(1-interior/1.4)*trees/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acrsixeight_Closure_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\acr_first", 1 },
                { "hlc_wp_acr\snd\acr_first", 1 } };
			range = 5;
			volume = 1.2;
		};
		class acrsixeight_closeShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\six8\acrsix8_close", 1 },
				{ "hlc_wp_acr\snd\soundshaders\six8\acrsix8_close", 1 } };
			volume = 0.8;
			range = 50;
			rangeCurve = "closeShotCurve";
		};
		class acrsixeight_midShot_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_mid", 1 } };
            volume = 1.672;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0.2 },
				{ 50, 1 },
				{ 300, 0 },
				{ 2000, 0 } };
		};
		class acrsixeight_distShot_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_dist", 1 } };
			volume = 1.0;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0 },
				{ 50, 0 },
				{ 300, 1 },
				{ 2000, 1 } };
		};
		class acrsixeight_tailDistant_SoundShader
		{
			samples[] = {
				{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
			volume = 0.4;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0 },
				{ 600, 0.7 },
				{ 2000, 1 } };
			limitation = 1;
		};
		class acrsixeight_tailForest_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\six8\acrsix8_Forest", 1 } };
            volume = " 3.85*((1-interior/1.4)*Forest/3)";
			range = 2000;
			rangeCurve[] = {
				{ 0, 1 },
				{ 2000, 0 } };
			limitation = 1;
		};
		class acrsixeight_tailHouses_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_Urban", 1 } };
            volume = " 3.85*((1-interior/1.4)*houses/3)";
			range = 1500;
			rangeCurve[] = {
				{ 0, 1 },
				{ 250, 0.3 },
				{ 1500, 0 } };
			limitation = 1;
		};
		class acrsixeight_tailInterior_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_indoor", 1 } };
            volume = " 3.85*((interior)*0.65)";
			range = 350;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.4 },
				{ 100, 0.2 },
				{ 350, 0 } };
			limitation = 1;
		};
		class acrsixeight_tailMeadows_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_meadows", 1 } };
            volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
			range = 2000;
			rangeCurve[] = {
				{ 0, 1 },
				{ 2000, 0 } };
			limitation = 1;
		};
		class acrsixeight_tailTrees_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_Trees", 1 } };
            volume = " 3.85*((1-interior/1.4)*trees/3)";
			range = 2000;
			rangeCurve[] = {
				{ 0, 1 },
				{ 2000, 0 } };
			limitation = 1;
		};
		class acrsixeight_silencerShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_suppressed", 1 } };
			volume = 1.0;
            range = 50;
            rangeCurve[] = {
                { 0, 1 },
                { 50, 0 }
            };
        };
        class acrsixeight_silencerShot_mid_SoundShader{
            samples[] = {
                { "hlc_wp_acr\snd\acr_suppressed_mid", 1 }
            };
            volume = 1.0;
            range = 250;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 250, 0 }
            };
        };
		class acrsixeight_silencerTailForest_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 } };
			volume = "(1-interior/1.4)*forest/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acrsixeight_silencerTailHouses_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 } };
			volume = "(1-interior/1.4)*houses/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0 } };
			limitation = 1;
		};
		class acrsixeight_silencerTailInterior_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\Silencer_Mk20_Tail_interior", 1 } };
			volume = "interior";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.3 },
				{ 150, 0 } };
			limitation = 1;
		};
		class acrsixeight_silencerTailMeadows_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\Silencer_Mk20_Tail_meadows", 1 } };
			volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acrsixeight_silencerTailTrees_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
			volume = "(1-interior/1.4)*trees/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
        class acrsixeight_apologyclose_SoundShader
        {
            samples[] = {
                { "hlc_wp_acr\snd\soundshaders\Apology_close", 1 },
                { "hlc_wp_acr\snd\soundshaders\Apology_close", 1 } };
            volume = 0.9;
            range = 50;
            rangeCurve = "closeShotCurve";
        };
        class acrsixeight_apologymid_SoundShader
        {
            samples[] = {
                { "hlc_wp_acr\snd\soundshaders\Apology_mid", 1 } };
            volume = 0.70794576;
            range = 2000;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 300, 0 },
                { 2000, 0 } };
        };
};
