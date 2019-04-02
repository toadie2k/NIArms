#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_FN3011 {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        version="1.05";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;

    class Niarms_FN3011 : Mod_Base {
        name = "NIArsenal: FN30-11 Rifles";
        picture = "hlc_wp_fn3011\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_fn3011\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_fn3011\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_fn3011\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

//class PointerSlot;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class nia_charms_slot;
class asdg_SlotInfo;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems;
};
class CfgSounds {
    class hlc_bolt_Fn3011 {
        name = "hlc_bolt_FN3011";
        Sound[] = { "\hlc_wp_FN3011\snd\FN3011_shift", 1, 1, 15 };
        titles[] = {};
    };
};

class CfgVehicles {
    class B_supplyCrate_F;
    class Weapon_Base_F;

    class HLC_LRR_ammobox: B_supplyCrate_F {
        dlc = "Niarms_FN3011";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC LRR Box";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_10Rnd_762x51_B_fal,30);
            __M_MAG(hlc_10Rnd_762x51_mk316_fal,30);
            __M_MAG(hlc_10Rnd_762x51_barrier_fal,30);
            __M_MAG(hlc_10Rnd_762x51_T_fal,30);
            __M_MAG(hlc_10Rnd_762x51_TDim_fal,30);
            __M_MAG(hlc_10Rnd_762x51_S_fal,30);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_FN3011,10);
            __M_WEP(hlc_rifle_FN3011_WDL,10);
            __M_WEP(hlc_rifle_FN3011Modern,10);
            __M_WEP(hlc_rifle_FN3011Modern_camo,10);
            __M_WEP(hlc_rifle_FN3011Lynx,10);
            __M_WEP(hlc_rifle_FN3011Tactical,10);
            __M_WEP(hlc_rifle_FN3011Tactical_grey,10);
            __M_WEP(hlc_rifle_FN3011Tactical_green,10);
        };
        class TransportItems {
            __M_ITM(HLC_bipod_UTGShooters,10);
            __M_ITM(optic_LRPS,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_NVS,10);
            __M_ITM(optic_SOS,10);
            __M_ITM(hlc_optic_LeupoldM3A,10);
            __M_ITM(hlc_optic_ZF95Base,10);
            __M_ITM(hlc_optic_ANGSCHUTZ,10);
            __M_ITM(hlc_optic_FNSTANAG4X,10);
            __M_ITM(hlc_optic_FNSTANAG2D,10);
            __M_ITM(hlc_optic_Kern_3011,10);
            __M_ITM(hlc_optic_Kern2d_3011,10);
            __M_ITM(hlc_optic_ZF95_3011,10);
            __M_ITM(hlc_optic_LeupoldM3A_3011,10);
        };
    };
    __WEAPONHOLDER(hlc_rifle_FN3011,hlc_10Rnd_762x51_B_fal,FN30-11,Niarms_Fn3011,Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_FN3011_WDL,hlc_10Rnd_762x51_B_fal,FN30-11(Woodland),Niarms_Fn3011,Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_FN3011Modern,hlc_10Rnd_762x51_B_fal,FN30-11 (Modernised),Niarms_Fn3011,Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_FN3011Modern_camo,hlc_10Rnd_762x51_B_fal,FN30-11(Modernised/Camo),Niarms_Fn3011,Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_FN3011Lynx,hlc_10Rnd_762x51_B_fal,FN30-11 (Modernised/Lynx),Niarms_Fn3011,Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_FN3011Tactical,hlc_10Rnd_762x51_B_fal,FN30-11 (Tac/Walnut),Niarms_Fn3011,Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_FN3011Tactical_grey,hlc_10Rnd_762x51_B_fal,FN30-11 (Tac/Greyash),Niarms_Fn3011,Toadie,SniperRifles);
    __WEAPONHOLDER(hlc_rifle_FN3011Tactical_green,hlc_10Rnd_762x51_B_fal,FN30-11 (Tac/Green),Niarms_Fn3011,Toadie,SniperRifles);
};

class CfgRecoils
{
    class recoil_default;

    class recoil_FN3011 : recoil_default {
        muzzleOuter[] = { 0.2, 0.6, 0.5, 0.2 };
        kickBack[] = { 0.02, 0.02 };
        temporary = 0.01;
    };
};

