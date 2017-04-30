
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING

	//AK47 Soundshaders: Based off Katiba
	class Nia_ak47_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_first", 1 } };
        range = 15;
        volume = 1.5;
	};
	class Nia_ak47_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_close", 1 } };
		volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_ak47_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_mid", 1 } };
		volume = 1.3;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	/*class ak47_distShot_SoundShader
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
	};*/
	class Nia_ak47_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_dist", 1 } };
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 1800, 1 } };
	};
	class Nia_ak47_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 500;
		limitation = 0;
	};
	/*class ak47_tailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class ak47_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak762_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class ak47_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class ak47_tailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_houses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};*/
	class Nia_ak47_tailTrees_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak47\ak47_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak47\ak47_urban", 1 } };
		volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 1200;
		limitation = 1;
	};
	class Nia_ak47_Shot_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_sil", 1 }};
		volume = 0.8;
		range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
	};
    class nia_ak47_Shot_Silenced_mid_SoundShader
    {
        samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak47\ak47_sil_mid", 1 } };
        volume = 1;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
	class Nia_ak47_tailInterior_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_siltail_Indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Nia_ak47_tailTrees_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailForest_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_forest", 1 } };
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailMeadows_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_siltail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailHouses_Silenced_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak47\ak47_siltail", 1 } };
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	//AK74 Sounshaders: Based off mk20
	//After Examination, this one seems to be the better model overall
	/*
	class ak74_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_first", 1 } };
		range = 5;
		volume = 1.0;
	};
	class ak74_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_close1", 1 },
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_close2", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ak74_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class ak74_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class ak74_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class ak74_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak545_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class ak74_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class ak74_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class ak74_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_meadow1", 1 },
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_meadow2", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class ak74_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class ak74_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class ak74_silencerTailForest_SoundShader
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
	class ak74_silencerTailHouses_SoundShader
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
	class ak74_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class ak74_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class ak74_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};*/
	class Nia_ak74_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_first", 1 } };
        range = 15;
        volume = 1.5;
	};
	class Nia_ak74_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_ak74_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_mid", 1 } };
        volume = 1.3;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class Nia_ak74_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_dist", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class Nia_ak74_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class Nia_ak74_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak74\ak74_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class Nia_ak74_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak74\ak74_urban", 1 } };
		volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class Nia_ak74_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak74\ak74_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class Nia_ak74_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak74\ak74_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class Nia_ak74_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak74\ak74_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class Nia_ak74_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil", 1 } };
		volume = 0.8;
		range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
	};
    class nia_ak74_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil_mid", 1 } };
        volume = 1;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
	class Nia_ak74_silencerTailForest_SoundShader
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
	class Nia_ak74_silencerTailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak74\ak74_siltail", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class Nia_ak74_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_siltail_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class Nia_ak74_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak74\ak74_siltail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class Nia_ak74_silencerTailTrees_SoundShader
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


	//Everythign else should really come off those
	//RPK Soundshaders
	/*
	class rpk_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_first", 1 } };
		volume = 1.0;
		range = 5;
	};
	class rpk_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class rpk_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_mid", 1 } };
		volume = 0.9;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	class rpk_distShot_SoundShader
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
	class rpk_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class rpk_tailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class rpk_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak762_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class rpk_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class rpk_tailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_houses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class rpk_Shot_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_sil", 1 } };
		volume = 1.0;
		range = 400;
	};
	class rpk_tailInterior_Silenced_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak47\ak47_sil_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class rpk_tailTrees_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class rpk_tailForest_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_forest", 1 } };
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class rpk_tailMeadows_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_meadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class rpk_tailHouses_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_houses", 1 } };
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};*/
	class Nia_rpk_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_first", 1 } };
        range = 15;
        volume = 1.5;
	};
class Nia_rpk_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
class Nia_rpk_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_mid", 1 } };
        volume = 1.3;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
class Nia_rpk_distShot_SoundShader
	{
		samples[] = {

			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_dist", 1 } };
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 1800, 1 } };
	};
class Nia_rpk_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk\rpk_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 500;
		limitation = 0;
	};
class Nia_rpk_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk\rpk_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 1800;
		limitation = 1;
	};
class Nia_rpk_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk\rpk_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 1800;
		limitation = 1;
	};
class Nia_rpk_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk\rpk_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 1800;
		limitation = 1;
	};
class Nia_rpk_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk\rpk_urban", 1 } };
		volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 1200;
		limitation = 1;
	};
class Nia_rpk_Shot_Silenced_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk\rpk_sil", 1 } };
		volume = 0.8;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
	};
