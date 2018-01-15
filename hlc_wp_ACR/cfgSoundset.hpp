
class CfgSoundSets
{
	
	class acr_Shot_SoundSet
	{
		soundShaders[] = { "acr_closeShot_SoundShader", "acr_midShot_SoundShader", "acr_distShot_SoundShader", "acr_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
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
	class acr_Tail_SoundSet
	{
		soundShaders[] = { "acr_tailDistant_SoundShader", "acr_tailForest_SoundShader", "acr_tailHouses_SoundShader", "acr_tailInterior_SoundShader", "acr_tailMeadows_SoundShader", "acr_tailTrees_SoundShader", "acr_tailForest_mid_SoundShader", "acr_tailHouses_mid_SoundShader", "acr_tailInterior_mid_SoundShader", "acr_tailMeadows_mid_SoundShader", "acr_tailTrees_mid_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
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
	class acr_silencerShot_SoundSet
	{
		soundShaders[] = { "acr_silencerShot_SoundShader", "acr_Closure_SoundShader","acr_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
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
	class acr_silencerTail_SoundSet
	{
		soundShaders[] = { "acr_silencerTailTrees_SoundShader", "acr_silencerTailForest_SoundShader", "acr_silencerTailMeadows_SoundShader", "acr_silencerTailHouses_SoundShader", "acr_silencerTailInterior_SoundShader" };
        volumeFactor = 1;
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
		frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class ACRsixeight_Tail_SoundSet
	{
		soundShaders[] = { "ACRsixeight_tailDistant_SoundShader", "ACRsixeight_tailForest_SoundShader", "ACRsixeight_tailHouses_SoundShader", "ACRsixeight_tailInterior_SoundShader", "ACRsixeight_tailMeadows_SoundShader", "ACRsixeight_tailTrees_SoundShader","ACRsixeight_tailForest_mid_SoundShader", "ACRsixeight_tailHouses_mid_SoundShader", "ACRsixeight_tailInterior_mid_SoundShader", "ACRsixeight_tailMeadows_mid_SoundShader", "ACRsixeight_tailTrees_mid_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare2Curve";
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
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
};
