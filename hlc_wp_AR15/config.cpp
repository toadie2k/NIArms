#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_ar15 {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = { "HLC_AR_ammobox", "Weapon_hlc_rifle_RU556","Weapon_hlc_rifle_RU5562","Weapon_hlc_rifle_Colt727","Weapon_hlc_rifle_Colt727_GL","Weapon_hlc_rifle_SAMR",
            "Weapon_hlc_rifle_SAMR2","Weapon_hlc_rifle_CQBR","Weapon_hlc_rifle_M4","Weapon_hlc_rifle_m4m203","Weapon_hlc_rifle_bcmjack","Weapon_hlc_rifle_Bushmaster300","Weapon_hlc_rifle_vendimus","Weapon_hlc_rifle_honeybadger" };
        weapons[] = {"hlc_rifle_RU556","hlc_rifle_RU5562","hlc_rifle_Colt727","hlc_rifle_bcmjack","hlc_rifle_Colt727_GL","hlc_rifle_Bushmaster300","hlc_rifle_vendimus","hlc_rifle_SAMR","hlc_rifle_honeybadger","hlc_rifle_honeybase"};
        magazines[] = {"29rnd_300BLK_STANAG","29rnd_300BLK_STANAG_T","29rnd_300BLK_STANAG_S"};
        version="1.85";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;

    class Niarms_AR15 : Mod_Base {
        name = "NIArsenal: AR15 Rifles";
        picture = "hlc_wp_ar15\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_ar15\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_ar15\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_ar15\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_UnderSlot;

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_300blk_KAC = 1;
    };
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot { // for 5.56x45 universal mount suppressors
    class compatibleItems {
        hlc_muzzle_556NATO_KAC = 1;
    };
};

class CfgVehicles {
    class NATO_Box_Base;
    class Weapon_Base_F;

    class HLC_AR_ammobox : NATO_Box_Base {
        dlc = "Niarms_AR15";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AR15 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(29rnd_300BLK_STANAG,60);
            __M_MAG(29rnd_300BLK_STANAG_T,60);
            __M_MAG(29rnd_300BLK_STANAG_S,60);
            __M_MAG(30Rnd_556x45_Stanag,60);
            __M_MAG(hlc_30rnd_556x45_EPR,60);
            __M_MAG(hlc_30rnd_556x45_SOST,60);
            __M_MAG(hlc_30rnd_556x45_SPR,60);
            __M_MAG(hlc_50rnd_556x45_EPR,60);
            __M_MAG(30Rnd_556x45_Stanag_Tracer_Red,60);
            __M_MAG(30Rnd_556x45_Stanag_Tracer_Green,60);
            __M_MAG(1Rnd_HE_Grenade_shell,60);
            __M_MAG(UGL_FlareWhite_F,60);
            __M_MAG(UGL_FlareGreen_F,60);
            __M_MAG(UGL_FlareRed_F,60);
            __M_MAG(UGL_FlareYellow_F,60);
            __M_MAG(UGL_FlareCIR_F,60);
            __M_MAG(1Rnd_Smoke_Grenade_shell,60);
            __M_MAG(1Rnd_SmokeRed_Grenade_shell,60);
            __M_MAG(1Rnd_SmokeGreen_Grenade_shell,60);
            __M_MAG(1Rnd_SmokeYellow_Grenade_shell,60);
            __M_MAG(1Rnd_SmokePurple_Grenade_shell,60);
            __M_MAG(1Rnd_SmokeBlue_Grenade_shell,60);
        };

        class TransportWeapons {
            __M_WEP(hlc_rifle_RU556,30);
            __M_WEP(hlc_rifle_RU5562,30);
            __M_WEP(hlc_rifle_bcmjack,30);
            __M_WEP(hlc_rifle_Colt727,30);
            __M_WEP(hlc_rifle_Colt727_GL,30);
            __M_WEP(hlc_rifle_M4,30);
            __M_WEP(hlc_rifle_m4m203,30);
            __M_WEP(hlc_rifle_cqbr,30);
            __M_WEP(hlc_rifle_Bushmaster300,30);
            __M_WEP(hlc_rifle_vendimus,30);
            __M_WEP(hlc_rifle_SAMR,30);
            __M_WEP(hlc_rifle_honeybadger,30);
        };

