
class CfgSoundSets
{
    class NIA_416Rifle_Shot_SoundSet {
        soundShaders[] = { "NIA_416Rifle_closeShot_SoundShader", "NIA_416Rifle_midShot_SoundShader", "NIA_416Rifle_distShot_SoundShader", "NIA_416Rifle_Closure_SoundShader" };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
    };
    class NIA_416Rifle_Tail_SoundSet {
        soundShaders[] = { "NIA_416Rifle_tailDistant_SoundShader","NIA_416Rifle_tailForest_SoundShader", "NIA_416Rifle_tailForest_mid_SoundShader", "NIA_416Rifle_tailHouses_SoundShader", "NIA_416Rifle_tailHouses_mid_SoundShader", "NIA_416Rifle_tailInterior_SoundShader", "NIA_416Rifle_tailInterior_mid_SoundShader", "NIA_416Rifle_tailMeadows_SoundShader", "NIA_416Rifle_tailHouses_mid_SoundShader", "NIA_416Rifle_tailTrees_SoundShader", "NIA_416Rifle_tailTrees_mid_SoundShader" };
        volumeFactor = 1.1;
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
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
    class NIA_416Rifle_silencerShot_SoundSet {
        soundShaders[] = { "NIA_416Rifle_silencerShot_SoundShader", "NIA_416Rifle_Closure_SoundShader", "NIA_416Rifle_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class NIA_416Rifle_silencerTail_SoundSet {
        soundShaders[] = { "NIA_416Rifle_silencerTailTrees_SoundShader", "NIA_416Rifle_silencerTailForest_SoundShader", "NIA_416Rifle_silencerTailMeadows_SoundShader", "NIA_416Rifle_silencerTailHouses_SoundShader", "NIA_416Rifle_silencerTailInterior_SoundShader" };
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
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };

    class NIA_416Carbine_Shot_SoundSet {
        soundShaders[] = { "NIA_416Carbine_closeShot_SoundShader", "NIA_416Carbine_midShot_SoundShader", "NIA_416Carbine_distShot_SoundShader", "NIA_416Carbine_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
    };
    class NIA_416Carbine_Tail_SoundSet {
        soundShaders[] = { "NIA_416Carbine_tailDistant_SoundShader","NIA_416Carbine_tailForest_SoundShader", "NIA_416Carbine_tailHouses_SoundShader", "NIA_416Carbine_tailInterior_SoundShader", "NIA_416Carbine_tailMeadows_SoundShader", "NIA_416Carbine_tailTrees_mid_SoundShader", "NIA_416Carbine_tailForest_mid_SoundShader", "NIA_416Carbine_tailHouses_mid_SoundShader", "NIA_416Carbine_tailInterior_mid_SoundShader", "NIA_416Carbine_tailMeadows_mid_SoundShader", "NIA_416Carbine_tailTrees_mid_SoundShader" };
        volumeFactor = 1.1;
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
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
    class NIA_416Carbine_silencerShot_SoundSet {
        soundShaders[] = { "NIA_416Carbine_silencerShot_SoundShader", "NIA_416Carbine_Closure_SoundShader", "NIA_416Carbine_silencerShot_mid_SoundShader" };
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
    class NIA_416Carbine_silencerTail_SoundSet {
        soundShaders[] = { "NIA_416Carbine_silencerTailTrees_SoundShader", "NIA_416Carbine_silencerTailForest_SoundShader", "NIA_416Carbine_silencerTailMeadows_SoundShader", "NIA_416Carbine_silencerTailHouses_SoundShader", "NIA_416Carbine_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
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


    class NIA_416SBR_Shot_SoundSet {
        soundShaders[] = { "NIA_416SBR_tailDistant_SoundShader","NIA_416SBR_closeShot_SoundShader", "NIA_416SBR_midShot_SoundShader", "NIA_416SBR_distShot_SoundShader", "NIA_416SBR_Closure_SoundShader" };
        volumeFactor = 1.35;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5;
        frequencyRandomizerMin = 0.1;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = HLC_defaultDistanceFilter;
    };
    class NIA_416SBR_Tail_SoundSet {
        soundShaders[] = { "NIA_416SBR_tailForest_SoundShader", "NIA_416SBR_tailHouses_SoundShader", "NIA_416SBR_tailInterior_SoundShader", "NIA_416SBR_tailMeadows_SoundShader", "NIA_416SBR_tailTrees_SoundShader", "NIA_416SBR_tailForest_mid_SoundShader", "NIA_416SBR_tailHouses_mid_SoundShader", "NIA_416SBR_tailInterior_mid_SoundShader", "NIA_416SBR_tailMeadows_mid_SoundShader", "NIA_416SBR_tailTrees_mid_SoundShader" };
        volumeFactor = 1.1;
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
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
    class NIA_416SBR_silencerShot_SoundSet {
        soundShaders[] = { "NIA_416SBR_silencerShot_SoundShader", "NIA_416SBR_Closure_SoundShader", "NIA_416SBR_silencerShot_mid_SoundShader" };
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
    class NIA_416SBR_silencerTail_SoundSet {
        soundShaders[] = { "NIA_416SBR_silencerTailTrees_SoundShader", "NIA_416SBR_silencerTailForest_SoundShader", "NIA_416SBR_silencerTailMeadows_SoundShader", "NIA_416SBR_silencerTailHouses_SoundShader", "NIA_416SBR_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
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
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
};
