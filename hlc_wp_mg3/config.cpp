#include "\hlc_core\script_macros.hpp" 

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches
{
    class hlcweapons_MG3s
    {
        requiredaddons[] = {"hlcweapons_core"};
        units[] = { "HLC_MG3_ammobox", "HLC_MG42_ammobox", "Weapon_hlc_lmg_MG42", "Weapon_hlc_lmg_mg42_bakelite", "Weapon_hlc_lmg_MG42KWS_t","Weapon_hlc_lmg_MG42KWS_t", "Weapon_hlc_lmg_MG42KWS_g","Weapon_hlc_lmg_MG42KWS_b","Weapon_hlc_lmg_MG3","Weapon_hlc_lmg_MG3_optic","Weapon_hlc_lmg_MG3KWS_t","Weapon_hlc_lmg_MG3KWS_g","Weapon_hlc_lmg_MG3KWS_b" };
        weapons[] = {"hlc_lmg_MG42","hlc_lmg_mg42_bakelite","hlc_lmg_MG42KWS_t","hlc_lmg_MG42KWS_g","hlc_lmg_MG42KWS_B","hlc_lmg_MG3","hlc_lmg_MG3_optic","hlc_lmg_MG3KWS","hlc_lmg_MG3KWS_b","hlc_lmg_MG3KWS_g"};
        magazines[] = {};
        version = "1.1";
        author = "toadie";
    };
};
class CfgMods
{
    class Mod_Base;
    class Niarms_MG3 :Mod_Base
    {
        name = "NIArsenal: MG3 GPMGs";
        picture = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class nia_charms_slot;
class asdg_FrontSideRail;
class asdg_OpticRail1913_short_MG;

class CfgMovesBasic
{
    class DefaultDie;
    class ManActions
    {
        HLC_GestureReloadMG42 = "HLC_GestureReloadMG42"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadMG3 = "HLC_GestureReloadMG3";
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42", "Gesture" };
            HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions
        {
            HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42_Prone", "Gesture" };
            HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3_Prone", "Gesture" };
        };
        /*
        class RifleKneelActions : RifleBaseStandActions
        {
        HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
        };*/
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions
        {
            HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42_Context", "Gesture" };
            HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions
        {
            HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42_Context", "Gesture" };
            HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions
            {
                HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42_Prone", "Gesture" };
                HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3_Prone", "Gesture" };
            };




        };
    };
};

class CfgGesturesMale
{
    class Default;
    class States
    {

        class HLC_GestureReloadMG42 :Default
        {
            file = "hlc_wp_mg3\anim\reload_mg42_standing.rtm";
            speed = -10.2333333;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1 };
        };

        class HLC_GestureReloadMG42_Prone :Default
        {
            file = "hlc_wp_mg3\anim\reload_mg42_prone.rtm";
            speed = -10.2333333;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1 };
        };
        class HLC_GestureReloadMG42_Context : HLC_GestureReloadMG42
        {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadMG3 :Default
        {
            file = "hlc_wp_mg3\anim\reload_mg3_standing.rtm";
            speed = -10.4;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1 };
        };

