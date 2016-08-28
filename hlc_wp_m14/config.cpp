#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_m14 {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = {"HLC_M14_ammobox","Weapon_rifle_M14","Weapon_hlc_rifle_M21","Weapon_hlc_rifle_m14sopmod","Weapon_hlc_rifle_m14dmr","weapon_hlc_rifle_M14_Bipod","weapon_hlc_rifle_M14_Rail"};
        weapons[] = {"hlc_rifle_M14","hlc_rifle_M21","hlc_rifle_m14dmr","hlc_rifle_m14sopmod","hlc_muzzle_snds_M14","hlc_optic_artel_m14","hlc_optic_LRT_m14","hlc_optic_PVS4M14"};
        magazines[] = {"hlc_50Rnd_762x51_B_M14","hlc_20Rnd_762x51_T_M14","hlc_20Rnd_762x51_B_M14"};
        version="v1.8";
        author="toadie";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_OpticRail1913_long;

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
            class hlc_50Rnd_762x51_B_M142 {
                magazine = "hlc_50Rnd_762x51_B_M14";
                count = 30;
            };
            class hlc_20Rnd_762x51_T_M141 {
                magazine = "hlc_20Rnd_762x51_T_M14";
                count = 30;
            };
            class hlc_20Rnd_762x51_B_M141 {
                magazine = "hlc_20Rnd_762x51_B_M14";
                count = 30;
            };
            class hlc_20Rnd_762x51_barrier_M141 {
                magazine = "hlc_20Rnd_762x51_barrier_M14";
                count = 30;
            };
            class hlc_20Rnd_762x51_mk316_M141 {
                magazine = "hlc_20Rnd_762x51_mk316_M14";
                count = 30;
            };
        };
        class TransportWeapons {
            class _xx_hlc_lmg_M14 {
                weapon = "hlc_rifle_M14";
                count = 20;
            };
                        class _xx_hlc_rifle_M21 {
                weapon = "hlc_rifle_M21";
                count = 20;
            };    
            class _xx_hhlc_rifle_m14dmr {
                weapon = "hlc_rifle_m14dmr";
                count = 20;
            };
            class _xhlc_rifle_m14sopmod {
                weapon = "hlc_rifle_m14sopmod";
                count = 20;
            };
        };
        class TransportItems {
            class _xhlc_muzzle_snds_M14 {
                name = "hlc_muzzle_snds_M14";
                count = 10;
            };
            class _xx_optic_ARTEL {
                name = "hlc_optic_artel_m14";
                count = 10;
            };
            class _xx_optic_LRT {
                name = "hlc_optic_LRT_m14";
                count = 10;
            };            class _xx_optic_Holosight {
                name = "optic_Holosight";
                count = 10;
            };
            class _XX_hlc_optic_PVS4M14 {
            name= "hlc_optic_PVS4M14";
            count = 5;
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

    class Weapon_hlc_rifle_M14 : Weapon_Base_F {
        dlc = "Niarms_M14";
        scope = 2;
        scopeCurator = 2;
        displayName = "M14";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_M14";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20Rnd_762x51_B_M14";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_M21 : Weapon_Base_F {
        dlc = "Niarms_M14";
        scope = 2;
        scopeCurator = 2;
        displayName = "M21";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_M21";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20Rnd_762x51_B_M14";
                count = 1;
            };
        };
        class TransportItems {
            class _xx_optic_ARTEL {
                name = "hlc_optic_artel_m14";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_m14sopmod : Weapon_Base_F {
        dlc = "Niarms_M14";
        scope = 2;
        scopeCurator = 2;
        displayName = "M14 SOPMOD";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_m14sopmod";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20Rnd_762x51_B_M14";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_m14dmr : Weapon_Base_F {
        dlc = "Niarms_M14";
        scope = 2;
        scopeCurator = 2;
        displayName = "M14 DMR";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_m14dmr";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20Rnd_762x51_B_M14";
                count = 1;
            };
        };
        class TransportItems {
            class _xx_optic_ARTEL {
                name = "hlc_optic_LRT_m14";
                count = 1;
            };
        };
    };
    class weapon_hlc_rifle_M14_Bipod : Weapon_Base_F {
        dlc = "Niarms_M14";
        scope = 2;
        scopeCurator = 2;
        displayName = "M14 (Bipod)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_M14_Bipod";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20Rnd_762x51_B_M14";
                count = 1;
            };
        };
    };
    class weapon_hlc_rifle_M14_Rail : Weapon_Base_F {
        dlc = "Niarms_M14";
        scope = 2;
        scopeCurator = 2;
        displayName = "M14 (Rail)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_M14_Rail";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_20Rnd_762x51_B_M14";
                count = 1;
            };
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_20Rnd_762x51_B_M14 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count =20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Enhanced Performance Round)<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (Ball) 20rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 8;
        displaynameshort = "7.62mm Ball";
    };
    class hlc_20Rnd_762x51_mk316_M14 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.316 Special Ball Long Range)<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (Mk.316) 20rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 8;
        displaynameshort = "7.62mm Mk.316";
    };
    class hlc_20Rnd_762x51_barrier_M14 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO (Mk.319 Barrier-Blind)<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (Mk.319) 20rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 8;
        displaynameshort = "7.62mm Mk.319";
    };
    class hlc_20Rnd_762x51_T_M14 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "B_762x51_Tracer_Green";
        count =20;
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (Tracer) 20rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        scope = 2;
        tracersevery = 1;
        mass = 8;
        displaynameshort = "7.62mm Tracer";
    };
    class hlc_20Rnd_762x51_Tdim_M14 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (IR-DIM) 20rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        scope = 2;
        tracersevery = 1;
        mass = 8;
        displaynameshort = "7.62mm IR-DIM";
    };
    class hlc_20Rnd_762x51_Mdim_M14 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "M14 Magazine (EPR,IR-DIM) 20rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        scope = 2;
        tracersevery = 1;
        mass = 8;
        displaynameshort = "7.62mm IR-DIM";
    };
    class hlc_50Rnd_762x51_B_M14 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count =50;
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
        displayname = "X-14 Magazine (Mixed) 50rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
        scope = 2;
        tracersevery = 5;
        mass = 20;
        displaynameshort = "7.62mm Ball";
    };
    class hlc_20Rnd_762x51_S_M14 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M14";
        author = "Toadie";
        ammo = "HLC_762x51_BTSub";
        count =20;
        descriptionshort = "Caliber: 7.62x51mm (Boat-Tailed Subsonic)<br />Rounds: 20<br />Used in: M14";
        displayname = "M14 Magazine (Subsonic) 20rnd 7.62mm";
        model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
        initspeed = 325;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 8;
        displaynameshort = "7.62mm Subsonic";
    };
};

