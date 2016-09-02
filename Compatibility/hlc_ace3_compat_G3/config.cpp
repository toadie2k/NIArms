class CfgPatches 
{
	class HLC_COMPAT_ACE3_G3
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "ace_common", "hlcweapons_g3" };
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
	class hlc_rifle_g3a3ris;
	class HLC_Rifle_g3ka4_GL : hlc_rifle_g3a3ris
	{
		class hlc_M203_G3k : UGL_F
		{
			magazines[] += {"ACE_HuntIR_M203" };
		};
	};
    class InventoryOpticsItem_Base_F;
    class optic_dms;
    class HLC_Optic_ZFSG1 : optic_dms {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {

                class Snip {
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex =0;
                };
            };
        };
    };
    class hlc_optic_accupoint_g3 : HLC_Optic_ZFSG1 {
        class ItemInfo : InventoryOpticsItem_Base_F {
            class OpticsModes {

                class Snip {
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
};