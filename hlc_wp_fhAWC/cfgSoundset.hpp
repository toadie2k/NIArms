
class CfgSoundSets {
    class awm_Shot_SoundSet {
        soundShaders[] = { "awm_closeShot_SoundShader", "awm_midShot_SoundShader", "awm_distShot_SoundShader", "awm_Closure_SoundShader" };
        volumeFactor = 1.2;
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
    class awm_Tail_SoundSet {
        soundShaders[] = { "awm_tailDistant_SoundShader", "awm_tailForest_SoundShader", "awm_tailHouses_SoundShader", "awm_tailInterior_SoundShader", "awm_tailMeadows_SoundShader", "awm_tailTrees_SoundShader" };
        volumeFactor = 1.3;
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
    class awc_silencerShot_SoundSet {
        soundShaders[] = { "awc_silencerShot_SoundShader", "awm_Closure_SoundShader", "AWc_midShot_SoundShader" };
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
    class awc_silencerTail_SoundSet {
        soundShaders[] = { "awc_silencerTailTrees_SoundShader", "awc_silencerTailForest_SoundShader", "awc_silencerTailMeadows_SoundShader", "awc_silencerTailHouses_SoundShader", "awc_silencerTailInterior_SoundShader" };
        volumeFactor = 1;
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
};
