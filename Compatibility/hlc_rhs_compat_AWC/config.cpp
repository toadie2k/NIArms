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
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	/*
	========================================
	RHS GUNS
	========================================
	*/
	class rhs_weap_XM2010_Base_F : Rifle_Base_F
	{
		magazines[] += {"hlc_5rnd_300WM_FMJ_AWM", "hlc_5rnd_300WM_mk248_AWM", "hlc_5rnd_300WM_BTSP_AWM", "hlc_5rnd_300WM_AP_AWM", "hlc_5rnd_300WM_SBT_AWM" };
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_AWC_base;
	class hlc_rifle_awcovert : hlc_AWC_base
	{
		magazines[] += {"rhsusf_5Rnd_300winmag_xm2010"};
	};
	class hlc_rifle_awmagnum : hlc_AWC_base
	{
		magazines[] += {"rhsusf_5Rnd_300winmag_xm2010"};
	};
};
