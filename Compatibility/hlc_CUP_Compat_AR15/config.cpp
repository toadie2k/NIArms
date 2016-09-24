#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_CUP_AR15
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_ar15","CUP_Weapons_M16","CUP_Weapons_L85","CUP_Weapons_SCAR"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
    class GrenadeLauncher;
    class UGL_F : GrenadeLauncher {
        magazines[] += { __40MM_M203_CUP_GRENADES };
    };
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_arifle_M16_Base : Rifle_Base_f
	{
		/*"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_G36", "CUP_30Rnd_TE1_Red_Tracer_556x45_G36", "CUP_30Rnd_TE1_Green_Tracer_556x45_G36", "CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36", "CUP_100Rnd_556x45_BetaCMag", "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag", "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"*/
		magazines[] += { __556STANAG_MAGS };
	};
	class CUP_arifle_M4A1;
	class CUP_srifle_Mk12SPR : CUP_arifle_M4A1
	{
		magazines[] += { __556STANAG_MAGS };
	};
	class CUP_arifle_L85A2_Base : Rifle_Base_F
	{
		magazines[] += { __556STANAG_MAGS };
	};
	class CUP_arifle_SCAR_Base : Rifle_Base_F
	{
		reloadAction = "HLC_GestureReloadAR15_catch_DR";
		magazines[] += { __556STANAG_MAGS };
	};

	/*
	========================================
	HLC GUNS
	========================================
	*/
    class hlc_ar15_base : Rifle_Base_F {
		magazines[] += { __556STANAG_CUP_MAGS };
	};
	
};
