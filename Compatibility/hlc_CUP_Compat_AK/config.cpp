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
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_arifle_AK_Base : Rifle_Base_F	{
		/*"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M" */
		magazines[] += {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK" };
		class GP25Muzzle : UGL_F
		{
			/* "CUP_IlumFlareWhite_GP25_M", "CUP_IlumFlareRed_GP25_M", "CUP_IlumFlareGreen_GP25_M", "CUP_1Rnd_HE_GP25_M", "CUP_FlareWhite_GP25_M", "CUP_FlareGreen_GP25_M", "CUP_FlareRed_GP25_M", "CUP_FlareYellow_GP25_M", "CUP_1Rnd_SMOKE_GP25_M", "CUP_1Rnd_SMOKERED_GP25_M", "CUP_1Rnd_SMOKEGREEN_GP25_M", "CUP_1Rnd_SMOKEYELLOW_GP25_M" */
			magazines[] += { "hlc_VOG25_AK", "VOG25P_test", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Green", "hlc_GRD_Yellow", "hlc_GRD_Purple", "hlc_GRD_Blue", "hlc_GRD_Orange" };
		};
	};

	class CUP_arifle_AK47 : CUP_arifle_AK_Base
	{
		magazines[] += {"CUP_30Rnd_762x39_AK47_M", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak" };
	};
	class CUP_arifle_AKM : CUP_arifle_AK_Base
	{
		magazines[] += {"CUP_30Rnd_762x39_AK47_M", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak" };
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
	class hlc_ak_base;
	class hlc_rifle_ak74 : hlc_ak_base
	{
		magazines[] += {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
	};
	class hlc_rifle_ak12;
	class hlc_rifle_ak12GL : hlc_rifle_ak12
	{
		class hlc_GP30_AK12 : UGL_F
		{
			magazines[] += { "CUP_IlumFlareWhite_GP25_M", "CUP_IlumFlareRed_GP25_M", "CUP_IlumFlareGreen_GP25_M", "CUP_1Rnd_HE_GP25_M", "CUP_FlareWhite_GP25_M", "CUP_FlareGreen_GP25_M", "CUP_FlareRed_GP25_M", "CUP_FlareYellow_GP25_M", "CUP_1Rnd_SMOKE_GP25_M", "CUP_1Rnd_SMOKERED_GP25_M", "CUP_1Rnd_SMOKEGREEN_GP25_M", "CUP_1Rnd_SMOKEYELLOW_GP25_M" };
		};
	};
	class hlc_rifle_RPK12 : hlc_rifle_ak12
	{
		magazines[] += {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
	};
	class hlc_rifle_aks74u : hlc_ak_base
	{
		magazines[] += {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
	};
	class hlc_rifle_aks74u_MTK : hlc_ak_base
	{
		magazines[] += {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
	};
	class hlc_rifle_ak47 : hlc_ak_base
	{
		magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
	};
	class hlc_rifle_akm;
	class hlc_rifle_akmgl :hlc_rifle_akm
	{
		class hlc_GP25_AKM : UGL_F 
		{
			magazines[] += { "CUP_IlumFlareWhite_GP25_M", "CUP_IlumFlareRed_GP25_M", "CUP_IlumFlareGreen_GP25_M", "CUP_1Rnd_HE_GP25_M", "CUP_FlareWhite_GP25_M", "CUP_FlareGreen_GP25_M", "CUP_FlareRed_GP25_M", "CUP_FlareYellow_GP25_M", "CUP_1Rnd_SMOKE_GP25_M", "CUP_1Rnd_SMOKERED_GP25_M", "CUP_1Rnd_SMOKEGREEN_GP25_M", "CUP_1Rnd_SMOKEYELLOW_GP25_M" };
		};
	};
	class hlc_rifle_rpk : hlc_ak_base
	{
		magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
	};
	class hlc_rifle_rpk74n :hlc_ak_base
	{
		magazines[] += { "CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M" };
	};
	class hlc_rifle_aks74;
	class hlc_rifle_aks74_GL : hlc_rifle_aks74
	{
		class hlc_GP30_AKS74 : UGL_F
		{
			magazines[] += { "CUP_IlumFlareWhite_GP25_M", "CUP_IlumFlareRed_GP25_M", "CUP_IlumFlareGreen_GP25_M", "CUP_1Rnd_HE_GP25_M", "CUP_FlareWhite_GP25_M", "CUP_FlareGreen_GP25_M", "CUP_FlareRed_GP25_M", "CUP_FlareYellow_GP25_M", "CUP_1Rnd_SMOKE_GP25_M", "CUP_1Rnd_SMOKERED_GP25_M", "CUP_1Rnd_SMOKEGREEN_GP25_M", "CUP_1Rnd_SMOKEYELLOW_GP25_M" };
		};
	};

	class hlc_rifle_saiga12k : hlc_rifle_ak47
	{
		magazines[] = { "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_slug_S12", "CUP_8Rnd_B_Saiga12_74Slug_M", "CUP_8Rnd_B_Saiga12_74Pellets_M" };
	};
	class hlc_rifle_ak74m_MTK : hlc_ak_base
	{
		magazines[] += {"CUP_30Rnd_545x39_AK_M", "CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_White_Tracer_545x39_AK_M", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
	};
	class hlc_rifle_RK62 : hlc_ak_base
	{
		magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
	};
	class hlc_rifle_slr107u : hlc_ak_base
	{
		magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
	};
	class hlc_rifle_slr107u_MTK : hlc_ak_base
	{
		magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
	};
};