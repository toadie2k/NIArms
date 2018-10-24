#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_FHAWCovert {
        requiredaddons[] = {"hlcweapons_core"};
        units[] = {"HLC_LRR_ammobox","Weapon_hlc_rifle_awcovert","Weapon_hlc_rifle_awcovert_BL","Weapon_hlc_rifle_awcovert_FDE","Weapon_hlc_rifle_awmagnum","Weapon_hlc_rifle_awmagnum_BL","Weapon_hlc_rifle_awmagnum_FDE","Weapon_hlc_rifle_awMagnum_OD_ghillie","Weapon_hlc_rifle_awMagnum_FDE_ghillie","Weapon_hlc_rifle_awMagnum_BL_ghillie"};
        weapons[] = {};
        magazines[] = {};
        version="1.5";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;

    class Niarms_AWC : Mod_Base {
        name = "NIArsenal: AWM Rifles";
        picture = "hlc_wp_fhawc\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_fhawc\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_fhawc\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_fhawc\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

//class PointerSlot;
class asdg_OpticRail1913;

class CfgSounds {
    class hlc_bolt_AWM {
        name = "hlc_bolt_AWM";
        Sound[] = { "\hlc_wp_fhawc\snd\AWM_rechamber", 1, 1, 15 };
        titles[] = {};
    };
};

class CfgMovesBasic {
    class DefaultDie;

    class ManActions {
        HLC_GestureReloadAWM = "HLC_GestureReloadAWM"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureRechamberAWM = "HLC_GestureRechamberAWM";
    };

    class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;

        class NoActions : ManActions {
            HLC_GestureReloadAWM[] = { "HLC_GestureReloadAWM", "Gesture" };
            HLC_GestureRechamberAWM[] = { "HLC_GestureRechamberAWM", "Gesture" };
        };
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadAWM[] = { "HLC_GestureReloadAWM_Prone", "Gesture" };
            HLC_GestureRechamberAWM[] = { "HLC_GestureRechamberAWM_Prone", "Gesture" };
        };

/*
        class RifleKneelActions : RifleBaseStandActions {
            HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
        };
*/

        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadAWM[] = { "HLC_GestureReloadAWM_Context", "Gesture" };
            HLC_GestureRechamberAWM[] = { "HLC_GestureRechamberAWM_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadAWM[] = { "HLC_GestureReloadAWM_Context", "Gesture" };
            HLC_GestureRechamberAWM[] = { "HLC_GestureRechamberAWM_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadAWM[] = { "HLC_GestureReloadAWM_Context", "Gesture" };
                HLC_GestureRechamberAWM[] = { "HLC_GestureRechamberAWM_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;

    class States {
        class HLC_GestureReloadAWM : Default {
            file = "hlc_wp_fhawc\anim\awc_reload_stand.rtm";
            speed = 0.2189781021897810218978102189781;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.0729927, 1, 0.10218978, 0, 0.91240875, 0, 0.94890510, 1 };
        };
        class HLC_GestureReloadAWM_Crouch : Default {
            file = "hlc_wp_fhawc\anim\awc_reload_stand.rtm";
            speed = 0.2189781021897810218978102189781;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.45;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1,1,1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.00986, 0, 0.92105, 0, 0.947368, 1 };
        };
        class HLC_GestureReloadAWM_Prone : Default {
            file = "hlc_wp_fhawc\anim\awc_reload_prone.rtm";
            speed = 0.2189781021897810218978102189781;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.0729927, 1, 0.10218978, 0, 0.91240875, 0, 0.94890510, 1 };
        };
        class HLC_GestureReloadAWM_Context : HLC_GestureReloadAWM {
            mask = "handsWeapon_context";
        };
        class HLC_GestureRechamberAWM : Default {
            file = "hlc_wp_fhawc\anim\awc_rechamber_stand.rtm";
            speed = 0.6;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 1, 1 };
        };
        class HLC_GestureRechamberAWM_Prone : Default {
            file = "hlc_wp_fhawc\anim\awc_rechamber_prone.rtm";
            speed = 0.6;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1,1, 1 };
        };
        class HLC_GestureRechamberAWM_Context : HLC_GestureRechamberAWM {
            mask = "handsWeapon_context";
        };
    };
};


class CfgVehicles {
    class B_supplyCrate_F;
    class Weapon_Base_F;

