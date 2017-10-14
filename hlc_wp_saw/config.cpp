#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"


class CfgPatches 
{
    
    class hlcweapons_SAW 
    {
        requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "asdg_jointrails", "hlcweapons_m60e4", "A3_Sounds_F_Mark", "hlcweapons_core" };
        units[] = { "HLC_SAW_ammobox", "Weapon_hlc_lmg_minimipara", "Weapon_hlc_lmg_minimipara", "Weapon_hlc_lmg_minimi", "Weapon_hlc_lmg_minimi_railed", "Weapon_hlc_lmg_m249para", "Weapon_hlc_lmg_m249para", "Weapon_hlc_lmg_M249E2", "Weapon_hlc_lmg_M249E2", "Weapon_hlc_m249_pip1", "Weapon_hlc_m249_pip2", "Weapon_hlc_m249_pip3", "Weapon_hlc_m249_pip4" };
        weapons[] = { "hlc_lmg_minimipara", "hlc_lmg_minimi", "hlc_lmg_m249para", "hlc_lmg_M249E2", "hlc_lmg_minimi_railed", "hlc_m249_pip1", "hlc_m249_pip1", "hlc_m249_pip1", "hlc_m249_pip1", "hlc_m249_pip1", "hlc_m249_SQuantoon","hlc_lmg_mk48"};
        magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_T_SAW","hlc_200rnd_556x45_B_SAW"};
        version="1.35";
        author="toadie";
    };
};

class cfgMods 
{
    class Mod_Base;
    class Niarms_SAW : Mod_Base 
    {
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

class CfgMovesBasic 
{
    class DefaultDie;
    class ManActions 
    {
        HLC_GestureReloadM249 = "HLC_GestureReloadM249"; // Would reccommend changing the naming convention, just so nothing overlaps
        //HLC_GestureReloadM249STANAG = "HLC_GestureReloadM249STANAG";
    };

