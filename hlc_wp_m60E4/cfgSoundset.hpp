class CfgSoundSets {
    class M60e4_Shot_SoundSet {
        soundShaders[] = { "M60e4_closeShot_SoundShader", "M60e4_midShot_SoundShader", "M60e4_distShot_SoundShader", "M60e4_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare3Curve";
        stereoStartDistance = 8;
        stereoRadius = 10;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class M60e4_tail_SoundSet {
        soundShaders[] = { "M60e4_tailDistant_SoundShader", "M60e4_tailForest_SoundShader", "M60e4_tailHouses_SoundShader", "M60e4_tailInterior_SoundShader", "M60e4_tailMeadows_SoundShader", "M60e4_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        stereoStartDistance = 100;
        stereoRadius = 50;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 3;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class M60e4_silencerShot_SoundSet {
        soundShaders[] = { "M60e4_silencerShot_SoundShader", "M60e4_Closure_SoundShader" };
        volumeFactor = 1.4;
        volumeCurve = "InverseSquare3Curve";
        stereoStartDistance = 8;
        stereoRadius = 10;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class M60e4_silencerTail_SoundSet {
        soundShaders[] = { "M60e4_silencerTailTrees_SoundShader", "M60e4_silencerTailForest_SoundShader", "M60e4_silencerTailMeadows_SoundShader", "M60e4_silencerTailHouses_SoundShader", "M60e4_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        stereoStartDistance = 100;
        stereoRadius = 50;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 3;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
};