        class HLC_GestureReloadMG3_Prone :Default
        {
            file = "hlc_wp_mg3\anim\reload_mg3_prone.rtm";
            speed = -10.5;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1 };
        };
        class HLC_GestureReloadMG3_Context : HLC_GestureReloadMG3
        {
            mask = "handsWeapon_context";
        };
    };
};
//CFGammo entries to Core, see 
//HLC_792x57_Ball
/*class CfgAmmo
{
    class B_556x45_Ball;
    //SS patrone
    //Standard FMJ
    /*
    s.S Patrone
759.9 typicalSpeed
12.533 hit
0.424 caliber
3 visibleFireTime
80 audibleFire
-0.00071885 airFriction

    class hlc_792x57_SS : B_556x45_Ball
    {
        airfriction = -0.00071885;
        caliber = 0.424;
        typicalSpeed = 759.9;
        maxspeed = 759.9;
        audibleFire = 80;
        visibleFireTime = 3;
        suppressionRadiusBulletClose = 5;
        suppressionRadiusHit = 7;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 12.533;
        airlock = 1;
        ACE_caliber = 8.2;
        ACE_bulletLength = 28.651;
        ACE_bulletMass = 9.9;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.315 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 785, 800, 815 };
        ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
    };
    //SmK Tracer/SmK -v
    //SmK Spitzgescho� mit Kern Leuchtspur /
    /*
    884.9 typicalSpeed
11.57 hit
0.79 caliber
3 visibleFireTime
80 audibleFire
-0.0007423 airFriction

    class B_556x45_Ball_Tracer_Red;
    class hlc_792x57_SmKLspr : B_556x45_Ball_Tracer_Red
    {
        airfriction = -0.0007423;
        caliber = 0.79;
        typicalSpeed = 884.9;
        maxspeed = 884.9;
        audibleFire = 80;
        visibleFireTime = 3;
        suppressionRadiusBulletClose = 7;
        suppressionRadiusHit = 9;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 11.57;
        airlock = 1;
        ACE_caliber = 8.2;
        ACE_bulletLength = 28.651;
        ACE_bulletMass = 10;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.315 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 785, 800, 815 };
        ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
    };
    //SmK AP
    //SmK Spitzgescho� mit Hartkern  
    /*
    853.44 typicalSpeed
    9.9925 hit
    1.875 caliber
    3 visibleFireTime
    80 audibleFire
    -0.00070184 airFriction


    class hlc_792x57_SmkH : B_556x45_Ball
    {
        airfriction = -0.00070184;
        audibleFire = 80;
        visibleFireTime = 3;
        caliber = 1.875;
        typicalSpeed = 853.44;
        maxspeed = 853.44;
        suppressionRadiusBulletClose = 5;
        suppressionRadiusHit = 7;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 16;
        airlock = 1;
        ACE_caliber = 8.077;
        ACE_bulletLength = 28.651;
        ACE_bulletMass = 12.7008;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.315 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 785, 800, 815 };
        ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
    };

};    */
class CfgVehicles
{
    class B_supplyCrate_F;
    class HLC_MG42_ammobox : B_supplyCrate_F
    {
        dlc = "Niarms_MG3";
        scope = 2;
        vehicleClass = "Ammo";
        scopeCurator = 2;
        displayName = "HLC MG42 Supply Box";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines
        {
            __M_MAG(hlc_50Rnd_792x57_B_MG42, 12);
            __M_MAG(hlc_50Rnd_792x57_M_MG42, 12);
            __M_MAG(hlc_50Rnd_792x57_T_MG42, 12);
            __M_MAG(hlc_50Rnd_792x57_AP_MG42, 12);
            __M_MAG(hlc_100Rnd_792x57_B_MG42, 8);
            __M_MAG(hlc_100Rnd_792x57_M_MG42, 8);
            __M_MAG(hlc_100Rnd_792x57_T_MG42, 8);
            __M_MAG(hlc_100Rnd_792x57_AP_MG42, 8);
            __M_MAG(hlc_200Rnd_792x57_B_MG42, 4);
            __M_MAG(hlc_200Rnd_792x57_M_MG42, 4);
            __M_MAG(hlc_200Rnd_792x57_T_MG42, 4);
            __M_MAG(hlc_200Rnd_792x57_AP_MG42, 4);
        };
        class TransportWeapons
        {
            __M_WEP(hlc_lmg_MG42, 5);
            __M_WEP(hlc_lmg_mg42_bakelite, 5);
            __M_WEP(hlc_lmg_MG42KWS_t, 3);
            __M_WEP(hlc_lmg_MG42KWS_g, 3);
            __M_WEP(hlc_lmg_mg42kws_b, 3);
        };
    };
    class HLC_MG3_ammobox : B_supplyCrate_F
    {
        dlc = "Niarms_MG3";
        scope = 2;
        vehicleClass = "Ammo";
        scopeCurator = 2;
        displayName = "HLC MG3 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines
        {
            __M_MAG(hlc_50Rnd_762x51_B_MG3, 12);
            __M_MAG(hlc_50Rnd_762x51_M_MG3, 12);
            __M_MAG(hlc_50Rnd_762x51_T_MG3, 12);
            __M_MAG(hlc_50Rnd_762x51_Barrier_MG3, 12);
            __M_MAG(hlc_100Rnd_762x51_B_MG3, 8);
            __M_MAG(hlc_100Rnd_762x51_M_MG3, 8);
            __M_MAG(hlc_100Rnd_762x51_T_MG3, 8);
            __M_MAG(hlc_100Rnd_762x51_Barrier_MG3, 8);
            __M_MAG(hlc_250Rnd_762x51_B_MG3, 4);
            __M_MAG(hlc_250Rnd_762x51_M_MG3, 4);
            __M_MAG(hlc_250Rnd_762x51_T_MG3, 4);
            __M_MAG(hlc_250Rnd_762x51_Barrier_MG3, 4);
        };
        class TransportWeapons
        {
            __M_WEP(hlc_lmg_MG3, 4);
            __M_WEP(hlc_lmg_MG3_optic, 4);
            __M_WEP(hlc_lmg_MG3KWS, 4);
            __M_WEP(hlc_lmg_MG3KWS_g, 4);
            __M_WEP(hlc_lmg_MG3KWS_b, 4);
        };
        class TransportItems
        {
            __M_ITM(optic_Holosight, 10);
            __M_ITM(optic_hamr, 10);
            __M_ITM(optic_rco, 10);
            __M_ITM(optic_ACO_grn, 10);
        };
    };
    class Weapon_Base_F;
    __WEAPONHOLDER(hlc_lmg_MG42, hlc_50Rnd_792x57_B_MG42, MG42, Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_mg42_bakelite, hlc_50Rnd_792x57_B_MG42, MG42(Bakelite), Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_MG42KWS_t, hlc_50Rnd_792x57_B_MG42, MG42KWS(Tan), Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_MG42KWS_b, hlc_50Rnd_792x57_B_MG42, MG42KWS(Black), Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_MG42KWS_g, hlc_50Rnd_792x57_B_MG42, MG42KWS(Green), Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_MG3, hlc_50Rnd_792x57_B_MG42, MG3, Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_MG3_optic, hlc_50Rnd_762x51_M_MG3, Mg M/62, Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_MG3KWS, hlc_50Rnd_762x51_M_MG3, MG3KWS(Tan), Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_MG3KWS_b, hlc_50Rnd_762x51_M_MG3, MG3KWS(Black), Niarms_MG3, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_MG3KWS_g, hlc_50Rnd_762x51_M_MG3, MG3KWS(Green), Niarms_MG3, Toadie, MachineGuns);

};

