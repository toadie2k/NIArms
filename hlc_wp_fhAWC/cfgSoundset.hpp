
class CfgSoundSets {
    class awm_Shot_SoundSet {
        soundShaders[] = { "awm_closeShot_SoundShader", "awm_midShot_SoundShader", "awm_distShot_SoundShader", "awm_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class awm_Tail_SoundSet {
        soundShaders[] = { "awm_tailDistant_SoundShader", "awm_tailForest_SoundShader", "awm_tailHouses_SoundShader", "awm_tailInterior_SoundShader", "awm_tailMeadows_SoundShader", "awm_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class awc_silencerShot_SoundSet {
        soundShaders[] = { "awc_silencerShot_SoundShader", "awm_Closure_SoundShader", "AWc_midShot_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class awc_silencerTail_SoundSet {
        soundShaders[] = { "awc_silencerTailTrees_SoundShader", "awc_silencerTailForest_SoundShader", "awc_silencerTailMeadows_SoundShader", "awc_silencerTailHouses_SoundShader", "awc_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
};
