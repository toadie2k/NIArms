#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_aks {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = {"HLC_AK_ammobox","Weapon_hlc_rifle_ak74","Weapon_hlc_rifle_ak74_dirty","Weapon_hlc_rifle_aks74","Weapon_hlc_rifle_aks74_GL","Weapon_hlc_rifle_ak12","Weapon_hlc_rifle_ak12GL","Weapon_hlc_rifle_akU12","Weapon_hlc_rifle_RPK12",
            "Weapon_hlc_rifle_aks74u","Weapon_hlc_rifle_aek971worn","Weapon_hlc_rifle_aek971","Weapon_hlc_rifle_ak47","Weapon_hlc_rifle_akm","Weapon_hlc_rifle_akmgl","Weapon_hlc_rifle_rpk","Weapon_hlc_rifle_rpk74n","Weapon_hlc_rifle_saiga12k"
        };
        weapons[] = {"HLC_Optic_PSO1","HLC_Optic_1p29","hlc_muzzle_545SUP_AK","hlc_muzzle_762SUP_AK","hlc_rifle_ak74","hlc_rifle_aks74","hlc_optic_kobra","hlc_optic_goshawk","hlc_rifle_ak12","hlc_rifle_aks74u","hlc_rifle_ak47","hlc_rifle_akm","hlc_rifle_akmgl","hlc_rifle_rpk","hlc_rifle_aks74_GL","hlc_rifle_aek971","hlc_rifle_saiga12k"};
        magazines[] = { "hlc_10rnd_12g_buck_S12", "hlc_10rnd_12g_slug_S12", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_t_ak", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_EP_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_t_rpk", "hlc_45Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "hlc_VOG25_AK", "hlc_GRD_Red", "hlc_GRD_blue", "hlc_GRD_green", "hlc_GRD_yellow", "hlc_GRD_white", "hlc_GRD_purple", "hlc_GRD_orange" };
        version="V2.05";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;
    class Niarms_AK : Mod_Base {
        name = "NIArsenal: AK Rifles";
        picture = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
    };
};

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail;
class asdg_OpticSideMount : asdg_OpticRail {
    class compatibleItems {
        HLC_Optic_PSO1 = 1;
        HLC_Optic_1p29 = 1;
        hlc_optic_kobra = 1;
        hlc_optic_goshawk = 1;
    };
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_545SUP_AK = 1;
    };
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_762SUP_AK = 1;
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        HLC_GestureReloadAK12New = "HLC_GestureReloadAK12New"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadRPK12 = "HLC_GestureReloadRPK12";
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New", "Gesture" };
            HLC_GestureReloadRPK12[] = { "HLC_GestureReloadRPK12", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New_Prone", "Gesture" };
            HLC_GestureReloadRPK12[] = { "HLC_GestureReloadRPK12_Prone", "Gesture" };
        };
        /*
        class RifleKneelActions : RifleBaseStandActions {
        HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
        };*/
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New_Context", "Gesture" };
            HLC_GestureReloadRPK12[] = { "HLC_GestureReloadRPK12_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New_Context", "Gesture" };
            HLC_GestureRechamberAWM[] = { "HLC_GestureReloadRPK12_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadAK12New[] = { "HLC_GestureReloadAK12New_Context", "Gesture" };
                HLC_GestureReloadRPK12[] = { "HLC_GestureReloadRPK12_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;
    class States {

        class HLC_GestureReloadAK12New : Default {
            file = "hlc_wp_ak\anim\reload\reload_ak12_standing.rtm";
            speed = -4.8;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.007944, 1, 0.034722, 0, 0.840277777778, 0, 0.88888888, 1 };
        };

        class HLC_GestureReloadAK12New_Prone : Default {
            file = "hlc_wp_ak\anim\reload\reload_rpk12_prone.rtm";
            speed = -4.8;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.007944, 1, 0.034722, 0, 0.840277777778, 0, 0.88888888, 1 };
        };
        class HLC_GestureReloadAK12New_Context : HLC_GestureReloadAK12New {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadRPK12 :Default {
            file = "hlc_wp_ak\anim\reload\reload_rpk12_standing.rtm";
            speed = -4.8;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.007944, 1, 0.034722, 0, 0.840277777778, 0, 0.88888888, 1 };
        };
        class HLC_GestureReloadRPK12_Prone : Default {
            file = "hlc_wp_ak\anim\reload\reload_rpk12_prone.rtm";
            speed = -4.8;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.007944, 1, 0.034722, 0, 0.840277777778, 0, 0.88888888, 1 };
        };
        class HLC_GestureReloadRPK12_Context : HLC_GestureReloadRPK12 {
            mask = "handsWeapon_context";
        };
    };
};


class CfgVehicles {
    class NATO_Box_Base;
    class HLC_AK_ammobox : NATO_Box_Base {
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AK Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        dlc = "Niarms_AK";
        class TransportMagazines {
            class _xx_hlc_30Rnd_545x39_B_AK {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 60;
            };
            class _xx_hlc_30Rnd_545x39_t_ak {
                magazine = "hlc_30Rnd_545x39_t_ak";
                count = 60;
            };
            class _XX_hlc_30Rnd_545x39_S_AK {
            magazine = "hlc_30Rnd_545x39_S_AK";
            count =  60;
            };
            class _xx_hlc_45Rnd_545x39_t_rpk {
                magazine = "hlc_45Rnd_545x39_t_rpk";
                count = 60;
            };
            class _xx_hlc_30Rnd_545x39_EP_ak {
                magazine = "hlc_30Rnd_545x39_EP_ak";
                count = 60;
            };
            class _xx_hlc_30Rnd_762x39_b_ak {
                magazine = "hlc_30Rnd_762x39_b_ak";
                count = 60;
            };
            class _xx_hlc_hlc_30Rnd_762x39_t_ak {
                magazine = "hlc_30Rnd_762x39_t_ak";
                count = 60;
            };
            class _xx_hlc_45Rnd_762x39_t_rpk {
                magazine = "hlc_45Rnd_762x39_t_rpk";
                count = 60;
            };
            class _xx_hlc_45Rnd_762x39_m_rpk {
                magazine = "hlc_45Rnd_762x39_m_rpk";
                count = 60;
            };
            class _xx_hlc_10rnd_12g_buck_S12 {
                magazine = "hlc_10rnd_12g_buck_S12";
                count = 60;
            };
            class _xx_hlc_10rnd_12g_slug_S12 {
                magazine = "hlc_10rnd_12g_slug_S12";
                count = 60;
            };
            class _xx_hlc_hlc_VOG25_AK {
                magazine = "hlc_VOG25_AK";
                count = 60;
            };
            class _xx_hlc_GRD_White {
                magazine = "hlc_GRD_White";
                count = 60;
            };
            class _xx_hlc_GRD_red {
                magazine = "hlc_GRD_red";
                count = 60;
            };
            class _xx_hlc_GRD_green {
                magazine = "hlc_GRD_green";
                count = 60;
            };
            class _xx_hlc_GRD_blue {
                magazine = "hlc_GRD_blue";
                count = 60;
            };
            class _xx_hlc_GRD_orange {
                magazine = "hlc_GRD_orange";
                count = 60;
            };
            class _xx_hlc_GRD_purple {
                magazine = "hlc_GRD_purple";
                count = 60;
            };
        };
        class TransportWeapons {
            class _xx_hlc_rifle_ak74 {
                weapon = "hlc_rifle_ak74";
                count = 10;
            };
            class _xx_hlc_rifle_aks74 {
                weapon = "hlc_rifle_aks74";
                count = 10;
            };
            class _xx_hhlc_rifle_aks74_GL {
                weapon = "hlc_rifle_aks74_GL";
                count = 10;
            };
            class _xx_hhlc_rifle_aks74_MTK {
                weapon = "hlc_rifle_aks74_MTK";
                count = 10;
            };
            class _xx_hlc_rifle_aks74u {
                weapon = "hlc_rifle_aks74u";
                count = 10;
            };
            class _xx_hhlc_rifle_aks74u_MTK {
                weapon = "hlc_rifle_aks74u_MTK";
                count = 10;
            };
            class _xx_hlc_rifle_ak47 {
                weapon = "hlc_rifle_ak47";
                count = 10;
            };
            class _xx_hlc_rifle_akm {
                weapon = "hlc_rifle_akm";
                count = 10;
            };
            class _xx_hlc_rifle_akmgl {
                weapon = "hlc_rifle_akmgl";
                count = 10;
            };
            class _xx_hhlc_rifle_akm_MTK {
                weapon = "hlc_rifle_akm_MTK";
                count = 10;
            };
            class _xx_hhlc_rifle_rk62 {
                weapon = "hlc_rifle_RK62";
                count = 10;
            };
            class _xx_hhlc_rifle_slr107u {
                weapon = "hlc_rifle_slr107u";
                count = 10;
            };
            class _xx_hhlc_rifle_slr107u_MTK {
                weapon = "hlc_rifle_slr107u_MTK";
                count = 10;
            };
            class xxhlc_rifle_aku12 {
                weapon = "hlc_rifle_aku12";
                count = 10;
            };
            class xxhlc_rifle_rpk1212 {
                weapon = "hlc_rifle_rpk12";
                count = 10;
            };
            class _xx_hlc_rifle_rpk {
                weapon = "hlc_rifle_rpk";
                count = 10;
            };
            class _xx_hlc_rifle_rpk75 {
                weapon = "hlc_rifle_rpk74n";
                count = 10;
            };
            class _xx_hlc_rifle_ak12 {
                weapon = "hlc_rifle_ak12";
                count = 10;
            };
            class _xx_hlc_rifle_ak12gp {
                weapon = "hlc_rifle_ak12gl";
                count = 10;
            };
            class _xx_hhlc_rifle_aek {
                weapon = "hlc_rifle_aek971";
                count = 10;
            };
            class _xx_hhlc_rifle_aek971_mtk {
                weapon = "hlc_rifle_aek971_mtk";
                count = 10;
            };
            class _xx_hhlc_rifle_ak74_MTK {
                weapon = "hlc_rifle_ak74_MTK";
                count = 10;
            };
            class _xx_hhlc_rifle_ak74m {
                weapon = "hlc_rifle_ak74m";
                count = 10;
            };
            class _xx_hhlc_rifle_ak74m_gl {
                weapon = "hlc_rifle_ak74m_gl";
                count = 10;
            };
            class _xx_hhlc_rifle_ak74m_MTK {
                weapon = "hlc_rifle_ak74m_MTK";
                count = 10;
            };
            class _xx_hhlc_rifle_s12jk {
                weapon = "hlc_rifle_saiga12k";
                count = 10;
            };
        };
        class TransportItems {
            class _xx_optic_Holosight {
                name = "optic_Holosight";
                count = 10;
            };
            class _xx_optic_hamr {
                name = "optic_hamr";
                count = 10;
            };
            class _xx_optic_rco {
                name = "optic_rco";
                count = 10;
            };
            class _xx_HLC_Optic_PSO1 {
                name = "HLC_Optic_PSO1";
                count = 10;
            };
            class _xx_HLC_Optic_1p29 {
                name = "HLC_Optic_1p29";
                count = 10;
            };
            class _xx_hlc_muzzle_545SUP_AK {
                name = "hlc_muzzle_545SUP_AK";
                count = 10;
            };
            class _xx_hlc_muzzle_762SUP_AK {
                name = "hlc_muzzle_762SUP_AK";
                count = 10;
            };
            class _xx_hlc_optic_kobra {
                name = "hlc_optic_kobra";
                count = 10;
            };
            
