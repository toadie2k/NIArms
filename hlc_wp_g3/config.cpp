#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_g3 {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Sounds_F_Mark","asdg_jointrails","hlcweapons_core"};
        units[] = { "HLC_G3_ammobox", "Weapon_hlc_rifle_psg1", "Weapon_hlc_rifle_g3sg1","Weapon_hlc_rifle_g3ka4","Weapon_hlc_rifle_hk51","Weapon_HLC_Rifle_g3ka4_GL","Weapon_hlc_rifle_hk53","Weapon_hlc_rifle_G3A3","Weapon_hlc_rifle_g3a3ris" };
        weapons[] = {"hlc_rifle_psg1","hlc_rifle_g3sg1","HLC_Optic_ZFSG1","hlc_optic_accupoint_g3","hlc_rifle_g3ka4", "hlc_rifle_hk51","HLC_Rifle_g3ka4_GL","hlc_rifle_hk53", "hlc_optic_PVS4G3"};
        magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_t_G3", "hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_t_HK33"};
        version="1.8";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;

    class Niarms_G3 : Mod_Base {
        name = "NIArsenal: G3 Rifles";
        picture = "hlc_wp_g3\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_g3\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_g3\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_g3\tex\ui\NIArms1_ca.paa";
    };
};

class CfgMovesBasic {
    class DefaultDie;

    class ManActions {
        HLC_GestureReloadPSG1 = "HLC_GestureReloadPSG1"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadHK53 = "HLC_GestureReloadHK53";
    };

    class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;

        class NoActions : ManActions {
            HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1", "Gesture" };
            HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53", "Gesture" };
        };
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1_Prone", "Gesture" };
            HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53_Prone", "Gesture" };
        };