    class Actions 
    {
        class NoActions : ManActions 
        {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249", "Gesture" };
            //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions 
        {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Prone", "Gesture" };
            //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG_Prone", "Gesture" };
        };
/*
            class RifleKneelActions : RifleBaseStandActions 
            {
                HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
            };*/
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions 
        {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Context", "Gesture" };
            //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions 
        {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Context", "Gesture" };
            //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions 
            {
                HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Context", "Gesture" };
                //HLC_GestureReloadM249STANAG[] = { "HLC_GestureReloadM249STANAG_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale 
{
    class Default;
    class States {
    class HLC_GestureReloadM249 : Default 
    {
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
    class HLC_GestureReloadM249_Crouch : Default 
    {
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
    class HLC_GestureReloadM249_Prone : Default 
    {
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
    class HLC_GestureReloadM249_Context : HLC_GestureReloadM249 
    {
        mask = "handsWeapon_context";
    };
/*
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

class CfgVehicles 
{
    class NATO_Box_Base;
    class HLC_SAW_ammobox : NATO_Box_Base 
    {
        dlc = "Niarms_SAW";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "Ammo";
        displayName = "HLC SAW Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines 
        {
            __M_MAG(hlc_200rnd_556x45_M_SAW,20);
            __M_MAG(hlc_200rnd_556x45_T_SAW,20);
            __M_MAG(hlc_200rnd_556x45_B_SAW,20);
            __M_MAG(hlc_100Rnd_762x51_M_M60E4,20);
        };
        class TransportWeapons 
        {
            __M_WEP(hlc_lmg_minimipara,5);
            __M_WEP(hlc_lmg_minimi,5);
            __M_WEP(hlc_lmg_minimi_railed,5);
            __M_WEP(hlc_lmg_m249para,5);
            __M_WEP(hlc_lmg_M249E2,5);
            __M_WEP(hlc_m249_pip1,5);
            __M_WEP(hlc_m249_pip2,5);
            __M_WEP(hlc_m249_pip3,5);
            __M_WEP(hlc_m249_pip4,5);
            __M_WEP(hlc_m249_SQuantoon,5);
            __M_WEP(hlc_lmg_mk48,5);
        };
        class TransportItems 
        {
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_ACO_grn,10);
        };
    };
    class Weapon_Base_F;
    __WEAPONHOLDER(hlc_lmg_minimipara, hlc_200rnd_556x45_M_SAW, FN Minimi Para(Short), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_minimipara_railed, hlc_200rnd_556x45_M_SAW, FN Minimi Para(Short / RIS), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_minimipara_long, hlc_200rnd_556x45_M_SAW, FN Minimi Para(Long), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_minimipara_long_railed, hlc_200rnd_556x45_M_SAW, FN Minimi Para(Long / RIS), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_minimi, hlc_200rnd_556x45_M_SAW, FN Minimi(Long), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_minimi_railed, hlc_200rnd_556x45_M_SAW, FN Minimi(Long / RIS), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_m249para, hlc_200rnd_556x45_M_SAW, M249E2 Para(Short), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_M249E2, hlc_200rnd_556x45_M_SAW, M249E2, Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_M249E1, hlc_200rnd_556x45_M_SAW, M249E1, Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_m249_pip1, hlc_200rnd_556x45_M_SAW, M249 PIP(Long / RIS), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_m249_pip2, hlc_200rnd_556x45_M_SAW, M249E2(Short / RIS), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_m249_pip3, hlc_200rnd_556x45_M_SAW, M249 PIP(Short / RIS), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_m249_pip4, hlc_200rnd_556x45_M_SAW, M249 PIP(Long / VFG), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_m249_SQuantoon, hlc_200rnd_556x45_M_SAW, M249(Squantoon Special), Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_mk46, hlc_200rnd_556x45_M_SAW, Mk.46 Mod.0, Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_mk46mod1, hlc_200rnd_556x45_M_SAW, Mk.46 Mod.1, Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_mk48, hlc_100Rnd_762x51_M_M60E4, Mk.48 Mod.0, Niarms_SAW, Toadie, MachineGuns);
    __WEAPONHOLDER(hlc_lmg_mk48mod1, hlc_100Rnd_762x51_M_M60E4, Mk.48 Mod.1, Niarms_SAW, Toadie, MachineGuns);

};

class CfgMagazines 
{
    class 30Rnd_556x45_Stanag;

    class hlc_200rnd_556x45_M_SAW : 30Rnd_556x45_Stanag 
    {
        dlc = "Niarms_SAW";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 200;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR/M856A1<br />Type: EPFMJ/Tracer<br />Rounds: 200";
        displayname = "M27-Link Belt (EPR-Tracer) 200rnd 5.56mm";
        model = "hlc_wp_saw\mesh\magazine\magazine.p3d";
        initspeed = 974.8;
        lastroundstracer = 10;
        picture = "\hlc_core\tex\ui\ammo\m_m249mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        mass = 69.2;
        displaynameshort = "EPR/Tracer";
        nameSound = "mgun";
        ACE_isBelt = 1;
    };
    class hlc_200rnd_556x45_T_SAW : hlc_200rnd_556x45_M_SAW 
    {
        dlc = "Niarms_SAW";
        author = "Toadie, Spartan0536";
        ammo = "B_556x45_Ball_Tracer_Red";
        descriptionshort = "Caliber: 5.56x45mm NATO M856A1 Tracer<br />Type: Incendiary-tip Tracer<br />Rounds: 200";
        displayname = "M27-Link Belt (Tracer) 200rnd 5.56mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m249tracer_ca.paa";
        tracersevery = 1;
        displaynameshort = "M856A1 Tracer";
    };
    class hlc_200rnd_556x45_Mdim_SAW : hlc_200rnd_556x45_M_SAW 
    {
        dlc = "Niarms_SAW";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: EPFMJ/Low-visibility Tracer<br />Rounds: 200";
        displayname = "M27-Link Belt (EPR-IRDIM) 200rnd 5.56mm";
        lastroundstracer = 10;
        picture = "\hlc_core\tex\ui\ammo\m_m249mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
    };
    class hlc_200rnd_556x45_B_SAW : hlc_200rnd_556x45_M_SAW 
    {
        dlc = "Niarms_SAW";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_EPR";
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 200";
        displayname = "M27-Link Belt (EPR) 200rnd 5.56mm";
        lastroundstracer = 10;
        picture = "\hlc_core\tex\ui\ammo\m_m249ball_ca.paa";
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
    };
};

class CfgWeapons 
{
    class Rifle;
    class Rifle_Base_F : Rifle 
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_saw_base : Rifle_Base_F 
    {
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
        class GunParticles : GunParticles 
        {

            class SecondEffect 
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 170;
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
        modes[] = { "FullAuto", "close", "short", "medium", "medium_burst", "far", "veryfar", "far_optic1", "toofar_optic1", "far_optic2", "toofar_optic2" };
        {
        inertia = 0.8;
        class FullAuto : Mode_FullAuto 
        {
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
            __AI_ROF_MG_FULLAUTO;
        };
        class close : FullAuto {
            __AI_ROF_MG_LONG_BURST;
            showToPlayer = 0;
        };
        class short : close{
            __AI_ROF_MG_CLOSE_BURST;
        };
        class medium : close {
            __AI_ROF_MG_SHORT_BURST;
        };
        class medium_burst : close {
            __AI_ROF_MG_MEDIUM_BURST;
        };
        class far : close {
            __AI_ROF_MG_FAR_BURST;
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
        __AI_DISPERSION_COEF;

        drysound[] = {"hlc_core\sound\empty_machineguns", 1, 1, 10};
        reloadmagazinesound[] = {"hlc_core\sound\empty_machineguns", 0.5, 1};
    };
    class hlc_lmg_minimipara : hlc_saw_base {
        dlc = "Niarms_SAW";
        author = "Toadie";
        scope = public;
        AB_barrelTwist = 7;
        AB_barrelLength = 13.7;
        agm_bipod = 1;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 348;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 1;
        tmr_autorest_deployable = 1;
        TMR_acc_bipod = 1;
        initspeed = -0.936216;
        deployedPivot = "deploypoint";    /// what point should be used to be on surface while unfolded
        hasBipod = true;                /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        magazines[] = {__556NATO_BELTS,__556NATO_BI_BELTS,__556STANAG_MAGS,__556STANAG_BI_MAGS,__556NATO_BI_DRUMS};
        class GunParticles : GunParticles 
        {
            class AmmoBeltEject 
            {
                directionName = "linkeject_end";
                effectName = "MachineGunEject2";
                positionName = "linkeject_start";
            };
        };
        model = "\hlc_wp_saw\mesh\minimi_para\minimi.p3d";
        reloadaction = "HLC_GestureReloadM249";
        descriptionShort = "Light Machine Gun<br/>Caliber: 5.56mm";
        drysound[] = { "hlc_wp_saw\snd\empty_machineguns", 1, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_saw\snd\soundshaders\SAW\saw_reload", 0.7, 1, 20 };
        inertia = 0.65;
        __DEXTERITY(6.56, 0);
        picture = "\hlc_wp_saw\tex\ui\gear_minimipara_x_ca";
        hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
        hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa", "" };
        displayName = "FN Minimi Para             [13.7 inch] ";                                        // [18.3:HS:VFG:RIS] => 18.3 " barrel: Heatshield: Forward vertical grip: Rail system
        discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 1000 };
        discretedistanceinitindex = 2;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\handpose_standard.rtm" };
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 142.2;
        };
        class ItemInfo 
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class FullAuto : FullAuto {
            reloadTime = 0.067;
            dispersion = 0.00101;

        };
        class Library {
            libTextDesc = "FN Herstal Minimi";
        };
    };

    class hlc_lmg_minimipara_railed : hlc_lmg_minimipara
    {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\minimi_para\minimi_railed.p3d";
        displayName = "FN Minimi Para         [13.7 inch:RIS] ";
        inertia = 0.69;
        __DEXTERITY(6.94, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 146.9;
            class CowsSlot : asdg_OpticRail1913_short_MG {};
        };
    };

    class hlc_lmg_minimipara_long : hlc_lmg_minimipara
    {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\minimi_para\minimi_para_longer.p3d";
        displayName = "FN Minimi Para         [18.3 inch]";
        initspeed = -1;
        AB_barrelTwist = 7;
        AB_barrelLength = 18.3;
        agm_bipod = 1;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 465;
        inertia = 0.68;
        __DEXTERITY(6.85, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 150.9;
        };
    };
    class hlc_lmg_minimipara_long_railed : hlc_lmg_minimipara_long
    {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\minimi_para\minimi_para_longer_railed.p3d";
        displayName = "FN Minimi Para         [18.3 inch:RIS] ";                                // this variant should have a shorter barrel ( maybe 16 inch ) and lighter buttstock. the model has the same barrel ( 18.3 inch ) though. weight is adjusted to appereance.
        initspeed = -1;
        inertia = 0.69;
        __DEXTERITY(6.94, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 155.6;
            class CowsSlot : asdg_OpticRail1913_short_MG {};
        };
    };
    class hlc_lmg_minimi : hlc_lmg_minimipara_long
    {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\minimi_para\minimi_longer.p3d";
        displayName = "FN Minimi             [18.3 inch]";
        picture = "\hlc_wp_saw\tex\ui\gear_minimi_x_ca";
        hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
        hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.paa", "" };
        inertia = 0.68;
        __DEXTERITY(6.86, 0);
        initspeed = -1;
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            class MuzzleSlot : MuzzleSlot 
            {
                iconPosition[] = { 0.0, 0.4 };
            };
            class CowsSlot : CowsSlot 
            {
                iconPosition[] = { 0.5, 0.3 };
            };
            class PointerSlot : PointerSlot 
            {
                iconPosition[] = { 0.2, 0.4 };
            };
            mass = 150.9;
        };
    };
    class hlc_lmg_minimi_railed : hlc_lmg_minimipara 
    {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\minimi_para\minimi_longer_railed.p3d";
        displayName = "FN Minimi             [18.3 inch:RIS]) ";
        picture = "\hlc_wp_saw\tex\ui\gear_minimiris_x_ca";
        ACE_barrelTwist = 178;
        ACE_barrelLength = 465;
        AB_barrelTwist = 12;
        AB_barrelLength = 18.3;
        inertia = 0.69;
        __DEXTERITY(6.94, 0);
        initspeed = -1;
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 155.8;
            class CowsSlot : asdg_OpticRail1913_short_MG {};
        };
    };
    class hlc_lmg_m249para : hlc_lmg_minimipara 
    {
    author = "Toadie";
    model = "\hlc_wp_saw\mesh\m249\m249paratrooper.p3d";
    displayName = "M249E2 Para                 [13.7 inch:HS] ";
    picture = "\hlc_wp_saw\tex\ui\gear_m249para_x_ca";
    ACE_barrelTwist = 305;
    ACE_barrelLength = 348;
    AB_barrelTwist = 12;
    AB_barrelLength = 13.7;
    hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
    hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa" };
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 142.2;
    };
};
class hlc_lmg_M249E2 : hlc_lmg_minimipara_long
{
    author = "Toadie";
    model = "\hlc_wp_saw\mesh\m249\m249E2.p3d";
    displayName = "M249E2                     [18.3 inch:HS] ";
    picture = "\hlc_wp_saw\tex\ui\gear_m249e2_x_ca";
    inertia = 0.75;
    __DEXTERITY(7.5, 0);
    initspeed = -1;
    hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
    hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa" };
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 160.9;
    };
};
class hlc_lmg_M249E1 : hlc_lmg_minimipara_long
{
    author = "Toadie,da12thMonkey,j0zh94(RHS)";
    model = "\hlc_wp_saw\mesh\m249\m249E1.p3d";
    displayName = "M249E1                     [18.3 inch]";
    picture = "\hlc_wp_saw\tex\ui\gear_m249e1_ca";
    inertia = 0.72;
    __DEXTERITY(7.25, 0);
    ACE_barrelTwist = 305;
    ACE_barrelLength = 465;
    AB_barrelTwist = 12;
    AB_barrelLength = 18.3;
    initspeed = -1;
    hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
    hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\rhs_m249\mk1_muzzleStock_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa" };
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 150.9;
    };
};

class hlc_m249_pip1 : hlc_lmg_minimi_railed 
{
    author = "Toadie";
    model = "\hlc_wp_saw\mesh\m249\m249e2_pip1.p3d";
    displayName = "M249 PIP                 [18.3 inch:HS:RIS]";
    picture = "\hlc_wp_saw\tex\ui\gear_m249e2pip_x_ca";
    inertia = 0.69;
    __DEXTERITY(6.94, 0);
    ACE_barrelTwist = 305;
    ACE_barrelLength = 465;
    AB_barrelTwist = 12;
    AB_barrelLength = 18.3;
    initspeed = -1;
    hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
    hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa" };
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 160.9;
    };
};
class hlc_m249_pip2 : hlc_lmg_minimi_railed 
{
    author = "Toadie";
    model = "\hlc_wp_saw\mesh\m249\m249e2_pip2.p3d";
    displayName = "M249E2                     [13.7 inch:HS:RIS]";
    picture = "\hlc_wp_saw\tex\ui\gear_m249e2parapip_x_ca";
    inertia = 0.68;
    __DEXTERITY(6.8, 0);
    ACE_barrelTwist = 305;
    ACE_barrelLength = 349;
    AB_barrelTwist = 12;
    AB_barrelLength = 13.7;
    hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
    hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa" };
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 150.9;
    };
};
class hlc_m249_pip3 : hlc_lmg_minimi_railed 
{
    author = "Toadie";
    model = "\hlc_wp_saw\mesh\m249\m249e2_pip3.p3d";
    displayName = "M249 PIP                 [13.7 inch:HS:RIS]";
    picture = "\hlc_wp_saw\tex\ui\gear_m249e2parapip2_x_ca";
    inertia = 0.68;
    __DEXTERITY(6.8, 0);
    ACE_barrelTwist = 305;
    ACE_barrelLength = 349;
    AB_barrelTwist = 12;
    AB_barrelLength = 13.7;
    hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
    hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa" };
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 150.9;
    };
};
class hlc_m249_pip4 : hlc_lmg_minimi_railed 
{
    author = "Toadie";
    model = "\hlc_wp_saw\mesh\m249\m249e2_pip4.p3d";
    displayName = "M249 PIP                 [18.3 inch:HS:VFG:RIS]";
    handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\handpose_VFG.rtm" };
    picture = "\hlc_wp_saw\tex\ui\gear_m249e2pip2_x_ca";
    deployedPivot = "deploypoint";            /// what point should be used to be on surface while unfolded
    hasBipod = false;                        /// a weapon with bipod obviously has a bipod
    inertia = 0.65;
    __DEXTERITY(6.56+0.3, 1);
    ACE_barrelTwist = 305;
    ACE_barrelLength = 465;
    AB_barrelTwist = 12;
    AB_barrelLength = 18.3;
    initspeed = -1;
    hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG" };
    hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\toadie_m249\reciever_minimi_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.paa" };
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 153.2;                        // set and weighed as no bipod available
        class PointerSlot : asdg_FrontSideRail {};
        //class UnderBarrelSlot : asdg_UnderSlot {};
    };
};
class hlc_m249_SQuantoon : hlc_m249_pip4 
{
    author = "Toadie, w/Special Thanks to Squantoon";
    model = "\hlc_wp_saw\mesh\m249\m249e2_squant.p3d";
    displayName = "M249 (Squantoon Special)    [18.3 inch:HS:VFG:RIS]";
    picture = "\hlc_wp_saw\tex\ui\gear_m249SQUANT_x_ca";
    inertia = 0.69;
    initspeed = -1;
    hasBipod = false;
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 153.2;                        // set and weighed as no bipod available
    };
};
class hlc_lmg_mk46 : hlc_lmg_minimi_railed 
{
    author = "Toadie";
    model = "\hlc_wp_saw\mesh\mk46\mk46.p3d";
    displayName = "Mk.46 Mod.0                 [16.3 inch:HS:RIS] ";
    agm_overheating_allowbarrelswap = 0;
    handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\handpose_VFG.rtm" };
    picture = "\hlc_wp_saw\tex\ui\gear_mk46_ca";
    hasBipod = true;
    deployedPivot = "deploypoint";
    inertia = 0.57;
    __DEXTERITY(5.71 + 0.3, 1);
    ACE_barrelTwist = 305;
    ACE_barrelLength = 414;
    AB_barrelTwist = 12;
    AB_barrelLength = 16.3;
    initspeed = -0.976216;
    magazines[] = { __556NATO_BELTS, __556NATO_BI_BELTS };
    hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG", "Rail", "Bipod" };
    hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\mk48\reciever_mk48_co.paa", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa", "hlc_wp_saw\tex\toadie_m249\barrel_co.paa", "hlc_wp_saw\tex\toadie_m249\misc_co.paa", "hlc_wp_saw\tex\toadie_m249\fore_co.paa", "hlc_wp_saw\tex\toadie_m249\stockmap_co.paa", "hlc_wp_saw\tex\toadie_m249\rearsight_co.paa", "hlc_wp_saw\tex\toadie_m249\amoobox_co.paa", "hlc_wp_saw\tex\melon_vfg\vgrip_co.paa", "hlc_wp_saw\tex\mk48\mk48_quadrail_co.paa", "hlc_wp_saw\tex\toadie_m249\pipbipod_co.paa" };
    class WeaponSlotsInfo : WeaponSlotsInfo 
    {
        mass = 154.3;
        class PointerSlot : asdg_FrontSideRail {};
    };
    class FullAuto : FullAuto 
    {
        __ROF(730);
        dispersion = 0.000261799;
    };
    };
    class hlc_lmg_mk46mod1 : hlc_lmg_mk46
    {
        author = "Toadie";
        model = "\hlc_wp_saw\mesh\mk46\mk46mod1.p3d";
        displayName = "Mk.46 Mod.1                 [16.3 inch:HS:RIS] ";
        picture = "\hlc_wp_saw\tex\ui\gear_mk46mod1_ca";
        hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\mk48\reciever_mk48_co.tga", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.tga", "hlc_wp_saw\tex\toadie_m249\barrel_co.tga", "hlc_wp_saw\tex\toadie_m249\misc_co.tga", "hlc_wp_saw\tex\toadie_m249\fore_co.tga", "hlc_wp_saw\tex\toadie_m249\stockmap_co.tga", "hlc_wp_saw\tex\toadie_m249\rearsight_co.tga", "hlc_wp_saw\tex\bis_m249\stockpouch_co.tga", "hlc_wp_saw\tex\melon_vfg\vgrip_co.tga", "hlc_wp_saw\tex\mk48\mk48_quadrail_co.tga", "hlc_wp_saw\tex\toadie_m249\pipbipod_co.tga" };
        inertia = 0.55;
        __DEXTERITY(5.5 + 0.3, 1);
        class WeaponSlotsInfo : WeaponSlotsInfo 
        {
            mass = 154.3;
        };
    };
    class hlc_lmg_mk48 : hlc_saw_base 
    {
    author = "Toadie";
    scope = public;
    agm_bipod = 1;
    ACE_barrelTwist = 305;
    ACE_barrelLength = 502;
    AB_barrelTwist = 12;
    AB_barrelLength = 19.75;
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
    recoil = "recoil_mmg";
    recoilprone = "recoil_mmg_prone";
    inertia = 0.81;
    __DEXTERITY(8.12 + 0.3, 1);
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
            mass = 178.9;                           set and weighed as: no bipod attachable
            class UnderBarrelSlot : asdg_UnderSlot {};
            class CowsSlot : asdg_OpticRail1913_short_MG {};
            class PointerSlot : asdg_FrontSideRail {};
        };
        picture = "\hlc_wp_saw\tex\ui\gear_mk48_ca";
        model = "\hlc_wp_saw\mesh\mk48\Mk48.p3d";
    displayName = "Mk.48 Mod.0                 [20 inch:HS:VFG:RIS] ";
        descriptionShort = "Light Machine Gun<br/>Caliber: 7.62mm";
        hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG","Rail","Bipod" };
        hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\mk48\reciever_mk48_co.tga", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.tga", "hlc_wp_saw\tex\toadie_m249\barrel_co.tga", "hlc_wp_saw\tex\toadie_m249\misc_co.tga", "hlc_wp_saw\tex\toadie_m249\fore_co.tga", "hlc_wp_saw\tex\toadie_m249\stockmap_co.tga", "hlc_wp_saw\tex\toadie_m249\rearsight_co.tga", "hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.tga", "hlc_wp_saw\tex\toadie_m249\vert_grip_co.tga","hlc_wp_saw\tex\mk48\mk48_quadrail_co.tga","" };
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
            __AI_ROF_MG_FULLAUTO;
        }; 
        class short : close{
            __AI_ROF_MG_CLOSE_BURST;
        };
        class medium : close {
            __AI_ROF_MG_SHORT_BURST;
        };
        class medium_burst : close {
            __AI_ROF_MG_MEDIUM_BURST;
        };
        class far : close {
            __AI_ROF_MG_FAR_BURST;
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
        class Library {
            libTextDesc = "FN/NSWC Mk48";
        };
    };
    class hlc_lmg_mk48mod1: hlc_lmg_mk48
    {
        author = "Toadie";
        deployedPivot = "deploypivot";
        picture = "\hlc_wp_saw\tex\ui\gear_mk48_ca";
        model = "\hlc_wp_saw\mesh\mk48\Mk48mod1.p3d";
        hasBipod = true;
        displayName = "Mk.48 Mod.1             [20 inch:HS:RIS] ";
        descriptionShort = "Light Machine Gun<br/>Caliber: 7.62mm";
        hiddenSelections[] = { "Reciever", "Assembly_cover", "Barrel", "Misc", "Foregrip", "Stock", "RearSight", "Magazine", "VFG", "Rail", "Bipod" };
        hiddenSelectionsTextures[] = { "hlc_wp_saw\tex\mk48\reciever_mk48_co.tga", "hlc_wp_saw\tex\toadie_m249\assemblycover_co.tga", "hlc_wp_saw\tex\toadie_m249\barrel_co.tga", "hlc_wp_saw\tex\toadie_m249\misc_co.tga", "hlc_wp_saw\tex\toadie_m249\fore_co.tga", "hlc_wp_saw\tex\toadie_m249\stockmap_co.tga", "hlc_wp_saw\tex\toadie_m249\rearsight_co.tga", "hlc_wp_saw\tex\toadie_m249\pouch_auscam_co.tga", "hlc_wp_saw\tex\melon_vfg\vgrip_co.tga", "hlc_wp_saw\tex\mk48\mk48_quadrail_co.tga", "hlc_wp_saw\tex\toadie_m249\pipbipod_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 182.6;
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
        drysound[] = {"hlc_core\sound\empty_machineguns", 0.01, 1, 10};
        reloadmagazinesound[] = {"hlc_wp_saw\snd\mk48_reload", 0.5, 1, 20};
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
        drysound[] = {"hlc_core\sound\empty_machineguns", 0.01, 1, 10};
        reloadmagazinesound[] = {"hlc_wp_saw\snd\saw_reload", 0.5, 1, 20};
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