#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_g3 {
        requiredaddons[] = { "hlcweapons_core" };
        units[] = { "HLC_G3_ammobox", "Weapon_hlc_rifle_psg1", "Weapon_hlc_rifle_g3sg1", "Weapon_hlc_rifle_g3ka4", "Weapon_hlc_rifle_hk51", "Weapon_HLC_Rifle_g3ka4_GL", "Weapon_hlc_rifle_hk53", "Weapon_hlc_rifle_G3A3", "Weapon_hlc_rifle_g3a3ris" };
        weapons[] = { "hlc_rifle_psg1", "hlc_rifle_g3sg1", "HLC_Optic_ZFSG1", "hlc_optic_accupoint_g3", "hlc_rifle_g3ka4", "hlc_rifle_hk51", "HLC_Rifle_g3ka4_GL", "hlc_rifle_hk53", "hlc_optic_PVS4G3" };
        magazines[] = { "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_t_G3", "hlc_30rnd_556x45_EPR_HK33", "hlc_30rnd_556x45_SOST_HK33", "hlc_30rnd_556x45_b_HK33", "hlc_30rnd_556x45_t_HK33" };
        version = "2.15";
        author = "toadie";
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
        HLC_GestureReloadHK33 = "HLC_GestureReloadHK33";
    };

    class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;

        class NoActions : ManActions {
            HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1", "Gesture" };
            HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53", "Gesture" };
            HLC_GestureReloadHK33[] = { "HLC_GestureReloadHK33", "Gesture" };

        };
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1_Prone", "Gesture" };
            HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53_Prone", "Gesture" };
            HLC_GestureReloadHK33[] = { "HLC_GestureReloadHK33_Prone", "Gesture" };
        };

        /*
                class RifleKneelActions : RifleBaseStandActions {
                HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
                };
                */

        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1_Context", "Gesture" };
            HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53_Context", "Gesture" };
            HLC_GestureReloadHK33[] = { "HLC_GestureReloadHK33_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1_Context", "Gesture" };
            HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53_Context", "Gesture" };
            HLC_GestureReloadHK33[] = { "HLC_GestureReloadHK33_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadPSG1[] = { "HLC_GestureReloadPSG1", "Gesture" };
                HLC_GestureReloadHK53[] = { "HLC_GestureReloadHK53", "Gesture" };
                HLC_GestureReloadHK33[] = { "HLC_GestureReloadHK33", "Gesture" };
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
        class HLC_GestureReloadHK33 : Default {
            file = "hlc_wp_g3\gesture\newgesture\hk33_reload_Standing.rtm";
            speed = -5.77;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.93, 0, 0.97, 1 };
        };
        class HLC_GestureReloadHK33_Prone : Default {
            file = "hlc_wp_g3\gesture\newgesture\hk33_reload_prone.rtm";
            speed = -5.77;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.93, 0, 0.97, 1 };
        };
        class HLC_GestureReloadHK33_Context : HLC_GestureReloadHK33 {
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
class nia_rifle_bipodsgrips_slot;
class nia_rifle_grips_slot;
class nia_charms_slot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot { // for 5.56x45 universal mount suppressors
    class compatibleItems {};
};

class CfgVehicles {
    class B_supplyCrate_F;
    class Weapon_Base_F;

    class HLC_G3_ammobox : B_supplyCrate_F {
        dlc = "Niarms_G3";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC G3 Supply Box";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_20rnd_762x51_b_G3, 30);
            __M_MAG(hlc_20rnd_762x51_mk316_G3, 30);
            __M_MAG(hlc_20rnd_762x51_barrier_G3, 30);
            __M_MAG(hlc_20rnd_762x51_T_G3, 30);
            __M_MAG(hlc_50rnd_762x51_M_G3, 30);
            __M_MAG(hlc_20rnd_762x51_S_G3, 30);
            __M_MAG(hlc_30rnd_556x45_EPR_HK33, 30);
            __M_MAG(hlc_30rnd_556x45_SOST_HK33, 30);
            __M_MAG(hlc_30rnd_556x45_b_HK33, 30);
            __M_MAG(hlc_30rnd_556x45_t_HK33, 30);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_g3a3, 7);
            __M_WEP(hlc_rifle_g3a3ris, 7);
            __M_WEP(hlc_rifle_g3a3v, 7);
            __M_WEP(hlc_rifle_g3a3vris, 7);
            __M_WEP(hlc_rifle_g3sg1, 6);
            __M_WEP(hlc_rifle_g3sg1ris, 6);
            __M_WEP(hlc_rifle_psg1, 3);
            __M_WEP(hlc_rifle_psg1a1, 3);
            __M_WEP(hlc_rifle_PSG1A1_RIS, 3);
            __M_WEP(hlc_rifle_g3ka4, 12);
            __M_WEP(HLC_Rifle_g3ka4_GL, 12);
            __M_WEP(hlc_rifle_hk51, 12);
            __M_WEP(hlc_rifle_hk53, 7);
            __M_WEP(hlc_rifle_hk53RAS, 7);
            __M_WEP(hlc_rifle_hk33a2, 5);
            __M_WEP(hlc_rifle_hk33a2RIS, 5);
            __M_WEP(hlc_rifle_hk33a2RIS_GL, 5);
        };
        class TransportItems {
            __M_ITM(HLC_Optic_ZFSG1, 10);
            __M_ITM(hlc_optic_accupoint_g3, 10);
            __M_ITM(hlc_optic_PVS4G3, 10);
            __M_ITM(hlc_optic_STANAGZF2D_G3, 10);
            __M_ITM(hlc_optic_STANAGZF_G3, 10);
            __M_ITM(hlc_optic_ZF95_g3, 10);
            __M_ITM(hlc_optic_LeupoldM3A_G3, 10);
            __M_ITM(optic_Holosight, 10);
            __M_ITM(optic_hamr, 10);
            __M_ITM(optic_rco, 10);
            __M_ITM(optic_ACO_grn, 10);
        };
    };
    __WEAPONHOLDER(hlc_rifle_g3a3, hlc_20rnd_762x51_b_G3, HK G3A3, Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3a3ris, hlc_20rnd_762x51_b_G3, HK G3A3(RIS), Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3a3v, hlc_20rnd_762x51_b_G3, HK G3A3(Widegrip), Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3a3vris, hlc_20rnd_762x51_b_G3, HK G3A3(Widegrip / RIS), Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3ka4, hlc_20rnd_762x51_b_G3, HK G3KA4 RAS, Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(HLC_Rifle_g3ka4_GL, hlc_20rnd_762x51_b_G3, HK G3KA4 RAS(GL), Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk51, hlc_20rnd_762x51_b_G3, FR Ordnance MC51, Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk53, hlc_30rnd_556x45_b_hk33, HK HK53, Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk53RAS, hlc_30rnd_556x45_b_hk33, HK HK53(RAS), Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk33a2, hlc_30rnd_556x45_b_hk33, HK HK33A2, Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk33a2RIS, hlc_30rnd_556x45_b_hk33, HK HK33A2(RIS), Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_hk33a2RIS_GL, hlc_30rnd_556x45_b_hk33, HK HK33A2(RIS / GL), Niarms_g3, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g3sg1, hlc_20rnd_762x51_Mk316_G3, G3SG1, Niarms_G3, Toadie, SniperRifles);
    __WEAPONHOLDER(hlc_rifle_g3sg1ris, hlc_20rnd_762x51_Mk316_G3, G3SG1(RIS), Niarms_G3, Toadie, SniperRifles);
    __WEAPONHOLDER(hlc_rifle_psg1, hlc_20rnd_762x51_Mk316_G3, PSG1, Niarms_G3, Toadie, SniperRifles);
    __WEAPONHOLDER(hlc_rifle_psg1a1, hlc_20rnd_762x51_Mk316_G3, PSG1A1, Niarms_G3, Toadie, SniperRifles);
    __WEAPONHOLDER(hlc_rifle_PSG1A1_RIS, hlc_20rnd_762x51_Mk316_G3, PSG1A1(RIS), Niarms_G3, Toadie, SniperRifles);
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_20rnd_762x51_b_G3 :30Rnd_556x45_Stanag{
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_B_fal;
        displayname = $STR_NIA_20rnd_762x51_b_G3;
        initspeed = 873;
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        modelSpecial = hlc_wp_g3\mesh\magazine\proxy\20rnd_762NATO_G3;
        modelSpecialIsProxy = 1;
        mass = 16.9;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_EPR;
    };
    class hlc_20rnd_762x51_Mk316_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_MK316_20in";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_sblr_fal;
        displayname = $STR_NIA_20rnd_762x51_Mk316_G3;
        initspeed = 731.52;
        mass = 18.9;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_SBLR;
    };
    class hlc_20rnd_762x51_barrier_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_Barrier";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_sost_fal;
        displayname = $STR_NIA_20rnd_762x51_SOST_G3;
        initspeed = 873;
        mass = 17.9;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_SOST;
    };
    class hlc_20rnd_762x51_T_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "B_762x51_Tracer_Green";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_T_fal;
        displayname = $STR_NIA_20rnd_762x51_Tracer_G3;
        initspeed = 873;
        mass = 16.9;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 1;
        displaynameshort = $STR_NIA_762NATO_Tracer;
    };
    class hlc_20rnd_762x51_MDim_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_Mdim_fal;
        displayname = $STR_NIA_20rnd_762x51_MDim_G3;
        initspeed = 873;
        mass = 16.9;
        lastroundstracer = 2;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_MDim;
    };

    class hlc_20rnd_762x51_IRDim_G3 : hlc_20rnd_762x51_MDim_G3 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_Tdim_fal;
        displayname = $STR_NIA_20rnd_762x51_IRDIM_G3;
        initspeed = 873;
        mass = 16.9;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 1;
        displaynameshort = $STR_NIA_762NATO_IRDIM;
    };
    class hlc_20rnd_762x51_S_G3 : hlc_20rnd_762x51_T_G3 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_s_fal;
        displayname = $STR_NIA_20rnd_762x51_Subsonic_G3;
        initspeed = 325;
        mass = 15.9;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
        tracersevery = 5;
        displaynameshort = $STR_NIA_762NATO_Subsonic;
    };
    class hlc_50Rnd_762x51_B_G3 : 30Rnd_556x45_Stanag
    {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        count = 50;
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_B_FAL;
        displayname = $STR_NIA_50Rnd_762x51_B_G3;
        initspeed = 873;
        mass = 49.47;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        modelSpecial = hlc_wp_g3\mesh\magazine\proxy\50rnd_762NATO_X91;
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_EPR;
    };
    class hlc_50Rnd_762x51_T_G3 : hlc_50Rnd_762x51_B_G3 {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_tracer";
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_T_FAL;
        displayname = $STR_NIA_50Rnd_762x51_T_G3;
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 16.7;
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        displaynameshort = $STR_NIA_762NATO_Tracer;
    };
    class hlc_50Rnd_762x51_TDim_G3 : hlc_50Rnd_762x51_B_G3 {
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_Tdim_FAL;
        displayname = $STR_NIA_50Rnd_762x51_Tdim_G3;
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 16.7;
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        displaynameshort = $STR_NIA_762NATO_IRDIM;
    };

    class hlc_50rnd_762x51_M_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        count = 50;
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_M_FAL;
        displayname = $STR_NIA_50rnd_762x51_M_G3;
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        modelSpecial = hlc_wp_g3\mesh\magazine\proxy\50rnd_762NATO_X91;
        modelSpecialIsProxy = 1;
        initspeed = 873;
        mass = 49.47;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        tracersevery = 5;
        displaynameshort = $STR_NIA_762NATO_M;
    };
    class hlc_50rnd_762x51_MDIM_G3 : hlc_20rnd_762x51_b_G3 {
        dlc = "Niarms_G3";
        ammo = "HLC_B_762x51_Tracer_Dim";
        author = "Toadie, Spartan0536";
        count = 50;
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_Mdim_FAL;
        displayname = $STR_NIA_50rnd_762x51_MDIM_G3;
        model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
        modelSpecial = hlc_wp_g3\mesh\magazine\proxy\50rnd_762NATO_X91;
        modelSpecialIsProxy = 1;
        initspeed = 873;
        mass = 49.47;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        scope = 2;
        tracersevery = 5;
        displaynameshort = $STR_NIA_762NATO_MDim;
    };



    class hlc_30rnd_556x45_b_HK33 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G3";
        author = "Toadie";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_fmj;
        displayname = $STR_NIA_30rnd_556x45_FMJ_HK33;
        model = "hlc_wp_g3\mesh\magazine\magazine_hk33.p3d";
        modelSpecial = hlc_wp_g3\mesh\magazine\proxy\30rnd_556NATO_HK33;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
        initspeed = 954.8;
        mass = 12.5;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_FMJ;
        picture = "hlc_wp_g3\tex\ui\M_HK33_b_ca.paa";
    };
    class hlc_30rnd_556x45_t_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
        displayname = $STR_NIA_30Rnd_556x45_T_HK33;
        initspeed = 954.8;
        mass = 13.5;
        lastroundstracer = 1;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_Tracer;
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        picture = "hlc_wp_g3\tex\ui\m_hk33_tracers_ca.paa";
    };

    class hlc_30rnd_556x45_EPR_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_EPR";
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displayname = $STR_NIA_30rnd_556x45_EPR_HK33;
        initspeed = 954.8;
        mass = 13.5;
        lastroundstracer = 1;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_EPR;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_greentip_co.paa" };
        picture = "hlc_wp_g3\tex\ui\m_hk33_epr_ca.paa";
    };
    class hlc_30rnd_556x45_SOST_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_SOST";
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
        displayname = $STR_NIA_30rnd_556x45_SOST_HK33;
        initspeed = 934.4;
        mass = 14.5;
        lastroundstracer = 1;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SOST;
        picture = "hlc_wp_g3\tex\ui\m_hk33_sost_ca.paa";
    };
    class hlc_30rnd_556x45_SPR_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_SPR";
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
        displayname = $STR_NIA_30rnd_556x45_SPR_HK33;
        initspeed = 848.7;
        mass = 15.5;
        lastroundstracer = 1;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SPR;
        picture = "hlc_wp_g3\tex\ui\m_hk33_spr_ca.paa";
    };
    class hlc_30rnd_556x45_M_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
        displayname = $STR_NIA_30Rnd_556x45_M_HK33;
        initspeed = 848.7;
        mass = 15.5;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        picture = "hlc_wp_g3\tex\ui\m_hk33_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_tdim_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
        displayname = $STR_NIA_30rnd_556x45_TDim_HK33;
        initspeed = 954.8;
        mass = 13.5;
        lastroundstracer = 1;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_IRDIM;
        picture = "hlc_wp_g3\tex\ui\m_hk33_m_ca.paa";
    };
    class hlc_30rnd_556x45_mdim_HK33 : hlc_30rnd_556x45_b_HK33 {
        dlc = "Niarms_G3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
        displayname = $STR_NIA_30rnd_556x45_MDim_HK33;
        initspeed = 954.8;
        mass = 13.5;
        lastroundstracer = 1;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_MDIM;
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        picture = "hlc_wp_g3\tex\ui\m_hk33_m_ca.paa";
    };
};
class CfgMagazineWells {
    class CBA_762x51_G3 {
        NIA_mags[] = { __762G3_MAGS };
    };
    class CBA_556x45_HK33 {
        NIA_mags[] = { __556HK33_MAGS };
    };
};
class CfgWeapons {

