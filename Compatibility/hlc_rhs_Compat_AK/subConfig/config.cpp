#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT2_RHS_AK //workaround for BI += inheritance bug
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_aks", "rhs_c_weapons", "HLC_COMPAT_RHS_AK"};
		version = "1";
		projectName = "HLCmod";
		author = "Robalo";
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
    class rhs_weap_akm;
    class rhs_weap_ak103_base : rhs_weap_akm {
        magazines[] += { __762x39_MAGS, __762x39_BI_MAGS };
    };

	/*
	========================================
	HLC GUNS
	========================================
	*/
    class hlc_ak_base;
    class hlc_rifle_ak47 : hlc_ak_base { 
        magazines[] += { __762x39_RHS_MAGS };
    };
    class hlc_rifle_rpk : hlc_ak_base {
        magazines[] += { __762x39_RHS_MAGS };
    };
    class hlc_rifle_RK62 : hlc_ak_base {
        magazines[] += { __762x39_RHS_MAGS };
    };
    class hlc_rifle_slr107u : hlc_ak_base {
        magazines[] += { __762x39_RHS_MAGS };
    };

};
