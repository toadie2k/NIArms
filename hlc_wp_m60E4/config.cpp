#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_m60e4 {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Sounds_F_Mark","asdg_jointrails","hlcweapons_core"};
        units[] = {"HLC_M60E4_ammobox","Weapon_hlc_lmg_M60E4","Weapon_hlc_lmg_M60"};
        weapons[] = {};
        magazines[] = {};
        version="10.5";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;

    class Niarms_M60 : Mod_Base {
        name = "NIArsenal: M60 GPMGs";
        picture = "hlc_wp_m60E4\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_m60E4\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_m60E4\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_m60E4\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_OpticRail1913_short_MG;

class CfgVehicles {
    class NATO_Box_Base;
    class Weapon_Base_F;

    class HLC_M60E4_ammobox : NATO_Box_Base {
        dlc = "Niarms_M60";
        scope = 2;
        vehicleClass = "Ammo";
        scopeCurator = 2;
        displayName = "HLC M60E4 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_100Rnd_762x51_B_M60E4,30);
            __M_MAG(hlc_100Rnd_762x51_T_M60E4,30);
            __M_MAG(hlc_100Rnd_762x51_M_M60E4,30);
        };
        class TransportWeapons {
            __M_WEP(hlc_lmg_M60E4,20);
            __M_WEP(hlc_lmg_M60,20);
        };
        class TransportItems {
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_ACO_grn,10);
        };
    };
    class Weapon_hlc_lmg_M60E4 : Weapon_Base_F {
        dlc = "Niarms_M60";
        scope = 2;
        scopeCurator = 2;
        displayName = "M60E4";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_lmg_M60E4";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_100Rnd_762x51_M_M60E4";
                count = 1;
            };
        };
    };
    class Weapon_hlc_lmg_M60 : Weapon_Base_F {
        dlc = "Niarms_M60";
        scope = 2;
        scopeCurator = 2;
        displayName = "M60";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_lmg_M60";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_100Rnd_762x51_M_M60E4";
                count = 1;
            };
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_100Rnd_762x51_B_M60E4 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 100;
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 100<br />Used in: M60E4";
        displayname = "M60E4 Belt (Ball) 100rnd 7.62mm";
        model = "hlc_wp_m60E4\mesh\magazine\magazine.p3d";
        initspeed = 853;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 27;
        displaynameshort = "7.62mm Ball";
        nameSound = "mgun";
    };
    class hlc_100Rnd_762x51_M_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 100<br />Used in: M60E4";
        displayname = "M60E4 Belt (Ball-Tracer Mix) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "7.62mm Ball/Tracer";
    };
    class hlc_100Rnd_762x51_Mdim_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 100<br />Used in: M60E4";
        displayname = "M60E4 Belt (EPR-IR-DIM) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "7.62mm EPR/IR-DIM";
    };
    class hlc_100Rnd_762x51_Barrier_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Rounds: 100<br />Used in: M60E4";
        displayname = "M60E4 Belt (Mk319-Tracer Mix) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "7.62mm Mk.319/Tracer";
    };
    class hlc_100Rnd_762x51_T_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 100<br />Used in: M60E4";
        displayname = "M60E4 Belt (Tracer) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4tracer_ca.paa";
        tracersevery = 1;
        displaynameshort = "7.62mm Tracer";
    };
};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_M60e4_base : Rifle_Base_F {
        dlc = "Niarms_M60";
        ACE_Overheating_allowSwapBarrel = 1;
        ACE_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        ACE_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        ACE_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        scope = protected;
        cursor = "mg";
        cursoraim = "EmptyCursor";
        magazineReloadSwitchPhase = 0.5;
        magazines[] = { "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_Mdim_M60E4", "hlc_100Rnd_762x51_Barrier_M60E4" };
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        aidispersioncoefx = 10;
        aidispersioncoefy = 12;
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
            class AmmoBeltEject {
                directionName = "linkeject_end";
                effectName = "MachineGunEject2";
                positionName = "linkeject_start";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot {};
            class CowsSlot {};
            class PointerSlot {};
        };
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.25;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Light Machine Gun<br/>Caliber: 7.62mm";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";

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
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_M60E4\snd\m60_first", 1, 1,10};
                closure2[]={"\hlc_wp_M60E4\snd\m60_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "M60E4_Shot_SoundSet", "M60E4_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "M60e4_silencerShot_SoundSet", "M60e4_silencerTail_SoundSet" };
            };
            reloadTime = 0.105;
            dispersion=0.000261799;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            airateoffire = 4;
        };
        class close : FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short : close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium : close {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.3;
            maxRange = 500;
            maxRangeProbab = 0.05;
        };
        class far_optic1 : medium {
            requiredOpticType = 1;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 1000;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.4;
            maxRange = 650;
            maxRangeProbab = 0.01;
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

        drysound[] = {"\hlc_core\sound\empty_machineguns", 1, 1, 10};
        reloadmagazinesound[] = {"\hlc_wp_M60E4\snd\m60_reload", 1, 1,10};
    };
    class hlc_lmg_M60E4 : hlc_M60e4_base {
        maxZeroing = 1100;
        scope = public;
        author = "Bohemia Interactive, Toadie";
        AB_barrelTwist=12;
        AB_barrelLength=17;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 431.8;
        agm_bipod = 1; 
        AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
        AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
        AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
        agm_overheating_allowbarrelswap=1;
        hasBipod = true;
        deployedpivot = "deploypivot";
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        bg_bipod = 1; 
        cse_bipod = 1;
        tmr_autorest_deployable = 1; 
        TMR_acc_bipod = 1;
        model = "\hlc_wp_M60E4\mesh\M60e4.p3d";
        reloadaction = "HLC_GestureReloadM60";
        picture = "\hlc_wp_M60E4\tex\ui\gear_m60e4_x_ca";
        displayName = "M60E4";
        discretedistance[] = {300, 400, 500,600,700,800,900,1000,1100};
        cameradir = "aim_point";
        discreteDistanceCameraPoint[] = { "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11" }; /// the angle of gun changes with zeroing
        distanceZoomMin = 100;
        distanceZoomMax = 1100;
        discretedistanceinitindex = 0;

        //modes[] = {"FullAuto"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m60e4\gesture\m60e4.rtm"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 193;
            class CowsSlot : asdg_OpticRail1913_short_MG {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Library {
            libTextDesc = "US Ordnance M60E4";
        };
    };
    class hlc_lmg_m60 : hlc_M60e4_base
    {
        maxZeroing = 1100;
        AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
        AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
        AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
        agm_bipod = 1; 
        AGM_Overheating_allowSwapBarrel = 1;
        tmr_autorest_deployable = 1;
        hasBipod = true;
        deployedpivot = "deploypivot";
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        bg_bipod = 1; 
        cse_bipod = 1;
        author = "Twinke Masta, Millenia, Toadie";
        AB_barrelTwist=12;
        AB_barrelLength=22;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 558.8;
        scope = public;

        displayName = "M60";
        picture = "\hlc_wp_M60E4\tex\ui\gear_m60_x_ca";
        model = "\hlc_wp_M60E4\mesh\m60classic\M60.p3d";
        reloadaction = "HLC_GestureReloadM60";
        discretedistance[] = {300,400,500,600,700,800,900,1000,1100};
        cameradir = "aim_point";
        discreteDistanceCameraPoint[]={"eye3","eye4","eye5","eye6","eye7","eye8","eye9","eye10","eye11"}; /// the angle of gun changes with zeroing
        distanceZoomMin = 100;
        distanceZoomMax = 1100;
        discretedistanceinitindex = 0;
        //modes[] = {"FullAuto"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m60e4\gesture\m60e4.rtm"};
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Library {
            libTextDesc = "US Ordnance M60";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 210;
        };
    };
};
