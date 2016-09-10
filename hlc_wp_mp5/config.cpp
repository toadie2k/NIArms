#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches
{
    class hlcweapons_mp5
    {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = { "HLC_MP5_ammobox", "weapon_hlc_smg_mp5k_PDW", "weapon_hlc_smg_mp5a2", "weapon_hlc_smg_mp5a3", "weapon_hlc_smg_mp5a4", "weapon_hlc_smg_mp5n", "weapon_hlc_smg_9mmar", "weapon_hlc_smg_mp5sd5", "weapon_hlc_smg_mp5sd6","weapon_hlc_smg_mp510" };
        weapons[] = {"hlc_smg_mp5k_PDW","hlc_smg_mp5a2","hlc_smg_mp5a4","hlc_smg_mp5n","hlc_smg_mp5sd5","hlc_smg_mp5sd6","hlc_smg_mp5k","hlc_smg_9mmar"};
        magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_10mm_B_MP5","hlc_30Rnd_10mm_JHP_MP5"};
        version="1.55";
        author="toadie";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgMods
{
    class Mod_Base;
    class Niarms_MP5 :Mod_Base
    {
        name = "NIArsenal: MP5 SMGss";
        picture = "hlc_wp_mp5\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_mp5\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_mp5\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_mp5\tex\ui\NIArms1_ca.paa";
    };
};

class asdg_SlotInfo;
class niarms_mp5_frontsiderail: asdg_SlotInfo {
    linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
    displayName = "$STR_A3_PointerSlot0";
    iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
    class compatibleItems {
        hlc_acc_Surefiregrip = 1;
    };
};

class asdg_FrontSideRail;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot;

class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot {
    class compatibleItems;
};
class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot {
    class compatibleItems;
};

class cfgRecoils
{
    class recoil_ebr;
    class recoil_mp5a2 : recoil_ebr
    {
        muzzleOuter[] = { 0.1, 0.4, 0.2, 0.2 };
        kickBack[] = { 0.01, 0.02 };
        temporary = 0.007;
        permanent = 0.09;
    };
    class recoil_mp5a3 : recoil_ebr
    {
        muzzleOuter[] = { 0.15, 0.34, 0.2, 0.2 };
        kickBack[] = { 0.01, 0.02 };
        temporary = 0.012;
        permanent = 0.11;
    };
    class recoil_mp5k : recoil_ebr
    {
        muzzleOuter[] = { 0.15, 0.3, 0.3, 0.3 };
        kickBack[] = { 0.03, 0.05 };
        temporary = 0.012;
        permanent = 0.11;
    };
};

class CfgVehicles
{
    class NATO_Box_Base;
    class HLC_MP5_ammobox : NATO_Box_Base
    {
        dlc = "Niarms_MP5";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC MP5 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines
        {
            class hlc_30Rnd_762x51_B_MP5
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 30;
            };
            class hlc_30Rnd_762x51_B_MP51
            {
                magazine = "hlc_30Rnd_9x19_GD_MP5";
                count = 30;
            };
            class hlc_30Rnd_762x51_sd_MP51
            {
                magazine = "hlc_30Rnd_9x19_SD_MP5";
                count = 30;
            };
            class hlc_30Rnd_10mm_B_MP5df
            {
                magazine = "hlc_30Rnd_10mm_B_MP5";
                count = 30;
            };
            class dsdhlc_30Rnd_10mm_JHP_MP5
            {
                magazine= "hlc_30Rnd_10mm_JHP_MP5";
                count=30;
            };

        };
        class TransportWeapons
        {
            class _Xhlc_smg_mp5a2
            {
                weapon= "hlc_smg_mp5a2";
                count=20;
            };
            class _Xhlc_smg_mp5a3
            {
                weapon= "hlc_smg_mp5a3";
                count=20;
            };
            class _xhlc_smg_mp5a4
            {
                weapon="hlc_smg_mp5a4";
                count=20;
            };
            class _xx_hlc_smg_mp5N
            {
                weapon = "hlc_smg_mp5N";
                count = 20;
            };
            class _xx_hlc_smg_mp510
            {
                weapon = "hlc_smg_mp510";
                count = 20;
            };
            class _Xhlc_smg_mp5sd5
            {
                weapon= "hlc_smg_mp5sd5";
                count=20;
            };
            class _hlc_smg_mp5sd6
            {
                weapon="hlc_smg_mp5sd6";
                count=20;
            };
            class _Xhlc_smg_mp5kpdw
            {
                weapon= "hlc_smg_mp5k_pdw";
                count=20;
            };
            class _Xhlc_smg_9mmar
            {
                weapon= "hlc_smg_9mmar";
                count=20;
            };
        };
        class TransportItems
        {
            class xxhlc_acc_Surefiregrip
            {
                name = "hlc_acc_Surefiregrip";
                count = 10;
            };
            class xxhlc_muzzle_Agendasix
            {
                name = "hlc_muzzle_Agendasix";
                count = 10;
            };
            class xxhlc_muzzle_Tundra
            {
                name = "hlc_muzzle_Tundra";
                count = 10;
            };
            class xxhlc_muzzle_Agendasix10mm
            {
                name = "hlc_muzzle_Agendasix10mm";
                count = 10;
            };
            class _xx_optic_Holosight
            {
                name = "optic_Holosight_smg";
                count = 10;
            };
            class _xx_optic_hamr
            {
                name = "optic_hamr";
                count = 10;
            };
            class _xx_optic_rco
            {
                name = "optic_Aco_smg";
                count = 10;
            };
            class _xx_optic_ACO_grn
            {
                name = "    optic_ACO_grn_smg";
                count = 10;
            };

        };
    };
    class Weapon_Base_F;
    class weapon_hlc_smg_mp5k_PDW : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MP5K-PDW";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_mp5k_PDW";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
    class weapon_hlc_smg_mp5a2 : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MP5A2";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_mp5a2";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
    class weapon_hlc_smg_mp5a4 : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MP5A4";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_mp5a4";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
    class weapon_hlc_smg_mp5n : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MP5N";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_mp5n";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
    class weapon_hlc_smg_mp5sd5 : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MP5SD5";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_mp5sd5";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
    class weapon_hlc_smg_mp5sd6 : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MP5SD6";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_mp5sd6";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
    class weapon_hlc_smg_9mmar : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MP5N'9MMAR'";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_9mmar";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
    class weapon_hlc_smg_mp510 : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MP5/10";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_mp510";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
    class weapon_hlc_smg_mp5a3 : Weapon_Base_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        scopeCurator = 2;
        displayName = "MPA3";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_smg_mp5a3";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_30Rnd_9x19_B_MP5";
                count = 1;
            };
        };
    };
};
class CfgMagazines {
    class 30Rnd_9x21_Mag;
    class hlc_30Rnd_9x19_B_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie";
        ammo = "HLC_9x19_M882_SMG";
        count =30;
        descriptionshort = "Caliber: 9x19mm<br />Rounds: 30<br />Used in: MP5s";
        displayname = "MP5 Magazine (Ball) 30rnd 9mm";
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        initspeed = 423;
        lastroundstracer = 0;
        picture = "\hlc_wp_MP5\tex\ui\mag_9x19_ball_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "9mm Ball";
    };
    class hlc_30Rnd_9x19_GD_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie";
        ammo = "HLC_9x19_GoldDot";
        count =30;
        descriptionshort = "Caliber: 9x19mm<br />Rounds: 30<br />Used in: MP5s";
        displayname = "MP5 Magazine (JHP) 30rnd 9mm";
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        initspeed = 416;
        lastroundstracer = 0;
        picture = "\hlc_wp_MP5\tex\ui\mag_9x19_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "9mm JHP";
    };
    class hlc_30Rnd_9x19_SD_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie";
        ammo = "HLC_9x19_Subsonic";
        count =30;
        descriptionshort = "Caliber: 9x19mm<br />Rounds: 30<br />Used in: MP5s";
        displayname = "MP5 Magazine (Subsonic) 30rnd 9mm";
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        initspeed = 333;
        lastroundstracer = 0;
        picture = "\hlc_wp_MP5\tex\ui\mag_9x19_subsonic_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "9mm Subsonic";
    };
    class hlc_30Rnd_10mm_B_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie";
        ammo = "HLC_10mm_FMJ";
        count =30;
        descriptionshort = "Caliber: 10mm AUTO<br />Rounds: 30<br />Used in: MP5/10";
        displayname = "MP5/10 Magazine (Ball) 30rnd 10mmAUTO";
        model = "hlc_wp_mp5\mesh\magazine\magazine_10mm.p3d";
        initspeed = 425;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "10mm Ball";
        picture = "\hlc_wp_MP5\tex\ui\mag_10mm_fmj_ca";
    };
    class hlc_30Rnd_10mm_JHP_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie";
        ammo = "HLC_10mm_JHP";
        count =30;
        descriptionshort = "Caliber: 10mm AUTO<br />Rounds: 30<br />Used in: MP5/10";
        displayname = "MP5/10 Magazine (Hydra-shok) 30rnd 10mmAUTO";
        model = "hlc_wp_mp5\mesh\magazine\magazine_10mm.p3d";
        initspeed = 425;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "10mm JHP";
        picture = "\hlc_wp_MP5\tex\ui\mag_10mm_hydra_ca";
    };
};

