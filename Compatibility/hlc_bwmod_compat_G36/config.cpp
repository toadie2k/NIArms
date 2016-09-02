class CfgPatches 
{
	class HLC_COMPAT_BWMOD_G36
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "BWA3_Weapons", "hlcweapons_G36" };
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
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};/*
	class hlc_rifle_G36VAG36 :hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_G36V :hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_G36C : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_G36A1AG36 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_MG36 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};
	class hlc_rifle_G36A1 : hlc_G36_base
	{
		magazines[] += {"BWA3_30Rnd_556x45_G36", "BWA3_30Rnd_556x45_G36_Tracer", "BWA3_30Rnd_556x45_G36_Tracer_Dim", "BWA3_30Rnd_556x45_G36_SD", "BWA3_30Rnd_556x45_G36_AP" };
	};*/
};
