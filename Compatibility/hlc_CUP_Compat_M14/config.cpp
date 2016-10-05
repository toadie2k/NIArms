#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_CUP_M14
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_m14","CUP_Weapons_DMR","CUP_Weapons_M14"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_srifle_M14 : Rifle_Base_F
	{
		/*"CUP_20Rnd_762x51_DMR","CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR","CUP_20Rnd_TE1_Red_Tracer_762x51_DMR","CUP_20Rnd_TE1_Green_Tracer_762x51_DMR","CUP_20Rnd_TE1_White_Tracer_762x51_DMR","20Rnd_762x51_Mag"*/
		magazines[] += { __762M14_MAGS };

	};
	class CUP_srifle_DMR : Rifle_Base_F
	{
		magazines[] += { __762M14_MAGS };
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_M14_base : Rifle_Base_F
	{
		magazines[] += { __762M14_CUP_MAGS };
	};
};