class CfgWeapons {

    class ItemCore;
    class InventoryFlashLightItem_Base_F;
    class hlc_acc_Surefiregrip : ItemCore
    {
        dlc = "Niarms_MP5";
        author = "Arby26,Toadie";
        _generalMacro = "acc_flashlight";
        scope = 2;
        displayName = "Surefire Weaponlight";
        descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
        picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
        model = "hlc_wp_mp5\mesh\surefire_griplight\Surefire.p3d";
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        class ItemInfo : InventoryFlashLightItem_Base_F
        {
            mass = 4;
            class FlashLight
            {
                position = "flash";
                direction =  "flash dir";
                color[] = { 25, 22, 20 };
                ambient[] = { 0.001, 0.001, 0.001 };
                size = 1;
                innerAngle = 50;
                outerAngle = 120;
                coneFadeCoef = 10;
                intensity = 330;
                useFlare = 1;
                dayLight = 1;
                FlareSize = 0.7;
                onlyInNvg = 0;
                class Attenuation
                {
                    start = 0;
                    constant = 2;
                    linear = 1;
                    quadratic = 75;
                };
                scale[] = { 0 };
            };
        };
        inertia = 0.1;
    };

    class muzzle_snds_h;
    class hlc_muzzle_Agendasix : muzzle_snds_h
    {
        dlc = "Niarms_MP5";
        author = " Toadie";
        displayName = "AWC Agenda Six (9mm)";
        picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
        model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";

    };
    class hlc_muzzle_Tundra : muzzle_snds_h
    {
        dlc = "Niarms_MP5";
        author = "r_populik,Toadie";
        displayName = "Gemtech Tundra (9mm)";
        picture = "\hlc_wp_MP5\tex\ui\gear_tundra_ca";
        model = "\hlc_wp_mp5\mesh\agendasix\tundra.p3d";

    };
    class hlc_muzzle_Agendasix10mm : muzzle_snds_h
    {
        dlc = "Niarms_MP5";
        author = "Toadie";
        displayName = "AWC Agenda Six (10mm)";
        picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
        model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";

    };

