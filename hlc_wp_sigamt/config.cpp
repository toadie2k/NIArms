#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
class CfgPatches
{
    class hlcweapons_stgw57
    {
        requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Weapons_F_Acc", "A3_Sounds_F_Mark", "asdg_jointrails", "hlcweapons_core" };
        units[] = { "HLC_SG510_ammobox", "Weapon_rifle_stgw57ris", "Weapon_rifle_stgw57", "weapon_rifle_stgw57_commando", "weapon_rifle_sig5104", "weapon_rifle_amt" };
        weapons[] = { "hlc_rifle_STGW57", "hlc_rifle_stgw57_RIS", "hlc_rifle_stgw57_commando", "hlc_rifle_sig5104", "hlc_rifle_amt", "hlc_optic_Kern", "hlc_optic_Kern2d" };
        magazines[] = { "hlc_24Rnd_75x55_B_stgw", "hlc_24Rnd_75x55_ap_stgw", "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_mk316_amt", "hlc_20Rnd_762x51_bball_amt", "hlc_20Rnd_762x51_T_amt" };
        version = "v1.1";
        author = "toadie";
    };
};
class cfgMods
{
    class Mod_Base;
    class Niarms_SG510 :Mod_Base
    {
        name = "NIArsenal: SG150 Rifles";
        picture = "hlc_wp_sigamt\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_sigamt\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_sigamt\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_sigamt\tex\ui\NIArms1_ca.paa";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class GrenadeLauncher;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class cfgRecoils
{
    class recoil_ebr;
    class recoil_stgw57 : recoil_ebr
    {
        muzzleOuter[] = { 0.5, 1.5, 0.6, 0.5 };
        kickBack[] = { 0.07, 0.09 };
        temporary = 0.017;
        permanent = 0.09;
    };
    class recoil_stgw57k : recoil_ebr
    {
        muzzleOuter[] = { 0.6, 1.3, 0.65, 0.45 };
        kickBack[] = { 0.08, 0.12 };
        temporary = 0.021;
        permanent = 0.12;
    };
    class recoil_5104 : recoil_ebr
    {
        muzzleOuter[] = { 0.4, 1.5, 0.65, 0.45 };
        kickBack[] = { 0.07, 0.10 };
        temporary = 0.017;
        permanent = 0.11;
    };
};

class CfgMovesBasic
{
    class DefaultDie;
    class ManActions
    {
        HLC_GestureReloadSTGW57 = "HLC_GestureReloadSTGW57"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadAMT = "HLC_GestureReloadAMT";
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57", "Gesture" };
            HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions
        {
            HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57_Prone", "Gesture" };
            HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT_Prone", "Gesture" };
        };
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions
        {
            HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57_Context", "Gesture" };
            HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT_Context", "Gesture" };

        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions
        {
            HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57_Context", "Gesture" };
            HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT_Context", "Gesture" };


            class RifleAdjustFProneActions : RifleAdjustProneBaseActions
            {
                HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57_Context", "Gesture" };
                HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT_Context", "Gesture" };
            };




        };
    };
};

class CfgGesturesMale
{
    class Default;
    class States
    {

