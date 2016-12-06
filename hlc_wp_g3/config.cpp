#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_g3 {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Sounds_F_Mark","asdg_jointrails","hlcweapons_core"};
        units[] = { "HLC_G3_ammobox", "Weapon_hlc_rifle_psg1", "Weapon_hlc_rifle_g3sg1","Weapon_hlc_rifle_g3ka4","Weapon_hlc_rifle_hk51","Weapon_HLC_Rifle_g3ka4_GL","Weapon_hlc_rifle_hk53","Weapon_hlc_rifle_G3A3","Weapon_hlc_rifle_g3a3ris" };
        weapons[] = {"hlc_rifle_psg1","hlc_rifle_g3sg1","HLC_Optic_ZFSG1","hlc_optic_accupoint_g3","hlc_rifle_g3ka4", "hlc_rifle_hk51","HLC_Rifle_g3ka4_GL","hlc_rifle_hk53", "hlc_optic_PVS4G3"};
        magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_t_G3", "hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_t_HK33"};
        version="1.95";
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
class asdg_OpticRail1913_short;
class asdg_UnderSlot;

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_snds_g3 = 1;
    };
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot { // for 5.56x45 universal mount suppressors
    class compatibleItems {
        hlc_muzzle_snds_HK33 = 1;
    };
};

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
            __M_MAG(hlc_20rnd_762x51_b_G3,30);
            __M_MAG(hlc_20rnd_762x51_mk316_G3,30);
            __M_MAG(hlc_20rnd_762x51_barrier_G3,30);
            __M_MAG(hlc_20rnd_762x51_T_G3,30);
            __M_MAG(hlc_50rnd_762x51_M_G3,30);
            __M_MAG(hlc_20rnd_762x51_S_G3,30);
            __M_MAG(hlc_30rnd_556x45_EPR_HK33, 30);
            __M_MAG(hlc_30rnd_556x45_SOST_HK33,30);
            __M_MAG(hlc_30rnd_556x45_b_HK33,30);
            __M_MAG(hlc_30rnd_556x45_t_HK33,30);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_g3a3,7);
            __M_WEP(hlc_rifle_g3a3ris, 7);
            __M_WEP(hlc_rifle_g3a3v, 7);
            __M_WEP(hlc_rifle_g3a3vris, 7);
            __M_WEP(hlc_rifle_g3sg1,6);
            __M_WEP(hlc_rifle_g3sg1ris, 6);
            __M_WEP(hlc_rifle_psg1,3);
            __M_WEP(hlc_rifle_psg1a1, 3);
            __M_WEP(hlc_rifle_PSG1A1_RIS, 3);
            __M_WEP(hlc_rifle_g3ka4,12);
            __M_WEP(HLC_Rifle_g3ka4_GL,12);
            __M_WEP(hlc_rifle_hk51,12);
            __M_WEP(hlc_rifle_hk53, 7);
            __M_WEP(hlc_rifle_hk53RAS, 7);
            __M_WEP(hlc_rifle_hk33a2, 5);
            __M_WEP(hlc_rifle_hk33a2RIS, 5);
            __M_WEP(hlc_rifle_hk33a2RIS_GL, 5);
        };
        class TransportItems {
            __M_ITM(HLC_Optic_ZFSG1,10);
            __M_ITM(hlc_optic_accupoint_g3,10);
            __M_ITM(hlc_optic_PVS4G3,10);
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_ACO_grn,10);
        };
    };
    __WEAPONHOLDER(hlc_rifle_g3a3, hlc_20rnd_762x51_b_G3, G3A3, Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3a3ris, hlc_20rnd_762x51_b_G3, G3A3(RIS), Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3a3v, hlc_20rnd_762x51_b_G3, G3A3(Wide), Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3a3vris, hlc_20rnd_762x51_b_G3, G3A3(Wide/RIS), Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3ka4, hlc_20rnd_762x51_b_G3, G3KA4(RIS), Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(HLC_Rifle_g3ka4_GL, hlc_20rnd_762x51_b_G3, G3KA4(RIS/GL), Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk51, hlc_20rnd_762x51_b_G3, HK51, Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk53, hlc_20rnd_762x51_b_G3, HK53, Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk53RAS, hlc_20rnd_762x51_b_G3, HK53(RAS), Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk33a2, hlc_20rnd_762x51_b_G3, HK33A2, Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk33a2RIS, hlc_20rnd_762x51_b_G3, HK33A2(RIS), Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk33a2RIS_GL, hlc_20rnd_762x51_b_G3, HK33A2(RIS/GL), Niarms_G3, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3sg1, hlc_20rnd_762x51_Mk316_G3, G3SG1, Niarms_G3, Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_g3sg1ris, hlc_20rnd_762x51_Mk316_G3, G3SG1(RIS), Niarms_G3, Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_psg1, hlc_20rnd_762x51_Mk316_G3, PSG1, Niarms_G3, Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_psg1a1, hlc_20rnd_762x51_Mk316_G3, PSG1A1, Niarms_G3, Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_PSG1A1_RIS, hlc_20rnd_762x51_Mk316_G3, PSG1A1(RIS), Niarms_G3, Toadie,SniperRifles);
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
        mass = 16;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "7.62mm Ball";
    };
    class hlc_20rnd_762x51_Mk316_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.316 Special Ball Long Range)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (Mk.316) 20rnd 7.62mm";
        initspeed = 800;
        mass = 16;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        tracersevery = 0;
        displaynameshort = "7.62mm Mk.316";
    };
    class hlc_20rnd_762x51_barrier_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.319 Barrier-Blind)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (Mk.319) 20rnd 7.62mm";
        initspeed = 800;
        mass = 16;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        tracersevery = 0;
        displaynameshort = "7.62mm Mk.319";
    };
    class hlc_20rnd_762x51_T_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "B_762x51_Tracer_Green";
        descriptionshort = "Caliber: 7.62x51mm NATO (Tracer)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (Tracer) 20rnd 7.62mm";
        initspeed = 800;
        mass = 16;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 1;
        displaynameshort = "7.62mm Tracer";
    };
    class hlc_20rnd_762x51_MDim_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm NATO (EPR,IR-DIM Tracer)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (EPR,IR-DIM) 20rnd 7.62mm";
        initspeed = 800;
        mass = 16;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 4;
        displaynameshort = "7.62mm IR-DIM";
    };

    class hlc_50rnd_762x51_M_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        count = 50;
        descriptionshort = "Caliber: 7.62x51mm NATO (Tracer)<br />Rounds: 50<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "X-91 Mag (Tracer) 50rnd 7.62mm";
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        initspeed = 800;
        mass = 48;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        tracersevery = 5;
        displaynameshort = "7.62mm Tracer";
    };
    class hlc_50rnd_762x51_MDIM_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        ammo = "HLC_B_762x51_Tracer_Dim";
        author = "Toadie";
        count = 50;
        descriptionshort = "Caliber: 7.62x51mm NATO (Tracer)<br />Rounds: 50<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "X-91 Mag (EPR,IR-DIM) 50rnd 7.62mm";
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        initspeed = 800;
        mass = 48;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        scope = 2;
        tracersevery = 5;
        displaynameshort = "7.62mm Tracer";
    };
    class hlc_20rnd_762x51_IRDim_G3 : hlc_20rnd_762x51_MDim_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        descriptionshort = "Caliber: 7.62x51mm NATO (IR-DIM Tracer)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (IR-DIM) 20rnd 7.62mm";
        initspeed = 800;
        mass = 16;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 1;
        displaynameshort = "7.62mm IR-DIM";
    };
    class hlc_20rnd_762x51_S_G3 : hlc_20rnd_762x51_T_G3 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = "Caliber: 7.62x51mm NATO (Boat-Tailed Subsonic)<br />Rounds: 20<br />Used in: G3A3,G3SG1,PSG1";
        displayname = "G3 Mag (Subsonic) 20rnd 7.62mm";
        initspeed = 325;
        mass = 16;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
        tracersevery = 5;
        displaynameshort = "7.62mm BTS";
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
        displaynameshort = "5.56mm Ball";
    };
    class hlc_30rnd_556x45_t_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie";
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (Tracer) 5.56mm";
        initspeed = 750.2;
        mass = 10;
        lastroundstracer = 1;
        tracersevery = 1;
        displaynameshort = "5.56mm Tracer";
    };

    class hlc_30rnd_556x45_EPR_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_556NATO_EPR";
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (EPR) 5.56mm";
        initspeed = 750.12;
        mass = 10;
        lastroundstracer = 1;
        tracersevery = 0;
        displaynameshort = "5.56mm EPR";
    };
    class hlc_30rnd_556x45_SOST_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_556NATO_SOST";
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (SOST) 5.56mm";
        initspeed = 750.3664;
        mass = 10;
        lastroundstracer = 1;
        tracersevery = 0;
        displaynameshort = "5.56mm SOST";
    };
    class hlc_30rnd_556x45_tdim_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (IR-DIM) 5.56mm";
        initspeed = 750.2;
        mass = 10;
        lastroundstracer = 1;
        tracersevery = 1;
        displaynameshort = "5.56mm IR-DIM";
    };
    class hlc_30rnd_556x45_mdim_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: HK33,HK53";
        displayname = "HK33 Mag (EPR,IR-DIM) 5.56mm";
        initspeed = 750.2;
        mass = 10;
        lastroundstracer = 1;
        tracersevery = 3;
        displaynameshort = "5.56mm IR-DIM";
    };
};

