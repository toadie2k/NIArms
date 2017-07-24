
class CfgSoundSets
{
	/*
	class 300BLK_Shot_SoundSet
	{
		soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_closeShot_SoundShader", "300BLK_midShot_SoundShader", "300BLK_distShot_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class 300BLK_Tail_SoundSet
	{
		soundShaders[] = { "300BLK_tailInterior_SoundShader", "300BLK_tailTrees_SoundShader", "300BLK_tailForest_SoundShader", "300BLK_tailMeadows_SoundShader", "300BLK_tailHouses_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class 300BLK_Shot_Silenced_SoundSet
	{
		soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_Shot_Silenced_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class 300BLK_ShotTail_Silenced_SoundSet
	{
		soundShaders[] = { "300BLK_tailInterior_Silenced_SoundShader", "300BLK_tailTrees_Silenced_SoundShader", "300BLK_tailForest_Silenced_SoundShader", "300BLK_tailMeadows_Silenced_SoundShader", "300BLK_tailHouses_Silenced_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class 300BLK_silencerShot_SoundSet
	{
		soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_silencerShot_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class 300BLK_silencerTail_SoundSet
	{
		soundShaders[] = { "300BLK_silencerTailTrees_SoundShader", "300BLK_silencerTailForest_SoundShader", "300BLK_silencerTailMeadows_SoundShader", "300BLK_silencerTailHouses_SoundShader", "300BLK_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	*/
	class acr_Shot_SoundSet
	{
		soundShaders[] = { "acr_closeShot_SoundShader", "acr_midShot_SoundShader", "acr_distShot_SoundShader", "acr_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class acr_Tail_SoundSet
	{
		soundShaders[] = { "acr_tailDistant_SoundShader", "acr_tailForest_SoundShader", "acr_tailHouses_SoundShader", "acr_tailInterior_SoundShader", "acr_tailMeadows_SoundShader", "acr_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
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
	class acr_silencerShot_SoundSet
	{
		soundShaders[] = { "acr_silencerShot_SoundShader", "acr_Closure_SoundShader","acr_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class acr_silencerTail_SoundSet
	{
		soundShaders[] = { "acr_silencerTailTrees_SoundShader", "acr_silencerTailForest_SoundShader", "acr_silencerTailMeadows_SoundShader", "acr_silencerTailHouses_SoundShader", "acr_silencerTailInterior_SoundShader" };
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
	};
	class ACRsixeight_Shot_SoundSet
	{
		soundShaders[] = { "ACRsixeight_closeShot_SoundShader", "ACRsixeight_midShot_SoundShader", "ACRsixeight_distShot_SoundShader", "ACRsixeight_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class ACRsixeight_Tail_SoundSet
	{
		soundShaders[] = { "ACRsixeight_tailDistant_SoundShader", "ACRsixeight_tailForest_SoundShader", "ACRsixeight_tailHouses_SoundShader", "ACRsixeight_tailInterior_SoundShader", "ACRsixeight_tailMeadows_SoundShader", "ACRsixeight_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
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
	class ACRsixeight_silencerShot_SoundSet
	{
		soundShaders[] = { "ACRsixeight_silencerShot_SoundShader", "ACRsixeight_Closure_SoundShader","acrsixeight_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class ACRsixeight_silencerTail_SoundSet
	{
		soundShaders[] = { "ACRsixeight_silencerTailTrees_SoundShader", "ACRsixeight_silencerTailForest_SoundShader", "ACRsixeight_silencerTailMeadows_SoundShader", "ACRsixeight_silencerTailHouses_SoundShader", "ACRsixeight_silencerTailInterior_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
	};
    class ACRsixeight_apology_SoundSet
    {
        soundShaders[] = { "ACRsixeight_closeShot_SoundShader", "ACRsixeight_midShot_SoundShader", "ACRsixeight_distShot_SoundShader", "acrsixeight_apologyclose_SoundShader","acrsixeight_apologymid_SoundShader", "ACRsixeight_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
};
