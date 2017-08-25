
class CfgSoundSets {
    class m14_Shot_SoundSet {
        soundShaders[] = { "m14_closeShot_SoundShader", "m14_midShot_SoundShader", "m14_distShot_SoundShader", "m14_Closure_SoundShader" };
        volumeFactor = 1.24;
        volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class m14_tail_SoundSet {
        soundShaders[] = { "m14_tailDistant_SoundShader", "m14_tailForest_SoundShader", "m14_tailHouses_SoundShader", "m14_tailInterior_SoundShader", "m14_tailMeadows_SoundShader", "m14_tailTrees_SoundShader" };
        volumeFactor = 1.0;
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
    class m14_silencerShot_SoundSet {
        soundShaders[] = { "m14_silencerShot_SoundShader", "m14_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare3Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class m14_silencerTail_SoundSet {
        soundShaders[] = { "m14_silencerTailTrees_SoundShader", "m14_silencerTailForest_SoundShader", "m14_silencerTailMeadows_SoundShader", "m14_silencerTailHouses_SoundShader", "m14_silencerTailInterior_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 3;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class m14tactical_Shot_SoundSet {
        soundShaders[] = { "m14tactical_closeShot_SoundShader", "m14tactical_midShot_SoundShader", "m14tactical_distShot_SoundShader", "m14tactical_Closure_SoundShader" };
        volumeFactor = 1.4;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.5;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class m14tactical_tail_SoundSet {
        soundShaders[] = { "m14tactical_tailDistant_SoundShader", "m14tactical_tailForest_SoundShader", "m14tactical_tailHouses_SoundShader", "m14tactical_tailInterior_SoundShader", "m14tactical_tailMeadows_SoundShader", "m14tactical_tailTrees_SoundShader" };
        volumeFactor = 1.0;
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
};
