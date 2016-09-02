// NOTE TO  FUTURE ME - 
//G36 Rifle-length cycle - 0.093
//Carbine = 0.88
//Compact - 0.82
//IMPORT to FBX- import 0.01 , scale 0.55 all axis

#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0
#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_G36 {
        requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Weapons_F_Acc", "asdg_jointrails", "hlcweapons_core" };
        units[] = {};
        weapons[] = { "HLC_Optic_G36dualoptic35x","HLC_Optic_G36dualoptic35x2d","HLC_Optic_G36Export35x","HLC_Optic_G36Export35x","HLC_Optic_G36Export35x2d","HLC_Optic_G36Dualoptic15x","HLC_Optic_G36Dualoptic15x2d","HLC_Optic_G36Export15x","HLC_Optic_G36Export15x2d",
            "hlc_rifle_G36A1", "hlc_rifle_G36A1AG36", "hlc_rifle_G36KA1", "hlc_rifle_G36C", "hlc_rifle_G36E1", "hlc_rifle_G36E1AG36", "hlc_rifle_G36KE1", "hlc_rifle_G36V", "hlc_rifle_G36KV", "hlc_rifle_G36CV", "hlc_rifle_G36VAG36", "hlc_rifle_G36TAC",
            "hlc_rifle_G36KTAC", "hlc_rifle_G36CTAC", "hlc_rifle_G36MLIC", "hlc_rifle_G36KMLIC", "hlc_rifle_G36CMLIC","hlc_rifle_G36MLIAG36"
        };
        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SPR_G36","hlc_100rnd_556x45_EPR_G36"};
        version="v1.1";
        author="toadie";
    };
};

