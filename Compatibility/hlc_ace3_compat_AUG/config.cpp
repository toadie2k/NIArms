class CfgPatches 
{
	class HLC_COMPAT_ACE3_AUG
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "ace_common", "hlcweapons_AUG" };
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
	class hlc_rifle_aug;
	class hlc_rifle_auga3_GL :hlc_rifle_aug
	{
		class hlc_M203_AUGA3 : UGL_F
		{
			magazines[] += { "ACE_HuntIR_M203"};
		};
	};

};