class nia_rpk_silencerShot_mid_SoundShader
{
    samples[] = {
        { "hlc_wp_ak\snd\soundshaders\rpk\rpk_sil_mid", 1 } };
    volume = 1;
    range = 250;
    rangeCurve[] = {
        { 0, 0.2 },
        { 50, 1 },
        { 250, 0 }
    };
};
class Nia_rpk_tailInterior_Silenced_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
class Nia_rpk_tailTrees_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
class Nia_rpk_tailForest_Silenced_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_forest", 1 } };
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
class Nia_rpk_tailMeadows_Silenced_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
class Nia_rpk_tailHouses_Silenced_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail", 1 } };
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};

	//RPK74 Soundshaders
	/*
	class rpk74_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_first", 1 } };
		range = 5;
		volume = 1.0;
	};
	class rpk74_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class rpk74_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class rpk74_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class rpk74_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class rpk74_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak545_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class rpk74_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class rpk74_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class rpk74_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class rpk74_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class rpk74_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class rpk74_silencerTailForest_SoundShader
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
	class rpk74_silencerTailHouses_SoundShader
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
	class rpk74_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class rpk74_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class rpk74_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};*/
class Nia_rpk74_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_first", 1 } };
        range = 15;
        volume = 1.5;
	};
class Nia_rpk74_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
class Nia_rpk74_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_mid", 1 } };
        volume = 1.3;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
class Nia_rpk74_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_dist", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
class Nia_rpk74_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
class Nia_rpk74_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_rpk74_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_urban", 1 } };
        volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
class Nia_rpk74_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
class Nia_rpk74_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_rpk74_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_rpk74_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_sil", 1 } };
		volume = 0.8;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
	};
class nia_rpk74_silencerShot_mid_SoundShader
{
    samples[] = {
        { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_sil_mid", 1 } };
    volume = 1;
    range = 250;
    rangeCurve[] = {
        { 0, 0.2 },
        { 50, 1 },
        { 250, 0 }
    };
};
class Nia_rpk74_silencerTailForest_SoundShader
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
class Nia_rpk74_silencerTailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
class Nia_rpk74_silencerTailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
class Nia_rpk74_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
class Nia_rpk74_silencerTailTrees_SoundShader
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
	//AKS74U Soundshaders
	/*
	class aks74u_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_first", 1 } };
		range = 5;
		volume = 1.0;
	};
	class aks74u_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class aks74u_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class aks74u_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class aks74u_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class aks74u_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak545_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class aks74u_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class aks74u_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class aks74u_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class aks74u_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class aks74u_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class aks74u_silencerTailForest_SoundShader
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
	class aks74u_silencerTailHouses_SoundShader
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
	class aks74u_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class aks74u_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class aks74u_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};*/
class Nia_aks74u_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_first", 1 } };
        range = 15;
        volume = 1.5;
	};
class Nia_aks74u_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
class Nia_aks74u_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_mid", 1 } };
        volume = 1.3;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
class Nia_aks74u_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_dist", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
class Nia_aks74u_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
class Nia_aks74u_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_aks74u_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_urban", 1 } };
		volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
class Nia_aks74u_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
class Nia_aks74u_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_aks74u_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_aks74u_silencerShot_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_sil", 1 } };
		volume = 0.8;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
	};
class nia_aks74u_silencerShot_mid_SoundShader
{
    samples[] = {
        { "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_sil", 1 } };
    volume = 0.8;
    range = 250;
    rangeCurve[] = {
        { 0, 0.2 },
        { 50, 1 },
        { 250, 0 }
    };
};
class Nia_aks74u_silencerTailForest_SoundShader
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
class Nia_aks74u_silencerTailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_siltail", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
class Nia_aks74u_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_siltail_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
class Nia_aks74u_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aks74u\aks74u_siltail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
class Nia_aks74u_silencerTailTrees_SoundShader
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


    /*
	class ak12_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_first", 1 } };
		range = 5;
		volume = 1.0;
	};
	class ak12_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ak12_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class ak12_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class ak12_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class ak12_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak545_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class ak12_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class ak12_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class ak12_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class ak12_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class ak12_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class ak12_silencerTailForest_SoundShader
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
	class ak12_silencerTailHouses_SoundShader
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
	class ak12_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak74\ak74_sil_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class ak12_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class ak12_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};*/
class Nia_ak12_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_first", 1 } };
        range = 15;
        volume = 1.5;
	};
class Nia_ak12_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
class Nia_ak12_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_mid", 1 } };
        volume = 1.3;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
