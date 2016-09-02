
class CfgSoundSets {
    class G3_Shot_SoundSet {
        soundShaders[] = { "G3_closeShot_SoundShader", "G3_midShot_SoundShader", "G3_distShot_SoundShader", "G3_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare3Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class G3_tail_SoundSet {
        soundShaders[] = { "G3_tailDistant_SoundShader", "G3_tailForest_SoundShader", "G3_tailHouses_SoundShader", "G3_tailInterior_SoundShader", "G3_tailMeadows_SoundShader", "G3_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class G3_silencerShot_SoundSet {
        soundShaders[] = { "G3_silencerShot_SoundShader", "G3_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare3Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class G3_silencerTail_SoundSet {
        soundShaders[] = { "G3_silencerTailTrees_SoundShader", "G3_silencerTailForest_SoundShader", "G3_silencerTailMeadows_SoundShader", "G3_silencerTailHouses_SoundShader", "G3_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class G3KA4_Shot_SoundSet {
        soundShaders[] = { "G3KA4_closeShot_SoundShader", "G3KA4_midShot_SoundShader", "G3KA4_distShot_SoundShader", "G3_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare3Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class G3KA4_tail_SoundSet {
        soundShaders[] = { "G3KA4_tailDistant_SoundShader", "G3KA4_tailForest_SoundShader", "G3KA4_tailHouses_SoundShader", "G3KA4_tailInterior_SoundShader", "G3KA4_tailMeadows_SoundShader", "G3KA4_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class G3SG1_Shot_SoundSet {
        soundShaders[] = { "G3SG1_closeShot_SoundShader", "G3SG1_midShot_SoundShader", "G3SG1_distShot_SoundShader", "G3_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare3Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class G3SG1_tail_SoundSet {
        soundShaders[] = { "G3SG1_tailDistant_SoundShader", "G3SG1_tailForest_SoundShader", "G3SG1_tailHouses_SoundShader", "G3SG1_tailInterior_SoundShader", "G3SG1_tailMeadows_SoundShader", "G3SG1_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class HK51_Shot_SoundSet {
        soundShaders[] = { "HK51_closeShot_SoundShader", "HK51_midShot_SoundShader", "HK51_distShot_SoundShader", "G3_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare3Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class HK51_tail_SoundSet {
        soundShaders[] = { "HK51_tailDistant_SoundShader", "HK51_tailForest_SoundShader", "HK51_tailHouses_SoundShader", "HK51_tailInterior_SoundShader", "HK51_tailMeadows_SoundShader", "HK51_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class PSG1_Shot_SoundSet {
        soundShaders[] = { "PSG1_closeShot_SoundShader", "PSG1_midShot_SoundShader", "PSG1_distShot_SoundShader", "G3_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare3Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class PSG1_tail_SoundSet {
        soundShaders[] = { "PSG1_tailDistant_SoundShader", "PSG1_tailForest_SoundShader", "PSG1_tailHouses_SoundShader", "PSG1_tailInterior_SoundShader", "PSG1_tailMeadows_SoundShader", "PSG1_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class hk33_Shot_SoundSet {
        soundShaders[] = { "hk33_closeShot_SoundShader", "hk33_midShot_SoundShader", "hk33_distShot_SoundShader", "hk33_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class hk33_Tail_SoundSet {
        soundShaders[] = { "hk33_tailDistant_SoundShader", "hk33_tailForest_SoundShader", "hk33_tailHouses_SoundShader", "hk33_tailInterior_SoundShader", "hk33_tailMeadows_SoundShader", "hk33_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
    class hk33_silencerShot_SoundSet {
        soundShaders[] = { "hk33_silencerShot_SoundShader", "hk33_Closure_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class hk33_silencerTail_SoundSet {
        soundShaders[] = { "hk33_silencerTailTrees_SoundShader", "hk33_silencerTailForest_SoundShader", "hk33_silencerTailMeadows_SoundShader", "hk33_silencerTailHouses_SoundShader", "hk33_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class hk53_Shot_SoundSet {
        soundShaders[] = { "hk53_closeShot_SoundShader", "hk53_midShot_SoundShader", "hk53_distShot_SoundShader", "hk33_Closure_SoundShader" };
        volumeFactor = 1.6;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
    };
    class hk53_Tail_SoundSet {
        soundShaders[] = { "hk53_tailDistant_SoundShader", "hk53_tailForest_SoundShader", "hk53_tailHouses_SoundShader", "hk53_tailInterior_SoundShader", "hk53_tailMeadows_SoundShader", "hk53_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
    };
};
