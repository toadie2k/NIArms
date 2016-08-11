
class CfgSoundSets
{
	class g36_MLI_Shot_SoundSet
	{
		soundShaders[] = { "g36_MLI_Closure_SoundShader", "g36_MLI_closeShot_SoundShader", "g36_MLI_midShot_SoundShader", "g36_MLI_distShot_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class g36_MLI_Tail_SoundSet
	{
		soundShaders[] = { "g36_MLI_tailInterior_SoundShader", "g36_MLI_tailTrees_SoundShader", "g36_MLI_tailForest_SoundShader", "g36_MLI_tailMeadows_SoundShader", "g36_MLI_tailHouses_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class g36_MLI_silencerShot_SoundSet
	{
		soundShaders[] = { "g36_MLI_silencerShot_SoundShader","g36_MLI_Closure_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class g36_MLI_silencerTail_SoundSet
	{
		soundShaders[] = { "g36_MLI_silencerTailTrees_SoundShader", "g36_MLI_silencerTailForest_SoundShader", "g36_MLI_silencerTailMeadows_SoundShader", "g36_MLI_silencerTailHouses_SoundShader", "g36_MLI_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class g36k_MLI_Shot_SoundSet
	{
		soundShaders[] = { "g36k_MLI_Closure_SoundShader", "g36k_MLI_closeShot_SoundShader", "g36k_MLI_midShot_SoundShader", "g36k_MLI_distShot_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class g36k_MLI_Tail_SoundSet
	{
		soundShaders[] = { "g36k_MLI_tailInterior_SoundShader", "g36k_MLI_tailTrees_SoundShader", "g36k_MLI_tailForest_SoundShader", "g36k_MLI_tailMeadows_SoundShader", "g36k_MLI_tailHouses_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class g36c_MLI_Shot_SoundSet
	{
		soundShaders[] = { "g36c_MLI_Closure_SoundShader", "g36c_MLI_closeShot_SoundShader", "g36c_MLI_midShot_SoundShader", "g36c_MLI_distShot_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class g36c_MLI_Tail_SoundSet
	{
		soundShaders[] = { "g36c_MLI_tailInterior_SoundShader", "g36c_MLI_tailTrees_SoundShader", "g36c_MLI_tailForest_SoundShader", "g36c_MLI_tailMeadows_SoundShader", "g36c_MLI_tailHouses_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.05;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class g36_Shot_SoundSet
	{
		soundShaders[] = { "g36_closeShot_SoundShader", "g36_midShot_SoundShader", "g36_distShot_SoundShader", "g36_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class g36_Tail_SoundSet
	{
		soundShaders[] = { "g36_tailDistant_SoundShader", "g36_tailForest_SoundShader", "g36_tailHouses_SoundShader", "g36_tailInterior_SoundShader", "g36_tailMeadows_SoundShader", "g36_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class g36_silencerShot_SoundSet
	{
		soundShaders[] = { "g36_silencerShot_SoundShader", "g36_Closure_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class g36_silencerTail_SoundSet
	{
		soundShaders[] = { "g36_silencerTailTrees_SoundShader", "g36_silencerTailForest_SoundShader", "g36_silencerTailMeadows_SoundShader", "g36_silencerTailHouses_SoundShader", "g36_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class g36c_Shot_SoundSet
	{
		soundShaders[] = { "g36c_closeShot_SoundShader", "g36c_midShot_SoundShader", "g36c_distShot_SoundShader", "g36c_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class g36c_Tail_SoundSet
	{
		soundShaders[] = { "g36c_tailDistant_SoundShader", "g36c_tailForest_SoundShader", "g36c_tailHouses_SoundShader", "g36c_tailInterior_SoundShader", "g36c_tailMeadows_SoundShader", "g36c_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class g36k_Shot_SoundSet
	{
		soundShaders[] = { "g36k_closeShot_SoundShader", "g36k_midShot_SoundShader", "g36k_distShot_SoundShader", "g36k_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class g36k_Tail_SoundSet
	{
		soundShaders[] = { "g36k_tailDistant_SoundShader", "g36k_tailForest_SoundShader", "g36k_tailHouses_SoundShader", "g36k_tailInterior_SoundShader", "g36k_tailMeadows_SoundShader", "g36k_tailTrees_SoundShader" };
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