    class HLC_LRR_ammobox: B_supplyCrate_F {
        dlc = "Niarms_AWC";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC LRR Box";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_5rnd_300WM_FMJ_AWM,30);
            __M_MAG(hlc_5rnd_300WM_AP_AWM,30);
            __M_MAG(hlc_5rnd_300WM_BTSP_AWM,30);
            __M_MAG(hlc_5rnd_300WM_mk248_AWM,30);
            __M_MAG(hlc_5rnd_300WM_SBT_AWM,30);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_awcovert,10);
            __M_WEP(hlc_rifle_awcovert_BL,10);
            __M_WEP(hlc_rifle_awcovert_FDE,10);
            __M_WEP(hlc_rifle_awmagnum,10);
            __M_WEP(hlc_rifle_awmagnum_BL,10);
            __M_WEP(hlc_rifle_awmagnum_FDE,10);
            __M_WEP(hlc_rifle_awMagnum_BL_ghillie,10);
            __M_WEP(hlc_rifle_awMagnum_FDE_ghillie,10);
            __M_WEP(hlc_rifle_awMagnum_OD_ghillie,10);
        };
        class TransportItems {
            __M_ITM(optic_LRPS,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_NVS,10);
            __M_ITM(optic_SOS,10);
        };
    };
    class Weapon_hlc_rifle_awcovert : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC-M(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awcovert";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_BTSP_AWM";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_awcovert_BL : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC-M(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awcovert_BL";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_BTSP_AWM";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_awcovert_FDE : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWC-M(FDE)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awcovert_FDE";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_BTSP_AWM";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_awmagnum : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWM(OD)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awmagnum";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_mk248_AWM";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_awmagnum_BL : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWM(Black)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awmagnum_BL";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_mk248_AWM";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_awmagnum_FDE : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWM(FDE)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awmagnum_FDE";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_mk248_AWM";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_awMagnum_OD_ghillie : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWM(OD)+Ghillie";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awMagnum_OD_ghillie";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_mk248_AWM";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_awMagnum_FDE_ghillie : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWM(FDE)+Ghillie";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awMagnum_FDE_ghillie";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_mk248_AWM";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_awMagnum_BL_ghillie : Weapon_Base_F {
        dlc = "Niarms_AWC";
        scope = 2;
        scopeCurator = 2;
        displayName = "AWM(Black)+Ghillie";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_awMagnum_BL_ghillie";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_5rnd_300WM_mk248_AWM";
                count = 1;
            };
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_5rnd_300WM_FMJ_AWM : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AWC";
        ammo = "HLC_300WM_FMJ";
        count = 5;
        descriptionshort = "Caliber: .300 Winchester Magnum Sniper-line FMJ<br />Type: Steel Full-Metal Jacket <br />Rounds: 5";
        displayname = ".300WM FMJ 5Rnd AWM Magazine";
        initspeed = 841.2;
        lastroundstracer = 0;
        picture = "\hlc_wp_fhawc\tex\ui\m_awm_FMJ_ca";
        model = "\hlc_wp_fhAWC\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 14;
        displaynameshort = "FMJ";
        author = "toadie,Spartan0536";
    };
    class hlc_5rnd_300WM_AP_AWM : hlc_5rnd_300WM_FMJ_AWM {
        dlc = "Niarms_AWC";
        ammo = "HLC_300WM_AP";
        count = 5;
        descriptionshort = "Caliber: .300 Winchester Magnum MEN DM131 AP <br />Used in: Tungsten-Core, Steel-copper Jacket Armour-Penetrating Round <br />Rounds: 5";
        displayname = ".300WM AP 5Rnd AWM Magazine";
        initspeed = 861;
        lastroundstracer = 0;
        picture = "\hlc_wp_fhawc\tex\ui\m_awm_AP_ca";
        model = "\hlc_wp_fhAWC\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        mass = 14;
        displaynameshort = "AP";
        author = "toadie,Spartan0536";
    };
    class hlc_5rnd_300WM_T_AWM : hlc_5rnd_300WM_FMJ_AWM{
        dlc = "Niarms_AWC";
        ammo = "HLC_300WM_Tracer";
        descriptionshort = "Caliber: .300 Winchester Magnum Re-loaded M62 Tracer <br />Type: Incendiary-Tip FMJ<br />Rounds: 5";
        displayname = ".300WM Tracer 5Rnd AWM Magazine";
        initspeed = 861;
        lastroundstracer = 0;
        picture = "\hlc_wp_fhawc\tex\ui\m_awm_FMJ_ca";
        tracersevery = 1;
        mass = 14;
        displaynameshort = "Tracer";
        author = "toadie,Spartan0536";
    };
    class hlc_5rnd_300WM_BTSP_AWM : hlc_5rnd_300WM_FMJ_AWM  {
        dlc = "Niarms_AWC";
        ammo = "HLC_300WM_BTSP";
        descriptionshort = "Caliber: .300 Winchester Magnum A191 <br />Used in: 190gr Boat-Tail (Sierra Match-King)<br />Rounds: 5";
        displayname = ".300WM Soft-Point 5Rnd AWM Magazine";
        initspeed = 935;
        lastroundstracer = 0;
        picture = "\hlc_wp_fhawc\tex\ui\m_awm_spbt_ca";
        tracersevery = 0;
        mass = 14;
        displaynameshort = "BTSP";
        author = "toadie";
    };
    class hlc_5rnd_300WM_mk248_AWM : hlc_5rnd_300WM_FMJ_AWM {
        dlc = "Niarms_AWC";
        ammo = "HLC_300WM_BTHP";
        descriptionshort = "Caliber: .300 Winchester Magnum 220gr Mk248 Mod1<br />Used in: 220gr  Hollow-Point Boat-Tail (Sierra Match-King)<br />Rounds: 5";
        displayname = ".300WM Mk.248 Mod1 5Rnd AWM Magazine";
        initspeed = 899;
        lastroundstracer = 0;
        picture = "\hlc_wp_fhawc\tex\ui\m_awm_hpbt_ca";
        tracersevery = 0;
        mass = 15;
        displaynameshort = "Mk248 Mod.1";
        author = "toadie,Spartan0536";
    };
    class hlc_5rnd_300WM_SBT_AWM : hlc_5rnd_300WM_FMJ_AWM {
        dlc = "Niarms_AWC";
        ammo = "HLC_300WM_S_BT";
        descriptionshort = "Caliber: .300 Winchester Magnum 230gr Subsonic Hand-Load<br />Type: Swaged Lead-Core <br />Rounds: 5<br /> DISCLAIMER: Loading .300WM rounds this lightly is specifically dangerous to the end-user IRL.";
        displayname = ".300WM Subsonic 5Rnd AWM Magazine";
        initspeed = 380;
        lastroundstracer = 0;
        picture = "\hlc_wp_fhawc\tex\ui\m_awm_sub_ca";
        tracersevery = 0;
        mass = 14;
        displaynameshort = "SWLC";
        author = "toadie,Spartan0536";
    };
};