class CfgMagazines{
    class 30Rnd_556x45_Stanag;

    class hlc_50Rnd_792x57_B_MG42 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_792x57_Ball";
        count = 50;
        descriptionshort = $STR_NIA_DESC_50Rnd_792x57_B;
        displayname = $STR_NIA_50rnd_792x57_B_MG42;
        model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
        initspeed = 759.9;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg42ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 40;
        displaynameshort = $STR_NIA_792_FMJ;
        nameSound = "mgun";
        ACE_isBelt = 1;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_100Rnd_792x57_B_MG42 : hlc_50Rnd_792x57_B_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_792x57_B;
        displayname = $STR_NIA_100rnd_792x57_B_MG42;
        mass = 72;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd100rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
    };
    class hlc_200Rnd_792x57_B_MG42 : hlc_50Rnd_792x57_B_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 200;
        descriptionshort = $STR_NIA_DESC_200Rnd_792x57_B;
        displayname = $STR_NIA_200rnd_792x57_B_MG42;
        mass = 120;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
    };

    class hlc_50Rnd_792x57_M_MG42 : hlc_50Rnd_792x57_B_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_792x57_Tracer";
        descriptionshort = $STR_NIA_DESC_50Rnd_792x57_M;
        displayname = $STR_NIA_50rnd_792x57_m_MG42;
        initspeed = 884.9;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg42mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        mass = 40;
        displaynameshort = $STR_NIA_792_M;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_100Rnd_792x57_M_MG42 : hlc_50Rnd_792x57_M_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_792x57_M;
        displayname = $STR_NIA_100rnd_792x57_m_MG42;
        mass = 72;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd100rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
    };
    class hlc_200Rnd_792x57_M_MG42 : hlc_50Rnd_792x57_M_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 200;
        descriptionshort = $STR_NIA_DESC_200Rnd_792x57_M;
        displayname = $STR_NIA_200rnd_792x57_m_MG42;
        mass = 120;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
    };

    class hlc_50Rnd_792x57_T_MG42 : hlc_50Rnd_792x57_B_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_792x57_Tracer";
        descriptionshort = $STR_NIA_DESC_50Rnd_792x57_T;
        displayname = $STR_NIA_50rnd_792x57_t_MG42;
        model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
        initspeed = 884.9;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg42tracer_ca.paa";
        scope = 2;
        tracersevery = 1;
        mass = 40;
        displaynameshort = $STR_NIA_792_T;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_100Rnd_792x57_T_MG42 : hlc_50Rnd_792x57_T_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_792x57_T;
        displayname = $STR_NIA_100rnd_792x57_t_MG42;
        mass = 72;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd100rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
    };
    class hlc_200Rnd_792x57_T_MG42 : hlc_50Rnd_792x57_T_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 200;
        descriptionshort = $STR_NIA_DESC_200Rnd_792x57_T;
        displayname = $STR_NIA_200rnd_792x57_t_MG42;
        mass = 120;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
    };

    class hlc_50Rnd_792x57_AP_MG42 : hlc_50Rnd_792x57_B_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_792x57_AP";
        descriptionshort = $STR_NIA_DESC_50Rnd_792x57_AP;
        displayname = $STR_NIA_50rnd_792x57_ap_MG42;
        initspeed = 853.44;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg42AP_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 24;
        displaynameshort = $STR_NIA_792_AP;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_100Rnd_792x57_AP_MG42 : hlc_50Rnd_792x57_AP_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_792x57_AP;
        displayname = $STR_NIA_100rnd_792x57_ap_MG42;
        mass = 48;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd100rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
    };
    class hlc_200Rnd_792x57_AP_MG42 : hlc_50Rnd_792x57_AP_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 200;
        descriptionshort = $STR_NIA_DESC_200Rnd_792x57_AP;
        displayname = $STR_NIA_200rnd_792x57_ap_MG42;
        mass = 96;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_792x57_Gurt34.p3d;
        modelSpecialIsProxy = 1;
    };

    class hlc_50Rnd_762x51_B_MG3 : hlc_50Rnd_792x57_B_MG42 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        count = 50;
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_B;
        displayname = $STR_NIA_50rnd_762x51_epr_MG3;
        model = "hlc_wp_mg3\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg3ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 20;
        displaynameshort = $STR_NIA_762NATO_EPR;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_greentip_co.paa" };
    };
    class hlc_100Rnd_762x51_B_MG3 : hlc_50Rnd_762x51_B_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_B;
        displayname = $STR_NIA_100rnd_762x51_epr_MG3;
        mass = 48;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\100rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_greentip_co.paa" };
    };
    class hlc_250Rnd_762x51_B_MG3 : hlc_50Rnd_762x51_B_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 250;
        descriptionshort = $STR_NIA_DESC_250Rnd_762x51_B;
        displayname = $STR_NIA_250rnd_762x51_epr_MG3;
        mass = 110;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
    };

    class hlc_50Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_B_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_M;
        displayname = $STR_NIA_50rnd_762x51_m_MG3;
        initspeed = 853;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg3mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        mass = 20;
        displaynameshort = $STR_NIA_762NATO_M;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_100Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_M_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_M;
        displayname = $STR_NIA_100rnd_762x51_m_MG3;
        mass = 48;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\100rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_250Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_M_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 250;
        descriptionshort = $STR_NIA_DESC_250Rnd_762x51_M;
        displayname = $STR_NIA_250rnd_762x51_m_MG3;
        mass = 110;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
    };

    class hlc_50Rnd_762x51_mdim_MG3 : hlc_50Rnd_762x51_B_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_Mdim;
        displayname = $STR_NIA_50rnd_762x51_mdim_MG3;
        initspeed = 853;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg3mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        mass = 20;
        displaynameshort = $STR_NIA_762NATO_MDim;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_100Rnd_762x51_mdim_MG3 : hlc_50Rnd_762x51_mdim_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_Mdim;
        displayname = $STR_NIA_100rnd_762x51_mdim_MG3;
        mass = 48;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\100rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_250Rnd_762x51_mdim_MG3 : hlc_50Rnd_762x51_mdim_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 250;
        descriptionshort = $STR_NIA_DESC_250Rnd_762x51_Mdim;
        displayname = $STR_NIA_250rnd_762x51_mdim_MG3;
        mass = 110;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
    };

    class hlc_50Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_B_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_Barrier";
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_Msost;
        displayname = $STR_NIA_50rnd_762x51_barrier_MG3;
        initspeed = 815;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg3mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        mass = 20;
        displaynameshort = $STR_NIA_762NATO_MSOST;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_100Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_Barrier_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_Msost;
        displayname = $STR_NIA_100rnd_762x51_barrier_MG3;
        mass = 48;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\100rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_250Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_Barrier_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 250;
        descriptionshort = $STR_NIA_DESC_250Rnd_762x51_Msost;
        displayname = $STR_NIA_250rnd_762x51_barrier_MG3;
        mass = 110;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
    };

    class hlc_50Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_B_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_T;
        displayname = $STR_NIA_50rnd_762x51_t_MG3;
        initspeed = 853;
        lastroundstracer = 5;
        picture = "\hlc_wp_mg3\tex\ui\m_mg3tracer_ca.paa";
        scope = 2;
        tracersevery = 1;
        mass = 20;
        displaynameshort = $STR_NIA_762NATO_Tracer;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\50rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_100Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_T_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_T;
        displayname = $STR_NIA_100rnd_762x51_t_MG3;
        mass = 48;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\100rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_250Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_T_MG3 {
        dlc = "Niarms_MG3";
        author = "Toadie, Spartan0536";
        count = 250;
        descriptionshort = $STR_NIA_DESC_250Rnd_762x51_T;
        displayname = $STR_NIA_250rnd_762x51_t_MG3;
        mass = 110;
        modelSpecial = hlc_wp_mg3\mesh\magazine\proxy\250rnd_762NATO_DM1.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
};