class cfgMods {
    class Niarms_G36 {
        name = "NIArsenal: G36 Rifles";
        picture = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;

class niarms_G36_OpticSlot: asdg_OpticRail {
    class compatibleItems {
        HLC_Optic_G36dualoptic35x = 1;
        HLC_Optic_G36dualoptic35x2d = 1;
        HLC_Optic_G36Export35x2d = 1;
        HLC_Optic_G36Export35x = 1;
        HLC_Optic_G36Dualoptic15x = 1;
        HLC_Optic_G36Dualoptic15x2d = 1;
        HLC_Optic_G36Export15x = 1;
        HLC_Optic_G36Export15x2d = 1;
    };
};

class CfgVehicles { 
    dlc = "Niarms_G36";
    class NATO_Box_Base;
    class HLC_G36_ammobox : NATO_Box_Base {
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AR15 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            class _x29rnd_300BLK_STANAG {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 60;
            };
            class _x29rnd_300BLK_STANAG_T {
                magazine = "hlc_30rnd_556x45_SOST_G36";
                count = 60;
            };
            class _x29rnd_300BLK_STANAG_S {
                magazine = "hlc_30rnd_556x45_SPR_G36";
                count = 60;
            };
            class _x30Rnd_556x45_Stanag {
                magazine = "hlc_100rnd_556x45_EPR_G36";
                count = 30;
            };
            class _xhlc_30rnd_556x45_EPR {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 60;
            };
            class _xhlc_30rnd_556x45_SOST {
                magazine = "30Rnd_65x39_caseless_mag_Tracer";
                count = 60;
            };
            class _xx_hlc_30rnd_556x45_SPR {
                magazine = "100Rnd_65x39_caseless_mag_Tracer";
                count = 60;
            };
            class _xx_hlc_50rnd_556x45_EPR {
                magazine = "100Rnd_65x39_caseless_mag";
                count = 60;
            };
            class _x1Rnd_HE_Grenade_shell {
                magazine = "1Rnd_HE_Grenade_shell";
                count = 60;
            };
            class _UGL_FlareWhite_F {
                magazine = "UGL_FlareWhite_F";
                count = 60;
            };
            class _xUGL_FlareGreen_F {
                magazine = "UGL_FlareGreen_F";
                count = 60;
            };
            class _xUGL_FlareGreen_B {
                magazine = "UGL_FlareRed_F";
                count = 60;
            };
            class _xUGL_FlareYellow_F {
                magazine = "UGL_FlareYellow_F";
                count = 60;
            };
            class _xUGL_FlareCIR_F {
                magazine = "UGL_FlareCIR_F";
                count = 60;
            };
            class _x1Rnd_Smoke_Grenade_shell {
                magazine = "1Rnd_Smoke_Grenade_shell";
                count = 60;
            };
            class _1Rnd_SmokeRed_Grenade_shell {
                magazine = "1Rnd_SmokeRed_Grenade_shell";
                count = 60;
            };
            class _1Rnd_SmokeGreen_Grenade_shell {
                magazine = "1Rnd_SmokeGreen_Grenade_shell";
                count = 60;
            };
            class _1Rnd_SmokeYellow_Grenade_shell {
                magazine = "1Rnd_SmokeYellow_Grenade_shell";
                count = 60;
            };
            class _1Rnd_SmokePurple_Grenade_shell {
                magazine = "1Rnd_SmokePurple_Grenade_shell";
                count = 60;
            };
            class _1Rnd_SmokeBlue_Grenade_shell {
                magazine = "1Rnd_SmokeBlue_Grenade_shell";
                count = 60;
            };
        };
        class TransportWeapons {
            class xhlc_rifle_RU556 {
                weapon = "hlc_rifle_G36A1";
                count = 10;
            };
            class _xhlc_rifle_RU556s {
                weapon = "hlc_rifle_G36E1";
                count = 10;
            };
            class _xhlc_rifle_bcmjack {
                weapon = "hlc_rifle_G36V";
                count = 10;
            };
            class _xhlc_rifle_Colt727 {
                weapon = "hlc_rifle_G36TAC";
                count = 10;
            };
            class _xhlc_rifle_Colt727_GL {
                weapon = "hlc_rifle_G36MLIC";
                count = 10;
            };
            class _xhhlc_rifle_M4 {
                weapon = "hlc_rifle_G36KA1";
                count = 10;
            };
            class _xhhlc_rifle_m4m203 {
                weapon = "hlc_rifle_G36KE1";
                count = 10;
            };
            class _xhlc_rifle_Coltqbr {
                weapon = "hlc_rifle_G36KV";
                count = 10;
            };
            class _xhlc_rifle_Bushmaster300 {
                weapon = "hlc_rifle_G36KTAC";
                count = 10;
            };
            class _xhlc_rifle_vendimus {
                weapon = "hlc_rifle_G36KMLIC";
                count = 10;
            };
            class _xhlc_rifle_SAMR {
                weapon = "hlc_rifle_G36C";
                count = 10;
            };
            class _xhlc_rifle_honeybadger {
                weapon = "hlc_rifle_G36CV";
                count = 10;
            };
            class _xhlc_rifle_honeybadger1 {
                weapon = "hlc_rifle_G36CTAC";
                count = 10;
            };
            class _xhlc_rifle_honeybadger2 {
                weapon = "hlc_rifle_G36CMLIC";
                count = 10;
            };
            class _xhlc_rifle_honeybadger3 {
                weapon = "hlc_rifle_G36A1AG36";
                count = 10;
            };
            class _xhlc_rifle_honeybadger4 {
                weapon = "hlc_rifle_G36E1AG36";
                count = 10;
            };
            class _xhlc_rifle_honeybadger5 {
                weapon = "hlc_rifle_G36vAG36";
                count = 10;
            };
            class _xhlc_rifle_honeybadger6 {
                weapon = "hlc_rifle_G36MLIAG36";
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
            class _xoptic_Arco {
                name = "optic_Arco";
                count = 10;
            };
            class _xoptic_LRPS {
                name = "optic_LRPS";
                count = 10;
            };
            class _xoptic_NVS {
                name = "optic_NVS";
                count = 10;
            };
            class _xx_HLC_Optic_G36dualoptic35x {
                name = "HLC_Optic_G36dualoptic35x";
                count = 10;
            };
            class _xx_HLC_Optic_G36dualoptic35x2 {
                name = "HLC_Optic_G36dualoptic35x2d";
                count = 10;
            };
            class _xx_HLC_Optic_G36Export35x {
                name = "HLC_Optic_G36Export35x";
                count = 10;
            };
            class _xHLC_Optic_G36Export35x2d {
                name = "HLC_Optic_G36Export35x2d";
                count = 10;
            };
            class _xHLC_Optic_G36Dualoptic15x {
                name = "HLC_Optic_G36Dualoptic15x";
                count = 10;
            };
            class _xHLC_Optic_G36Dualoptic15x2 {
                name = "HLC_Optic_G36Dualoptic15x2d";
                count = 10;
            };
            class _xHLC_Optic_G36Export15x {
                name = "HLC_Optic_G36Export15x";
                count = 10;
            };
            class _xHLC_Optic_G36Export15x2 {
                name = "HLC_Optic_G36Export15x2d";
                count = 10;
            };
            class _xx_acc_flashlight {
                name = "acc_flashlight";
                count = 10;
            };
            class _xacc_pointer_IR {
                name = "acc_pointer_IR";
                count = 10;
            };
        };
    };
    class Weapon_Base_F;
    class weapon_hlc_rifle_G36A1 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36A1";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36A1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weaponhlc_rifle_G36KA1 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36K";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KA1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36E1 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36E";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36E1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36C : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36C";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36C";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36KE1 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36KE";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KE1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36V : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36V";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36V";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36KV : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36V";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KV";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36CV : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36CV";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36CV";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36TAC : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36V(KAC)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36TAC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36KTAC : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36KV(KAC)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KTAC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36CTAC : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36CV(KAC)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36CTAC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36A1AG36 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36A1+AG36";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36A1AG36";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36E1AG36 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36E1+AG36";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36E1AG36";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36VAG36 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36V+AG36";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36VAG36";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_G36";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36MLIAG36 : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36MLI(C)+AG36";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36MLIAG36";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36KMLI : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36K-MLI(C)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36KMLIC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36CMLI : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36C-MLI(C)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36CMLIC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G36MLI : Weapon_Base_F {
        dlc = "Niarms_G36";
        scope = 2;
        scopeCurator = 2;
        displayName = "G36-MLI(C)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_G36MLIC";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "30Rnd_65x39_caseless_mag";
                count = 1;
            };
        };
    };
};