class CfgMagazineWells {
    class CBA_300WM_AI {
        NIA_mags[] = { __300WM_MAGS };
    };
};

class CfgRecoils
{
    class recoil_default;

    class recoil_awc : recoil_default {
        muzzleOuter[] = { 0.2, 0.6, 0.5, 0.2 };
        kickBack[] = { 0.02, 0.02 };
        temporary = 0.01;
    };
};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_AWC_base : Rifle_Base_F {
        dlc = "Niarms_AWC";
        author = "Toadie";
        scope = protected;
        magazines[] = { __300WM_MAGS };
        magazineWell[] = {"CBA_300WM_AI"};
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
            class MuzzleSlot {};
            class PointerSlot {};
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
        };
        descriptionShort = "Long-Range Rifle<br/>Caliber: .300WM";

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

        modes[] = { "Single", "far_optic1", "medium_optic2", "far_optic2" };

        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                 weaponSoundEffect  = "DefaultRifle";

                 closure1[]={"\hlc_wp_fhawc\snd\AWC_first", 0.7, 1,10};
                 closure2[]={"\hlc_wp_fhawc\snd\AWC_first", 0.7, 1,10};
                 soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "awm_Shot_SoundSet", "awm_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "awc_silencerShot_SoundSet", "awc_silencerTail_SoundSet" };
            };

            reloadTime = 1.6666666666666666666666666666667;
            dispersion = 0.000111119;

            __AI_ROF_338SNIPER_SEMI;
        };
        class far_optic1 : Single {
            showToPlayer = 0;
            requiredOpticType = 1;
            __AI_ROF_338SNIPER_MSCOPE_SEMI;
        };
        class medium_optic2 : Single {
            showToPlayer = 0;
            __AI_ROF_338SNIPER_HSCOPE_SEMI;
            requiredOpticType = 2;
        };
        class far_optic2 : far_optic1 {
            __AI_ROF_338SNIPER_HSCOPE_SEMI;
            requiredOpticType = 2;
        };

        aiDispersionCoefY = 10;
        aiDispersionCoefX = 8;

        drysound[] = { "\hlc_wp_fhawc\snd\AWC_dryfire", 1, 1, 10 };
        reloadmagazinesound[] = { "\hlc_wp_fhawc\snd\AWC_reload", 0.5, 1, 20 };

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
    };

