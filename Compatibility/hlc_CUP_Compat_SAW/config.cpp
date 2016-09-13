class CfgPatches 
{
	class HLC_COMPAT_CUP_SAW
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "CUP_Weapons_M249","CUP_Weapons_M240", "hlcweapons_SAW", "CUP_weapons_L110"};
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
	class CUP_lmg_L110A1 : Rifle_Long_Base_F
	{
		magazines[] += {"hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_B_SAW", "hlc_200rnd_556x45_T_SAW"};
	};
	class CUP_saw_base;
	class CUP_lmg_minimipara : CUP_saw_base
	{
		magazines[] += {"hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_B_SAW", "hlc_200rnd_556x45_T_SAW"};
	};

	/*
	========================================
	HLC GUNS
	========================================
	*/
	class hlc_saw_base;
	class hlc_lmg_minimipara : hlc_saw_base
	{
		magazines[] += {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1"};
	};
	class hlc_lmg_mk48 : hlc_saw_base {
		magazines[] += {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
	};
};