/*
        class RifleKneelActions : RifleBaseStandActions {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
        };
*/

        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1_Context", "Gesture" };
            HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1_Context", "Gesture" };
            HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1_Context", "Gesture" };
                HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;

    class States {
        class HLC_GestureReloadPSG1 : Default {
            file = "hlc_wp_g3\gesture\newgesture\reload_psg1_stand.rtm";
            speed = -6;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.1722222, 1, 0.188888889, 0, 0.222222222, 0, 0.2388888889, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.86, 0, 0.9, 1 };
        };

        class HLC_GestureReloadPSG1_Prone : Default {
            file = "hlc_wp_g3\gesture\newgesture\reload_psg1_prone.rtm";
            speed = -6;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.1722222, 1, 0.188888889, 0, 0.222222222, 0, 0.2388888889, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.86, 0, 0.9, 1 };
        };
        class HLC_GestureReloadPSG1_Context : HLC_GestureReloadPSG1 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadHK53 : Default {
            file = "hlc_wp_g3\gesture\newgesture\hk53_reload_Standing.rtm";
            speed = -6;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.86, 0, 0.9, 1 };
        };
        class HLC_GestureReloadHK53_Prone : Default {
            file = "hlc_core\animation\gesture\reload_hk53_prone.rtm";
            speed = -6;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.86, 0, 0.9, 1 };
        };
        class HLC_GestureReloadHK53_Context : HLC_GestureReloadHK53 {
            mask = "handsWeapon_context";
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;

class CfgVehicles {
    class NATO_Box_Base;
    class Weapon_Base_F;

    class HLC_G3_ammobox : NATO_Box_Base {
        dlc = "Niarms_G3";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC G3 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            class xhlc_20rnd_762x51_b_G3 {
                magazine = "hlc_20rnd_762x51_b_G3";
                count = 30;
            };
            class xhlc_20rnd_762x51_mk316_G3 {
                magazine = "hlc_20rnd_762x51_mk316_G3";
                count = 30;
            };
            class xhlc_20rnd_762x51_barrier_G3 {
                magazine = "hlc_20rnd_762x51_barrier_G3";
                count = 30;
            };
            class xhlc_20rnd_762x51_T_G3 {
                magazine = "hlc_20rnd_762x51_T_G3";
                count = 30;
            };
            class xhlc_50rnd_762x51_M_G3 {
                magazine = "hlc_50rnd_762x51_M_G3";
                count = 30;
            };
            class xhlc_30rnd_556x45_EPR_HK33 {
                magazine = "hlc_30rnd_556x45_EPR_HK33";
                count = 30;
            };
            class _XX_hlc_20rnd_762x51_S_G3 {
                magazine = "hlc_20rnd_762x51_S_G3";
                count= 30;
            };
            class xhlc_30rnd_556x45_SOST_HK33 {
                magazine = "hlc_30rnd_556x45_SOST_HK33";
                count = 30;
            };
            class xhlc_30rnd_556x45_b_HK33 {
                magazine = "hlc_30rnd_556x45_b_HK33";
                count = 30;
            };
            class xhlc_30rnd_556x45_t_HK33 {
                magazine = "hlc_30rnd_556x45_t_HK33";
                count = 30;
            };
        };
        class TransportWeapons {
            class _xhlc_rifle_g3a3 {
                weapon = "hlc_rifle_g3a3";
                count = 20;
            };
            class _xhhlc_rifle_g3sg1 {
                weapon = "hlc_rifle_g3sg1";
                count = 20;
            };    
            class _xhlc_rifle_psg1 {
                weapon = "hlc_rifle_psg1";
                count = 20;
            };
            class _xhlc_rifle_hk53 {
                weapon = "hlc_rifle_hk53";
                count = 20;
            };
            class _xhlc_rifle_g3ka4 {
                weapon = "hlc_rifle_g3ka4";
                count = 20;
            };
            class _xhlc_rifle_g3ka4gl {
                weapon = "HLC_Rifle_g3ka4_GL";
                count = 20;
            };
            class _xhlc_rifle_hk51 {
                weapon = "hlc_rifle_hk51";
                count = 20;
            };
        };
        class TransportItems {
            class _xhlc_muzzle_snds_g3 {
                name = "hlc_muzzle_snds_g3";
                count = 20;
            };
            class _xhlc_muzzle_snds_HK33 {
                name = "hlc_muzzle_snds_HK33";
                count = 20;
            };
            class _xHLC_Optic_ZFSG1 {
                name = "HLC_Optic_ZFSG1";
                count = 10;
            };
            class _xhlc_optic_accupoint_g3 {
                name = "hlc_optic_accupoint_g3";
                count = 10;
            };
            class _xx_hlc_optic_PVS4G3 {
                name= "hlc_optic_PVS4G3";
                count = 10;
            };
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
            class _xx_optic_ACO_grn {
                name = "optic_ACO_grn";
                count = 10;
            };
        };
    };
    class Weapon_hlc_rifle_psg1 : Weapon_Base_F {
        dlc = "Niarms_G3";
        scope = 2;
        scopeCurator = 2;
        displayName = "PSG1";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_psg1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20rnd_762x51_Mk316_G3";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_g3sg1 : Weapon_Base_F {
        dlc = "Niarms_G3";
        scope = 2;
        scopeCurator = 2;
        displayName = "G3SG1";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_g3sg1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20rnd_762x51_b_G3";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_g3ka4 : Weapon_Base_F {
        dlc = "Niarms_G3";
        scope = 2;
        scopeCurator = 2;
        displayName = "G3KA4";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_g3ka4";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20rnd_762x51_b_G3";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_hk51 : Weapon_Base_F {
        dlc = "Niarms_G3";
        scope = 2;
        scopeCurator = 2;
        displayName = "HK51";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_hk51";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20rnd_762x51_b_G3";
                count = 1;
            };
        };
    };
    class Weapon_HLC_Rifle_g3ka4_GL : Weapon_Base_F {
        dlc = "Niarms_G3";
        scope = 2;
        scopeCurator = 2;
        displayName = "G3KA4+M203";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "HLC_Rifle_g3ka4_GL";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20rnd_762x51_b_G3";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_hk53 : Weapon_Base_F {
        dlc = "Niarms_G3";
        scope = 2;
        scopeCurator = 2;
        displayName = "HK53";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_hk53";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR_HK33";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_G3A3 : Weapon_Base_F {
        dlc = "Niarms_G3";
        scope = 2;
        scopeCurator = 2;
        displayName = "G3A3";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_g3a3";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20rnd_762x51_b_G3";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_g3a3ris : Weapon_Base_F {
        dlc = "Niarms_G3";
        scope = 2;
        scopeCurator = 2;
        displayName = "G3A3 RIS";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_g3a3ris";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20rnd_762x51_b_G3";
                count = 1;
            };
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_20rnd_762x51_b_G3:30Rnd_556x45_Stanag {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (EPR)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (EPR) 20rnd 7.62mm";
        initspeed = 800;
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        mass = 13;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "7.62mm Ball";
    };
    class hlc_20rnd_762x51_Mk316_G3 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.316 Special Ball Long Range)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (Mk.316) 20rnd 7.62mm";
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        initspeed = 800;
        mass = 13;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "7.62mm Mk.316";
    };
    class hlc_20rnd_762x51_barrier_G3 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.319 Barrier-Blind)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (Mk.319) 20rnd 7.62mm";
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        initspeed = 800;
        mass = 13;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "7.62mm Mk.319";
    };
    class hlc_20rnd_762x51_T_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "B_762x51_Tracer_Green";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Tracer)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (Tracer) 20rnd 7.62mm";
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        initspeed = 800;
        mass = 13;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        scope = 2;
        tracersevery = 1;
        displaynameshort = "7.62mm Tracer";
    };
    class hlc_50rnd_762x51_M_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        count = 50;
        descriptionshort = "Caliber: 7.62x51mm NATO (Tracer)<br />Rounds: 50<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "X-91 Mag (Tracer) 50rnd 7.62mm";
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        initspeed = 800;
        mass = 32;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        scope = 2;
        tracersevery = 5;
        displaynameshort = "7.62mm Tracer";
    };
    class hlc_20rnd_762x51_S_G3 : hlc_20rnd_762x51_T_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_762x51_BTSub";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Boat-Tailed Subsonic)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (Subsonic) 20rnd 7.62mm";
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        initspeed = 325;
        mass = 13;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
        scope = 2;
        tracersevery = 5;
        displaynameshort = "7.62mm BTS";
    };

    class hlc_30rnd_556x45_EPR_HK33 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (EPR) 5.56mm";
        model = "hlc_wp_g3\mesh\magazine\magazine_hk33.p3d";
        initspeed = 750.12;
        mass = 10;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm EPR";
    };
    class hlc_30rnd_556x45_SOST_HK33 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (SOST) 5.56mm";
        model = "hlc_wp_g3\mesh\magazine\magazine_hk33.p3d";
        initspeed = 750.3664;
        mass = 10;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56 SOST";
    };
    class hlc_30rnd_556x45_b_HK33 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G3";
        author = "Toadie";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (Ball) 5.56mm";
        model = "hlc_wp_g3\mesh\magazine\magazine_hk33.p3d";
        initspeed = 750.2;
        mass = 10;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56 Ball";
    };
    class hlc_30rnd_556x45_t_HK33 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G3";
        author = "Toadie";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (Tracer) 5.56mm";
        model = "hlc_wp_g3\mesh\magazine\magazine_hk33.p3d";
        initspeed = 750.2;
        mass = 10;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
        displaynameshort = "5.56 Tracer";
    };
};