        class TransportItems {
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_Arco,10);
            __M_ITM(optic_LRPS,10);
            __M_ITM(optic_NVS,10);
            __M_ITM(hlc_muzzle_556NATO_KAC,10);
            //__M_ITM(hlc_muzzle_300blk_KAC,10);
            __M_ITM(muzzle_HBADGER,10);
            __M_ITM(acc_flashlight,10);
            __M_ITM(acc_pointer_IR,10);
        };
    };

    class Weapon_hlc_rifle_RU556 : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR15 Sanitised Carbine";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_RU556";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_RU5562 : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR15 Magpul Carbine";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_RU5562";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_Colt727 : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "Colt Carbine";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_Colt727";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_Colt727_GL : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "Colt Carbine+M203";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_Colt727_GL";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_SAMR : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "LAR15 AMR";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_SAMR";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_SAMR2 : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "LAR15 AMR(Alt)";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_samr2";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_CQBR : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "Colt CQB-R";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_CQBR";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_M4 : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "Colt M4";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_M4";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_m4m203 : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "Colt M4+M203";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_m4m203";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_bcmjack : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "BCM 'Jack' Carbine";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_bcmjack";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "hlc_30rnd_556x45_EPR";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_Bushmaster300 : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "Buchmaster .300BLK Carbine";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_Bushmaster300";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "29rnd_300BLK_STANAG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_vendimus : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR15 .300 Dissipator";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_vendimus";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "29rnd_300BLK_STANAG";
                count = 1;
            };
        };
    };
    class Weapon_hlc_rifle_honeybadger : Weapon_Base_F {
        dlc = "Niarms_AR15";
        scope = 2;
        scopeCurator = 2;
        displayName = "AAC Honeybadger";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons {
            class srifle_EBR_F {
                weapon = "hlc_rifle_honeybadger";
                count = 1;
            };
        };
        class TransportMagazines {
            class 20Rnd_762x51_Mag {
                magazine = "29rnd_300BLK_STANAG";
                count = 1;
            };
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_30rnd_556x45_EPR : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AR15";
        model = "hlc_wp_ar15\mesh\magazine\magazine_556.p3d";
    };
    class hlc_30rnd_556x45_SOST: 30Rnd_556x45_Stanag {
        dlc = "Niarms_AR15";
        model = "hlc_wp_ar15\mesh\magazine\magazine_556.p3d";
    };
    class hlc_30rnd_556x45_SPR: 30Rnd_556x45_Stanag {
        dlc = "Niarms_AR15";
        model = "hlc_wp_ar15\mesh\magazine\magazine_556.p3d";
    };
    class 29rnd_300BLK_STANAG : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AR15";
        author = "Toadie";
        ammo = "HLC_300Blackout_Ball";
        count = 30;
        descriptionshort = "Caliber: .300 AAC Blackout <br />Rounds: 30<br />Used in: AAC Honeybadger, Bushmaster .300 Carbine";
        displayname = ".300 BLK STANAG Magazine (147gr. FMJ) 30rnd";
        model = "hlc_wp_ar15\mesh\magazine\magazine_300.p3d";
        initspeed = 548.64;
        lastroundstracer = 1;
        tracersevery = 0;
        displaynameshort = ".300 FMJ";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_fmj_ca.paa";
    };
    class 29rnd_300BLK_STANAG_T : 29rnd_300BLK_STANAG {
        dlc = "Niarms_AR15";
        author = "Toadie";
        descriptionshort = "Caliber: .300 AAC Blackout <br />Rounds: 30<br />Used in: AAC Honeybadger, Bushmaster .300 Carbine";
        displayname = ".300 BLK STANAG Magazine (Tracers) 30rnd";
        initspeed = 548;
        lastroundstracer = 1;
        tracersevery = 1;
        displaynameshort = ".300 Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_tracer_ca.paa";
    };
    class 29rnd_300BLK_STANAG_S : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AR15";
        author = "Toadie";
        ammo = "HLC_300Blackout_SMK";
        count = 30;
        descriptionshort = "Caliber: .300 AAC Blackout 220Gr Subsonic <br />Rounds: 30<br />Used in: AAC Honeybadger, Bushmaster .300 Carbine";
        displayname = ".300 BLK STANAG Magazine (SubSonic) 30rnd .300 BLK";
        model = "hlc_wp_ar15\mesh\magazine\magazine_300.p3d";
        initspeed = 320;
        lastroundstracer = 0;
        displaynameshort = ".300 Subsonic";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_sub_ca.paa";
    };
};

class CfgWeapons {

//muzzles

