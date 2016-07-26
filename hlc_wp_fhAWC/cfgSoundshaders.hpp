
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
	class AWM_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_fhAWC\snd\AWC_first", 1 } };
		range = 5;
		volume = 1.2;
	};
	class AWM_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_Close", 1 } };
		volume = 0.85;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class AWM_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_mid", 1 } };
		volume = 0.70794576;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class AWM_distShot_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_01", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_02", 1 },
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_03", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class AWM_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_taildistant", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class AWM_tailForest_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailforest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class AWM_tailHouses_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailhouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 1500;
		rangeCurve[] = {
			{ 0, 1 },
			{ 250, 0.3 },
			{ 1500, 0 } };
		limitation = 1;
	};
	class AWM_tailInterior_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailinterior", 1 } };
		volume = "interior";
		range = 350;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.4 },
			{ 100, 0.2 },
			{ 350, 0 } };
		limitation = 1;
	};
	class AWM_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class AWM_tailTrees_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tailtrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 2000;
		rangeCurve[] = {
			{ 0, 1 },
			{ 2000, 0 } };
		limitation = 1;
	};
	class awc_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_Close", 1 } };
		volume = 1.0;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class AWc_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_mid", 1 } };
		volume = 0.70794576;
		range = 350;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 100, 1 },
			{ 300, 0 },
			{ 350, 0 } };
	};
	class awc_silencerTailForest_SoundShader
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
	class awc_silencerTailHouses_SoundShader
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
	class awc_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class awc_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class awc_silencerTailTrees_SoundShader
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

};
