#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_M134 {
        requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "asdg_jointrails", "hlcweapons_core" };
        units[] = { };
        weapons[] = { "HLC_wp_M134Painless" };
        magazines[] = { "hlc_500rnd_762x51_Belt","hlc_500rnd_762x51_Cinematic"};
        version = "Vyes";
        author = "toadie";
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

class cfgMods {
    class mod_base;

    class Niarms_M134 : Mod_Base {
        name = "NIArsenal: M134";
        picture = "hlc_wp_minigun\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_minigun\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_minigun\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_minigun\tex\ui\NIArms1_ca.paa";
    };
};

class CfgMovesBasic {
    class DefaultDie;

    class ManActions {
        HLC_GestureReloadM134D = "HLC_GestureReloadM134D"; // Would reccommend changing the naming convention, just so nothing overlaps
        //HLC_GestureReloadAMT =  "HLC_GestureReloadAMT";//
    };

    class Actions {
        class RifleBaseStandActions;

        class NoActions : ManActions {
            HLC_GestureReloadM134D[] = { "HLC_GestureReloadM134D", "Gesture" };
        };
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadM134D[] = { "HLC_GestureReloadM134D", "Gesture" };
        };
    };
};

class CfgGesturesMale {
    class Default;

    class States {
        class HLC_GestureReloadM134D : Default {
            
            file = "\hlc_wp_minigun\anim\minigun_reload.rtm";
            //mask = "BodyHalf";
            mask = "handsWeapon";
            speed = -14;
            looped = false;
            headBobStrength = 1;
            headBobMode = 1;
            leftHandIKCurve[] = { 0.078571, 1, 0.085714285, 0, 0.85714285714, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0.0214285714, 1, 0.0285714, 0, 0.888, 0, 0.91, 1 };
            rightHandIKEnd = true;
        };
    };
};

class CfgAmmo {
    class B_762x51_Minigun_Tracer_Red;
    class B_762x51_Minigun_Tracer_Red_splash;

    class HLC_B_762x51_minigun_tracer_red : B_762x51_Minigun_Tracer_Red {
        submunitionAmmo = "HLC_B_762x51_minigun_tracer_sub";
        tracerendtime = 1;
        tracerscale = 1.1;
        tracerstarttime = 0.001;
    };
    class HLC_B_762x51_minigun_cinema_red : B_762x51_Minigun_Tracer_Red {
        submunitionAmmo = "HLC_B_762x51_minigun_explosive_sub";
        tracerendtime = 1;
        tracerscale = 1.1;
        tracerstarttime = 0.00;
    };
    class HLC_B_762x51_minigun_tracer_sub : B_762x51_Minigun_Tracer_Red_splash {
        hit = 12;
        indirectHit = 1;
        indirectHitRange = 2;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 3.6;
        deflecting = 40;
        fuseDistance = 0.1;
        tracerendtime = 1;
        tracerscale = 1.1;
        tracerstarttime = 0.001;
    };
    class HLC_B_762x51_minigun_explosive_sub : B_762x51_Minigun_Tracer_Red_splash {
        hit = 2;
        indirectHit = 5;
        indirectHitRange = 2;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 4;
        deflecting = 60;
        fuseDistance = 0;
        triggerTime = 0.01;
        tracerendtime = 1;
        tracerscale = 1.1;
        tracerstarttime = 0.0;        
        explosive = 0.7;
    };
};

class CfgMagazines {
    class 1000Rnd_65x39_Belt_Tracer_Red;