    class muzzle_snds_H;
    class hlc_muzzle_300blk_KAC : muzzle_snds_H {
        scope = 1;
        dlc = "Niarms_AR15";
        author = "ImBrokeRU, Toadie";
        displayName = "QD .300BLK Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_ar15\mesh\KAC556QD\762.p3d";
    };
    class muzzle_HBADGER: muzzle_snds_H {
        dlc = "Niarms_AR15";
        displayName = "Honeybadger Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
        model = "hlc_wp_ar15\mesh\hb_sil\hbsil.p3d";
    };

    class muzzle_snds_M;
    class hlc_muzzle_556NATO_KAC : muzzle_snds_M {
        dlc = "Niarms_AR15";
        author = "Toadie";
        displayName = "Gemtech Halo 5.56mm Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_ar15\mesh\KAC556QD\kacqd.p3d";
    };

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;

    class hlc_ar15_base : Rifle_Base_F {
        inertia= 0.35;
        magazineReloadSwitchPhase = 0.5;
        scope = protected;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 292.1;
        aidispersioncoefx = 4;
        aidispersioncoefy = 6;
        magazines[] = { __556STANAG_MAGS, __556STANAG_BI_MAGS, __556NATO_BI_DRUMS };
        class Library {
            libTextDesc = "AR15";
        };
        reloadAction = "HLC_GestureReloadAK";
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles: GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass =33;
        };
        opticszoominit = 0.75;
        opticszoommax = 1.1;
        opticszoommin = 0.25;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
        changeFiremodeSound[] = { "\hlc_wp_ar15\snd\ar15_selector", 1, 1, 8 };
        handAnim[] = {"OFP2_ManSkeleton", "hlc_core\animation\oldgesture\ak74_hands.rtm"};

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
        modes[] = {"Single","FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
        class Single : Mode_SemiAuto {
                sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[]={"\hlc_wp_ar15\snd\car15_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_ar15\snd\car15_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_ar15\snd\car15_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[]={"\hlc_wp_ar15\snd\m4_Suppressed", 1, 1,200};
                begin2[]={"\hlc_wp_ar15\snd\m4_Suppressed", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
            reloadTime = 0.086;
            dispersion = 0.000333358;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto: Mode_FullAuto {
            reloadTime = 0.086;
            dispersion = 0.000333358;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
                sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

             class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                begin1[]={"\hlc_wp_ar15\snd\car15_fire", 1, 1,1200};
                begin2[]={"\hlc_wp_ar15\snd\car15_fire", 1, 1,1200};
                begin3[]={"\hlc_wp_ar15\snd\car15_fire", 1, 1,1200};
                soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                begin1[]={"\hlc_wp_ar15\snd\m4_Suppressed", 1, 1,200};
                begin2[]={"\hlc_wp_ar15\snd\m4_Suppressed", 1, 1,200};
                soundBegin[]={begin1,0.5, begin2,0.5};
            };
        }; 

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        drysound[] = {"\hlc_wp_ar15\snd\ar15_trigger", 1, 1, 10};
        reloadMagazineSound[] = {"\hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};

        class hlc_M203 : UGL_F {
            cameraDir = "gl_look";
            discreteDistance[] = { 100, 150, 200, 250, 300 };
            discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m" };
            discreteDistanceInitIndex = 1;
            displayname = "M203";
            useModelOptics = false;
            useExternalOptic = false;
            reloadAction = "GestureReloadTrgUGL";
            cursoraim = "gl";
        };
   };

    class hlc_rifle_RU556 : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        magazineReloadSwitchPhase = 0.5;
        AB_barrelTwist=7;
        AB_barrelLength=10.3;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 261.62;
        aiDispersionCoefY = 6.0;
        aiDispersionCoefX = 4.0;
        inertia= 0.4;
        author = "ImBrokeRU, Antivirus404, RedRogueXVII, Tigg, Brains Collector, Toadie";
        reloadAction = "HLC_GestureReloadAR15_BAD_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\ru556\car15.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_hsld_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "AR15 Sanitised Carbine";
        descriptionShort = "Short-Barreled Rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15c_reload",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "\hlc_wp_ar15\gesture\newgesture\bad_hands.rtm"
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 57;
            class CowsSlot: asdg_OpticRail1913 {};
            class PointerSlot: asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_556{};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Mode_SemiAuto {
                sounds[] = {"StandardSound","SilencedSound"};

             class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "sbr_Shot_SoundSet", "sbr_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "sbr_silencerShot_SoundSet", "sbr_silencerTail_SoundSet" };
            };
            reloadTime = 0.075;
            dispersion = 0.000347248;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto: Mode_FullAuto {
                sounds[] = {"StandardSound","SilencedSound"};

             class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "sbr_Shot_SoundSet", "sbr_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "sbr_silencerShot_SoundSet", "sbr_silencerTail_SoundSet" };
            };
            reloadTime = 0.075;
            dispersion = 0.000347248;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Sanitised AR-15 SBR";
        };
    };
    class hlc_rifle_RU5562 : hlc_rifle_RU556 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.4;
        AB_barrelTwist=7;
        AB_barrelLength=10.3;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 261.62;
        aiDispersionCoefY = 6.0;
        aiDispersionCoefX = 4.0;
        author = "ImBrokeRU, 4Echo, RedRogueXVII, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_BAD_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\ru556\car15_2.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_hsld2_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "AR15 Magpul Carbine";
        descriptionShort = "Short-Barreled Rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15c_reload",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "\hlc_wp_ar15\gesture\newgesture\bad_hands.rtm"
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 58;
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Mode_SemiAuto {
                sounds[] = {"StandardSound","SilencedSound"};

             class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "sbr_Shot_SoundSet", "sbr_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "sbr_silencerShot_SoundSet", "sbr_silencerTail_SoundSet" };
            };
            reloadTime = 0.075;
            dispersion = 0.000347248;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto: Mode_FullAuto {
                sounds[] = {"StandardSound","SilencedSound"};

             class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "sbr_Shot_SoundSet", "sbr_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "sbr_silencerShot_SoundSet", "sbr_silencerTail_SoundSet" };
            };
            reloadTime = 0.075;
            dispersion = 0.000347248;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class Library {
            libTextDesc = "Sanitised AR-15 SBR";
        };
    };
    class hlc_rifle_CQBR : hlc_rifle_RU556 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.39;
        AB_barrelTwist=7;
        AB_barrelLength=10;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 254.0;
        author = "Tenoyl, OhNoMelon, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\cqbr\cqbr.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_cqbr_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Colt M4 CQB-R";
        descriptionShort = "Short-Barreled Rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\samr_hands.rtm"
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 54;
            class UnderBarrelSlot: asdg_UnderSlot {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Mode_SemiAuto {
                sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "sbr_Shot_SoundSet", "sbr_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "sbr_silencerShot_SoundSet", "sbr_silencerTail_SoundSet" };
            };
            reloadTime = 0.075;
            dispersion = 0.000347248;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto : Mode_FullAuto {
                sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "sbr_Shot_SoundSet", "sbr_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "sbr_silencerShot_SoundSet", "sbr_silencerTail_SoundSet" };
            };
            reloadTime = 0.074;
            dispersion = 0.000347248;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class Library {
            libTextDesc = "Sanitised AR-15 SBR";
        };
    };

