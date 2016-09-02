class CfgPatches 
{
	class HLC_COMPAT_ACE3_G36
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "ace_common", "hlcweapons_G36" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class hlc_G36_base : Rifle_Base_F
	{
		class hlc_GL_AG36 : UGL_F
		{
			magazines[] += {"ACE_HuntIR_M203" };
		};
	};
	class hlc_rifle_G36MLIC : hlc_G36_base
	{
		magazines[] += {            "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"};
	};
		class 	hlc_rifle_G36MLIAG36 : hlc_G36_base
		{
			magazines[] += {           "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim",
				"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"};
		};
};