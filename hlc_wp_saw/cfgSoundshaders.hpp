
class CfgSoundShaders
{
	class mk48_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\mk48\mk48_first", 1 } };
		range = 5;
		volume = 1;
	};
	class mk48_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\mk48\mk48_close", 1 } };
		volume = 0.85;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class mk48_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\mk48\mk48_mid", 1 } };
		volume = 0.5011872;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class mk48_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_01", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_02", 1 },
			{ "\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_03", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class mk48_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class mk48_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class mk48_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class mk48_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\mk48\mk48_fire_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class mk48_tailMeadows_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailmeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class mk48_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class mk48_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\mk48\gpmg_suppressed", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class mk48_silencerTailForest_SoundShader
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
	class mk48_silencerTailHouses_SoundShader
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
	class mk48_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\mk48\gpmg_suppressed_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class mk48_silencerTailMeadows_SoundShader
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
	class mk48_silencerTailTrees_SoundShader
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
	class SAW_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\saw\SAW_first", 1 } };
		range = 5;
		volume = 1;
	};
	class SAW_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\saw\SAW_close", 1 } };
		volume = 0.85;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class SAW_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\saw\SAW_mid", 1 } };
		volume = 0.5011872;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class SAW_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_distShot_03", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class SAW_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class SAW_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class SAW_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class SAW_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\saw\saw_indoor", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class SAW_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\saw\saw_meadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class SAW_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class SAW_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\saw\saw_suppressed", 1 } };
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class SAW_silencerTailForest_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailForest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class SAW_silencerTailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailHouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class SAW_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_saw\snd\soundshaders\saw\saw_suppressed_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class SAW_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailMeadows", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class SAW_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
};
