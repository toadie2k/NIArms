class CfgPatches 
{
	class HLC_COMPAT_ACE3_AR15
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_ar15", "ace_common" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class UGL_F;
	class hlc_rifle_m4;
	class hlc_rifle_m4m203 : hlc_rifle_m4
	{
		class hlc_M203_M4 : UGL_F
		{
			magazines[] += { "ACE_HuntIR_M203"};
		};
	};
	class hlc_rifle_colt727;
	class hlc_rifle_Colt727_GL : hlc_rifle_Colt727
	{
		class hlc_M203_CAR15 : UGL_F
		{
			magazines[] += { "ACE_HuntIR_M203"};
		};
	};
};