class CfgWeapons {
    class InventoryItem_Base_F;
    class InventoryMuzzleItem_Base_F;
    class InventoryFlashLightItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class GrenadeLauncher;
    class Rifle;
    class optic_Hamr;
    class LMG_Zafir_F;
    class Rifle_Base_F : Rifle  {
        class ItemInfo;
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class optic_dms;
    class optic_SOS;
    class optic_lrps;
    class ItemCore;
    class muzzle_snds_H : ItemCore {
        class ItemInfo;
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
        magazines[] = { "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_Barrier_M14", "hlc_20Rnd_762x51_mk316_M14", "hlc_20Rnd_762x51_T_M14", "hlc_20Rnd_762x51_Mdim_M14", "hlc_20Rnd_762x51_Tdim_M14", "hlc_50Rnd_762x51_B_M14", "hlc_20Rnd_762x51_S_M14" };
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.25;
        opticsZoomInit = 0.75;
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass =33;
            class MuzzleSlot : SlotInfo {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"hlc_muzzle_snds_M14"};
            };
            class CowsSlot : CowsSlot {
                compatibleItems[] = {"hlc_optic_artel_m14","hlc_optic_LRT_m14","hlc_optic_PVS4M14"};
            };
            class PointerSlot: PointerSlot{
                compatibleItems[] = {};
            };
        };
        distanceZoomMin = 300;
        distanceZoomMax = 300;
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
        modes[] = {"FullAuto","fullauto_medium"};
        class FullAuto : Mode_FullAuto {
            begin1[] = { "\hlc_wp_m14\snd\m14_fire", 1, 1, 1200 };
            begin2[] = { "\hlc_wp_m14\snd\m14_fire", 1, 1, 1200 };
            begin3[] = { "\hlc_wp_m14\snd\m14_fire", 1, 1, 1200 };
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = { "\hlc_wp_m14\snd\m14_first", 1, 1, 10 };
            closure2[] = { "\hlc_wp_m14\snd\m14_first", 1, 1, 10 };
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.08;
            recoil = "recoil_auto_mk200";
            recoilProne = "recoil_auto_prone_mk200";
            dispersion=0.000261799;
            maxrange = 600;
            maxrangeprobab = 0.05;
            midrange = 300;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            airateoffire = 4;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 4;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };

        drysound[] = { "\hlc_wp_m14\snd\soundshaders\m14_dry", 1, 1, 10 };
        //reloadmagazinesound[] = {"\hlc_wp_M60E4\snd\m60_reload_1p", 0.5, 1};
    };
    class hlc_optic_artel_m14 : optic_dms {
        author = "Millenia, Toadie";
        dlc = "Niarms_M14";
        descriptionshort = "Redfield AR-TEL Magnified Optic Sight<br />Magnification: 3-9x";
        weaponInfoType = "RscWeaponZeroing";
        model = "\hlc_wp_M14\mesh\ar-tel\scope.p3d";
        picture = "\hlc_wp_M14\tex\ui\gear_artel_x_ca";
        displayname = "Redfield AR-TEL";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
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
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMax = 0.06225;
                    opticsZoomMin = 0.06225;
                    opticsZoomInit = 0.06225;
                    discreteDistance[] = {400};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=300;
                    distanceZoomMax=900;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_4x.p3d"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
                class Snip3 : Snip {
                    opticsID = 3;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMax = 0.0498;
                    opticsZoomMin = 0.0498;
                    opticsZoomInit = 0.0498;
                    discreteDistance[] = {500};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=300;
                    distanceZoomMax=900;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_5x.p3d"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
                class Snip4 : Snip {
                    opticsID = 4;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMax = 0.0415;
                    opticsZoomMin = 0.0415;
                    opticsZoomInit = 0.0415;
                    discreteDistance[] = {600};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=300;
                    distanceZoomMax=900;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_6x.p3d"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
                class Snip45 : Snip {
                    opticsID = 5;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMax = 0.0355;
                    opticsZoomMin = 0.0355;
                    opticsZoomInit = 0.0355;
                    discreteDistance[] = {700};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=300;
                    distanceZoomMax=900;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_7x.p3d"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
                class Snip6 : Snip {
                    opticsID = 6;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMax = 0.031125;
                    opticsZoomMin = 0.031125;
                    opticsZoomInit = 0.031125;
                    discreteDistance[] = {800};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=300;
                    distanceZoomMax=900;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_8x.p3d"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
                class Snip7 : Snip {
                    opticsID = 7;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMax = 0.027776;
                    opticsZoomMin = 0.027776;
                    opticsZoomInit = 0.027776;
                    discreteDistance[] = {900};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin=300;
                    distanceZoomMax=900;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_9x.p3d"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = true;
                    cameraDir = "";
                };
            };
        };
    };
    class hlc_optic_PVS4M14 : hlc_optic_artel_m14 {
        author = "Bohemia Interactive, Toadie";
        descriptionshort = "Night Vision Optic<br />Magnification: 4x";
        displayname = "AN/PVS4(M14-Mount)";
        picture = "\hlc_wp_M14\tex\ui\gear_PVS4_x_ca";
        model = "\hlc_wp_M14\mesh\PVS4\scope.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
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
                    modelOptics[] = {"\hlc_wp_m14\mesh\PVS4\NV_anpvs4_optic"};
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
    class hlc_optic_LRT_m14 : optic_lrps {
        dlc = "Niarms_M14";
        author = "Bohemia Interactive, Toadie";
        descriptionshort = "Leupold Mk.4 LR/T Magnified Optic Sight<br />Magnification: 3.5-9x";
        model = "\hlc_wp_M14\mesh\leupold lrt\scope.p3d";
        picture = "\hlc_wp_M14\tex\ui\gear_lrt_x_ca";
        displayname = "Leupold LR/T";
        class OpticsModes
        {
            class Snip {
                opticsID = 1;
                opticsDisplayName = "WFOV";
                useModelOptics = 1;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsZoomMin = 0.0249;
                opticsZoomMax = 0.0711;
                opticsZoomInit = 0.0711;
                discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 300;
                distanceZoomMax = 1200;
                discretefov[] = { 0.125, 0.0625 };
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
                opticsZoomMin = 0.375;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye2";
                visionMode[] = {};
                discretefov[] = {};
                discreteDistance[] = { 100 };
                discreteDistanceInitIndex = 0;
            };
        };
    };

    class hlc_muzzle_snds_M14 : muzzle_snds_H {
        author = "Toadie";
        displayName = "M14 Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_m14\mesh\SUP_308M14\hk308";
        
    };
    class hlc_rifle_M14 : hlc_M14_base {
        author = "An Aggressive Napkin, Millenia, Toadie";
        scope = public;
        recoil = "recoil_dmr_06";
        model = "\hlc_wp_M14\mesh\m14\M14.p3d";
        reloadaction = "HLC_GestureReloadm14";
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
        drysound[] = { "\hlc_wp_m14\snd\soundshaders\m14_dry", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_M14\snd\soundshaders\m14_reload", 0.7, 1, 18 };
        picture = "\hlc_wp_M14\tex\ui\gear_m14_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Springfield Armory M14";
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        magazineReloadSwitchPhase = 0.5;
        cameradir = "aim_point";
        discretedistance[] = { 100, 200, 300, 400, 500, 600 };
        discretedistanceinitindex = 2;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6" }; /// the angle of gun changes with zeroing
        bg_bipod = 0; 
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1", "fullauto_medium"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m14\gesture\newgesture\m14_hands.rtm"};
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 102;
            class MuzzleSlot : SlotInfo {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"hlc_muzzle_snds_M14"};
            };
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
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
                begin1[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                SoundSetShot[] = { "M14_silencerShot_SoundSet", "M14_silencerTail_SoundSet" };
                begin1[]={"\hlc_wp_m14\snd\fal_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_m14\snd\fal_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14_sil_tail", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_m14\snd\m14_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_m14\snd\m14_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_m14\snd\m14_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_m14\snd\m14_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_ebr";
            recoilprone = "recoil_auto_prone_ebr";
            dispersion = 0.0009;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            aiRateOfFire = 1e-006;
        };
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
                begin1[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                SoundSetShot[] = { "M14_silencerShot_SoundSet", "M14_silencerTail_SoundSet" };
                begin1[]={"\hlc_wp_m14\snd\fal_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_m14\snd\fal_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14_sil_tail", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_m14\snd\m14_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_m14\snd\m14_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_m14\snd\m14_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_m14\snd\m14_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            dispersion = 0.0007;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
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
        class Library {
            libTextDesc = "Springfield Armory M14";
        };
    };
    class hlc_rifle_M14_Bipod : hlc_rifle_m14 {
        model = "\hlc_wp_M14\mesh\m21\M14_bip.p3d";
        displayName = "Springfield Armory M14(Bipod)";
        author = "An Aggressive Napkin, Millenia, Toadie";
        hasBipod = true;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = public;
        agm_bipod = 1;
        cse_bipod = 1;
    };
    class hlc_rifle_M14_Rail : hlc_rifle_m14 {
        model = "\hlc_wp_M14\mesh\m14\M14_railed.p3d";
        displayName = "Springfield Armory M14(Rail)";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class asdg_OpticRail_M14 : asdg_OpticRail1913_short {};
            class CowsSlot : CowsSlot{
                compatibleItems[] = {};

            };
        };
    };
    class hlc_rifle_M21 : hlc_M14_base {
        author = "An Aggressive Napkin, Millenia, Toadie";
        hasBipod = true;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = public;
        recoil = "recoil_dmr_06";
        agm_bipod = 1; 
        cse_bipod = 1;

        model = "\hlc_wp_M14\mesh\m21\M14.p3d";
        reloadaction = "HLC_GestureReloadm14";
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
        drysound[] = { "\hlc_wp_m14\snd\soundshaders\m14_dry", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_M14\snd\soundshaders\m14_reload", 0.7, 1, 18 };
        picture = "\hlc_wp_M14\tex\ui\gear_m21_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Springfield Armory M21";
        discretedistance[] = {100, 200, 300, 400, 500,600};
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6" }; /// the angle of gun changes with zeroing
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        cameradir = "aim_point";
        discretedistanceinitindex = 2;
        bg_bipod = 1; 
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1" };
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m14\gesture\newgesture\m14_hands.rtm"};
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.25;
        opticsZoomInit = 0.75;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105;
            class MuzzleSlot : SlotInfo {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"hlc_muzzle_snds_M14"};
            };
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };

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
                begin1[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_m14\snd\m14_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails {
                    class TailForest {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14308_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                SoundSetShot[] = { "M14_silencerShot_SoundSet", "M14_silencerTail_SoundSet" };
                begin1[]={"\hlc_wp_m14\snd\fal_silenced", 1, 1,200};
                begin2[]={"\hlc_wp_m14\snd\fal_silenced", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_m14\snd\tails\m14_sil_tail", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_m14\snd\m14_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_m14\snd\m14_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_m14\snd\m14_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_m14\snd\m14_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_ebr";
            recoilprone = "recoil_single_prone_ebr";
            dispersion = 0.0006;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
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

        class Library {
            libTextDesc = "Springfield Armory M21";
        };
    };
    class hlc_rifle_m14dmr : hlc_rifle_M21 {
        author = "Bohemia Interactive,Toadie";
        model = "\hlc_wp_M14\mesh\m14dmr\M14.p3d";
        reloadaction = "HLC_GestureReloadm14";
        agm_bipod = 1; 
        hasbipod = true; 
        deployedpivot = "deploypivot";
        cse_bipod = 1;
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
        drysound[] = { "\hlc_wp_m14\snd\soundshaders\m14_dry", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_M14\snd\soundshaders\m14_reload", 0.7, 1, 18 };
        picture = "\hlc_wp_M14\tex\ui\gear_dmr_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Springfield Armory M14DMR";
        discretedistance[] = {100, 200, 300, 400, 500,600,700,800,900,1000};
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9" }; /// the angle of gun changes with zeroing
        cameradir = "aim_point";
        discretedistanceinitindex = 2;
        bg_bipod = 1; 
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m14\gesture\newgesture\dmr_hands.rtm"};
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
        model = "\hlc_wp_M14\mesh\sopmod\M14.p3d";
        reloadaction = "HLC_GestureReloadm14";
        descriptionShort = "Modified Battle Rifle<br/>Caliber: 7.62mm";
        drysound[] = { "\hlc_wp_m14\snd\soundshaders\m14_dry", 1, 1, 10 };
        reloadmagazinesound[] = {"\hlc_wp_M14\snd\soundshaders\m14_reload", 0.7, 1,18};
        picture = "\hlc_wp_M14\tex\ui\gear_sopmod_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Troy M14 SOPMOD";
        discretedistance[] = {100, 200, 300, 400, 500,600};
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6" }; /// the angle of gun changes with zeroing
        cameradir = "aim_point";
        recoil = "recoil_ebr";
        discretedistanceinitindex = 2;
        bg_bipod = 1; 
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m14\gesture\newgesture\dmr_hands.rtm"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass =105;
            class MuzzleSlot : SlotInfo {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"hlc_muzzle_snds_M14"};
            };
            class CowsSlot : CowsSlot {
                compatibleItems[]= {};
            };
            class asdg_OpticRail_TroyM14 : asdg_OpticRail1913_long {};
            class asdg_FrontSideRail_TroyM14 : asdg_FrontSideRail {};
            class asdg_UnderSlot_Troym14 : asdg_UnderSlot {};
        };
    };
};
