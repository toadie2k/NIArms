#include "\hlc_core\script_macros.hpp"

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
	class Rifle_Base_F;
	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_arifle_FNFAL : Rifle_Base_F
	{
		magazines[] += { __762FAL_MAGS };
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
};
