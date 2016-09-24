#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_RHS_M60E4
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_m60e4", "rhsusf_c_weapons" };
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
	class rhs_weap_M249_base;
    class rhs_weap_m240_base : rhs_weap_M249_base {
		magazines[] += { __762NATO_BELTS, __762NATO_BI_BELTS };
	};

	/*
	========================================
	HLC GUNS
	========================================
	*/
    class hlc_M60e4_base : Rifle_Base_F {
		magazines[] += { __762NATO_RHS_BELTS };
	};
};
