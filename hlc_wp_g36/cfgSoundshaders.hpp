
class CfgSoundShaders
{

	class g36_MLI_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_first", 1 },
			{ "hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_first", 1 } };
		volume = 0.7;
		range = 5;
	};
	class g36_MLI_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_close", 1 } };
		volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36_MLI_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_mid", 1 } };
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	class g36_MLI_distShot_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_02", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_03", 1 } };
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 1800, 1 } };
	};
	class g36_MLI_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\G36_MLI\g36_MLI_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class g36_MLI_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class g36_MLI_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class g36_MLI_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\G36_MLI\g36_mli_meadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class g36_MLI_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Urban", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class g36_MLI_silencerShot_SoundShader
	{
		samples[] = { 
			{ "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Close", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class g36_MLI_silencerTailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class g36_MLI_silencerTailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class g36_MLI_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail_Indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class g36_MLI_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class g36_MLI_silencerTailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\G36_MLI\G36_MLI_Silenced_Tail", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class g36c_MLI_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_first", 1 },
			{ "hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_first", 1 } };
		volume = 1;
		range = 5;
	};
	class g36c_MLI_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36c_MLI_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_mid", 1 } };
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	class g36c_MLI_distShot_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_02", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_03", 1 } };
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 1800, 1 } };
	};
	class g36c_MLI_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_MLI_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class g36c_MLI_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36c_MLI\G36C_MLI_trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class g36c_MLI_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36c_MLI\G36C_MLI_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class g36c_MLI_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c_MLI\g36c_mli_meadows", 1 } };
			volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
			range = 1800;
			limitation = 1;
	};
	class g36c_MLI_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36c_MLI\G36C_MLI_Urban", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
	class g36k_MLI_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_first", 1 },
			{ "hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_first", 1 } };
		volume = 1;
		range = 5;
	};
	class g36k_MLI_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36k_MLI_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_mid", 1 } };
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 1800, 0 } };
	};
	class g36k_MLI_distShot_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_01", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_02", 1 },
			{ "A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_distShot_03", 1 } };
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 1800, 1 } };
	};
	class g36k_MLI_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_indoor", 1 } };
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class g36k_MLI_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36k_MLI\G36K_MLI_Trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class g36k_MLI_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36k_MLI\G36K_MLI_Forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class g36k_MLI_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k_MLI\g36k_MLI_meadows", 1 } };
			volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
			range = 1800;
			limitation = 1;
	};
	class g36k_MLI_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36k_MLI\G36K_MLI_Urban", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};

	class g36_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36\g36_first", 1 },
			{ "hlc_wp_g36\snd\soundshaders\g36\g36_first", 1 } };
		range = 5;
		volume = 1.2;
	};
	class g36_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36\g36_close", 1 },
			{ "hlc_wp_g36\snd\soundshaders\g36\g36_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36\g36_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class g36_distShot_SoundShader
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
	class g36_tailDistant_SoundShader
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
	class g36_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36\G36_Forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class g36_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36\G36_Urban", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class g36_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36\g36_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class g36_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36\G36_Meadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class g36_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36\G36_Trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class g36_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Close", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class g36_silencerTailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class g36_silencerTailHouses_SoundShader
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
	class g36_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail_Indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class g36_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class g36_silencerTailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36\G36_Silenced_Tail", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};

	class g36c_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c\g36c_first", 1 },
			{ "hlc_wp_g36\snd\soundshaders\g36c\g36c_first", 1 } };
		range = 5;
		volume = 1.2;
	};
	class g36c_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c\g36c_close", 1 },
			{ "hlc_wp_g36\snd\soundshaders\g36c\g36c_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36c_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c\g36c_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class g36c_distShot_SoundShader
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
	class g36c_tailDistant_SoundShader
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
	class g36c_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36c\G36C_Forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class g36c_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36c\G36C_Urban", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class g36c_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36c\g36c_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class g36c_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36c\g36c_meadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class g36c_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36c\g36c_trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};

	class g36k_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k\g36k_first", 1 },
			{ "hlc_wp_g36\snd\soundshaders\g36k\g36k_first", 1 } };
		range = 5;
		volume = 1.2;
	};
	class g36k_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k\g36k_close", 1 },
			{ "hlc_wp_g36\snd\soundshaders\g36k\g36k_close", 1 } };
        volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class g36k_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k\g36k_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class g36k_distShot_SoundShader
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
	class g36k_tailDistant_SoundShader
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
	class g36k_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36k\G36K_Forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class g36k_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36k\G36K_Urban", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class g36k_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g36\snd\soundshaders\g36k\g36k_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class g36k_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36k\g36k_meadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class g36k_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_wp_g36\snd\soundshaders\g36k\G36K_Trees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
};
