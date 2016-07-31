class CfgSoundSets {
    class M134D_Shot_SoundSet {
        soundShaders[] = { "M134D_closeShot_SoundShader", "M134D_midShot_SoundShader", "M134D_distShot_SoundShader", "M134D_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class M134D2_Shot_SoundSet {
        soundShaders[] = { "M134D2_closeShot_SoundShader", "M134D_midShot_SoundShader", "M134D_distShot_SoundShader", "M134D_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class M134D_tail_SoundSet {
        soundShaders[] = { "M134D_tailDistant_SoundShader", "M134D_tailForest_SoundShader", "M134D_tailHouses_SoundShader", "M134D_tailMeadows_SoundShader", "M134D_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 3;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
};