class CfgWeapons {

//muzzles

    class muzzle_snds_H;
    class hlc_muzzle_snds_g3 : muzzle_snds_H {
        scope = 1;
        author = "Pete, Acid_Snake, Toadie";
        displayName = "G3 Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_g3\mesh\SUP_308HK\hk308";
    };
    class hlc_muzzle_snds_HK33 : hlc_muzzle_snds_g3 {
        scope = 1;
        author = "Pete, Acid_Snake, Toadie";
        displayName = "HK33 Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_g3\mesh\SUP_556HK\hk308";
    };

//optics

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
            mass = 17;
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
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    opticsPPEffects[] = {"",""};
                };
            };
        };
		inertia = 0.05;
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
            mass = 18;
            modelOptics = "\hlc_wp_G3\mesh\accupoint\accupoint_reticle";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.0277;
                    opticszoomMax = 0.0833;
                    opticsZoomInit = 0.0833;
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
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    opticsPPEffects[] = {"",""};
                };
            };
        };
		inertia = 0.04;
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
            mass = 12+36;
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
                class Snip2: Snip {
                    modelOptics[] = { "\hlc_wp_g3\mesh\PVS4\pvs4-daysight" };
                    opticsid = 2;
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 3;
                    opticsppeffects[] = {};
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
		inertia = 0.18;
    };