    class Rifle;
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_MP5_base : Rifle_Base_F
    {
        dlc = "Niarms_MP5";
        recoil = "recoil_mp5a2";
        hasBipod = false;
        magazineReloadSwitchPhase = 0.5;
        deployedpivot = "deploypivot";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        scope = protected;
        drysound[] = {"hlc_wp_mp5\snd\mp5_dryfire", 1, 1, 20};
        changeFiremodeSound[] = { "hlc_wp_mp5\snd\mp5_safety", 1, 1, 8 };
        interia= 0.35;
        magazines[] = {
            "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_SD_MP5"
        };
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles: GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 26;
            class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {
                class compatibleItems: compatibleItems {
                    hlc_muzzle_Agendasix = 1;
                    hlc_muzzle_Tundra = 1;
                };
            };
            class CowsSlot {};
            class PointerSlot {};
        };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";


        dexterity = 1.8;
        bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01", 0.501187, 1, 15};
        bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02", 0.398107, 1, 15};
        bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03", 0.398107, 1, 15};
        bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04", 0.398107, 1, 15};
        bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02", 0.501187, 1, 15};
        bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03", 0.501187, 1, 15};
        bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04", 0.501187, 1, 15};
        bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01", 0.501187, 1, 15};
        bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02", 0.501187, 1, 15};
        bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03", 0.501187, 1, 15};
        bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04", 0.501187, 1, 15};
        bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01", 0.398107, 1, 15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
        modes[] = {"FullAuto","fullauto_medium"};
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
            reloadTime = 0.068;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            dispersion = 0.00093;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };

            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.08;
            recoil = "recoil_single_smg_02";
            recoilprone = "recoil_single_prone_smg_02";
            dispersion=0.000261799;
            maxrange = 600;
            maxrangeprobab = 0.05;
            midrange = 300;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            airateoffire = 4;
        };
        class fullauto_medium: FullAuto
        {
            showToPlayer = 0;
            burst = 4;
            maxrange = 150;
            maxrangeprobab = 0.05;
            midrange = 100;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_close_optics1: Single {
            airateoffire = 2;
            airateoffiredistance = 100;
            maxrange = 300;
            maxrangeprobab = 0.01;
            midrange = 200;
            midrangeprobab = 0.8;
            minrange = 2;
            minrangeprobab = 0.05;
            requiredoptictype = 1;
            showtoplayer = 0;
        };
        class single_medium_optics1: single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 150;
            maxrange = 300;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.7;
            minrange = 100;
            minrangeprobab = 0.05;
        };
        class single_far_optics1: single_medium_optics1 {
            airateoffire = 4;
            airateoffiredistance = 200;
            maxrange = 400;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.4;
            minrange = 50;
            minrangeprobab = 0.05;
            requiredoptictype = 2;
        };

        aidispersioncoefx = 9;
        aidispersioncoefy = 8;

    };
    class hlc_smg_mp5k_PDW : hlc_Mp5_base
    {
        recoil = "recoil_mp5k";
        AB_barrelTwist=10;
        AB_barrelLength=4.5;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 114.3;
        author = "Twinke Masta, Thanez, Christian Øelund,Toadie";
        scope = public;
        model = "\hlc_wp_Mp5\mesh\mp5kpdw\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5K";
        interia= 0.25;
        descriptionShort = "SMG<br/>Caliber:9x19mm NATO";
        drysound[] = {"hlc_wp_mp5\snd\mp5_dryfire", 1, 1, 20};
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp5k_reload", 0.7, 1, 20 };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5kpdw_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5K-PDW";

        discretedistance[] = {50,100,150,200};
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        modes[] = {"Single","Burst","FullAuto","single_close_optics1","single_medium_optics1", "fullauto_medium"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5k.rtm"};
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 50;
            class CowsSlot: asdg_OpticRail1913_short {};
        };
        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5k_Shot_SoundSet", "mp5k_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5k_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.068;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.00093;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            aiRateOfFire = 1e-006;
        };
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5k_Shot_SoundSet", "mp5k_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5k_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.068;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            dispersion = 0.00093;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class Burst: Mode_Burst
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5k_Shot_SoundSet", "mp5k_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5k_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5k_indoor", 1, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.068;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.00093;
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;

        };
        class single_close_optics1: Single {
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
        class single_medium_optics1: single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 700;
            maxrangeprobab = 0.05;
            midrange = 500;
            midrangeprobab = 0.7;
            minrange = 300;
            minrangeprobab = 0.05;
        };
        class single_far_optics1: single_medium_optics1 {
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
        class fullauto_medium: FullAuto {
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
        class Library
        {
            libTextDesc = "Heckler und Koch GMBH Mp5N";
        };
    };
    class hlc_smg_mp5k: hlc_smg_mp5k_PDW
    {
        recoil = "recoil_mp5k";
        AB_barrelTwist=10;
        AB_barrelLength=4.5;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 114.3;
        author = "Twinke Masta, Geno,Toadie";
        model = "\hlc_wp_Mp5\mesh\mp5k\mp5.p3d";
        type = 2;
        reloadaction = "HLC_GestureReloadMP5K_pistol";
        //handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5kpistol.rtm"};
        displayName = "HK MP5K";
        interia= 0.25;
        discretedistance[] = {50};
        discretedistanceinitindex = 0;
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5k_x_ca";
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1", "fullauto_medium"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 40;
        };
    };
    class hlc_smg_mp5a2 : hlc_Mp5_base
    {
        recoil = "recoil_mp5a2";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno, Christian Øelund,Toadie";
        scope = public;

        model = "\hlc_wp_Mp5\mesh\mp5a2\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        interia= 0.35;
        descriptionShort = "SMG<br/>Caliber:9x19mm NATO";
        drysound[] = {"hlc_wp_mp5\snd\mp5_dryfire", 1, 1, 20};
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp5_reload_empty", 0.7, 1, 20 };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5a2_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5A2";
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1", "fullauto_medium"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 50;
            class PointerSlot: niarms_mp5_frontsiderail {};
            class CowsSlot: asdg_OpticRail1913_short {};
        };
        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5a4_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_smg_02";
            recoilprone = "recoil_auto_prone_smg_02";
            dispersion = 0.00093;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            aiRateOfFire = 1e-006;
        };
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5a4_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_smg_02";
            recoilprone = "recoil_single_prone_smg_02";
            dispersion = 0.00093;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class single_close_optics1: Single {
            airateoffire = 2;
            airateoffiredistance = 300;
            maxrange = 300;
            maxrangeprobab = 0.01;
            midrange = 200;
            midrangeprobab = 0.8;
            minrange = 2;
            minrangeprobab = 0.05;
            requiredoptictype = 1;
            showtoplayer = 0;
        };
        class single_medium_optics1: single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 300;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.7;
            minrange = 100;
            minrangeprobab = 0.05;
        };
        class single_far_optics1: single_medium_optics1 {
            airateoffire = 4;
            airateoffiredistance = 600;
            maxrange = 400;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.4;
            minrange = 50;
            minrangeprobab = 0.05;
            requiredoptictype = 2;
        };
        class fullauto_medium: FullAuto {
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
        class Library
        {
            libTextDesc = "Heckler und Koch GMBH Mp5N";
        };
    };
    class hlc_smg_MP5N : hlc_Mp5_base {
        recoil = "recoil_mp5a3";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno, Christian Øelund,Toadie";
        scope = public;
        model = "\hlc_wp_Mp5\mesh\mp5n\mp5.p3d";
        interia= 0.27;
        reloadaction = "HLC_GestureReloadMP5";
        descriptionShort = "SMG<br/>Caliber:9x19mm NATO";
        drysound[] = {"hlc_wp_mp5\snd\mp5_dryfire", 1, 1, 20};
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp5_reload_empty", 0.7, 1, 20 };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5n_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5N";
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 1;
        bg_bipod = 0;
        modes[] = {"Single","Burst","FullAuto","single_close_optics1","single_medium_optics1", "fullauto_medium"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 62;
            class CowsSlot: asdg_OpticRail1913_short {};
            class PointerSlot: asdg_FrontSideRail {};
        };
        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5a4_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_smg_02";
            recoilprone = "recoil_auto_prone_smg_02";
            dispersion = 0.00093;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            aiRateOfFire = 1e-006;
        };
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5a4_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_smg_02";
            recoilprone = "recoil_single_prone_smg_02";
            dispersion = 0.00093;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class Burst: Mode_Burst
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5_Shot_SoundSet", "mp5_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5a4_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.00093;
            recoil = "recoil_auto_smg_02";
            recoilprone = "recoil_auto_prone_smg_02";
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;

        };
        class single_close_optics1: Single {
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
        class single_medium_optics1: single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 700;
            maxrangeprobab = 0.05;
            midrange = 500;
            midrangeprobab = 0.7;
            minrange = 300;
            minrangeprobab = 0.05;
        };
        class single_far_optics1: single_medium_optics1 {
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
        class fullauto_medium: FullAuto {
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
        class Library
        {
            libTextDesc = "Heckler und Koch GMBH Mp5N";
        };
    };
    class UGL_F;
    class hlc_smg_9mmar : hlc_smg_MP5N
    {
        recoil = "recoil_mp5a3";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno, Tigg, Christian Øelund,Toadie";
        scope = public;
        model = "\hlc_wp_Mp5\mesh\9mmar\9mmar.p3d";
        interia= 0.39;
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_9mmar.rtm"};
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5N '9MMAR'";
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\hks2", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\hks3", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\hks1", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\hks_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.1;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.00093;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            aiRateOfFire = 1e-006;

        };
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\hks2", 1, 1,700};
                begin2[]={"\hlc_wp_MP5\snd\hks3", 1, 1,700};
                begin3[]={"\hlc_wp_MP5\snd\hks1", 1, 1,700};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\hks_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_smg_02";
            recoilprone = "recoil_single_prone_smg_02";
            dispersion = 0.00093;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class Burst: Mode_Burst
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\hks2", 1, 1,700};
                begin2[]={"\hlc_wp_MP5\snd\hks3", 1, 1,700};
                begin3[]={"\hlc_wp_MP5\snd\hks1", 1, 1,700};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\hks_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.1;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.00093;
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;

        };
        class single_medium_optics1 : single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 300;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.7;
            minrange = 100;
            minrangeprobab = 0.05;
        };
        class single_far_optics1 : single_medium_optics1 {
            airateoffire = 4;
            airateoffiredistance = 600;
            maxrange = 400;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.4;
            minrange = 50;
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
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 77;
        };
        muzzles[] = {"this", "hlc_M203_Mp5"};
        class hlc_M203_Mp5 : UGL_F {
            cameradir = "GL_Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] = { "GL_eye_50m", "GL_eye_100m", "GL_eye_150m", "GL_eye_200m", "GL_eye_250m", "GL_eye_300m", "GL_eye_350m", "GL_eye_400m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203PI";
            reloadAction = "GestureReloadTrgUGL";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            drysound[] = {"A3\sounds_f\Weapons\other\sfx5", 1, 1, 400};
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = {"1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticszoommin = 0.25;
            reloadmagazinesound[] = {"hlc_wp_mp5\snd\gren_cock1", 1, 1, 20};
            reloadtime = 0.1;
            sounds[] = { "StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = { "A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL", 1.0, 1, 10 };
                soundClosure[] = { "closure1", 1 };
            };
            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                begin1[] = { "\hlc_wp_MP5\snd\glauncher", 1, 1, 400 };
                begin2[] = { "\hlc_wp_MP5\snd\glauncher", 1, 1, 400 };
                begin3[] = { "\hlc_wp_MP5\snd\glauncher", 1, 1, 400 };
            };
            soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
            sound[] = {"hlc_wp_mp5\snd\glauncher", 1, 1, 400};
            weaponinfotype = "RscWeaponZeroing";
        };
    };
    class hlc_smg_mp5a4 : hlc_Mp5_base
    {
        recoil = "recoil_mp5a2";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno, Christian Øelund,Toadie";
        scope = public;
        model = "\hlc_wp_Mp5\mesh\mp5a4\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        interia= 0.3;
        descriptionShort = "SMG<br/>Caliber:9x19mm NATO";
        drysound[] = {"hlc_wp_mp5\snd\mp5_dryfire", 1, 1, 20};
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp5_reload_empty", 0.7, 1, 20 };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5a4_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5A4";
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        modes[] = {"Single","Burst","FullAuto","single_close_optics1","single_medium_optics1", "fullauto_medium"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 58;
            class CowsSlot: asdg_OpticRail1913_short {};
            class PointerSlot: asdg_FrontSideRail {};
        };
        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5a4_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.00093;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            aiRateOfFire = 1e-006;

        };
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5a4_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_smg_02";
            recoilprone = "recoil_single_prone_smg_02";
            dispersion = 0.00093;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class Burst: Mode_Burst
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 0.75, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp5a4_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5a4_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5_sil", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp5a4_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.00093;
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;

        };
        class single_close_optics1: Single {
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
        class single_medium_optics1: single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 700;
            maxrangeprobab = 0.05;
            midrange = 500;
            midrangeprobab = 0.7;
            minrange = 300;
            minrangeprobab = 0.05;
        };
        class single_far_optics1: single_medium_optics1 {
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
        class fullauto_medium: FullAuto {
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
        class Library
        {
            libTextDesc = "Heckler und Koch GMBH Mp5N";
        };
    };

    class hlc_smg_mp510 :hlc_smg_MP5N
    {
        recoil = "recoil_mp5a2";
        AB_barrelTwist=15;
        AB_barrelLength=9;
        ACE_barrelTwist = 381.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno,Toadie, Christian Øelund";
        magazines[] = {
            "hlc_30Rnd_10mm_B_MP5","hlc_30Rnd_10mm_JHP_MP5"
        };
        model = "\hlc_wp_Mp5\mesh\mp510\mp510.p3d";
        reloadaction = "HLC_GestureReloadMP510";
        interia= 0.36;
        descriptionShort = "SMG<br/>Caliber: 10mm AUTO";
        drysound[] = {"hlc_wp_mp5\snd\mp5_dryfire", 1, 1, 20};
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp510_reload_empty", 0.7, 1, 20 };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp510_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5/10";
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        modes[] = {"Single","Burst","FullAuto","single_close_optics1","single_medium_optics1", "fullauto_medium"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 54;
            class MuzzleSlot: asdg_MuzzleSlot_45ACP_SMG {
                class compatibleItems: compatibleItems {
                    hlc_muzzle_Agendasix10mm = 1;
                };
            };
            class CowsSlot: asdg_OpticRail1913_short {};
            class PointerSlot: asdg_FrontSideRail {};
        };
        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp510_Shot_SoundSet", "mp510_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp510_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp510_silencerShot_SoundSet", "mp510_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp510_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            dispersion = 0.00093;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            aiRateOfFire = 1e-006;
        };
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp510_Shot_SoundSet", "mp510_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp510_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp510_silencerShot_SoundSet", "mp510_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp510_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.08;
            begin1[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_primary_3outof10";
            recoilProne = "recoil_single_primary_prone_3outof10";
            dispersion = 0.00093;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class Burst: Mode_Burst
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp510_Shot_SoundSet", "mp510_tail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_MP5\snd\mp510_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_forest", 1.1, 1, 1200 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp510_indoor", 1.0, 1, 1200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp510_silencerShot_SoundSet", "mp510_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp510_sil_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.081;
            begin1[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.00093;
            recoil = "recoil_auto_primary_3outof10";
            recoilProne = "recoil_auto_primary_prone_3outof10";
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;

        };
        class single_close_optics1 : Single {
            airateoffire = 2;
            airateoffiredistance = 300;
            maxrange = 300;
            maxrangeprobab = 0.01;
            midrange = 200;
            midrangeprobab = 0.8;
            minrange = 2;
            minrangeprobab = 0.05;
            requiredoptictype = 1;
            showtoplayer = 0;
        };
        class single_medium_optics1 : single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 300;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.7;
            minrange = 100;
            minrangeprobab = 0.05;
        };
        class single_far_optics1 : single_medium_optics1 {
            airateoffire = 4;
            airateoffiredistance = 600;
            maxrange = 400;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.4;
            minrange = 50;
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
    class hlc_smg_mp5sd5 : hlc_Mp5_base
    {
        recoil = "recoil_mp5a2";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno,Toadie, Christian Øelund";
        scope = public;
        fireLightDuration = 0;
        fireLightIntensity = 0;
        model = "\hlc_wp_Mp5\mesh\mp5sd5\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        interia= 0.36;
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd5_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5SD5";
        initspeed = 285;
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        drysound[] = {"hlc_wp_mp5\snd\mp5_dryfire", 1, 1, 20};
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp5_reload_empty", 0.7, 1, 20 };
        modes[] = {"Single","Burst","FullAuto","single_close_optics1","single_medium_optics1", "fullauto_medium"};
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5sd.rtm"};
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 62;
            class CowsSlot: asdg_OpticRail1913_short {};
            class MuzzleSlot {};
        };
        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5sd_silencerShot_SoundSet", "mp5sd_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,100};
                begin2[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,100};
                begin3[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,100};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5sd_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5sd_indoor", 1, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.069;
            begin1[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            recoil = "recoil_auto_smg_02";
            recoilprone = "recoil_auto_prone_smg_02";
            dispersion = 0.00093;
            maxrange = 30;
            maxrangeprobab = 0.05;
            midrange = 15;
            midrangeprobab = 0.7;
            minrange = 0;
            minrangeprobab = 0.9;
            aiRateOfFire = 1e-006;
        };
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5sd_silencerShot_SoundSet", "mp5sd_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,200};
                begin3[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5sd_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5sd_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.075;
            begin1[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.1622777,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};

            recoil = "recoil_single_smg_02";
            recoilprone = "recoil_single_prone_smg_02";
            dispersion = 0.00093;
            maxrange = 500;
            maxrangeprobab = 0.05;
            midrange = 350;
            midrangeprobab = 0.7;
            minrange = 2;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class Burst: Mode_Burst
        {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                closure2[]={"\hlc_wp_MP5\snd\mp5_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5sd_silencerShot_SoundSet", "mp5sd_silencerTail_SoundSet" };
                //NEW THING PAY ATTENTION
                begin1[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,200};
                begin3[]={"\hlc_wp_MP5\snd\mp5sd_fire", 1, 1,200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5sd_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                begin1[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                begin2[]={"\hlc_wp_MP5\snd\mp510_SD", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
                class SoundTails
                {
                    class TailForest
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp59mm_sil_forest", 1.1, 1, 100 };
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[] = { "\hlc_wp_mp5\snd\tails\mp5sd_indoor", 1.0, 1, 100 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
            };
            reloadTime = 0.075;
            begin1[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            begin2[] = {"\hlc_wp_MP5\snd\mp510_fire",1.0,1,1200};
            closure1[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            closure2[] = {"\hlc_wp_MP5\snd\mp5_first",1.0,1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            dispersion = 0.00093;
            recoil = "recoil_auto_smg_02";
            recoilprone = "recoil_auto_prone_smg_02";
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;

        };
        class single_medium_optics1 : single_close_optics1 {
            airateoffire = 2;
            airateoffiredistance = 500;
            maxrange = 300;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.7;
            minrange = 100;
            minrangeprobab = 0.05;
        };
        class single_far_optics1 : single_medium_optics1 {
            airateoffire = 4;
            airateoffiredistance = 600;
            maxrange = 400;
            maxrangeprobab = 0.05;
            midrange = 200;
            midrangeprobab = 0.4;
            minrange = 50;
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
    class hlc_smg_mp5a3: hlc_smg_mp5a2
    {
        recoil = "recoil_mp5a3";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno,Toadie, Christian Øelund";
        scope = public;
        model = "\hlc_wp_Mp5\mesh\mp5a3\mp5.p3d";
        interia= 0.3;
        reloadaction = "HLC_GestureReloadMP5";
        descriptionShort = "SMG<br/>Caliber:9x19mm NATO";
        drysound[] = {"hlc_wp_mp5\snd\mp5_dryfire", 1, 1, 20};
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp5_reload_empty", 0.7, 1, 20 };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5a3_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5A3";
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 62;
        };
    };
    class hlc_smg_mp5sd6 : hlc_smg_mp5sd5
    {
        recoil = "recoil_mp5a3";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno,Toadie, Christian Øelund";
        scope = public;
        model = "\hlc_wp_Mp5\mesh\mp5sd6\mp5.p3d";
        interia= 0.33;
        reloadaction = "HLC_GestureReloadMP5";
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5sd.rtm"};
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "HK MP5SD6";
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 68;
        };
    };

};