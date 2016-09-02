
class CfgSoundSets
{
	class M1903a1_Shot_SoundSet
	{
		soundShaders[] = { "M1903a1_closeShot_SoundShader", "M1903a1_midShot_SoundShader", "M1903a1_distShot_SoundShader", "M1903a1_Closure_SoundShader" };
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class M1903a1_tail_SoundSet
	{
		soundShaders[] = { "M1903a1_tailDistant_SoundShader", "M1903a1_tailForest_SoundShader", "M1903a1_tailHouses_SoundShader", "M1903a1_tailInterior_SoundShader", "M1903a1_tailMeadows_SoundShader", "M1903a1_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class M1903a1_silencerShot_SoundSet
	{
		soundShaders[] = { "M1903a1_silencerShot_SoundShader", "M1903a1_Closure_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class M1903a1_silencerTail_SoundSet
	{
		soundShaders[] = { "M1903a1_silencerTailTrees_SoundShader", "M1903a1_silencerTailForest_SoundShader", "M1903a1_silencerTailMeadows_SoundShader", "M1903a1_silencerTailHouses_SoundShader", "M1903a1_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};
