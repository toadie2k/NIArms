#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_CUP_M60E4
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_m60e4", "CUP_Weapons_M60E4", "CUP_Weapons_M240",/* "CUP_Weapons_L7A2",*/ "CUP_Weapons_Mk48" };
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
	class CUP_lmg_M240 : Rifle_Long_Base_F
	{
		magazines[] += { __762NATO_BELTS };
	};
	class CUP_lmg_M60A4 : Rifle_Long_Base_F
	{
		magazines[] += { __762NATO_BELTS };
    };/*
	class CUP_lmg_L7A2 : Rifle_Long_Base_F
	{
		magazines[] += { __762NATO_BELTS };
	};*/
	class CUP_lmg_Mk48_Base : Rifle_Long_Base_F
	{
		magazines[] += { __762NATO_BELTS };
	};

	/*
	========================================
	HLC GUNS
	========================================
	*/
    class hlc_M60e4_base : Rifle_Base_F {
		magazines[] += { __762NATO_CUP_BELTS };
	};

};
