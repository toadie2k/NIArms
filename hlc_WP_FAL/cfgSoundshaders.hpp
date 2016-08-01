
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
	class FAL_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\fal_first", 1 } };
		range = 5;
		volume = 1.2;
	};
	class FAL_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\FAL_close", 1 }
		};
		volume = 1.0;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class FAL_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\fal_mid", 1 } };
		volume = 0.5011872;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class FAL_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class FAL_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class FAL_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\fal308_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class FAL_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class FAL_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\fal_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class FAL_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class FAL_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class FAL_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\FAL_suppressed_close", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class FAL_silencerTailForest_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailForest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class FAL_silencerTailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailHouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class FAL_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\fal_sil_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class FAL_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class FAL_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class FAL2_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\FAL2_close", 1 }
		};
		volume = 1.0;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class FAL2_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\FAL2_mid", 1 } };
		volume = 0.5011872;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class FAL2_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class FAL2_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class FAL2_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\fal308_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class FAL2_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class FAL2_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\FAL2_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class FAL2_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class FAL2_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class OSW_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\OSW_close", 1 }
		};
		volume = 1.0;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class OSW_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\OSW_mid", 1 } };
		volume = 0.5011872;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class OSW_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class OSW_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class OSW_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\fal308_forest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class OSW_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class OSW_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\OSW_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class OSW_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class OSW_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
};