    //muzzles
    /*
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
    };*/

    //optics

    class InventoryOpticsItem_Base_F;
    class optic_dms;

    class HLC_Optic_ZFSG1 : optic_dms {
        dlc = "Niarms_G3";
        author = "PAC, Millenia, Toadie";
        descriptionshort = $STR_NIA_DiavariDA_DESC;
        displayname = $STR_NIA_optic_DiavariDA;
        model = "\hlc_wp_G3\mesh\sg1_scope\scope.p3d";
        picture = "\hlc_wp_G3\tex\ui\gear_diavari_x_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 20.9;
            modelOptics = "\hlc_wp_G3\mesh\sg1_scope\zfsg1_reticle";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    opticsZoomMin = 0.249 / 6;
                    opticsZoomMax = 0.249 / 1.5;
                    opticsZoomInit = 0.249 / 1.5;
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
                    discretefov[] = { 0.249 / 1.5, 0.249 / 6 };
                    modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\DiavariDA_1,5x", "hlc_core\mesh\accessories\sights\reticles\DiavariDA_6x" };
                    discreteDistanceInitIndex = 2;
                    discreteInitIndex = 0;
                    distanceZoomMin = 300;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye";
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron {
                    distancezoommax = 100;
                    distancezoommin = 100;
                    discretedistance[] = { 100 };
                    discretedistanceinitindex = 0;
                    memorypointcamera = "eye2";
                    opticsdisableperipherialvision = 0;
                    opticsdisplayname = "";
                    opticsflare = 0;
                    opticsid = 2;
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    opticsPPEffects[] = { "", "" };
                };
            };
        };
        inertia = 0.09;
    };

    class hlc_optic_accupoint_g3 : HLC_Optic_ZFSG1 {
        dlc = "Niarms_G3";
        author = "Krycek, Tenoyl, Blur, Toadie";
        descriptionshort = $STR_NIA_TR20_DESC;
        displayname = $STR_NIA_optic_accupoint;
        model = "\hlc_wp_G3\mesh\accupoint\scope.p3d";
        picture = "\hlc_wp_G3\tex\ui\gear_accupoint_x_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_SNP;
            mass = 17.92;
            modelOptics = "\hlc_wp_G3\mesh\accupoint\accupoint_reticle";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    opticsZoomMin = 0.0277;
                    opticszoomMax = 0.0833;
                    opticsZoomInit = 0.0833;
                    discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "eye";
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron {
                    distancezoommax = 100;
                    distancezoommin = 100;
                    discretedistance[] = { 100 };
                    discretedistanceinitindex = 0;
                    memorypointcamera = "eye2";
                    opticsdisableperipherialvision = 0;
                    opticsdisplayname = "";
                    opticsflare = 0;
                    opticsid = 2;
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    opticsPPEffects[] = { "", "" };
                };
            };
        };
        inertia = 0.04;
    };
    class optic_arco;
    class hlc_optic_PVS4base :optic_arco
    {
        class ItemInfo;
    };
    class hlc_optic_PVS4G3 : hlc_optic_PVS4base {
        dlc = "Niarms_G3";
        author = "Bohemia Interactive, Toadie";
        descriptionshort = $STR_NIA_anpvs4_DESC;
        displayname = $STR_NIA_optic_ANPVS4G3;
        picture = "\hlc_wp_g3\tex\ui\gear_PVS4_x_ca";
        model = "\hlc_wp_g3\mesh\PVS4\scope.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 49.6;
            modelOptics = "\hlc_wp_g3\mesh\PVS4\NV_anpvs4_optic";
            class OpticsModes {
                class Snip {
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
                    modelOptics[] = { "\hlc_wp_g3\mesh\PVS4\NV_anpvs4_optic" };
                    visionMode[] = { "NVG" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Snip2 : Snip {
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
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        inertia = 0.22;
    };
    class hlc_optic_ZF4xBase :optic_arco
    {
        class ItemInfo;
    };
    class hlc_optic_STANAGZF2D_G3 : hlc_optic_ZF4xBase
    {
        author = "Krycek,Toadie";
        dlc = "Niarms_G3";
        displayname = $STR_NIA_optic_ZF2d;
        descriptionshort = $STR_NIA_HenZF4x_DESC;
        model = "\hlc_wp_G3\mesh\ZFmod1\scope.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 15.4;
            opticType = 2;
            optics = 1;
            modelOptics = "\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics";
            class OpticsModes
            {
                class Snip
                {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 600;
                    modelOptics[] = { "\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics" };
                    memoryPointCamera = "eye";
                    cameradir = "";
                    opticsZoomMin = 0.25 / 4;
                    opticsZoomMax = 0.25 / 4;
                    opticsZoomInit = 0.25 / 4;
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 2;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        inertia = 0.1;
        tmr_optics_enhanced = 0;
    };
    class hlc_optic_STANAGZF_G3 : hlc_optic_STANAGZF2D_G3
    {
        author = "Krycek,Toadie";
        displayname = $STR_NIA_optic_ZF;
        descriptionshort = $STR_NIA_HenZF4x_DESC;
            model = "\hlc_wp_G3\mesh\ZFmod1\scope.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 15.4;
            opticType = 2;
            optics = 1;
            modelOptics = "\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics";
            class OpticsModes
            {

                class Snip
                {
                    cameradir = "";
                    usemodeloptics = 0;
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 100;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye2";
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 2;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class optic_lrps;
    class hlc_optic_LeupoldM3A : optic_lrps
    {
        class ItemInfo;
    };
    class hlc_optic_ZF95Base : optic_lrps {
        class ItemInfo;
    };
    class hlc_optic_ZF95_g3 :hlc_optic_ZF95Base
    {
        scope = public;
        dlc = "Niarms_G3";
        author = "Toadie,Krycek";
        model = "\hlc_wp_G3\mesh\ZF95\scope.p3d";
        displayname = $STR_NIA_optic_ZF95_G3;
    };

    class hlc_optic_LeupoldM3A_G3 : hlc_optic_LeupoldM3A
    {
        dlc = "Niarms_G3";
        author = "Toadie,Krycek";
        model = "\hlc_wp_G3\mesh\M3A\scope.p3d";
        displayname = $STR_NIA_optic_M3a_G3;
    };
    //weapons

    class Rifle;

    class Rifle_Base_F : Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;


    class hlc_g3_base : Rifle_Base_F {
        changeFiremodeSound[] = { "\hlc_wp_g3\snd\SWITCH6", 1, 1, 8 };
        dlc = "Niarms_G3";
        recoil = "recoil_dmr_03";
        magazineReloadSwitchPhase = 0.5;
        deployedpivot = "deploypivot";
        hasBipod = false;
        scope = protected;
        magazines[] = { __762G3_MAGS };
        magazineWell[] = { "CBA_762x51_G3" };
        class Library {
            libTextDesc = "G3Base";
        };
        reloadAction = "HLC_GestureReloadAK";
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        __AI_DISPERSION_COEF;
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class hlc_M203_G3k : UGL_F {
            cameradir = "gl_look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350 };
            discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203-2003";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            reloadtime = 0.1;
            reloadAction = "HLC_GestureReloadGL5040";
            reloadMagazineSound[] = { "hlc_core\sound\GL\M203_reload", 1.0, 1, 10 };
            drySound[] = { "hlc_core\sound\GL\GL_drystrike", 1, 1, 10 };
            modes[] = { "Single" };
            class Single : Mode_SemiAuto {
                sounds[] = { "StandardSound" };
                class StandardSound {
                    weaponSoundEffect = "DefaultRifle";
                    closure1[] = { "hlc_core\sound\GL\GL_striker", 1, 1, 10 };
                    closure2[] = { "hlc_core\sound\GL\GL_striker", 1, 1, 10 };
                    soundClosure[] = { closure1, 0.5, closure2, 0.5 };
                    soundSetShot[] = { "NIA_GL_Shot_SoundSet", "NIA_GL_Tail_SoundSet" };
                };
                recoil = "M240Recoil";
                recoilProne = "M240Recoil";
                __AI_ROF_GL_SINGLE;
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
                class compatibleItems {
                    HLC_Optic_ZFSG1 = 1;
                    hlc_optic_accupoint_g3 = 1;
                    hlc_optic_PVS4G3 = 1;
                    hlc_optic_STANAGZF2D_G3 = 1;
                    hlc_optic_STANAGZF_G3 = 1;
                    hlc_optic_ZF95_g3 = 1;
                    hlc_optic_LeupoldM3A_G3 = 1;

                };
            };
            class PointerSlot {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.0;
            };
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
        };

        dexterity = 1.8;
        bullet1[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.398107, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.281838, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.281838, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.281838, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.398107, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.398107, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.398107, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.281838, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.281838, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.281838, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.281838, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.281838, 1, 15 };
        soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };

        modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics1", "single_medium" };

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3sg1_Shot_SoundSet", "g3sg1_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
            };
            reloadTime = 0.097;
            dispersion = 0.000334521;
            __AI_ROF_RIFLE_MEDIUM_FULLAUTO;

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
                soundSetShot[] = { "g3sg1_Shot_SoundSet", "g3sg1_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g3_silencerShot_SoundSet", "g3_silencerTail_SoundSet" };
            };
            reloadTime = 0.097;
            dispersion = 0.000334521;

            __AI_ROF_RIFLE_MEDIUM_SINGLE;
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_medium : Single {
            showtoplayer = 0;
            __AI_ROF_RIFLE_MEDIUM_SEMI;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        drysound[] = { "\hlc_core\sound\empty_sniperrifles", 1, 1, 10 };
        // reloadMagazineSound[] = {"\hlc_wp_ak\snd\ak74m_reload",0.74,1,30};
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    };

    class hlc_rifle_g3sg1 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = true;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Krycek, Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 17.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 449.58;
        agm_bipod = 1;
        cse_bipod = 1;
        bg_bipod = 1;
        scope = public;

        displayName = $STR_NIA_rifle_G3sg1;
        reloadAction = "HLC_GestureReloadG3SG1";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_Wide.rtm" };
        descriptionShort = $STR_NIA_G3SG1_DESC;
        model = "\hlc_wp_g3\mesh\g3sg1\g3sg1.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3sg1_x_ca";
        hiddenSelections[] = { "Main", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3sg1\g3sg1_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa" };
        discretedistance[] = { 100, 200, 300, 400 };
        discretedistanceinitindex = 2;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4" }; /// the angle of gun changes with zeroing
        cameradir = "aim_point";
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\g3sg1_reload", 1.0, 1, 25 };
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
            mass = 96;
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
            class CharmSlot :nia_charms_slot{};
        };
        inertia = 0.44;
        __DEXTERITY(4.4, 0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3sg1_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3sg1_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3sg1_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_g3sg1_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_g3sg1_XMAG";
            default = "hlc_rifle_g3sg1";
        };
    };
    class hlc_rifle_g3sg1_XMAG : hlc_rifle_g3sg1
    {
        scopeArsenal = 0;
        author = "Krycek, Toadie";
        inertia = 0.44 + 0.225;
        __DEXTERITY((4.4 + 2.25), 0);
    };


    class hlc_rifle_g3sg1ris : hlc_rifle_g3sg1
    {
        displayName = $STR_NIA_rifle_G3sg1_RIS;
        author = "Krycek, Toadie";
        model = "\hlc_wp_g3\mesh\g3sg1\g3sg1_railed.p3d";
        hiddenSelections[] = { "Main", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3sg1\g3sg1_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3sg1ris_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3sg1ris_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3sg1ris_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_g3sg1ris_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_g3sg1ris_XMAG";
            default = "hlc_rifle_g3sg1ris";
        };
    };
    class hlc_rifle_g3sg1ris_XMAG : hlc_rifle_g3sg1ris
    {
        scopeArsenal = 0;
        author = "Krycek, Toadie";
        inertia = 0.44 + 0.225;
        __DEXTERITY((4.4 + 2.25), 0);
    };

    // PSG-1 Accuracy 2.327105669325714e-4
    class hlc_rifle_psg1 : hlc_g3_base {
        deployedpivot = "deploypivot";
        scope = public;
        hasBipod = false;
        maxZeroing = 1600;
        author = "Krycek,noodum, Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 25.6;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 650.24;
        model = "\hlc_wp_g3\mesh\psg1\psg1.p3d";
        displayName = $STR_NIA_rifle_psg1;
        reloadAction = "HLC_GestureReloadPSG1";
        descriptionShort = $STR_NIA_PSG1_DESC;
        modeloptics[] = { "\hlc_wp_G3\mesh\psg1\psg1_reticle", "\hlc_wp_G3\mesh\psg1\PSG1_reticle_illum" };
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_Wide.rtm" };
        picture = "\hlc_wp_g3\tex\ui\gear_psg1_x_ca";
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\psg1_reload", 1.0, 1, 25 };
        UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
        hiddenSelections[] = { "Main", "Scope" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_noodum_psg1\psg1_co.paa", "hlc_wp_g3\tex\krycek_noodum_psg1\psg1_scope_co.paa" };
        inertia = 0.72;
        __DEXTERITY(7.2, 0);
        class OpticsModes {
            class Snip {
                //cameradir = "look";
                discretedistance[] = { 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500 };
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
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticszoominit = 0.0415;
                opticszoommax = 0.0415;
                opticszoommin = 0.0415;
                usemodeloptics = 1;
                visionmode[] = { "Normal" };
                opticsDisplayName = "WFOV";
            };
        };

        modes[] = { "Single", "single_medium_optics1" };

        class Single : Single {
            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "psg1_Shot_SoundSet", "psg1_Tail_SoundSet" };
            };
            dispersion = 0.000218166;
            __AI_ROF_RIFLE_SNIPER762_SEMI;
        };
        class single_medium_optics1 : Single { // same 6x optic
            showtoplayer = 0;
            __AI_ROF_338SNIPER_HSCOPE_SEMI;
        };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 158;
            class MuzzleSlot {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
            class CowsSlot {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
            class UnderBarrelSlot : asdg_UnderSlot{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_psg1_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_psg1_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_psg1_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_psg1_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_psg1_XMAG";
            default = "hlc_rifle_psg1";
        };
    };
    class hlc_rifle_psg1_XMAG : hlc_rifle_psg1
    {
        scopeArsenal = 0;
        author = "Krycek,noodum, Toadie";
        inertia = 0.72 + 0.225;
        __DEXTERITY((7.2 + 2.25), 0);

    };

    class hlc_rifle_psg1A1 : hlc_rifle_psg1 {
        author = "Krycek,noodum, Toadie";
        model = "\hlc_wp_g3\mesh\psg1\psg1a1.p3d";
        displayName = $STR_NIA_rifle_psg1a1;
        picture = "\hlc_wp_g3\tex\ui\gear_psg1a1_ca";
        discretedistance[] = { 100 };
        discretedistanceinitindex = 0;
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
        modes[] = { "Single", "single_medium_optics1", "single_far_optics1" };
        inertia = 0.63;
        __DEXTERITY(6.39, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 141;
            class CowsSlot : asdg_OpticRail {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
                class compatibleItems {
                    HLC_Optic_ZFSG1 = 1;
                    hlc_optic_accupoint_g3 = 1;
                    hlc_optic_PVS4G3 = 1;
                    hlc_optic_STANAGZF2D_G3 = 1;
                    hlc_optic_STANAGZF_G3 = 1;
                    hlc_optic_ZF95_g3 = 1;
                    hlc_optic_LeupoldM3A_G3 = 1;
                };
            };
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_PSG1A1_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_PSG1A1_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_PSG1A1_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_PSG1A1_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_PSG1A1_XMAG";
            default = "hlc_rifle_psg1A1";
        };
    };
    class hlc_rifle_psg1A1_XMAG : hlc_rifle_psg1A1
    {
        scopeArsenal = 0;
        author = "Krycek,noodum, Toadie";
        inertia = 0.63 + 0.225;
        __DEXTERITY((6.3 + 2.25), 0);
    };

    class hlc_rifle_PSG1A1_RIS : hlc_rifle_psg1A1 {
        author = "Krycek,noodum, Toadie";
        model = "\hlc_wp_g3\mesh\psg1\psg1a1_RAS.p3d";
        displayName = $STR_NIA_rifle_psg1a1_ris;
        picture = "\hlc_wp_g3\tex\ui\gear_psg1a1_ca";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_PSG1A1_RIS_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_PSG1A1_RIS_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_PSG1A1_RIS_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_PSG1A1_RIS_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_PSG1A1_RIS_XMAG";
            default = "hlc_rifle_PSG1A1_RIS";
        };
    };
    class hlc_rifle_PSG1A1_RIS_XMAG : hlc_rifle_PSG1A1_RIS
    {
        scopeArsenal = 0;
        author = "Krycek,noodum, Toadie";

    };

    class hlc_rifle_g3a3 : hlc_rifle_g3sg1 {
        author = "Krycek, Pete, Toadie";
        deployedpivot = "deploypivot";
        hasBipod = false;
        AB_barrelTwist = 12;
        AB_barrelLength = 17.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 449.58;
        picture = "\hlc_wp_g3\tex\ui\gear_g3a3_x_ca";
        scope = public;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        displayName = $STR_NIA_rifle_G3A3;
        descriptionShort = $STR_NIA_G3_DESC;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_thin.rtm" };
        model = "\hlc_wp_g3\mesh\g3a3\g3a3.p3d";
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.paa", "hlc_wp_g3\tex\sg1\g3sg2_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa", "" };

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
            __AI_ROF_RIFLE_MEDIUM_SINGLE;
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_medium : Single {
            showtoplayer = 0;
            __AI_ROF_RIFLE_MEDIUM_SEMI;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 96.9;
        };
        inertia = 0.44;
        __DEXTERITY(4.4, 0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3a3_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3a3_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3a3_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_g3a3_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_g3a3_XMAG";
            default = "hlc_rifle_g3a3";
        };
    };
    class hlc_rifle_g3a3_XMAG : hlc_rifle_g3a3
    {
        scopeArsenal = 0;
        author = "PAC, Millenia, Toadie";
        inertia = 0.44 + 0.225;
        __DEXTERITY((4.4 + 2.25), 0);
    };

    class hlc_rifle_g3a3ris : hlc_rifle_g3a3 {
        displayName = $STR_NIA_rifle_G3A3_RIS;
        author = "Krycek,zulmargera87, Toadie";
        model = "\hlc_wp_g3\mesh\g3a3\g3a3_railed.p3d";
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.paa", "hlc_wp_g3\tex\sg1\g3sg2_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3a3ris_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3a3ris_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3a3ris_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_g3a3ris_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_g3a3ris_XMAG";
            default = "hlc_rifle_g3a3ris";
        };
    };
    class hlc_rifle_g3a3ris_XMAG : hlc_rifle_g3a3ris
    {
        scopeArsenal = 0;
        author = "Krycek,zulmargera87, Toadie";
        inertia = 0.44 + 0.225;
        __DEXTERITY((4.4 + 2.25), 0);
    };

    class hlc_rifle_g3a3v : hlc_rifle_g3a3 {
        author = "Krycek, Toadie";
        displayName = $STR_NIA_rifle_G3A3_Wide;
        model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern.p3d";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_Wide.rtm" };
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.paa", "hlc_wp_g3\tex\sg1\g3sg2_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa" };
        cameradir = "aim_point";
        picture = "\hlc_wp_g3\tex\ui\gear_g3a3v_ca";
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4" }; /// the angle of gun changes with zeroing
        inertia = 0.45;
        __DEXTERITY(4.5, 0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3a3v_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3a3v_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3a3v_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_g3a3v_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_g3a3v_XMAG";
            default = "hlc_rifle_g3a3v";
        };
    };
    class hlc_rifle_g3a3v_XMAG : hlc_rifle_g3a3v
    {
        scopeArsenal = 0;
        author = "PAC, Millenia, Toadie";
        inertia = 0.45 + 0.225;
        __DEXTERITY((4.5 + 2.25), 0);
    };

    class hlc_rifle_g3a3vris : hlc_rifle_g3a3 {
        author = "Krycek, Toadie";
        displayName = $STR_NIA_rifle_G3A3_RIS_Wide;
        model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern_railed.p3d";
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_co.paa", "hlc_wp_g3\tex\sg1\g3sg2_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa", "hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3a3vris_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3a3vris_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3a3vris_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "hlc_rifle_g3a3vris_XMAG";
            hlc_50Rnd_762x51_T_G3 = "hlc_rifle_g3a3vris_XMAG";
            default = "hlc_rifle_g3a3vris";
        };
    };
    class hlc_rifle_g3a3vris_XMAG : hlc_rifle_g3a3vris
    {
        scopeArsenal = 0;
        author = "Krycek, Toadie";
        inertia = 0.45 + 0.225;
        __DEXTERITY((4.5 + 2.25), 0);
    };

    class hlc_rifle_g3ka4 : hlc_rifle_g3a3 {
        author = "Krycek, zulmargera87, Toadie";
        displayName = $STR_NIA_rifle_G3A4;
        model = "\hlc_wp_g3\mesh\g3_rails\g3ka4.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3ka4_x_ca";
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_STD_Wide.rtm" };
        hiddenSelections[] = { "Main", "Rail", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_2_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa", "hlc_wp_g3\tex\arby_mp5n\mp5_co.paa" };
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 314.96;
        inertia = 0.46;
        __DEXTERITY(4.6, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 102;
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0;
            };
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
            class GripodSlot : nia_rifle_grips_slot {};
            class CharmSlot {};
        };

        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
            };
            __AI_ROF_RIFLE_MEDIUM_FULLAUTO;
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g3ka4_Shot_SoundSet", "g3ka4_Tail_SoundSet" };
            };
            __AI_ROF_RIFLE_MEDIUM_SINGLE;
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_medium : Single {
            showtoplayer = 0;
            __AI_ROF_RIFLE_MEDIUM_SEMI;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3ka4_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3ka4_XMAG";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3ka4_XMAG";
            hlc_50Rnd_762x51_TDim_G3="hlc_rifle_g3ka4_XMAG";
            hlc_50Rnd_762x51_T_G3="hlc_rifle_g3ka4_XMAG";
            default = "hlc_rifle_g3ka4";
        };
        rhs_grip1_change = "hlc_rifle_g3ka4_grip";
        rhs_grip2_change = "hlc_rifle_g3ka4_grip2";
        rhs_grip3_change = "hlc_rifle_g3ka4_grip3";
        baseWeapon = "hlc_rifle_g3ka4";
    };
    class hlc_rifle_g3ka4_grip : hlc_rifle_g3ka4
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_Vfg.rtm" };
        __DEXTERITY(4.6, 1); //afg,kx3
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3ka4_XMAG_grip";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3ka4_XMAG_grip";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3ka4_XMAG_grip";
            hlc_50Rnd_762x51_TDim_G3="hlc_rifle_g3ka4_XMAG_grip";
            hlc_50Rnd_762x51_T_G3="hlc_rifle_g3ka4_XMAG_grip";
            default = "hlc_rifle_g3ka4_grip";
        };
    };
    class hlc_rifle_g3ka4_grip2 : hlc_rifle_g3ka4
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_afg.rtm" };
        __DEXTERITY(4.6, 1); //afg,kx3
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3ka4_XMAG_grip2";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3ka4_XMAG_grip2";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3ka4_XMAG_grip2";
            hlc_50Rnd_762x51_TDim_G3="hlc_rifle_g3ka4_XMAG_grip2";
            hlc_50Rnd_762x51_T_G3="hlc_rifle_g3ka4_XMAG_grip2";
            default = "hlc_rifle_g3ka4_grip2";
        };
    };
    class hlc_rifle_g3ka4_grip3 : hlc_rifle_g3ka4
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_g3_Vfg.rtm" };
        __DEXTERITY(4.6, 1); //afg,kx3
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3ka4_XMAG_grip3";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3ka4_XMAG_grip3";
            hlc_50Rnd_762x51_B_G3 = "hlc_rifle_g3ka4_XMAG_grip3";
            hlc_50Rnd_762x51_TDim_G3="hlc_rifle_g3ka4_XMAG_grip3";
            hlc_50Rnd_762x51_T_G3="hlc_rifle_g3ka4_XMAG_grip3";
            default = "hlc_rifle_g3ka4_grip3";
        };
    };

    class hlc_rifle_g3ka4_XMAG : hlc_rifle_g3ka4
    {
        scopeArsenal = 0;
        author = "PAC, Millenia, zulmargera87, Toadie";
        inertia = 0.46 + 0.225;
        __DEXTERITY((4.6 + 2.25), 0);
        rhs_grip1_change = "hlc_rifle_g3ka4_XMAG_grip";
        rhs_grip2_change = "hlc_rifle_g3ka4_XMAG_grip2";
        rhs_grip3_change = "hlc_rifle_g3ka4_XMAG_grip3";
        baseWeapon = "hlc_rifle_g3ka4_XMAG";
    };
    class hlc_rifle_g3ka4_XMAG_grip : hlc_rifle_g3ka4_XMAG
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_Vfg.rtm" };
        __DEXTERITY((4.6 + 2.25), 1); //afg,kx3
    };
    class hlc_rifle_g3ka4_XMAG_grip2 : hlc_rifle_g3ka4_XMAG
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3_afg.rtm" };
        __DEXTERITY((4.6 + 2.25), 1); //afg,kx3
    };
    class hlc_rifle_g3ka4_XMAG_grip3 : hlc_rifle_g3ka4_XMAG
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_g3_Vfg.rtm" };
        __DEXTERITY((4.6 + 2.25), 1); //afg,kx3
    };

    class HLC_Rifle_g3ka4_GL : hlc_rifle_g3ka4 {
        author = "Krycek, zulmargera87, Tigg, Toadie";
        model = "\hlc_wp_g3\mesh\g3_railsGL\g3kgl.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_g3ka4gl_x_ca";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3KA4_GL_STD.rtm" };
        displayName = $STR_NIA_rifle_G3A4_GL;
        muzzles[] = { "this", "hlc_M203_G3k" };
        hiddenSelections[] = { "Main", "Rail", "Stock", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_2_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa", "hlc_wp_g3\tex\arby_mp5n\mp5_co.paa", "hlc_wp_g3\tex\tigg_m203\m203_co.paa" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 120;
            class UnderBarrelSlot {};
            class GripodSlot {};
            class CharmSlot :nia_charms_slot{};
        };
        inertia = 0.54;
        __DEXTERITY(5.4, 0);
        baseWeapon = "HLC_Rifle_g3ka4_GL";
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "HLC_Rifle_g3ka4_GL_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "HLC_Rifle_g3ka4_GL_XMAG";
            hlc_50Rnd_762x51_B_G3 = "HLC_Rifle_g3ka4_GL_XMAG";
            hlc_50Rnd_762x51_TDim_G3 = "HLC_Rifle_g3ka4_GL_XMAG";
            hlc_50Rnd_762x51_T_G3 = "HLC_Rifle_g3ka4_GL_XMAG";
            default = "HLC_Rifle_g3ka4_GL";
        };
    };
    class HLC_Rifle_g3ka4_GL_XMAG : HLC_Rifle_g3ka4_GL
    {
        scopeArsenal = 0;
        author = "PAC, Millenia, zulmargera87, Toadie";
        inertia = 0.54 + 0.225;
        __DEXTERITY((5.4 + 2.25), 0);
    };

    class hlc_rifle_hk51 : hlc_rifle_g3sg1 {
        deployedpivot = "deploypivot";
        hasBipod = false;
        scope = public; // lets the game know this isn't an intermediary
        AB_barrelTwist = 12;
        AB_barrelLength = 8.31;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 211.074;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        //Self explanatory
        author = "Krycek, PAC, Toadie";
        model = "\hlc_wp_g3\mesh\hene_hk51\hk53.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        displayName = $STR_NIA_rifle_HK51;
        reloadAction = "HLC_GestureReloadHK53";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\mc51_hands.rtm" };
        descriptionShort = $STR_NIA_G3_Compact_DESC;
        hiddenSelections[] = { "Lower" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_g3\g3_2_co.paa" };
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\g41_reload", 1.0, 1, 25 };
        initspeed = -0.83;
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk51_Shot_SoundSet", "hk51_Tail_SoundSet" };
            };
            reloadTime = 0.085;
            dispersion = 0.0013;
            __AI_ROF_RIFLE_MEDIUM_FULLAUTO;
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk51_Shot_SoundSet", "hk51_Tail_SoundSet" };
            };
            reloadTime = 0.085;
            dispersion = 0.0013;
            __AI_ROF_RIFLE_MEDIUM_SINGLE;
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_medium : Single {
            showtoplayer = 0;
            __AI_ROF_RIFLE_MEDIUM_SEMI;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
            class UnderBarrelSlot : asdg_UnderSlot{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
        };
        inertia = 0.36;
        __DEXTERITY(3.6, 0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_G3 = "hlc_rifle_hk51_XMAG";
            hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_hk51_XMAG";
            default = "hlc_rifle_hk51";
        };
    };
    class hlc_rifle_hk51_XMAG : hlc_rifle_hk51
    {
        scopeArsenal = 0;
        author = "Krycek, PAC, Toadie";
        inertia = 0.36 + 0.225;
        __DEXTERITY((3.6 + 2.25), 0);
    };

    class hlc_rifle_hk53 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_mk20";
        maxZeroing = 400;
        author = "Soul Slayer,HeNe,Krycek,Toadie";
        scope = public; // lets the game know this isn't an intermediary
        //Self explanatory
        AB_barrelTwist = 7;
        AB_barrelLength = 8.31;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 211.074;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        initspeed = -0.85;
        magazines[] = { __556HK33_MAGS };
        magazineWell[] = { "CBA_556x45_HK33" };
        discreteDistance[] = { 100, 200, 300, 400 };
        model = "\hlc_wp_g3\mesh\hene_hk53\hk53.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        hiddenSelections[] = { "Lower", "Upper", "Grip", "Grip1", "Panels", "Rail", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\hk53\lower_co.paa", "hlc_wp_g3\tex\hk53\upper_co.paa", "hlc_wp_g3\tex\rails_co.paa", "hlc_wp_g3\tex\tigg_m203\fore_co.paa", "hlc_wp_g3\tex\tigg_m203\rails_co.paa", "hlc_wp_g3\tex\twinkemil_mp5\rail_co.paa", "hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa" };
        displayName = $STR_NIA_rifle_HK53;
        reloadAction = "HLC_GestureReloadHK53";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\mc51_hands.rtm" };
        descriptionShort = $STR_NIA_HK53_Compact_DESC;
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\g41_reload", 1.0, 1, 25 };

        modes[] = { "Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2", "AI_Burst_close" };

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
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g3\snd\g3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "hk53_Shot_SoundSet", "hk53_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.0011;

            __AI_ROF_CQB_SINGLE;
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
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "hk33_silencerShot_SoundSet", "hk33_silencerTail_SoundSet" };
            };
            __ROF(700);
            dispersion = 0.0011;
            __AI_ROF_CQB_SHORT_BURST;
            displayName = $STR_DN_MODE_BURST;
            textureType = "burst";
            soundBurst = 0;
        };
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_CQB_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 68;
            class MuzzleSlot : asdg_MuzzleSlot_556 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class CharmSlot :nia_charms_slot{};
        };
        inertia = 0.31;
        __DEXTERITY(3.1, 0);
    };

    class hlc_rifle_hk53RAS : hlc_rifle_hk53 {
        author = "Soul Slayer,HeNe, Toadie";
        scope = public; // lets the game know this isn't an intermediary
        discreteDistance[] = { 100, 200, 300, 400 };
        model = "\hlc_wp_g3\mesh\hene_hk53\hk53_rails.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
        displayName = $STR_NIA_rifle_HK53_RAS;
        hiddenSelections[] = { "Lower", "Upper", "Grip", "Grip1", "Panels", "Rail", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\hk53\lower_co.paa", "hlc_wp_g3\tex\hk53\upper_co.paa", "hlc_wp_g3\tex\rails_co.paa", "hlc_wp_g3\tex\tigg_m203\fore_co.paa", "hlc_wp_g3\tex\tigg_m203\rails_co.paa", "hlc_wp_g3\tex\twinkemil_mp5\rail_co.paa", "hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa" };
        inertia = 0.36;
        __DEXTERITY(3.6, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class GripodSlot : nia_rifle_grips_slot {};
            class CharmSlot{};
        };
        rhs_grip1_change = "hlc_rifle_hk53RAS_grip";
        rhs_grip2_change = "hlc_rifle_hk53RAS_grip2";
        rhs_grip3_change = "hlc_rifle_hk53RAS_grip3";
        baseWeapon = "hlc_rifle_hk53RAS";
    };
    class hlc_rifle_hk53RAS_grip : hlc_rifle_hk53RAS
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_hk53_Vfg.rtm" };
        __DEXTERITY(3.6, 1); //afg,kx3
    };
    class hlc_rifle_hk53RAS_grip2 : hlc_rifle_hk53RAS
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_hk53_afg.rtm" };
        __DEXTERITY(3.6, 1); //afg,kx3
    };
    class hlc_rifle_hk53RAS_grip3 : hlc_rifle_hk53RAS
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_hk53_Vfg.rtm" };
        __DEXTERITY(3.6, 1); //afg,kx3
    };

    class hlc_rifle_hk33a2 : hlc_g3_base {
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_mk20";
        maxZeroing = 1000;
        author = "Krycek, Toadie";
        reloadAction = "HLC_GestureReloadHK33";
        scope = public; // lets the game know this isn't an intermediary
        //Self explanatory
        AB_barrelTwist = 7;
        AB_barrelLength = 15.4;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 390;
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        magazines[] = { __556HK33_MAGS };
        magazineWell[] = { "CBA_556x45_HK33" };
        discreteDistance[] = { 100, 200, 300, 400 };
        //cameradir = "Look";
        //discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4" }; /// the angle of gun changes with zeroing
        model = "\hlc_wp_g3\mesh\hk33\hk33a2.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk33a2_ca";
        displayName = $STR_NIA_rifle_HK33A2;
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\gesture\newgesture\hands_hk33.rtm" };
        descriptionShort = $STR_NIA_HK33_DESC;
        hiddenSelections[] = { "Main", "FCG", "Rail", "Stock", "Magazine", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_hk33\hk33_co.paa", "hlc_wp_g3\tex\hk53\lower_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa", "hlc_wp_g3\tex\sg1\g3sg3_co.paa", "hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa", "hlc_wp_g3\tex\tigg_m203\m203_co.paa" };
        reloadmagazinesound[] = { "\hlc_wp_g3\snd\g41_reload", 1.0, 1, 25 };

        modes[] = { "Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2", "AI_Burst_close", "AI_far" };

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

            __AI_ROF_RIFLE_SMALL_FULLAUTO;
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

            __AI_ROF_RIFLE_SMALL_SINGLE;
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

            __AI_ROF_RIFLE_SMALL_SHORT_BURST;
        };

        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class AI_far : Single {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 5;
            reloadtime = 0.2;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 81.5;
            class MuzzleSlot : asdg_MuzzleSlot_556 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class CharmSlot :nia_charms_slot{};
        };
        inertia = 0.37;
        __DEXTERITY(3.7, 0);
    };
    class hlc_rifle_hk33ka3 : hlc_rifle_hk33a2
    {
        picture = "\hlc_wp_g3\tex\ui\gear_hk33ka3_ca";
        author = "Krycek, Toadie";
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 332.58;
        model = "\hlc_wp_g3\mesh\hk33\hk33ka3.p3d";
        displayName = $STR_NIA_rifle_HK33KA3;
        descriptionShort = $STR_NIA_HK33_Carbine_DESC;
        reloadAction = "HLC_GestureReloadHK33";
        modes[] = { "Single", "FullAuto", "single_medium_optics1", "single_far_optics2", "AI_Burst_close", "AI_far" };
        inertia = 0.35;
        __DEXTERITY(3.5, 0);
    };
    class hlc_rifle_hk33a2RIS : hlc_rifle_hk33a2 {
        author = "Krycek, Toadie";
        model = "\hlc_wp_g3\mesh\hk33\hk33_rails.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk33rail_ca";
        displayName = $STR_NIA_rifle_HK33KA2_RIS;
        hiddenSelections[] = { "Main", "FCG", "Rail", "Stock", "Magazine", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_hk33\hk33_co.paa", "hlc_wp_g3\tex\hk53\lower_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa", "hlc_wp_g3\tex\sg1\g3sg3_co.paa", "hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa", "hlc_wp_g3\tex\tigg_m203\m203_co.paa" };
        inertia = 0.38;
        __DEXTERITY(3.8, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 84;
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class GripodSlot : nia_rifle_grips_slot {};
            class CharmSlot ;
        };
        rhs_grip1_change = "hlc_rifle_hk33a2RIS_grip";
        rhs_grip2_change = "hlc_rifle_hk33a2RIS_grip2";
        rhs_grip3_change = "hlc_rifle_hk33a2RIS_grip3";
        baseWeapon = "hlc_rifle_hk33a2RIS";
    };
    class hlc_rifle_hk33a2RIS_grip : hlc_rifle_hk33a2RIS
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_hk33_Vfg.rtm" };
        __DEXTERITY(3.8, 1); //afg,kx3
    };
    class hlc_rifle_hk33a2RIS_grip2 : hlc_rifle_hk33a2RIS
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_hk33_afg.rtm" };
        __DEXTERITY(3.8, 1); //afg,kx3
    };
    class hlc_rifle_hk33a2RIS_grip3 : hlc_rifle_hk33a2RIS
    {
        scopeArsenal = 0;
        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_hk33_Vfg.rtm" };
        __DEXTERITY(3.8, 1); //afg,kx3
    };

    class hlc_rifle_hk33a2RIS_GL : hlc_rifle_hk33a2RIS
    {
        author = "Krycek,Soul Slayer,HeNe, Toadie";
        model = "\hlc_wp_g3\mesh\hk33\hk33_rails_GL.p3d";
        picture = "\hlc_wp_g3\tex\ui\gear_hk33gl_ca";
        displayName = $STR_NIA_rifle_HK33KA2_RIS_GL;
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g3\anim\handgesture_G3KA4_GL_STD.rtm" };
        muzzles[] = { "this", "hlc_M203_G3k" };
        hiddenSelections[] = { "Main", "FCG", "Rail", "Stock", "Magazine", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_g3\tex\krycek_hk33\hk33_co.paa", "hlc_wp_g3\tex\hk53\lower_co.paa", "hlc_wp_g3\tex\zulmarg_tech\rail_co.paa", "hlc_wp_g3\tex\sg1\g3sg3_co.paa", "hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa", "hlc_wp_g3\tex\tigg_m203\m203_co.paa" }; \
            inertia = 0.51;
        __DEXTERITY(5.1, 0);
        baseWeapon = "hlc_rifle_hk33a2RIS_GL";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 113;
            class MuzzleSlot : asdg_MuzzleSlot_556 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class UnderBarrelSlot {};
            class GripodSlot {};
            class CharmSlot :nia_charms_slot{};
        };
    };

};
