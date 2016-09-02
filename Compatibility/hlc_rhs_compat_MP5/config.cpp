class CfgPatches 
{
	class HLC_COMPAT_RHS_MP5
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "rhsusf_c_weapons", "hlcweapons_mp5" };
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
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class hlc_smg_mp5N;
	class hlc_smg_9mmar : hlc_smg_MP5N
	{
		class hlc_M203_Mp5 : UGL_F
		{
			magazines[] += {"rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_mag_M4009", "rhs_mag_m576", "rhs_mag_M585_white", "rhs_mag_M661_green", "rhs_mag_M662_red", "rhs_mag_M713_red", "rhs_mag_M714_white", "rhs_mag_M715_green", "rhs_mag_M716_yellow" };
		};
	};
};