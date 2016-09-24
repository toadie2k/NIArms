#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT2_CUP_AK
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_aks","CUP_Weapons_AK","HLC_COMPAT_CUP_AK"};
		version = "1";
		projectName = "HLCmod";
		author = "Robalo";
	};
};
class CfgWeapons
{
	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_arifle_AK_Base;

	class CUP_arifle_AK47 : CUP_arifle_AK_Base
	{
		magazines[] += { __762x39_MAGS };
	};
	class CUP_arifle_AKM : CUP_arifle_AK_Base
	{
		magazines[] += { __762x39_MAGS };
	};

	/*
	========================================
	HLC GUNS
	========================================
	*/

    class hlc_ak_base;
    class hlc_rifle_ak47 : hlc_ak_base { 
        magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
    };
    class hlc_rifle_rpk : hlc_ak_base {
        magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
    };
    class hlc_rifle_RK62 : hlc_ak_base {
        magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
    };
    class hlc_rifle_slr107u : hlc_ak_base {
        magazines[] += { "CUP_30Rnd_762x39_AK47_M" };
    };
};
