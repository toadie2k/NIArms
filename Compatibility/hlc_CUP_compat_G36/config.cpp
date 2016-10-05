#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_CUP_G36
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "CUP_Weapons_G36", "hlcweapons_G36" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class CUP_arifle_G36_Base : Rifle_Base_f
	{
		magazines[] += { __556G36_MAGS };
	};
	class hlc_G36_base : Rifle_Base_F
	{
		magazines[] += { __556G36_CUP_MAGS };
	};
};
