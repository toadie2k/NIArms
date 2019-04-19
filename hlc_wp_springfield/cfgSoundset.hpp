
class CfgSoundSets
{
	class M1903a1_Shot_SoundSet
	{
		soundShaders[] = { "M1903a1_closeShot_SoundShader", "M1903a1_midShot_SoundShader", "M1903a1_distShot_SoundShader", "M1903a1_Closure_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class M1903a1_tail_SoundSet
	{
		soundShaders[] = { "M1903a1_tailDistant_SoundShader", "M1903a1_tailForest_SoundShader", "M1903a1_tailHouses_SoundShader", "M1903a1_tailInterior_SoundShader", "M1903a1_tailMeadows_SoundShader", "M1903a1_tailTrees_SoundShader", "M1903a1_tailForest_mid_SoundShader", "M1903a1_tailHouses_mid_SoundShader", "M1903a1_tailInterior_mid_SoundShader", "M1903a1_tailMeadows_mid_SoundShader", "M1903a1_tailTrees_mid_SoundShader" };
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
	};
	class M1903a1_silencerShot_SoundSet
	{
		soundShaders[] = { "M1903a1_silencerShot_SoundShader", "M1903a1_Closure_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
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
        occlusionFactor = 0.3;
        obstructionFactor = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};