/*
    REMOVED
    Reason - Alpha Sorting irrepariably fucked. Sigh.
    Made "Ghillied Up" versions instead. Less cool or versatile, but at least I don't have to deal with BEARS.
    class hlc_acc_Ghilliewrap : ItemCore {
        descriptionshort = "Ghillie Wrap";
        descriptionuse = "<t color='#9cf953'>Use: </t>Turn IR Laser ON/OFF";
        displayname = "Ghillie Wrap (NATO)";
        model = "\hlc_wp_fhAWC\mesh\GHillwrap\ghilliewrap.p3d";
        picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
        scope = 2;
        class ItemInfo : InventoryFlashLightItem_Base_F {
            mass = 8;
        };
    };
*/

    class hlc_rifle_awcovert : hlc_AWC_base {
        author = "toadie";
        scope = public;
        AB_barrelTwist = 8;
        AB_barrelLength = 12;
        agm_bipod = 1;
        ACE_barrelTwist = 203;
        ACE_barrelLength = 305;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 0;
        tmr_autorest_deployable = 0;
        TMR_acc_bipod = 0;
        initspeed = -0.7434831461;
        recoil = "recoil_awc";
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        magazineReloadSwitchPhase = 0.5;
        class EventHandlers {
            fired = "_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents {
            handAction = "HLC_GestureRechamberAWM";
            sound = "hlc_bolt_AWM";
            soundLocation = "RightHandMiddle1";
            delay = 0.02;
            onEmpty = 0;
        };
        cursor = "srifle";
        cursorAim = "EmptyCursor";
        model = "\hlc_wp_fhawc\mesh\awcovert\covert.p3d";
        reloadaction = "HLC_GestureReloadAWM";
        descriptionShort = "Accuracy International Arctic Warfare Covert Magnum<br/>Covert Rifle<br/>Caliber: .300WM";
        inertia = 0.60;
        __DEXTERITY(6.0, 0);
        picture = "\hlc_wp_fhawc\tex\ui\gear_awcOD_ca";
        displayName = "AI AWC-M (OD)";
        discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
        discretedistanceinitindex = 2;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_fhAWC\anim\awmhands.rtm" };
        hiddenSelections[] = { "camo", "camo2"};
        hiddenSelectionsTextures[] = { "\hlc_wp_fhAWC\tex\awcstock_OD_co.paa", "\hlc_wp_fhAWC\tex\AWC_Scope_co.paa"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 132;
        };
        class Single : Single {
            sounds[] = {"StandardSound"};
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "awc_silencerShot_SoundSet", "awc_silencerTail_SoundSet" };
            };
            dispersion = 0.00058;
        };
        class far_optic1 : Single {
            showToPlayer = 0;
            requiredOpticType = 1;
            __AI_ROF_338SNIPER_MSCOPE_SEMI;
        };
        class medium_optic2 : Single {
            showToPlayer = 0;
            __AI_ROF_338SNIPER_HSCOPE_SEMI;
            requiredOpticType = 2;
        };
        class far_optic2 : far_optic1 {
            __AI_ROF_338SNIPER_HSCOPE_SEMI;
            requiredOpticType = 2;
        };
        class Library {
            libTextDesc = "Accuracy International Arctic Warfare Covert Magnum";
        };
    };
    class hlc_rifle_awmagnum : hlc_AWC_base {
        author = "toadie";
        scope = public;
        AB_barrelTwist = 1;
        AB_barrelLength = 26;
        agm_bipod = 1;
        ACE_barrelTwist = 279.4;
        ACE_barrelLength = 660;
        AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
        AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
        AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
        agm_overheating_allowbarrelswap = 1;
        cse_bipod = 1;
        tmr_autorest_deployable = 1;
        TMR_acc_bipod = 1;
        recoil = "recoil_awc";
        deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        magazineReloadSwitchPhase = 0.5;
        hiddenSelections[] = { "camo", "camo2", "Camo3" };
        hiddenSelectionsTextures[] = { "\hlc_wp_fhAWC\tex\awcstock_OD_co.paa","\hlc_wp_fhAWC\tex\AWC_Scope_co.paa","\hlc_wp_fhAWC\tex\Magnumbits_ca.paa" };
        class EventHandlers {
            fired = "_this call CBA_fnc_weaponEvents";
        };
        class CBA_weaponEvents {
            handAction = "HLC_GestureRechamberAWM";
            sound = "hlc_bolt_AWM";
            soundLocation = "RightHandMiddle1";
            delay = 0.02;
            onEmpty = 0;
        };
        cursor = "srifle";
        cursorAim = "EmptyCursor";
        model = "\hlc_wp_fhawc\mesh\awmagnum\covert.p3d";
        reloadaction = "HLC_GestureReloadAWM";
        descriptionShort = "Accuracy International Arctic Warfare Magnum<br/>Covert Rifle<br/>Caliber: .300WM";
        inertia = 0.65;
        __DEXTERITY(6.5, 0);
        picture = "\hlc_wp_fhawc\tex\ui\gear_awmOD_ca";
        displayName = "AI AWM (OD)";
        discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800 };
        discretedistanceinitindex = 2;
        bg_bipod = 1;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_fhAWC\anim\awmhands.rtm" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 143;