class Nia_ak12_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_dist", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
class Nia_ak12_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
class Nia_ak12_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class Nia_ak12_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_urban", 1 } };
		volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class Nia_ak12_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class Nia_ak12_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_meadow", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class Nia_ak12_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class Nia_ak12_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak12\ak12_sil", 1 } };
		volume = 0.8;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
	};
    class nia_ak12_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_sil", 1 } };
        volume = 1;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
	class Nia_ak12_silencerTailForest_SoundShader
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
	class Nia_ak12_silencerTailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_siltail", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class Nia_ak12_silencerTailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_siltail_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class Nia_ak12_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\ak12\ak12_siltail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class Nia_ak12_silencerTailTrees_SoundShader
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

	/*
	class aek_Closure_SoundShader
	{
	samples[] = {
	{ "hlc_wp_ak\snd\soundshaders\aek\aek_first", 1 },
	{ "hlc_wp_ak\snd\soundshaders\aek\aek_first", 1 } };
	range = 5;
	volume = 1.0;
	};
	class aek_closeShot_SoundShader
	{
	samples[] = {
	{ "hlc_wp_ak\snd\soundshaders\aek\aek_close", 1 } };
	volume = 1.0;
	range = 50;
	rangeCurve = "closeShotCurve";
	};
	class aek_midShot_SoundShader
	{
	samples[] = {
	{ "hlc_wp_ak\snd\soundshaders\aek\aek_mid", 1 } };
	volume = 0.70794576;
	range = 2000;
	rangeCurve[] = {
	{ 0, 0.2 },
	{ 50, 1 },
	{ 300, 0 },
	{ 2000, 0 } };
	};
	class aek_distShot_SoundShader
	{
	samples[] = {
	{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
	{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
	{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 } };
	volume = 1.0;
	range = 2000;
	rangeCurve[] = {
	{ 0, 0 },
	{ 50, 0 },
	{ 300, 1 },
	{ 2000, 1 } };
	};
	class aek_tailDistant_SoundShader
	{
	samples[] = {
	{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
	volume = 1.0;
	range = 2000;
	rangeCurve[] = {
	{ 0, 0 },
	{ 600, 0.7 },
	{ 2000, 1 } };
	limitation = 1;
	};
	class aek_tailForest_SoundShader
	{
	samples[] = {
	{ "hlc_wp_ak\snd\soundshaders\ak545_forest", 1 } };
	volume = "(1-interior/1.4)*forest/3";
	range = 2000;
	rangeCurve[] = {
	{ 0, 1 },
	{ 2000, 0 } };
	limitation = 1;
	};
	class aek_tailHouses_SoundShader
	{
	samples[] = {
	{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 } };
	volume = "(1-interior/1.4)*houses/3";
	range = 1500;
	rangeCurve[] = {
	{ 0, 1 },
	{ 250, 0.3 },
	{ 1500, 0 } };
	limitation = 1;
	};
	class aek_tailInterior_SoundShader
	{
	samples[] = {
	{ "hlc_wp_ak\snd\soundshaders\aek\aek_indoor", 1 } };
	volume = "interior";
	range = 350;
	rangeCurve[] = {
	{ 0, 1 },
	{ 50, 0.4 },
	{ 100, 0.2 },
	{ 350, 0 } };
	limitation = 1;
	};
	class aek_tailMeadows_SoundShader
	{
	samples[] = {
	{ "hlc_wp_ak\snd\soundshaders\aek\aek_meadows", 1 } };
	volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
	range = 2000;
	rangeCurve[] = {
	{ 0, 1 },
	{ 2000, 0 } };
	limitation = 1;
	};
	class aek_tailTrees_SoundShader
	{
	samples[] = {
	{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 } };
	volume = "(1-interior/1.4)*trees/3";
	range = 2000;
	rangeCurve[] = {
	{ 0, 1 },
	{ 2000, 0 } };
	limitation = 1;
	};
	class aek_silencerShot_SoundShader
	{
	samples[] = {
	{ "hlc_wp_ak\snd\soundshaders\aek\aek_sil", 1 } };
	volume = 1.0;
	range = 150;
	rangeCurve = "closeShotCurve";
	};
	class aek_silencerTailForest_SoundShader
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
	class aek_silencerTailHouses_SoundShader
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
	class aek_silencerTailInterior_SoundShader
	{
	samples[] = {
	{ "hlc_wp_ak\snd\soundshaders\aek\aek_sil_indoor", 1 } };
	volume = "interior";
	range = 150;
	rangeCurve[] = {
	{ 0, 1 },
	{ 50, 0.3 },
	{ 150, 0 } };
	limitation = 1;
	};
	class aek_silencerTailMeadows_SoundShader
	{
	samples[] = {
	{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailMeadows", 1 } };
	volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
	range = 150;
	rangeCurve[] = {
	{ 0, 1 },
	{ 150, 0.3 } };
	limitation = 1;
	};
	class aek_silencerTailTrees_SoundShader
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
	*/
