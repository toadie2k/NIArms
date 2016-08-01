
class CfgSoundSets
{
	class FAL_Shot_SoundSet
	{
		soundShaders[] = { "FAL_closeShot_SoundShader", "FAL_midShot_SoundShader", "FAL_distShot_SoundShader", "FAL_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class FAL_tail_SoundSet
	{
		soundShaders[] = { "FAL_tailDistant_SoundShader", "FAL_tailForest_SoundShader", "FAL_tailHouses_SoundShader", "FAL_tailInterior_SoundShader", "FAL_tailMeadows_SoundShader", "FAL_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class FAL_silencerShot_SoundSet
	{
		soundShaders[] = { "FAL_silencerShot_SoundShader", "FAL_Closure_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class FAL_silencerTail_SoundSet
	{
		soundShaders[] = { "FAL_silencerTailTrees_SoundShader", "FAL_silencerTailForest_SoundShader", "FAL_silencerTailMeadows_SoundShader", "FAL_silencerTailHouses_SoundShader", "FAL_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class FAL2_Shot_SoundSet
	{
		soundShaders[] = { "FAL2_closeShot_SoundShader", "FAL2_midShot_SoundShader", "FAL2_distShot_SoundShader", "FAL_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class FAL2_tail_SoundSet
	{
		soundShaders[] = { "FAL2_tailDistant_SoundShader", "FAL2_tailForest_SoundShader", "FAL2_tailHouses_SoundShader", "FAL2_tailInterior_SoundShader", "FAL2_tailMeadows_SoundShader", "FAL2_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class OSW_Shot_SoundSet
	{
		soundShaders[] = { "OSW_closeShot_SoundShader", "OSW_midShot_SoundShader", "OSW_distShot_SoundShader", "FAL_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class OSW_tail_SoundSet
	{
		soundShaders[] = { "OSW_tailDistant_SoundShader", "OSW_tailForest_SoundShader", "OSW_tailHouses_SoundShader", "OSW_tailInterior_SoundShader", "OSW_tailMeadows_SoundShader", "OSW_tailTrees_SoundShader" };
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
