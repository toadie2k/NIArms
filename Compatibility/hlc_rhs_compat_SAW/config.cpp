class CfgPatches 
{
	class HLC_COMPAT_RHS_SAW
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_core", "hlcweapons_SAW" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};

class CfgWeapons
{

	class hlc_saw_base;
	class hlc_lmg_minimipara : hlc_saw_base
	{
		magazines[] += {"rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_M200_soft_pouch", "rhsusf_200Rnd_556x45_soft_pouch", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M200_Stanag"};
	};
	class hlc_lmg_mk48 : hlc_saw_base {
		magazines[] += {"rhsusf_50Rnd_762x51", // M80
			"rhsusf_50Rnd_762x51_m61_ap",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m80a1epr",
			"rhsusf_50Rnd_762x51_m82_blank",

			"rhsusf_100Rnd_762x51", // M80
			"rhsusf_100Rnd_762x51_m61_ap",
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_100Rnd_762x51_m80a1epr",
			"rhsusf_100Rnd_762x51_m82_blank"};
	};
};