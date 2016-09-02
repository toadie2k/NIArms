class CfgPatches 
{
	class HLC_COMPAT_ACE3_SIGAMT
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
        requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "hlcweapons_stgw57", "ace_common" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};

class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;

class CfgWeapons
{
    class ItemCore;
    class optic_Arco : ItemCore{};

    class hlc_optic_Kern :optic_arco
    {
        ACE_ScopeAdjust_Vertical[] = { -5, 13 };
        ACE_ScopeAdjust_Horizontal[] = { -7, 7 };
        ACE_ScopeAdjust_VerticalIncrement = 0.25;
        ACE_ScopeAdjust_HorizontalIncrement = 0.25;
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 10;
            opticType = 1;
            optics = 1;
            modelOptics = "\hlc_wp_sigamt\mesh\aarau\aarau_optics";
            class OpticsModes
            {
                class Snip
                {
                    discreteDistance[] = { 100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        class hlc_optic_Kern2d : hlc_optic_Kern
        {
            ACE_ScopeAdjust_Vertical[] = { -5, 13 };
            ACE_ScopeAdjust_Horizontal[] = { -7, 7 };
            ACE_ScopeAdjust_VerticalIncrement = 0.25;
            ACE_ScopeAdjust_HorizontalIncrement = 0.25;
            class ItemInfo : InventoryOpticsItem_Base_F
            {
                mass = 10;
                opticType = 1;
                optics = 1;
                modelOptics = "\hlc_wp_sigamt\mesh\aarau\aarau_optics";
                class OpticsModes
                {
                    class Snip
                    {
                        discreteDistance[] = { 100 };
                        discreteDistanceInitIndex = 0;
                    };
                };
            };
    };
};
