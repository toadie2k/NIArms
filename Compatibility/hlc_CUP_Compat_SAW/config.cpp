#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_CUP_SAW
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "CUP_Weapons_M249","CUP_Weapons_M240", "hlcweapons_SAW", "CUP_weapons_L110"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F;

	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_lmg_L110A1 : Rifle_Long_Base_F
	{
		magazines[] += { __556NATO_BELTS, __556STANAG_MAGS };
	};
	class CUP_saw_base;
	class CUP_lmg_minimipara : CUP_saw_base
	{
		magazines[] += { __556NATO_BELTS, __556STANAG_MAGS };
	};

	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_saw_base;
	class hlc_lmg_minimipara : hlc_saw_base	{
		magazines[] += { __556NATO_CUP_BELTS, __556STANAG_CUP_MAGS };
	};
    class hlc_lmg_mk48 : hlc_saw_base {
		magazines[] += {__762NATO_CUP_BELTS};
	};
};
