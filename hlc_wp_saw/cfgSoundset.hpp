
class CfgSoundSets
{
	class mk48_Shot_SoundSet
	{
		soundShaders[] = { "mk48_closeShot_SoundShader", "mk48_midShot_SoundShader", "mk48_distShot_SoundShader", "mk48_Closure_SoundShader" };
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class mk48_tail_SoundSet
	{
		soundShaders[] = { "mk48_tailDistant_SoundShader", "mk48_tailForest_SoundShader", "mk48_tailHouses_SoundShader", "mk48_tailInterior_SoundShader", "mk48_tailMeadows_SoundShader", "mk48_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
        stereoStartDistance = 100;
        stereoRadius = 50;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
	};
	class mk48_silencerShot_SoundSet
	{
		soundShaders[] = { "mk48_silencerShot_SoundShader", "mk48_Closure_SoundShader" };
        volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class mk48_silencerTail_SoundSet
	{
		soundShaders[] = { "mk48_silencerTailTrees_SoundShader", "mk48_silencerTailForest_SoundShader", "mk48_silencerTailMeadows_SoundShader", "mk48_silencerTailHouses_SoundShader", "mk48_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class SAW_Shot_SoundSet
	{
		soundShaders[] = { "SAW_closeShot_SoundShader", "SAW_midShot_SoundShader", "SAW_distShot_SoundShader", "SAW_Closure_SoundShader" };
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class SAW_tail_SoundSet
	{
		soundShaders[] = { "SAW_tailDistant_SoundShader", "SAW_tailForest_SoundShader", "SAW_tailHouses_SoundShader", "SAW_tailInterior_SoundShader", "SAW_tailMeadows_SoundShader", "SAW_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
        stereoStartDistance = 100;
        stereoRadius = 50;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
	};
	class SAW_silencerShot_SoundSet
	{
		soundShaders[] = { "SAW_silencerShot_SoundShader", "SAW_Closure_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class SAW_silencerTail_SoundSet
	{
		soundShaders[] = { "SAW_silencerTailTrees_SoundShader", "SAW_silencerTailForest_SoundShader", "SAW_silencerTailMeadows_SoundShader", "SAW_silencerTailHouses_SoundShader", "SAW_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
	};
};