class CfgWeapons {

//muzzles

    class muzzle_snds_H;
    class hlc_muzzle_snds_g3 : muzzle_snds_H {
        author = "Pete, Acid_Snake, Toadie";
        displayName = "G3 Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_g3\mesh\SUP_308HK\hk308";
    };
    class hlc_muzzle_snds_HK33 : hlc_muzzle_snds_g3 {
        author = "Pete, Acid_Snake, Toadie";
        displayName = "HK33 Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_g3\mesh\SUP_556HK\hk308";
    };

//optics
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

    class InventoryOpticsItem_Base_F;
    class optic_dms;

    class HLC_Optic_ZFSG1 : optic_dms {
        dlc = "Niarms_G3";
        author = "PAC, Millenia, Toadie";
        descriptionshort = "Zeiss Divari Magnified Optic Sight<br />Magnification: 1.5-6x";
        displayname = "Zeiss Diavari";
        model = "\hlc_wp_G3\mesh\sg1_scope\scope.p3d";
        picture = "\hlc_wp_G3\tex\ui\gear_diavari_x_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 7;
            modelOptics = "\hlc_wp_G3\mesh\sg1_scope\zfsg1_reticle";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.04166667;
                    opticsZoomMax = 0.16666667;
                    opticsZoomInit = 0.16666667;
                    discreteDistance[] = {200,300,400,500,600};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye";
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron : Snip {
                    discretedistance[] = {100};
                    discretedistanceinitindex = 0;
                    memorypointcamera = "eye2";
                    opticsdisableperipherialvision = 0;
                    opticsdisplayname = "";
                    opticsflare = 0;
                    opticsid = 2;
                    opticszoominit = 0.75;
                    opticszoommax = 1.1;
                    opticszoommin = 0.375;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };

    class hlc_optic_accupoint_g3 : HLC_Optic_ZFSG1 {
        dlc = "Niarms_G3";
        author = "PAC, Millenia, Tenoyl, Blur, Toadie";
        descriptionshort = "Trijicon Acupoint TR20 Magnified Optic Sight<br />Magnification: 3-9x";
        displayname = "Accupoint TR20";
        model = "\hlc_wp_G3\mesh\accupoint\scope.p3d";
        picture = "\hlc_wp_G3\tex\ui\gear_accupoint_x_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_SNP;
            mass = 7;
            modelOptics = "\hlc_wp_G3\mesh\accupoint\accupoint_reticle";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.0625;
                    opticszoomMax = 0.11;
                    opticsZoomInit = 0.11;
                    discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "eye";
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron : Snip {
                    discretedistance[] = {100};
                    discretedistanceinitindex = 0;
                    memorypointcamera = "eye2";
                    opticsdisableperipherialvision = 0;
                    opticsdisplayname = "";
                    opticsflare = 0;
                    opticsid = 2;
                    opticszoominit = 0.75;
                    opticszoommax = 1.1;
                    opticszoommin = 0.375;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };

