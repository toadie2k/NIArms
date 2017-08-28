
class CfgSoundSets
{

	class aug_Shot_SoundSet
	{
		soundShaders[] = { "aug_closeShot_SoundShader", "aug_midShot_SoundShader", "aug_distShot_SoundShader", "aug_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
	};
	class aug_Tail_SoundSet
	{
		soundShaders[] = {  "aug_tailForest_SoundShader", "aug_tailHouses_SoundShader", "aug_tailInterior_SoundShader", "aug_tailMeadows_SoundShader", "aug_tailTrees_SoundShader" };
        volumeFactor = 1;
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
	class aug_silencerShot_SoundSet
	{
		soundShaders[] = { "aug_silencerShot_SoundShader", "aug_Closure_SoundShader","aug_silencerShot_mid_SoundShader" };
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
	class aug_silencerTail_SoundSet
	{
		soundShaders[] = { "aug_silencerTailTrees_SoundShader", "aug_silencerTailForest_SoundShader", "aug_silencerTailMeadows_SoundShader", "aug_silencerTailHouses_SoundShader", "aug_silencerTailInterior_SoundShader" };
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

	class augcarbine_Shot_SoundSet
	{
		soundShaders[] = { "augcarbine_closeShot_SoundShader", "augcarbine_midShot_SoundShader", "augcarbine_distShot_SoundShader", "augcarbine_Closure_SoundShader" };
        volumeFactor = 1.4;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class augcarbine_Tail_SoundSet
	{
		soundShaders[] = {  "augcarbine_tailForest_SoundShader", "augcarbine_tailHouses_SoundShader", "augcarbine_tailInterior_SoundShader", "augcarbine_tailMeadows_SoundShader", "augcarbine_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class augcarbine_silencerShot_SoundSet
	{
		soundShaders[] = { "augcarbine_silencerShot_SoundShader", "augcarbine_Closure_SoundShader","augcarbine_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class augcarbine_silencerTail_SoundSet
	{
		soundShaders[] = { "augcarbine_silencerTailTrees_SoundShader", "augcarbine_silencerTailForest_SoundShader", "augcarbine_silencerTailMeadows_SoundShader", "augcarbine_silencerTailHouses_SoundShader", "augcarbine_silencerTailInterior_SoundShader" };
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

	class aughbar_Shot_SoundSet
	{
		soundShaders[] = { "aughbar_closeShot_SoundShader", "aughbar_midShot_SoundShader", "aughbar_distShot_SoundShader", "aughbar_Closure_SoundShader" };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class aughbar_Tail_SoundSet
	{
		soundShaders[] = {  "aughbar_tailForest_SoundShader", "aughbar_tailHouses_SoundShader", "aughbar_tailInterior_SoundShader", "aughbar_tailMeadows_SoundShader", "aughbar_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class aughbar_silencerShot_SoundSet
	{
		soundShaders[] = { "aughbar_silencerShot_SoundShader", "aughbar_Closure_SoundShader","aughbar_silencershot_mid_soundshader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class aughbar_silencerTail_SoundSet
	{
		soundShaders[] = { "aughbar_silencerTailTrees_SoundShader", "aughbar_silencerTailForest_SoundShader", "aughbar_silencerTailMeadows_SoundShader", "aughbar_silencerTailHouses_SoundShader", "aughbar_silencerTailInterior_SoundShader" };
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

	class augpara_Shot_SoundSet
	{
		soundShaders[] = { "augpara_closeShot_SoundShader", "augpara_midShot_SoundShader", "augpara_distShot_SoundShader", "augpara_Closure_SoundShader" };
		volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class augpara_tail_SoundSet
	{
		soundShaders[] = {  "augpara_tailTrees_SoundShader", "augpara_tailForest_SoundShader", "augpara_tailMeadows_SoundShader", "augpara_tailHouses_SoundShader", "augpara_tailInterior_SoundShader" };
		volumeFactor = 0.6;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.3;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class augpara_silencerShot_SoundSet
	{
		soundShaders[] = { "augpara_silencerShot_SoundShader","augpara_silencerShot_mid_SoundShader" };
		volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class augpara_silencerTail_SoundSet
	{
		soundShaders[] = { "augpara_silencerTailTrees_SoundShader", "augpara_silencerTailForest_SoundShader", "augpara_silencerTailMeadows_SoundShader", "augpara_silencerTailHouses_SoundShader", "augpara_silencerTailInterior_SoundShader" };
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
};
