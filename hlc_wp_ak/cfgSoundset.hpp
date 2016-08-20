
class CfgSoundSets
{
	class Nia_ak74_Shot_SoundSet
	{
		soundShaders[] = { "nia_ak74_closeShot_SoundShader", "nia_ak74_midShot_SoundShader", "nia_ak74_distShot_SoundShader", "nia_ak74_Closure_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Nia_ak74_Tail_SoundSet
	{
		soundShaders[] = { "nia_ak74_tailDistant_SoundShader", "nia_ak74_tailForest_SoundShader", "nia_ak74_tailHouses_SoundShader", "nia_ak74_tailInterior_SoundShader", "nia_ak74_tailMeadows_SoundShader", "nia_ak74_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Nia_ak74_silencerShot_SoundSet
	{
		soundShaders[] = { "nia_ak74_silencerShot_SoundShader", "nia_ak74_Closure_SoundShader"  };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Nia_ak74_silencerTail_SoundSet
	{
		soundShaders[] = { "nia_ak74_silencerTailTrees_SoundShader", "nia_ak74_silencerTailForest_SoundShader", "nia_ak74_silencerTailMeadows_SoundShader", "nia_ak74_silencerTailHouses_SoundShader", "nia_ak74_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};

	class Nia_ak47_Shot_SoundSet
	{
		soundShaders[] = { "nia_ak47_Closure_SoundShader", "nia_ak47_closeShot_SoundShader", "nia_ak47_midShot_SoundShader", "nia_ak47_distShot_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Nia_ak47_Tail_SoundSet
	{
		soundShaders[] = { "nia_ak47_tailInterior_SoundShader", "nia_ak47_tailTrees_SoundShader", "nia_ak47_tailForest_SoundShader", "nia_ak47_tailMeadows_SoundShader", "nia_ak47_tailHouses_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class Nia_ak47_Shot_Silenced_SoundSet
	{
		soundShaders[] = { "nia_ak47_Closure_SoundShader", "nia_ak47_Shot_Silenced_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Nia_ak47_ShotTail_Silenced_SoundSet
	{
		soundShaders[] = { "nia_ak47_tailInterior_Silenced_SoundShader", "nia_ak47_tailTrees_Silenced_SoundShader", "nia_ak47_tailForest_Silenced_SoundShader", "nia_ak47_tailMeadows_Silenced_SoundShader", "nia_ak47_tailHouses_Silenced_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class Nia_ak47_silencerShot_SoundSet
	{
		soundShaders[] = { "nia_ak47_silencerShot_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Nia_ak47_silencerTail_SoundSet
	{
		soundShaders[] = { "nia_ak47_silencerTailTrees_SoundShader", "nia_ak47_silencerTailForest_SoundShader", "nia_ak47_silencerTailMeadows_SoundShader", "nia_ak47_silencerTailHouses_SoundShader", "nia_ak47_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};

	class Nia_rpk_Shot_SoundSet
	{
		soundShaders[] = { "nia_rpk_Closure_SoundShader", "nia_rpk_closeShot_SoundShader", "nia_rpk_midShot_SoundShader", "nia_rpk_distShot_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Nia_rpk_Tail_SoundSet
	{
		soundShaders[] = { "nia_rpk_tailInterior_SoundShader", "nia_rpk_tailTrees_SoundShader", "nia_rpk_tailForest_SoundShader", "nia_rpk_tailMeadows_SoundShader", "nia_rpk_tailHouses_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class Nia_rpk_Shot_Silenced_SoundSet
	{
		soundShaders[] = { "nia_rpk_Closure_SoundShader", "nia_rpk_Shot_Silenced_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Nia_rpk_ShotTail_Silenced_SoundSet
	{
		soundShaders[] = { "nia_rpk_tailInterior_Silenced_SoundShader", "nia_rpk_tailTrees_Silenced_SoundShader", "nia_rpk_tailForest_Silenced_SoundShader", "nia_rpk_tailMeadows_Silenced_SoundShader", "nia_rpk_tailHouses_Silenced_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class Nia_rpk_silencerShot_SoundSet
	{
		soundShaders[] = { "nia_rpk_Closure_SoundShader", "nia_rpk_silencerShot_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Nia_rpk_silencerTail_SoundSet
	{
		soundShaders[] = { "nia_rpk_silencerTailTrees_SoundShader", "nia_rpk_silencerTailForest_SoundShader", "nia_rpk_silencerTailMeadows_SoundShader", "nia_rpk_silencerTailHouses_SoundShader", "nia_rpk_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};

	class Nia_rpk74_Shot_SoundSet
	{
		soundShaders[] = { "nia_rpk74_closeShot_SoundShader", "nia_rpk74_midShot_SoundShader", "nia_rpk74_distShot_SoundShader", "nia_rpk74_Closure_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Nia_rpk74_Tail_SoundSet
	{
		soundShaders[] = { "nia_rpk74_tailDistant_SoundShader", "nia_rpk74_tailForest_SoundShader", "nia_rpk74_tailHouses_SoundShader", "nia_rpk74_tailInterior_SoundShader", "nia_rpk74_tailMeadows_SoundShader", "nia_rpk74_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Nia_rpk74_silencerShot_SoundSet
	{
		soundShaders[] = { "nia_rpk74_silencerShot_SoundShader", "nia_rpk74_Closure_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Nia_rpk74_silencerTail_SoundSet
	{
		soundShaders[] = { "nia_rpk74_silencerTailTrees_SoundShader", "nia_rpk74_silencerTailForest_SoundShader", "nia_rpk74_silencerTailMeadows_SoundShader", "nia_rpk74_silencerTailHouses_SoundShader", "nia_rpk74_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};

	class Nia_aks74u_Shot_SoundSet
	{
		soundShaders[] = { "nia_aks74u_closeShot_SoundShader", "nia_aks74u_midShot_SoundShader", "nia_aks74u_distShot_SoundShader", "nia_aks74u_Closure_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Nia_aks74u_Tail_SoundSet
	{
		soundShaders[] = { "nia_aks74u_tailDistant_SoundShader", "nia_aks74u_tailForest_SoundShader", "nia_aks74u_tailHouses_SoundShader", "nia_aks74u_tailInterior_SoundShader", "nia_aks74u_tailMeadows_SoundShader", "nia_aks74u_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Nia_aks74u_silencerShot_SoundSet
	{
		soundShaders[] = { "nia_aks74u_silencerShot_SoundShader", "nia_aks74u_Closure_SoundShader"  };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Nia_aks74u_silencerTail_SoundSet
	{
		soundShaders[] = { "nia_aks74u_silencerTailTrees_SoundShader", "nia_aks74u_silencerTailForest_SoundShader", "nia_aks74u_silencerTailMeadows_SoundShader", "nia_aks74u_silencerTailHouses_SoundShader", "nia_aks74u_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};

	class Nia_ak12_Shot_SoundSet
	{
		soundShaders[] = { "nia_ak12_closeShot_SoundShader", "nia_ak12_midShot_SoundShader", "nia_ak12_distShot_SoundShader", "nia_ak12_Closure_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Nia_ak12_Tail_SoundSet
	{
		soundShaders[] = { "nia_ak12_tailDistant_SoundShader", "nia_ak12_tailForest_SoundShader", "nia_ak12_tailHouses_SoundShader", "nia_ak12_tailInterior_SoundShader", "nia_ak12_tailMeadows_SoundShader", "nia_ak12_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Nia_ak12_silencerShot_SoundSet
	{
		soundShaders[] = { "nia_ak12_Closure_SoundShader" ,"nia_ak12_silencerShot_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Nia_ak12_silencerTail_SoundSet
	{
		soundShaders[] = { "nia_ak12_silencerTailTrees_SoundShader", "nia_ak12_silencerTailForest_SoundShader", "nia_ak12_silencerTailMeadows_SoundShader", "nia_ak12_silencerTailHouses_SoundShader", "nia_ak12_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};

	class Nia_aek_Shot_SoundSet
	{
		soundShaders[] = { "nia_aek_closeShot_SoundShader", "nia_aek_midShot_SoundShader", "nia_aek_distShot_SoundShader", "nia_aek_Closure_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Nia_aek_Tail_SoundSet
	{
		soundShaders[] = { "nia_aek_tailDistant_SoundShader", "nia_aek_tailForest_SoundShader", "nia_aek_tailHouses_SoundShader", "nia_aek_tailInterior_SoundShader", "nia_aek_tailMeadows_SoundShader", "nia_aek_tailTrees_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class Nia_aek_silencerShot_SoundSet
	{
		soundShaders[] = { "nia_aek_silencerShot_SoundShader", "nia_aek_Closure_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class Nia_aek_silencerTail_SoundSet
	{
		soundShaders[] = { "nia_aek_silencerTailTrees_SoundShader", "nia_aek_silencerTailForest_SoundShader", "nia_aek_silencerTailMeadows_SoundShader", "nia_aek_silencerTailHouses_SoundShader", "nia_aek_silencerTailInterior_SoundShader" };
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};

	class Nia_SLR107U_Shot_SoundSet
	{
		soundShaders[] = { "nia_SLR107U_Closure_SoundShader", "nia_SLR107U_closeShot_SoundShader", "nia_SLR107U_midShot_SoundShader", "nia_SLR107U_distShot_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Nia_SLR107U_Tail_SoundSet
	{
		soundShaders[] = { "nia_SLR107U_tailInterior_SoundShader", "nia_SLR107U_tailTrees_SoundShader", "nia_SLR107U_tailForest_SoundShader", "Nia_SLR107U_tailMeadows_SoundShader", "nia_SLR107U_tailHouses_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};

	class Nia_rk62_Shot_SoundSet
	{
		soundShaders[] = { "nia_rk62_Closure_SoundShader", "nia_rk62_closeShot_SoundShader", "nia_rk62_midShot_SoundShader", "nia_rk62_distShot_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Nia_rk62_Tail_SoundSet
	{
		soundShaders[] = { "Nia_rk62_tailInterior_SoundShader", "nia_rk62_tailTrees_SoundShader", "nia_rk62_tailForest_SoundShader", "nia_rk62_tailMeadows_SoundShader", "nia_rk62_tailHouses_SoundShader" };
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	
	class Nia_saiga_Shot_SoundSet
	{
		soundShaders[] = { "nia_saiga_closeShot_SoundShader", "nia_saiga_midShot_SoundShader", "nia_saiga_distShot_SoundShader", "nia_saiga_Closure_SoundShader" };
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class Nia_saiga_tail_SoundSet
	{
		soundShaders[] = { "nia_saiga_tailDistant_SoundShader", "nia_saiga_tailTrees_SoundShader", "nia_saiga_tailForest_SoundShader", "nia_saiga_tailMeadows_SoundShader", "nia_saiga_tailHouses_SoundShader", "nia_saiga_tailInterior_SoundShader" };
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