        class HLC_GestureReloadSTGW57 :Default
        {
            file = "hlc_wp_sigamt\anim\reload_stgw57_stand.rtm";
            speed = 0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.4;
            headBobMode = 2;
            leftHandIKCurve[] = { 0.0375, 1, 0.05625, 0, 0.61875, 0, 0.65625, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };
        class HLC_GestureReloadAMT :Default
        {
            file = "hlc_wp_sigamt\anim\reload_amt_stand.rtm";
            speed = 0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.4;
            headBobMode = 2;
            leftHandIKCurve[] = { 0.0375, 1, 0.05625, 0, 0.61875, 0, 0.65625, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };
        /*
        DISREGARD.
        class HLC_GestureReloadSTGW57_Crouch :Default
        {
        file = "hlc_wp_sigamt\anim\reload_stgw57_stand.rtm";
        speed = 0.1875;
        looped = false;
        mask = "handsWeapon";
        headBobStrength = 0.45;
        headBobMode = 2;
        leftHandIKCurve[] = { 0, 1, 0.0625, 0, 0.61875, 0, 0.65625, 1 };
        leftHandIKBeg = true;
        leftHandIKEnd = true;
        rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };*/
        class HLC_GestureReloadSTGW57_Prone :Default
        {
            file = "hlc_wp_sigamt\anim\reload_stgw57_prone.rtm";
            speed = 0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.0625, 0, 0.61875, 0, 0.65625, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };
        class HLC_GestureReloadAMT_Prone :Default
        {
            file = "hlc_wp_sigamt\anim\reload_amt_prone.rtm";
            speed = 0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.0625, 0, 0.61875, 0, 0.65625, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };
        class HLC_GestureReloadSTGW57_Context : HLC_GestureReloadSTGW57
        {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAMT_Context : HLC_GestureReloadAMT
        {
            mask = "handsWeapon_context";
        };
    };
};
class CfgVehicles
{
    class NATO_Box_Base;
    class HLC_SG510_ammobox : NATO_Box_Base
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "Ammo";
        displayName = "HLC SIG  510 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines
        {
            class xhlc_24Rnd_75x55_B_stgw
            {
                magazine = "hlc_24Rnd_75x55_B_stgw";
                count = 30;
            };
            class xhlc_24Rnd_75x55_ap_stgw
            {
                magazine = "hlc_24Rnd_75x55_ap_stgw";
                count = 30;
            };
            class xhlc_20Rnd_762x51_b_amt
            {
                magazine = "hlc_20Rnd_762x51_b_amt";
                count = 30;
            };
            class xhlc_20Rnd_762x51_mk316_amt
            {
                magazine = "hlc_20Rnd_762x51_mk316_amt";
                count = 30;
            };
            class xhlc_20Rnd_762x51_bball_amt
            {
                magazine = "hlc_20Rnd_762x51_bball_amt";
                count = 30;
            };
            class xhhlc_20Rnd_762x51_T_amt
            {
                magazine = "hlc_20Rnd_762x51_T_amt";
                count = 30;
            };
            class xhlc_24Rnd_75x55_T_stgw
            {
                magazine = "hlc_24Rnd_75x55_T_stgw";
                count = 30;
            };

        };
        class TransportWeapons
        {
            class _xhlc_rifle_falosw
            {
                weapon = "hlc_rifle_sig5104";
                count = 20;
            };
            class _xhlc_rifle_osw_GL
            {
                weapon = "hlc_rifle_stgw57";
                count = 20;
            };
            class _xhhlc_rifle_L1A1
            {
                weapon = "hlc_rifle_amt";
                count = 20;
            };
            class _xhhlc_rifle_L1A1ris
            {
                weapon = "hlc_rifle_stgw57_RIS";
                count = 20;
            };
            class _xhhlc_rifle_L1A1commando
            {
                weapon = "hlc_rifle_stgw57_commando";
                count = 20;
            };


        };
        class TransportItems
        {
            class _xx_optic_Holosight3
            {
                name = "hlc_optic_Kern";
                count = 10;
            };
            class _xx_optic_Holosight2
            {
                name = "hlc_optic_Kern2d";
                count = 10;
            };
            class _xx_optic_Holosight
            {
                name = "optic_Holosight";
                count = 10;
            };
            class _xx_optic_hamr
            {
                name = "optic_hamr";
                count = 10;
            };
            class _xx_optic_rco
            {
                name = "optic_rco";
                count = 10;
            };
            class _xx_optic_ACO_grn
            {
                name = "optic_ACO_grn";
                count = 10;
            };

        };
    };
    class Weapon_Base_F;
    class Weapon_rifle_stgw57ris : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "Stgw.57 RIS";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_stgw57_RIS";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_24Rnd_75x55_B_stgw";
                count = 1;
            };
        };
    };
    class Weapon_rifle_stgw57 : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "Stgw.57";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_STGW57";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_24Rnd_75x55_B_stgw";
                count = 1;
            };
        };
    };
    class weapon_rifle_stgw57_commando : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "SIG Stgw.57 Commando";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_stgw57_commando";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_24Rnd_75x55_B_stgw";
                count = 1;
            };
        };
    };

    class weapon_rifle_sig5104 : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "SIG SG510-4";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_sig5104";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_20Rnd_762x51_b_amt";
                count = 1;
            };
        };
    };

    class weapon_rifle_amt : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "SIG AMT";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_amt";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_20Rnd_762x51_b_amt";
                count = 1;
            };
        };
    };

};
class CfgAmmo {
    /*external*/ class B_556x45_Ball;
    // Load Data - GP11
    // Provided by Spartan0536
    /*
    Swiss Military Designated GP11-FMJBT
    Full Metal Jacket Boat Tail
    174 Grains
    2560 ft/s
    2535 ft/lbs KE
    .505 Ballistics Coefficient (G1)
    -0.00 AirFriction
    Penetrates 3mm of RHA at 500m
    */
    class B_762x51_Ball;
    class HLC_GP11_FMJ :B_762x51_Ball {
        airFriction = -0.0004689059;
        caliber = 1.33;
        hit = 11.71;
        typicalSpeed = 750;
        ACE_caliber = 7.7724;
        ACE_bulletLength = ‪35.0012‬;
        ACE_bulletMass = 11.275;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.505 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 780, 730 };
        ACE_barrelLengths[] = { 583, 254 };
        class CamShakeExplode
        {
            power = "(10^0.5)";
            duration = "((round (10^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((10^0.5)*3)";
        };
        class CamShakeHit
        {
            power = 10;
            duration = "((round (10^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
    // Provided by Spartan0536
    /*
    Swiss Military Designated GP11-APBT
    Armor Piercing Boat Tail
    180 Grains
    2570 ft/s
    2642 ft/lbs KE
    .514 Ballistics Coefficient (G1)
    -0.00 AirFriction
    Penetrates 5.5mm of RHA at 500m (mild steel core)
    */
    class HLC_GP11_APBT :B_762x51_Ball
    {
        airFriction = -0.0004606955;
        caliber = 2.2;
        hit = 9.7608273215;
        typicalSpeed = 910;
        ACE_caliber = 7.7724;
        ACE_bulletLength = ‪35.0012‬;
        ACE_bulletMass = 11.275;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.514 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 783, 710 };
        ACE_barrelLengths[] = { 583, 254 };
    };
    // 
    // Provided by Spartan0536
    class HLC_GP11_tracer : HLC_GP11_FMJ
    {