    class hlc_optic_PVS4G3 : optic_dms {
        dlc = "Niarms_G3";
        author = "Bohemia Interactive, Toadie";
        descriptionshort = "Night Vision Optic<br />Magnification: 4x";
        displayname = "AN/PVS4(G3-Mount)";
        picture = "\hlc_wp_g3\tex\ui\gear_PVS4_x_ca";
        model = "\hlc_wp_g3\mesh\PVS4\scope.p3d";
        class ItemInfo: InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 7;
            modelOptics = "\hlc_wp_g3\mesh\PVS4\NV_anpvs4_optic";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = {};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = {200,300,400,500,600};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_g3\mesh\PVS4\NV_anpvs4_optic"};
                    visionMode[] = {"NVG"};
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Snip2 {
                    useModelOptics = 1;
                    opticsPPEffects[] = {};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = { 200, 300, 400, 500, 600 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye";
                    modelOptics[] = { "\hlc_wp_g3\mesh\PVS4\pvs4-daysight" };
                    visionMode[] = { "NVG" };
                    opticsFlare = 1;
                    opticsid = 2;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 3;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.2;
                    opticsZoomMax = 0.5;
                    opticsZoomInit = 0.375;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };

//weapons

    class Rifle;

    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;


    class hlc_g3_base : Rifle_Base_F {
        changeFiremodeSound[] = { "\hlc_wp_g3\snd\SWITCH6", 1, 1, 20 };
        dlc = "Niarms_G3";
        recoil = "recoil_dmr_03";
        magazineReloadSwitchPhase = 0.5;
        inertia=0.51;
        deployedpivot = "deploypivot";
        hasBipod = false;
        scope = protected;
        magazines[] = { "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_mk316_G3","hlc_20rnd_762x51_barrier_G3", "hlc_20rnd_762x51_T_G3", "hlc_50rnd_762x51_M_G3", "hlc_20rnd_762x51_S_G3" };
        class Library {
            libTextDesc = "G3Base";
        };
        reloadAction = "HLC_GestureReloadAK";
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        class GunParticles: GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass =33;
            class CowsSlot : asdg_OpticRail {
                class compatibleItems {
                    HLC_Optic_ZFSG1 = 1;
                    hlc_optic_accupoint_g3 = 1;
                    hlc_optic_PVS4G3 = 1;
                };
            };
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_762 {};
        };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        distanceZoomMin = 300;
        distanceZoomMax = 300;

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
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3_Shot_SoundSet", "g3_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\g3a3_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\g3a3_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion= 0.000436332;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.1;
            maxRange = 400;
            maxRangeProbab = 0.05;
            aiRateOfFire = 5;
            airateoffiredistance = 400;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3_Shot_SoundSet", "g3_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\g3a3_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\g3a3_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion= 0.000436332;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            maxrange = 400;
            maxrangeprobab = 0.3;
            midrange = 200;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.5;
            aiRateOfFire = 1e-006;
        };
        class single_close_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 500;
            maxRangeProbab = 0.01;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };
        class single_medium_optics1 : single_close_optics1 {
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
        };
        // drysound[] = {"hlc_core\sound\empty_assaultrifles.wav", 1, 1, 10};
        // reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak74m_reload",0.74,1,30};
    };

    class hlc_rifle_g3sg1 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = true;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia=0.54;
        author = "PAC, Millenia, Toadie";
        AB_barrelTwist=12;
        AB_barrelLength=17.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 449.58;
        agm_bipod=1;
        cse_bipod = 1;
        bg_bipod = 1; 
        magazines[] = {
            "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_mk316_G3", "hlc_20rnd_762x51_barrier_G3", "hlc_20rnd_762x51_T_G3", "hlc_50rnd_762x51_M_G3", "hlc_20rnd_762x51_S_G3"
        };
        scope = public;
        
