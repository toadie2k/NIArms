class CfgPatches 
{
	class HLC_COMPAT_RHS_AUG
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_AUG", "rhsusf_c_weapons" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
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
	class UGL_F;
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class hlc_rifle_aug;
	class hlc_rifle_auga3_GL :hlc_rifle_aug
	{
		class hlc_M203_AUGA3 : UGL_F
		{
			magazines[] += { "rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_mag_M4009", "rhs_mag_m576", "rhs_mag_M585_white", "rhs_mag_M661_green", "rhs_mag_M662_red", "rhs_mag_M713_red", "rhs_mag_M714_white", "rhs_mag_M715_green", "rhs_mag_M716_yellow" };
		};
	};

};