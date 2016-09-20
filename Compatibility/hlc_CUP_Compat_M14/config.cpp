class CfgPatches 
{
	class HLC_COMPAT_CUP_M14
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_Weapons_F","hlcweapons_core","hlcweapons_m14","CUP_Weapons_DMR","CUP_Weapons_M14"};
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class SlotInfo;
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
	class Rifle_Long_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	/*
	========================================
	CUP GUNS
	========================================
	*/
	class CUP_srifle_M14 : Rifle_Base_F
	{
		/*"CUP_20Rnd_762x51_DMR","CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR","CUP_20Rnd_TE1_Red_Tracer_762x51_DMR","CUP_20Rnd_TE1_Green_Tracer_762x51_DMR","CUP_20Rnd_TE1_White_Tracer_762x51_DMR","20Rnd_762x51_Mag"*/
		magazines[] += {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_Barrier_M14", "hlc_20Rnd_762x51_mk316_M14", "hlc_20Rnd_762x51_T_M14", "hlc_50Rnd_762x51_B_M14", "hlc_20Rnd_762x51_S_M14"};

	};
	class CUP_srifle_DMR : Rifle_Base_F
	{
		magazines[] += {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_Barrier_M14", "hlc_20Rnd_762x51_mk316_M14", "hlc_20Rnd_762x51_T_M14", "hlc_50Rnd_762x51_B_M14", "hlc_20Rnd_762x51_S_M14"};
	};
	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_M14_base : Rifle_Base_F
	{
		magazines[] += {"hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_Barrier_M14", "hlc_20Rnd_762x51_mk316_M14", "hlc_20Rnd_762x51_T_M14", "hlc_50Rnd_762x51_B_M14", "hlc_20Rnd_762x51_S_M14","CUP_20Rnd_762x51_DMR", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR", "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR", "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR", "CUP_20Rnd_TE1_White_Tracer_762x51_DMR", "20Rnd_762x51_Mag"};
	};

};