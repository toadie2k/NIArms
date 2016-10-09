#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_SAW {
        requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "asdg_jointrails", "hlcweapons_m60e4", "A3_Sounds_F_Mark", "hlcweapons_core" };
        units[] = { "HLC_SAW_ammobox", "Weapon_hlc_lmg_minimipara", "Weapon_hlc_lmg_minimipara", "Weapon_hlc_lmg_minimi", "Weapon_hlc_lmg_minimi_railed", "Weapon_hlc_lmg_m249para", "Weapon_hlc_lmg_m249para", "Weapon_hlc_lmg_M249E2", "Weapon_hlc_lmg_M249E2", "Weapon_hlc_m249_pip1", "Weapon_hlc_m249_pip2", "Weapon_hlc_m249_pip3", "Weapon_hlc_m249_pip4" };
        weapons[] = { "hlc_lmg_minimipara", "hlc_lmg_minimi", "hlc_lmg_m249para", "hlc_lmg_M249E2", "hlc_lmg_minimi_railed", "hlc_m249_pip1", "hlc_m249_pip1", "hlc_m249_pip1", "hlc_m249_pip1", "hlc_m249_pip1", "hlc_m249_SQuantoon","hlc_lmg_mk48"};
        magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_T_SAW","hlc_200rnd_556x45_B_SAW"};
        version="1.25";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;
    class Niarms_SAW : Mod_Base {
        name = "NIArsenal: Minimi LMGs";
        picture = "hlc_wp_saw\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_saw\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_saw\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_saw\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_MuzzleSlot_762MG;
class asdg_OpticRail1913_short_MG;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        HLC_GestureReloadM249 = "HLC_GestureReloadM249"; // Would reccommend changing the naming convention, just so nothing overlaps
        //HLC_GestureReloadM249STANAG = "HLC_GestureReloadM249STANAG";
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249", "Gesture" };
            //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Prone", "Gesture" };
            //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG_Prone", "Gesture" };

        };
        /*
        class RifleKneelActions : RifleBaseStandActions {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
        };*/
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Context", "Gesture" };
            //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Context", "Gesture" };
           //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Context", "Gesture" };
               //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;
    class States {
        class HLC_GestureReloadM249 : Default {
            file = "hlc_wp_saw\anim\gesture\m249_reload_stand.rtm";
            speed = 0.09868421052631578947368421052632;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.016, 0, 0.288, 0, 0.3076, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.09868, 1, 0.1118421, 0, 0.92105, 0, 0.947368, 1 };
        };
        class HLC_GestureReloadM249_Crouch : Default {
            file = "hlc_wp_saw\anim\gesture\m249_reload_crouch.rtm";
            speed = 0.09868421052631578947368421052632;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.45;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1,1,1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.00986, 0, 0.92105, 0, 0.947368, 1 };
        };
        class HLC_GestureReloadM249_Prone : Default {
            file = "hlc_wp_saw\anim\gesture\m249_reload_prone.rtm";
            speed = 0.09868421052631578947368421052632;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.016, 0, 0.288, 0, 0.3076, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.09868, 1, 0.1118421, 0, 0.92105, 0, 0.947368, 1 };
        };
        class HLC_GestureReloadM249_Context : HLC_GestureReloadM249 {
            mask = "handsWeapon_context";
        };/*
        class HLC_GestureReloadM249STANAG : Default {
            file = "hlc_wp_saw\anim\gesture\m249_STANAGreload_stand.rtm";
            speed = 0.24;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;

            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.0476190, 0, 0.8492063, 0, 0.873015, 1 };
        };
        class HLC_GestureReloadM249STANAG_Prone : Default {
            file = "hlc_wp_saw\anim\gesture\m249_STANAGreload_prone.rtm";
            speed = 0.24;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1 ,1,1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.047619, 0,0.8492063, 0, 0.873015, 1 };
        };
        class HLC_GestureReloadM249STANAF_Context : HLC_GestureReloadM249STANAG {
            mask = "handsWeapon_context";
        };*/
    };
};

