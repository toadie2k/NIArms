
class CfgSoundSets
{

    class nia_sg550_Shot_SoundSet
    {
        soundShaders[] = { "nia_sg550_closeShot_SoundShader", "nia_sg550_midShot_SoundShader", "nia_sg550_distShot_SoundShader", "nia_sg550_Closure_SoundShader" };
        volumeFactor = 1.25;
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
        stereoStartDistance = 8;
        stereoRadius = 10;
    };
    class nia_sg550_Tail_SoundSet
    {
        soundShaders[] = { "nia_sg550_tailDistant_SoundShader","nia_sg550_tailForest_SoundShader", "nia_sg550_tailHouses_SoundShader", "nia_sg550_tailInterior_SoundShader", "nia_sg550_tailMeadows_SoundShader", "nia_sg550_tailTrees_SoundShader", "NIA_sg550_tailForest_mid_SoundShader", "nia_sg550_tailHouses_mid_SoundShader", "nia_sg550_tailInterior_mid_SoundShader", "nia_sg550_tailMeadows_mid_SoundShader", "nia_sg550_tailTrees_mid_SoundShader" };
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
        stereoStartDistance = 50;
        stereoRadius = 25;
    };
    class nia_sg550_silencerShot_SoundSet
    {
        soundShaders[] = { "nia_sg550_silencerShot_SoundShader", "nia_sg550_Closure_SoundShader", "nia_sg550_silencerShot_mid_SoundShader" };
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
    class nia_sg550_silencerTail_SoundSet
    {
        soundShaders[] = { "nia_sg550_silencerTailTrees_SoundShader", "nia_sg550_silencerTailForest_SoundShader", "nia_sg550_silencerTailMeadows_SoundShader", "nia_sg550_silencerTailHouses_SoundShader", "nia_sg550_silencerTailInterior_SoundShader" };
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

    class nia_sg551_Shot_SoundSet
    {
        soundShaders[] = { "nia_sg551_closeShot_SoundShader", "nia_sg551_midShot_SoundShader", "nia_sg551_distShot_SoundShader", "nia_sg551_Closure_SoundShader" };
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
        stereoStartDistance = 8;
        stereoRadius = 10;
    };
    class nia_sg551_Tail_SoundSet
    {
        soundShaders[] = {"nia_sg551_tailDistant_SoundShader", "nia_sg551_tailForest_SoundShader", "nia_sg551_tailHouses_SoundShader", "nia_sg551_tailInterior_SoundShader", "nia_sg551_tailMeadows_SoundShader", "nia_sg551_tailTrees_SoundShader", "nia_sg551_tailForest_mid_SoundShader", "nia_sg551_tailHouses_mid_SoundShader", "nia_sg551_tailInterior_mid_SoundShader", "nia_sg551_tailMeadows_mid_SoundShader", "nia_sg551_tailTrees_mid_SoundShader" };
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
        stereoStartDistance = 50;
        stereoRadius = 25;
    };
    class nia_sg551_silencerShot_SoundSet
    {
        soundShaders[] = { "nia_sg551_silencerShot_SoundShader", "nia_sg551_Closure_SoundShader", "nia_sg551_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class nia_sg551_silencerTail_SoundSet
    {
        soundShaders[] = { "nia_sg551_silencerTailTrees_SoundShader", "nia_sg551_silencerTailForest_SoundShader", "nia_sg551_silencerTailMeadows_SoundShader", "nia_sg551_silencerTailHouses_SoundShader", "nia_sg551_silencerTailInterior_SoundShader" };
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

    class nia_sg553_Shot_SoundSet
    {
        soundShaders[] = { "nia_sg553_closeShot_SoundShader", "nia_sg553_midShot_SoundShader", "nia_sg553_distShot_SoundShader", "nia_sg553_Closure_SoundShader" };
        volumeFactor = 1.4;
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
        stereoStartDistance = 8;
        stereoRadius = 10;
    };
    class nia_sg553_Tail_SoundSet
    {
        soundShaders[] = { "nia_sg553_tailDistant_SoundShader","nia_sg553_tailForest_SoundShader", "nia_sg553_tailHouses_SoundShader", "nia_sg553_tailInterior_SoundShader", "nia_sg553_tailMeadows_SoundShader", "nia_sg553_tailTrees_SoundShader", "nia_sg553_tailForest_mid_SoundShader", "nia_sg553_tailHouses_mid_SoundShader", "nia_sg553_tailInterior_mid_SoundShader", "nia_sg553_tailMeadows_mid_SoundShader", "nia_sg553_tailTrees_mid_SoundShader" };
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
        stereoStartDistance = 50;
        stereoRadius = 50;
    };
    class nia_sg553_silencerShot_SoundSet
    {
        soundShaders[] = { "nia_sg553_silencerShot_SoundShader", "nia_sg553_Closure_SoundShader", "nia_sg553_silencershot_mid_soundshader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class nia_sg553_silencerTail_SoundSet
    {
        soundShaders[] = { "nia_sg553_silencerTailTrees_SoundShader", "nia_sg553_silencerTailForest_SoundShader", "nia_sg553_silencerTailMeadows_SoundShader", "nia_sg553_silencerTailHouses_SoundShader", "nia_sg553_silencerTailInterior_SoundShader" };
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

    class nia_sg553r_Shot_SoundSet
    {
        soundShaders[] = { "nia_sg553r_closeShot_SoundShader", "nia_sg553r_midShot_SoundShader", "nia_sg553r_distShot_SoundShader", "nia_sg553r_Closure_SoundShader" };
        volumeFactor = 1.4;
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
        stereoStartDistance = 8;
        stereoRadius = 10;
    };
    class nia_sg553r_Tail_SoundSet
    {
        soundShaders[] = { "nia_sg553r_tailDistant_SoundShader","nia_sg553r_tailForest_SoundShader", "nia_sg553r_tailHouses_SoundShader", "nia_sg553r_tailInterior_SoundShader", "nia_sg553r_tailMeadows_SoundShader", "nia_sg553r_tailTrees_SoundShader", "nia_sg553r_tailForest_mid_SoundShader", "nia_sg553r_tailHouses_mid_SoundShader", "nia_sg553r_tailInterior_mid_SoundShader", "nia_sg553r_tailMeadows_mid_SoundShader", "nia_sg553r_tailTrees_mid_SoundShader" };
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
        stereoStartDistance = 50;
        stereoRadius = 50;
    };
    class nia_sg553r_silencerShot_SoundSet
    {
        soundShaders[] = { "nia_sg553r_silencerShot_SoundShader", "nia_sg553r_Closure_SoundShader", "nia_sg553r_silencershot_mid_soundshader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class nia_sg553r_silencerTail_SoundSet
    {
        soundShaders[] = { "nia_sg553r_silencerTailTrees_SoundShader", "nia_sg553r_silencerTailForest_SoundShader", "nia_sg553r_silencerTailMeadows_SoundShader", "nia_sg553r_silencerTailHouses_SoundShader", "nia_sg553r_silencerTailInterior_SoundShader" };
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
};
