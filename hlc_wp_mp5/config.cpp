    #include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches
{
    class hlcweapons_mp5
    {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","cba_jr","hlcweapons_core"};
        units[] = { "HLC_MP5_ammobox", "weapon_hlc_smg_mp5k_PDW", "weapon_hlc_smg_mp5a2", "weapon_hlc_smg_mp5a3", "weapon_hlc_smg_mp5a4", "weapon_hlc_smg_mp5n", "weapon_hlc_smg_9mmar", "weapon_hlc_smg_mp5sd5", "weapon_hlc_smg_mp5sd6","weapon_hlc_smg_mp510" };
        weapons[] = {"hlc_smg_mp5k_PDW","hlc_smg_mp5a2","hlc_smg_mp5a4","hlc_smg_mp5n","hlc_smg_mp5sd5","hlc_smg_mp5sd6","hlc_smg_mp5k","hlc_smg_9mmar"};
        magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_10mm_B_MP5","hlc_30Rnd_10mm_JHP_MP5"};
        version="1.75";
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
        hlc_acc_slimlinegrip = 1;
    };
};

class asdg_FrontSideRail;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot;
class asdg_UnderSlot;
class nia_rifle_grips_slot;
class nia_charms_slot;
class nia_charms_slot2 :nia_charms_slot
{
    linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
    iconPicture = "\a3\weapons_f_mark\Data\UI\attachment_under";
    iconPinpoint = "Bottom";
};
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
    class B_supplyCrate_F;
    class HLC_MP5_ammobox : B_supplyCrate_F
    {
        dlc = "Niarms_MP5";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC MP5 Supply Box";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines
        {
            __M_MAG(hlc_30Rnd_9x19_B_MP5,30);
            __M_MAG(hlc_30Rnd_9x19_GD_MP5,30);
            __M_MAG(hlc_30Rnd_9x19_SD_MP5,30);
            __M_MAG(hlc_30Rnd_10mm_B_MP5,30);
            __M_MAG(hlc_30Rnd_10mm_JHP_MP5,30);
        };
        class TransportWeapons
        {
            __M_WEP(hlc_smg_mp5a2,20);
            __M_WEP(hlc_smg_mp5a3,20);
            __M_WEP(hlc_smg_mp5a4,20);
            __M_WEP(hlc_smg_mp5N,20);
            __M_WEP(hlc_smg_mp510,20);
            __M_WEP(hlc_smg_mp5sd5,20);
            __M_WEP(hlc_smg_mp5sd6,20);
            __M_WEP(hlc_smg_mp5k_pdw,20);
            __M_WEP(hlc_smg_9mmar,20);
            __M_WEP(hlc_smg_mp5k,20);
        };
        class TransportItems
        {
            __M_ITM(hlc_acc_Surefiregrip,10);
            __M_ITM(hlc_muzzle_Agendasix,10);
            __M_ITM(hlc_muzzle_Tundra,10);
            __M_ITM(hlc_muzzle_Agendasix10mm,10);
            __M_ITM(optic_Holosight_smg,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_Aco_smg,10);
            __M_ITM(optic_ACO_grn_smg,10);
        };
    };
    class Weapon_Base_F;
    __WEAPONHOLDER(hlc_smg_mp5k_PDW, hlc_30Rnd_9x19_B_MP5, HK MP5K - PDW, Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_mp5k, hlc_30Rnd_9x19_B_MP5, HK MP5K, Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_mp5a2, hlc_30Rnd_9x19_B_MP5, HK MP5A2, Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_MP5N, hlc_30Rnd_9x19_B_MP5, HK MP5N, Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_9mmar, hlc_30Rnd_9x19_B_MP5, HK MP5N '9MMAR', Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_mp5a4, hlc_30Rnd_9x19_B_MP5, HK MP5A4, Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_mp510, hlc_30Rnd_10mm_B_MP5, HK MP5 / 10, Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_mp5sd5, hlc_30Rnd_9x19_B_MP5, HK MP5SD5, Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_mp5a3, hlc_30Rnd_9x19_B_MP5, HK MP5A3, Niarms_MP5, Toadie, SubMachineGuns);
    __WEAPONHOLDER(hlc_smg_mp5sd6, hlc_30Rnd_9x19_B_MP5, HK MP5SD6, Niarms_MP5, Toadie, SubMachineGuns);

};

