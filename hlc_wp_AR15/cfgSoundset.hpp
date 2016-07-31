
class CfgSoundSets {

    class 300BLK_Shot_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_closeShot_SoundShader", "300BLK_midShot_SoundShader", "300BLK_distShot_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class 300BLK_Tail_SoundSet {
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
    class 300BLK_Shot_Silenced_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_Shot_Silenced_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class 300BLK_ShotTail_Silenced_SoundSet {
        soundShaders[] = { "300BLK_tailInterior_Silenced_SoundShader", "300BLK_tailTrees_Silenced_SoundShader", "300BLK_tailForest_Silenced_SoundShader", "300BLK_tailMeadows_Silenced_SoundShader", "300BLK_tailHouses_Silenced_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
    class 300BLK_silencerShot_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_silencerShot_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class 300BLK_silencerTail_SoundSet {
        soundShaders[] = { "300BLK_silencerTailTrees_SoundShader", "300BLK_silencerTailForest_SoundShader", "300BLK_silencerTailMeadows_SoundShader", "300BLK_silencerTailHouses_SoundShader", "300BLK_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class badger_silencerShot_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "badger_Shot_Silenced_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class badger_silencerTail_SoundSet {
        soundShaders[] = { "badger_tailTrees_Silenced_SoundShader", "badger_tailForest_Silenced_SoundShader", "badger_tailMeadows_Silenced_SoundShader", "badger_tailHouses_Silenced_SoundShader", "badger_tailInterior_Silenced_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };

    class samr_Shot_SoundSet {
        soundShaders[] = { "samr_closeShot_SoundShader", "samr_midShot_SoundShader", "samr_distShot_SoundShader", "samr_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class samr_Tail_SoundSet {
        soundShaders[] = { "samr_tailDistant_SoundShader", "samr_tailForest_SoundShader", "samr_tailHouses_SoundShader", "samr_tailInterior_SoundShader", "samr_tailMeadows_SoundShader", "samr_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class samr_silencerShot_SoundSet {
        soundShaders[] = { "samr_silencerShot_SoundShader", "samr_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class samr_silencerTail_SoundSet {
        soundShaders[] = { "samr_silencerTailTrees_SoundShader", "samr_silencerTailForest_SoundShader", "samr_silencerTailMeadows_SoundShader", "samr_silencerTailHouses_SoundShader", "samr_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };

    class PBEAR_Shot_SoundSet {
        soundShaders[] = { "PBEAR_Closure_SoundShader", "PBEAR_closeShot_SoundShader", "PBEAR_midShot_SoundShader", "PBEAR_distShot_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class PBEAR_Tail_SoundSet {
        soundShaders[] = { "PBEAR_tailInterior_SoundShader", "PBEAR_tailTrees_SoundShader", "PBEAR_tailForest_SoundShader", "PBEAR_tailMeadows_SoundShader", "PBEAR_tailHouses_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };

    class jack_Shot_SoundSet {
        soundShaders[] = { "jack_closeShot_SoundShader", "jack_midShot_SoundShader", "jack_distShot_SoundShader", "jack_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class jack_Tail_SoundSet {
        soundShaders[] = { "jack_tailDistant_SoundShader", "jack_tailForest_SoundShader", "jack_tailHouses_SoundShader", "jack_tailInterior_SoundShader", "jack_tailMeadows_SoundShader", "jack_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class jack_silencerShot_SoundSet {
        soundShaders[] = { "jack_silencerShot_SoundShader", "jack_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class jack_silencerTail_SoundSet {
        soundShaders[] = { "jack_silencerTailTrees_SoundShader", "jack_silencerTailForest_SoundShader", "jack_silencerTailMeadows_SoundShader", "jack_silencerTailHouses_SoundShader", "jack_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };

    class carbine_Shot_SoundSet {
        soundShaders[] = { "carbine_closeShot_SoundShader", "carbine_midShot_SoundShader", "carbine_distShot_SoundShader", "carbine_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class carbine_Tail_SoundSet {
        soundShaders[] = { "carbine_tailDistant_SoundShader", "carbine_tailForest_SoundShader", "carbine_tailHouses_SoundShader", "carbine_tailInterior_SoundShader", "carbine_tailMeadows_SoundShader", "carbine_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class carbine_silencerShot_SoundSet {
        soundShaders[] = { "carbine_silencerShot_SoundShader", "carbine_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class carbine_silencerTail_SoundSet {
        soundShaders[] = { "carbine_silencerTailTrees_SoundShader", "carbine_silencerTailForest_SoundShader", "carbine_silencerTailMeadows_SoundShader", "carbine_silencerTailHouses_SoundShader", "carbine_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class SBR_Shot_SoundSet {
        soundShaders[] = { "SBR_closeShot_SoundShader", "SBR_midShot_SoundShader", "SBR_distShot_SoundShader", "SBR_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class SBR_Tail_SoundSet {
        soundShaders[] = { "SBR_tailDistant_SoundShader", "SBR_tailForest_SoundShader", "SBR_tailHouses_SoundShader", "SBR_tailInterior_SoundShader", "SBR_tailMeadows_SoundShader", "SBR_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class SBR_silencerShot_SoundSet {
        soundShaders[] = { "SBR_silencerShot_SoundShader", "SBR_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class SBR_silencerTail_SoundSet {
        soundShaders[] = { "SBR_silencerTailTrees_SoundShader", "SBR_silencerTailForest_SoundShader", "SBR_silencerTailMeadows_SoundShader", "SBR_silencerTailHouses_SoundShader", "SBR_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
};