    class hlc_500rnd_762x51_Belt : 1000Rnd_65x39_Belt_Tracer_Red {
        dlc = "Niarms_M134";
        author = "Toadie";
        count = 500;
        mass = 130;
        descriptionshort = "Caliber: 7.62mmx51 NATO<br />Rounds: 1000<br />(IGNORE INGAME COUNTER. Each round counts for 2)<br />Used in: M134D Epilator";
        displayname = "M134D Casette 500rnd";
        initspeed = 853;
        ammo = "HLC_B_762x51_minigun_tracer_red";
        picture = "\hlc_wp_minigun\tex\ui\m_casette_ca.paa";
        tracersevery = 2;
        lastroundstracer = 30;
    };
    class hlc_500rnd_762x51_Cinematic : 1000Rnd_65x39_Belt_Tracer_Red {
        dlc = "Niarms_M134";
        author = "Toadie";
        count = 500;
        mass = 130;
        descriptionshort = "Caliber: 7.62mmx51 NATO<br />Rounds: 1000<br />(IGNORE INGAME COUNTER. Each round counts for 2)<br />Used in: M134D Epilator";
        displayname = "M134D Casette(C) 500rnd";
        initspeed = 853;
        ammo = "HLC_B_762x51_minigun_cinema_red";
        picture = "\hlc_wp_minigun\tex\ui\m_casette_ca.paa";
        tracersevery = 2;
        lastroundstracer = 30;
    };
};

class CfgWeapons {
    class Default;
    class rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class HLC_wp_M134Painless : Rifle_Base_F {
        inertia = 1.2;
        magazineReloadSwitchPhase = 0.5;
        author = "Toadie";
        dlc = "Niarms_M134";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //    soundBipodDown[] = { "\hlc_wp_ak\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //    soundBipodUp[] = { "\hlc_wp_ak\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = public;
        aidispersioncoefx = 20;
        aidispersioncoefy = 30;
        magazines[] = {
            "hlc_500rnd_762x51_Belt", "hlc_500rnd_762x51_Cinematic"
        };
        class Library {
            libTextDesc = "M134D 'Epilator'";
        };
        reloadAction = "HLC_GestureReloadM134D";
        maxRecoilSway = 1;
        swayDecaySpeed = 1.4;
        recoil = "recoil_mk200";
        class GunParticles : GunParticles {
            class AmmoBeltEject {
                directionName = "linkeject_end";
                effectName = "MachineGunEject2";
                positionName = "linkeject_start";
            };
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 150;
        };
        opticszoommin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        displayName = "M134D 'Epilator'";
        descriptionShort = "Death-Machine<br/>Caliber: 7.62mm";

        handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_minigun\anim\minigun_handgesture.rtm" };
        model = "\hlc_wp_minigun\mesh\m134.p3d";
        picture = "\hlc_wp_minigun\tex\ui\gear_m134_ca";
        cursor = "mg";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
        dexterity = 0.3;
        discretedistance[] = { 50 };
        discretedistanceinitindex = 0;
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
        modes[] = { "FullAuto", "FullAuto2", "fullauto_medium" };
        class Single : Mode_SemiAuto {
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.086;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.001308996;
            minRange = 2;
            minRangeProbab = 0.7;
            midRange = 75;
            midRangeProbab = 0.08;
            maxRange = 250;
            maxRangeProbab = 0.0015;
            sounds[] = { "StandardSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundsetshot[] = { "LMGMinigun65mm_Shot_SoundSet", "LMGMinigun65mm_Tail_SoundSet" };
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
            };
        };
        class FullAuto : Mode_FullAuto {
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.0041;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            dispersion = 0.0040000001;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
            aiRateOfFire = 1e-006;
            sounds[] = { "StandardSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundsetshot[] = { "M134D_Shot_SoundSet", "M134D_tail_SoundSet" };
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
            };
        };
        class FullAuto2 : Mode_FullAuto {
            begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };
            begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1, 1, 900 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.0134;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            dispersion = 0.0030000001;
            minRange = 0;
            minRangeProbab = 0.03;
            midRange = 75;
            midRangeProbab = 0.005;
            maxRange = 250;
            maxRangeProbab = 0.0003;
            aiRateOfFire = 1e-006;
            sounds[] = { "StandardSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundsetshot[] = { "M134D2_Shot_SoundSet", "M134D_tail_SoundSet" };
                begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };
                begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
            };
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 10;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        drysound[] = { "\hlc_wp_minigun\snd\m134_dryfire", 1, 1, 10 };
        reloadMagazineSound[] = { "\hlc_wp_minigun\snd\m134_reload", 0.74, 1, 17 };
    };
};
