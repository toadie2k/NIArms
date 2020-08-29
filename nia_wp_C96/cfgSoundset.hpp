
class CfgSoundSets
{
    class nia_C96_Shot_SoundSet
    {
        soundShaders[] = { "nia_C96_closeShot_SoundShader", "nia_C96_midShot_SoundShader", "nia_C96_distShot_SoundShader", "nia_C96_Closure_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare3Curve";
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
    class nia_C96_tail_SoundSet
    {
        soundShaders[] = { "nia_C96_tailTrees_SoundShader", "nia_C96_tailForest_SoundShader", "nia_C96_tailMeadows_SoundShader", "nia_C96_tailHouses_SoundShader", "nia_C96_tailInterior_SoundShader" };
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
    };
    class nia_C96_silencerShot_SoundSet
    {
        soundShaders[] = { "nia_C96_silencerShot_SoundShader", "nia_C96_Closure_SoundShader" };
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
    class nia_C96_silencerTail_SoundSet
    {
        soundShaders[] = { "nia_C96_silencerTailTrees_SoundShader", "nia_C96_silencerTailForest_SoundShader", "nia_C96_silencerTailMeadows_SoundShader", "nia_C96_silencerTailHouses_SoundShader", "nia_C96_silencerTailInterior_SoundShader" };
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
    class nia_DL44_Shot_SoundSet
    {
        soundShaders[] = { "nia_DL44_closeShot_SoundShader", "nia_DL44_midShot_SoundShader", "nia_DL44_distShot_SoundShader", "nia_C96_Closure_SoundShader" };
        volumeFactor = 1.1;
        volumeCurve = "InverseSquare3Curve";
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
};
