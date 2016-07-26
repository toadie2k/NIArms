
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
	class G3_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3_first", 1 } };
		range = 5;
		volume = 1.2;
	};
	class G3_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3_close", 1 }
		};
		volume = 0.9;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class G3_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3_mid", 1 } };
		volume = 0.5011872;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class G3_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_01", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_02", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class G3_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class G3_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class G3_tailHouses_SoundShader
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
	class G3_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class G3_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class G3_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class G3_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3a3_suppressed", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class G3_silencerTailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailForest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class G3_silencerTailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailHouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class G3_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3_sil_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class G3_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class G3_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class G3KA4_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3KA4_close", 1 }
		};
		volume = 0.9;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class G3KA4_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3KA4_mid", 1 } };
		volume = 0.5011872;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class G3KA4_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_01", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_02", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class G3KA4_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class G3KA4_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class G3KA4_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class G3KA4_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class G3KA4_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class G3KA4_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	
	class G3SG1_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3SG1_close", 1 }
		};
		volume = 0.9;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class G3SG1_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3SG1_mid", 1 } };
		volume = 0.5011872;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class G3SG1_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_01", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_02", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class G3SG1_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class G3SG1_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class G3SG1_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class G3SG1_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\generic\G3_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class G3SG1_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class G3SG1_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};

	class HK51_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\hk51\HK51_close", 1 }
		};
		volume = 0.9;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class HK51_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\hk51\HK51_mid", 1 } };
		volume = 0.5011872;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class HK51_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_01", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_02", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class HK51_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class HK51_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class HK51_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class HK51_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\hk51\hk51_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class HK51_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class HK51_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};

	class PSG1_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\psg1\PSG1_close", 1 }
		};
		volume = 0.9;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class PSG1_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\psg1\PSG1_mid", 1 } };
		volume = 0.5011872;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class PSG1_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_01", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_02", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class PSG1_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class PSG1_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class PSG1_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class PSG1_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_G3\snd\soundshaders\psg1\PSG1_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class PSG1_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class PSG1_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
	class hk33_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk33\hk33_first", 1 },
			{ "hlc_wp_g3\snd\soundshaders\hk33\hk33_first", 1 } };
		range = 5;
		volume = 1.2;
	};
	class hk33_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk33\hk33_close", 1 },
			{ "hlc_wp_g3\snd\soundshaders\hk33\hk33_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class hk33_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk33\hk33_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class hk33_distShot_SoundShader
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
	class hk33_tailDistant_SoundShader
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
	class hk33_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class hk33_tailHouses_SoundShader
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
	class hk33_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk33\hk33_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class hk33_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailmeadows", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class hk33_tailTrees_SoundShader
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
	class hk33_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk53\hk53_Suppressed", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class hk33_silencerTailForest_SoundShader
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
	class hk33_silencerTailHouses_SoundShader
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
	class hk33_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk53\hk53_Suppressed_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class hk33_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencertailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class hk33_silencerTailTrees_SoundShader
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
	class hk53_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk53\hk53_close", 1 },
			{ "hlc_wp_g3\snd\soundshaders\hk53\hk53_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class hk53_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk53\hk53_mid", 1 } };
		volume = 0.70794576;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class hk53_distShot_SoundShader
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
	class hk53_tailDistant_SoundShader
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
	class hk53_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class hk53_tailHouses_SoundShader
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
	class hk53_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_g3\snd\soundshaders\hk53\hk53_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class hk53_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailmeadows", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class hk53_tailTrees_SoundShader
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
};
