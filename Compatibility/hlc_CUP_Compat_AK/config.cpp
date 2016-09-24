#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_CUP_AK
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_aks","CUP_Weapons_AK", "CUP_Weapons_Saiga12k"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class UGL_F;
	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_arifle_AK_Base : Rifle_Base_F	{
		/*"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M" */
		magazines[] += { __545x39_MAGS };
		class GP25Muzzle : UGL_F
		{
			/* "CUP_IlumFlareWhite_GP25_M", "CUP_IlumFlareRed_GP25_M", "CUP_IlumFlareGreen_GP25_M", "CUP_1Rnd_HE_GP25_M", "CUP_FlareWhite_GP25_M", "CUP_FlareGreen_GP25_M", "CUP_FlareRed_GP25_M", "CUP_FlareYellow_GP25_M", "CUP_1Rnd_SMOKE_GP25_M", "CUP_1Rnd_SMOKERED_GP25_M", "CUP_1Rnd_SMOKEGREEN_GP25_M", "CUP_1Rnd_SMOKEYELLOW_GP25_M" */
			magazines[] += { __40MM_GP_GRENADES };
		};
	};

	class CUP_sgun_Saiga12K : Rifle_Base_F
	{
		reloadAction = "HLC_GestureReloadAK";
		reloadMagazineSound[] = { "\hlc_wp_ak\snd\ak74m_reload", 0.74, 1, 30 };
		/*"CUP_8Rnd_B_Saiga12_74Slug_M", "CUP_8Rnd_B_Saiga12_74Pellets_M" */
		magazines[] += {"hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_slug_S12" };
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
    class hlc_ak_base : Rifle_Base_F {
        magazines[] += { "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M" };
        class hlc_GP30 : UGL_F {
            magazines[] += { "CUP_IlumFlareWhite_GP25_M", "CUP_IlumFlareRed_GP25_M", "CUP_IlumFlareGreen_GP25_M", "CUP_1Rnd_HE_GP25_M", "CUP_FlareWhite_GP25_M", "CUP_FlareGreen_GP25_M", "CUP_FlareRed_GP25_M", "CUP_FlareYellow_GP25_M", "CUP_1Rnd_SMOKE_GP25_M", "CUP_1Rnd_SMOKERED_GP25_M", "CUP_1Rnd_SMOKEGREEN_GP25_M", "CUP_1Rnd_SMOKEYELLOW_GP25_M" };
        };
    };
};