            class _xx_hlc_optic_goshawk {
                name = "hlc_optic_goshawk";
                count = 10;
            };
        };
    };
    class Weapon_Base_F;
    class Weapon_hlc_rifle_ak74 : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-74";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak74";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak74mtk : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-74(MTK)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak74_MTK";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak74_dirty : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-74(Worn)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak74_dirty";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak74_dirt2y : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-74(Worn)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak74_dirty2";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aks74 : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AKS-74";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aks74";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aks74mtk : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AKS-74(MTK)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aks74_MTK";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aks74_GL : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AKS-74+GP30";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aks74_GL";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak12 : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-12";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak12";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak12GL : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-12+GP30";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak12GL";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_akU12 : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-12U";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aku12";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_RPK12 : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "RPK-12";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_RPK12";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_45Rnd_545x39_t_rpk";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aks74u : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AKS-74U";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aks74u";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aks74umtk : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AKS-74U(MTK)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aks74u_MTK";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aek971worn : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AEK-971(Worn)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aek971worn";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aek971 : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AEK-971";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aek971";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_aek971mtk : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AEK-971(MTK)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_aek971_mtk";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak47 : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-47";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak47";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_762x39_b_ak";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_akm : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AKM";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_akm";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_762x39_b_ak";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_akmMTK : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AKM(MTK)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_akm_MTK";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_762x39_b_ak";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_akmgl : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AKM+GP25";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_akmgl";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_762x39_b_ak";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_rpk : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "RPK";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_rpk";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_75Rnd_762x39_m_rpk";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_rpk74n : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "RPK-74";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_rpk74n";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_45Rnd_545x39_t_rpk";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_saiga12k : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "Saiga 12K";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_saiga12k";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_10rnd_12g_buck_S12";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_RK62 : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "RK.62";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_RK62";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_762x39_b_ak";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_SLR107U : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "SLR-107U";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_slr107u";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_762x39_b_ak";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_SLR107UMTK : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "SLR-107U(MTK)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_slr107u_MTK";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_762x39_b_ak";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak74m : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-74M";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak74m";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak74m_gl : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-74M(GL)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak74m_gl";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_ak74m_MTK : Weapon_Base_F {
        dlc = "Niarms_AK";
        scope = 2;
        scopeCurator = 2;
        displayName = "AK-74M(MTK)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_ak74m_MTK";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30Rnd_545x39_B_AK";
                count = 1;
            };
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_10rnd_12g_buck_S12 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_12G_Buck";
        count = 10;
        descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
        displayname = "Saiga Mag (Buckshot) 10rnd 12 Gauge";
        initspeed = 700;
        lastroundstracer = 1;
        picture = "\hlc_wp_ak\tex\ui\m_saiga12k_buck_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_saiga.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 12;
        displaynameshort = "00-Buck";
    };

    class hlc_10rnd_12g_slug_S12 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "B_12Gauge_Slug";
        count = 10;
        descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
        displayname = "Saiga Mag (Slug) 10rnd 12 Gauge";
        initspeed = 700;
        lastroundstracer = 1;
        picture = "\hlc_wp_ak\tex\ui\m_saiga12k_slug_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_saiga.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 12;
        displaynameshort = "Slug";
    };
    class hlc_30Rnd_545x39_B_AK : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Ball";
        count = 30;
        descriptionshort = "Caliber: 5.45x39mm 7N6<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "AK74 Mag (Ball) 30rnd 5.45mm";
        initSpeed = 880;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 12;
        displaynameshort = "7N6 Ball";
    };
    class hlc_30Rnd_545x39_S_AK : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_7u1";
        count = 30;
        descriptionshort = "Caliber: 5.45x39mm 7N6<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "AK74 Mag (Subsonic) 30rnd 5.45mm";
        initspeed = 300;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 12;
        displaynameshort = "7U1 Subsonic";
        model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
    };
    class hlc_30Rnd_545x39_t_ak : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        descriptionshort = "Caliber: 5.45x39mm 7T3<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "AK74 Mag (Tracer) 30rnd 5.45mm";
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 1;
        mass = 12;
        displaynameshort = "7T3 Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_ak74tracer_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
    };
    class hlc_45Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        count = 45;
        descriptionshort = "Caliber: 5.45x39mm 7T3/7N6<br />Rounds: 45<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "RPK74 Mag (Tracer) 45rnd 5.45mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
        mass = 14;
        displaynameshort = "Tracer/Ball";
        picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_rpk74.p3d";
    };
    class hlc_60Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        count = 60;
        descriptionshort = "Caliber: 5.45x39mm 7T3/7N6<br />Rounds: 45<br />Used in: RPK12,AK12,AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "RPK12 Mag (Tracer) 60rnd 5.45mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
        mass = 16;
        displaynameshort = "Tracer/Ball";
        picture = "\hlc_wp_ak\tex\ui\m_rpk12_mixed_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_rpk12.p3d";
    };
    class hlc_30Rnd_545x39_EP_ak : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_EP";
        descriptionshort = "Caliber: 5.45x39mm 7N24<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "AK74 Mag (Enhanced Peneterator) 30rnd 5.45mm";
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        mass = 12;
        displaynameshort = "7N24 EP";
        initSpeed = 890;
        picture = "\hlc_core\tex\ui\ammo\m_ak74ep_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
    };
    class hlc_30Rnd_762x39_b_ak : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = "Caliber: 7.62x39mm 57-N-231 (M43 Ball) AK47 Magazine <br />Rounds: 45<br />Used in: RPK";
        displayname = "AK47 Mag (Ball) 30rnd 7.62mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        mass = 13;
        displaynameshort = "Ball";
        picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
        initspeed = 715;
    };
    class hlc_30Rnd_762x39_t_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
        descriptionshort = "Caliber: 7.62x39mm 57-N-231P (Tracer) AK47 Magazine <br />Rounds: 45<br />Used in: RPK";
        displayname = "AK47 Mag (Tracer) 30rnd 7.62mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        mass = 13;
        displaynameshort = "Tracer";
        picture = "\hlc_wp_ak\tex\ui\m_ak47_t_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
        initspeed = 715;
    };
    class hlc_30rnd_762x39_s_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = "Caliber: 7.62x39mm 57-N-231 (M43 Ball) AK47 Magazine <br />Rounds: 45<br />Used in: RPK";
        displayname = "AK47 Mag (Subsonic) 30rnd 7.62mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        mass = 13;
        displaynameshort = "Subsonic";
        picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
        initspeed = 340;
    };
    class hlc_45Rnd_762x39_t_rpk : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 45;
        descriptionshort = "Caliber: 7.62x39mm 57-N-231P (Tracer) RPK Magazine <br />Rounds: 45<br />Used in: RPK";
        displayname = "RPK Mag (Tracer) 45rnd 7.62mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        mass = 16;
        displaynameshort = "Tracer";
        picture = "\hlc_wp_ak\tex\ui\m_rpk_tracer_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_Rpk.p3d";
        initspeed = 745;
    };
    class hlc_45Rnd_762x39_m_rpk : hlc_45Rnd_762x39_t_rpk {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 45;
        descriptionshort = "Caliber: 7.62x39mm 57-N-231 (Tracer) RPK Magazine <br />Rounds: 45<br />Used in: RPK";
        displayname = "RPK Mag (Mixed) 45rnd 7.62mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
        mass = 16;
        displaynameshort = "Tracer/Ball";
        picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_RPK.p3d";
        initspeed = 745;
    };
    class hlc_75Rnd_762x39_m_rpk : hlc_45Rnd_762x39_m_rpk {
        dlc = "Niarms_AK";
        author = "Toadie";
        count = 75;
        descriptionshort = "Caliber: 7.62x39mm 57-N-231 (Tracer) RPK Magazine <br />Rounds: 75<br />Used in: RPK";
        displayname = "RPK Drum (Mixed) 75rnd 7.62mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
        mass = 32;
        displaynameshort = "Tracer/Ball";
        picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
        model = "\hlc_wp_ak\mesh\magazine\magazine_RPKdrum.p3d";
        initspeed = 745;
    };
    class 1Rnd_HE_Grenade_shell;
    class hlc_VOG25_AK : 1Rnd_HE_Grenade_shell {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "G_40mm_HE";
        count = 1;
        descriptionshort = "Type: High Explosive Grenade Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "VOG25 HE Grenade Round";
        displaynameshort = "HE Grenade";
        initspeed = 76;
        mass = 4;
        namesound = "";
        picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
        reloadaction = "HLC_GestureReloadGP30";
        scope = 2;
        type = 16;
    };
    class hlc_GRD_White : 1Rnd_HE_Grenade_shell {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "G_40mm_Smoke";
        descriptionshort = "Type: Smoke Round - White<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (White)";
        displaynameshort = "White Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
        reloadaction = "HLC_GestureReloadGP30";
    };
    class hlc_GRD_Red : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeRed";
        descriptionshort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Red)";
        displaynameshort = "Red Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
    };
    class hlc_GRD_green : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeGreen";
        descriptionshort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Green)";
        displaynameshort = "Green Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
    };
    class hlc_GRD_yellow : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeYellow";
        descriptionshort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Yellow)";
        displaynameshort = "Yellow Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
    };
    class hlc_GRD_orange : hlc_grd_white {
        ammo = "G_40mm_SmokeOrange";
        descriptionshort = "Type: Smoke Round - Orange<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Orange)";
        displaynameshort = "Orange Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
    };
    class hlc_GRD_purple : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokePurple";
        descriptionshort = "Type: Smoke Round - Purple<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Purple)";
        displaynameshort = "Purple Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
    };
    class hlc_GRD_blue : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeBlue";
        descriptionshort = "Type: Smoke Round - Blue<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = "GRD Round (Blue)";
        displaynameshort = "Blue Smoke";
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
    };
};

