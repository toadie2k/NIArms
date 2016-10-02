#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_CUP_MP5
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_mp5","CUP_Weapons_MP5"};
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
	class CUP_smg_MP5SD6 : Rifle_Base_F
	{/*"CUP_30Rnd_9x19_MP5"*/
		magazines[] += {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_SD_MP5"};
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_Mp5_base : Rifle_Base_F
	{
		magazines[] += {"CUP_30Rnd_9x19_MP5"};
	};
};
