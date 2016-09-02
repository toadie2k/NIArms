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
class SlotInfo;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	/*
	========================================
	RHS GUNS
	========================================
	*/
	class srifle_EBR_F;
	class rhs_weap_m14ebrri : srifle_EBR_F
	{
		/*rhsusf_20Rnd_762x51_m118_special_Mag,rhsusf_20Rnd_762x51_m993_Mag*/
		magazines[] += {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_Barrier_M14", "hlc_20Rnd_762x51_mk316_M14", "hlc_20Rnd_762x51_T_M14", "hlc_50Rnd_762x51_B_M14", "hlc_20Rnd_762x51_S_M14"};

	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_M14_base : Rifle_Base_F
	{
		magazines[] += {"rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag"};
	};

};