class CfgVehicles {
    class NATO_Box_Base;
    class HLC_SAW_ammobox : NATO_Box_Base {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "Ammo";
        displayName = "HLC SAW Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_200rnd_556x45_M_SAW,30);
            __M_MAG(hlc_200rnd_556x45_T_SAW,30);
            __M_MAG(hlc_200rnd_556x45_B_SAW,30);
            __M_MAG(hlc_100Rnd_762x51_M_M60E4,30);
        };
        class TransportWeapons {
            __M_WEP(hlc_lmg_minimipara,10);
            __M_WEP(hlc_lmg_minimi,10);
            __M_WEP(hlc_lmg_minimi_railed,10);
            __M_WEP(hlc_lmg_m249para,10);
            __M_WEP(hlc_lmg_M249E2,10);
            __M_WEP(hlc_m249_pip1,10);
            __M_WEP(hlc_m249_pip2,10);
            __M_WEP(hlc_m249_pip3,10);
            __M_WEP(hlc_m249_pip4,10);
            __M_WEP(hlc_m249_SQuantoon,10);
            __M_WEP(hlc_lmg_mk48,10);
        };
        class TransportItems {
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_ACO_grn,10);
        };
    };
    class Weapon_Base_F;
    class Weapon_hlc_lmg_minimipara : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "Minimi Para";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_lmg_minimipara";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class Weapon_hlc_lmg_minimi : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "Minimi";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_lmg_minimi";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class Weapon_hlc_lmg_minimi_railed : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "Minimi(railed)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_lmg_minimi_railed";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class Weapon_hlc_lmg_m249para : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "M249 Para";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_lmg_m249para";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class Weapon_hlc_lmg_M249E2 : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "M249E2";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_lmg_M249E2";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class Weapon_hlc_m249_pip1 : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "M249 PIP (RIS/18.3 in.)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_m249_pip1";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class Weapon_hlc_m249_pip2 : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "M249E2 (RIS/13.7 in.)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_m249_pip2";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };    
    class Weapon_hlc_m249_pip3 : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "M249E2 (RIS/PIP Stock)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_m249_pip3";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class Weapon_hlc_m249_pip4 : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "M249 PIP (VFG/PIP Stock)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_m249_pip4";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class Weapon_hlc_lmg_mk48 : Weapon_Base_F {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk.48 Mod.0";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_lmg_mk48";
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

class CfgMagazines{
    class 30Rnd_556x45_Stanag;
        
    class hlc_200rnd_556x45_M_SAW : 30Rnd_556x45_Stanag {
        dlc = "Niarms_SAW";
        author = "Toadie";
        ammo = "HLC_556NATO_EPR";
        count = 200;
        descriptionshort = "Caliber: 5.56x45mm M855A1 EP Ball/Tracer(4/1)<br />Rounds: 200<br />Used in: M249,FN Minimi";
        displayname = "M249 Belt (Mixed) 200rnd 5.56mm";
        model = "hlc_wp_saw\mesh\magazine\magazine.p3d";
        initspeed = 925;
        lastroundstracer = 10;
        picture = "\hlc_core\tex\ui\ammo\m_m249mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        mass = 58;
        displaynameshort = "EPR/Tracer";
        nameSound = "mgun";
    };
    class hlc_200rnd_556x45_T_SAW : hlc_200rnd_556x45_M_SAW {
        dlc = "Niarms_SAW";
        author = "Toadie";
        ammo = "B_556x45_Ball_Tracer_Red";
        descriptionshort = "Caliber: 5.56x45mm Tracer<br />Rounds: 200<br />Used in: M249,FN Minimi";
        displayname = "M249 Belt (Tracer) 200rnd 5.56mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m249tracer_ca.paa";
        tracersevery = 1;
        displaynameshort = "Tracer";
    };
    class hlc_200rnd_556x45_Mdim_SAW : hlc_200rnd_556x45_M_SAW {
        dlc = "Niarms_SAW";
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        descriptionshort = "Caliber: 5.56x45mm M855A1 EP Ball/Tracer(4/1)<br />Rounds: 200<br />Used in: M249,FN Minimi";
        displayname = "M249 Belt (Mixed) 200rnd 5.56mm";
        lastroundstracer = 10;
        picture = "\hlc_core\tex\ui\ammo\m_m249mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
    };
    class hlc_200rnd_556x45_B_SAW : hlc_200rnd_556x45_M_SAW {
        dlc = "Niarms_SAW";
        author = "Toadie";
        ammo = "HLC_556NATO_EPR";
        descriptionshort = "Caliber: 5.56x45mm M855A1 EP Ball<br />Rounds: 200<br />Used in: M249,FN Minimi";
        displayname = "M249 Belt (Ball) 200rnd 5.56mm";
        lastroundstracer = 10;
        picture = "\hlc_core\tex\ui\ammo\m_m249ball_ca.paa";
        tracersevery = 0;
        displaynameshort = "EPR";
    };
};

class CfgRecoils {
    class recoil_default;
    class recoil_saw : recoil_default {
        muzzleOuter[] = { 0.4, 0.5, 0.3, 0.2 };
        kickBack[] = { 0.02, 0.04 };
        temporary = 0.007;
        permanent = 0.08;
    };
};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_saw_base : Rifle_Base_F {
        dlc = "Niarms_SAW";
        author = "Toadie";
        scope = protected;
        ACE_Overheating_allowSwapBarrel = 1;
        ACE_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        ACE_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        ACE_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        magazineReloadSwitchPhase = 0.5;
        magazines[] = {};
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
            mass = 165;
            class MuzzleSlot: asdg_MuzzleSlot_762MG {};
            class CowsSlot {};
            class PointerSlot {};
        };
        descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
        cursor = "mg";
        cursorAim = "EmptyCursor";
        nameSound = "Mgun";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";

        dexterity = 1.8;
        bullet1[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_01.wss", 0.1, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_02.wss", 0.1, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_03.wss", 0.177828, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_04.wss", 0.177828, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss", 0.1, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss", 0.1, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss", 0.1, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss", 0.1, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_01.wss", 0.01, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_02.wss", 0.01, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_03.wss", 0.01, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_04.wss", 0.01, 1, 15 };
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
        modes[] = { "FullAuto", "close",
            "short",
            "medium",
            "far_optic1",
            "far_optic2"
        };
        inertia = 0.8;
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

             class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_saw\snd\saw_first", 0.7, 1,10};
                closure2[]={"\hlc_wp_saw\snd\saw_first", 0.7, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "saw_Shot_SoundSet", "saw_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "saw_silencerShot_SoundSet", "saw_silencerTail_SoundSet" };
            };
            reloadTime = 0.105;
            dispersion=0.000261799;
            maxrange = 600;
            maxrangeprobab = 0.05;
            midrange = 300;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            airateoffire = 4;
        };
        class close : FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.69;
            maxRange = 50;
            maxRangeProbab = 0.039;
            showToPlayer = 0;
        };
        class short : close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.69;
            maxRange = 300;
            maxRangeProbab = 0.039;
        };
        class medium : close {
            burst = 5;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.60000002;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
        class far_optic1 : close {
            requiredOpticType = 1;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 9;
            aiRateOfFireDistance = 900;
            minRange = 350;
            minRangeProbab = 0.039;
            midRange = 550;
            midRangeProbab = 0.5;
            maxRange = 700;
            maxRangeProbab = 0.0098;
        };
        class far_optic2 : far_optic1 {
            requiredOpticType = 2;
            autoFire = 0;
            burst = 1;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.0098;
        };
        aidispersioncoefx = 21;
        aidispersioncoefy = 24;

        drysound[] = {"\hlc_core\sound\empty_machineguns", 1, 1, 10};
        reloadmagazinesound[] = {"\hlc_core\sound\empty_machineguns", 0.5, 1};
    };
    class hlc_lmg_minimipara : hlc_saw_base {
        dlc = "Niarms_SAW";
        author = "Toadie";
        scope = public;
        AB_barrelTwist = 7;
        AB_barrelLength = 13.7;
        agm_bipod = 1;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 349;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 1;
        tmr_autorest_deployable = 1;
        TMR_acc_bipod = 1;
        initspeed = -0.936216;
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        magazines[] = {__556NATO_BELTS,__556NATO_BI_BELTS,__556STANAG_MAGS,__556STANAG_BI_MAGS,__556NATO_BI_DRUMS};
        class GunParticles : GunParticles {
            class AmmoBeltEject {
                directionName = "linkeject_end";
                effectName = "MachineGunEject2";
                positionName = "linkeject_start";
            };
        };
        model = "\hlc_wp_saw\mesh\minimi_para\minimi.p3d";
        reloadaction = "HLC_GestureReloadM249";
        descriptionShort = "Light Machine Gun<br/>Caliber: 5.56mm";
        drysound[] = { "\hlc_wp_saw\snd\empty_machineguns", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_saw\snd\soundshaders\SAW\saw_reload", 0.7, 1, 20 };
        inertia = 0.75;
        picture = "\hlc_wp_saw\tex\ui\gear_minimipara_x_ca";
        displayName = "FN Minimi Para";
        discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
        discretedistanceinitindex = 2;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\handpose_standard.rtm" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 165;
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class FullAuto : FullAuto {
            reloadTime = 0.067;
            dispersion = 0.00101;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            airateoffire = 4;
        };
        class Library {
            libTextDesc = "FN Herstal Minimi";
        };
    };
    /*
    // Commented out 
    // Reason - Not enough time to do script+ clean animation. Too many errors, may re-implement at a later version. 

    class hlc_lmg_minimipara_STANAG : hlc_saw_base {
        scope = public;
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        magazines[] = {
            "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_50rnd_556x45_EPR",// HLC AR15 Magazines
            "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", // BI STANAG Magazines
            //"CUP_200Rnd_TE4_Green_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE1_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Green_Tracer_556x45_M249", "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249", "CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", "CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1", "CUP_30Rnd_556x45_Stanag", "CUP_20Rnd_556x45_Stanag", //CUP Mags
            "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M200_Stanag"//
        };
        model = "\hlc_wp_saw\mesh\minimi_para\minimi_stanag.p3d";
        reloadaction = "HLC_GestureReloadM249STANAG";
        descriptionShort = "Light Machine Gun<br/>Caliber: 5.56mm";
        drysound[] = { "\hlc_wp_saw\snd\empty_machineguns", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_saw\snd\saw_magfeed_reload", 0.5, 1, 20 };
        picture = "\hlc_wp_saw\tex\ui\gear_m60e4_x_ca";
        displayName = "FN Minimi Para(STANAG)";
        discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
        discretedistanceinitindex = 2;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_m60e4\gesture\m60e4.rtm" };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_saw\snd\saw_magfeed_first", 0.7, 1, 10 };
                closure2[] = { "\hlc_wp_saw\snd\saw_magfeed_first", 0.7, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[] = { "\hlc_wp_saw\snd\saw_fire", 1, 1, 1200 };
                begin2[] = { "\hlc_wp_saw\snd\saw_fire", 1, 1, 1200 };
                begin3[] = { "\hlc_wp_saw\snd\saw_fire", 1, 1, 1200 };
                soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
                class SoundTails {
                    class TailForest {
                        sound[] = { "hlc_wp_saw\snd\ar556_forest", 1.5, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior {
                        sound[] = { "hlc_wp_saw\snd\saw_indoor", 1.2, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                    class TailMeadows {
                        sound[] = { "hlc_wp_saw\snd\saw_tail1", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses {
                        sound[] = { "hlc_wp_saw\snd\saw_tail2", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*houses";
                    };
                };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[] = { "\hlc_wp_saw\snd\saw_suppressed", 1.1, 1, 200 };
                begin2[] = { "\hlc_wp_saw\snd\saw_suppressed", 1.1, 1, 200 };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "hlc_wp_saw\snd\saw_suppressed_indoor", 1.2, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
            };
            reloadTime = 0.06;
            dispersion = 0.000261799;
            maxrange = 600;
            maxrangeprobab = 0.05;
            midrange = 300;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            airateoffire = 4;
        };
        class Library {
            libTextDesc = "FN Herstal Minimi";
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
    };
    */
    class hlc_lmg_minimi : hlc_lmg_minimipara {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\minimi_para\minimi_longer.p3d";
        displayName = "FN Minimi (18.3 in.)";
        picture = "\hlc_wp_saw\tex\ui\gear_minimi_x_ca";
        inertia = 0.8;
        initspeed = -1;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 465;
        AB_barrelTwist = 7;
        AB_barrelLength = 18.3;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot : MuzzleSlot {
                iconPosition[] = { 0.0, 0.4 };
            };
            class CowsSlot : CowsSlot {
                iconPosition[] = { 0.5, 0.3 };
            };
            class PointerSlot : PointerSlot {
                iconPosition[] = { 0.2, 0.4 };
            };
            mass = 167;
        };
    };
    class hlc_lmg_m249para : hlc_lmg_minimipara {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\m249\m249paratrooper.p3d";
        displayName = "M249E2 Para(13.7in.)";
        picture = "\hlc_wp_saw\tex\ui\gear_m249para_x_ca";
        inertia = 0.75;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 349;
        AB_barrelTwist = 12;
        AB_barrelLength = 13.7;

    };
    class hlc_lmg_M249E2 : hlc_lmg_minimipara {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\m249\m249E2.p3d";
        displayName = "M249E2";
        picture = "\hlc_wp_saw\tex\ui\gear_m249e2_x_ca";
        inertia = 0.8;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 465;
        AB_barrelTwist = 12;
        AB_barrelLength = 18.3;
        initspeed = -1;
    };

    class hlc_lmg_minimi_railed : hlc_lmg_minimipara {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\minimi_para\minimi_longer_railed.p3d";
        displayName = "FN Minimi (RIS/Solid Stock)";
        picture = "\hlc_wp_saw\tex\ui\gear_minimiris_x_ca";
        ACE_barrelTwist = 178;
        ACE_barrelLength = 465;
        AB_barrelTwist = 12;
        AB_barrelLength = 18.3;
        inertia = 0.81;
        initspeed = -1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
                mass = 168;
                class CowsSlot : asdg_OpticRail1913_short_MG {};
        };
    };
    class hlc_m249_pip1 : hlc_lmg_minimi_railed {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\m249\m249e2_pip1.p3d";
        displayName = "M249 PIP (RIS/18.3 in.)";
        picture = "\hlc_wp_saw\tex\ui\gear_m249e2pip_x_ca";
        inertia = 0.81;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 465;
        AB_barrelTwist = 12;
        AB_barrelLength = 18.3;
        initspeed = -1;
    };
    class hlc_m249_pip2 : hlc_lmg_minimi_railed {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\m249\m249e2_pip2.p3d";
        displayName = "M249E2 (RIS/13.7 in.)";
        picture = "\hlc_wp_saw\tex\ui\gear_m249e2parapip_x_ca";
        inertia = 0.76;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 349;
        AB_barrelTwist = 12;
        AB_barrelLength = 13.7;
    };
    class hlc_m249_pip3 : hlc_lmg_minimi_railed {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\m249\m249e2_pip3.p3d";
        displayName = "M249 PIP (RIS/PIP Stock)";
        picture = "\hlc_wp_saw\tex\ui\gear_m249e2parapip2_x_ca";
        inertia = 0.72;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 349;
        AB_barrelTwist = 12;
        AB_barrelLength = 13.7;
    };
    class hlc_m249_pip4 : hlc_lmg_minimi_railed {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\m249\m249e2_pip4.p3d";
        displayName = "M249 PIP (VFG/PIP Stock)";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\handpose_VFG.rtm" };
        picture = "\hlc_wp_saw\tex\ui\gear_m249e2pip2_x_ca";
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        inertia = 0.71;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 465;
        AB_barrelTwist = 12;
        AB_barrelLength = 18.3;
        initspeed = -1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 155;
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
    };
    class hlc_m249_SQuantoon : hlc_m249_pip4 {
        author = "Toadie, w/Special Thanks to Squantoon";
        model = "\hlc_wp_saw\mesh\m249\m249e2_squant.p3d";
        displayName = "M249 (Squantoon Special)";
        picture = "\hlc_wp_saw\tex\ui\gear_m249SQUANT_x_ca";
        inertia = 0.71;
        initspeed = -1;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 156;
        };
    };
    class hlc_lmg_mk48 : hlc_saw_base {
        author = "Toadie";
        scope = public;
        agm_bipod = 1;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 465;
        AB_barrelTwist = 12;
        AB_barrelLength = 18.3;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 1;
        tmr_autorest_deployable = 1;
        TMR_acc_bipod = 1;
        hasBipod = false;
        reloadaction = "HLC_GestureReloadM249";
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\handpose_VFG.rtm" };
        recoil = "recoil_zafir";
        magazines[] = {__762NATO_BELTS,__762NATO_BI_BELTS};
        discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
        discretedistanceinitindex = 2;
        reloadmagazinesound[] = { "\hlc_wp_saw\snd\soundshaders\mk48\mk48_reload", 1, 1, 20 };
        class GunParticles : GunParticles {
            class AmmoBeltEject {
                directionName = "linkeject_end";
                effectName = "MachineGunEject2";
                positionName = "linkeject_start";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 102;
            class UnderBarrelSlot : asdg_UnderSlot {};
            class CowsSlot : asdg_OpticRail1913_short_MG {};
            class PointerSlot : asdg_FrontSideRail {};
        };
        picture = "\hlc_wp_saw\tex\ui\gear_mk48_ca";
        model = "\hlc_wp_saw\mesh\mk48\Mk48.p3d";
        displayName = "Mk.48 Mod.0";
        descriptionShort = "Light Machine Gun<br/>Caliber: 7.62mm";
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_saw\snd\mk48_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_saw\snd\mk48_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "mk48_Shot_SoundSet", "mk48_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "mk48_silencerShot_SoundSet", "mk48_silencerTail_SoundSet" };
            };
            reloadTime = 0.084;
            dispersion = 0.000261799;
            maxrange = 600;
            maxrangeprobab = 0.05;
            midrange = 300;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            airateoffire = 4;
        }; 
        class close : FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.69;
            maxRange = 50;
            maxRangeProbab = 0.039;
            showToPlayer = 0;
        };
        class short : close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.69;
            maxRange = 300;
            maxRangeProbab = 0.039;
        };
        class medium : close {
            burst = 5;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.60000002;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
        class far_optic1 : close {
            requiredOpticType = 1;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 9;
            aiRateOfFireDistance = 900;
            minRange = 350;
            minRangeProbab = 0.039;
            midRange = 550;
            midRangeProbab = 0.5;
            maxRange = 700;
            maxRangeProbab = 0.0098;
        };
        class far_optic2 : far_optic1 {
            requiredOpticType = 2;
            autoFire = 0;
            burst = 1;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.0098;
        };
        class Library {
            libTextDesc = "US Ordnance M60E4";
        };
    };
    class hlc_lmg_mk48mod1: hlc_lmg_mk48
    {
        hasBipod = true;
        deployedPivot = "deploypoint";
        picture = "\hlc_wp_saw\tex\ui\gear_mk48_ca";
        model = "\hlc_wp_saw\mesh\mk48\Mk48mod1.p3d";
        displayName = "Mk.48 Mod.1";
        descriptionShort = "Light Machine Gun<br/>Caliber: 7.62mm";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 102;
            class UnderBarrelSlot {};
        };
    };
    /*Commented Out
    //Reason - Mk48 test model deleted for release, "test" M249 deleted because redundant. 
    class hlc_lmg_mk48 : hlc_saw_base {
        scope = public;
        magazines[] = {
            "hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_T_M60E4"
        };
        model = "\hlc_wp_saw\mesh\mk48_des\Mk48.p3d";
        reloadaction = "HLC_GestureReloadM60";
        descriptionShort = "Light Machine Gun<br/>Caliber: 7.62mm";
        drysound[] = {"\hlc_core\sound\empty_machineguns", 0.01, 1, 10};
        reloadmagazinesound[] = {"\hlc_wp_saw\snd\mk48_reload", 0.5, 1, 20};
        picture = "\hlc_wp_M60E4\tex\ui\gear_m60e4_x_ca";
        displayName = "FN Mk.48 Mod.0";
        discretedistance[] = {100, 200, 300, 400, 500,600,700,800};
        discretedistanceinitindex = 2;
        bg_bipod = 1; 
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m60e4\gesture\m60e4.rtm"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 102;
            class MuzzleSlot : SlotInfo {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_H_MG"};
            };
            class asdg_OpticRail_hl48: asdg_OpticRail1913 {};
            class asdg_FrontSideRail_hl48: asdg_FrontSideRail {};
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

                closure1[]={"\hlc_wp_saw\snd\mk48_first", 1, 1,10};
                closure2[]={"\hlc_wp_saw\snd\mk48_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[]={"\hlc_wp_saw\snd\mk48_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_saw\snd\mk48_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_saw\snd\mk48_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[]={"\hlc_wp_saw\snd\gpmg_suppressed", 1, 1,200};
                begin2[]={"\hlc_wp_saw\snd\gpmg_suppressed", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
            begin1[] = {"\hlc_wp_saw\snd\mk48_fire",1.3,1,1200};
            begin2[] = {"\hlc_wp_saw\snd\mk48_fire",1.3,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_saw\snd\mk48_first",1,1,30};
            closure2[] = {"\hlc_wp_saw\snd\mk48_first",1,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.084;
            dispersion=0.000261799;
            maxrange = 600;
            maxrangeprobab = 0.05;
            midrange = 300;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            airateoffire = 4;
        };
        class Library {
            libTextDesc = "US Ordnance M60E4";
        };
    };
    class hlc_lmg_m249pip : hlc_lmg_mk48 {
        scope = public;
        magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_B_SAW","hlc_200rnd_556x45_T_SAW","hlc_30rnd_556x45_EPR","hlc_20rnd_556x45_STANAG","30Rnd_556x45_Stanag","hlc_30rnd_556x45_SOST","hlc_30rnd_556x45_SPR","hlc_50rnd_556x45_EPR", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow"};
        model = "\hlc_wp_saw\mesh\m249e2\m249e2.p3d";
        reloadaction = "HLC_GestureReloadM60";
        descriptionShort = "Light Machine Gun<br/>Caliber: 5.56mm";
        drysound[] = {"\hlc_core\sound\empty_machineguns", 0.01, 1, 10};
        reloadmagazinesound[] = {"\hlc_wp_saw\snd\saw_reload", 0.5, 1, 20};
        picture = "\hlc_wp_M60E4\tex\ui\gear_m60e4_x_ca";
        displayName = "M249E2";
        discretedistance[] = {100, 200, 300, 400, 500,600,700,800};
        discretedistanceinitindex = 2;
        bg_bipod = 1; 
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_m60e4\gesture\m60e4.rtm"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 102;
            class MuzzleSlot : SlotInfo {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_M"};
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

                closure1[]={"\hlc_wp_saw\snd\saw_first", 0.7, 1,10};
                closure2[]={"\hlc_wp_saw\snd\saw_first", 0.7, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[]={"\hlc_wp_saw\snd\saw_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_saw\snd\saw_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_saw\snd\saw_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[]={"\hlc_wp_saw\snd\saw_suppressed", 1.1, 1,200};
                begin2[]={"\hlc_wp_saw\snd\saw_suppressed", 1.1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
            begin1[] = {"\hlc_wp_saw\snd\mk48_fire",1.3,1,1200};
            begin2[] = {"\hlc_wp_saw\snd\mk48_fire",1.3,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_saw\snd\mk48_first",1,1,30};
            closure2[] = {"\hlc_wp_saw\snd\mk48_first",1,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.067;
            dispersion=0.000261799;
            maxrange = 600;
            maxrangeprobab = 0.05;
            midrange = 300;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            airateoffire = 4;
        };
        class Library {
            libTextDesc = "FN USa M249E2 P";
        };
    };*/
};