//            class PointerSlot : PointerSlot {
//                compatibleItems[] = {/* "hlc_acc_Ghilliewrap" */};
//            };
        };
        class Library {
            libTextDesc = "Accuracy International Arctic Warfare Magnum";
        };
    };
    class hlc_rifle_awmagnum_BL : hlc_rifle_awmagnum {
        author = "toadie";
        displayName = "AI AWM (Black)";
        hiddenSelections[] = { "camo", "camo2", "Camo3" };
        picture = "\hlc_wp_fhawc\tex\ui\gear_awmBlack_ca";
        hiddenSelectionsTextures[] = { "\hlc_wp_fhAWC\tex\AWCSTOCK_black_co.paa", "\hlc_wp_fhAWC\tex\AWC_Scope_co.paa", "\hlc_wp_fhAWC\tex\Magnumbits_ca.paa" };
    };
    class hlc_rifle_awmagnum_FDE : hlc_rifle_awmagnum {
        author = "toadie";
        displayName = "AI AWM (FDE)";
        hiddenSelections[] = { "camo", "camo2", "Camo3" };
        picture = "\hlc_wp_fhawc\tex\ui\gear_awmFDE_ca";
        hiddenSelectionsTextures[] = { "\hlc_wp_fhAWC\tex\awcstock_FDE_co.paa", "\hlc_wp_fhAWC\tex\AWC_Scope_co.paa", "\hlc_wp_fhAWC\tex\Magnumbits_ca.paa" };
    };
    class hlc_rifle_awMagnum_OD_ghillie : hlc_rifle_awmagnum {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127;
        };
        author = "toadie";
        displayName = "AI AWM (OD+Ghillie)";
        picture = "\hlc_wp_fhawc\tex\ui\gear_awmghillieOD_ca";
        model = "\hlc_wp_fhawc\mesh\awmagnum\awm_ghillie.p3d";
    };
    class hlc_rifle_awMagnum_FDE_ghillie : hlc_rifle_awmagnum_FDE {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127;
        };
        author = "toadie";
        displayName = "AI AWM (FDE+Ghillie)";
        picture = "\hlc_wp_fhawc\tex\ui\gear_awmghillieFDE_ca";
        model = "\hlc_wp_fhawc\mesh\awmagnum\awm_ghillie.p3d";
    };
    class hlc_rifle_awMagnum_BL_ghillie : hlc_rifle_awmagnum_BL {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127;
        };
        author = "toadie";
        displayName = "AI AWM (Black+Ghillie)";
        picture = "\hlc_wp_fhawc\tex\ui\gear_awmghillieBlack_ca";
        model = "\hlc_wp_fhawc\mesh\awmagnum\awm_ghillie.p3d";
    };
    class hlc_rifle_awcovert_BL : hlc_rifle_awcovert {
        author = "toadie";
        displayName = "AI AWC-M (Black)";
        hiddenSelections[] = { "camo", "camo2"};
        picture = "\hlc_wp_fhawc\tex\ui\gear_awcBlack_ca";
        hiddenSelectionsTextures[] = { "\hlc_wp_fhAWC\tex\AWCSTOCK_black_co.paa", "\hlc_wp_fhAWC\tex\AWC_Scope_co.paa"};
    };
    class hlc_rifle_awcovert_FDE : hlc_rifle_awcovert {
        displayName = "AI AWC-M (FDE)";
        hiddenSelections[] = { "camo", "camo2"};
        picture = "\hlc_wp_fhawc\tex\ui\gear_awcFDE_ca";
        hiddenSelectionsTextures[] = { "\hlc_wp_fhAWC\tex\awcstock_FDE_co.paa", "\hlc_wp_fhAWC\tex\AWC_Scope_co.paa"};
    };
};
