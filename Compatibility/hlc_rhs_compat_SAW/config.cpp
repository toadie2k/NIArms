#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_RHS_SAW
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_core", "hlcweapons_SAW" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};

class CfgWeapons
{
    class Rifle_Long_Base_F;
    class LMG_Mk200_F;

	/*
	========================================
	BIS GUNS
	========================================
	*/
    class LMG_03_base_F : Rifle_Long_Base_F {
        magazines[] += { __556NATO_BELTS, __556NATO_RHS_BELTS };
    };

	/*
	========================================
	RHS GUNS
	========================================
	*/
    class rhs_weap_M249_base : LMG_Mk200_F {
        magazines[] += { __556NATO_BELTS, __556NATO_BI_BELTS, __556STANAG_MAGS };
    };
    class rhs_weap_saw_base;
    class rhs_weap_lmg_minimipara : rhs_weap_saw_base {
        magazines[] += { __556NATO_BELTS, __556NATO_BI_BELTS, __556STANAG_MAGS };
    };

	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_saw_base;
    class hlc_lmg_minimipara : hlc_saw_base {
        magazines[] += { __556NATO_RHS_BELTS, __556STANAG_RHS_MAGS };
	};
    class hlc_lmg_mk48 : hlc_saw_base {
		magazines[] += { __762NATO_RHS_BELTS };
	};
};
