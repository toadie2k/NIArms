#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_RHS_AR15
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_ar15", "rhsusf_c_weapons" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
    class arifle_MX_Base_F;

	/*
	========================================
	BIS GUNS (bonus compat)
	========================================
	*/
    class mk20_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_RHS_MAGS };
    };
    class SDAR_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_RHS_MAGS };
    };
    class Tavor_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_RHS_MAGS };
    };
    class arifle_SPAR_01_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_RHS_MAGS };
    };
    class arifle_SPAR_02_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_RHS_MAGS };
    };

	/*
	========================================
	RHS GUNS
	========================================
	*/
    class rhs_weap_m4_Base : arifle_MX_Base_F {
        magazines[] += { __556STANAG_MAGS, __556NATO_BI_DRUMS };
    };

	/*
	========================================
	HLC GUNS
	========================================
	*/
    class hlc_ar15_base : Rifle_Base_F {
        magazines[] += { __556STANAG_RHS_MAGS };
    };

};
