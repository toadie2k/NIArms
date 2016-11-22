#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_m14 {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = {"HLC_M14_ammobox","Weapon_rifle_M14","Weapon_hlc_rifle_M21","Weapon_hlc_rifle_m14sopmod","Weapon_hlc_rifle_m14dmr","weapon_hlc_rifle_M14_Bipod","weapon_hlc_rifle_M14_Rail"};
        weapons[] = {"hlc_rifle_M14","hlc_rifle_M21","hlc_rifle_m14dmr","hlc_rifle_m14sopmod","hlc_muzzle_snds_M14","hlc_optic_artel_m14","hlc_optic_LRT_m14","hlc_optic_PVS4M14"};
        magazines[] = {"hlc_50Rnd_762x51_B_M14","hlc_20Rnd_762x51_T_M14","hlc_20Rnd_762x51_B_M14"};
        version="v1.85";
        author="toadie";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;


class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems;
};
class asdg_OpticRail;
class niarms_m14_OpticRail: asdg_OpticRail {
    class compatibleItems {
        hlc_optic_artel_m14 = 1;
        hlc_optic_LRT_m14 = 1;
        hlc_optic_PVS4M14 = 1;
    };
};

class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_FrontSideRail;
class asdg_UnderSlot;


class cfgMods {
    class Mod_Base;

    class Niarms_M14 : Mod_Base {
        name = "NIArsenal: M14 Rifles";
        picture = "hlc_wp_m14\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_m14\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_m14\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_m14\tex\ui\NIArms1_ca.paa";
    };
};

class CfgVehicles {
    class NATO_Box_Base;
    class Weapon_Base_F;

    class HLC_M14_ammobox : NATO_Box_Base {
        dlc = "Niarms_M14";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "Ammo";
        displayName = "HLC M14 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_50Rnd_762x51_B_M14,30);
            __M_MAG(hlc_20Rnd_762x51_T_M14,30);
            __M_MAG(hlc_20Rnd_762x51_B_M14,30);
            __M_MAG(hlc_20Rnd_762x51_barrier_M14,30);
            __M_MAG(hlc_20Rnd_762x51_mk316_M14,30);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_M14,20);
            __M_WEP(hlc_rifle_M21,20);
            __M_WEP(hlc_rifle_m14dmr,20);
            __M_WEP(hlc_rifle_m14sopmod,20);
        };
        class TransportItems {
            __M_ITM(hlc_optic_artel_m14,10);
            __M_ITM(hlc_optic_LRT_m14,10);
            __M_ITM(hlc_optic_PVS4M14,10);
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_ACO_grn,10);
        };
    };

    __WEAPONHOLDER(hlc_rifle_M14,hlc_20Rnd_762x51_B_M14,M14,Niarms_M14,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_M14_Bipod,hlc_20Rnd_762x51_B_M14,M14(Bipod),Niarms_M14,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_M14_Bipod_Rail, hlc_20Rnd_762x51_B_M14, M14(Bipod\RAil), Niarms_M14, Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_M14_Rail,hlc_20Rnd_762x51_B_M14,M14(Rail),Niarms_M14,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_M21, hlc_20Rnd_762x51_mk316_M14, M21, Niarms_M14, Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_M21_Rail, hlc_20Rnd_762x51_mk316_M14, M21(Rail), Niarms_M14, Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_m14dmr, hlc_20Rnd_762x51_mk316_M14, M14DMR, Niarms_M14, Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_M14dmr_Rail, hlc_20Rnd_762x51_mk316_M14, M14DMR(Rail), Niarms_M14, Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_m14sopmod,hlc_20Rnd_762x51_mk316_M14,Troy M14 SOPMOD,Niarms_M14,Toadie,AssaultRifles);
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_20Rnd_762x51_B_M14 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Enhanced Performance Round)<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (Ball) 20rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 20;
        displaynameshort = "7.62mm Ball";
    };
    class hlc_20Rnd_762x51_mk316_M14 : hlc_20Rnd_762x51_B_M14 {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.316 Special Ball Long Range)<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (Mk.316) 20rnd 7.62mm";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        tracersevery = 0;
        mass = 20;
        displaynameshort = "7.62mm Mk.316";
    };
    class hlc_20Rnd_762x51_barrier_M14 : hlc_20Rnd_762x51_B_M14 {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.319 Barrier-Blind)<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (Mk.319) 20rnd 7.62mm";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        tracersevery = 0;
        mass = 20;
        displaynameshort = "7.62mm Mk.319";
    };
    class hlc_20Rnd_762x51_T_M14 : hlc_20Rnd_762x51_B_M14 {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "B_762x51_Tracer_Green";
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (Tracer) 20rnd 7.62mm";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 1;
        mass = 20;
        displaynameshort = "7.62mm Tracer";
    };
    class hlc_20Rnd_762x51_Tdim_M14 : hlc_20Rnd_762x51_B_M14 {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (IR-DIM) 20rnd 7.62mm";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 1;
        mass = 20;
        displaynameshort = "7.62mm IR-DIM";
    };
    class hlc_20Rnd_762x51_Mdim_M14 : hlc_20Rnd_762x51_B_M14 {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (EPR,IR-DIM) 20rnd 7.62mm";
        initspeed = 853;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        tracersevery = 1;
        mass = 20;
        displaynameshort = "7.62mm IR-DIM";
    };
    class hlc_50Rnd_762x51_B_M14 : hlc_20Rnd_762x51_B_M14 {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 50;
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "X-14 Magazine (Mixed) 50rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
        scope = 2;
        tracersevery = 5;
        mass = 50;
        displaynameshort = "7.62mm Ball";
    };
    class hlc_20Rnd_762x51_S_M14 : hlc_20Rnd_762x51_B_M14 {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = "Caliber: 7.62x51mm (Boat-Tailed Subsonic)<br />Rounds: 20<br />Used in: M14";
        displayname = "M14 Magazine (Subsonic) 20rnd 7.62mm";
        initspeed = 325;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
        tracersevery = 0;
        mass = 20;
        displaynameshort = "7.62mm Subsonic";
    };
};

