#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_RHS_AWC
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_FHAWCovert", "rhs_c_weapons" };
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
	RHS GUNS
	========================================
	*/
	class rhs_weap_XM2010_Base_F : Rifle_Base_F {
		magazines[] += { __300WM_MAGS };
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
    class hlc_AWC_base : Rifle_Base_F {
		magazines[] += { "rhsusf_5Rnd_300winmag_xm2010" };
	};
};