class CfgWeapons {
    class InventoryOpticsItem_Base_F;
    class optic_Arco;
    class optic_hamr;
    class hlc_optic_ZF4xBase;
    class hlc_optic_FNSTANAG4X : hlc_optic_ZF4xBase
    {
        dlc = "Niarms_FN3011";
        scope = public;
        author = "Toadie";
        descriptionshort = $STR_NIA_FNZF4x_DESC;
        displayname = $STR_NIA_optic_ZF4xBase;
        picture = "\hlc_core\tex\ui\gear_fnstanag_ca";
        model = "hlc_wp_FN3011\mesh\FN 4x\Scope.p3d";
        weaponInfoType = "RscWeaponZeroing";

        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 10;
            opticType = 2;
            optics = 1;
            modelOptics = "hlc_wp_FN3011\mesh\FN 4x\STANAG_optics";
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
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
        inertia = 0.2;
        tmr_optics_enhanced = 0;
    };
    class hlc_optic_FNSTANAG2D : hlc_optic_FNSTANAG4X
    {
        author = "Toadie";
        displayname = $STR_NIA_optic_ZF4x_2d;
        class ItemInfo : ItemInfo
        {
            class OpticsModes : OpticsModes
            {
                class Snip : Snip
                {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    discreteDistance[] = { 100,200, 300, 400, 500, 600};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 600;
                    modelOptics[] = { "hlc_wp_FN3011\mesh\FN 4x\STANAG_optics" };
                };
                class Kolimator : Kolimator {};
            };
        };
    };
    class hlc_optic_KernBase;
    class hlc_optic_Kern_3011 : hlc_optic_KernBase
    {
        dlc = "Niarms_FN3011";
        scope = public;
        author = "Toadie";
        descriptionshort = $STR_NIA_AARAU_DESC;
        displayname = $STR_NIA_optic_kern_AARAU_FN;
        picture = "hlc_core\tex\ui\gear_aarau_x_ca";
        model = "hlc_wp_FN3011\mesh\aarau\AARAU.p3d";
        weaponInfoType = "RscWeaponZeroing";

        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 10;
            opticType = 1;
            optics = 1;
            modelOptics = "\hlc_core\mesh\accessories\sights\reticles\AARAU_optics.p3d";
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
                    discreteDistance[] = { 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 800;
                    memoryPointCamera = "eye2";
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
                    memorypointcamera = "AOTT";
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
        tmr_optics_enhanced = 0;
    };
    class hlc_optic_Kern2d_3011 : hlc_optic_Kern_3011
    {
        dlc = "Niarms_FN3011";
        author = "Toadie, Kaukaussus";
        displayname = $STR_NIA_optic_kern_AARAU_2d_FN;
        class ItemInfo : ItemInfo
        {
            class OpticsModes : OpticsModes
            {
                class Snip : Snip
                {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    discreteDistance[] = {100,150, 200,250, 300,350, 400,450, 500,550, 600,650, 700,750, 800 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 800;
                    modelOptics[] = { "\hlc_core\mesh\accessories\sights\reticles\AARAU_optics.p3d" };
                };
                class Kolimator : Kolimator {};
            };
        };
    };
    class hlc_optic_ANGSCHUTZ : optic_hamr
    {
        dlc = "Niarms_FN3011";
        scope = public;
        author = "Toadie";
        descriptionshort = $STR_NIA_anshutz_DESC;
        displayname = $STR_NIA_optic_AnschutzN;
        picture = "\hlc_wp_FN3011\tex\ui\gear_diopter_ca";
        model = "hlc_wp_FN3011\mesh\angschutz\Scope.p3d";
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
            modelOptics = "hlc_wp_FN3011\mesh\FN 4x\STANAG_optics";
            class OpticsModes
            {
                class Snip
                {
                    cameradir = "";
                    usemodeloptics = 0;
                    __OPTICSZOOM_1X;
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
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
        inertia = 0.2;
        tmr_optics_enhanced = 0;
    };
    class hlc_optic_ZF95Base;
    class hlc_optic_ZF95_3011 : hlc_optic_ZF95Base
    {
                author = "Toadie";
                model = "hlc_wp_FN3011\mesh\zf95\Scope.p3d";
                displayname = $STR_NIA_optic_ZF95_FN;
    };
    class hlc_optic_LeupoldM3A;
    class hlc_optic_LeupoldM3A_3011:hlc_optic_LeupoldM3A
    {
            author = "Toadie";
            model = "hlc_wp_FN3011\mesh\m3a_3011\Scope.p3d";
            displayname = $STR_NIA_optic_LeupoldM3A_FN;

    };
    class ItemCore;