class CfgMagazineWells {
    class CBA_792x57_LINKS {
        NIA_belts[] = { __792MG42_MAGS };
    };
    class CBA_762x51_LINKS {};
    class CBA_762x51_MG3 : CBA_762x51_LINKS {
        NIA_MG3_belts[] = { __762MG3_MAGS };
    };
};

class CfgWeapons {
    class Rifle;

    class Rifle_Base_F : Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class hlc_MG42_base : Rifle_Base_F
    {
        dlc = "Niarms_MG3";
        ACE_Overheating_allowSwapBarrel = 1;
        ACE_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        ACE_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        ACE_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        AGM_Overheating_allowSwapBarrel = 1;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        agm_bipod = 1;
        hasBipod = true;
        bg_bipod = 1;
        cse_bipod = 1;
        tmr_autorest_deployable = 1;
        TMR_acc_bipod = 1;
        scope = protected;
        cursor = "mg";
        cursoraim = "EmptyCursor";
        magazineReloadSwitchPhase = 0.5;
        deployedpivot = "deploypoint";
        magazines[] = { __792MG42_MAGS };
        maxRecoilSway = 0.0150;
        swayDecaySpeed = 1.25;
        recoil = "recoil_zafir";
        __AI_DISPERSION_COEF;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "", "", "", "", "" };
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
            /*class MuzzleCloud
            {
            positionName = "usti hlavne";
            directionName = "konec hlavne";
            effectName = "MachineGunCloud";
            };*/
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot {
            iconPosition[] = { 0.2, 0.7 };
            iconScale = 0.2;
            };
            class CowsSlot {
            iconPosition[] = { 0.5, 0.35 };
            iconScale = 0.2;
            };
            class PointerSlot {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class CharmSlot : nia_charms_slot{};
        };
        descriptionShort = $STR_NIA_MG42_DESC;
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