        displayName = "HK G3/SG1";
        reloadAction = "HLC_GestureReloadG3SG1";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm"};
        descriptionShort = "Designated Marsman Rifle<br/>Caliber: 7.62x51mm NATO";
        drysound[] = {"\hlc_core\sound\empty_sniperrifles", 1, 1, 10};
        model = "\hlc_wp_g3\mesh\g3sg1\g3sg1.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3sg1_x_ca";
        discretedistance[] = {100,200,300,400};
        discretedistanceinitindex = 2;
        reloadmagazinesound[] = {"\hlc_wp_g3\snd\g3sg1_reload", 1.0,1,25};
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        dexterity = 1.68;
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1", "fullauto_medium"};
        class GunParticles {
            class FirstEffect {
                effectName = "SniperCloud";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
        };
        class Library {
            libTextDesc = "H&K G3-SG1";
        };

        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3sg1_Shot_SoundSet", "g3sg1_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\g3sg1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\g3sg1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\g3sg1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3sg1_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\g3sg1_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\g3sg1_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            dispersion = 0.000334521;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.1;
            maxRange = 400;
            maxRangeProbab = 0.05;
            aiRateOfFire = 5;
            airateoffiredistance = 400;
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3sg1_Shot_SoundSet", "g3sg1_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\g3sg1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\g3sg1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\g3sg1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.5, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3sg1_indoor", 1.2, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.9952624, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\g3sg1_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\g3sg1_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            dispersion = 0.000334521;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
            aiRateOfFire = 5;
            airateoffiredistance = 400;
        };
        class single_close_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 500;
            maxRangeProbab = 0.01;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };
        class single_medium_optics1 : single_close_optics1 {
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 111;
        };
    };
    // PSG-1 Accuracy 2.327105669325714e-4
    class hlc_rifle_psg1 : hlc_g3_base {
        deployedpivot = "deploypivot";
        scope = public;
        hasBipod = false;
        inertia= 0.56;
        author = "Twinke Masta, Fallschrimjager, Thanez, Rosa Jonas, Toadie";
        AB_barrelTwist=12;
        AB_barrelLength=25.6;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 650.24;
        model = "\hlc_wp_g3\mesh\psg1\psg1.p3d";
        displayName = "HK PSG1";
        reloadAction = "HLC_GestureReloadPSG1";
        descriptionShort = "Precision Rifle<br/>Caliber: 7.62x51mm NATO";
        modeloptics[] = { "\hlc_wp_G3\mesh\psg1\psg1_reticle", "\hlc_wp_G3\mesh\psg1\PSG1_reticle_illum" };
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm"};
        picture = "\hlc_wp_g3\tex\ui\gear_psg1_x_ca";
        reloadmagazinesound[] = {"\hlc_wp_g3\snd\psg1_reload", 1.0,1,25};
        class OpticsModes {
            class Snip {
                //cameradir = "look";
                discretedistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
                discretedistanceinitindex = 2;
                discretefov[] = { 0.0415, 0.0415 };
                discreteInitIndex = 0;
                distancezoommax = 1500;
                distancezoommin = 300;
                memorypointcamera = "scope_eye";
                opticsdisableperipherialvision = 1;
                modelOptics[] = { "\hlc_wp_G3\mesh\psg1\psg1_reticle", "\hlc_wp_G3\mesh\psg1\PSG1_reticle_illum" };
                opticsflare = 1;
                opticsid = 1;
                opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                opticszoominit = 0.0415;
                opticszoommax = 0.0415;
                opticszoommin = 0.0415;
                usemodeloptics = 1;
                visionmode[] = {"Normal"};
                opticsDisplayName = "WFOV";
            };
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "psg1_Shot_SoundSet", "psg1_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\psg1_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\psg1_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\psg1_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\psg1_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\psg1_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\psg1_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            dispersion = 0.000218166;
            aiRateOfFire = 10;
            airateoffiredistance = 600;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
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
            class single_far_optics1: single_medium_optics1 {
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

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 144;
            class MuzzleSlot {};
            class CowsSlot {};
            class UnderBarrelSlot : asdg_UnderSlot{};
        };
    };

    class hlc_rifle_psg1A1 : hlc_g3_base {
        deployedpivot = "deploypivot";
        scope = public;
        hasBipod = false;
        inertia = 0.56;
        author = "Twinke Masta, Fallschrimjager, Thanez, Rosa Jonas, Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 25.6;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 650.24;
        model = "\hlc_wp_g3\mesh\psg1\psg1a1.p3d";
        displayName = "HK PSG1A1";
        reloadAction = "HLC_GestureReloadPSG1";
        descriptionShort = "Precision Rifle<br/>Caliber: 7.62x51mm NATO";
        modes[] = { "Single", "single_close_optics1", "single_medium_optics1", "single_far_optics1" };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm" };
        picture = "\hlc_wp_g3\tex\ui\gear_psg1a1_ca";
        discretedistance[] = { 100 };
        discretedistanceinitindex = 0;
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\psg1_reload", 1.0, 1, 25 };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "psg1_Shot_SoundSet", "psg1_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\psg1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\psg1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\psg1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\psg1_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G3A3_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G3A3_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
               class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = { "\hlc_wp_g3\snd\psg1_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\psg1_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };

            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            dispersion = 0.000218166;
            aiRateOfFire = 10;
            airateoffiredistance = 600;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
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

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 144;
            class MuzzleSlot {};
            class UnderBarrelSlot : asdg_UnderSlot{};
        };
    };
    class hlc_rifle_PSG1A1_RIS : hlc_g3_base {
        deployedpivot = "deploypivot";
        scope = public;
        hasBipod = false;
        inertia = 0.56;
        author = "Twinke Masta, Fallschrimjager, Thanez, Rosa Jonas, Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 25.6;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 650.24;
        model = "\hlc_wp_g3\mesh\psg1\psg1a1_RAS.p3d";
        displayName = "HK PSG1A1(RIS)";
        reloadAction = "HLC_GestureReloadPSG1";
        descriptionShort = "Precision Rifle<br/>Caliber: 7.62x51mm NATO";
        modes[] = { "Single", "single_close_optics1", "single_medium_optics1", "single_far_optics1" };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm" };
        picture = "\hlc_wp_g3\tex\ui\gear_psg1a1_ca";
        discretedistance[] = { 100 };
        discretedistanceinitindex = 0;
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\psg1_reload", 1.0, 1, 25 };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "psg1_Shot_SoundSet", "psg1_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\psg1_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\psg1_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\psg1_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\psg1_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType  { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G3A3_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G3A3_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = { "\hlc_wp_g3\snd\psg1_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\psg1_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };

            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            dispersion = 0.000218166;
            aiRateOfFire = 10;
            airateoffiredistance = 600;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
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

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 144;
            class MuzzleSlot {};
            class CowsSlot : asdg_OpticRail1913 {};
            class UnderBarrelSlot : asdg_UnderSlot{};
        };
    };
    class hlc_rifle_g3a3 : hlc_rifle_g3sg1 {
        author = "PAC, Millenia, Pete, Toadie";
        deployedpivot = "deploypivot";
        hasBipod = false;
        AB_barrelTwist=12;
        AB_barrelLength=17.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 449.58;
        picture = "\hlc_wp_g3\tex\ui\gear_g3a3_x_ca";
        scope = public;
        agm_bipod=0;
        cse_bipod = 0;
        bg_bipod = 0; 
        displayName = "HK G3A3";
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3_std.rtm"};
        model = "\hlc_wp_g3\mesh\g3a3\g3a3.p3d";
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1", "fullauto_medium"};
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3_Shot_SoundSet", "g3_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\g3a3_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\g3a3_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion= 0.000436332;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3_Shot_SoundSet", "g3_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\g3a3_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.5, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_indoor", 1.2, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[] {
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.9952624, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\g3a3_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\g3a3_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion= 0.000436332;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            aiRateOfFire = 1e-006;
        };
        class single_close_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 500;
            maxRangeProbab = 0.01;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };
        class single_medium_optics1 : single_close_optics1 {
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82;
        };
    };
    class hlc_rifle_g3a3ris : hlc_rifle_g3a3 {
        deployedpivot = "deploypivot";
        hasBipod = false;
        displayName = "HK G3A3 RIS";
        model = "\hlc_wp_g3\mesh\g3a3\g3a3_railed.p3d";
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 449.58;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913 {};
        };
    };
    class hlc_rifle_g3a3v : hlc_rifle_g3a3 {
        deployedpivot = "deploypivot";
        hasBipod = false;
        displayName = "HK G3A3 (Widegrip)";
        model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern.p3d";
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 449.58;
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm" };
        cameradir = "Look";
        picture = "\hlc_wp_g3\tex\ui\gear_g3a3v_ca";
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4" }; /// the angle of gun changes with zeroing
    };
    class hlc_rifle_g3ka4 :hlc_rifle_g3a3 {
        inertia=0.505;
        author = "PAC, Millenia, zulmargera87, Toadie";
        displayName = "HK G3KA4 RAS";
         model = "\hlc_wp_g3\mesh\g3_rails\g3ka4.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3ka4_x_ca";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3_std.rtm"};
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 314.96;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
            class CowsSlot: asdg_OpticRail1913 {};
            class PointerSlot: asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\g3ka4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\g3ka4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\g3ka4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\g3ka4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\g3ka4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion= 0.000436332;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\g3ka4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\g3ka4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\g3ka4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = {"\hlc_wp_g3\snd\g3ka4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\g3ka4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion= 0.000436332;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            aiRateOfFire = 1e-006;
        };
        class single_close_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 500;
            maxRangeProbab = 0.01;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };
        class single_medium_optics1 : single_close_optics1 {
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
        };
    };

    class HLC_Rifle_g3ka4_GL : hlc_rifle_g3a3ris {
        author = "PAC, Millenia, zulmargera87, Tigg, Toadie";
        model = "\hlc_wp_g3\mesh\g3_railsGL\g3kgl.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3ka4gl_x_ca";
            handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\g3k_gl_hands.rtm"};
        displayName = "HK G3KA4 RAS(GL)";
        muzzles[] = {"this", "hlc_M203_G3k"};
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 314.96;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
            class PointerSlot : asdg_FrontSideRail {};
        };
        class hlc_M203_G3k : UGL_F {
            cameradir = "GL_Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "GL_eye_50m", "GL_eye_100m", "GL_eye_150m", "GL_eye_200m", "GL_eye_250m", "GL_eye_300m", "GL_eye_350m", "GL_eye_400m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            drysound[] = {"A3\sounds_f\Weapons\other\sfx5", 1, 1, 400};
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = {"1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticszoommin = 0.375;
            reloadmagazinesound[] = {"A3\sounds_f\Weapons\grenades\ugl_reload", 1, 1, 20};
            reloadtime = 0.1; 
            reloadAction = "GestureReloadTrgUGL";
            sound[] = {"A3\sounds_f\Weapons\grenades\ugl_shot_1", 1, 1, 400};
            weaponinfotype = "RscWeaponZeroing";
        };

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G3A3_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G3A3_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000436332;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G3A3_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G3A3_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.097;
            begin1[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\g3ka4_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000436332;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            aiRateOfFire = 1e-006;
        };
        class single_close_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 500;
            maxRangeProbab = 0.01;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };
        class single_medium_optics1 : single_close_optics1 {
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
        };
    };
    class hlc_rifle_hk51 : hlc_rifle_g3sg1 {
        deployedpivot = "deploypivot";
        hasBipod = false;
        inertia=0.4;
        scope= public; // lets the game know this isn't an intermediary
        AB_barrelTwist=12;
        AB_barrelLength=8.31;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 211.074;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        //Self explanatory
        drysound[] = { "\hlc_core\sound\empty_sniperrifles", 1, 1, 10 };
        author = "PAC, Soul Slayer, HeNe, Millenia, Toadie";
         model = "\hlc_wp_g3\mesh\hene_hk51\hk53.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        displayName = "FR Ordnance MC51";
        reloadAction = "HLC_GestureReloadHK53";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\mc51_hands.rtm"};
        descriptionShort = "Compact Carbine<br/>Caliber:  5.56x45mm NATO";
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1", "fullauto_medium"};
        reloadmagazinesound[] = {"\hlc_wp_g3\snd\g41_reload", 1.0,1,25};
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk51_Shot_SoundSet", "hk51_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\hk51_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\hk51_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\hk51_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk51_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
                
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.085;
            begin1[] = {"\hlc_wp_g3\snd\hk51_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\hk51_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.0013;
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk51_Shot_SoundSet", "hk51_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\hk51_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\hk51_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\hk51_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\fal308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk51_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G3A3_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g3_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.085;
            begin1[] = {"\hlc_wp_g3\snd\hk51_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\hk51_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.0013;
            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            aiRateOfFire = 1e-006;
        };
        class single_close_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 500;
            maxRangeProbab = 0.01;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
        };
        class single_medium_optics1 : single_close_optics1 {
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredOpticType = 2;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 700;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.05;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 60;
        };
    };
    class hlc_rifle_hk53 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        maxZeroing = 400;
        inertia=0.4;
        author = "Soul Slayer,HeNe, Toadie";
        scope= public; // lets the game know this isn't an intermediary
        //Self explanatory
        AB_barrelTwist=7;
        AB_barrelLength=8.31;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 211.074;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        magazines[] = {
            "hlc_30rnd_556x45_b_hk33","hlc_30rnd_556x45_t_hk33","hlc_30rnd_556x45_epr_hk33","hlc_30rnd_556x45_sost_hk33"
        };
        discreteDistance[] = { 100, 200, 300, 400 };
        model = "\hlc_wp_g3\mesh\hene_hk53\hk53.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        displayName = "HK HK53";
        reloadAction = "HLC_GestureReloadHK53";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\mc51_hands.rtm"};
        drysound[] = { "\hlc_core\sound\empty_sniperrifles", 1, 1, 10 };
        descriptionShort = "Compact Carbine<br/>Caliber:  5.56x45mm NATO";
        modes[] = { "Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        reloadmagazinesound[] = {"\hlc_wp_g3\snd\g41_reload", 1.0,1,25};
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk53_Shot_SoundSet", "hk53_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G41_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G41_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_g3\snd\hk53_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\hk53_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.0011;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk53_Shot_SoundSet", "hk53_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G41_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G41_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_g3\snd\hk53_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\hk53_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.0011;
            recoil = "recoil_single_mk20";
            recoilprone = "recoil_single_prone_mk20";
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            aiRateOfFire = 1e-006;
        };
        class Burst : Mode_Burst {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                closure2[]={"\hlc_wp_g3\snd\g3_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk53_Shot_SoundSet", "hk53_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_g3\snd\hk53_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_g3\snd\G41_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_g3\snd\G41_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            burst = 3;
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_g3\snd\hk53_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_g3\snd\hk53_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_g3\snd\g3_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            dispersion = 0.0011;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
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
            mass = 55;
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
        };
    };
    class hlc_rifle_hk53RAS : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        maxZeroing = 500;
        inertia = 0.4;
        author = "Soul Slayer,HeNe, Toadie";
        scope = public; // lets the game know this isn't an intermediary
        //Self explanatory
        AB_barrelTwist = 7;
        AB_barrelLength = 8.31;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 211.074;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        magazines[] = {
            "hlc_30rnd_556x45_b_hk33", "hlc_30rnd_556x45_t_hk33", "hlc_30rnd_556x45_epr_hk33", "hlc_30rnd_556x45_sost_hk33"
        };
        discreteDistance[] = { 100, 200, 300, 400 };
        model = "\hlc_wp_g3\mesh\hene_hk53\hk53_rails.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        displayName = "HK HK53(RAS)";
        reloadAction = "HLC_GestureReloadHK53";
        drysound[] = { "\hlc_core\sound\empty_sniperrifles", 1, 1, 10 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\mc51_hands.rtm" };
        descriptionShort = "Compact Carbine<br/>Caliber:  5.56x45mm NATO";
        modes[] = { "Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\g41_reload", 1.0, 1, 25 };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk53_Shot_SoundSet", "hk53_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.0011;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk53_Shot_SoundSet", "hk53_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.0011;
            recoil = "recoil_single_mk20";
            recoilprone = "recoil_single_prone_mk20";
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            aiRateOfFire = 1e-006;
        };
        class Burst : Mode_Burst {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk53_Shot_SoundSet", "hk53_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            burst = 3;
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.0011;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
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
            mass = 55;
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
        };
    };
    class hlc_rifle_hk33a2 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        maxZeroing = 1000;
        inertia = 0.4;
        author = "Krycek,Soul Slayer,HeNe, Toadie";
        scope = public; // lets the game know this isn't an intermediary
        //Self explanatory
        AB_barrelTwist = 7;
        AB_barrelLength = 8.31;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 211.074;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        magazines[] = {
            "hlc_30rnd_556x45_b_hk33", "hlc_30rnd_556x45_t_hk33", "hlc_30rnd_556x45_epr_hk33", "hlc_30rnd_556x45_sost_hk33"
        };
        discreteDistance[] = { 100, 200, 300, 400 };
        cameradir = "Look";
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4" }; /// the angle of gun changes with zeroing
        model = "\hlc_wp_g3\mesh\hk33\hk33.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk33_ca";
        displayName = "HK HK33A2";
        reloadAction = "HLC_GestureReloadG3SG1";
        drysound[] = { "\hlc_core\sound\empty_sniperrifles", 1, 1, 10 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm" };
        descriptionShort = "Infantry Carbine<br/>Caliber:  5.56x45mm NATO";
        modes[] = { "Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\g41_reload", 1.0, 1, 25 };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk33_Shot_SoundSet", "hk33_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000436332;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk33_Shot_SoundSet", "hk33_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000436332;
            recoil = "recoil_single_mk20";
            recoilprone = "recoil_single_prone_mk20";
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            aiRateOfFire = 1e-006;
        };
        class Burst : Mode_Burst {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk33_Shot_SoundSet", "hk33_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            burst = 3;
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000436332;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
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
            mass = 80;
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
        };
    };
    class hlc_rifle_hk33a2RIS : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        maxZeroing = 1000;
        inertia = 0.4;
        author = "Krycek,Soul Slayer,HeNe, Toadie";
        scope = public; // lets the game know this isn't an intermediary
        //Self explanatory
        AB_barrelTwist = 7;
        AB_barrelLength = 8.31;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 211.074;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        magazines[] = {
            "hlc_30rnd_556x45_b_hk33", "hlc_30rnd_556x45_t_hk33", "hlc_30rnd_556x45_epr_hk33", "hlc_30rnd_556x45_sost_hk33"
        };
        discreteDistance[] = { 100, 200, 300, 400 };
        cameradir = "Look";
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4" }; /// the angle of gun changes with zeroing
        model = "\hlc_wp_g3\mesh\hk33\hk33_rails.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk33_ca";
        displayName = "HK HK33A2(RIS)";
        reloadAction = "HLC_GestureReloadG3SG1";
        drysound[] = { "\hlc_core\sound\empty_sniperrifles", 1, 1, 10 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm" };
        descriptionShort = "Infantry Carbine<br/>Caliber:  5.56x45mm NATO";
        modes[] = { "Single", "Burst", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\g41_reload", 1.0, 1, 25 };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk33_Shot_SoundSet", "hk33_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000436332;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
            minRange = 1;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.015;
            maxRange = 200;
            maxRangeProbab = 0.0005;
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk33_Shot_SoundSet", "hk33_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000436332;
            recoil = "recoil_single_mk20";
            recoilprone = "recoil_single_prone_mk20";
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            aiRateOfFire = 1e-006;
        };
        class Burst : Mode_Burst {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk33_Shot_SoundSet", "hk33_Tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_g3\snd\hk53_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_g3\snd\tails\ar556_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\hk53_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                begin2[] = { "\hlc_wp_g3\snd\G41_silenced", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g3\snd\tails\g41_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            burst = 3;
            reloadTime = 0.08;
            begin1[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            begin2[] = { "\hlc_wp_g3\snd\hk53_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            closure2[] = { "\hlc_wp_g3\snd\g3_first", 1.1622777, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            dispersion = 0.000436332;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_mk20";
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
            mass = 78;

            class MuzzleSlot : asdg_MuzzleSlot_556 {};
            class CowsSlot : asdg_OpticRail1913 {};
        };
    };
};