class CfgMagazines {
    class 30Rnd_9x21_Mag;
    class hlc_30Rnd_9x19_B_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie, Spartan0536";
        ammo = "HLC_9x19_M882_SMG";
        count =30;
        descriptionshort = $STR_NIA_DESC_30Rnd_9x19_B_MP5;
        displayname = $STR_NIA_30Rnd_9x19_B_MP5;
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5;
        modelSpecialIsProxy = 1;
        initspeed = 416.1;
        lastroundstracer = 0;
        picture = "\hlc_wp_MP5\tex\ui\mag_9x19_ball_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M882 Ball";
    };
    class hlc_30Rnd_9x19_GD_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie, Spartan0536";
        ammo = "HLC_9x19_JHP_SMG";
        count =30;
        descriptionshort = $STR_NIA_DESC_30Rnd_9x19_GD_MP5;
        displayname = $STR_NIA_30Rnd_9x19_GD_MP5;
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5;
        modelSpecialIsProxy = 1;
        initspeed = 315.8;
        lastroundstracer = 0;
        picture = "\hlc_wp_MP5\tex\ui\mag_9x19_jhp_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Mk243 JHP";
    };
    class hlc_30Rnd_9x19_SD_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie, Spartan0536";
        ammo = "HLC_9x19_Subsonic";
        count =30;
        descriptionshort = $STR_NIA_DESC_30Rnd_9x19_SD_MP5;
        displayname = $STR_NIA_30Rnd_9x19_SD_MP5;
        model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
        modelSpecial = hlc_wp_mp5\mesh\magazine\proxy\30Rnd_9x19_MP5;
        modelSpecialIsProxy = 1;
        initspeed = 305.8;
        lastroundstracer = 0;
        picture = "\hlc_wp_MP5\tex\ui\mag_9x19_subsonic_ca";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Subsonic";
    };
    class hlc_30Rnd_10mm_B_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie, Spartan0536";
        ammo = "HLC_10mm_FMJ";
        count =30;
        descriptionshort = $STR_NIA_DESC_30Rnd_10mm_B_MP5;
        displayname = $STR_NIA_30Rnd_10mm_B_MP5;
        model = "hlc_wp_mp5\mesh\magazine\magazine_10mm.p3d";
        modelSpecial = hlc_wp_mp5\mesh\magazine\proxy\30Rnd_10MM_MP510;
        modelSpecialIsProxy = 1;
        initspeed = 408.8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_10mmAUTO_FMJ;
        picture = "\hlc_wp_MP5\tex\ui\mag_10mm_fmj_ca";
    };
    class hlc_30Rnd_10mm_JHP_MP5: 30Rnd_9x21_Mag {
        dlc = "Niarms_MP5";
        author = "Toadie, Spartan0536";
        ammo = "HLC_10mm_JHP";
        count =30;
        descriptionshort = $STR_NIA_DESC_30Rnd_10mm_JHP_MP5;
        displayname = $STR_NIA_30Rnd_10mm_JHP_MP5;
        model = "hlc_wp_mp5\mesh\magazine\magazine_10mm.p3d";
        modelSpecial = hlc_wp_mp5\mesh\magazine\proxy\30Rnd_10MM_MP510;
        modelSpecialIsProxy = 1;
        initspeed = 463.3;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_10mmAUTO_JHP;
        picture = "\hlc_wp_MP5\tex\ui\mag_10mm_hydra_ca";
    };
};

