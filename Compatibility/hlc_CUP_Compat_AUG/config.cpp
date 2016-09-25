#include "\hlc_core\script_macros.hpp"

class CfgPatches 
{
	class HLC_COMPAT_CUP_AUG
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "CUP_Weapons_M16", "hlcweapons_AUG" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
	class GrenadeLauncher;
    class UGL_F : GrenadeLauncher {
        magazines[] += { __40MM_M203_CUP_GRENADES };
    };
};
