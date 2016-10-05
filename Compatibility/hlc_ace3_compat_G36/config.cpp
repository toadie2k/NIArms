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
	class hlc_G36_base;
	class hlc_rifle_G36MLIC : hlc_G36_base
	{
		magazines[] += { "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim", "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim" };
	};
};