class CfgWeapons {

//optics
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

    class InventoryOpticsItem_Base_F;
    class optic_dms;

    class HLC_Optic_PSO1 : optic_dms {
        dlc = "Niarms_AK";
        author = "Bohemia Interactive, Toadie";
        descriptionshort = "PSO1 Optical Sniper Sight<br />Magnification: 4x";
        displayname = "PSO-1M";
        model = "\hlc_wp_ak\mesh\pso1\pso1.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_pso1_x_ca";
        ACE_ScopeAdjust_Vertical[] = { 0, 0 };
        ACE_ScopeAdjust_Horizontal[] = { -10, 10 };
        ACE_ScopeAdjust_Increment = 0.5;
        class ItemInfo: InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 7;
            modelOptics = "\hlc_wp_ak\mesh\pso1\pso_optics";
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.0623;
                    opticsZoomMax = 0.0623;
                    opticsZoomInit = 0.0623;
                    discreteDistance[] = { 100, 200, 300, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000 };
                    discreteDistanceInitIndex = 3;
                    distanceZoomMin=400;
                    distanceZoomMax=400;
                    discretefov[] = {0.0623};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                     opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
                class Snip_ILLUM {
                    opticsID = 2;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.0623;
                    opticsZoomMax = 0.0623;
                    opticsZoomInit = 0.0623;
                    discreteDistance[] = {400};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=400;
                    distanceZoomMax=400;
                    discretefov[] = {0.0623};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics_illum"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                     opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
            };
        };
    };

    class HLC_Optic_1p29 : HLC_Optic_PSO1 {
        dlc = "Niarms_AK";
        author = "Bionic, Toadie";
        descriptionshort = "1P29 Combat Optic<br />Magnification: 4x";
        displayname = "1P29";
        model = "\hlc_wp_ak\mesh\1p29\1p29.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_1p29_ca";
        ACE_ScopeAdjust_Vertical[] = {};
        ACE_ScopeAdjust_Horizontal[] = {};
        ACE_ScopeAdjust_Increment = 0;
        class ItemInfo: InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 7;
            modelOptics = "\hlc_wp_ak\mesh\1p29\1p29_optics";
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    discreteDistance[] = {300};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=400;
                    distanceZoomMax=400;
                    discretefov[] = {0.0623};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = {"\hlc_wp_ak\mesh\1p29\1p29_optics"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                     opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
            };
        };
    };

    class optic_ACO_grn;
    class hlc_optic_kobra : optic_ACO_grn {
        dlc = "Niarms_AK";
        author = "Tigg, Toadie";
        descriptionshort = "Open Face Collimator Optic";
        displayname = "Kobra Sight";
        model = "\hlc_wp_ak\mesh\Kobra\kobra.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_kobra_ca";
        scope = 2;
        weaponinfotype = "RscWeaponZeroing";
    };

    class hlc_optic_goshawk : optic_ACO_grn {
        dlc = "Niarms_AK";
        author = "Bohemia Interactive, Toadie";
        scope = public;
        displayName = "Goshawk";
        descriptionshort = "Goshawk Adaptable Thermal Optic<br />Magnification: 3.6x";
        picture = "\hlc_wp_ak\tex\ui\gear_goshawk_ca";
        model = "\hlc_wp_ak\mesh\goshawk\goshawk.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 10;
            modelOptics = "\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d";
            class OpticsModes {
                class Goshawk_TI {
                    opticsID = 1;
                    useModelOptics = true;
                    opticsZoomMin = 0.06944444;// 3.6 zoom
                    opticsZoomMax = 0.06944444;
                    opticsZoomInit = 0.06944444;
                    distanceZoomMin = 300;
                    distanceZoomMax = 2200;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200 };
                    discreteDistanceInitIndex = 1;
                    modelOptics[] = { "\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d" };
                    memoryPointCamera = "eye2";
                    visionmode[] = { "Ti", "Normal" };
                    thermalMode[] = { 0, 1 };
                    opticsFlare = true;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "eye";
                };
            };
        };
    };

