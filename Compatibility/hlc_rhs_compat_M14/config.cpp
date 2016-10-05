#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_RHS_M14
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_m14", "rhs_c_weapons" };
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
	class srifle_EBR_F;
	class rhs_weap_m14ebrri : srifle_EBR_F
	{
		/*rhsusf_20Rnd_762x51_m118_special_Mag,rhsusf_20Rnd_762x51_m993_Mag*/
		magazines[] += { __762M14_RHS_MAGS };
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_M14_base : Rifle_Base_F
	{
		magazines[] += { __762M14_RHS_MAGS };
	};
};
