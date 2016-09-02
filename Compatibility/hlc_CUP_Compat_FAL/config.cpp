class CfgPatches 
{
	class HLC_COMPAT_CUP_FAL
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","CUP_Weapons_FNFAL","hlcweapons_falpocalypse"};
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
	class CUP_arifle_FNFAL : Rifle_Base_F
	{
		magazines[] += {"hlc_20Rnd_762x51_B_fal", "hlc_20Rnd_762x51_t_fal", "hlc_50rnd_762x51_M_FAL", "hlc_20Rnd_762x51_S_fal"};
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_fal_base : Rifle_Base_F
	{
		magazines[] += {"CUP_20Rnd_762x51_FNFAL_M"};
	};
	class hlc_rifle_falosw;
	class hlc_rifle_osw_GL : hlc_rifle_falosw
	{
		class hlc_M203_OSW : UGL_F 
		{
			magazines[] += {"CUP_1Rnd_StarCluster_White_M203", "CUP_1Rnd_StarCluster_Red_M203", "CUP_1Rnd_StarCluster_Green_M203", "CUP_1Rnd_StarFlare_White_M203", "CUP_1Rnd_StarFlare_Red_M203", "CUP_1Rnd_StarFlare_Green_M203", "CUP_1Rnd_HE_M203", "CUP_1Rnd_HEDP_M203", "CUP_FlareWhite_M203", "CUP_FlareGreen_M203", "CUP_FlareRed_M203", "CUP_FlareYellow_M203", "CUP_1Rnd_Smoke_M203", "CUP_1Rnd_SmokeRed_M203", "CUP_1Rnd_SmokeGreen_M203", "CUP_1Rnd_SmokeYellow_M203", "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
		};
	};
};