//weapons

    class Rifle;

    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;


    class hlc_g3_base : Rifle_Base_F {
        changeFiremodeSound[] = { "hlc_wp_g3\snd\SWITCH6", 1, 1, 8 };
        dlc = "Niarms_G3";
        recoil = "recoil_dmr_03";
        magazineReloadSwitchPhase = 0.5;
        deployedpivot = "deploypivot";
        hasBipod = false;
        scope = protected;
        magazines[] = { __762G3_MAGS };
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
        class hlc_M203_G3k : UGL_F {
            cameradir = "GL_Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "GL_eye_50m", "GL_eye_100m", "GL_eye_150m", "GL_eye_200m", "GL_eye_250m", "GL_eye_300m", "GL_eye_350m", "GL_eye_400m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            reloadmagazinesound[] = { "A3\sounds_f\Weapons\grenades\ugl_reload", 1, 1, 20 };
            reloadtime = 0.1;
            reloadAction = "GestureReloadTrgUGL";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
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

        modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics1"};

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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
            };
            reloadTime = 0.097;
            dispersion = 0.000334521;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
            };
            reloadTime = 0.097;
            dispersion = 0.000334521;

            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 2;
            minRange = 20;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
        };
        class single_medium_optics1 : Single {
            requiredoptictype = 1;
            showtoplayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 3;
            minRange = 20;
            minRangeProbab = 0.9;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 1200;
            aiRateOfFireDispersion = 4;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1600;
            maxRangeProbab = 0.1;
        };
        class fullauto_medium : FullAuto {
            burst = 3;
            showtoplayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.1;
        };
        drysound[] = {"\hlc_core\sound\empty_sniperrifles", 1, 1, 10};
        // reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak74m_reload",0.74,1,30};
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    };

    class hlc_rifle_g3sg1 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = true;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "PAC, Millenia, Toadie";
        AB_barrelTwist=12;
        AB_barrelLength=17.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 449.58;
        agm_bipod=1;
        cse_bipod = 1;
        bg_bipod = 1; 
        scope = public;
        
        displayName = "HK G3/SG1";
        reloadAction = "HLC_GestureReloadG3SG1";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm"};
        descriptionShort = "Designated Marsman Rifle<br/>Caliber: 7.62x51mm NATO";
        model = "\hlc_wp_g3\mesh\g3sg1\g3sg1.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3sg1_x_ca";
        hiddenSelections[] = { "Main", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\sg1\g3sg1_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga" };
        discretedistance[] = {100,200,300,400};
        discretedistanceinitindex = 2;
        reloadmagazinesound[] = {"\hlc_wp_g3\snd\g3sg1_reload", 1.0,1,25};
        __DEXTERITY(5.5, 0);
        inertia = 0.55;
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

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95;
        };
    };
    class hlc_rifle_g3sg1ris : hlc_rifle_g3sg1
    {
        displayName = "HK G3/SG1(RIS)";
        model = "\hlc_wp_g3\mesh\g3sg1\g3sg1_railed.p3d";
        hiddenSelections[] = { "Main", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\sg1\g3sg1_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 98;
            class CowsSlot : asdg_OpticRail1913 {};
        };
    };
    // PSG-1 Accuracy 2.327105669325714e-4
    class hlc_rifle_psg1 : hlc_g3_base {
        deployedpivot = "deploypivot";
        scope = public;
        hasBipod = false;
        maxZeroing = 1600;
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
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm"};
        picture = "\hlc_wp_g3\tex\ui\gear_psg1_x_ca";
        reloadmagazinesound[] = {"\hlc_wp_g3\snd\psg1_reload", 1.0,1,25};
        UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
        hiddenSelections[] = { "Main", "Furniture", "Scope", "Rail", "Stock1", "Stock2" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\psg\reciever_co.tga", "hlc_wp_g3\tex\psg\grip_co.tga", "hlc_wp_g3\tex\psg\scope_co.tga", "hlc_wp_g3\tex\twinkemil_mp5\rail_co.paa", "hlc_wp_g3\tex\thanez_sg550stock\sig550_s_cheekrest_co.tga", "hlc_wp_g3\tex\thanez_sg550stock\sig550_s_stock_co.tga" };
        __DEXTERITY(7.2, 0);
        inertia = 0.72;
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

        modes[] = {"Single", "single_medium_optics1"};

        class Single : Single {
            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "psg1_Shot_SoundSet", "psg1_Tail_SoundSet" };
            };
            dispersion = 0.000218166;
            minRange = 0;
        };
        class single_medium_optics1 : Single { // same 6x optic
            showtoplayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 3;
            minRange = 200;
            minRangeProbab = 0.9;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 1000;
            maxRangeProbab = 0.1;
        };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 151;
            class MuzzleSlot {};
            class CowsSlot {};
            class UnderBarrelSlot : asdg_UnderSlot{};
        };
    };

    class hlc_rifle_psg1A1 : hlc_rifle_psg1 {
        author = "Twinke Masta, Fallschrimjager, Thanez, Rosa Jonas, Toadie";
        model = "\hlc_wp_g3\mesh\psg1\psg1a1.p3d";
        displayName = "HK PSG1A1";
        picture = "\hlc_wp_g3\tex\ui\gear_psg1a1_ca";
        discretedistance[] = { 100 };
        discretedistanceinitindex = 0;
        __DESTERITY(6,0);
        class OpticsModes {
            class Snip {
                //cameradir = "look";
                discretedistance[] = { 100 };
                discretedistanceinitindex = 0;
                distancezoommax = 300;
                distancezoommin = 300;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                __OPTICSZOOM_1X;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                usemodeloptics = 0;
                opticsflare = 0;
                opticsid = 1;
                visionmode[] = { "Normal" };
                opticsDisplayName = "WFOV";
            };
        };
        modes[] = {"Single", "single_medium_optics1", "single_far_optics1"};

        class single_medium_optics1 : Single {
            requiredoptictype = 1;
            showtoplayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 3;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 1200;
            aiRateOfFireDispersion = 4;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1600;
            maxRangeProbab = 0.1;
        };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 126;
            class CowsSlot : asdg_OpticRail {
                class compatibleItems {
                    HLC_Optic_ZFSG1 = 1;
                    hlc_optic_accupoint_g3 = 1;
                    hlc_optic_PVS4G3 = 1;
                };
            };
        };
    };

    class hlc_rifle_PSG1A1_RIS : hlc_rifle_psg1A1 {
        author = "Twinke Masta, Fallschrimjager, Thanez, Rosa Jonas, Toadie";
        model = "\hlc_wp_g3\mesh\psg1\psg1a1_RAS.p3d";
        displayName = "HK PSG1A1(RIS)";
        picture = "\hlc_wp_g3\tex\ui\gear_psg1a1_ca";
        __DESTERITY(6.3, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 132;
            class CowsSlot : asdg_OpticRail1913_short {};
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
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.tga", "hlc_wp_g3\tex\sg1\g3sg2_co.tga", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.tga", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.tga",""};
        __DEXTERITY(4.1, 0);
        inertia = 0.41;
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3_Shot_SoundSet", "g3_Tail_SoundSet" };
            };
            dispersion = 0.000436332;
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3_Shot_SoundSet", "g3_Tail_SoundSet" };
            };
            dispersion = 0.000436332;
        };
        class single_medium_optics1 : Single {
            requiredoptictype = 1;
            showtoplayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 3;
            minRange = 20;
            minRangeProbab = 0.9;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 1200;
            aiRateOfFireDispersion = 4;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1200;
            maxRangeProbab = 0.1;
        };
        class fullauto_medium : FullAuto {
            burst = 3;
            showtoplayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.1;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 86;
        };
        inertia = 0.44;
    };
    class hlc_rifle_g3a3ris : hlc_rifle_g3a3 {
        displayName = "HK G3A3(RIS)";
        model = "\hlc_wp_g3\mesh\g3a3\g3a3_railed.p3d";
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.tga", "hlc_wp_g3\tex\sg1\g3sg2_co.tga", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.tga", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 91;
            class CowsSlot : asdg_OpticRail1913 {};
        };
    };
    class hlc_rifle_g3a3v : hlc_rifle_g3a3 {
        displayName = "HK G3A3(Widegrip)";
        model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm" };
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.tga", "hlc_wp_g3\tex\sg1\g3sg2_co.tga", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.tga", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga" };
        cameradir = "Look";
        picture = "\hlc_wp_g3\tex\ui\gear_g3a3v_ca";
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4" }; /// the angle of gun changes with zeroing
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 98;
        };
    };
    class hlc_rifle_g3a3vris : hlc_rifle_g3a3 {
        displayName = "HK G3A3(Widegrip/RIS)";
        model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern_railed.p3d";
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.tga", "hlc_wp_g3\tex\sg1\g3sg2_co.tga", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.tga", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105;
            class CowsSlot : asdg_OpticRail1913 {};
        };
    };
    class hlc_rifle_g3ka4: hlc_rifle_g3a3 {
        author = "PAC, Millenia, zulmargera87, Toadie";
        displayName = "HK G3KA4 RAS";
        model = "\hlc_wp_g3\mesh\g3_rails\g3ka4.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3ka4_x_ca";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3_std.rtm"};
        hiddenSelections[] = { "Main", "Rail", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\sg1\g3sg2_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga","hlc_wp_g3\tex\arby_mp5n\mp5_co.tga" };
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 314.96;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95;
            class CowsSlot: asdg_OpticRail1913 {};
            class PointerSlot: asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
        inertia = 0.41;

        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
            };
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
            };
        };
        class single_medium_optics1 : Single {
            requiredoptictype = 1;
            showtoplayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 3;
            minRange = 20;
            minRangeProbab = 0.9;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 700;
            maxRangeProbab = 0.2;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 1200;
            aiRateOfFireDispersion = 4;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1000;
            maxRangeProbab = 0.1;
        };
        class fullauto_medium : FullAuto {
            burst = 3;
            showtoplayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.1;
        };
    };

    class HLC_Rifle_g3ka4_GL : hlc_rifle_g3ka4 {
        author = "PAC, Millenia, zulmargera87, Tigg, Toadie";
        model = "\hlc_wp_g3\mesh\g3_railsGL\g3kgl.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3ka4gl_x_ca";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\g3k_gl_hands.rtm"};
        displayName = "HK G3KA4 RAS(GL)";
        muzzles[] = {"this", "hlc_M203_G3k"};
        hiddenSelections[] = { "Main", "Rail", "Stock", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\sg1\g3sg2_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga", "hlc_wp_g3\tex\arby_mp5n\mp5_co.tga","hlc_wp_g3\tex\tigg_m203\m203_co.tga" };
        __DEXTERITY(4.5 + 1.36, 0);
        inertia= 0.58
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 123;
            class UnderBarrelSlot {};
        };


    };

    class hlc_rifle_hk51 : hlc_rifle_g3sg1 {
        deployedpivot = "deploypivot";
        hasBipod = false;
        scope= public; // lets the game know this isn't an intermediary
        AB_barrelTwist=12;
        AB_barrelLength=8.31;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 211.074;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        //Self explanatory
        author = "PAC, Soul Slayer, HeNe, Millenia, Toadie";
        model = "\hlc_wp_g3\mesh\hene_hk51\hk53.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        displayName = "FR Ordnance MC51";
        reloadAction = "HLC_GestureReloadHK53";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\mc51_hands.rtm"};
        descriptionShort = "Compact Carbine<br/>Caliber:  7.62x51mm NATO";
        hiddenSelections[] = { "Lower", "Upper", "Furniture", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\sg1\g3sg2_co.tga","hlc_wp_g3\tex\hk53\upper_co.tga","hlc_wp_g3\tex\hk53\lower_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga" };
        reloadmagazinesound[] = {"\hlc_wp_g3\snd\g41_reload", 1.0,1,25};
        inertia = 0.36;
        __DEXTERITY(3.66, 0);
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk51_Shot_SoundSet", "hk51_Tail_SoundSet" };
            };
            reloadTime = 0.085;
            dispersion = 0.0013;
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk51_Shot_SoundSet", "hk51_Tail_SoundSet" };
            };
            reloadTime = 0.085;
            dispersion = 0.0013;
        };
        class single_medium_optics1 : Single {
            requiredoptictype = 1;
            showtoplayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 3;
            minRange = 20;
            minRangeProbab = 0.9;
            midRange = 300;
            midRangeProbab = 0.8;
            maxRange = 700;
            maxRangeProbab = 0.2;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
        };
        class fullauto_medium : FullAuto {
            burst = 3;
            showtoplayer = 0;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 76;
        };
        
    };

    class hlc_rifle_hk53 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        maxZeroing = 400;
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
            "hlc_30rnd_556x45_b_hk33", "hlc_30rnd_556x45_t_hk33", "hlc_30rnd_556x45_epr_hk33", "hlc_30rnd_556x45_sost_hk33", "hlc_30rnd_556x45_tdim_HK33", "hlc_30rnd_556x45_mdim_HK33"
        };
        discreteDistance[] = { 100, 200, 300, 400 };
        model = "\hlc_wp_g3\mesh\hene_hk53\hk53.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        hiddenSelections[] = { "Lower", "Upper", "Grip", "Grip1", "Panels", "Rail","Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\hk53\lower_co.tga", "hlc_wp_g3\tex\hk53\upper_co.tga", "hlc_wp_g3\tex\rails_co.paa", "hlc_wp_g3\tex\tigg_m203\fore_co.tga", "hlc_wp_g3\tex\tigg_m203\rails_co.tga","hlc_wp_g3\tex\twinkemil_mp5\rail_co.paa" };
        displayName = "HK HK53";
        reloadAction = "HLC_GestureReloadHK53";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\mc51_hands.rtm"};
        descriptionShort = "Compact Carbine<br/>Caliber:  5.56x45mm NATO";
        reloadmagazinesound[] = {"\hlc_wp_g3\snd\g41_reload", 1.0,1,25};
        inertia = 0.31;
        __DEXTERITY(3.05, 0);
        modes[] = { "Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2" };

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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.0011;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.0011;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 400;
            maxRangeProbab = 0.1;
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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.0011;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 200;
            midRangeProbab = 0.6;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61;
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
        };
        
    };

    class hlc_rifle_hk53RAS : hlc_rifle_hk53 {
        author = "Soul Slayer,HeNe, Toadie";
        scope = public; // lets the game know this isn't an intermediary
        discreteDistance[] = { 100, 200, 300, 400 };
        model = "\hlc_wp_g3\mesh\hene_hk53\hk53_rails.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        displayName = "HK HK53(RAS)";
        hiddenSelections[] = { "Lower", "Upper", "Grip", "Grip1", "Panels", "Rail", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\hk53\lower_co.tga", "hlc_wp_g3\tex\hk53\upper_co.tga", "hlc_wp_g3\tex\rails_co.paa", "hlc_wp_g3\tex\tigg_m203\fore_co.tga", "hlc_wp_g3\tex\tigg_m203\rails_co.tga", "hlc_wp_g3\tex\twinkemil_mp5\rail_co.paa" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 66;
            class CowsSlot : asdg_OpticRail1913_short {};
            class PointerSlot : asdg_FrontSideRail {};
        };
    };

    class hlc_rifle_hk33a2 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_trg20";
        maxZeroing = 1000;
        author = "Krycek,Soul Slayer,HeNe, Toadie";
        scope = public; // lets the game know this isn't an intermediary
        //Self explanatory
        AB_barrelTwist = 7;
        AB_barrelLength = 15.4;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 390;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        magazines[] = {
            "hlc_30rnd_556x45_b_hk33", "hlc_30rnd_556x45_t_hk33", "hlc_30rnd_556x45_epr_hk33", "hlc_30rnd_556x45_sost_hk33", "hlc_30rnd_556x45_tdim_HK33", "hlc_30rnd_556x45_mdim_HK33"
        };
        discreteDistance[] = { 100, 200, 300, 400 };
        //cameradir = "Look";
        //discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4" }; /// the angle of gun changes with zeroing
        model = "\hlc_wp_g3\mesh\hk33\hk33.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk33_ca";
        displayName = "HK HK33A2";
        reloadAction = "HLC_GestureReloadG3SG1";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm" };
        descriptionShort = "Infantry Carbine<br/>Caliber:  5.56x45mm NATO";
        hiddenSelections[] = { "Main","FCG", "Rail", "Stock","Magazine", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_2_co.tga","hlc_wp_g3\tex\hk53\lower_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga", "hlc_wp_g3\tex\sg1\g3sg3_co.tga","hlc_wp_g3\tex\hk53\mag_co.tga" ,"hlc_wp_g3\tex\tigg_m203\m203_co.tga" };
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\g41_reload", 1.0, 1, 25 };
        inertia = 0.36;
        __DEXTERITY(3.65, 0);
        modes[] = { "Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2" };

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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
            };
            __ROF(750);
            dispersion = 0.000436332;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
            };
            __ROF(750);
            dispersion = 0.000436332;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
            };
            __ROF(750);
            dispersion = 0.000436332;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };

        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 450;
            aiRateOfFireDispersion = 3;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.2;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            aiRateOfFireDispersion = 4;
            minRange = 30;
            minRangeProbab = 0.8;
            midRange = 300;
            midRangeProbab = 0.6;
            maxRange = 900;
            maxRangeProbab = 0.2;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 77;
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
        };
    };

    class hlc_rifle_hk33a2RIS : hlc_rifle_hk33a2 {
        author = "Krycek,Soul Slayer,HeNe, Toadie";
        model = "\hlc_wp_g3\mesh\hk33\hk33_rails.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk33rail_ca";
        displayName = "HK HK33A2(RIS)";
        hiddenSelections[] = { "Main", "FCG", "Rail", "Stock", "Magazine", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_2_co.tga", "hlc_wp_g3\tex\hk53\lower_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga", "hlc_wp_g3\tex\sg1\g3sg3_co.tga", "hlc_wp_g3\tex\hk53\mag_co.tga", "hlc_wp_g3\tex\tigg_m203\m203_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 85;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
    };
    class hlc_rifle_hk33a2RIS_GL : hlc_rifle_hk33a2RIS
    {
        author = "Krycek,Soul Slayer,HeNe, Toadie";
        model = "\hlc_wp_g3\mesh\hk33\hk33_rails_GL.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk33gl_ca";
        displayName = "HK HK33A2(RIS/GL)";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\g3k_gl_hands.rtm" };
        muzzles[] = { "this", "hlc_M203_G3k" };
        inertia = 0.5;
        __DEXTERITY(3.65 + 0.4 + 1.36, 0);
        hiddenSelections[] = { "Main", "FCG", "Rail", "Stock", "Magazine", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_2_co.tga", "hlc_wp_g3\tex\hk53\lower_co.tga", "hlc_wp_g3\tex\zulmarg_tech\rail_co.tga", "hlc_wp_g3\tex\sg1\g3sg3_co.tga", "hlc_wp_g3\tex\hk53\mag_co.tga", "hlc_wp_g3\tex\tigg_m203\m203_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 156;
            class UnderBarrelSlot {};
        };
    };

};