class Nia_aek_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aek\aek_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\aek\aek_first", 1 } };
        range = 15;
        volume = 1.5;
	};
class Nia_aek_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aek\aek_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
class Nia_aek_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aek\aek_mid", 1 } };
        volume = 1.3;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
class Nia_aek_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aek\aek_dist", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
class Nia_aek_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
class Nia_aek_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aek\aek_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_aek_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aek\aek_urban", 1 } };
		volume = "2.585*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
class Nia_aek_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aek\aek_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
class Nia_aek_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aek\aek_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_aek_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aek\aek_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
class Nia_aek_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\aek\aek_sil", 1 } };
		volume = 0.8;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
	};
class nia_aek_silencerShot_mid_SoundShader
{
    samples[] = {
        { "hlc_wp_ak\snd\soundshaders\aek\aek_sil_mid", 1 } };
    volume = 0.8;
    range = 250;
    rangeCurve[] = {
        { 0, 0.2 },
        { 50, 1 },
        { 250, 0 }
    };
};
class Nia_aek_silencerTailForest_SoundShader
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
class Nia_aek_silencerTailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aek\aek_siltail", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
class Nia_aek_silencerTailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aek\aek_siltail_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
class Nia_aek_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\aek\aek_siltail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
class Nia_aek_silencerTailTrees_SoundShader
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
	

	//SLR107U Soundshaders: Based off Katiba
	/*
	class SLR107U_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_first", 1 } };
		volume = 1.0;
		range = 5;
	};
	class Nia_SLR107U_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_SLR107U_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_mid", 1 } };
		volume = 0.9;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	class Nia_SLR107U_distShot_SoundShader
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
	class Nia_SLR107U_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Nia_SLR107U_tailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\ak762_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_houses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};*/
	class Nia_SLR107U_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_first", 1 },
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_first", 1 } };
        range = 15;
        volume = 1.5;
	};
	class Nia_SLR107U_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107u_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_SLR107U_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_mid", 1 } };
        volume = 1.3;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	class Nia_SLR107U_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_dist", 1 } };
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 1800, 1 } };
	};
	class Nia_SLR107U_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\SLR107U\slr107u_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 500;
		limitation = 0;
	};
	class Nia_SLR107U_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\SLR107U\slr107u_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\SLR107U\slr107u_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\SLR107U\slr107u_urban", 1 } };   
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};

	class Nia_rk62_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rk62\rk62_first", 1 } };
        range = 15;
        volume = 1.5;
	};
	class Nia_rk62_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rk62\rk62_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_rk62_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rk62\rk62_mid", 1 } };
        volume = 1.3;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	class Nia_rk62_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\rk62\rk62_dist", 1 } };
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 1800, 1 } };
	};
	class Nia_rk62_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rk62\rk62_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 500;
		limitation = 0;
	};
	class Nia_rk62_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rk62\rk62_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rk62\rk62_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rk62\rk62_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\rk62\rk62_urban", 1 } };    
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};

	//SAIGA 12K soundshaders: Based off GM6 ¯\_(ツ)_/¯
	class Nia_saiga_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\saiga\saiga_first", 1 } };
        range = 15;
        volume = 1.5;
	};
	class Nia_saiga_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\saiga\saiga_close", 1 } };
        volume = 0.78;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class Nia_saiga_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\saiga\saiga_mid", 1 },
			{ "hlc_wp_ak\snd\soundshaders\saiga\saiga_mid", 1 },
			{ "hlc_wp_ak\snd\soundshaders\saiga\saiga_mid", 1 } };
        volume = 1.3;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 1500, 0 } };
	};
	class Nia_saiga_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_ak\snd\soundshaders\saiga\saiga_dist", 1 } };
		volume = 1.7782794;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 1500, 1 } };
	};
	class Nia_saiga_tailDistant_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_taildistant", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
		limitation = 1;
	};
	class Nia_saiga_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\saiga\saiga_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
		range = 2500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2500, 0.3 } };
		limitation = 1;
	};
	class Nia_saiga_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\saiga\saiga_urban", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 300, 0.3 },
			{ 1500, 0.3 } };
		limitation = 1;
	};
	class Nia_saiga_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\saiga\saiga_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.2 },
			{ 100, 0.05 },
			{ 350, 0 } };
		limitation = 1;
	};
	class Nia_saiga_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\saiga\saiga_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2500, 0.3 } };
		limitation = 1;
	};
	class Nia_saiga_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_ak\snd\soundshaders\saiga\saiga_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 2500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2500, 0.3 } };
		limitation = 1;
	};
};