    class Rifle;
    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_FN3011_base : Rifle_Base_F {
        dlc = "Niarms_FN3011";
        author = "Toadie";
        scope = protected;
        magazines[] = { __762FN_MAGS, __762FAL_MAGS };
        magazineWell[] = { "CBA_762x51_FAL" };
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        maxZeroing = 1600;
        class GunParticles {
            class FirstEffect {
                effectName = "SniperCloud";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class PointerSlot {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class CowsSlot {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class Charmslot : nia_charms_slot {};
        };
        descriptionShort = $STR_NIA_FN3011_DESC;

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
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};

        modes[] = { "Single", "far_optic1", "medium_optic2", "far_optic2" };

        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                 weaponSoundEffect  = "DefaultRifle";

                 closure1[]={"\hlc_wp_FN3011\snd\FN3011_first", 0.7, 1,10};
                 closure2[]={"\hlc_wp_FN3011\snd\FN3011_first", 0.7, 1,10};
                 soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "fn3011_Shot_SoundSet", "fn3011_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "fn3011_silencerShot_SoundSet", "fn3011_silencerTail_SoundSet" };
            };

            reloadTime = 2;
            dispersion = 0.000111119;

            __AI_ROF_RIFLE_SNIPER762_SEMI;
        };
        class far_optic1 : Single {
            showToPlayer = 0;
            __AI_ROF_338SNIPER_SEMI;
        };
        class medium_optic2 : Single {
            showToPlayer = 0;
            __AI_ROF_338SNIPER_MSCOPE_SEMI;
            requiredOpticType = 2;
        };
        class far_optic2 : far_optic1 {
            __AI_ROF_338SNIPER_HSCOPE_SEMI;
            requiredOpticType = 2;
        };

        __AI_DISPERSION_COEF;

        drysound[] = { "\hlc_wp_FN3011\snd\FN3011_dryfire", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_FN3011\snd\FN3011_reload", 0.8, 1, 20 };

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
    };


    class hlc_rifle_FN3011 : hlc_FN3011_base {
        dlc = "niarms_fn3011";
        author = "toadie";
        scope = public;
        AB_barrelTwist = 8;
        AB_barrelLength = 12;
        agm_bipod = 1;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 502;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 0;
        tmr_autorest_deployable = 0;
        TMR_acc_bipod = 0;
        recoil = "recoil_FN3011";
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "\hlc_wp_FN3011\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_wp_FN3011\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of folding the bipod
        magazineReloadSwitchPhase = 0.5;
        class EventHandlers {
            fired = "_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents {
                HandAction = "HLC_GestureRechamber3011";
                Actiondelay = 0.00;
                Sound = "hlc_bolt_Fn3011";
                Sound_Location = "RightHandMiddle1";
                hasOptic = false;
                onEmpty = 0;
        };
        cursor = "srifle";
        cursorAim = "EmptyCursor";
        model = "\hlc_wp_FN3011\mesh\rifle\3011.p3d";
        reloadaction = "HLC_GestureReload3011";
        descriptionShort = $STR_NIA_FN3011_DESC;
        inertia = 0.485;
        __DEXTERITY(4.85, 0);
        picture = "\hlc_wp_fn3011\tex\ui\gear_fn3011_ca";
        displayName = $STR_NIA_rifle_FN3011;
        discretedistance[] = { 100 };
        discretedistanceinitindex = 0;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_fn3011\gestures\hands_FN3011.rtm" };
        hiddenSelections[] = { "camo", "camo2","camo3"};
        hiddenSelectionsTextures[] = { "hlc_wp_fn3011\tex\main\3011_main_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories2_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories1_co.tga"  };
        HiddenSelectionsMaterials[] = { "hlc_wp_fn3011\mat\FN3011_main.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories2.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories1.rvmat"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 106;
            class CowsSlot :asdg_OpticRail {
                class compatibleItems {
                    hlc_optic_ANGSCHUTZ = 1;
                    hlc_optic_FNSTANAG4X = 1;
                    hlc_optic_FNSTANAG2D = 1;
                    hlc_optic_Kern_3011 = 1;
                    hlc_optic_Kern2d_3011 = 1;
                    hlc_optic_ZF95_3011 = 1;
                    hlc_optic_LeupoldM3A_3011 = 1;
                };
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
        class Single : Single {
            __MOA(1.03);
        };

        class Library {
            libTextDesc = "FN Herstal FN30-11";
        };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_762x51_B_fal = "hlc_rifle_FN3011_20rnd";
            hlc_20Rnd_762x51_mk316_fal = "hlc_rifle_FN3011_20rnd";
            hlc_20Rnd_762x51_Barrier_fal = "hlc_rifle_FN3011_20rnd";
            hlc_20Rnd_762x51_t_fal = "hlc_rifle_FN3011_20rnd";
            hlc_20Rnd_762x51_TDim_fal = "hlc_rifle_FN3011_20rnd";
            hlc_20Rnd_762x51_S_fal = "hlc_rifle_FN3011_20rnd";
            hlc_50Rnd_762x51_B_fal = "hlc_rifle_FN3011_50rnd";
            hlc_50Rnd_762x51_T_fal = "hlc_rifle_FN3011_50rnd";
            hlc_50Rnd_762x51_TDim_fal = "hlc_rifle_FN3011_50rnd";
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FN3011_50rnd";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FN3011_50rnd";

            default = "hlc_rifle_FN3011";
        };
    };
    class hlc_rifle_FN3011_20rnd : hlc_rifle_FN3011
        {
            scopeArsenal = 0;
            author = "Toadie";
            reloadaction = "HLC_GestureReload3011_20rnd";
            //hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
            inertia = 0.485+0.078;
            __DEXTERITY(4.85+0.78, 0);
        };
    class hlc_rifle_FN3011_50rnd : hlc_rifle_FN3011
        {
            scopeArsenal = 0;
            author = "Toadie";
            reloadaction = "HLC_GestureReload3011_50rnd";
            //hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
            inertia = 0.485+0.225;
            __DEXTERITY(4.85+2.25, 0);
        };

        class hlc_rifle_FN3011_WDL: hlc_rifle_FN3011
        {
            picture = "\hlc_wp_fn3011\tex\ui\gear_fn3011wdl_ca";
            displayName = $STR_NIA_rifle_FN3011WDL;
            hiddenSelections[] = { "camo", "camo2","camo3"};
            hiddenSelectionsTextures[] = { "hlc_wp_fn3011\tex\main\3011_main_woodland_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories2_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories1_co.tga"  };
            HiddenSelectionsMaterials[] = { "hlc_wp_fn3011\mat\FN3011_main_wdl.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories2.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories1.rvmat"};
            class __MAGSWITCHCLASS {
                hlc_20Rnd_762x51_B_fal = "hlc_rifle_FN3011_WDL_20rnd";
                hlc_20Rnd_762x51_mk316_fal = "hlc_rifle_FN3011_WDL_20rnd";
                hlc_20Rnd_762x51_Barrier_fal = "hlc_rifle_FN3011_WDL_20rnd";
                hlc_20Rnd_762x51_t_fal = "hlc_rifle_FN3011_WDL_20rnd";
                hlc_20Rnd_762x51_TDim_fal = "hlc_rifle_FN3011_WDL_20rnd";
                hlc_20Rnd_762x51_S_fal = "hlc_rifle_FN3011_WDL_20rnd";
                hlc_50Rnd_762x51_B_fal = "hlc_rifle_FN3011_WDL_50rnd";
                hlc_50Rnd_762x51_T_fal = "hlc_rifle_FN3011_WDL_50rnd";
                hlc_50Rnd_762x51_TDim_fal = "hlc_rifle_FN3011_WDL_50rnd";
                hlc_50rnd_762x51_M_FAL = "hlc_rifle_FN3011_WDL_50rnd";
                hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FN3011_WDL_50rnd";
                default = "hlc_rifle_FN3011_WDL";
            };
        };
        class hlc_rifle_FN3011_WDL_20rnd : hlc_rifle_FN3011_WDL
        {
            scopeArsenal = 0;
            author = "Toadie";
            reloadaction = "HLC_GestureReload3011_20rnd";
            inertia = 0.485+0.078;
            __DEXTERITY(4.85+0.78, 0);
        };
    class hlc_rifle_FN3011_WDL_50rnd : hlc_rifle_FN3011_WDL
        {
            scopeArsenal = 0;
            author = "Toadie";
            reloadaction = "HLC_GestureReload3011_50rnd";
            inertia = 0.485+0.225;
            __DEXTERITY(4.85+2.25, 0);
        };


    class hlc_rifle_FN3011Modern : hlc_FN3011_base 
    {
        author = "toadie";
        scope = public;
        AB_barrelTwist = 8;
        AB_barrelLength = 12;
        agm_bipod = 1;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 502;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 0;
        tmr_autorest_deployable = 0;
        TMR_acc_bipod = 0;
        recoil = "recoil_FN3011";
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        magazineReloadSwitchPhase = 0.5;
        class EventHandlers {
            fired = "_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents {
                HandAction = "HLC_GestureRechamber3011";
                Actiondelay = 0.00;
                Sound = "hlc_bolt_Fn3011";
                Sound_Location = "RightHandMiddle1";
                hasOptic = false;
                onEmpty = 0;
        };
        cursor = "srifle";
        cursorAim = "EmptyCursor";
        model = "\hlc_wp_FN3011\mesh\rifle\3011Modernised.p3d";
        reloadaction = "HLC_GestureReload3011";
        descriptionShort = $STR_NIA_FN3011_DESC;
        inertia = 0.485;
        __DEXTERITY(4.85, 0);
        picture = "\hlc_wp_fn3011\tex\ui\gear_fn3011mod_ca";
        displayName = $STR_NIA_rifle_FN3011modern;
        discretedistance[] = { 100 };
        discretedistanceinitindex = 0;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_fn3011\gestures\hands_FN3011.rtm" };
        hiddenSelections[] = { "camo", "camo2","camo3"};
        hiddenSelectionsTextures[] = { "hlc_wp_fn3011\tex\main\3011_main_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories2_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories1_co.tga"  };
        HiddenSelectionsMaterials[] = { "hlc_wp_fn3011\mat\FN3011_main.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories2.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories1.rvmat"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 106;
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[] = { 0.2, 0.7 };
                iconScale = 0.2;
            };
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
        };
        class Single : Single {
            __MOA(1.03);
        };

        class Library {
            libTextDesc = "FN Herstal FN30-11";
        };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_762x51_B_fal = "hlc_rifle_FN3011Modern_20rnd";
            hlc_20Rnd_762x51_mk316_fal = "hlc_rifle_FN3011Modern_20rnd";
            hlc_20Rnd_762x51_Barrier_fal = "hlc_rifle_FN3011Modern_20rnd";
            hlc_20Rnd_762x51_t_fal = "hlc_rifle_FN3011Modern_20rnd";
            hlc_20Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Modern_20rnd";
            hlc_20Rnd_762x51_S_fal = "hlc_rifle_FN3011Modern_20rnd";
            hlc_50Rnd_762x51_B_fal = "hlc_rifle_FN3011Modern_50rnd";
            hlc_50Rnd_762x51_T_fal = "hlc_rifle_FN3011Modern_50rnd";
            hlc_50Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Modern_50rnd";
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FN3011Modern_50rnd";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FN3011Modern_50rnd";
            default = "hlc_rifle_FN3011Modern";
        };
    };
    class hlc_rifle_FN3011Modern_20rnd : hlc_rifle_FN3011Modern
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_20rnd";
        //hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
        inertia = 0.485+0.078;
        __DEXTERITY(4.85+0.78, 0);
    };
    class hlc_rifle_FN3011Modern_50rnd : hlc_rifle_FN3011Modern
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_50rnd";
        //hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
        inertia = 0.485+0.225;
        __DEXTERITY(4.85+2.25, 0);
    };