class CfgWeapons {

//optics

    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class optic_dms;

    class hlc_optic_artel_m14 : optic_dms {
        author = "Millenia, Toadie";
        dlc = "Niarms_M14";
        descriptionshort = "Redfield AR-TEL Magnified Optic Sight<br />Magnification: 3-9x";
        weaponInfoType = "RscWeaponZeroing";
        model = "\hlc_wp_M14\mesh\ar-tel\scope.p3d";
        picture = "\hlc_wp_M14\tex\ui\gear_artel_x_ca";
        displayname = "Redfield AR-TEL";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_SNP;
            mass = 9;
            modelOptics = "\hlc_wp_M14\mesh\ar-tel\artel_reticle.p3d";
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMax = 0.083;
                    opticsZoomMin = 0.083;
                    opticsZoomInit = 0.083;
                    discreteDistance[] = {300};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=300;
                    distanceZoomMax=900;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle.p3d"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
                class Snip2 : Snip {
                    opticsID = 2;
                    opticsZoomMax = 0.06225;
                    opticsZoomMin = 0.06225;
                    opticsZoomInit = 0.06225;
                    discreteDistance[] = {400};
                    discreteDistanceInitIndex = 0;
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_4x.p3d"};
                };
                class Snip3 : Snip {
                    opticsID = 3;
                    opticsZoomMax = 0.0498;
                    opticsZoomMin = 0.0498;
                    opticsZoomInit = 0.0498;
                    discreteDistance[] = {500};
                    discreteDistanceInitIndex = 0;
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_5x.p3d"};
                };
                class Snip4 : Snip {
                    opticsID = 4;
                    opticsZoomMax = 0.0415;
                    opticsZoomMin = 0.0415;
                    opticsZoomInit = 0.0415;
                    discreteDistance[] = {600};
                    discreteDistanceInitIndex = 0;
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_6x.p3d"};
                };
                class Snip45 : Snip {
                    opticsID = 5;
                    opticsZoomMax = 0.0355;
                    opticsZoomMin = 0.0355;
                    opticsZoomInit = 0.0355;
                    discreteDistance[] = {700};
                    discreteDistanceInitIndex = 0;
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_7x.p3d"};
                };
                class Snip6 : Snip {
                    opticsID = 6;
                    opticsZoomMax = 0.031125;
                    opticsZoomMin = 0.031125;
                    opticsZoomInit = 0.031125;
                    discreteDistance[] = {800};
                    discreteDistanceInitIndex = 0;
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_8x.p3d"};
                };
                class Snip7 : Snip {
                    opticsID = 7;
                    opticsZoomMax = 0.027776;
                    opticsZoomMin = 0.027776;
                    opticsZoomInit = 0.027776;
                    discreteDistance[] = {900};
                    discreteDistanceInitIndex = 0;
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_9x.p3d"};
                };
            };
        };
		inertia = 0.04;
    };
    class hlc_optic_PVS4M14 : hlc_optic_artel_m14 {
        author = "Bohemia Interactive, Toadie";
        descriptionshort = "Night Vision Optic<br />Magnification: 4x";
        displayname = "AN/PVS4(M14-Mount)";
        picture = "\hlc_wp_M14\tex\ui\gear_PVS4_x_ca";
        model = "\hlc_wp_M14\mesh\PVS4\scope.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
			mass = 36;
            modelOptics = "\hlc_wp_M14\mesh\PVS4\NV_anpvs4_optic";
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
                    modelOptics[] = { "\hlc_wp_m14\mesh\PVS4\NV_anpvs4_optic" };
                    visionMode[] = {"NVG"};
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Snip2: Snip {
                    modelOptics[] = { "\hlc_wp_m14\mesh\PVS4\pvs4-daysight" };
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

    class optic_LRPS : ItemCore {
        class ItemInfo;
    };

    class hlc_optic_LRT_m14 : optic_lrps {
        dlc = "Niarms_M14";
        author = "Bohemia Interactive, Toadie";
        descriptionshort = "Leupold Mk.4 LR/T Magnified Optic Sight<br />Magnification: 3.5-9x";
        model = "\hlc_wp_M14\mesh\leupold lrt\scope.p3d";
        picture = "\hlc_wp_M14\tex\ui\gear_lrt_x_ca";
        displayname = "Leupold LR/T";

        class ItemInfo : ItemInfo {
			mass = 14;
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    opticsDisplayName = "WFOV";
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.0277;
                    opticsZoomMax = 0.0711;
                    opticsZoomInit = 0.0711;
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
                    discreteDistanceInitIndex = 4;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    discretefov[] = { 0.0711, 0.0277 };
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    modelOptics[] = { "\A3\Weapons_F\acc\reticle_lrps_F", "\A3\Weapons_F\acc\reticle_lrps_z_F" };
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = ""; 
                };
                class Iron : Snip {
                    opticsID = 2;
                    opticsDisplayName = "";
                    useModelOptics = 0;
                    opticsPPEffects[] = { "", "" };
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    __OPTICSZOOM_1X;
                    memoryPointCamera = "eye2";
                    visionMode[] = {};
                    discretefov[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
		tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
		inertia = 0.07;
    };

//muzzles

    class muzzle_snds_H;

    class hlc_muzzle_snds_M14 : muzzle_snds_H {
        scope = protected;
        author = "Toadie";
        displayName = "M14 Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_m14\mesh\SUP_308M14\hk308";
    };

//weapons
    class Rifle;
    class Rifle_Base_F : Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_M14_base : Rifle_Base_F {
        dlc = "Niarms_M14";
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_ebr";
        scope = protected;
        AB_barrelTwist=12;
        AB_barrelLength=22;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 558.8;
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        magazines[] = { __762M14_MAGS, __762M14_BI_MAGS };
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
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                class compatibleItems: compatibleItems {
                    hlc_muzzle_snds_M14 = 1;
                };
            };
            class CowsSlot : niarms_m14_OpticRail {};
            class PointerSlot {};
        };
        descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";

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

        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_m14\snd\m14_first", 1, 1,10};
                closure2[]={"\hlc_wp_m14\snd\m14_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "M14_Shot_SoundSet", "M14_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                SoundSetShot[] = { "M14_silencerShot_SoundSet", "M14_silencerTail_SoundSet" };
            };
            reloadTime = 0.08;
            dispersion = 0.0007;

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

        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_m14\snd\m14_first", 1, 1,10};
                closure2[]={"\hlc_wp_m14\snd\m14_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "M14_Shot_SoundSet", "M14_tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                SoundSetShot[] = { "M14_silencerShot_SoundSet", "M14_silencerTail_SoundSet" };
            };
            reloadTime = 0.081;
            dispersion = 0.0009;

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

        drysound[] = { "\hlc_wp_m14\snd\soundshaders\m14_dry", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_M14\snd\soundshaders\m14_reload", 0.7, 1, 18 };
        reloadaction = "HLC_GestureReloadm14";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    };


    class hlc_rifle_M14 : hlc_M14_base {
        author = "An Aggressive Napkin, Millenia, Toadie";
        scope = public;
        recoil = "recoil_dmr_06";
        model = "\hlc_wp_M14\mesh\m14\M14.p3d";
        hiddenSelections[] = { "Main", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_m14\tex\m14\a1_m14_co.tga", "hlc_wp_m14\tex\bis_dmr\us_dmr_co.tga" };
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
        picture = "\hlc_wp_M14\tex\ui\gear_m14_x_ca";
        displayName = "M14";
        __DEXTERITY(4.1, 0);
        inertia = 0.41;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        magazineReloadSwitchPhase = 0.5;
        cameradir = "aim_point";
        discretedistance[] = { 100, 200, 300, 400, 500, 600 };
        discretedistanceinitindex = 2;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6" }; /// the angle of gun changes with zeroing
        bg_bipod = 0; 
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m14\gesture\newgesture\m14_hands.rtm"};

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 86;
        };
        class Single : Single {
            __MOA(1.3);
        };
        class FullAuto : FullAuto {
            __MOA(1.45);
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Library {
            libTextDesc = "Springfield Armory M14";
        };
    };
    class hlc_rifle_M14_Bipod : hlc_rifle_m14 {
        model = "\hlc_wp_M14\mesh\m21\M14_bip.p3d";
        displayName = "M14(Bipod)";
        __DEXTERITY(4.1 + 0.31, 0);
        inertia = 0.43;
        author = "An Aggressive Napkin, Millenia, Toadie";
        maxZeroing = 1600;
        hasBipod = true;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = public;
        agm_bipod = 1;
        cse_bipod = 1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 91;
        };
        
    };
    class hlc_rifle_M14_Rail : hlc_rifle_m14 {
        model = "\hlc_wp_M14\mesh\m14\M14_railed.p3d";
        displayName = "M14(RIS)";
        __DEXTERITY(4.1 + 0.3, 0);
        inertia = 0.43;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
    };
    class hlc_rifle_M14_Bipod_Rail : hlc_rifle_m14 {
        model = "\hlc_wp_M14\mesh\m21\M14_biprail.p3d";
        displayName = "M14(Bipod/RIS)";
        __DEXTERITY(4.1 + 0.31+0.3, 0);
        inertia = 0.45;
        author = "An Aggressive Napkin, Millenia, Toadie";
        maxZeroing = 1600;
        hasBipod = true;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = public;
        agm_bipod = 1;
        cse_bipod = 1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95;
            class CowsSlot : asdg_OpticRail1913_short {};
        };
        hiddenSelections[] = { "Main", "Bipod","rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_m14\tex\m14\a1_m14_co.tga", "hlc_wp_m14\tex\bis_dmr\bipod_harris_co.tga","hlc_wp_m14\tex\bis_dmr\us_dmr_co.tga" };

    };
    class hlc_rifle_M21 : hlc_M14_base {
        author = "An Aggressive Napkin, Millenia, Toadie";
        hasBipod = true;
        maxZeroing = 1600;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = public;
        recoil = "recoil_dmr_06";
        agm_bipod = 1; 
        cse_bipod = 1;
        model = "\hlc_wp_M14\mesh\m21\M14.p3d";
        hiddenSelections[] = { "Main", "Bipod", "rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_m14\tex\m21\b1_m14_co.tga", "hlc_wp_m14\tex\bis_dmr\bipod_harris_co.tga", "hlc_wp_m14\tex\bis_dmr\us_dmr_co.tga" };
        __DEXTERITY(4.9 + 0.31 , 0);
        inertia = 0.52;
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
        picture = "\hlc_wp_M14\tex\ui\gear_m21_x_ca";
        displayName = "M21";
        discretedistance[] = {100, 200, 300, 400, 500,600};
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6" }; /// the angle of gun changes with zeroing
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        cameradir = "aim_point";
        discretedistanceinitindex = 2;
        bg_bipod = 1; 
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m14\gesture\newgesture\m14_hands.rtm"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 109;
        };
        

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };

        modes[] = {"Single", "single_medium_optics1", "single_far_optics1"};

        class Single : Single {
            __MOA(0.8);
        };
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

        class Library {
            libTextDesc = "Springfield Armory M21";
        };
    };
    class hlc_rifle_M21_Rail :hlc_rifle_M21
    {
        __DEXTERITY(4.9 + 0.31+0.3, 0);
        inertia = 0.55;
        author = "An Aggressive Napkin, Millenia, Toadie";
        displayName = "M21(RIS)";
        model = "\hlc_wp_M14\mesh\m21\M14_rail.p3d";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 115;
            class CowsSlot : asdg_OpticRail1913_short {};
        };

    };
    class hlc_rifle_m14dmr : hlc_rifle_M21 {
        author = "Bohemia Interactive,Toadie";
        model = "\hlc_wp_M14\mesh\m14dmr\M14.p3d";
        hiddenSelections[] = { "Main", "Bipod"};
        hiddenSelectionsTextures[] = { "hlc_wp_m14\tex\bis_dmr\us_dmr_co.tga", "hlc_wp_m14\tex\bis_dmr\bipod_harris_co.tga"};
        __DEXTERITY(5.27 + 0.31, 0);
        inertia = 0.58;
        agm_bipod = 1; 
        hasbipod = true; 
        deployedpivot = "deploypivot";
        cse_bipod = 1;
        maxZeroing = 1600;
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
        picture = "\hlc_wp_M14\tex\ui\gear_dmr_x_ca";
        displayName = "M14DMR";
        discretedistance[] = {100, 200, 300, 400, 500,600,700,800,900,1000};
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9" }; /// the angle of gun changes with zeroing
        cameradir = "aim_point";
        discretedistanceinitindex = 2;
        bg_bipod = 1; 
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m14\gesture\newgesture\dmr_hands.rtm"};
        class Single : Single{
            __MOA(1.1);
        };
    };
    class hlc_rifle_M14dmr_Rail :hlc_rifle_m14dmr
    {
        author = "Bohemia Interactive,Toadie";
        displayName = "M14DMR(RIS)";
        model = "\hlc_wp_M14\mesh\m14dmr\M14_railed.p3d";

        __DEXTERITY(5.27+0.31+0.30, 0);
        inertia = 0.61;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 116;
            class CowsSlot : asdg_OpticRail1913_short {};
        };

    };

    class hlc_rifle_m14sopmod : hlc_rifle_M14
    {
        author = "Twinke Masta, Pete, Thanez, General Tso, Jihad, Toadie";
        AB_barrelTwist=12;
        AB_barrelLength=18;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 457.2;
        agm_bipod = 1; 
        hasbipod = 1; 
        cse_bipod = 1;
        maxZeroing = 1600;
        model = "\hlc_wp_M14\mesh\sopmod\M14.p3d";
        hiddenSelections[] = { "Reciever", "Furniture" };
        hiddenSelectionsTextures[] = { "hlc_wp_m14\tex\brightside\rec_co.tga", "hlc_wp_m14\tex\brightside\upper_co.tga" };
        descriptionShort = "Modified Battle Rifle<br/>Caliber: 7.62mm";
        picture = "\hlc_wp_M14\tex\ui\gear_sopmod_x_ca";
        displayName = "Troy M14 SOPMOD";
        discretedistance[] = {100, 200, 300, 400, 500,600};
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6" }; /// the angle of gun changes with zeroing
        cameradir = "aim_point";
        recoil = "recoil_ebr";
        discretedistanceinitindex = 2;
        bg_bipod = 1; 
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m14\gesture\newgesture\dmr_hands.rtm"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 86;
            class CowsSlot : asdg_OpticRail1913 {}; //medium, can't do long scope + night sight combos
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
        inertia = 0.41;
        __DEXTERITY(4.08,0);
        class Single : Single {
            __MOA(1.6);
        };
        class FullAuto : FullAuto {
            __MOA(1.8);
        };
        class single_medium_optics1 : single_medium_optics1 {
            maxRange = 700;
            maxRangeProbab = 0.1;
        };
        class single_far_optics1 : single_far_optics1 {
            maxRange = 1200;
        };
    };
};