class CfgMagazineWells {
    class CBA_9x19_MP5 {
        NIA_mags[] = {
            "hlc_30Rnd_9x19_B_MP5",
            "hlc_30Rnd_9x19_GD_MP5",
            "hlc_30Rnd_9x19_SD_MP5"
        };
    };
    class CBA_10x25_MP5 {
        NIA_mags[] = {
            "hlc_30Rnd_10mm_B_MP5",
            "hlc_30Rnd_10mm_JHP_MP5"
        };
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
        displayName = $STR_NIA_Surefiregrip;
        descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
        picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
        model = "hlc_wp_mp5\mesh\surefire_griplight\Surefire.p3d";
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        class ItemInfo : InventoryFlashLightItem_Base_F
        {
            mass = 7;
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
        inertia = 0.05;
    };

	class muzzle_snds_H : ItemCore {
		class ItemInfo;
	};
    class hlc_muzzle_Agendasix : muzzle_snds_h
    {
        dlc = "Niarms_MP5";
        author = " Toadie";
        displayName = $STR_NIA_AgendaSix;
        picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
        model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";
		class ItemInfo : ItemInfo {
			mass = 11;
		};
		inertia = 0.08;
    };
    class hlc_muzzle_Agendasix10mm : hlc_muzzle_Agendasix
    {
        dlc = "Niarms_MP5";
        author = "Toadie";
        displayName = $STR_NIA_AgendaSix10mm;
    };

    class Rifle;
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class hlc_acc_slimlinegrip : ItemCore
    {
        dlc = "Niarms_MP5";
        scope = public;
        author = "Toadie";
        descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
        picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
        model = "hlc_wp_mp5\mesh\slimline_grip\slimline.p3d";
        descriptionShort = $STR_NIA_Slimline_DESC;
        displayname = $STR_NIA_Slimguard;
        class ItemInfo : InventoryFlashLightItem_Base_F
        {
            mass = 1;
        };
        inertia = 0.00;
    };
    class hlc_MP5_base : Rifle_Base_F
    {
        scope = protected;
        dlc = "Niarms_MP5";
        recoil = "recoil_mp5a2";
        hasBipod = false;
        magazineReloadSwitchPhase = 0.5;
        deployedpivot = "deploypivot";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        drysound[] = {"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_empty", 1, 1, 20};
        changeFiremodeSound[] = { "hlc_wp_mp5\snd\mp5_safety", 1, 1, 8 };
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp5_reload", 0.7, 1, 20 };
        magazines[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_GD_MP5", "hlc_30Rnd_9x19_SD_MP5"};
        magazineWell[] = { "CBA_9x19_MP5" };
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        __AI_DISPERSION_COEF;
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
			allowedSlots[] = {701, 901}; //vest,ruck
            class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG {
                iconPosition[] = { 0.0, 0.35 };
                iconScale = 0.2;
                class compatibleItems: compatibleItems {
                    hlc_muzzle_Agendasix = 1;
                };
            };
            class CowsSlot {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };
        };
        descriptionShort = $STR_NIA_MP5_DESC;
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

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

        modes[] = {"Single","Burst","FullAuto"};

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
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
            };

            __ROF(800);
            dispersion = 0.00093;

            __AI_ROF_SMG_SINGLE;
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
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
            };

            __ROF(800);
            dispersion = 0.00093;