    class hlc_rifle_FN3011Modern_camo : hlc_rifle_FN3011Modern
    {
        displayName = $STR_NIA_rifle_FN3011moderncamo;
        picture = "\hlc_wp_fn3011\tex\ui\gear_fn3011modkandahar_ca";
        hiddenSelections[] = { "camo", "camo2","camo3"};
        hiddenSelectionsTextures[] = { "hlc_wp_fn3011\tex\main\3011_main_kand_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories2_co.tga", "hlc_wp_fn3011\tex\lynx\3011_accessories1_co.tga"  };
        HiddenSelectionsMaterials[] = { "hlc_wp_fn3011\mat\FN3011_main_kand.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories2.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories1_lynx.rvmat"};
        class __MAGSWITCHCLASS {
            hlc_20Rnd_762x51_B_fal = "hlc_rifle_FN3011Modern_camo_20rnd";
            hlc_20Rnd_762x51_mk316_fal = "hlc_rifle_FN3011Modern_camo_20rnd";
            hlc_20Rnd_762x51_Barrier_fal = "hlc_rifle_FN3011Modern_camo_20rnd";
            hlc_20Rnd_762x51_t_fal = "hlc_rifle_FN3011Modern_camo_20rnd";
            hlc_20Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Modern_camo_20rnd";
            hlc_20Rnd_762x51_S_fal = "hlc_rifle_FN3011Modern_camo_20rnd";
            hlc_50Rnd_762x51_B_fal = "hlc_rifle_FN3011Modern_camo_50rnd";
            hlc_50Rnd_762x51_T_fal = "hlc_rifle_FN3011Modern_camo_50rnd";
            hlc_50Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Modern_camo_50rnd";
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FN3011Modern_camo_50rnd";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FN3011Modern_camo_50rnd";
            default = "hlc_rifle_FN3011Modern_camo";
        };
    };
    class hlc_rifle_FN3011Modern_camo_20rnd : hlc_rifle_FN3011Modern_camo
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_20rnd";
        inertia = 0.485+0.078;
        __DEXTERITY(4.85+0.78, 0);
    };
    class hlc_rifle_FN3011Modern_camo_50rnd : hlc_rifle_FN3011Modern_camo
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_50rnd";
        inertia = 0.485+0.225;
        __DEXTERITY(4.85+2.25, 0);
    };
    class hlc_rifle_FN3011Lynx : hlc_FN3011_base {
        author = "toadie,Blackwater Realism Unit";
        scope = public;
        AB_barrelTwist = 8;
        AB_barrelLength = 12;
        agm_bipod = 1;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 502;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 0;
        tmr_autorest_deployable = 0;
        TMR_acc_bipod = 0;
        displayName = $STR_NIA_rifle_FN3011lynx;
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        magazineReloadSwitchPhase = 0.5;
        class EventHandlers {
            fired = "_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents {
                HandAction = "HLC_GestureRechamber3011";
                Actiondelay = 0.00;
                Sound = "hlc_bolt_Fn3011";
                Sound_Location = "RightHandMiddle1";
                hasOptic = false;
                onEmpty = 0;
        };
        cursor = "srifle";
        cursorAim = "EmptyCursor";
        model = "\hlc_wp_FN3011\mesh\rifle\3011Lynx.p3d";
        reloadaction = "HLC_GestureReload3011";
        inertia = 0.485;
        __DEXTERITY(4.85, 0);
        picture = "\hlc_wp_fn3011\tex\ui\gear_fn3011lynx_ca";
        discretedistance[] = { 100 };
        discretedistanceinitindex = 0;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_fn3011\gestures\hands_FN3011.rtm" };
        //hiddenSelections[] = { "camo", "camo2"};
        //hiddenSelectionsTextures[] = { "\hlc_wp_fhAWC\tex\awcstock_OD_co.paa", "\hlc_wp_fhAWC\tex\AWC_Scope_co.paa"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 106;
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[] = { 0.2, 0.7 };
                iconScale = 0.2;
            };
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
        };
        class Single : Single {
            __MOA(1.03);
        };

        class Library {
            libTextDesc = "FN Herstal FN30-11";
        };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_762x51_B_fal = "hlc_rifle_FN3011Lynx_20rnd";
            hlc_20Rnd_762x51_mk316_fal = "hlc_rifle_FN3011Lynx_20rnd";
            hlc_20Rnd_762x51_Barrier_fal = "hlc_rifle_FN3011Lynx_20rnd";
            hlc_20Rnd_762x51_t_fal = "hlc_rifle_FN3011Lynx_20rnd";
            hlc_20Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Lynx_20rnd";
            hlc_20Rnd_762x51_S_fal = "hlc_rifle_FN3011Lynx_20rnd";
            hlc_50Rnd_762x51_B_fal = "hlc_rifle_FN3011Lynx_50rnd";
            hlc_50Rnd_762x51_T_fal = "hlc_rifle_FN3011Lynx_50rnd";
            hlc_50Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Lynx_50rnd";
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FN3011Lynx_50rnd";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FN3011Lynx_50rnd";
            default = "hlc_rifle_FN3011Lynx";
        };
    };
    class hlc_rifle_FN3011Lynx_20rnd : hlc_rifle_FN3011Lynx
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_20rnd";
        //hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
        inertia = 0.485+0.078;
        __DEXTERITY(4.85+0.78, 0);
    };
    class hlc_rifle_FN3011Lynx_50rnd : hlc_rifle_FN3011Lynx
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_50rnd";
        //hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
        inertia = 0.485+0.225;
        __DEXTERITY(4.85+2.25, 0);
    };

    class hlc_rifle_FN3011Tactical : hlc_FN3011_base {
        author = "toadie";
        scope = public;
        AB_barrelTwist = 8;
        AB_barrelLength = 12;
        agm_bipod = 1;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 502;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 0;
        tmr_autorest_deployable = 0;
        TMR_acc_bipod = 0;
        recoil = "recoil_FN3011";
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "\hlc_wp_FN3011\snd\rpk_bipodin", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "\hlc_wp_FN3011\snd\rpk_bipodout", db - 3, 1, 20 }; /// sound of folding the bipod
        magazineReloadSwitchPhase = 0.5;
        class EventHandlers {
            fired = "_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents {
                HandAction = "HLC_GestureRechamber3011";
                Actiondelay = 0.00;
                Sound = "hlc_bolt_Fn3011";
                Sound_Location = "RightHandMiddle1";
                hasOptic = false;
                onEmpty = 0;
        };
        cursor = "srifle";
        cursorAim = "EmptyCursor";
        model = "\hlc_wp_FN3011\mesh\rifle\3011tactical.p3d";
        reloadaction = "HLC_Gesturereload3011_tac";
        inertia = 0.485+0.05;
        __DEXTERITY(4.85+0.480, 0);
        picture = "\hlc_wp_fn3011\tex\ui\gear_fn3011tac1_ca";
        displayName = $STR_NIA_rifle_FN3011TAC_Wal;
        discretedistance[] = { 100 };
        discretedistanceinitindex = 0;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_fn3011\gestures\awmhands.rtm" };
        hiddenSelections[] = { "camo", "camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = { "hlc_wp_fn3011\tex\main\3011_main_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories2_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories1_co.tga", "hlc_wp_fn3011\tex\main\3011_golstock_co.tga"  };
        HiddenSelectionsMaterials[] = { "hlc_wp_fn3011\mat\FN3011_main.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories2.rvmat", "hlc_wp_fn3011\mat\FN3011_accessories1.rvmat", "hlc_wp_fn3011\mat\FN3011_golstock.rvmat"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 117;
            class CowsSlot :asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            //class UnderBarrelSlot : asdg_UnderSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class Charmslot {};
        };
        class Single : Single {
            __MOA(1.01);
        };

        class Library {
            libTextDesc = "FN Herstal FN30-11";
        };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_762x51_B_fal = "hlc_rifle_FN3011Tactical_20rnd";
            hlc_20Rnd_762x51_mk316_fal = "hlc_rifle_FN3011Tactical_20rnd";
            hlc_20Rnd_762x51_Barrier_fal = "hlc_rifle_FN3011Tactical_20rnd";
            hlc_20Rnd_762x51_t_fal = "hlc_rifle_FN3011Tactical_20rnd";
            hlc_20Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Tactical_20rnd";
            hlc_20Rnd_762x51_S_fal = "hlc_rifle_FN3011Tactical_20rnd";
            hlc_50Rnd_762x51_B_fal = "hlc_rifle_FN3011Tactical_50rnd";
            hlc_50Rnd_762x51_T_fal = "hlc_rifle_FN3011Tactical_50rnd";
            hlc_50Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Tactical_50rnd";
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FN3011Tactical_50rnd";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FN3011Tactical_50rnd";
            default = "hlc_rifle_FN3011Tactical";
        };
    };
    class hlc_rifle_FN3011Tactical_20rnd : hlc_rifle_FN3011Tactical
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_20rnd";
        //hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
        inertia = 0.485+0.05+0.078;
        __DEXTERITY(4.85+0.480+0.78, 0);
    };
    class hlc_rifle_FN3011Tactical_50rnd : hlc_rifle_FN3011Tactical
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_50rnd";
        //hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
        inertia = 0.485+0.05+0.225;
        __DEXTERITY(4.85+0.480+2.25, 0);
    };

    class hlc_rifle_FN3011Tactical_grey: hlc_rifle_FN3011Tactical
    {
        displayName = $STR_NIA_rifle_FN3011TAC_Grey;
        picture = "\hlc_wp_fn3011\tex\ui\gear_fn3011tac2_ca";
        hiddenSelections[] = { "camo", "camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = { "hlc_wp_fn3011\tex\main\3011_main_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories2_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories1_co.tga", "hlc_wp_fn3011\tex\main\3011_golstock_Gray_co.tga"  };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_762x51_B_fal = "hlc_rifle_FN3011Tactical_grey_20rnd";
            hlc_20Rnd_762x51_mk316_fal = "hlc_rifle_FN3011Tactical_grey_20rnd";
            hlc_20Rnd_762x51_Barrier_fal = "hlc_rifle_FN3011Tactical_grey_20rnd";
            hlc_20Rnd_762x51_t_fal = "hlc_rifle_FN3011Tactical_grey_20rnd";
            hlc_20Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Tactical_grey_20rnd";
            hlc_20Rnd_762x51_S_fal = "hlc_rifle_FN3011Tactical_grey_20rnd";
            hlc_50Rnd_762x51_B_fal = "hlc_rifle_FN3011Tactical_grey_50rnd";
            hlc_50Rnd_762x51_T_fal = "hlc_rifle_FN3011Tactical_grey_50rnd";
            hlc_50Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Tactical_grey_50rnd";
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FN3011Tactical_grey_50rnd";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FN3011Tactical_grey_50rnd";
            default = "hlc_rifle_FN3011Tactical_grey";
        };
    };
    class hlc_rifle_FN3011Tactical_grey_20rnd : hlc_rifle_FN3011Tactical_grey
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_20rnd";
        inertia = 0.485+0.05+0.078;
        __DEXTERITY(4.85+0.480+0.78, 0);
    };
