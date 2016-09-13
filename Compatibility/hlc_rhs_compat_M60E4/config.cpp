class CfgPatches 
{
	class HLC_COMPAT_RHS_M60E4
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_m60e4", "rhsusf_c_weapons" };
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
	RHS GUNS
	========================================
	*/
	class rhs_weap_M249_base;
	class rhs_weap_m240_base : rhs_weap_M249_base
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
		magazines[] += {		"rhsusf_50Rnd_762x51", // M80
			"rhsusf_50Rnd_762x51_m61_ap",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m80a1epr",
			"rhsusf_50Rnd_762x51_m82_blank",

			"rhsusf_100Rnd_762x51", // M80
			"rhsusf_100Rnd_762x51_m61_ap",
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_100Rnd_762x51_m80a1epr",
			"rhsusf_100Rnd_762x51_m82_blank" };

	};


};
