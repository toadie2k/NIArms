#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_RHS_G36
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "rhssaf_c_weapons", "hlcweapons_G36" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class hlc_G36_base : Rifle_Base_F
	{
		magazines[] += { __556G36_RHS_MAGS };
	};

	class rhs_weap_g36_base : Rifle_Base_F {
		magazines[] += { __556G36_MAGS };
	};
};