class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        HLC_GestureReloadG36A1 = "HLC_GestureReloadG36A1"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadG36MLI =  "HLC_GestureReloadG36MLI";
        HLC_GestureReloadG36V = "HLC_GestureReloadG36V";
        HLC_GestureReloadAG36 = "HLC_GestureReloadAG36";//
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Prone", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Prone", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Prone", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Prone", "Gesture" };
        };
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
                HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
                HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
                HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;
    class States {

        class HLC_GestureReloadG36A1 : Default {
            file = "hlc_wp_g36\anim\standard\reload_G36_standing.rtm";
            speed = 0.2307692307692308;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36A1_Prone : Default {
            file = "hlc_wp_g36\anim\standard\reload_G36_prone.rtm";
            speed = 0.2307692307692308;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36A1_Context : HLC_GestureReloadG36A1 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadG36V :Default {
            file = "hlc_wp_g36\anim\varient\reload_G36V_standing.rtm";
            speed = 0.2564102564102564;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36V_Prone : Default {
            file = "hlc_wp_g36\anim\varient\reload_G36V_prone.rtm";
            speed = 0.2564102564102564;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36V_Context : HLC_GestureReloadG36V {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAG36 : Default {
            file = "hlc_wp_g36\anim\ag36\reload_aG36_standing.rtm";
            speed = 0.2307692325443787;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadAG36_Prone : Default {
            file = "hlc_wp_g36\anim\ag36\reload_aG36_prone.rtm";
            speed = 0.2307692325443787;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAG36_Context : HLC_GestureReloadAG36 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadG36MLI : Default {
            file = "hlc_wp_g36\anim\mli\reload_g36mli_standing.rtm";
            speed = 0.2727272724793388;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36MLI_Prone : Default {
            file = "hlc_wp_g36\anim\mli\reload_g36mli_prone.rtm";
            looped = 0;
            speed = 0.2727272724793388;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0, 1, 0.07, 0, 0.81, 0, 0.86, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36MLI_Context : HLC_GestureReloadG36MLI {
            mask = "handsWeapon_context";
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_30rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (EPR) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm EPR";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_EPR_ca.paa";
    };
    class hlc_30rnd_556x45_SOST_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (SOST) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 910;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm SOST";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_SOST_ca.paa";
    };
    class hlc_30rnd_556x45_SPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Rifles";
        displayname = "G36 Mag (SPR) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 818.2;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm SPR";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_SPR_ca.paa";
    };
    class hlc_100rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_556NATO_EPR";
        count = 100;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 100<br />Used in: G36 Series Rifles";
        displayname = "G36 C-Mag (EPR) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 46;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "5.56mm";
        model = "\hlc_wp_g36\mesh\magazine\magazine_cmag.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_CMAG_ca.paa";
    };
    class hlc_30rnd_556x45_Tracers_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "B_556x45_Ball_Tracer_Red";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (Tracer) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "5.56mm Tracer";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_TDIM_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (IR-DIM) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "5.56mm Tracer";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_MDIM_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: G36 Series Rifles";
        displayname = "G36 Mag (EPR,IR-DIM) 5.56mm";
        magazineGroup[] = { "G36_maggroup" };
        initspeed = 920;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "5.56mm Tracer";
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
};

class CfgWeapons {
    class UGL_F;
    class Rifle;
    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class InventoryOpticsItem_Base_F;
    class optic_Arco;

    class HLC_Optic_G36dualoptic35x : optic_Arco {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 3.5x";
        displayname = "G36 Dual-Optic 3.5x";
        model = "\hlc_wp_G36\mesh\optics\dualoptic3-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle3-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 0;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.07114;
                    opticsZoomMax = 0.07114;
                    opticsZoomInit = 0.07114;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class HLC_Optic_G36dualoptic35x2d : HLC_Optic_G36dualoptic35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = "G36 Dual-Optic 3.5x(2D)";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle3-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.07114;
                    opticsZoomMax = 0.07114;
                    opticsZoomInit = 0.07114;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron :Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class HLC_Optic_G36Export35x : HLC_Optic_G36dualoptic35x {
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 3.5x";
        displayname = "G36 Export Optic 3.5x";
        model = "\hlc_wp_G36\mesh\optics\Export3-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";
    };
    class HLC_Optic_G36Export35x2d : HLC_Optic_G36Export35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = "G36 Export Optic 3.5x(2D)";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle3-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.07114;
                    opticsZoomMax = 0.07114;
                    opticsZoomInit = 0.07114;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };

    class HLC_Optic_G36Dualoptic15x : HLC_Optic_G36dualoptic35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = "G36 Dual-Optic 1.5x";
        descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 1.5x";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle3-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 0;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.166;
                    opticsZoomMax = 0.166;
                    opticsZoomInit = 0.166;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class HLC_Optic_G36Dualoptic15x2d : HLC_Optic_G36Dualoptic15x {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Dual Optic Sight for the G36 Rifle<br />Magnification: 1.5x";
        displayname = "G36 Dual-Optic 1.5x(2D)";
        model = "\hlc_wp_G36\mesh\optics\dualoptic1-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle1-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.166;
                    opticsZoomMax = 0.166;
                    opticsZoomInit = 0.166;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class HLC_Optic_G36Export15x : HLC_Optic_G36dualoptic15x {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 1.5x";
        displayname = "G36 Export Optic 1.5x";
        model = "\hlc_wp_G36\mesh\optics\Export1-5xy.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";

    };
    class HLC_Optic_G36Export15x2d : HLC_Optic_G36Dualoptic15x2d {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = "Hensoldt-Wetzlar Optic Sight for the G36 Rifle(Export Variant)<br />Magnification: 1.5x";
        displayname = "G36 Export Optic 1.5x(2D)";
        model = "\hlc_wp_G36\mesh\optics\Export1-5xy.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle1-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.166;
                    opticsZoomMax = 0.166;
                    opticsZoomInit = 0.166;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class hlc_G36_base : Rifle_Base_F {
        scope = protected;
        recoil = "recoil_ebr";
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = false;
        magazineReloadSwitchPhase = 0.5;
        magazines[] = {
            "hlc_30rnd_556x45_EPR_G36", "hlc_30rnd_556x45_SOST_G36", "hlc_100rnd_556x45_EPR_G36", "hlc_30rnd_556x45_SPR_G36", "hlc_30rnd_556x45_Tracers_G36","hlc_30rnd_556x45_MDIM_G36", "hlc_30rnd_556x45_TDIM_G36"
        };
        class Library {
            libTextDesc = "SIG Stgw.510";
        };
        reloadAction = "GestureReloadEBR";
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        cameraDir = "";
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
        distancezoommax = 300;
        distancezoommin = 300;
        drysound[] = {"A3\sounds_f\weapons\other\dry1", 0.630957, 1, 30};
        modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.25;
        opticsZoomInit = 0.75;
        reloadmagazinesound[] = {"hlc_wp_g36\snd\G36_reload", 0.630957, 1, 35};
        muzzles[] = { "this" };
        class hlc_GL_AG36 : UGL_F {
            cameradir = "gl_look";
            discreteDistance[] = { 50, 100,150, 200,250,300,350};
            discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m"}; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "AG36";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticszoommin = 0.25;
            reloadtime = 0.1;
            sound[] = { "A3\sounds_f\Weapons\grenades\ugl_shot_1", 1, 1, 400 };
            weaponInfoType = "RscWeaponZeroing";
            reloadAction = "HLC_GestureReloadAG36";
            reloadMagazineSound[] = { "hlc_wp_g36\snd\ag36_reload", 1.0, 1, 10 };
            drySound[] = { "hlc_wp_g36\snd\ag36_drystrike", 0.66, 1, 10 };
            modes[] = { "Single" };
            class Single : Mode_SemiAuto {
                sounds[] = { "StandardSound" };
                class BaseSoundModeType {
                    closure1[] = { "hlc_wp_g36\snd\ag36_striker", 1.0, 1, 10 };
                    soundClosure[] = { "closure1", 1 };
                };
                class StandardSound : BaseSoundModeType {
                    begin1[] = { "hlc_wp_g36\snd\ag36_launch", 0.70794576, 1, 200 };
                    begin2[] = { "hlc_wp_g36\snd\ag36_launch", 0.70794576, 1, 200 };
                    soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
                };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\AG36_indoor", 1, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
                recoil = "M240Recoil";
                recoilProne = "M240Recoil";
                minRange = 30;
                minRangeProbab = 0.1;
                midRange = 200;
                midRangeProbab = 0.7;
                maxRange = 400;
                maxRangeProbab = 0.05;
            };
        };

        soundbullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
        };

        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1,10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g36\snd\g36_sil", 1, 1,200};
                begin2[]={"\hlc_wp_g36\snd\g36_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            dispersion = 0.0007;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilProne = "recoil_single_prone_ebr";
            reloadtime = 0.086;
            soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
            soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            airateoffire = "1e-006";
            dispersion = 0.0007;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.086;
            soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
            soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst2rnd : Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            airateoffire = "1e-006";
            dispersion = 0.0007;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst3rnd : Burst2rnd {
            burst = 3;
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

    class hlc_rifle_G36A1 : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        displayName = "HK G36A1";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        drysound[] = {"hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10};
        reloadmagazinesound[] = {"hlc_wp_g36\snd\G36_reload", 0.9, 1, 35};
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "RD_eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.375;
                opticsZoomMax = 1;
                opticsZoomInit = 0.75;
                usemodeloptics = 0;
                visionmode[] = {};
            };
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomMin = 0.07114;
                opticsZoomMax = 0.07114;
                opticsZoomInit = 0.07114;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memorypointcamera = "eye";
                opticsid = 2;
                visionmode[] = { "Normal" };
            };
        };

        model = "hlc_wp_g36\mesh\G36A1\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36A1_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = {200};
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.57;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
            class CowsSlot : niarms_G36_OpticSlot {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            dispersion = 0.000555596;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.11;
            soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
            soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.000555596;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
            soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
            weaponsoundeffect = "DefaultRifle";
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
    class hlc_rifle_MG36 : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = true;
        recoil = "recoil_trg20";
        displayName = "HK MG36A1";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "RD_eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.375;
                opticsZoomMax = 1;
                opticsZoomInit = 0.75;
                usemodeloptics = 0;
                visionmode[] = {};
            };
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomMin = 0.07114;
                opticsZoomMax = 0.07114;
                opticsZoomInit = 0.07114;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memorypointcamera = "eye";
                opticsid = 2;
                visionmode[] = { "Normal" };
            };

        };
        /*magazines[] = {
            "hlc_100rnd_556x45_EPR_G36", "hlc_30rnd_556x45_EPR_G36", "hlc_30rnd_556x45_SOST_G36", "hlc_30rnd_556x45_SPR_G36", "hlc_30rnd_556x45_Tracers_G36"
        };*/
        model = "hlc_wp_g36\mesh\G36 LSW\MG36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_MG36_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 200 };
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.61;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 100;
            class CowsSlot : niarms_G36_OpticSlot {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.000555596;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.11;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.000555596;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
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
    class hlc_rifle_G36A1AG36 : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "RD_eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.375;
                opticsZoomMax = 1;
                opticsZoomInit = 0.75;
                usemodeloptics = 0;
                visionmode[] = {};
            };
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomMin = 0.07114;
                opticsZoomMax = 0.07114;
                opticsZoomInit = 0.07114;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memorypointcamera = "eye";
                opticsid = 2;
                visionmode[] = { "Normal" };
            };

        };

        displayName = "HK G36A1(GL)";
        muzzles[] = { "this", "hlc_GL_AG36"};
        model = "hlc_wp_g36\mesh\G36A1\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36A1_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 200 };
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.57;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 120;
            class CowsSlot : niarms_G36_OpticSlot {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.000555596;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.11;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.000555596;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
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
    class hlc_rifle_G36KA1 : hlc_rifle_G36A1 {
        dlc = "Niarms_G36";
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        author = "Toadie";
        displayName = "HK G36KA1";
        descriptionShort = "Infantry Carbine<br/>Caliber: 5.56mm NATO";
        model = "hlc_wp_g36\mesh\G36A1\G36K.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_G36k_ca.paa";
        inertia = 0.5;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.0008727;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
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
    class hlc_rifle_G36C : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        inertia = 0.45;
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        displayName = "HK G36C";
        descriptionShort = "Compact Carbine<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        discretedistance[] = { 100, 200, 300, 400, 500 };
        discretedistanceinitindex = 1;
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        model = "hlc_wp_g36\mesh\G36E1\G36C.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_G36C_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 67;
            class CowsSlot : asdg_OpticRail1913 {};
            //class PointerSlot : asdg_FrontSideRail {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36C_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.0008727;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.082;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36C_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.082;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst2rnd : Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36c_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36C_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.082;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
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
    class hlc_rifle_G36E1 : hlc_rifle_g36A1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        model = "hlc_wp_g36\mesh\G36E1\G36.p3d";
        displayName = "HK G36E";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36E_ca.paa";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };

    };
    class hlc_rifle_G36E1AG36 : hlc_rifle_G36A1AG36 {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        model = "hlc_wp_g36\mesh\G36E1\AG36.p3d";
        displayName = "HK G36E(GL)";
        picture = "\hlc_wp_g36\tex\ui\gear_AG36E_ca.paa";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
    };
    class hlc_rifle_G36KE1 : hlc_rifle_g36KA1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        model = "hlc_wp_g36\mesh\G36E1\G36K.p3d";
        displayName = "HK G36KE";
        picture = "\hlc_wp_g36\tex\ui\gear_g36ke_ca.paa";
        descriptionShort = "Infantry Carbine<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36A1";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        class Burst2rnd :Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
    };
    class hlc_rifle_G36V : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        displayName = "HK G36V";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36V";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        model = "hlc_wp_g36\mesh\G36V\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36V_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 200 };
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.57;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
            class CowsSlot : asdg_OpticRail1913 {};
            //class PointerSlot : asdg_FrontSideRail {}; // missing rail, attachment detached :)
            //class UnderBarrelSlot :asdg_UnderSlot {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.000555596;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.11;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.000555596;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst2rnd : Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            airateoffire = "1e-006";
            dispersion = 0.0007;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst3rnd : Burst2rnd {
            burst = 3;
        };
        class single_close_optics1 : Single {
            airateoffire = 2;
            airateoffiredistance = 300;
            maxrange = 500;
            maxrangeprobab = 0.01;
            midrange = 300;
            midrangeprobab = 0.8;
            minrange = 2;
            minrangeprobab = 0.05;
            requiredoptictype = 1;
            showtoplayer = 0;
        };
        class single_medium_optics1 : single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 700;
            maxrangeprobab = 0.05;
            midrange = 500;
            midrangeprobab = 0.7;
            minrange = 300;
            minrangeprobab = 0.05;
        };
        class single_far_optics1 : single_medium_optics1 {
            airateoffire = 4;
            airateoffiredistance = 600;
            maxrange = 900;
            maxrangeprobab = 0.05;
            midrange = 600;
            midrangeprobab = 0.4;
            minrange = 300;
            minrangeprobab = 0.05;
            requiredoptictype = 2;
        };
        class fullauto_medium : FullAuto {
            airateoffire = 2;
            burst = 3;
            maxrange = 100;
            maxrangeprobab = 0.05;
            midrange = 50;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.5;
            showtoplayer = 0;
        };
    };
    class hlc_rifle_G36KV : hlc_rifle_G36V {
        dlc = "Niarms_G36";
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        author = "Toadie";
        displayName = "HK G36KV";
        descriptionShort = "Infantry Carbine<br/>Caliber: 5.56mm NATO";
        model = "hlc_wp_g36\mesh\G36V\G36K.p3d";
        inertia = 0.5;
        picture = "\hlc_wp_g36\tex\ui\gear_g36KV_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
        };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.0008727;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst2rnd : Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36K_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0007;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class single_close_optics1 : Single {
            airateoffire = 2;
            airateoffiredistance = 300;
            maxrange = 500;
            maxrangeprobab = 0.01;
            midrange = 300;
            midrangeprobab = 0.8;
            minrange = 2;
            minrangeprobab = 0.05;
            requiredoptictype = 1;
            showtoplayer = 0;
        };
        class single_medium_optics1 : single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 700;
            maxrangeprobab = 0.05;
            midrange = 500;
            midrangeprobab = 0.7;
            minrange = 300;
            minrangeprobab = 0.05;
        };
        class single_far_optics1 : single_medium_optics1 {
            airateoffire = 4;
            airateoffiredistance = 600;
            maxrange = 900;
            maxrangeprobab = 0.05;
            midrange = 600;
            midrangeprobab = 0.4;
            minrange = 300;
            minrangeprobab = 0.05;
            requiredoptictype = 2;
        };
        class fullauto_medium : FullAuto {
            airateoffire = 2;
            burst = 3;
            maxrange = 100;
            maxrangeprobab = 0.05;
            midrange = 50;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.5;
            showtoplayer = 0;
        };
    };
    class hlc_rifle_G36CV : hlc_rifle_G36C {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = "HK G36CV";
        descriptionShort = "Infantry Carbine<br/>Caliber: 5.56mm NATO";
        model = "hlc_wp_g36\mesh\G36V\G36C.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36CV_ca.paa";
        inertia = 0.5;
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 68;
        };
    };
    class hlc_rifle_G36VAG36 : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        reloadAction = "HLC_GestureReloadG36V";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        displayName = "HK G36V(GL)";
        muzzles[] = { "this", "hlc_GL_AG36" };
        model = "hlc_wp_g36\mesh\G36V\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36V_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 200 };
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.57;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 120;
            class CowsSlot : asdg_OpticRail1913 {};
            //class PointerSlot : asdg_FrontSideRail {}; // rail missing
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.000555596;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.11;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36_sil", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.000555596;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
    };

    class hlc_rifle_G36TAC : hlc_rifle_G36V {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        model = "hlc_wp_g36\mesh\G36tactical\G36.p3d";
        displayName = "HK G36V(KAC)";
        descriptionShort = "Infantry Rifle<br/>Caliber: 5.56mm NATO";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36tac_ca.paa";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
    };
    class hlc_rifle_g36KTac : hlc_rifle_G36KV {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        model = "hlc_wp_g36\mesh\G36tactical\G36K.p3d";
        displayName = "HK G36KV(KAC)";
        descriptionShort = "Infantry Carbine<br/>Caliber: 5.56mm NATO";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36ktac_ca.paa";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
    };
    class hlc_rifle_G36CTac : hlc_rifle_G36CV {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 278;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        model = "hlc_wp_g36\mesh\G36tactical\G36C.p3d";
        displayName = "HK G36CV(KAC)";
        descriptionShort = "Compact Carbine<br/>Caliber: 5.56mm NATO";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36Ctac_ca.paa";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
    };
    ///CASELESS 

    class hlc_rifle_G36MLIC : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 203;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_mx";
        displayName = "HK G36-MLI(C)";
        descriptionShort = "Infantry Carbine<br/>Caliber: 6.5x38mm NATO Caseless";
        reloadAction = "HLC_GestureReloadG36MLI";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\g36mlic_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        discretedistance[] = { 100, 200, 300, 400, 500,600,700,800 };
        discretedistanceinitindex = 1;
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        magazines[] = {
            "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag"
        };
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        model = "hlc_wp_g36\mesh\G36MLIC\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36mli_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.55;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 89;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_762 {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.000555596;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst2rnd : Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0007;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36mlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.000555596;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.093;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
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
    class hlc_rifle_G36KMLIC : hlc_rifle_G36MLIC {
        dlc = "Niarms_G36";
        author = "Toadie";
        ACE_barrelTwist = 203;
        ACE_barrelLength = 318;
        displayName = "HK G36K-MLI(C)";
        descriptionShort = "Infantry Carbine<br/>Caliber: 6.5x38mm NATO Caseless";
        reloadAction = "HLC_GestureReloadG36MLI";
        model = "hlc_wp_g36\mesh\G36MLIC\G36K.p3d";
        inertia = 0.5;
        picture = "\hlc_wp_g36\tex\ui\gear_g36Kmli_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 72;
        };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.0008727;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst2rnd : Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
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
    class hlc_rifle_G36CMLIC : hlc_rifle_G36MLIC {
        dlc = "Niarms_G36";
        author = "Toadie";
        ACE_barrelTwist = 203;
        ACE_barrelLength = 278;
        displayName = "HK G36C-MLI(C)";
        descriptionShort = "Compact Carbine<br/>Caliber: 6.5x38mm NATO Caseless";
        reloadAction = "HLC_GestureReloadG36MLI";
        model = "hlc_wp_g36\mesh\G36MLIC\G36C.p3d";
        inertia = 0.5;
        picture = "\hlc_wp_g36\tex\ui\gear_g36Cmli_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 68;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.0008727;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.082;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.082;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst2rnd : Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\g36Cmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.082;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
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
    class hlc_rifle_G36MLIAG36 : hlc_G36_base {
        dlc = "Niarms_G36";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 203;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        descriptionShort = "Infantry Rifle<br/>Caliber: 6.5x38mm NATO Caseless";
        reloadAction = "HLC_GestureReloadG36MLI";
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\g36mlic_reload", 0.9, 1, 35 };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        magazines[] = {
            "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag"
        };
        displayName = "HK G36MLI(C)(GL)";
        muzzles[] = { "this", "hlc_GL_AG36" };
        model = "hlc_wp_g36\mesh\G36MLIC\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36MLI_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 200 };
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.57;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 120;
            class CowsSlot : asdg_OpticRail1913 {};
            //class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_762 {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            dispersion = 0.0008727;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class Burst2rnd : Mode_Burst {
            burst = 2;
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_g36\snd\G36Kmlic_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g36\snd\g36_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\G36K_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g36\snd\g36mlic_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\g36_sil_indoor", 1.5, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            airateoffire = "1e-006";
            dispersion = 0.0008727;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            reloadtime = 0.088;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
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
};
