class CfgSoundSets
{
	class NIA_GL_Shot_SoundSet
	{
		soundShaders[] = { "NIA_GL_Closure_SoundShader", "NIA_GL_closeShot_SoundShader", "NIA_GL_midShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        stereoStartDistance = 8;
        stereoRadius = 10;
	};
	class NIA_GL_Tail_SoundSet
	{
		soundShaders[] = { "NIA_GL_tailInterior_SoundShader", "NIA_GL_tailTrees_SoundShader", "NIA_GL_tailForest_SoundShader", "NIA_GL_tailMeadows_SoundShader", "NIA_GL_tailHouses_SoundShader"};
		volumeFactor = 1;
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
        distanceFilter = "HLC_rifleTailDistanceFilter";
        stereoStartDistance = 50;
        stereoRadius = 25;
	};
	class NIA_ACR_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_ACR_NEW_Close_Shot_SoundShader", "NIA_ACR_NEW_CloseDistance_Shot_SoundShader", "NIA_ACR_NEW_MediumDistance_Shot_SoundShader", "NIA_ACR_NEW_FarDistance_Shot_SoundShader", "NIA_ACR_NEW_Interior_Shot_SoundShader", "NIA_ACR_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_ACRL_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_ACRL_NEW_Close_Shot_SoundShader", "NIA_ACRL_NEW_CloseDistance_Shot_SoundShader", "NIA_ACRL_NEW_MediumDistance_Shot_SoundShader", "NIA_ACRL_NEW_FarDistance_Shot_SoundShader", "NIA_ACRL_NEW_Interior_Shot_SoundShader", "NIA_ACRL_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_AK74_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_AK74_NEW_Close_Shot_SoundShader", "NIA_AK74_NEW_CloseDistance_Shot_SoundShader", "NIA_AK74_NEW_MediumDistance_Shot_SoundShader", "NIA_AK74_NEW_FarDistance_Shot_SoundShader", "NIA_AK74_NEW_Interior_Shot_SoundShader", "NIA_AK74_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_AKM_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_AKM_NEW_Close_Shot_SoundShader", "NIA_AKM_NEW_CloseDistance_Shot_SoundShader", "NIA_AKM_NEW_MediumDistance_Shot_SoundShader", "NIA_AKM_NEW_FarDistance_Shot_SoundShader", "NIA_AKM_NEW_Interior_Shot_SoundShader", "NIA_AKM_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_AKS_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_AKS_NEW_Close_Shot_SoundShader", "NIA_AKS_NEW_CloseDistance_Shot_SoundShader", "NIA_AKS_NEW_MediumDistance_Shot_SoundShader", "NIA_AKS_NEW_FarDistance_Shot_SoundShader", "NIA_AKS_NEW_Interior_Shot_SoundShader", "NIA_AKS_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_AR15_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_carbine_Closure_SoundShader","NIA_AR15_NEW_Close_Shot_SoundShader", "NIA_AR15_NEW_CloseDistance_Shot_SoundShader", "NIA_AR15_NEW_MediumDistance_Shot_SoundShader", "NIA_AR15_NEW_FarDistance_Shot_SoundShader", "NIA_AR15_NEW_Interior_Shot_SoundShader", "NIA_AR15_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_AR15300_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_carbine_Closure_SoundShader","NIA_AR15300_NEW_Close_Shot_SoundShader", "NIA_AR15300_NEW_CloseDistance_Shot_SoundShader", "NIA_AR15300_NEW_MediumDistance_Shot_SoundShader", "NIA_AR15300_NEW_FarDistance_Shot_SoundShader", "NIA_AR15300_NEW_Interior_Shot_SoundShader", "NIA_AR15300_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_AUG_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_AUG_NEW_Close_Shot_SoundShader", "NIA_AUG_NEW_CloseDistance_Shot_SoundShader", "NIA_AUG_NEW_MediumDistance_Shot_SoundShader", "NIA_AUG_NEW_FarDistance_Shot_SoundShader", "NIA_AUG_NEW_Interior_Shot_SoundShader", "NIA_AUG_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_AWC_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_AWC_NEW_Close_Shot_SoundShader", "NIA_AWC_NEW_CloseDistance_Shot_SoundShader", "NIA_AWC_NEW_MediumDistance_Shot_SoundShader", "NIA_AWC_NEW_FarDistance_Shot_SoundShader", "NIA_AWC_NEW_Interior_Shot_SoundShader", "NIA_AWC_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_AWCSD_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_AWCSD_NEW_Close_Shot_SoundShader", "NIA_AWCSD_NEW_CloseDistance_Shot_SoundShader", "NIA_AWCSD_NEW_MediumDistance_Shot_SoundShader", "NIA_AWCSD_NEW_FarDistance_Shot_SoundShader", "NIA_AWCSD_NEW_Interior_Shot_SoundShader", "NIA_AWCSD_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_FN3011_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_FN3011_NEW_Close_Shot_SoundShader", "NIA_FN3011_NEW_CloseDistance_Shot_SoundShader", "NIA_FN3011_NEW_MediumDistance_Shot_SoundShader", "NIA_FN3011_NEW_FarDistance_Shot_SoundShader", "NIA_FN3011_NEW_Interior_Shot_SoundShader", "NIA_FN3011_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_FNFAL_NEW_Shot_SoundSet
	{
		soundShaders[] = { "FAL_Closure_SoundShader","NIA_FNFAL_NEW_Close_Shot_SoundShader", "NIA_FNFAL_NEW_CloseDistance_Shot_SoundShader", "NIA_FNFAL_NEW_MediumDistance_Shot_SoundShader", "NIA_FNFAL_NEW_FarDistance_Shot_SoundShader", "NIA_FNFAL_NEW_Interior_Shot_SoundShader", "NIA_FNFAL_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_G3_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_G3_NEW_Close_Shot_SoundShader", "NIA_G3_NEW_CloseDistance_Shot_SoundShader", "NIA_G3_NEW_MediumDistance_Shot_SoundShader", "NIA_G3_NEW_FarDistance_Shot_SoundShader", "NIA_G3_NEW_Interior_Shot_SoundShader", "NIA_G3_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_G36_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_G36_NEW_Close_Shot_SoundShader", "NIA_G36_NEW_CloseDistance_Shot_SoundShader", "NIA_G36_NEW_MediumDistance_Shot_SoundShader", "NIA_G36_NEW_FarDistance_Shot_SoundShader", "NIA_G36_NEW_Interior_Shot_SoundShader", "NIA_G36_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_G36C_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_G36C_NEW_Close_Shot_SoundShader", "NIA_G36C_NEW_CloseDistance_Shot_SoundShader", "NIA_G36C_NEW_MediumDistance_Shot_SoundShader", "NIA_G36C_NEW_FarDistance_Shot_SoundShader", "NIA_G36C_NEW_Interior_Shot_SoundShader", "NIA_G36C_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_HK33_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_HK33_NEW_Close_Shot_SoundShader", "NIA_HK33_NEW_CloseDistance_Shot_SoundShader", "NIA_HK33_NEW_MediumDistance_Shot_SoundShader", "NIA_HK33_NEW_FarDistance_Shot_SoundShader", "NIA_HK33_NEW_Interior_Shot_SoundShader", "NIA_HK33_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_HK416_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_HK416_NEW_Close_Shot_SoundShader", "NIA_HK416_NEW_CloseDistance_Shot_SoundShader", "NIA_HK416_NEW_MediumDistance_Shot_SoundShader", "NIA_HK416_NEW_FarDistance_Shot_SoundShader", "NIA_HK416_NEW_Interior_Shot_SoundShader", "NIA_HK416_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_HK416L_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_HK416L_NEW_Close_Shot_SoundShader", "NIA_HK416L_NEW_CloseDistance_Shot_SoundShader", "NIA_HK416L_NEW_MediumDistance_Shot_SoundShader", "NIA_HK416L_NEW_FarDistance_Shot_SoundShader", "NIA_HK416L_NEW_Interior_Shot_SoundShader", "NIA_HK416L_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_HK416S_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_HK416S_NEW_Close_Shot_SoundShader", "NIA_HK416S_NEW_CloseDistance_Shot_SoundShader", "NIA_HK416S_NEW_MediumDistance_Shot_SoundShader", "NIA_HK416S_NEW_FarDistance_Shot_SoundShader", "NIA_HK416S_NEW_Interior_Shot_SoundShader", "NIA_HK416S_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_M4_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_carbine_Closure_SoundShader","NIA_M4_NEW_Close_Shot_SoundShader", "NIA_M4_NEW_CloseDistance_Shot_SoundShader", "NIA_M4_NEW_MediumDistance_Shot_SoundShader", "NIA_M4_NEW_FarDistance_Shot_SoundShader", "NIA_M4_NEW_Interior_Shot_SoundShader", "NIA_M4_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_M14_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_M14_NEW_Close_Shot_SoundShader", "NIA_M14_NEW_CloseDistance_Shot_SoundShader", "NIA_M14_NEW_MediumDistance_Shot_SoundShader", "NIA_M14_NEW_FarDistance_Shot_SoundShader", "NIA_M14_NEW_Interior_Shot_SoundShader", "NIA_M14_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_M14sopmod_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_M14sopmod_NEW_Close_Shot_SoundShader", "NIA_M14sopmod_NEW_CloseDistance_Shot_SoundShader", "NIA_M14sopmod_NEW_MediumDistance_Shot_SoundShader", "NIA_M14sopmod_NEW_FarDistance_Shot_SoundShader", "NIA_M14sopmod_NEW_Interior_Shot_SoundShader", "NIA_M14sopmod_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_M16_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_carbine_Closure_SoundShader","NIA_M16_NEW_Close_Shot_SoundShader", "NIA_M16_NEW_CloseDistance_Shot_SoundShader", "NIA_M16_NEW_MediumDistance_Shot_SoundShader", "NIA_M16_NEW_FarDistance_Shot_SoundShader", "NIA_M16_NEW_Interior_Shot_SoundShader", "NIA_M16_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_M60E4_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_M60E4_NEW_Close_Shot_SoundShader", "NIA_M60E4_NEW_CloseDistance_Shot_SoundShader", "NIA_M60E4_NEW_MediumDistance_Shot_SoundShader", "NIA_M60E4_NEW_FarDistance_Shot_SoundShader", "NIA_M60E4_NEW_Interior_Shot_SoundShader", "NIA_M60E4_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_M249_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_M249_NEW_Close_Shot_SoundShader", "NIA_M249_NEW_CloseDistance_Shot_SoundShader", "NIA_M249_NEW_MediumDistance_Shot_SoundShader", "NIA_M249_NEW_FarDistance_Shot_SoundShader", "NIA_M249_NEW_Interior_Shot_SoundShader", "NIA_M249_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_Mauser_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_Mauser_NEW_Close_Shot_SoundShader", "NIA_Mauser_NEW_CloseDistance_Shot_SoundShader", "NIA_Mauser_NEW_MediumDistance_Shot_SoundShader", "NIA_Mauser_NEW_FarDistance_Shot_SoundShader", "NIA_Mauser_NEW_Interior_Shot_SoundShader", "NIA_Mauser_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_MG3_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_MG3_NEW_Close_Shot_SoundShader", "NIA_MG3_NEW_CloseDistance_Shot_SoundShader", "NIA_MG3_NEW_MediumDistance_Shot_SoundShader", "NIA_MG3_NEW_FarDistance_Shot_SoundShader", "NIA_MG3_NEW_Interior_Shot_SoundShader", "NIA_MG3_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_MK48_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_MK48_NEW_Close_Shot_SoundShader", "NIA_MK48_NEW_CloseDistance_Shot_SoundShader", "NIA_MK48_NEW_MediumDistance_Shot_SoundShader", "NIA_MK48_NEW_FarDistance_Shot_SoundShader", "NIA_MK48_NEW_Interior_Shot_SoundShader", "NIA_MK48_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_MP5_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_MP5_NEW_Close_Shot_SoundShader", "NIA_MP5_NEW_CloseDistance_Shot_SoundShader", "NIA_MP5_NEW_MediumDistance_Shot_SoundShader", "NIA_MP5_NEW_FarDistance_Shot_SoundShader", "NIA_MP5_NEW_Interior_Shot_SoundShader", "NIA_MP5_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_P226_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_P226_NEW_Close_Shot_SoundShader", "NIA_P226_NEW_CloseDistance_Shot_SoundShader", "NIA_P226_NEW_MediumDistance_Shot_SoundShader", "NIA_P226_NEW_FarDistance_Shot_SoundShader", "NIA_P226_NEW_Interior_Shot_SoundShader", "NIA_P226_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_P227_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_P227_NEW_Close_Shot_SoundShader", "NIA_P227_NEW_CloseDistance_Shot_SoundShader", "NIA_P227_NEW_MediumDistance_Shot_SoundShader", "NIA_P227_NEW_FarDistance_Shot_SoundShader", "NIA_P227_NEW_Interior_Shot_SoundShader", "NIA_P227_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_P228_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_P228_NEW_Close_Shot_SoundShader", "NIA_P228_NEW_CloseDistance_Shot_SoundShader", "NIA_P228_NEW_MediumDistance_Shot_SoundShader", "NIA_P228_NEW_FarDistance_Shot_SoundShader", "NIA_P228_NEW_Interior_Shot_SoundShader", "NIA_P228_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_RPK_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_RPK_NEW_Close_Shot_SoundShader", "NIA_RPK_NEW_CloseDistance_Shot_SoundShader", "NIA_RPK_NEW_MediumDistance_Shot_SoundShader", "NIA_RPK_NEW_FarDistance_Shot_SoundShader", "NIA_RPK_NEW_Interior_Shot_SoundShader", "NIA_RPK_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_RPK74_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_RPK74_NEW_Close_Shot_SoundShader", "NIA_RPK74_NEW_CloseDistance_Shot_SoundShader", "NIA_RPK74_NEW_MediumDistance_Shot_SoundShader", "NIA_RPK74_NEW_FarDistance_Shot_SoundShader", "NIA_RPK74_NEW_Interior_Shot_SoundShader", "NIA_RPK74_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_Saiga12K_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_Saiga12K_NEW_Close_Shot_SoundShader", "NIA_Saiga12K_NEW_CloseDistance_Shot_SoundShader", "NIA_Saiga12K_NEW_MediumDistance_Shot_SoundShader", "NIA_Saiga12K_NEW_FarDistance_Shot_SoundShader", "NIA_Saiga12K_NEW_Interior_Shot_SoundShader", "NIA_Saiga12K_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_SCARH_NEW_Shot_SoundSet
	{
		soundShaders[] = {"NIA_SCARH_Closure_SoundShader", "NIA_SCARH_NEW_Close_Shot_SoundShader", "NIA_SCARH_NEW_CloseDistance_Shot_SoundShader", "NIA_SCARH_NEW_MediumDistance_Shot_SoundShader", "NIA_SCARH_NEW_FarDistance_Shot_SoundShader", "NIA_SCARH_NEW_Interior_Shot_SoundShader", "NIA_SCARH_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_SCARHPR_NEW_Shot_SoundSet
	{
		soundShaders[] = {"NIA_SCARH_Closure_SoundShader", "NIA_SCARHPR_NEW_Close_Shot_SoundShader", "NIA_SCARHPR_NEW_CloseDistance_Shot_SoundShader", "NIA_SCARHPR_NEW_MediumDistance_Shot_SoundShader", "NIA_SCARHPR_NEW_FarDistance_Shot_SoundShader", "NIA_SCARHPR_NEW_Interior_Shot_SoundShader", "NIA_SCARHPR_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_SCARL_NEW_Shot_SoundSet
	{
		soundShaders[] = {"NIA_SCARH_Closure_SoundShader", "NIA_SCARL_NEW_Close_Shot_SoundShader", "NIA_SCARL_NEW_CloseDistance_Shot_SoundShader", "NIA_SCARL_NEW_MediumDistance_Shot_SoundShader", "NIA_SCARL_NEW_FarDistance_Shot_SoundShader", "NIA_SCARL_NEW_Interior_Shot_SoundShader", "NIA_SCARL_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_SCARMK18_NEW_Shot_SoundSet
	{
		soundShaders[] = {"NIA_SCARH_Closure_SoundShader", "NIA_SCARMK18_NEW_Close_Shot_SoundShader", "NIA_SCARMK18_NEW_CloseDistance_Shot_SoundShader", "NIA_SCARMK18_NEW_MediumDistance_Shot_SoundShader", "NIA_SCARMK18_NEW_FarDistance_Shot_SoundShader", "NIA_SCARMK18_NEW_Interior_Shot_SoundShader", "NIA_SCARMK18_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_SCARPDW_NEW_Shot_SoundSet
	{
		soundShaders[] = {"NIA_SCARH_Closure_SoundShader", "NIA_SCARPDW_NEW_Close_Shot_SoundShader", "NIA_SCARPDW_NEW_CloseDistance_Shot_SoundShader", "NIA_SCARPDW_NEW_MediumDistance_Shot_SoundShader", "NIA_SCARPDW_NEW_FarDistance_Shot_SoundShader", "NIA_SCARPDW_NEW_Interior_Shot_SoundShader", "NIA_SCARPDW_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_SIG550L_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_SIG550L_NEW_Close_Shot_SoundShader", "NIA_SIG550L_NEW_CloseDistance_Shot_SoundShader", "NIA_SIG550L_NEW_MediumDistance_Shot_SoundShader", "NIA_SIG550L_NEW_FarDistance_Shot_SoundShader", "NIA_SIG550L_NEW_Interior_Shot_SoundShader", "NIA_SIG550L_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_SIG550S_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_SIG550S_NEW_Close_Shot_SoundShader", "NIA_SIG550S_NEW_CloseDistance_Shot_SoundShader", "NIA_SIG550S_NEW_MediumDistance_Shot_SoundShader", "NIA_SIG550S_NEW_FarDistance_Shot_SoundShader", "NIA_SIG550S_NEW_Interior_Shot_SoundShader", "NIA_SIG550S_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_Springfield_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_Springfield_NEW_Close_Shot_SoundShader", "NIA_Springfield_NEW_CloseDistance_Shot_SoundShader", "NIA_Springfield_NEW_MediumDistance_Shot_SoundShader", "NIA_Springfield_NEW_FarDistance_Shot_SoundShader", "NIA_Springfield_NEW_Interior_Shot_SoundShader", "NIA_Springfield_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
	class NIA_STGW57_NEW_Shot_SoundSet
	{
		soundShaders[] = { "NIA_STGW57_NEW_Close_Shot_SoundShader", "NIA_STGW57_NEW_CloseDistance_Shot_SoundShader", "NIA_STGW57_NEW_MediumDistance_Shot_SoundShader", "NIA_STGW57_NEW_FarDistance_Shot_SoundShader", "NIA_STGW57_NEW_Interior_Shot_SoundShader", "NIA_STGW57_NEW_InteriorDistance_Shot_SoundShader"};
		volumeFactor = 1.33;
		volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.25;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyrandomizer = 0.5;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
	};
};