            //AI
            __AI_ROF_SMG_BURST;
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
            };

            class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp5_silencerShot_SoundSet", "mp5_silencerTail_SoundSet" };
            };

            __ROF(800);
            dispersion = 0.00093;

            //AI
            __AI_ROF_SMG_FULLAUTO;
        };

    };

    class hlc_smg_mp5k_PDW : hlc_Mp5_base
    {
        scope = public;
        recoil = "recoil_mp5k";
        AB_barrelTwist=10;
        AB_barrelLength=4.5;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 114.3;
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5kpdw\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5K";
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp5k_reload", 0.7, 1, 20 };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5kpdw_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Stock", "Foregrip", "Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\fas_mp5\handguard_co.tga", "hlc_wp_mp5\tex\thanez_mp5k\forek_co.tga", "hlc_wp_mp5\tex\emdg_mp5sd\rail_co.tga" };
        displayName = $STR_NIA_MP5K-PDW;
        discretedistance[] = {50};
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5k.rtm"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 50;
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.4, 0.2 };
                iconScale = 0.2;
            };
            class MuzzleSlot: MuzzleSlot {
                iconPosition[] = { 0.05, 0.35 };
                iconScale = 0.2;
            };
           
        };
        inertia = 0.20;
		__DEXTERITY(2.5,1);

        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };

        // inherit modes from base
        class Single: Single
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5k_Shot_SoundSet", "mp5k_tail_SoundSet" };
            };
            __ROF(900);
        };

        class Burst: Burst
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5k_Shot_SoundSet", "mp5k_tail_SoundSet" };
            };
            __ROF(900);
        };

        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5k_Shot_SoundSet", "mp5k_tail_SoundSet" };
            };
            __ROF(900);
        };

        class Library
        {
            libTextDesc = "Heckler und Koch GMBH MP5K PDW";
        };
    };

    class hlc_smg_mp5k: hlc_smg_mp5k_PDW
    {
        recoil = "recoil_mp5k";
        AB_barrelTwist=10;
        AB_barrelLength=4.5;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 114.3;
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5k\mp5.p3d";
        type = 2;
        reloadaction = "HLC_GestureReloadMP5K_pistol";
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5k_pistol.rtm"};
        displayName = $STR_NIA_MP5K;
        discretedistance[] = {50};
        discretedistanceinitindex = 0;
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5k_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Stock", "Foregrip", "Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.tga", "hlc_wp_mp5\tex\thanez_mp5k\buttk_co.tga", "hlc_wp_mp5\tex\thanez_mp5k\forek_co.tga", "hlc_wp_mp5\tex\emdg_mp5sd\rail_co.tga"};
        modes[] = {"Single","FullAuto"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 40;
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.5, 0.25 };
                iconScale = 0.2;
            };
            class MuzzleSlot: MuzzleSlot {
                iconPosition[] = { 0.2, 0.3 };
                iconScale = 0.2;
            };
      
        };
        inertia = 0.15;
		__PDEXTERITY(2.0,1);
    };

    class hlc_smg_mp5a2 : hlc_Mp5_base
    {
        scope = public;
        recoil = "recoil_mp5a2";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5a2\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5a2_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Stock","Foregrip", "Rail", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga",  "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga" };
        displayName = $STR_NIA_MP5A2;
        discretedistance[] = {50,100,150,200};
        discretedistanceinitindex = 0;
        /*cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        */
        bg_bipod = 0;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm" };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 50;
            class PointerSlot: niarms_mp5_frontsiderail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.35 };
                iconScale = 0.2;
            };
       
        };
        inertia = 0.25;
		__DEXTERITY(2.5,0);

        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };

        modes[] = {"Single","FullAuto"};

        class Library
        {
            libTextDesc = "Heckler und Koch GMBH Mp5A2";
        };
    };
    class hlc_smg_mp5A2_Sfire : hlc_smg_mp5a2
    {
        author = "Krycek,arby26,Toadie";
        dlc = "Niarms_MP5";
        displayname = $STR_NIA_MP5A2_Sfire;
        baseWeapon = "hlc_smg_mp5N_tac";
        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "CowsSlot";
                item = "hlc_acc_Surefiregrip";
            };
        };
    };
    class hlc_smg_mp5a2_tac :hlc_smg_mp5a2
    {
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5a2\mp5_tac.p3d";
        displayName = $STR_NIA_MP5A2_TAC;
        rhs_grip1_change = "hlc_smg_mp5a2_grip";
        rhs_grip2_change = "hlc_smg_mp5a2_grip2";
        rhs_grip3_change = "hlc_smg_mp5a2_grip3";
        baseWeapon = "hlc_smg_mp5a2_tac";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 58;
            class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG {
                iconPosition[] = { 0.0, 0.35 };
                iconScale = 0.2;
                class compatibleItems : compatibleItems {
                    hlc_muzzle_Agendasix = 1;
                };
            };
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };
            class Underslot {};
            class Charmslot {};
            class GripodSlot : nia_rifle_grips_slot {};

        };
    };
    class hlc_smg_MP5a2_grip : hlc_smg_mp5a2_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.25 + 0.66), 1);
    };
    class hlc_smg_MP5a2_grip2 : hlc_smg_mp5a2_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_AFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.25 + 0.66), 1);
    };
    class hlc_smg_MP5a2_grip3 : hlc_smg_mp5a2_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.25 + 0.66), 1);
    };
    class hlc_smg_MP5N : hlc_Mp5_base {
        scope = public;
        recoil = "recoil_mp5a3";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5n\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5n_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Foregrip", "Stock", "Rail", "Quad1", "Quad2", "Panel" };
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.tga", "hlc_wp_mp5\tex\krycek_mp5\fab_co.tga", "hlc_wp_mp5\tex\krycek_mp5\fab_co.tga","hlc_wp_mp5\tex\rails_co.tga" };
        displayName = $STR_NIA_MP5A5;
        discretedistance[] = {50,100,150,200};
        /*
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing*/
        discretedistanceinitindex = 1;
        bg_bipod = 0;
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm"};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 65;
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.3 };
                iconScale = 0.2;
            };
            class PointerSlot : niarms_mp5_frontsiderail {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };

        };
        inertia = 0.33;
		__DEXTERITY(3.25,0);

        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };

        class Library
        {
            libTextDesc = "Heckler und Koch GMBH Mp5N";
        };
    };
    class hlc_smg_mp5N_tac :hlc_smg_MP5N
    {
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5n\mp5_tac.p3d";
        displayName = $STR_NIA_MP5A5_TAC;
        rhs_grip1_change = "hlc_smg_mp5N_grip";
        rhs_grip2_change = "hlc_smg_mp5N_grip2";
        rhs_grip3_change = "hlc_smg_mp5N_grip3";
        baseWeapon = "hlc_smg_mp5N_tac";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 58;
            class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG {
                iconPosition[] = { 0.0, 0.35 };
                iconScale = 0.2;
                class compatibleItems : compatibleItems {
                    hlc_muzzle_Agendasix = 1;
                };
            };
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };
            class Underslot {};
            class GripodSlot : nia_rifle_grips_slot {};
            class Charmslot {};
        };
    };
    class hlc_smg_MP5N_grip : hlc_smg_mp5N_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.25 + 0.66), 1);
    };
    class hlc_smg_MP5N_grip2 : hlc_smg_mp5N_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_AFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.25 + 0.66), 1);
    };
    class hlc_smg_MP5N_grip3 : hlc_smg_mp5N_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.25 + 0.66), 1);
    };
    class UGL_F;
    class hlc_smg_9mmar : hlc_smg_MP5N
    {
        scope = public;
        recoil = "recoil_mp5a3";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Krycek, Tigg, Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\9mmar\9mmar.p3d";
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Stock", "Rail", "M203", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga","hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.tga", "hlc_wp_mp5\tex\tigg_m203\m203_co.paa", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga" };
        handanim[] = {"OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_9mmar.rtm"};
        displayName = $STR_NIA_9mmar;
        discretedistance[] = {50,100,150,200};
        /*cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;*/
        bg_bipod = 0;

        class Single: Single
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
            };
            __ROF(700);
        };

        class Burst: Burst
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
            };
            __ROF(700);
        };

        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
            };
            __ROF(700);
        };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 85;
            class MuzzleSlot{};
            class PointerSlot{};
        };
        baseWeapon = "hlc_smg_9mmar";
        inertia = 0.63;
		__DEXTERITY(3.25 + 1,0);

        muzzles[] = {"this", "hlc_M203_Mp5"};
        class hlc_M203_Mp5 : UGL_F {
            cameradir = "gl_look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350 };
            discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203A1";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            reloadAction = "HLC_GestureReloadGL5040";
            reloadMagazineSound[] = { "hlc_core\sound\GL\M203_reload", 1.0, 1, 10 };
            drySound[] = { "hlc_core\sound\GL\GL_drystrike", 1, 1, 10 };
            cursoraim = "gl";
            magazinereloadtime = 0;
            reloadtime = 0.1;
            sounds[] = { "StandardSound"};
            class Single : Mode_SemiAuto {
                sounds[] = { "StandardSound" };
                class StandardSound {
                    weaponSoundEffect = "DefaultRifle";
                    closure1[] = { "hlc_core\sound\GL\GL_striker", 1, 1, 10 };
                    closure2[] = { "hlc_core\sound\GL\GL_striker", 1, 1, 10 };
                    soundClosure[] = { closure1, 0.5, closure2, 0.5 };
                    soundSetShot[] = { "NIA_GL_Shot_SoundSet", "NIA_GL_Tail_SoundSet" };
                };
                recoil = "M240Recoil";
                recoilProne = "M240Recoil";
                __AI_ROF_GL_SINGLE;
            };
        };
    };

    class hlc_smg_mp5a4 : hlc_Mp5_base
    {
        scope = public;
        recoil = "recoil_mp5a2";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5a4\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5a4_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Foregrip", "Stock", "Rail", "Quad1", "Quad2", "Panel" };
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.tga", "hlc_wp_mp5\tex\krycek_mp5\fab_co.tga", "hlc_wp_mp5\tex\krycek_mp5\fab_co.tga", "hlc_wp_mp5\tex\rails_co.tga" };
        displayName = $STR_NIA_MP5A4;
        discretedistance[] = {50,100,150,200};
        //cameradir = "look_out";
        //discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm" };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 58;
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : niarms_mp5_frontsiderail {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };
      
        };
        inertia = 0.29;
		__DEXTERITY(2.9,0);

        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };

        class Library
        {
            libTextDesc = "Heckler und Koch GMBH Mp5A4";
        };
    };
    class hlc_smg_mp5a4_tac :hlc_smg_mp5a4
    {
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5a4\mp5_tac.p3d";
        displayName = $STR_NIA_MP5A4_TAC;
        rhs_grip1_change = "hlc_smg_mp5a4_grip";
        rhs_grip2_change = "hlc_smg_mp5a4_grip2";
        rhs_grip3_change = "hlc_smg_mp5a4_grip3";
        baseWeapon = "hlc_smg_mp5a4_tac";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 58;
            class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG {
                iconPosition[] = { 0.0, 0.35 };
                iconScale = 0.2;
                class compatibleItems : compatibleItems {
                    hlc_muzzle_Agendasix = 1;
                };
            };
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };
            class Underslot {};
            class GripodSlot : nia_rifle_grips_slot {};
            class Charmslot {};
        };
    };
    class hlc_smg_mp5a4_grip : hlc_smg_mp5a4_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.29 + 0.066);
        __DEXTERITY((2.90 + 0.66), 1);
    };
    class hlc_smg_mp5a4_grip2 : hlc_smg_mp5a4_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_AFG.rtm" };
        inertia = (0.29 + 0.066);
        __DEXTERITY((2.90 + 0.66), 1);
    };
    class hlc_smg_mp5a4_grip3 : hlc_smg_mp5a4_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.29 + 0.066);
        __DEXTERITY((2.90 + 0.66), 1);
    };
    class hlc_smg_mp510 :hlc_smg_MP5N
    {
        recoil = "recoil_mp5a2";
        AB_barrelTwist=15;
        AB_barrelLength=9;
        ACE_barrelTwist = 381.0;
        ACE_barrelLength = 228.6;
        author = "Twinke Masta, Geno,Toadie, Christian Øelund";
        dlc = "Niarms_MP5";
        magazines[] = {"hlc_30Rnd_10mm_B_MP5","hlc_30Rnd_10mm_JHP_MP5"};
        magazineWell[] = { "CBA_10x25_MP5" };
        model = "\hlc_wp_Mp5\mesh\mp510\mp510.p3d";
        reloadaction = "HLC_GestureReloadMP510";
        reloadmagazinesound[] = { "\hlc_wp_MP5\snd\mp510_reload_empty", 0.7, 1, 20 };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp510_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Foregrip", "Stock", "Rail", "Quad1", "Quad2", "Panel" };
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\geno_twinke_mp5\rec40_co.tga", "hlc_wp_mp5\tex\geno_twinke_mp5\navy_co.tga", "hlc_wp_mp5\tex\geno_twinke_mp5\fore_co.tga", "hlc_wp_mp5\tex\geno_twinke_mp5\fullstock_co.tga", "hlc_wp_mp5\tex\emdg_mp5sd\rail_co.tga", "hlc_wp_mp5\tex\krycek_mp5\fab_co.tga", "hlc_wp_mp5\tex\thanez_mp5\rails_co.tga", "hlc_wp_mp5\tex\rails_co.tga" };
        displayName = $STR_NIA_MP510;
        descriptionShort = $STR_NIA_MP510_DESC;
        discretedistance[] = {50,100,150,200};
        cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm" };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 57;
            class MuzzleSlot: asdg_MuzzleSlot_45ACP_SMG {
                class compatibleItems: compatibleItems {
                    hlc_muzzle_Agendasix10mm = 1;
                };
                iconPosition[] = { 0.0, 0.25 };
                iconScale = 0.2;
            };
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.15 };
                iconScale = 0.2;
            };
            class PointerSlot : niarms_mp5_frontsiderail {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };
       
        };
        inertia = 0.29;
		__DEXTERITY(2.85,0);

        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };

        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp510_Shot_SoundSet", "mp510_tail_SoundSet" };
            };

            class SilencedSound: SilencedSound /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp510_silencerShot_SoundSet", "mp510_silencerTail_SoundSet" };
            };
        };

        class Single: Single
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp510_Shot_SoundSet", "mp510_tail_SoundSet" };
            };

            class SilencedSound: SilencedSound /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp510_silencerShot_SoundSet", "mp510_silencerTail_SoundSet" };
            };
        };

        class Burst: Burst
        {
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp510_Shot_SoundSet", "mp510_tail_SoundSet" };
            };

            class SilencedSound: SilencedSound /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "mp510_silencerShot_SoundSet", "mp510_silencerTail_SoundSet" };
            };
        };

    };
    class hlc_mp510_tac : hlc_smg_mp510 {
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp510\mp510_tac.p3d";
        displayName = $STR_NIA_MP510_TAC;
        rhs_grip1_change = "hlc_smg_mp510_grip";
        rhs_grip2_change = "hlc_smg_mp510_grip2";
        rhs_grip3_change = "hlc_smg_mp510_grip3";
        baseWeapon = "hlc_mp510_tac";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 58;
            class MuzzleSlot : asdg_MuzzleSlot_45ACP_SMG {
                class compatibleItems : compatibleItems {
                    hlc_muzzle_Agendasix10mm = 1;
                };
                iconPosition[] = { 0.0, 0.25 };
                iconScale = 0.2;
            };
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };
            class Underslot {};
            class GripodSlot : nia_rifle_grips_slot {};
            class Charmslot {};
        };
    };
    class hlc_smg_mp510_grip : hlc_mp510_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.285 + 0.066);
        __DEXTERITY((2.90 + 0.66), 1);
    };
    class hlc_smg_mp510_grip2 : hlc_mp510_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_AFG.rtm" };
        inertia = (0.285 + 0.066);
        __DEXTERITY((2.90 + 0.66), 1);
    };
    class hlc_smg_mp510_grip3 : hlc_mp510_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.285 + 0.066);
        __DEXTERITY((2.90 + 0.66), 1);
    };
    class hlc_smg_mp5sd5 : hlc_Mp5_base
    {
        scope = public;
        recoil = "recoil_mp5a2";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        fireLightDuration = 0;
        fireLightIntensity = 0;
        model = "\hlc_wp_Mp5\mesh\mp5sd5\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd5_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Stock", "Rail"};
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga","hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.tga"};
        displayName = $STR_NIA_MP5SD5;
        initspeed = 285;
        discretedistance[] = {50,100,150,200};
        //cameradir = "look_out";
        //discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        discretedistanceinitindex = 0;
        bg_bipod = 0;
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm" };

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 62;
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.35 };
                iconScale = 0.2;
            };
            class MuzzleSlot {};
       
        };
        inertia = 0.31;
		__DEXTERITY(3.1,0);

        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };

        class FullAuto: FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5sd_silencerShot_SoundSet", "mp5sd_silencerTail_SoundSet" };
            };
        };

        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5sd_silencerShot_SoundSet", "mp5sd_silencerTail_SoundSet" };
            };
        };

        class Burst: Burst
        {
            sounds[] = {"StandardSound"};
            class StandardSound: StandardSound /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "mp5sd_silencerShot_SoundSet", "mp5sd_silencerTail_SoundSet" };
            };
        };
    };

    class hlc_smg_mp5a3: hlc_smg_mp5a2
    {
        scope = public;
        recoil = "recoil_mp5a3";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5a3\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5a3_x_ca";
        hiddenSelections[] = { "Reciever", "FCG", "Stock", "Foregrip", "Rail", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga" };
        displayName = $STR_NIA_MP5A3;
        discretedistance[] = {50,100,150,200};
        discretedistanceinitindex = 0;
        /*cameradir = "look_out";
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        */
        bg_bipod = 0;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 62;
        };
        inertia = 0.31;
		__DEXTERITY(3.1,0);
    };
    class hlc_smg_mp5a3_tac :hlc_smg_mp5a2
    {
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5a3\mp5_tac.p3d";
        displayName = $STR_NIA_MP5A3_TAC;
        rhs_grip1_change = "hlc_smg_mp5a3_grip";
        rhs_grip2_change = "hlc_smg_mp5a3_grip2";
        rhs_grip3_change = "hlc_smg_mp5a3_grip3";
        baseWeapon = "hlc_smg_mp5a3_tac";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 58;
            class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG {
                iconPosition[] = { 0.0, 0.35 };
                iconScale = 0.2;
                class compatibleItems : compatibleItems {
                    hlc_muzzle_Agendasix = 1;
                };
            };
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[] = { 0.45, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.35 };
                iconScale = 0.25;
            };
            class Underslot {};
            class GripodSlot : nia_rifle_grips_slot {};
            class Charmslot  {};
        };
    };
    class hlc_smg_MP5a3_grip : hlc_smg_mp5a3_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.31 + 0.066);
        __DEXTERITY((3.1 + 0.66), 1);
    };
    class hlc_smg_MP5a3_grip2 : hlc_smg_mp5a3_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_AFG.rtm" };
        inertia = (0.31 + 0.066);
        __DEXTERITY((3.1 + 0.66), 1);
    };
    class hlc_smg_MP5a3_grip3 : hlc_smg_mp5a3_tac
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\gesture_mp5_vFG.rtm" };
        inertia = (0.31 + 0.066);
        __DEXTERITY((3.1 + 0.66), 1);
    };
    class hlc_smg_mp5sd6 : hlc_smg_mp5sd5
    {
        scope = public;
        recoil = "recoil_mp5a3";
        AB_barrelTwist=10;
        AB_barrelLength=9;
        ACE_barrelTwist = 254.0;
        ACE_barrelLength = 228.6;
        author = "Krycek,Toadie";
        dlc = "Niarms_MP5";
        model = "\hlc_wp_Mp5\mesh\mp5sd6\mp5.p3d";
        reloadaction = "HLC_GestureReloadMP5";
        handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_mp5\gesture\newgest\mp5_handgesture.rtm" };
        picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
                hiddenSelections[] = { "Reciever", "FCG", "Stock", "Rail"};
        hiddenSelectionsTextures[] = { "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga","hlc_wp_mp5\tex\krycek_mp5\mp5_co.tga", "hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.tga"};
        displayName = $STR_NIA_MP5SD6;
        discretedistance[] = {50,100,150,200};
        discretedistanceinitindex = 0;
        //cameradir = "look_out";
        /*
        discreteDistanceCameraPoint[] = {"Eye", "Eye2", "Eye3", "Eye4"}; /// the angle of gun changes with zeroing
        */
        bg_bipod = 0;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 68;
        };
        inertia = 0.34;
		__DEXTERITY(3.4,0);
    };

};