class CfgPatches 
{
	class HLC_COMPAT_ACE3_FAL
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "ace_common", "hlcweapons_falpocalypse" };
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
	class hlc_rifle_falosw;
	class hlc_rifle_osw_GL : hlc_rifle_falosw
	{
		class hlc_M203_OSW : UGL_F
		{
			magazines[] += {"ACE_HuntIR_M203" };
		};
	};
};