        modes[] = { "FullAuto", "close", "short", "medium", "medium_burst", "far", "veryfar", "far_optic1", "toofar_optic1", "far_optic2", "toofar_optic2" };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = { "StandardSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_Mg3\snd\mg3_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_Mg3\snd\mg3_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "MG42_Shot_SoundSet", "MG42_Tail_SoundSet" };
            };
            __ROF(1200);
            __MOA(2.5);

            __AI_ROF_MG_FULLAUTO;
        };
        class close : FullAuto {
            burst = 10; 
                aiRateOfFire = 0.05; 
                aiRateOfFireDistance = 50; 
                aiRateOfFireDispersion = 0.5; 
                minRange = 10; 
                minRangeProbab = 0.1; 
                midRange = 25; 
                midRangeProbab = 0.8; 
                maxRange = 50; 
                maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class short : close{
            burst = 8;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 0.5;
            minRange = 25;
            minRangeProbab = 0.1;
            midRange = 50;
            midRangeProbab = 0.8;
            maxRange = 100;
            maxRangeProbab = 0.1;
        };
        class medium : close {
            burst = 5;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 200;
            aiRateOfFireDispersion = 1;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 100;
            midRangeProbab = 0.8;
            maxRange = 200;
            maxRangeProbab = 0.1;
        };
        class medium_burst : close {
            burst = 4;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 400;
            aiRateOfFireDispersion = 1;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.8;
            maxRange = 400;
            maxRangeProbab = 0.1;
        };
        class far : close {
            burst = 4;
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 400;
            aiRateOfFireDispersion = 1;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.8;
            maxRange = 400;
            maxRangeProbab = 0.1;
        };
        class veryfar : close {
            __AI_ROF_MG_VERYFAR_BURST;
        };
        class far_optic1 : medium {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_MG_FAR_SCOPE_BURST;
        };
        class toofar_optic1 : medium {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_MG_VERYFAR_SCOPE_BURST;
        };
        class far_optic2 : far_optic1 {
            requiredOpticType = 2;
            __AI_ROF_MG_FAR_SCOPE_BURST;
        };
        class toofar_optic2 : far_optic2 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_MG_VERYFAR_SCOPE_BURST;
        };

        drysound[] = { "\hlc_wp_mg3\snd\mg3_dryfire", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_mg3\snd\mg42_reload", 0.8, 1, 18 };
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
   };

    class hlc_lmg_MG42 : hlc_MG42_base {
        maxZeroing = 1100;
        scope = public;
        author = "Toadie";
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 431.8;
        model = "\hlc_wp_MG3\mesh\mg42\mg42.p3d";
        reloadaction = "HLC_GestureReloadMG42";
        picture = "\hlc_wp_mg3\tex\ui\gear_mg42_ca";
        displayName = $STR_NIA_lmg_Mg42;
        discretedistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100 };
        //cameradir = "aim_point";
        //discreteDistanceCameraPoint[] = { "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11" }; /// the angle of gun changes with zeroing
        distanceZoomMin = 100;
        distanceZoomMax = 1100;
        discretedistanceinitindex = 0;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG42reciever_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2wood_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_MG3\anim\handpose_MG42.rtm" };
        __DEXTERITY(11.6,-3);
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 242;
        };
        inertia = 1.36;

        class Library
        {
            libTextDesc = "MG42";
        };
        magazineWell[] = {"CBA_792x57_LINKS"};
        class __MAGSWITCHCLASS {
            hlc_50Rnd_792x57_B_MG42 = "hlc_lmg_MG42";
            hlc_50Rnd_792x57_M_MG42 = "hlc_lmg_MG42";
            hlc_50Rnd_792x57_T_MG42 = "hlc_lmg_MG42";
            hlc_50Rnd_792x57_AP_MG42 = "hlc_lmg_MG42";
            default = "hlc_lmg_MG42_100rnd";
        };
    };
    class hlc_lmg_MG42_100rnd : hlc_lmg_MG42
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg42\mg42_100rnd.p3d";
    };
    class hlc_lmg_mg42_bakelite :hlc_lmg_mg42
    {
        author = "Toadie";
        model = "\hlc_wp_MG3\mesh\mg42\mg42_a.p3d";
        displayName = $STR_NIA_lmg_Mg42_bakelite;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG42reciever_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50Rnd_792x57_B_MG42 = "hlc_lmg_mg42_bakelite";
            hlc_50Rnd_792x57_M_MG42 = "hlc_lmg_mg42_bakelite";
            hlc_50Rnd_792x57_T_MG42 = "hlc_lmg_mg42_bakelite";
            hlc_50Rnd_792x57_AP_MG42 = "hlc_lmg_mg42_bakelite";
            default = "hlc_lmg_mg42_bakelite_100rnd";
        };
    };
    class hlc_lmg_mg42_bakelite_100rnd : hlc_lmg_mg42_bakelite
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg42\mg42_a_100rnd.p3d";
    };
    class hlc_lmg_MG42KWS_t : hlc_lmg_MG42 {
        author = "Toadie";
        model = "\hlc_wp_MG3\mesh\mg42\mg42kws.p3d";
        displayName = $STR_NIA_lmg_MG42KWS_t;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_MG3\anim\handpose_MG3kws.rtm" };
        picture = "\hlc_wp_mg3\tex\ui\gear_mg42kws_ca";
        __DEXTERITY(10.5,-1);
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 193;
            class CowsSlot : asdg_OpticRail1913_short_MG {
                iconPosition[] = { 0.5, 0.30000001 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail{
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
        };
        inertia = 1.2;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverKWS_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1KWS_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50Rnd_792x57_B_MG42 = "hlc_lmg_MG42KWS_t";
            hlc_50Rnd_792x57_M_MG42 = "hlc_lmg_MG42KWS_t";
            hlc_50Rnd_792x57_T_MG42 = "hlc_lmg_MG42KWS_t";
            hlc_50Rnd_792x57_AP_MG42 = "hlc_lmg_MG42KWS_t";
            default = "hlc_lmg_MG42KWS_t_100rnd";
        };
    };
    class hlc_lmg_MG42KWS_t_100rnd : hlc_lmg_MG42KWS_t
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg42\mg42kws_100rnd.p3d";
    };
    class hlc_lmg_mg42kws_g: hlc_lmg_mg42kws_t
    {
        author = "Toadie";
        displayName = $STR_NIA_lmg_MG42KWS_g;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverkws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_green_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50Rnd_792x57_B_MG42 = "hlc_lmg_MG42KWS_g";
            hlc_50Rnd_792x57_M_MG42 = "hlc_lmg_MG42KWS_g";
            hlc_50Rnd_792x57_T_MG42 = "hlc_lmg_MG42KWS_g";
            hlc_50Rnd_792x57_AP_MG42 = "hlc_lmg_MG42KWS_g";
            default = "hlc_lmg_MG42KWS_g_100rnd";
        };
    };
    class hlc_lmg_MG42KWS_g_100rnd : hlc_lmg_MG42KWS_g
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg42\mg42kws_100rnd.p3d";
    };
    class hlc_lmg_mg42kws_b :hlc_lmg_MG42KWS_t
    {
        author = "Toadie";
        displayName = $STR_NIA_lmg_MG42KWS_b;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverkws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_black_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50Rnd_792x57_B_MG42 = "hlc_lmg_mg42kws_b";
            hlc_50Rnd_792x57_M_MG42 = "hlc_lmg_mg42kws_b";
            hlc_50Rnd_792x57_T_MG42 = "hlc_lmg_mg42kws_b";
            hlc_50Rnd_792x57_AP_MG42 = "hlc_lmg_mg42kws_b";
            default = "hlc_lmg_MG42KWS_b_100rnd";
        };
    };
    class hlc_lmg_MG42KWS_b_100rnd : hlc_lmg_MG42KWS_b
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg42\mg42kws_100rnd.p3d";
    };

    class hlc_lmg_MG3 : hlc_MG42_base {
        maxZeroing = 1100;
        scope = public;
        author = "Toadie";
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 431.8;
        model = "\hlc_wp_MG3\mesh\mg3\mg3.p3d";
        reloadaction = "HLC_GestureReloadMG3";
        descriptionShort = $STR_NIA_MG3_DESC;
        picture = "\hlc_wp_mg3\tex\ui\gear_mg3_ca";
        displayName = $STR_NIA_lmg_MG3;
        reloadmagazinesound[] = { "\hlc_wp_mg3\snd\mg3_reload", 0.8, 1, 18 };
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        __DEXTERITY(10.5,-3);
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG3reciever_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2plastic_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };
        magazines[] = { __762MG3_MAGS, __762NATO_BELTS };
        magazineWell[] = {"CBA_762x51_LINKS", "CBA_762x51_MG3"};
        discretedistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100 };
        //cameradir = "aim_point";
        //discreteDistanceCameraPoint[] = { "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11" }; /// the angle of gun changes with zeroing
        distanceZoomMin = 100;
        distanceZoomMax = 1100;
        discretedistanceinitindex = 0;

        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_MG3\anim\handpose_MG42.rtm" };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 220;
        };
        inertia = 1.25;

        class FullAuto : FullAuto
        {
            class BaseSoundModeType;

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "MG3_Shot_SoundSet", "MG3_Tail_SoundSet" };
            };
            __ROF(1000);
            __MOA(3);

            __AI_ROF_MG_FULLAUTO;
        };
        class close : FullAuto {
                burst = 10;
                aiRateOfFire = 0.06; 
                aiRateOfFireDistance = 50; 
                aiRateOfFireDispersion = 0.5; 
                minRange = 10; 
                minRangeProbab = 0.1; 
                midRange = 25; 
                midRangeProbab = 0.8;
                maxRange = 50; 
                maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class short : close{
            burst = 8; 
            aiRateOfFire = 0.06;
            aiRateOfFireDistance = 100; 
            aiRateOfFireDispersion = 0.5; 
            minRange = 25; 
            minRangeProbab = 0.1; 
            midRange = 50; 
            midRangeProbab = 0.8; 
            maxRange = 100; 
            maxRangeProbab = 0.1;
        };
        class medium : close {
                burst = 5; 
                aiRateOfFire = 0.06;
                aiRateOfFireDistance = 200;
                aiRateOfFireDispersion = 1; 
                minRange = 50; 
                minRangeProbab = 0.1; 
                midRange = 100; 
                midRangeProbab = 0.8; 
                maxRange = 200; 
                maxRangeProbab = 0.1;
        };
        class medium_burst : close {
                burst = 4; 
                aiRateOfFire = 0.06;
                aiRateOfFireDistance = 400; 
                aiRateOfFireDispersion = 1; 
                minRange = 100; 
                minRangeProbab = 0.1; 
                midRange = 200; 
                midRangeProbab = 0.8; 
                maxRange = 400; 
                maxRangeProbab = 0.1;
        };
        class far : close {
            burst = 4;
            aiRateOfFire = 0.06;
            aiRateOfFireDistance = 400;
            aiRateOfFireDispersion = 1;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.8;
            maxRange = 400;
            maxRangeProbab = 0.1;
        };
        class veryfar : close {
            __AI_ROF_MG_VERYFAR_BURST;
        };
        class far_optic1 : medium {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_MG_FAR_SCOPE_BURST;
        };
        class toofar_optic1 : medium {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_MG_VERYFAR_SCOPE_BURST;
        };
        class far_optic2 : far_optic1 {
            burst = 3;
            requiredOpticType = 2;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 750;
            midRangeProbab = 0.7;
            maxRange = 900;
            maxRangeProbab = 0.01;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 900;
        };
        class toofar_optic2 : far_optic2 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_MG_VERYFAR_SCOPE_BURST;
        };
        class Library
        {
            libTextDesc = "MG3";
        };
        class __MAGSWITCHCLASS {
            hlc_50Rnd_762x51_B_MG3 = "hlc_lmg_MG3";
            hlc_50Rnd_762x51_M_MG3 = "hlc_lmg_MG3";
            hlc_50Rnd_762x51_mdim_MG3 = "hlc_lmg_MG3";
            hlc_50Rnd_762x51_Barrier_MG3 = "hlc_lmg_MG3";
            hlc_50Rnd_762x51_T_MG3 = "hlc_lmg_MG3";
            default = "hlc_lmg_MG3_100rnd";
        };
    };
    class hlc_lmg_MG3_100rnd : hlc_lmg_MG3
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg3\mg3_100rnd.p3d";
    };
    class hlc_lmg_MG3_optic : hlc_lmg_MG3 {
        scope = public;
        author = "Toadie";
        model = "\hlc_wp_MG3\mesh\mg3\mg3_later.p3d";
        picture = "\hlc_wp_mg3\tex\ui\gear_m62_ca";
        displayName = $STR_NIA_lmg_MG3_optic;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG3recieverDane_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };

        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 225;
            class CowsSlot : asdg_OpticRail1913_short_MG {
                iconPosition[] = { 0.5, 0.30000001 };
                iconScale = 0.2;
            };
        };
        class __MAGSWITCHCLASS {
            hlc_50Rnd_762x51_B_MG3 = "hlc_lmg_MG3_optic";
            hlc_50Rnd_762x51_M_MG3 = "hlc_lmg_MG3_optic";
            hlc_50Rnd_762x51_mdim_MG3 = "hlc_lmg_MG3_optic";
            hlc_50Rnd_762x51_Barrier_MG3 = "hlc_lmg_MG3_optic";
            hlc_50Rnd_762x51_T_MG3 = "hlc_lmg_MG3_optic";
            default = "hlc_lmg_MG3_optic_100rnd";
        };
    };
    class hlc_lmg_MG3_optic_100rnd : hlc_lmg_MG3_optic
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg3\MG3_later_100rnd.p3d";
    };

    class hlc_lmg_MG3KWS : hlc_lmg_MG3 {
        scope = public;
        author = "Toadie";
        model = "\hlc_wp_MG3\mesh\mg3\mg3kws.p3d";
        picture = "\hlc_wp_mg3\tex\ui\gear_mg3kws_ca";
        displayName = $STR_NIA_lmg_MG3KWS_t;
        __DEXTERITY(10.5,-1);
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG3recieverkws_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };

        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_MG3\anim\handpose_MG3kws.rtm" };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 240;
            class CowsSlot : asdg_OpticRail1913_short_MG {
                iconPosition[] = { 0.5, 0.30000001 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {};
        };
        inertia = 1.20;
        class __MAGSWITCHCLASS {
            hlc_50Rnd_762x51_B_MG3 = "hlc_lmg_MG3KWS";
            hlc_50Rnd_762x51_M_MG3 = "hlc_lmg_MG3KWS";
            hlc_50Rnd_762x51_mdim_MG3 = "hlc_lmg_MG3KWS";
            hlc_50Rnd_762x51_Barrier_MG3 = "hlc_lmg_MG3KWS";
            hlc_50Rnd_762x51_T_MG3 = "hlc_lmg_MG3KWS";
            default = "hlc_lmg_MG3KWS_100rnd";
        };
    };
    class hlc_lmg_MG3KWS_100rnd : hlc_lmg_MG3KWS
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg3\MG3kws_100rnd.p3d";
    };

    class hlc_lmg_MG3KWS_b :hlc_lmg_MG3KWS
    {
        author = "Toadie";
        displayName = $STR_NIA_lmg_MG3KWS_b;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverkws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_black_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50Rnd_762x51_B_MG3 = "hlc_lmg_MG3KWS_b";
            hlc_50Rnd_762x51_M_MG3 = "hlc_lmg_MG3KWS_b";
            hlc_50Rnd_762x51_mdim_MG3 = "hlc_lmg_MG3KWS_b";
            hlc_50Rnd_762x51_Barrier_MG3 = "hlc_lmg_MG3KWS_b";
            hlc_50Rnd_762x51_T_MG3 = "hlc_lmg_MG3KWS_b";
            default = "hlc_lmg_MG3KWS_b_100rnd";
        };
    };
    class hlc_lmg_MG3KWS_b_100rnd : hlc_lmg_MG3KWS_b
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg3\MG3kws_100rnd.p3d";
    };
    class hlc_lmg_MG3KWS_g :hlc_lmg_MG3KWS
    {
        author = "Toadie";
        displayName = $STR_NIA_lmg_MG3KWS_g;
        hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
        hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverkws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_green_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50Rnd_762x51_B_MG3 = "hlc_lmg_MG3KWS_g";
            hlc_50Rnd_762x51_M_MG3 = "hlc_lmg_MG3KWS_g";
            hlc_50Rnd_762x51_mdim_MG3 = "hlc_lmg_MG3KWS_g";
            hlc_50Rnd_762x51_Barrier_MG3 = "hlc_lmg_MG3KWS_g";
            hlc_50Rnd_762x51_T_MG3 = "hlc_lmg_MG3KWS_g";
            default = "hlc_lmg_MG3KWS_g_100rnd";
        };
    };
    class hlc_lmg_MG3KWS_g_100rnd : hlc_lmg_MG3KWS_g
    {
        scopearsenal = 0;
        model = "\hlc_wp_MG3\mesh\mg3\MG3kws_100rnd.p3d";
    };
};