class hlc_rifle_FN3011Tactical_grey_50rnd : hlc_rifle_FN3011Tactical_grey
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_50rnd";
        inertia = 0.485+0.05+0.225;
        __DEXTERITY(4.85+0.480+2.25, 0);
    };
class hlc_rifle_FN3011Tactical_green: hlc_rifle_FN3011Tactical
    {
        displayName = $STR_NIA_rifle_FN3011TAC_Green;
        picture = "\hlc_wp_fn3011\tex\ui\gear_fn3011tac3_ca";
        hiddenSelections[] = { "camo", "camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = { "hlc_wp_fn3011\tex\main\3011_main_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories2_co.tga", "hlc_wp_fn3011\tex\main\3011_accessories1_co.tga", "hlc_wp_fn3011\tex\main\3011_golstock_beatsbydre_co.tga"  };
        class __MAGSWITCHCLASS {
            hlc_20Rnd_762x51_B_fal = "hlc_rifle_FN3011Tactical_green_20rnd";
            hlc_20Rnd_762x51_mk316_fal = "hlc_rifle_FN3011Tactical_green_20rnd";
            hlc_20Rnd_762x51_Barrier_fal = "hlc_rifle_FN3011Tactical_green_20rnd";
            hlc_20Rnd_762x51_t_fal = "hlc_rifle_FN3011Tactical_green_20rnd";
            hlc_20Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Tactical_green_20rnd";
            hlc_20Rnd_762x51_S_fal = "hlc_rifle_FN3011Tactical_green_20rnd";
            hlc_50Rnd_762x51_B_fal = "hlc_rifle_FN3011Tactical_green_50rnd";
            hlc_50Rnd_762x51_T_fal = "hlc_rifle_FN3011Tactical_green_50rnd";
            hlc_50Rnd_762x51_TDim_fal = "hlc_rifle_FN3011Tactical_green_50rnd";
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FN3011Tactical_green_50rnd";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FN3011Tactical_green_50rnd";
            default = "hlc_rifle_FN3011Tactical_green";
        };
    };
class hlc_rifle_FN3011Tactical_green_20rnd : hlc_rifle_FN3011Tactical_green
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_20rnd";
        inertia = 0.485+0.05+0.078;
        __DEXTERITY(4.85+0.480+0.78, 0);
    };
class hlc_rifle_FN3011Tactical_green_50rnd : hlc_rifle_FN3011Tactical_green
    {
        scopeArsenal = 0;
        author = "Toadie";
        reloadaction = "HLC_GestureReload3011_50rnd";
        inertia = 0.485+0.05+0.225;
        __DEXTERITY(4.85+0.480+2.25, 0);
    };
};
