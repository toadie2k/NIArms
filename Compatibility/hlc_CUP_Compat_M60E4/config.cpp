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
	CUP GUNS
	========================================
	*/
	class CUP_lmg_M240 : Rifle_Long_Base_F
	{
		magazines[] += {"hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_T_M60E4"};
	};
	class CUP_lmg_M60A4 : Rifle_Long_Base_F
	{
		magazines[] += {"hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_T_M60E4"};
    };/*
	class CUP_lmg_L7A2 : Rifle_Long_Base_F
	{
		magazines[] += {"hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_T_M60E4"};
	};*/
	class CUP_lmg_Mk48_Base : Rifle_Long_Base_F
	{
		magazines[] += {"hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_T_M60E4"};
	};

	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_M60e4_base : Rifle_Base_F
	{
		magazines[] += {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
	};

};