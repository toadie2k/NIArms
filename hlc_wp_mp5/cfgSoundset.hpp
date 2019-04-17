
class CfgSoundSets
{
    class mp5_Shot_SoundSet
    {
        soundShaders[] = { "mp5_closeShot_SoundShader", "mp5_midShot_SoundShader", "mp5_distShot_SoundShader", "mp5_Closure_SoundShader" };
        volumeFactor = 1;
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
    class mp5_tail_SoundSet
    {
        soundShaders[] = { "mp5_tailDistant_SoundShader", "mp5_tailTrees_SoundShader", "mp5_tailForest_SoundShader", "mp5_tailMeadows_SoundShader", "mp5_tailHouses_SoundShader", "mp5_tailInterior_SoundShader" , "mp5_tailTrees_mid_SoundShader", "mp5_tailForest_mid_SoundShader", "mp5_tailMeadows_mid_SoundShader", "mp5_tailHouses_mid_SoundShader", "mp5_tailInterior_mid_SoundShader" };
        volumeFactor = 1.0;
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
    class mp5_silencerShot_SoundSet
    {
        soundShaders[] = { "mp5_silencerShot_SoundShader", "mp5_Closure_SoundShader", "mp5_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class mp5_silencerTail_SoundSet
    {
        soundShaders[] = { "mp5_silencerTailTrees_SoundShader", "mp5_silencerTailForest_SoundShader", "mp5_silencerTailMeadows_SoundShader", "mp5_silencerTailHouses_SoundShader", "mp5_silencerTailInterior_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };

    class mp5sd_silencerShot_SoundSet
    {
        soundShaders[] = { "mp5sd_silencerShot_SoundShader", "mp5_Closure_SoundShader", "mp5sd_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class mp5sd_silencerTail_SoundSet
    {
        soundShaders[] = { "mp5sd_silencerTailTrees_SoundShader", "mp5sd_silencerTailForest_SoundShader", "mp5sd_silencerTailMeadows_SoundShader", "mp5sd_silencerTailHouses_SoundShader", "mp5sd_silencerTailInterior_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };

    class mp5k_Shot_SoundSet
    {
        soundShaders[] = { "mp5k_closeShot_SoundShader", "mp5k_midShot_SoundShader", "mp5k_distShot_SoundShader", "mp5_Closure_SoundShader" };
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
    class mp5k_tail_SoundSet
    {
        soundShaders[] = { "mp5k_tailDistant_SoundShader", "mp5k_tailTrees_SoundShader", "mp5k_tailForest_SoundShader", "mp5k_tailMeadows_SoundShader", "mp5k_tailHouses_SoundShader", "mp5k_tailInterior_SoundShader", "mp5k_tailTrees_mid_SoundShader", "mp5k_tailForest_mid_SoundShader", "mp5k_tailMeadows_mid_SoundShader", "mp5k_tailHouses_mid_SoundShader", "mp5k_tailInterior_mid_SoundShader"  };
        volumeFactor = 1.0;
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

    class 9mmar_Shot_SoundSet
    {
        soundShaders[] = { "9mmar_closeShot_SoundShader", "9mmar_midShot_SoundShader", "9mmar_distShot_SoundShader", "mp5_Closure_SoundShader" };
        volumeFactor = 1.1;
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
    class 9mmar_tail_SoundSet
    {
        soundShaders[] = { "9mmar_tailDistant_SoundShader", "9mmar_tailTrees_SoundShader", "9mmar_tailForest_SoundShader", "9mmar_tailMeadows_SoundShader", "9mmar_tailHouses_SoundShader", "9mmar_tailInterior_SoundShader", "9mmar_tailTrees_mid_SoundShader", "9mmar_tailForest_mid_SoundShader", "9mmar_tailMeadows_mid_SoundShader", "9mmar_tailHouses_mid_SoundShader", "9mmar_tailInterior_mid_SoundShader" };
        volumeFactor = 1.0;
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

    class mp510_Shot_SoundSet
    {
        soundShaders[] = { "mp510_closeShot_SoundShader", "mp510_midShot_SoundShader", "mp510_distShot_SoundShader", "mp510_Closure_SoundShader" };
        volumeFactor = 1.2;
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

    class mp510_tail_SoundSet
    {
        soundShaders[] = { "mp510_tailDistant_SoundShader", "mp510_tailTrees_SoundShader", "mp510_tailForest_SoundShader", "mp510_tailMeadows_SoundShader", "mp510_tailHouses_SoundShader", "mp510_tailInterior_SoundShader", "mp510_tailTrees_mid_SoundShader", "mp510_tailForest_mid_SoundShader", "mp510_tailMeadows_mid_SoundShader", "mp510_tailHouses_mid_SoundShader", "mp510_tailInterior_mid_SoundShader" };
        volumeFactor = 1.0;
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
    class mp510_silencerShot_SoundSet
    {
        soundShaders[] = { "mp510_silencerShot_SoundShader", "mp510_Closure_SoundShader", "mp510_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class mp510_silencerTail_SoundSet
    {
        soundShaders[] = { "mp510_silencerTailTrees_SoundShader", "mp510_silencerTailForest_SoundShader", "mp510_silencerTailMeadows_SoundShader", "mp510_silencerTailHouses_SoundShader", "mp510_silencerTailInterior_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
};