    class hlc_rifle_M4 : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.42;
        AB_barrelTwist=7;
        AB_barrelLength=14.5;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        author = "Tenoyl, OhNoMelon, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\cqbr\M4A1.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_m4_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Colt M4 Carbine";
        descriptionShort = "Carbine<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\samr_hands.rtm"
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 58;
            class UnderBarrelSlot : asdg_UnderSlot {};
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_556{};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Mode_SemiAuto {
                sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "carbine_Shot_SoundSet", "carbine_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "carbine_silencerShot_SoundSet", "carbine_silencerTail_SoundSet" };
            };
            reloadTime = 0.067;
            dispersion = 0.000347248;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

             class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "carbine_Shot_SoundSet", "carbine_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "carbine_silencerShot_SoundSet", "carbine_silencerTail_SoundSet" };
            };
            reloadTime = 0.079;
            dispersion = 0.000347248;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Sanitised AR-15 SBR";
        };
    };
    class hlc_rifle_m4m203 : hlc_rifle_m4 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Tenoyl, OhNoMelon, Tigg, Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_ar15\gesture\newgesture\gl_hands.rtm" };
        model = "hlc_wp_ar15\mesh\cqbr\M4A1M203.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_m4_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Colt M4 Carbine (GL)";
        descriptionShort = "Carbine<br/>Caliber: 5.56mm";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 78;
            class UnderBarrelSlot {};
        };
        muzzles[] = { "this", "hlc_M203" };
    };
    class hlc_rifle_bcmjack : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.4;
        AB_barrelTwist=7;
        AB_barrelLength=14.5;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        author = "Twinke Masta, Tenoyl, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\JackCarbine\samr.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_jack_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "BCM 'Jack' Carbine";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
    
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\jack_hands.rtm"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 58;
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
            class PointerSlot : asdg_FrontSideRail {};
            class CowsSlot : asdg_OpticRail1913 {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\jack_carbine_first", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\jack_carbine_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

             class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "jack_Shot_SoundSet", "jack_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "jack_silencerShot_SoundSet", "jack_silencerTail_SoundSet" };
            };
            reloadTime = 0.078;
            dispersion = 0.0001309;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\jack_carbine_first", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\jack_carbine_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "jack_Shot_SoundSet", "jack_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "jack_silencerShot_SoundSet", "jack_silencerTail_SoundSet" };
            };
            reloadTime = 0.078;
            dispersion = 0.0001309;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "BCM Jack Carbine";
        };
    };
    class hlc_rifle_Colt727 : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist=7;
        AB_barrelLength=14.5;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        inertia= 0.39;
        author = "Twinke Masta, Stoke, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\carbine\colt727.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_colt727_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Colt Carbine";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500, 600};
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};

        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\carbine_hands.rtm"
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 50;
            class CowsSlot: asdg_OpticRail1913 {};
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
            class PointerSlot {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "carbine_Shot_SoundSet", "carbine_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "carbine_silencerShot_SoundSet", "carbine_silencerTail_SoundSet" };
            };
            reloadTime = 0.079;
            dispersion = 0.000333358;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "carbine_Shot_SoundSet", "carbine_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "carbine_silencerShot_SoundSet", "carbine_silencerTail_SoundSet" };
            };
            reloadTime = 0.079;
            dispersion = 0.000333358;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Library {
            libTextDesc = "Colt Model 727 Carbine";
        };
    };
    class hlc_rifle_Colt727_GL : hlc_rifle_Colt727 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.47;
        AB_barrelTwist=7;
        AB_barrelLength=14.5;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        author = "Twinke Masta, Stoke, Tigg, Toadie";
        scope= public;
        model = "hlc_wp_ar15\mesh\carbinegl\colt727_gl.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_colt727gl_ca";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_ar15\gesture\newgesture\gl_hands.rtm"};
        displayName = "Colt Carbine(GL)";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56mm";
        muzzles[] = {"this", "hlc_M203"};
        bg_bipod = 0; 
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 78;
        };
        class hlc_M203 : hlc_M203 {
           discreteDistance[] = { 50, 100, 150, 200, 250 };
        };
    };

    class hlc_rifle_Bushmaster300 : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.45;
        AB_barrelTwist=8;
        AB_barrelLength=14.5;
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 406.4;
        scope =public;
        author = "Sephiris, Agent95, Toadie";
        magazines[] = {"29rnd_300BLK_STANAG","29rnd_300BLK_STANAG_T","29rnd_300BLK_STANAG_S"};
        model = "hlc_wp_ar15\mesh\mill_bushmaster\car15.p3d";
        reloadAction = "HLC_GestureReloadAR15_catch_DR";
        picture = "\hlc_wp_ar15\tex\ui\gear_bushmaster_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "Bushmaster .300 Carbine";
        descriptionShort = "Automatic Carbine<br/>Caliber: .300 Blackout";
        discretedistance[] = { 200, 300, 400, 500, 600 };
        discreteDistanceCameraPoint[] = { /*"eye",*/ "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        discretedistanceinitindex = 0;
        cameraDir = "look";
        bg_bipod = 0; 
        recoil = "recoil_mxc";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 52;
            class CowsSlot: asdg_OpticRail1913_short {};
			class MuzzleSlot : asdg_MuzzleSlot_762 {};
            class PointerSlot {};
        };
        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\car15_handanims.rtm"
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "300blk_Shot_SoundSet", "300blk_Tail_SoundSet" };
            };

            class SilencedSound: BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            reloadTime = 0.081;
            dispersion = 0.00031669;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "300blk_Shot_SoundSet", "300blk_Tail_SoundSet" };
            };

            class SilencedSound: BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            reloadTime = 0.067;
            dispersion = 0.00031669;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
    };
    class hlc_rifle_vendimus : hlc_rifle_Bushmaster300 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.36;
        AB_barrelTwist=8;
        AB_barrelLength=16;
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 406.4;
        author = "Sephiris, Agent95, Tigg, Toadie";
        scope =public;
        model = "hlc_wp_ar15\mesh\pbear\car15.p3d";
        reloadAction = "HLC_GestureReloadAR15_catch_DR";
        picture = "\hlc_wp_ar15\tex\ui\gear_vendimus_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "AR15 .300 Dissipator";
        descriptionShort = "Carbine. Del-ton Upper, York Arms Lower.<br/>Caliber: .300 Blackout";
        discretedistance[] = { 200, 300, 400, 500,600};
        discreteDistanceCameraPoint[] = { /*"eye",*/ "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        discretedistanceinitindex = 0;
        cameraDir = "look";
        recoil = "recoil_mx";
        bg_bipod = 0; 
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 55;
        };
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
        modes[] = {"Single", "single_medium_optics1", "single_far_optics2"};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\carbine_hands.rtm"
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\300aac_suppressed", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\300aac_suppressed", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "PBEAR_Shot_SoundSet", "PBEAR_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            reloadTime = 0.067;
            dispersion = 0.000213905;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "PBEAR_Shot_SoundSet", "PBEAR_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            reloadTime = 0.067;
            dispersion = 0.000213905;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
    };
    class hlc_rifle_SAMR : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = true;          /// a weapon with bipod obviously has a bipod
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.57;
        author = "Twinke Masta, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_Catch_DR";
        ACE_barrelTwist = 228.6;
        maxZeroing = 1600;
        ACE_barrelLength = 457.2;
        scope =public;
        agm_bipod=1;
        cse_bipod = 1;
        bg_bipod = 1; 
        model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "RRA LAR-15";
        descriptionShort = "Accurised Assault Rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500};
        discretedistanceinitindex = 0;
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90;
            class CowsSlot : asdg_OpticRail1913_long {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
        };
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\samr_hands.rtm"
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

             class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "SAMR_Shot_SoundSet", "SAMR_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "samr_silencerShot_SoundSet", "SAMR_silencerTail_SoundSet" };
            };
            reloadTime = 0.080;
            dispersion = 0.000138899;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

             class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "SAMR_Shot_SoundSet", "SAMR_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "samr_silencerShot_SoundSet", "SAMR_silencerTail_SoundSet" };
            };
            reloadTime = 0.080;
            dispersion = 0.000138899;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
    };
    class hlc_rifle_samr2: hlc_rifle_SAMR {
        inertia= 0.57;
        model = "hlc_wp_ar15\mesh\LAR15_samr\samr2.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_SAMR2_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "RRA LAR-15";
        descriptionShort = "Accurised Assault Rifle<br/>Caliber: 5.56mm<br/> ";
    };
    class hlc_rifle_honeybase : hlc_rifle_Bushmaster300 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        inertia= 0.5;
        scope =private;
        author = "Hypermetal, Toadie";
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 152.4;
        aiDispersionCoefY = 12.0;
        aiDispersionCoefX = 8.0;
        recoil = "recoil_mx";
        model = "hlc_wp_ar15\mesh\honeybadger\car15.p3d";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        picture = "\hlc_wp_ar15\tex\ui\gear_badger_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = "AAC 'Honey-Badger'";
        descriptionShort = "Suppressed Carbine<br/>Caliber: .300 Blackout";
        discretedistance[] = {200, 300, 400, 500,600};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_HB_std",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\jack_hands.rtm"
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "300blk_Shot_SoundSet", "300blk_Tail_SoundSet" };
            };

            class SilencedSound: BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "badger_silencerShot_SoundSet", "badger_silencerTail_SoundSet" };
            };
            reloadTime = 0.082;
            dispersion = 0.00031669;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 225;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                closure2[]={"\hlc_wp_ar15\snd\ar15c_close", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "300blk_Shot_SoundSet", "300blk_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "badger_silencerShot_SoundSet", "badger_silencerTail_SoundSet" };
            };
            reloadTime = 0.082;
            dispersion = 0.00031669;
            maxrange = 60;
            maxrangeprobab = 0.05;
            midrange = 30;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            aiRateOfFire = 1e-006;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2.0;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 58;
			class MuzzleSlot : asdg_MuzzleSlot_762 {
                class compatibleItems: compatibleItems {
                    muzzle_HBADGER = 1;
                };
            };
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
    };
    class hlc_rifle_honeybadger : hlc_rifle_honeybase {
        scope= public;
        class LinkedItemsMuzzle {
            item = "muzzle_HBADGER";
            slot = "MuzzleSlot";
        };
    };
};
