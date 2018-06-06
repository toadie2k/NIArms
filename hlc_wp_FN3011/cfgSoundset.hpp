
class CfgSoundSets {
    class fn3011_Shot_SoundSet {
        soundShaders[] = { "fn3011_closeShot_SoundShader", "fn3011_midShot_SoundShader", "fn3011_distShot_SoundShader", "fn3011_Closure_SoundShader" };
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
    class fn3011_Tail_SoundSet {
        soundShaders[] = { "fn3011_tailDistant_SoundShader", "fn3011_tailForest_SoundShader", "fn3011_tailHouses_SoundShader", "fn3011_tailInterior_SoundShader", "fn3011_tailMeadows_SoundShader", "fn3011_tailTrees_SoundShader" };
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
    class fn3011_silencerShot_SoundSet {
        soundShaders[] = { "fn3011_silencerShot_SoundShader", "fn3011_Closure_SoundShader", "fn3011_silencermidShot_SoundShader" };
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
    class fn3011_silencerTail_SoundSet {
        soundShaders[] = { "fn3011_silencerTailTrees_SoundShader", "fn3011_silencerTailForest_SoundShader", "fn3011_silencerTailMeadows_SoundShader", "fn3011_silencerTailHouses_SoundShader", "fn3011_silencerTailInterior_SoundShader" };
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