//muzzles

    class muzzle_snds_H;
    class hlc_muzzle_545SUP_AK : muzzle_snds_H {
        dlc = "Niarms_AK";
        author = "Bohemia Interactive, Toadie";
        displayName = "PBS4 AK Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "\hlc_wp_ak\mesh\PBS4\pbs4";
    };
    class muzzle_snds_M;
    class hlc_muzzle_762SUP_AK : muzzle_snds_M {
        dlc = "Niarms_AK";
            author = "Jason9Jason, Toadie";
            displayName = "PBS1 AK Suppressor";
            picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
            model = "\hlc_wp_ak\mesh\PBS1\pbs1";
    };

//weapons

    class UGL_F;
    class Rifle;
    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_ak_base : Rifle_Base_F {
        inertia=0.5;
        magazineReloadSwitchPhase = 0.5;
        author = "Toadie";
        recoil = "recoil_mk20";
    
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = private;
        aidispersioncoefx = 3;
        aidispersioncoefy = 5;
        magazines[] = {
            "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk"\
            , "30Rnd_545x39_mag_f", "30Rnd_545x39_mag_green_f", "30Rnd_545x39_mag_tracer_f", "30Rnd_545x39_mag_tracer_green_f"//apex mags
        };
        class Library {
            libTextDesc = "Izhmash AK74";
        };
        reloadAction = "HLC_GestureReloadAK";
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass =33;
            class MuzzleSlot : asdg_MuzzleSlot_545R {};
            class CowsSlot {};
            class PointerSlot {};
        };
        opticszoommin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";

        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        dexterity = 1.8;
        bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.398107, 1, 15};
        bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.281838, 1, 15};
        bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.281838, 1, 15};
        bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.281838, 1, 15};
        bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.398107, 1, 15};
        bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.398107, 1, 15};
        bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.398107, 1, 15};
        bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.281838, 1, 15};
        bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.281838, 1, 15};
        bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.281838, 1, 15};
        bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.281838, 1, 15};
        bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.281838, 1, 15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
        modes[] = {"FullAuto","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        class Single : Mode_SemiAuto {
            begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2", 1, 1, 900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.000654498;
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
        };
        class FullAuto : Mode_FullAuto {
            begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            begin2[] = {"\hlc_wp_ak\snd\ak74m_fire2", 1, 1, 900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            dispersion = 0.000654498;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
            aiRateOfFire = 1e-006;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
        }; 
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak74\ak74m_reload", 0.8, 1, 20 };
    };

    class hlc_rifle_ak74 : hlc_ak_base {
        dlc = "Niarms_AK";
        AB_barrelTwist=7.87;
        AB_barrelLength=16.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "MrRifleman, Toadie";
        scope = public;
        magazines[] = {"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk"
            , "30Rnd_545x39_mag_f", "30Rnd_545x39_mag_green_f", "30Rnd_545x39_mag_tracer_f", "30Rnd_545x39_mag_tracer_green_f" //apex mags
        };
        displayName = "Izhmash AK74";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        bg_bipod = 0; 
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        recoil = "recoil_mk20";
        modes[] = {"FullAuto","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        handAnim[] = {"OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm"};
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        class Single : Mode_SemiAuto {
            airateoffire = "1e-006";
            begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            begin2[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000654498;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            /// various other fire mode parameters
        };
        class FullAuto : Mode_FullAuto {
            airateoffire = "1e-006";
            begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            begin2[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000654498;
            minRange = 2;
            minRangeProbab = 0.01;
            midRange = 200;
            midRangeProbab = 0.01;
            maxRange = 400;
            maxRangeProbab = 0.01;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61.4;
            class CowsSlot : asdg_OpticSideMount {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak74\ak74m_reload",0.8,1,30};
    };
    class hlc_rifle_ak74_dirty : hlc_rifle_ak74 {
        author = "MrRifleman, Millenia, Toadie";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74d1_ca";
        displayName = "Izhmash AK74(Worn)";
    };
    class hlc_rifle_ak74_dirty2 : hlc_rifle_ak74 {
        author = "MrRifleman, Bull5hit, Toadie";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty2.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74d2_ca";
        displayName = "Izhmash AK74(Worn)";
    };
    class hlc_rifle_aks74 : hlc_rifle_ak74 {
        dlc = "Niarms_AK";
        inertia=0.45;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "MrRifleman, Toadie";
        reloadAction = "HLC_GestureReloadAK";
        scope =public;
        model = "\hlc_wp_ak\mesh\aks74\aks74.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Izhmash AKS74";
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        bg_bipod = 0; 
        recoil = "recoil_mk20";
        modes[] = {"FullAuto","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        class Single : Mode_SemiAuto {
            airateoffire = "1e-006";
            begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            begin2[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000654498;
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            /// various other fire mode parameters
        };
        class FullAuto : Mode_FullAuto {
            airateoffire = "1e-006";
            begin1[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            begin2[] = {"\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000654498;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        }; 
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass=59;
        };
    };
    class hlc_rifle_ak12 : hlc_ak_base {
        dlc = "Niarms_AK";
        inertia = 0.5;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "Maibatsu, Toadie";
        scope = public;
        displayName = "Izhmash AK12";
        model = "\hlc_wp_ak\mesh\ak12\ak12.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak12_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        recoil = "recoil_mk20";
        bg_bipod = 0;
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak12\ak12_reload2",1, 1, 20 };
        modes[] = { "Burst", "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
        reloadAction = "HLC_GestureReloadAK12New";
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.1;
            begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000654498;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak12_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak12_silencerShot_SoundSet", "Nia_ak12_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_sil_indoor", 1.0, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.1;

            begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.00062541;
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak12_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak12_silencerShot_SoundSet", "Nia_ak12_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_sil_indoor", 1.0, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Burst : Mode_Burst {
            burst = 2;
            reloadTime = 0.06;
            begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            dispersion = 0.00062541;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak12_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak12_silencerShot_SoundSet", "Nia_ak12_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_sil_indoor", 1.0, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Izhmash AK12 5.45mm";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
        };
    };
    class hlc_rifle_ak12GL : hlc_rifle_ak12 {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        inertia = 0.5;
        author = "Maibatsu, Toadie";
        scope = public;
        displayName = "Izhmash AK12(GL)";
        model = "\hlc_wp_ak\mesh\ak12\ak12GP.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak12GL_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discretedistanceinitindex = 2;
        bg_bipod = 0;
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak12\ak12_reload2", 1, 1, 20 };
        modes[] = { "Burst", "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        handanim[] = { "OFP2_ManSkeleton", "hlc_core\animation\gesture\handpose_gp25.rtm" };
        reloadAction = "HLC_GestureReloadAK12New";
        muzzles[] = { "this", "hlc_GP30_AK12" };
        class hlc_GP30_AK12 : UGL_F {
            cameradir = "GL_Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "GL_eye_50m", "GL_eye_100m", "GL_eye_150m", "GL_eye_200m", "GL_eye_250m", "GL_eye_300m", "GL_eye_350m", "GL_eye_400m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "GP30";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            drysound[] = { "A3\sounds_f\Weapons\other\sfx5", 1, 1, 400 };
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { "hlc_VOG25_AK", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Green", "hlc_GRD_Yellow", "hlc_GRD_Purple", "hlc_GRD_Blue", "hlc_GRD_Orange" };
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticszoommin = 0.25;
            reloadmagazinesound[] = { "\hlc_wp_ak\snd\gp30_reload", 1, 1, 20 };
            reloadtime = 0.1;
            sound[] = { "\hlc_wp_ak\snd\gp30_fire", 1.0, 1, 400 };
        };
        weaponinfotype = "RscWeaponZeroing";
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.1;
            begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000654498;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
				soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak12_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
				soundSetShot[] = { "Nia_ak12_silencerShot_SoundSet", "Nia_ak12_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_sil_indoor", 1.0, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.1;

            begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.00062541;
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
				soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak12_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
				soundSetShot[] = { "Nia_ak12_silencerShot_SoundSet", "Nia_ak12_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_sil_indoor", 1.0, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Burst : Mode_Burst {
            burst = 2;
            reloadTime = 0.06;
            begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            dispersion = 0.00062541;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
				soundSetShot[] = { "Nia_ak12_Shot_SoundSet", "Nia_ak12_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak12_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak12_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_sil_indoor", 1.0, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
        };
        class Library {
            libTextDesc = "Izhmash AK12 5.45mm";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
        };
    };
    class hlc_rifle_aku12 : hlc_rifle_ak12 {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        AB_barrelTwist=6.3;
        AB_barrelLength=8.3;
        ACE_barrelTwist = 160.02;
        ACE_barrelLength = 210.82;
        inertia=0.4;
        author = "Maibatsu, Toadie";
        scope = public;
        initspeed = -0.816667;
        displayName = "Izhmash AK12U";
        model = "\hlc_wp_ak\mesh\ak12\akU12.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak12u_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discretedistanceinitindex = 2;
        bg_bipod = 0; 
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak12\ak12_reload2", 1, 1, 20 };
        modes[] = {"Burst","Single","FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        reloadAction = "HLC_GestureReloadAK12New";
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.1;
            begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.000972294;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.1;
            
            begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.000972294;
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Burst : Mode_Burst {
            burst = 2;
            reloadTime = 0.06;
            begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.000972294;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_ak\snd\ak74u_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
            
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Izhmash AK12 5.45mm";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61;
        };
    };
    class hlc_rifle_RPK12 : hlc_rifle_ak12 {
        dlc = "Niarms_AK";
        AB_barrelLength=23.2;
        ACE_barrelLength = 589.28;
        agm_bipod=1;
        cse_bipod = 1;
        bg_bipod = 1; 
        inertia=0.66;
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of folding the bipod
        magazines[] = {
            "hlc_60Rnd_545x39_t_rpk", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_30Rnd_545x39_S_AK"
            , "30Rnd_545x39_mag_f", "30Rnd_545x39_mag_green_f", "30Rnd_545x39_mag_tracer_f", "30Rnd_545x39_mag_tracer_green_f"//apex mags
        };
        author = "Maibatsu, Toadie";
        scope = public;
        displayName = "Izhmash RPK12";
        model = "\hlc_wp_ak\mesh\ak12\rpk12.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_rpk12_ca";
        cursor = "mg";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
        discretedistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discretedistanceinitindex = 2;
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak12\rpk12_reload", 1, 1, 20 };
        modes[] = {"Burst","Single","FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
        reloadAction = "HLC_GestureReloadRPK12";
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.1;
            begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
               weaponSoundEffect = "DefaultRifle";

               closure1[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
               closure2[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
               soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\rpk74_silenced", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\rpk74_silenced", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single: Mode_SemiAuto {
            reloadTime = 0.1;
        
            begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

             class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\rpk74_silenced", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\rpk74_silenced", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Burst : Mode_Burst {
            burst = 2;
            reloadTime = 0.06;
            begin1[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\ak12_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.000972294;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak12_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_ak\snd\rpk74m_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\rpk74_silenced", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\rpk74_silenced", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 200;
        };

        class medium : fullauto_medium {
            showToPlayer = 0;
            airateoffire = 0.2;
            airateoffiredistance = 600;
            burst = 3;
            maxrange = 600;
            maxrangeprobab = 0.1;
            midrange = 400;
            midrangeprobab = 0.6;
            minrange = 200;
            minrangeprobab = 0.05;
        };
        class close : FullAuto {
            showToPlayer = 0;
            airateoffire = 0.1;
            airateoffiredistance = 50;
            burst = 10;
            maxrange = 50;
            maxrangeprobab = 0.04;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.05;
        };
        class Library {
            libTextDesc = "Izhmash AK12 5.45mm";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 98;
        };
    };
    class hlc_rifle_aks74u : hlc_ak_base {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        magazines[] = {
            "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk"
            , "30Rnd_545x39_mag_f", "30Rnd_545x39_mag_green_f", "30Rnd_545x39_mag_tracer_f", "30Rnd_545x39_mag_tracer_green_f" //APEX Mags
        };
        AB_barrelTwist=6.3;
        AB_barrelLength=8.3;
        ACE_barrelTwist = 160.02;
        ACE_barrelLength = 210.82;
        author = "Millenia, Toadie";
        scope = public;
        displayName = "Izhmash AKS74U";
        initspeed = -0.816667;
        model = "\hlc_wp_ak\mesh\millaks74u\aks74u.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74u_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        discretedistance[] = {350,500};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        modes[] = {"FullAuto","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};

        class FullAuto: Mode_FullAuto {
            reloadTime = 0.086;
            begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.000972294;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single: Mode_SemiAuto {
            reloadTime = 0.086;
            begin1[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\ak74u_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.000972294;
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak74_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Izhmash AKS74U";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 54;
            class CowsSlot : asdg_OpticSideMount {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
    };
    class hlc_rifle_ak47 : hlc_ak_base {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        scope = public;
        AB_barrelTwist=9.45;
        AB_barrelLength=16.3;
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 414.02;
        author = "Twinke Masta, Marcius, Toadie";
        magazines[] = { "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak", 
            "30rnd_762x39_mag_F", "30rnd_762x39_mag_green_F", "30rnd_762x39_mag_tracer_F", "30Rnd_762x39_mag_tracer_green_f"//APEX mags
        };
        displayName = "Izhmash AK47";
        model = "\hlc_wp_ak\mesh\ak47\ak47.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak47_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        recoil = "recoil_mx";
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        bg_bipod = 0; 
        descriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
        modes[] = {"FullAuto","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak47\ak_reload_longer",0.9,1,30};
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.097;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_SoundSet", "Nia_ak47_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak47_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak47_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.097;
            recoil = "recoil_single_mx";
            recoilprone = "recoil_single_prone_mx";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_SoundSet", "Nia_ak47_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak47_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak47_sil", 1.35, 1,200};
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Izhmash AK47 (Type 1)";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 74.5;
            class MuzzleSlot: asdg_MuzzleSlot_762R {};
            class CowsSlot : asdg_OpticSideMount {};
        };
    };
    class hlc_rifle_akm : hlc_rifle_ak47 {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        AB_barrelTwist=7.87;
        AB_barrelLength=16.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
        scope = public;
        author = "MrRifleman, Bull5hit, Toadie";
        model = "\hlc_wp_ak\mesh\akm\akm.p3d";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		picture = "\hlc_wp_ak\tex\ui\gear_akm_x_ca";
        displayName = "Izhmash AKM";
        descriptionShort = "Assault rifle,Grenade Launcher<br/>Caliber: 7.62mm";
        modes[] = {"FullAuto","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.097;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_SoundSet", "Nia_ak47_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak47_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak47_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.097;
            recoil = "recoil_single_mx";
            recoilprone = "recoil_single_prone_mx";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_SoundSet", "Nia_ak47_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\ak47_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\ak47_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 62;
        };
    };
    class hlc_rifle_akmgl : hlc_rifle_akm {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        inertia=0.55;
        author = "MrRifleman, Bull5hit, Bohemia Interactive, Toadie";
        model = "\hlc_wp_ak\mesh\akmgl\akm.p3d";
        handanim[] = {"OFP2_ManSkeleton", "hlc_core\animation\gesture\handpose_gp.rtm"};
        displayName = "Izhmash AKM (GL)";
        modes[] = {"FullAuto","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        muzzles[] = {"this", "hlc_GP25_AKM"};
        class hlc_GP25_AKM : UGL_F {
            cameraDir = "OP_look";
            //0.125
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "OP_eye", "OP_eye1", "OP_eye2", "OP_eye3", "OP_eye4", "OP_eye5", "OP_eye6", "OP_eye7" };
            discreteDistanceInitIndex = 2;
            displayname = "GP25";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            drysound[] = {"A3\sounds_f\Weapons\other\sfx5", 1, 1, 400};
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { "hlc_VOG25_AK", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Green", "hlc_GRD_Yellow", "hlc_GRD_Purple", "hlc_GRD_Blue", "hlc_GRD_Orange" };
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticszoommin = 0.25;
            reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload", 1, 1, 10};
            reloadtime = 0.1;
            sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
            weaponinfotype = "RscWeaponZeroing";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 92;
        };
    };
    class hlc_rifle_rpk : hlc_ak_base {
        dlc = "Niarms_AK";
        inertia=0.6;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Booly, Toadie";
        reloadAction = "HLC_GestureReloadRPK";
        cursor = "mg";
        scope =public;
        aidispersioncoefx = 10;
        aidispersioncoefy = 12;
        AB_barrelTwist=9.45;
        AB_barrelLength=23.2;
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 589.28;
        agm_bipod=1;
        cse_bipod = 1;
        bg_bipod = 1; 
        magazines[] = { "hlc_75Rnd_762x39_m_rpk", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_30rnd_762x39_s_ak",
            "30rnd_762x39_mag_F", "30rnd_762x39_mag_green_F", "30rnd_762x39_mag_tracer_F", "30Rnd_762x39_mag_tracer_green_f" //APEX mags
        };
        model = "\hlc_wp_ak\mesh\rpk\rpk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_rpk_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
        displayName = "Izhmash RPK";
        discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = {  "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        descriptionShort = "Light Support Weapon<br/>Caliber: 7.62mm";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\rpk_reload",0.9,1,30};
        modes[] = {"FullAuto","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2","medium","close"};
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.1;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_SoundSet", "Nia_rpk_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\rpk_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\rpk_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\rpk_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\rpk_sil", 1.7782794, 1,200};
                begin2[]={"\hlc_wp_ak\snd\rpk_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.1;
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_single_mx";
            recoilprone = "recoil_single_prone_mx";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_SoundSet", "Nia_rpk_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\rpk_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\rpk_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\rpk_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\rpk_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\rpk_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 200;
        };

        class medium : fullauto_medium {
            showToPlayer = 0;
            airateoffire = 0.2;
            airateoffiredistance = 600;
            burst = 3;
            maxrange = 600;
            maxrangeprobab = 0.1;
            midrange = 400;
            midrangeprobab = 0.6;
            minrange = 200;
            minrangeprobab = 0.05;
        };
        class close : FullAuto {
            showToPlayer = 0;
            airateoffire = 0.1;
            airateoffiredistance = 50;
            burst = 10;
            maxrange = 50;
            maxrangeprobab = 0.04;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.05;
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass =96;
            class CowsSlot : asdg_OpticSideMount {};
            class MuzzleSlot: asdg_MuzzleSlot_762R {};
        };
    };
    class hlc_rifle_rpk74n : hlc_ak_base {
        dlc = "Niarms_AK";
        inertia = 0.6;
        recoil = "recoil_Mk20";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Booly, Toadie";
        reloadAction = "HLC_GestureReloadRPK";
        scope = public;
        aidispersioncoefx = 10;
        aidispersioncoefy = 12;
        AB_barrelTwist = 9.45;
        AB_barrelLength = 23.2;
        ACE_barrelTwist = 240.03;
        ACE_barrelLength = 589.28;
        agm_bipod = 1;
        cse_bipod = 1;
        bg_bipod = 1;
        displayName = "Izhmash RPK74";
        discreteDistance[] = {  100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = {  "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rpk74\rpk74_reload", 0.9, 1, 30 };
        magazines[] = {        "hlc_45Rnd_545x39_t_rpk", "hlc_60Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_30Rnd_545x39_S_AK" 
            , "30Rnd_545x39_mag_f", "30Rnd_545x39_mag_green_f", "30Rnd_545x39_mag_tracer_f", "30Rnd_545x39_mag_tracer_green_f" //APEX Mags
        };
        model = "\hlc_wp_ak\mesh\rpk\rpk74.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_rpk74_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
        descriptionShort = "Light Support Weapon<br/>Caliber: 5.45mm";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2", "medium", "close" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 96;
            class CowsSlot : asdg_OpticSideMount {};
        };
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.0923;
            begin1[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak12_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };
            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\rpk74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\rpk74m_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\rpk74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\rpk74_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\rpk74_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.0923;

            begin1[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_Shot_SoundSet", "Nia_rpk74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\rpk74m_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\rpk74m_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\rpk74m_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk74_silencerShot_SoundSet", "Nia_rpk74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\rpk74_silenced", 1, 1, 200};
                begin2[] = { "\hlc_wp_ak\snd\rpk74_silenced", 1, 1, 200};
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 200;
        };

        class medium : fullauto_medium {
            showToPlayer = 0;
            airateoffire = 0.2;
            airateoffiredistance = 600;
            burst = 3;
            maxrange = 600;
            maxrangeprobab = 0.1;
            midrange = 400;
            midrangeprobab = 0.6;
            minrange = 200;
            minrangeprobab = 0.05;
        };
        class close : FullAuto {
            showToPlayer = 0;
            airateoffire = 0.1;
            airateoffiredistance = 50;
            burst = 10;
            maxrange = 50;
            maxrangeprobab = 0.04;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.05;
        };
    };
    class hlc_rifle_aks74_GL : hlc_rifle_aks74 {
        dlc = "Niarms_AK";
        inertia=0.55;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "MrRifleman, Tigg, Toadie";
        model = "\hlc_wp_ak\mesh\aks74gl\aks74gl.p3d";
        handanim[] = {"OFP2_ManSkeleton", "hlc_core\animation\gesture\handpose_gp25.rtm"};
        displayName = "Izhmash AKS74(GL)";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74gl_ca";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        muzzles[] = {"this", "hlc_GP30_AKS74"};
        bg_bipod = 0; 
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass=85.4;
        };
        class hlc_GP30_AKS74 : UGL_F {
            cameradir = "GL_Look";
            discreteDistance[] = {50,100,150,200,250,300,350,400};
            discreteDistanceCameraPoint[] = { "GL_eye_50m", "GL_eye_100m", "GL_eye_150m", "GL_eye_200m", "GL_eye_250m", "GL_eye_300m", "GL_eye_350m", "GL_eye_400m"  }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "GP30";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            drysound[] = {"A3\sounds_f\Weapons\other\sfx5", 1, 1, 400};
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { "hlc_VOG25_AK", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Green", "hlc_GRD_Yellow", "hlc_GRD_Purple", "hlc_GRD_Blue", "hlc_GRD_Orange" };
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticszoommin = 0.25;
            reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload", 1.1, 1, 20};
            reloadtime = 0.1;
            sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
            weaponinfotype = "RscWeaponZeroing";
        };
    };
    class hlc_rifle_aek971 : hlc_rifle_ak74 {
        dlc = "Niarms_AK";
        author = "Arby26, Millenia, Toadie";
        scope = public;
        ACE_barrelTwist = 241.3;
        ACE_barrelLength = 431.8;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        displayName = "ZID AEK971S";
        model = "\hlc_wp_ak\mesh\aek971\aek971clean.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aek_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        reloadMagazineSound[] = { "hlc_wp_ak\snd\soundshaders\aek\aek_reload", 1, 1, 20 };
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye1", "eye", "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        modes[] = {"FullAuto","Burst","Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.0681;
            begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.0005563233;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                 begin1[]={"\hlc_wp_ak\snd\aek_sil", 1.35, 1,200};
                 begin2[]={"\hlc_wp_ak\snd\aek_sil", 1.35, 1,200};
                 soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100};
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Burst : Mode_Burst {
            reloadTime = 0.0681;
            begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak12_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.0005563233;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            burst = 3;
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.77827941, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.77827941, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\aek_fire", 1.77827941, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\aek_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\aek_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.0681;
            begin1[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\aek_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.0005563233;
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak2_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\aek_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\aek_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "ZID AEK971S";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
    };
    class hlc_rifle_aek971worn : hlc_rifle_aek971 {
        displayName = "ZID AEK971S(Worn)";
        model = "\hlc_wp_ak\mesh\aek971\aek971.p3d";
    };
    class hlc_rifle_saiga12k : hlc_ak_base {
        dlc = "Niarms_AK";
        inertia=0.55;
        recoil = "recoil_m320";
        ACE_barrelTwist = 0.0;
        ACE_twistDirection = 0;
        ACE_barrelLength = 429.26;
        author = "Bohemia Interactive, Toadie";
        reloadAction = "HLC_GestureReloadRPK";
        scope =public;
        magazines[] = {"hlc_10rnd_12g_buck_S12","hlc_10rnd_12g_slug_S12"};
        model = "\hlc_wp_ak\mesh\saiga\saiga12k.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_saiga_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Izhmash Saiga12K";
        discretedistance[] = {100,200,300,400};
        discretedistanceinitindex = 0;
        descriptionShort = "Shotgun<br/>Caliber:12 Gauge";
        bg_bipod = 1; 
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\saiga\saiga_reload",0.9,1,30};
        modes[] = {"Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        class Single: Mode_SemiAuto {
            reloadTime = 0.1;
            begin1[] = {"\hlc_wp_ak\snd\saiga_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_ak\snd\saiga_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            closure2[] = {"\hlc_wp_ak\snd\ak74_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.001666789;
            recoil = "recoil_single_gm6";
            recoilprone = "recoil_single_prone_gm6";
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                closure2[]={"\hlc_wp_ak\snd\ak74_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_saiga_Shot_SoundSet", "Nia_saiga_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\saiga_fire", 1.77827941, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\saiga_fire", 1.77827941, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\saiga_fire", 1.77827941, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\saiga_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_ak\snd\aek_sil", 1.35, 1,200};
                begin2[]={"\hlc_wp_ak\snd\aek_sil", 1.35, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass =70;
            class MuzzleSlot {};
        };
    };



//V0.9
//NEW SHIT
//*HORNS*
    class hlc_rifle_RK62 : hlc_ak_base {
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        scope = public;
        dlc = "Niarms_AK";
        author = "Nix";
        magazines[] = { "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak", "30rnd_762x39_mag_F", 
            "30rnd_762x39_mag_green_F", "30rnd_762x39_mag_tracer_F", "30Rnd_762x39_mag_tracer_green_f" //APEX mags
        };
        model = "hlc_wp_ak\mesh\rk62\rk62.p3d";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
        picture = "\hlc_wp_ak\tex\ui\gear_rk62_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Valmet Rk.62";
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1.5, 1, 10 };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\rk62\rk62_reload", 1, 1, 20 };
        reloadAction = "HLC_GestureReloadAK";
        recoil = "recoil_mx";
        opticszoominit = 0.75;
        opticszoommax = 1.1;    
        opticszoommin = 0.25;
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 74.5;
            class MuzzleSlot : asdg_MuzzleSlot_762R {};
        };
        DescriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
        discreteDistance[] = { 150, 100, 200, 300, 400, 500, 600};
        discreteDistanceCameraPoint[] = { "eye_150", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600" };
        cameraDir = "eye_look";
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };
			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
				closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};
            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rk62_Shot_SoundSet", "Nia_rk62_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\rk62_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\rk62_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\rk62_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk_indoor", 1.99, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\ak47_sil", 1, 1, 200 };
				begin2[] = { "\hlc_wp_ak\snd\ak47_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
            };

            reloadTime = 0.085;
            recoil = "recoil_single_mx";
            recoilprone = "recoil_single_prone_mx";
            dispersion = 0.000378155;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto : Mode_FullAuto {

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_rk62_Shot_SoundSet", "Nia_rk62_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\rk62_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\rk62_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\rk62_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk_indoor", 1.99, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_rpk_Shot_Silenced_SoundSet", "Nia_rpk_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\ak47_sil", 1, 1, 200 };
				begin2[] = { "\hlc_wp_ak\snd\ak47_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
            };

            reloadTime = 0.085;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            dispersion = 0.00049451;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
    };
    class hlc_rifle_slr107u : hlc_ak_base {
        dlc = "Niarms_AK";
        AB_barrelTwist = 7.87;
        AB_barrelLength = 8.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 210.82;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "Toadie";
        scope = public;
        initspeed = -0.907539;
        magazines[] = { "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak", "30rnd_762x39_mag_F", 
            "30rnd_762x39_mag_green_F", "30rnd_762x39_mag_tracer_F", "30Rnd_762x39_mag_tracer_green_f" //APEX mags
        };
        displayName = "Arsenal Inc. SLR107U";
        model = "\hlc_wp_ak\mesh\slr107u\slr.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_slr107u_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        bg_bipod = 0;
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        recoil = "recoil_mx";
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        discretedistance[] = { 350, 500 };
        discretedistanceinitindex = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
		class Single : Mode_SemiAuto {
			airateoffire = "1e-006";
			begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
			begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
			closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
			soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.097;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.000972294;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.3, 1, 10 };
				closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.3, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
				soundSetShot[] = { "Nia_SLR107U_Shot_SoundSet", "Nia_SLR107U_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
				begin2[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
				begin3[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
				class SoundTails {
					class TailForest {
						sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.3, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
			};

			class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
				soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
				//NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\ak47_sil", 1, 1, 200 };
				begin2[] = { "\hlc_wp_ak\snd\ak47_sil", 1, 1, 200 };
				soundBegin[] = { begin1, 0.5, begin2, 0.5 };
				class SoundTails {
					class TailInterior {
						sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
			};
			/// various other fire mode parameters
		};
		class FullAuto : Mode_FullAuto {
			airateoffire = "1e-006";
			begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
			begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
			closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
			soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.097;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.000972294;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.3, 1, 10 };
				closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.3, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
				soundSetShot[] = { "Nia_SLR107U_Shot_SoundSet", "Nia_SLR107U_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
				begin2[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
				begin3[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
				class SoundTails {
					class TailForest {
						sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior {
						sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.2, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
			};

			class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
				soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
				//NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\ak47_sil", 1.35, 1, 200 };
				begin2[] = { "\hlc_wp_ak\snd\ak47_sil", 1.35, 1, 200 };
				soundBegin[] = { begin1, 0.5, begin2, 0.5 };
				class SoundTails {
					class TailInterior {
						sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
			};
		};
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 56;
            class CowsSlot : asdg_OpticSideMount {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_762R {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\slr107u\slr107U_reload_empty", 0.74, 1, 20 };
    };
    class hlc_rifle_slr107u_MTK : hlc_ak_base {
        dlc = "Niarms_AK";
        AB_barrelTwist = 7.87;
        AB_barrelLength = 8.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 210.82;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "Toadie,RedRogueXIII";
        scope = public;
        initspeed = -0.907539;
        magazines[] = { "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_t_ak", "hlc_45Rnd_762x39_m_rpk", "HLC_45rnd_762x39_T_RPK", "hlc_30rnd_762x39_s_ak", 
            "30rnd_762x39_mag_F", "30rnd_762x39_mag_green_F", "30rnd_762x39_mag_tracer_F", "30Rnd_762x39_mag_tracer_green_f" //APEX mags
        };
        displayName = "Arsenal Inc. SLR107U(MTK)";
        model = "\hlc_wp_ak\mesh\slr107u\slr_MTK.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_slr107umtk_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        bg_bipod = 0;
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        recoil = "recoil_mx";
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        discretedistance[] = { 350, 500 };
        discretedistanceinitindex = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        class Single : Mode_SemiAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.097;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000972294;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.3, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.3, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_SLR107U_Shot_SoundSet", "Nia_SLR107U_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.3, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            /// various other fire mode parameters
        };
        class FullAuto : Mode_FullAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.097;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000972294;
            minRange = 2;
            minRangeProbab = 0.01;
            midRange = 200;
            midRangeProbab = 0.01;
            maxRange = 400;
            maxRangeProbab = 0.01;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.3, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.3, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_SLR107U_Shot_SoundSet", "Nia_SLR107U_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\slr107U_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.2, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 56;
            class CowsSlot : asdg_OpticRail1913_short {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_762R {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\slr107u\slr107U_reload_empty", 0.8, 1, 30 };
    };
    class hlc_rifle_ak74_MTK : hlc_ak_base {
        dlc = "Niarms_AK";
        AB_barrelTwist = 7.87;
        AB_barrelLength = 16.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "MrRifleman, Toadie";
        scope = public;
        magazines[] = { "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk", "hlc_60Rnd_545x39_t_rpk",
            "30Rnd_545x39_mag_f", "30Rnd_545x39_mag_green_f","30Rnd_545x39_mag_tracer_f", "30Rnd_545x39_mag_tracer_green_f"// APEX mags
        };
        displayName = "Izhmash AK74(MTK)";
        model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74mtk_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        bg_bipod = 0;
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        class Single : Mode_SemiAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000654498;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            /// various other fire mode parameters
        };
        class FullAuto : Mode_FullAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000654498;
            minRange = 2;
            minRangeProbab = 0.01;
            midRange = 200;
            midRangeProbab = 0.01;
            maxRange = 400;
            maxRangeProbab = 0.01;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61.4;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak74\ak74m_reload", 0.8, 1, 20 };
    };
    class hlc_rifle_ak74m : hlc_rifle_ak74 {
        dlc = "Niarms_AK";
        inertia = 0.45;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "MrRifleman, Toadie";
        reloadAction = "HLC_GestureReloadAK";
        scope = public;
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74m_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Izhmash AK74M";
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        bg_bipod = 0;
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        class Single : Mode_SemiAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000654498;
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            /// various other fire mode parameters
        };
        class FullAuto : Mode_FullAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000654498;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 59;
        };
    };
    class hlc_rifle_ak74m_gl : hlc_rifle_ak74m {
        dlc = "Niarms_AK";
        inertia = 0.55;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "MrRifleman, Tigg, Toadie";
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74gl.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_core\animation\gesture\handpose_gp25.rtm" };
        displayName = "Izhmash AK74M(GL)";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74mgl_ca";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        muzzles[] = { "this", "hlc_GP30_AK74M" };
        bg_bipod = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 85.4;
        };
        class hlc_GP30_AK74M : UGL_F {
            cameradir = "GL_Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "GL_eye_50m", "GL_eye_100m", "GL_eye_150m", "GL_eye_200m", "GL_eye_250m", "GL_eye_300m", "GL_eye_350m", "GL_eye_400m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "GP30";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            drysound[] = { "A3\sounds_f\Weapons\other\sfx5", 1, 1, 400 };
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { "hlc_VOG25_AK", "hlc_GRD_White", "hlc_GRD_Red", "hlc_GRD_Green", "hlc_GRD_Yellow", "hlc_GRD_Purple", "hlc_GRD_Blue", "hlc_GRD_Orange" };
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticszoommin = 0.25;
            reloadmagazinesound[] = { "\hlc_wp_ak\snd\gp30_reload", 1.1, 1, 20 };
            reloadtime = 0.1;
            sound[] = { "\hlc_wp_ak\snd\gp30_fire", 1.0, 1, 400 };
            weaponinfotype = "RscWeaponZeroing";
        };
    };
    class hlc_rifle_ak74m_MTK : hlc_ak_base {
        dlc = "Niarms_AK";
        AB_barrelTwist = 7.87;
        AB_barrelLength = 16.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "MrRifleman,Tigg, Toadie";
        scope = public;
        displayName = "Izhmash AK74M(MTK)";
        magazines[] = {
            "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk"
            , "30Rnd_545x39_mag_f", "30Rnd_545x39_mag_green_f", "30Rnd_545x39_mag_tracer_f", "30Rnd_545x39_mag_tracer_green_f" //APEX mags
        };
        model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_ak74mmtk_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        bg_bipod = 0;
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        class Single : Mode_SemiAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000654498;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            /// various other fire mode parameters
        };
        class FullAuto : Mode_FullAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000654498;
            minRange = 2;
            minRangeProbab = 0.01;
            midRange = 200;
            midRangeProbab = 0.01;
            maxRange = 400;
            maxRangeProbab = 0.01;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61.4;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak74\ak74m_reload", 0.8, 1, 30 };
    };
    class hlc_rifle_aek971_mtk : hlc_rifle_ak74m_MTK {
        dlc = "Niarms_AK";
        author = "Arby26, Millenia, Toadie";
        scope = public;
        ACE_barrelTwist = 241.3;
        ACE_barrelLength = 431.8;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        displayName = "ZID AEK971S(MTK)";
        model = "\hlc_wp_ak\mesh\aek971\aek971_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aekmtk_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        reloadMagazineSound[] = { "hlc_wp_ak\snd\soundshaders\aek\aek_reload", 0.8, 1, 20 };
        discreteDistanceCameraPoint[] = { "eye", "eye1", "eye", "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        modes[] = { "FullAuto", "Burst", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.0681;
            begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.0005563233;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak2_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak2_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Burst : Mode_Burst {
            reloadTime = 0.0681;
            begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.0, 1, 1200 };
            closure1[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak12_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            dispersion = 0.0005563233;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            burst = 3;
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak2_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak2_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.77827941, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.77827941, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\aek_fire", 1.77827941, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.0681;
            begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.0005563233;
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak2_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak2_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aek_Shot_SoundSet", "Nia_aek_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\aek_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aek_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aek_silencerShot_SoundSet", "Nia_aek_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\aek_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\aek_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\rpk74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "ZID AEK971S";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
    };
    class hlc_rifle_aks74u_MTK : hlc_ak_base {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        magazines[] = {
            "hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK", "hlc_60Rnd_545x39_t_rpk"
        };
        AB_barrelTwist = 6.3;
        AB_barrelLength = 8.3;
        ACE_barrelTwist = 160.02;
        ACE_barrelLength = 210.82;
        author = "Millenia, Toadie";
        scope = public;
        displayName = "Izhmash AKS74U(MTK)";
        initspeed = -0.816667;
        model = "\hlc_wp_ak\mesh\millaks74u\aks74u_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74umtk_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        discretedistance[] = { 350, 500 };
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_aks74uhandgesture.rtm" };
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.086;
            begin1[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000972294;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.086;
            begin1[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000972294;
            recoil = "recoil_auto_mk20";
            recoilprone = "recoil_auto_prone_mk20";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_Shot_SoundSet", "Nia_aks74u_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74u_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\aks74u_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_aks74u_silencerShot_SoundSet", "Nia_aks74u_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Izhmash AKS74U";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 54;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
    };
    class hlc_rifle_akm_MTK : hlc_rifle_slr107u_MTK {
        dlc = "Niarms_AK";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        AB_barrelTwist = 7.87;
        AB_barrelLength = 16.3;
        ACE_barrelTwist = 199.898;
        ACE_barrelLength = 414.02;
        scope = public;
        author = "MrRifleman, Bull5hit, Toadie";
        model = "\hlc_wp_ak\mesh\akm\akm_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_akmmtk_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Izhmash AKM(MTK)";
        descriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
        reloadMagazineSound[] = { "\hlc_wp_ak\snd\soundshaders\ak47\ak_reload_longer", 0.74, 1, 20 };
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.097;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 2, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 2, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_SoundSet", "Nia_ak47_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class Single : Mode_SemiAuto {
            reloadTime = 0.097;
            recoil = "recoil_single_mx";
            recoilprone = "recoil_single_prone_mx";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_SoundSet", "Nia_ak47_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak47_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak762_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak47_Shot_Silenced_SoundSet", "Nia_ak47_ShotTail_Silenced_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak47_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak47_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak47_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 62;
        };
    };
    class hlc_rifle_aks74_MTK : hlc_rifle_ak74m_MTK {
        dlc = "Niarms_AK";
        inertia = 0.45;
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        author = "MrRifleman, Toadie";
        reloadAction = "HLC_GestureReloadAK";
        scope = public;
        model = "\hlc_wp_ak\mesh\aks74\aks74_mtk.p3d";
        picture = "\hlc_wp_ak\tex\ui\gear_aks74mtk_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Izhmash AKS74(MTK)";
        discreteDistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
        discreteDistanceCameraPoint[] = { "eye", "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000"/*, "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "eye_look";
        bg_bipod = 0;
        recoil = "recoil_mk20";
        modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 8 };
        class Single : Mode_SemiAuto {

            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.000654498;
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            /// various other fire mode parameters
        };
        class FullAuto : Mode_FullAuto {
            airateoffire = "1e-006";
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.000654498;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "Nia_ak74_Shot_SoundSet", "Nia_ak74_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "Nia_ak74_silencerShot_SoundSet", "Nia_ak74_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 59;
        };
    };
};
