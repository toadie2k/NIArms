
class CfgSoundShaders
{
	class MG42_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\mg42\mg42_first", 1 } };
		range = 10;
        volume = 1.2;
		rangeCurve[] = {
			{ 0, 1 },
			{ 10, 0 } };
	};
	class MG42_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_close1", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_close2", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_close3", 1 } };
        volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class MG42_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_mid1", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_mid2", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_mid3", 1 } };
		volume = 1.672;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class MG42_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_dist1", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_dist2", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\mg42\MG42_dist3", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class MG42_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant", 1 } };
		volume = 0.4;
		range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
	};
	class MG42_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest", 1 } };
        volume = "1*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class MG42_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses", 1 } };
        volume = "1*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class MG42_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\mg42\mg42_indoor", 1 } };
        volume = "1*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class MG42_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\hlc_wp_MG3\snd\soundshaders\mg42\mg42_meadow", 1 } };
        volume = "1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class MG42_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees", 1 } };
        volume = "1*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class MG42_silencerShot_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01", 1 },
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02", 1 },
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class MG42_silencerTailForest_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class MG42_silencerTailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class MG42_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class MG42_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class MG42_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};

	class MG3_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_first", 1 } };
        range = 10;
        volume = 1.2;
	};
	class MG3_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_close1", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_close2", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_close3", 1 } };
        volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class MG3_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_mid1", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_mid2", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_mid3", 1 } };
		volume = 1.672;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class MG3_distShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_dist1", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_dist2", 1 },
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_dist3", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class MG3_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant", 1 } };
		volume = 0.4;
		range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
	};
	class MG3_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest", 1 } };
        volume = "1*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class MG3_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses", 1 } };
        volume = "1*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class MG3_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_MG3\snd\soundshaders\MG3\MG3_indoor", 1 } };
        volume = "1*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class MG3_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\hlc_wp_MG3\snd\soundshaders\MG3\MG3_meadow", 1 } };
        volume = "1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class MG3_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees", 1 } };
        volume = "1*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class MG3_silencerShot_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01", 1 },
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02", 1 },
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class MG3_silencerTailForest_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class MG3_silencerTailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class MG3_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class MG3_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class MG3_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
};
