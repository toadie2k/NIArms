
class CfgSoundSets
{
    class nia_p2269mm_Shot_SoundSet
    {
        soundShaders[] = { "nia_p2269mm_closeShot_SoundShader", "nia_p2269mm_midShot_SoundShader", "nia_p2269mm_distShot_SoundShader", "nia_p2269mm_Closure_SoundShader" };
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
    class nia_p2269mm_tail_SoundSet
    {
        soundShaders[] = { "nia_p2269mm_tailTrees_SoundShader", "nia_p2269mm_tailForest_SoundShader", "nia_p2269mm_tailMeadows_SoundShader", "nia_p2269mm_tailHouses_SoundShader", "nia_p2269mm_tailInterior_SoundShader" };
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
    class nia_p2269mm_silencerShot_SoundSet
    {
        soundShaders[] = { "nia_p2269mm_silencerShot_SoundShader", "nia_p2269mm_Closure_SoundShader" };
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
    class nia_p2269mm_silencerTail_SoundSet
    {
        soundShaders[] = { "nia_p2269mm_silencerTailTrees_SoundShader", "nia_p2269mm_silencerTailForest_SoundShader", "nia_p2269mm_silencerTailMeadows_SoundShader", "nia_p2269mm_silencerTailHouses_SoundShader", "nia_p2269mm_silencerTailInterior_SoundShader" };
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
    class nia_p2399mm_Shot_SoundSet
    {
        soundShaders[] = { "nia_p2399mm_closeShot_SoundShader", "nia_p2399mm_midShot_SoundShader", "nia_p2399mm_distShot_SoundShader", "nia_p2269mm_Closure_SoundShader" };
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
    class nia_p2399mm_tail_SoundSet
    {
        soundShaders[] = {  "nia_p2399mm_tailTrees_SoundShader", "nia_p2399mm_tailForest_SoundShader", "nia_p2399mm_tailMeadows_SoundShader", "nia_p2399mm_tailHouses_SoundShader", "nia_p2399mm_tailInterior_SoundShader" };
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
   


    class nia_p226_357_Shot_SoundSet
    {
        soundShaders[] = { "nia_p226_357_closeShot_SoundShader", "nia_p226_357_midShot_SoundShader", "nia_p226_357_distShot_SoundShader", "nia_p226_357_Closure_SoundShader" };
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
    class nia_p226_357_tail_SoundSet
    {
        soundShaders[] = { "nia_p226_357_tailTrees_SoundShader", "nia_p226_357_tailForest_SoundShader", "nia_p226_357_tailMeadows_SoundShader", "nia_p226_357_tailHouses_SoundShader", "nia_p226_357_tailInterior_SoundShader" };
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
    class nia_p226_357_silencerShot_SoundSet
    {
        soundShaders[] = { "nia_p226_357_silencerShot_SoundShader", "nia_p226_357_Closure_SoundShader" };
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
    class nia_p226_357_silencerTail_SoundSet
    {
        soundShaders[] = { "nia_p226_357_silencerTailTrees_SoundShader", "nia_p226_357_silencerTailForest_SoundShader", "nia_p226_357_silencerTailMeadows_SoundShader", "nia_p226_357_silencerTailHouses_SoundShader", "nia_p226_357_silencerTailInterior_SoundShader" };
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
    class nia_p239_357_Shot_SoundSet
    {
        soundShaders[] = { "nia_p239_357_closeShot_SoundShader", "nia_p239_357_midShot_SoundShader", "nia_p239_357_distShot_SoundShader", "nia_p226_357_Closure_SoundShader" };
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
    class nia_p239_357_tail_SoundSet
    {
        soundShaders[] = {  "nia_p239_357_tailTrees_SoundShader", "nia_p239_357_tailForest_SoundShader", "nia_p239_357_tailMeadows_SoundShader", "nia_p239_357_tailHouses_SoundShader", "nia_p239_357_tailInterior_SoundShader" };
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


    class nia_p227_Shot_SoundSet
    {
        soundShaders[] = { "nia_p226_45_closeShot_SoundShader", "nia_p226_45_midShot_SoundShader", "nia_p226_45_distShot_SoundShader", "nia_p226_45_Closure_SoundShader" };
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
    class nia_p227_tail_SoundSet
    {
        soundShaders[] = { "nia_p226_45_tailTrees_SoundShader", "nia_p226_45_tailForest_SoundShader", "nia_p226_45_tailMeadows_SoundShader", "nia_p226_45_tailHouses_SoundShader", "nia_p226_45_tailInterior_SoundShader" };
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
    class nia_p227_silencerShot_SoundSet
    {
        soundShaders[] = { "nia_p226_45_silencerShot_SoundShader", "nia_p226_45_Closure_SoundShader" };
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
    class nia_p227_silencerTail_SoundSet
    {
        soundShaders[] = { "nia_p226_45_silencerTailTrees_SoundShader", "nia_p226_45_silencerTailForest_SoundShader", "nia_p226_45_silencerTailMeadows_SoundShader", "nia_p226_45_silencerTailHouses_SoundShader", "nia_p226_45_silencerTailInterior_SoundShader" };
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
};