        //caliber = 1.9;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 0;
        deflecting = 19;
        visibleFire = 3.25;
        audibleFire = 8;
        visibleFireTime = 0.75;
        maxspeed = 990;
        timeToLive = 12;
    };
    //
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_24Rnd_75x55_B_stgw : 30Rnd_556x45_Stanag{
        dlc = "Niarms_SG510";
        author = "Toadie";
        ammo = "HLC_GP11_FMJ";
        count = 24;
        descriptionshort = "Caliber: 7.5x55mm GP11 (FMJBT)<br />Rounds: 24<br />Used in: Stgw.57, Stgw.57 Commando";
        displayname = "Stgw.57 Mag (FMJ) 24rnd GP11";
        initspeed = 780;
        mass = 14;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_ball_ca.paa";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "GP11 Ball";
    };
    class hlc_24Rnd_75x55_ap_stgw : hlc_24Rnd_75x55_B_stgw{
        dlc = "Niarms_SG510";
        author = "Toadie";
        ammo = "HLC_GP11_APBT";
        count = 24;
        descriptionshort = "Caliber: 7.5x55mm GP11 (APBT)<br />Rounds: 24<br />Used in: Stgw.57, Stgw.57 Commando";
        displayname = "Stgw.57 Mag (AP) 24rnd GP11";
        initspeed = 770;
        mass = 14;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_AP_ca.paa";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "GP11 AP";
    };
    class hlc_20Rnd_762x51_b_amt : hlc_24Rnd_75x55_B_stgw{
        dlc = "Niarms_SG510";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (M855A1 EPR)<br />Rounds: 20<br />Used in: SIG 510-4, SIG AMT";
        displayname = "SIG 510-4 Mag (FMJ) 20rnd GP11";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        initspeed = 930;
        mass = 12;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "7.62mm EPR";
    };
    class hlc_20Rnd_762x51_mk316_amt : hlc_24Rnd_75x55_B_stgw{
        dlc = "Niarms_SG510";
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.316 Match)<br />Rounds: 20<br />Used in: SIG  510-4, SIG  AMT";
        displayname = "SIG  510-4 Mag (Mk.316) 20rnd 7.62mm";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        initspeed = 930;
        mass = 12;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "7.62mm Mk316";
    };
    class hlc_20Rnd_762x51_bball_amt : hlc_24Rnd_75x55_B_stgw{
        dlc = "Niarms_SG510";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.319 Barrier-Blind)<br />Rounds: 20<br />Used in: SIG  510-4, SIG  AMT";
        displayname = "SIG  510-4 Mag (Mk.319) 20rnd 7.62mm";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        initspeed = 930;
        mass = 12;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "7.62mm Mk.319";
    };
    class hlc_20Rnd_762x51_T_amt : hlc_20Rnd_762x51_b_amt {
        dlc = "Niarms_SG510";
        author = "Toadie";
        ammo = "B_762x51_Tracer_Green";
        descriptionshort = "Caliber: 7.62x51mm NATO (Tracer)<br />Rounds: 20<br />Used in: SIG  510-4, SIG  AMT";
        displayname = "SIG  510-4 Mag (Tracer) 20rnd 7.62mm";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 12;
        tracersevery = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_tracer_ca.paa";
        displaynameshort = "7.62mm Tracer";
    };
    class hlc_24Rnd_75x55_T_stgw : hlc_24Rnd_75x55_ap_stgw {
        dlc = "Niarms_SG510";
        author = "Toadie";
        ammo = "HLC_GP11_tracer";
        descriptionshort = "Caliber: 7.5x55mm GP11 (Ball)<br />Rounds: 20<br />Used in: Stgw.57, Stgw.57 Commando";
        displayname = "Stgw.57 Mag (Tracer) 24rnd GP11";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 14;
        tracersevery = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_Tracer_ca.paa";
        displaynameshort = "GP11 Tracer";
    };

};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F : Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class ItemCore;
    class optic_Arco : ItemCore{};

    class hlc_optic_Kern :optic_arco
    {
        dlc = "Niarms_SG510";
        scope = public;
        author = "Toadie, Kaukaussus";
        descriptionshort = "Kern 4x24 Zielfernrohr <br />Magnification: 4x";
        displayname = "Kern AARAU 4x24";
        picture = "\hlc_wp_sigamt\tex\ui\gear_aarau_x_ca";
        model = "hlc_wp_sigamt\mesh\aarau\AARAU.p3d";
        weaponInfoType = "RscWeaponZeroing";
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
                    cameradir = "";
                    usemodeloptics = 0;
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 800;
                    memoryPointCamera = "ADS_eye";
                    //modelOptics[] = {"\hlc_wp_sigamt\mesh\aarau\aarau_optics"};
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT_EYE";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 2;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
        inertia = 0.2;
    };
    class hlc_optic_Kern2d : hlc_optic_Kern
    {
        author = "Toadie, Kaukaussus";
        displayname = "Kern AARAU 4x24(2D)";
        ACE_ScopeAdjust_Vertical[] = { -5, 13 };
        ACE_ScopeAdjust_Horizontal[] = { -7, 7 };
        ACE_ScopeAdjust_VerticalIncrement = 0.25;
        ACE_ScopeAdjust_HorizontalIncrement = 0.25;
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 7;
            modelOptics = "\hlc_wp_sigamt\mesh\aarau\aarau_optics";
            class OpticsModes
            {
                class Snip
                {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    discreteDistance[] = { 200, 300, 400, 500, 600, 700, 800 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 800;
                    memoryPointCamera = "ADS_eye";
                    modelOptics[] = { "\hlc_wp_sigamt\mesh\aarau\aarau_optics" };
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT_EYE";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 2;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class hlc_STGW_base : Rifle_Base_F
    {
        dlc = "Niarms_SG510";
        scope = protected;
        recoil = "recoil_ebr";
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = false;
        magazineReloadSwitchPhase = 0.5;
        magazines[] = {
            "hlc_24Rnd_75x55_B_stgw", "hlc_24Rnd_75x55_ap_stgw", "hlc_24Rnd_75x55_T_stgw"
        };
        class Library
        {
            libTextDesc = "SIG Stgw.510";
        };
        reloadAction = "GestureReloadEBR";
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        cameraDir = "";
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
        distancezoommax = 300;
        distancezoommin = 300;
        drysound[] = { "A3\sounds_f\weapons\other\dry1", 0.630957, 1, 30 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        modes[] = { "Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium" };
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.25;
        opticsZoomInit = 0.75;
        reloadmagazinesound[] = { "hlc_wp_sigamt\snd\sigamt_reload", 0.630957, 1, 35 };
        soundbullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };


        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            };
            class CowsSlot : CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleitems[] = {};
            };
            class PointerSlot : PointerSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                compatibleitems[] = {};
            };
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\AMT_fire_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_suppressed_indoor", 1.9952624, 1, 100 };
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
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\AMT_fire_forrest", 1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_suppressed_indoor", 1.9952624, 1, 100 };
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

    class hlc_rifle_STGW57 : hlc_STGW_base
    {
        author = "Toadie";
        AB_barrelTwist = 10.6;
        AB_barrelLength = 23;
        ACE_barrelTwist = 270.8;
        ACE_barrelLength = 583.4;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = true;
        recoil = "recoil_stgw57";
        displayName = "SIG Stgw.57";
        descriptionShort = "Infantry Service Rifle<br/>Caliber: 7.5x55mm GP11";
        reloadAction = "HLC_GestureReloadSTGW57";
        drysound[] = { "hlc_wp_sigamt\snd\amt_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_sigamt\snd\sigamt_reload", 0.75, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        changeFiremodeSound[] = { "\hlc_wp_sigamt\snd\amtswitch", 1, 1, 20 };
        magazines[] = {
            "hlc_24Rnd_75x55_B_stgw", "hlc_24Rnd_75x55_ap_stgw", "hlc_24Rnd_75x55_T_stgw"
        };
        model = "hlc_wp_sigamt\mesh\stgw\stgw57.p3d";
        picture = "\hlc_wp_sigamt\tex\ui\gear_57_x_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 100, 150, 200, 230, 260, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640 };
        discretedistanceinitindex = 2;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.65;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 89;
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
            };
            class CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleitems[] = { "hlc_optic_Kern", "hlc_optic_Kern2d" };
            };
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_forrest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_suppressed_indoor", 1, 1, 100 };
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

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_forrest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_suppressed_indoor", 1, 1, 100 };
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
            reloadtime = 0.105;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
    };


    class hlc_rifle_stgw57_RIS : hlc_STGW_base
    {
        author = "Toadie, Kaukassus";
        picture = "\hlc_wp_sigamt\tex\ui\gear_57ris_x_ca.paa";
        displayName = "SIG Stgw.57+RIS";
        descriptionShort = "Infantry Service Rifle mit Richner-Waffen Fass57 M1913 Rail<br/>Caliber: 7.5x55mm GP11";
        model = "hlc_wp_sigamt\mesh\57commando\stgw57.p3d";
        AB_barrelTwist = 10.6;
        AB_barrelLength = 23;
        ACE_barrelTwist = 270.8;
        ACE_barrelLength = 583.4;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = true;
        recoil = "recoil_stgw57";
        reloadAction = "HLC_GestureReloadSTGW57";
        drysound[] = { "hlc_wp_sigamt\snd\amt_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_sigamt\snd\sigamt_reload", 0.75, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        changeFiremodeSound[] = { "\hlc_wp_sigamt\snd\amtswitch", 1, 1, 20 };
        magazines[] = {
            "hlc_24Rnd_75x55_B_stgw", "hlc_24Rnd_75x55_ap_stgw", "hlc_24Rnd_75x55_T_stgw"
        };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 100, 150, 200, 230, 260, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640 };
        discretedistanceinitindex = 2;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.65;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 89;
            class MuzzleSlot : asdg_MuzzleSlot_762
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
            };
            class CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleitems[] = {};
            };
            class asdg_OpticRail_57Ris : asdg_OpticRail1913 {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_forrest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_suppressed_indoor", 1, 1, 100 };
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

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_forrest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_suppressed_indoor", 1, 1, 100 };
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
            reloadtime = 0.105;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
    };

    class hlc_rifle_stgw57_commando :hlc_rifle_stgw57_RIS
    {
        author = "Toadie, Kaukassus";
        AB_barrelTwist = 10.6;
        AB_barrelLength = 10.6;
        ACE_barrelTwist = 270.8;
        ACE_barrelLength = 266.7;
        deployedpivot = "deploypivot";
        hasBipod = false;
        displayName = "SIG Stgw.57 Commando";
        model = "hlc_wp_sigamt\mesh\57commando\commando.p3d";
        inertia = 0.45;
        recoil = "recoil_stgw57k";
        picture = "\hlc_wp_sigamt\tex\ui\gear_57commando_x_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 75;
        };
    };

    class hlc_rifle_sig5104 : hlc_STGW_base
    {
        author = "Toadie,Kaukassus";
        AB_barrelTwist = 12;
        AB_barrelLength = 19.9;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 505;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = true;
        displayName = "SIG SG510-4";
        inertia = 0.5;
        recoil = "recoil_5104";
        magazines[] = {
            "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_mk316_amt", "hlc_20Rnd_762x51_bball_amt", "hlc_20Rnd_762x51_T_amt"
        };
        descriptionShort = "Infantry Service Rifle<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadAMT";
        drysound[] = { "hlc_wp_sigamt\snd\amt_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_sigamt\snd\sigamt_reload", 0.75, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        changeFiremodeSound[] = { "hlc_wp_sigamt\snd\amtswitch", 1, 1, 20 };
        model = "hlc_wp_sigamt\mesh\amt\5104.p3d";
        picture = "\hlc_wp_sigamt\tex\ui\gear_5104_x_ca.paa";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        discretedistance[] = { 100, 150, 200, 250, 300, 350, 400, 450, 450, 500, 550, 600 };
        discretedistanceinitindex = 2;
        memoryPointCamera = "eye";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 89;
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
            };
            class CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleitems[] = {};
            };
            class asdg_OpticRail_SPS : asdg_OpticRail1913 {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_forrest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_suppressed_indoor", 1.9952624, 1, 100 };
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

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_sigamt\snd\amt_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_forrest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_fire_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_sigamt\snd\amt_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_sigamt\snd\amt_suppressed_indoor", 1, 1, 100 };
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
            reloadtime = 0.105;
            soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
            soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponsoundeffect = "DefaultRifle";
        };
    };

    class hlc_rifle_amt : hlc_rifle_sig5104
    {
        author = "Toadie, Kaukassus";
        AB_barrelTwist = 12;
        AB_barrelLength = 21;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 533.4;
        deployedpivot = "deploypivot";
        hasBipod = false;
        scope = public;
        displayName = "SIG AMT";
        magazines[] = {
            "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_mk316_amt", "hlc_20Rnd_762x51_bball_amt", "hlc_20Rnd_762x51_T_amt"
        };
        descriptionShort = "Infantry Service Rifle<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadAMT";
        picture = "\hlc_wp_sigamt\tex\ui\gear_amt_x_ca.paa";
        drysound[] = { "hlc_wp_sigamt\snd\amt_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_sigamt\snd\sigamt_reload", 0.75, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        changeFiremodeSound[] = { "hlc_wp_fal\snd\ak_selector", 1, 1, 20 };
        model = "hlc_wp_sigamt\mesh\amt\amt.p3d";
        modes[] = { "Single", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium" };
    };
};