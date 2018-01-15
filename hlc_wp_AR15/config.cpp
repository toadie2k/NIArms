#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_ar15 {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = { "HLC_AR_ammobox", "Weapon_hlc_rifle_RU556","Weapon_hlc_rifle_RU5562","Weapon_hlc_rifle_Colt727","Weapon_hlc_rifle_Colt727_GL","Weapon_hlc_rifle_SAMR",
            "Weapon_hlc_rifle_SAMR2","Weapon_hlc_rifle_CQBR","Weapon_hlc_rifle_M4","Weapon_hlc_rifle_m4m203","Weapon_hlc_rifle_bcmjack","Weapon_hlc_rifle_Bushmaster300","Weapon_hlc_rifle_vendimus","Weapon_hlc_rifle_honeybadger" };
        weapons[] = {"hlc_rifle_RU556","hlc_rifle_RU5562","hlc_rifle_Colt727","hlc_rifle_bcmjack","hlc_rifle_Colt727_GL","hlc_rifle_Bushmaster300","hlc_rifle_vendimus","hlc_rifle_SAMR","hlc_rifle_honeybadger","hlc_rifle_honeybase","hlc_rifle_bcmblackjack"};
        magazines[] = {"29rnd_300BLK_STANAG","29rnd_300BLK_STANAG_T","29rnd_300BLK_STANAG_S"};
        version="1.99";
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
    };
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot { // for 5.56x45 universal mount suppressors
    class compatibleItems {
    };
};

class CfgVehicles {
    class B_supplyCrate_F;
    class Weapon_Base_F;

    class HLC_AR_ammobox : B_supplyCrate_F {
        dlc = "Niarms_AR15";
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC AR15 Supply Box";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(29rnd_300BLK_STANAG,60);
            __M_MAG(29rnd_300BLK_STANAG_T,60);
            __M_MAG(29rnd_300BLK_STANAG_S,60);
            __M_MAG(hlc_50rnd_300BLK_STANAG_EPR,60);
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
            __M_WEP(hlc_rifle_M4a1carryhandle,30);
            __M_WEP(hlc_rifle_m4m203,30);
            __M_WEP(hlc_rifle_cqbr,30);
            __M_WEP(hlc_rifle_mk18mod0,30);
            __M_WEP(hlc_rifle_Bushmaster300,30);
            __M_WEP(hlc_rifle_vendimus,30);
            __M_WEP(hlc_rifle_bcmblackjack, 30);
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

    __WEAPONHOLDER(hlc_rifle_RU556,hlc_30rnd_556x45_EPR,AR15 Sanitised Carbine,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_RU5562,hlc_30rnd_556x45_EPR,AR15 Magpul Carbine,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_Colt727,hlc_30rnd_556x45_EPR,Colt Carbine,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_Colt727_GL,hlc_30rnd_556x45_EPR,Colt Carbine+M203,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SAMR,hlc_30rnd_556x45_SPR,LAR15 AMR,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_samr2,hlc_30rnd_556x45_SPR,LAR15 AMR(Alt),Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_CQBR,hlc_30rnd_556x45_SOST,M4 Commando,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_M4,hlc_30rnd_556x45_EPR,Colt M4,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_M4a1carryhandle,hlc_30rnd_556x45_EPR,Colt M4A1 (Carryhandle),Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_m4m203,hlc_30rnd_556x45_EPR,Colt M4+M203,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_bcmjack,hlc_30rnd_556x45_EPR,BCM 'Jack' Carbine,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_bcmblackjack,29rnd_300BLK_STANAG,'BlackJack' Custom,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_Bushmaster300,29rnd_300BLK_STANAG,Bushmaster .300BLK Carbine,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_vendimus,29rnd_300BLK_STANAG,AR15 .300 Dissipator,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_honeybadger,29rnd_300BLK_STANAG,AAC Honeybadger,Niarms_AR15,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_mk18mod0,hlc_30rnd_556x45_SOST,Mk18 Mod0,Niarms_AR15,Toadie,AssaultRifles);

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
        descriptionshort = "Caliber: .300 AAC Blackout EPR<br />Type: Pulled M80A1 EPR bullet, handloaded (Remington Brass, 19.5 grains of Hodgdon Lil'Gun powder at maximum load volume, using a Remington 7 1/2 Small Rifle Magnum primer, US Military M80A1 EPR bullet) <br />Rounds: 30";
        displayname = ".300AAC EPR 30Rnd STANAG Magazine";
        model = "hlc_wp_ar15\mesh\magazine\magazine_300.p3d";
        initspeed = 674.6;
        lastroundstracer = 0;
        tracersevery = 0;
        displaynameshort = "Blackout EPR";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_fmj_ca.paa";
    };
    class 29rnd_300BLK_STANAG_T : 29rnd_300BLK_STANAG {
        dlc = "Niarms_AR15";
        author = "Toadie";
        ammo = "HLC_300Blackout_RNBT";
        descriptionshort = "Caliber: .300 AAC Blackout RNBT-BT<br />Type: Round Nose Ballistic Tip Boat Tail with Glow Tip (Noveske Brass /w black nickel plating, 8.5 grains of Alliant 2400 powder at 75% load volume, using a CCI No 41 primer, Nosler )<br />Rounds: 30";
        displayname = ".300AAC Ballistic Tracer 30Rnd STANAG Magazine";
        initspeed = 329.2;
        lastroundstracer = 1;
        tracersevery = 1;
        displaynameshort = "RNBT Subsonic";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_sub_ca.paa";
    };
    class 29rnd_300BLK_STANAG_S : 30Rnd_556x45_Stanag {
        dlc = "Niarms_AR15";
        author = "Toadie";
        ammo = "HLC_300Blackout_SMK";
        count = 30;
        descriptionshort = "Caliber: .300 AAC Blackout Handload TAC-TX<br />Type: Solid Copper Ballistic Tip Boat Tail (Hornady Brass, 17.5 Grains Winchester W296 powder, using a CCI #400 Small Rifle Primer, Barnes 120 grain TAC-TX Bullet)<br />Rounds: 30";
        displayname = ".300AAC TAC-TX 30Rnd STANAG Magazine";
        model = "hlc_wp_ar15\mesh\magazine\magazine_300.p3d";
        initspeed = 670.6;
        lastroundstracer = 0;
        displaynameshort = "TAC-TX";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_fmj_ca.paa";
    };
        class hlc_50rnd_300BLK_STANAG_EPR : hlc_30rnd_556x45_EPR {
        ammo = "HLC_300Blackout_Ball";
        author = "Toadie";
        count = 50;
        descriptionshort = "Caliber: .300 AAC Blackout EPR<br />Type: Pulled M80A1 EPR bullet, handloaded (Remington Brass, 19.5 grains of Hodgdon Lil'Gun powder at maximum load volume, using a Remington 7 1/2 Small Rifle Magnum primer, US Military M80A1 EPR bullet) <br />Rounds: 50";
        displayname = ".300AAC EPR 50Rnd STANAG Magazine";
        mass = 14;
        tracersevery = 0;
        picture = "\hlc_core\tex\ui\ammo\m_X15_mixed_ca.paa";
    };
};

class CfgWeapons {

//muzzles

    class ItemCore;
    class muzzle_snds_H : ItemCore {
        class ItemInfo;
    };

    class muzzle_HBADGER: muzzle_snds_H {
        dlc = "Niarms_AR15";
        displayName = "Honeybadger Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
        model = "hlc_wp_ar15\mesh\hb_sil\hbsil.p3d";
		class ItemInfo: ItemInfo {
			mass = 11;
		};
		inertia = 0.08;
    };



    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;

    class hlc_ar15_base : Rifle_Base_F {
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
            class MuzzleSlot : asdg_MuzzleSlot_556{                
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
                };
        };
        descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
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
                soundSetShot[] = { "carbine_Shot_SoundSet", "carbine_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "carbine_silencerShot_SoundSet", "carbine_silencerTail_SoundSet" };
            };
            reloadTime = 0.067;
            dispersion = 0.000347248;

            __AI_ROF_RIFLE_SMALL_SINGLE;
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

            __AI_ROF_RIFLE_SMALL_FULLAUTO;
        }; 
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };

        drysound[] = {"\hlc_wp_ar15\snd\ar15_trigger", 1, 1, 10};
        reloadMagazineSound[] = {"\hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
        changeFiremodeSound[] = { "\hlc_wp_ar15\snd\ar15_selector", 1, 1, 8 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

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
            __AI_ROF_GL_SINGLE;
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
        initspeed = -0.86667;
        author = "ImBrokeRU, Antivirus404, RedRogueXVII, Tigg, Brains Collector, Toadie";
        reloadAction = "HLC_GestureReloadAR15_BAD_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\ru556\car15.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_hsld_ca";
        displayName = "AR15 Sanitised Carbine";
        descriptionShort = "Short-Barreled Rifle<br/>Caliber: 5.56mm";
        hiddenSelections[] = { "Main", "Extras", "Emag", "BAD_Lever", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\ar15_co.tga", "hlc_wp_ar15\tex\extras_co.tga", "hlc_wp_ar15\tex\emag_ca.tga", "hlc_wp_ar15\tex\magpul_bad_lever_co.tga", "hlc_wp_ar15\tex\magpulmoetan_co.tga" };
        discretedistance[] = {300};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15c_reload",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "\hlc_wp_ar15\gesture\newgesture\bad_hands.rtm"
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 48;
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot: asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
        };
		inertia = 0.22;
		__DEXTERITY(2.5 + 0.1 + 0.2,1); //afg,kx3

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "sbr_Shot_SoundSet", "sbr_Tail_SoundSet" };
            };
            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "sbr_silencerShot_SoundSet", "sbr_silencerTail_SoundSet" };
            };
            reloadTime = 0.075;
            __MOA(2.3);

            maxRange = 400;
        };
        class FullAuto: FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "sbr_Shot_SoundSet", "sbr_Tail_SoundSet" };
            };
            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "sbr_silencerShot_SoundSet", "sbr_silencerTail_SoundSet" };
            };
            reloadTime = 0.075;
            __MOA(2.3);
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class Library {
            libTextDesc = "Sanitised AR-15 SBR";
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_RU556_x15";
            default = "hlc_rifle_RU556";
        };
    };
    class hlc_rifle_RU556_x15 : hlc_rifle_RU556
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\ru556\car15_X15.p3d";
        reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
            inertia = 0.22+0.19;
            __DEXTERITY(2.2 + 0.1 + 1.9, 1); //afg,kx3   
    };


    class hlc_rifle_RU5562 : hlc_rifle_RU556 {
        dlc = "Niarms_AR15";
        author = "ImBrokeRU, 4Echo, RedRogueXVII, Tigg, Toadie";
        scope = public;
        initspeed = -0.86667;
        model = "hlc_wp_ar15\mesh\ru556\car15_2.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_hsld2_ca";
        displayName = "AR15 Magpul Carbine";
        hiddenSelections[] = { "Main", "Extras", "Emag", "BAD_Lever", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\ru5563\ru556_co.tga", "hlc_wp_ar15\tex\ru5562\ru556_extras_co.tga", "hlc_wp_ar15\tex\emag_ca.tga", "hlc_wp_ar15\tex\magpul_bad_lever_co.tga", "" };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_RU5562_x15";
            default = "hlc_rifle_RU5562";
        };
    };
    class hlc_rifle_RU5562_x15 : hlc_rifle_RU5562
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\ru556\car15_2_X15.p3d";
        reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
            inertia = 0.22+0.19;
            __DEXTERITY(2.2 + 0.1 + 1.9, 1); //afg,kx3   
    };


    class hlc_rifle_CQBR : hlc_rifle_RU556 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist=7;
        AB_barrelLength=10;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 254.0;
        initspeed = -0.86667;
        author = "Tenoyl, OhNoMelon, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\cqbr\cqbr.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_cqbr_ca";
        displayName = "Colt M4 Commando";
        descriptionShort = "Short-Barreled Rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {300};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_A3_std",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\samr_hands.rtm"
        };
        hiddenSelections[] = { "Main", "Rails", "Panels", "VFG", "Sights","FSB", "Stock", "GL" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\melon_cqbr\main_co.tga", "hlc_wp_ar15\tex\melon_cqbr\risfore1_co.tga", "hlc_wp_ar15\tex\tigg\rails_co.tga", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.tga", "hlc_wp_ar15\tex\tenoyl_tbs\tbs_co.tga","","hlc_wp_ar15\tex\melon_cqbr\vltor_co.tga", "hlc_wp_ar15\tex\m203_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 54;
            class UnderBarrelSlot: asdg_UnderSlot {
                iconPosition[] = { 0.2, 0.7 };
                iconScale = 0.2;
            };
        };
		inertia = 0.20;
		__DEXTERITY(2.5 + 0.1,1); //vgrip

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Library {
            libTextDesc = "Sanitised AR-15 SBR";
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_CQBR_x15";
            default = "hlc_rifle_CQBR";
        };
    };
    class hlc_rifle_CQBR_x15 :hlc_rifle_CQBR
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\cqbr\cqbr_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.20+0.19;
        __DEXTERITY(2.5 + 0.1 + 1.9, 1); //afg,kx3   
    };


    class hlc_rifle_M4 : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist=7;
        AB_barrelLength=14.5;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        initspeed = -0.9;
        author = "Tenoyl, OhNoMelon, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\cqbr\M4A1.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_m4_x_ca";
        displayName = "Colt M4A1 Carbine";
        descriptionShort = "Carbine<br/>Caliber: 5.56mm";
        discretedistance[] = {300};
        discretedistanceinitindex = 0;
        hiddenSelections[] = { "Main", "Rails", "Panels", "VFG", "Sights", "FSB", "Stock", "GL" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\melon_cqbr\main_co.tga", "hlc_wp_ar15\tex\melon_cqbr\risfore1_co.tga", "hlc_wp_ar15\tex\tigg\rails_co.tga", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.tga", "hlc_wp_ar15\tex\tenoyl_tbs\tbs_co.tga", "hlc_wp_ar15\tex\trhm16a2rec_co.tga", "hlc_wp_ar15\tex\m4furniture_co.tga", "hlc_wp_ar15\tex\m203_co.tga" };
        bg_bipod = 0; 
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\samr_hands.rtm"
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 58;
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[] = { 0.2, 0.7 };
                iconScale = 0.2;
            };
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
                };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
        };
        inertia = 0.3;
		__DEXTERITY(2.9 + 0.1,1); //vgrip

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Library {
            libTextDesc = "Sanitised AR-15 SBR";
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_M4_x15";
            default = "hlc_rifle_M4";
        };
    };
    class hlc_rifle_M4_x15 :hlc_rifle_M4
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\cqbr\M4A1_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.30+0.19;
        __DEXTERITY(2.9 + 0.1 + 1.9, 1); //afg,kx3   
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
        picture = "\hlc_wp_ar15\tex\ui\gear_m4m203_x_ca";
        displayName = "Colt M4A1 Carbine (GL)";
        descriptionShort = "Carbine<br/>Caliber: 5.56mm";
        muzzles[] = { "this", "hlc_M203" };
        hiddenSelections[] = { "Main", "Rails", "Panels", "VFG", "Sights", "FSB", "Stock", "GL" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\melon_cqbr\main_co.tga", "hlc_wp_ar15\tex\melon_cqbr\risfore1_co.tga", "hlc_wp_ar15\tex\tigg\rails_co.tga", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.tga", "hlc_wp_ar15\tex\tenoyl_tbs\tbs_co.tga", "hlc_wp_ar15\tex\trhm16a2rec_co.tga", "hlc_wp_ar15\tex\m4furniture_co.tga", "hlc_wp_ar15\tex\m203_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 78;
            class UnderBarrelSlot {
                iconPosition[] = { 0.2, 0.7 };
                iconScale = 0.2;
            };
        };
        inertia = 0.6;
		__DEXTERITY(2.9 + 1.3,0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_m4m203_x15";
            default = "hlc_rifle_m4m203";
        };
    };
    class hlc_rifle_m4m203_x15 :hlc_rifle_m4m203
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\cqbr\M4A1M203_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.6+0.19;
        __DEXTERITY(2.9 + 1.3+ 0.1 + 1.9, 0); //afg,kx3   
    };


    class hlc_rifle_bcmjack : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist=7;
        AB_barrelLength=16;
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 368.3;
        initspeed = -0.93;
        author = "Twinke Masta, Tenoyl, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\JackCarbine\samr.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_jack_ca";
        displayName = "BCM 'Jack' Carbine";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56mm";
        hiddenSelections[] = { "Upper","Lower","Foregrip","foregrip_rail","Sights","Stock" };
        hiddenSelectionsTextures[] = { "\hlc_wp_ar15\tex\toadie_jackcarbine\upper_co.tga","hlc_wp_ar15\tex\toadie_jackcarbine\lower2_co.tga","hlc_wp_ar15\tex\toadie_jackcarbine\smr_co.tga","hlc_wp_ar15\tex\toadie_jackcarbine\smr_toprail_co.tga","hlc_wp_ar15\tex\tenoyl_tbs\tbs_co.tga", "hlc_wp_ar15\tex\toadie_jackcarbine\b5sopmod_co.tga" };
        discretedistance[] = {100, 200, 300, 400, 500};
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
    
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\jack_hands.rtm"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 58;
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class CowsSlot : asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[] = { 0.2, 0.7 };
                iconScale = 0.2;
            };
        };
        inertia = 0.3;
		__DEXTERITY(3,0);

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Single {
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
        };
        class FullAuto : FullAuto {
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
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class Library {
            libTextDesc = "BCM Jack Carbine";
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_bcmjack_x15";
            default = "hlc_rifle_bcmjack";
        };
    };
    class hlc_rifle_bcmjack_x15 :hlc_rifle_bcmjack
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\JackCarbine\samr_X15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.3+0.19;
        __DEXTERITY(3 + 1.9, 0); //afg,kx3   
    };


    class hlc_rifle_bcmblackjack :hlc_rifle_bcmjack
    {
        author = "Sephiris, Agent95, Toadie";
        model = "hlc_wp_ar15\mesh\JackCarbine\samr.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_jack_ca";
        discretedistance[] = { 100, 200, 300, 400, 500 };
        displayName = "BCM 'Black-Jack' Custom";
        descriptionShort = "Assault rifle<br/>Caliber: .300 Blackout";
        magazines[] = { "29rnd_300BLK_STANAG", "29rnd_300BLK_STANAG_T", "29rnd_300BLK_STANAG_S","hlc_50rnd_300BLK_STANAG_EPR" };
        recoil = "recoil_mxc";
        initspeed = -1;
        hiddenSelections[] = { "Upper", "Lower", "Foregrip", "foregrip_rail", "Sights", "Stock" };
        hiddenSelectionsTextures[] = { "\hlc_wp_ar15\tex\toadie_Blackjack\upper_co.tga", "hlc_wp_ar15\tex\toadie_Blackjack\lower2_co.tga", "hlc_wp_ar15\tex\toadie_Blackjack\smr_co.tga", "hlc_wp_ar15\tex\toadie_Blackjack\smr_toprail_co.tga", "hlc_wp_ar15\tex\tenoyl_tbs\tbs_co.tga", "hlc_wp_ar15\tex\toadie_Blackjack\b5sopmod_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "blackjack_Shot_SoundSet", "blackjack_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "blackjack_silencerShot_SoundSet", "blackjack_silencerTail_SoundSet" };
            };
            reloadTime = 0.078;
            dispersion = 0.0001309;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "blackjack_Shot_SoundSet", "blackjack_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "blackjack_silencerShot_SoundSet", "blackjack_silencerTail_SoundSet" };
            };
            reloadTime = 0.078;
            dispersion = 0.0001309;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_300BLK_STANAG_EPR = "hlc_rifle_bcmblackjack_x15";
            default = "hlc_rifle_bcmblackjack";
        };
    };
    class hlc_rifle_bcmblackjack_x15: hlc_rifle_bcmblackjack
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\JackCarbine\samr_X15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.3+0.19;
        __DEXTERITY(3 + 1.9, 0); //afg,kx3   
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
        initspeed = -0.93;
        author = "Twinke Masta, Stoke, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        scope =public;
        model = "hlc_wp_ar15\mesh\carbine\colt727.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_colt727_ca";
        displayName = "Colt Carbine";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500, 600};
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        hiddenSelections[] = { "upper", "lower", "Barrel","Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\trhm16a2upper_co.tga", "hlc_wp_ar15\tex\trhm16a2rec_co.tga", "hlc_wp_ar15\tex\m16barrel_co.tga", "hlc_wp_ar15\tex\m4furniture_co.tga"};
        cameraDir = "look";
        bg_bipod = 0; 

        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\carbine_hands.rtm"
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 50;
            class CowsSlot: asdg_OpticRail1913 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
        };
        inertia= 0.27;
		__DEXTERITY(2.72,0);

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        class Single : Single {
            reloadTime = 0.079;
            dispersion = 0.000333358;
        };
        class FullAuto : FullAuto {
            reloadTime = 0.079;
            dispersion = 0.000333358;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class Library {
            libTextDesc = "Colt Model 727 Carbine";
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_Colt727_x15";
            default = "hlc_rifle_Colt727";
        };
    };
    class hlc_rifle_Colt727_x15 : hlc_rifle_Colt727
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\carbine\colt727_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.27+0.19;
        __DEXTERITY(2.72+ 1.9, 0); //afg,kx3   
    };


    class hlc_rifle_Colt727_GL : hlc_rifle_Colt727 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        author = "Twinke Masta, Stoke, Tigg, Toadie";
        scope= public;
        model = "hlc_wp_ar15\mesh\carbinegl\colt727_gl.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_colt727gl_ca";
        handanim[] = {"OFP2_ManSkeleton", "hlc_wp_ar15\gesture\newgesture\gl_hands.rtm"};
        displayName = "Colt Carbine(GL)";
        descriptionShort = "Assault rifle<br/>Caliber: 5.56mm";
        muzzles[] = {"this", "hlc_M203"};
        hiddenSelections[] = { "upper", "lower", "Barrel", "Stock", "GL" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\trhm16a2upper_co.tga", "hlc_wp_ar15\tex\trhm16a2rec_co.tga", "hlc_wp_ar15\tex\m16barrel_co.tga", "hlc_wp_ar15\tex\m4furniture_co.tga", "hlc_wp_ar15\tex\m203_co.tga" };
        bg_bipod = 0; 
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 78;
        };
        inertia= 0.6;
		__DEXTERITY(2.72 + 1.3,0);

        class hlc_M203 : hlc_M203 {
            discreteDistance[] = { 100, 150, 200, 250, 300 };
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_Colt727_GL_x15";
            default = "hlc_rifle_Colt727_GL";
        };
    };
    class hlc_rifle_Colt727_GL_x15 : hlc_rifle_Colt727_GL
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\carbinegl\colt727_GL_X15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.6+0.19;
        __DEXTERITY(2.72+1.3+ 1.9, 0); //afg,kx3   
    };


    class hlc_rifle_Bushmaster300 : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist=8;
        AB_barrelLength=14.5;
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 406.4;
        scope =public;
        initspeed = -0.93;
        author = "Sephiris, Agent95, Farengar, Siemko,  Toadie";
        magazines[] = {"29rnd_300BLK_STANAG","29rnd_300BLK_STANAG_T","29rnd_300BLK_STANAG_S","hlc_50rnd_300BLK_STANAG_EPR"};
        model = "hlc_wp_ar15\mesh\mill_bushmaster\car15.p3d";
        reloadAction = "HLC_GestureReloadAR15_catch_DR";
        picture = "\hlc_wp_ar15\tex\ui\gear_bushmaster_ca";
        displayName = "Bushmaster .300 Carbine";
        descriptionShort = "Automatic Carbine<br/>Caliber: .300 Blackout";
        discretedistance[] = { 100, 200, 300, 400, 500, 600 };
        discreteDistanceCameraPoint[] = { "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        hiddenSelections[] = { "Main"};
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\mill_bmar15\m4a1_co.tga"};
        discretedistanceinitindex = 0;
        cameraDir = "look";
        bg_bipod = 0; 
        recoil = "recoil_mxc";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 52;
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
			class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class PointerSlot {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
        };
        inertia = 0.26;
		__DEXTERITY(2.7,0);

        class ItemInfo {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\car15_handanims.rtm"
        };
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "300blk_Shot_SoundSet", "300blk_Tail_SoundSet" };
            };

            class SilencedSound: SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            reloadTime = 0.081;
            __MOA(1.5);
        };
        class FullAuto: FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "300blk_Shot_SoundSet", "300blk_Tail_SoundSet" };
            };

            class SilencedSound: SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            reloadTime = 0.067;
            __MOA(1.9);
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_300BLK_STANAG_EPR = "hlc_rifle_Bushmaster300_x15";
            default = "hlc_rifle_Bushmaster300";
        };
    };
    class hlc_rifle_Bushmaster300_x15: hlc_rifle_Bushmaster300
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\mill_bushmaster\car15_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.26+0.19;
        __DEXTERITY(2.7+ 1.9, 0); //afg,kx3   
    };

    class hlc_rifle_vendimus : hlc_rifle_Bushmaster300 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        AB_barrelTwist=8;
        AB_barrelLength=16;
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 406.4;
        author = "Sephiris, Agent95, Tigg, Farengar, Siemko,  Toadie";
        scope =public;
        model = "hlc_wp_ar15\mesh\pbear\car15.p3d";
        reloadAction = "HLC_GestureReloadAR15_catch_DR";
        picture = "\hlc_wp_ar15\tex\ui\gear_vendimus_ca";
        displayName = "AR15 .300 Dissipator";
        descriptionShort = "Carbine. Del-ton Upper, York Arms Lower.<br/>Caliber: .300 Blackout";
        discretedistance[] = { 100, 200, 300, 400, 500,600};
        discreteDistanceCameraPoint[] = { "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        discretedistanceinitindex = 0;
        cameraDir = "look";
        recoil = "recoil_mx";
        hiddenSelections[] = { "Main","Stock","Sights" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\mill_bmar15\PBER_co.tga","hlc_wp_ar15\tex\tigg\m16furniture_co.tga","hlc_wp_ar15\tex\badger\hb_co.tga"};
        bg_bipod = 0; 
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 55;
        };
        inertia= 0.28;
		__DEXTERITY(2.8,0);

        modes[] = {"Single", "single_medium_optics1", "single_far_optics2"};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\carbine_hands.rtm"
        };
        class Single : Single {
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
            __MOA(0.955);
            minRange = 0;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_300BLK_STANAG_EPR = "hlc_rifle_vendimus_x15";
            default = "hlc_rifle_vendimus";
        };
    };
    class hlc_rifle_vendimus_x15: hlc_rifle_vendimus
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\pbear\car15_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.28+0.19;
        __DEXTERITY(2.8+1.3+ 1.9, 0); //afg,kx3   
    };

    class hlc_rifle_SAMR : hlc_ar15_base {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; 
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; 
        author = "Twinke Masta, Tigg, Toadie";
        reloadAction = "HLC_GestureReloadAR15_Catch_DR";
        ACE_barrelTwist = 228.6;
        maxZeroing = 1600;
        ACE_barrelLength = 457.2;
        scope =public;
        agm_bipod=1;
        cse_bipod = 1;
        bg_bipod = 1; 
        initspeed = -1;
        model = "hlc_wp_ar15\mesh\LAR15_samr\samr.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_SAMR_ca";
        displayName = "RRA LAR-15";
        descriptionShort = "Accurised Assault Rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500};
        discretedistanceinitindex = 0;
        hiddenSelections[] = { "Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\samr\upper_co.tga", "hlc_wp_ar15\tex\samr\lower_co.tga", "hlc_wp_ar15\tex\samr\ras_co.tga", "hlc_wp_ar15\tex\samr\risras_co.tga", "hlc_wp_ar15\tex\samr\xtm_co.tga", "hlc_wp_ar15\tex\melon_cqbr\vgrip_tan_co.tga", "hlc_wp_ar15\tex\samr\hbipod_co.tga", "hlc_wp_ar15\tex\samr\16_ca.tga", "hlc_wp_ar15\tex\samr\stock_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90;
            class CowsSlot : asdg_OpticRail1913_long {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
            class PointerSlot : asdg_FrontSideRail {
            iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
                };
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[] = { 0.2, 0.7 };
                iconScale = 0.2;
            };
        };
        inertia = 0.55;
		__DEXTERITY(3.7 + 0.1 ,1);

        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\samr_hands.rtm"
        };
        class Single : Single {
             class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "SAMR_Shot_SoundSet", "SAMR_Tail_SoundSet" };
            };
            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "samr_silencerShot_SoundSet", "SAMR_silencerTail_SoundSet" };
            };
            reloadTime = 0.080;
            __MOA(0.86905);
        };
        class FullAuto : FullAuto {
             class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "SAMR_Shot_SoundSet", "SAMR_Tail_SoundSet" };
            };
            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "samr_silencerShot_SoundSet", "SAMR_silencerTail_SoundSet" };
            };
            reloadTime = 0.080;
            __MOA(1.6);
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_SAMR_x15";
            default = "hlc_rifle_SAMR";
        };
    };
    class hlc_rifle_SAMR_x15 : hlc_rifle_SAMR
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\Lar15_SAMR\samr_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.54+0.19;
        __DEXTERITY(3.7+1.3+ 1.9, 0); //afg,kx3   
    };


    class hlc_rifle_samr2: hlc_rifle_SAMR {
        picture = "\hlc_wp_ar15\tex\ui\gear_SAMR2_ca";
        displayName = "RRA LAR-15";
        author = "Twinke Masta, Tigg, Toadie";
        descriptionShort = "Accurised Assault Rifle<br/>Caliber: 5.56mm<br/> ";
        hiddenSelections[] = { "Upper", "Lower", "D-Ring", "Rails", "Panels", "VFG", "Harris", "Patch", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\samr\upper_co.tga", "hlc_wp_ar15\tex\samr\lower2_co.tga", "hlc_wp_ar15\tex\samr\ras_co.tga", "hlc_wp_ar15\tex\samr\risras_co.tga", "hlc_wp_ar15\tex\samr\xtm2_co.tga", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.tga", "hlc_wp_ar15\tex\samr\hbipod_co.tga", "", "hlc_wp_ar15\tex\samr\stock_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_samr2_x15";
            default = "hlc_rifle_samr2";
        };
    };
    class hlc_rifle_samr2_x15 : hlc_rifle_samr2
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\Lar15_SAMR\samr_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.54+0.19;
        __DEXTERITY(3.7+1.3+ 1.9, 0); //afg,kx3
    };


    class hlc_rifle_honeybase : hlc_rifle_Bushmaster300 {
        dlc = "Niarms_AR15";
        deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
        hasBipod = false;          /// a weapon with bipod obviously has a bipod
        //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
        //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
        scope = private;
        author = "Hypermetal, Farengar, Siemko, Toadie";
        ACE_barrelTwist = 203.2;
        ACE_barrelLength = 152.4;
        aiDispersionCoefY = 12.0;
        aiDispersionCoefX = 8.0;
        recoil = "recoil_mx";
        initspeed = -1;
        model = "hlc_wp_ar15\mesh\honeybadger\car15.p3d";
        reloadAction = "HLC_GestureReloadAR15_catch_WS";
        picture = "\hlc_wp_ar15\tex\ui\gear_badger_ca";
        displayName = "AAC 'Honey-Badger'";
        descriptionShort = "Suppressed Carbine<br/>Caliber: .300 Blackout";
        hiddenSelections[] = { "Main" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\badger\hb_co.tga"};
        fireLightIntensity = 0.02;
        discretedistance[] = { 100, 200, 300, 400, 500, 600 };
        discreteDistanceCameraPoint[] = { "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        discretedistanceinitindex = 0;
        bg_bipod = 0; 
        reloadMagazineSound[] = {"hlc_wp_ar15\snd\ar15_reload_HB_std",0.74,1,30};
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\jack_hands.rtm"
        };
        class Single : Single {
            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            class SilencedSound: SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] =  { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            reloadTime = 0.082;
            __MOA(2.5);
            maxRange = 400;
        };
        class FullAuto : FullAuto {
            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "300BLK_Shot_Silenced_SoundSet", "300BLK_ShotTail_Silenced_SoundSet" };
            };
            reloadTime = 0.082;
            __MOA(2.5);
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 3;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1 {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 47; // without the suppressor
			class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
                class compatibleItems: compatibleItems {
                    muzzle_HBADGER = 1;
                };
            };
            class PointerSlot : asdg_FrontSideRail {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class UnderBarrelSlot : asdg_UnderSlot {
                iconPosition[] = { 0.2, 0.7 };
                iconScale = 0.2;
            };
        };
		inertia = 0.27;
		__DEXTERITY(2.7,0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_300BLK_STANAG_EPR = "hlc_rifle_honeybase_x15";
            default = "hlc_rifle_honeybadger";
        };
    };
    class hlc_rifle_honeybadger : hlc_rifle_honeybase {
        scope= public;
        class LinkedItemsMuzzle {
            item = "muzzle_HBADGER";
            slot = "MuzzleSlot";
        };
    };
    class hlc_rifle_honeybase_x15: hlc_rifle_honeybadger
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\honeybadger\car15_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.23+0.19;
        __DEXTERITY(2.7+ 1.9, 0); //afg,kx3
    };
    class hlc_rifle_mk18mod0: hlc_rifle_CQBR
    {
        author = "Tenoyl, OhNoMelon, Tigg, Toadie";
        model = "hlc_wp_ar15\mesh\cqbr\mk18mod0.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_mk18_ca";
        displayName = "Mk18 Mod0";
        descriptionShort = "Short-Barreled Rifle<br/>Caliber: 5.56mm";
        discretedistance[] = {100, 200, 300, 400, 500, 600};
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
                hiddenSelections[] = { "Main", "Rails", "Panels", "VFG", "Sights", "FSB", "Stock", "GL" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\melon_cqbr\main_co.tga", "hlc_wp_ar15\tex\melon_cqbr\risfore1_co.tga", "hlc_wp_ar15\tex\tigg\rails_co.tga", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.tga", "hlc_wp_ar15\tex\tenoyl_tbs\tbs_co.tga", "hlc_wp_ar15\tex\trhm16a2rec_co.tga", "hlc_wp_ar15\tex\toadie_jackcarbine\b5sopmod_co", "hlc_wp_ar15\tex\m203_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_mk18mod0_x15";
            default = "hlc_rifle_mk18mod0";
        };
    };

    class hlc_rifle_mk18mod0_x15: hlc_rifle_mk18mod0
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\cqbr\mk18mod0_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.20+0.19;
        __DEXTERITY(2.5 + 0.1 + 1.9, 1); //afg,kx3   
    };
    class hlc_rifle_M4a1carryhandle: hlc_rifle_M4
    {
        author = "Tenoyl, OhNoMelon, Tigg, Toadie";
        model = "hlc_wp_ar15\mesh\cqbr\m4a1carryhandle.p3d";
        picture = "\hlc_wp_ar15\tex\ui\gear_m4a1_ca";
        displayName = "Colt M4A1 (Carryhandle)";
        discretedistance[] = {100, 200, 300, 400, 500, 600};
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
        hiddenSelections[] = { "Main", "Rails", "Panels", "VFG", "Sights", "FSB", "Stock", "GL" };
        hiddenSelectionsTextures[] = { "hlc_wp_ar15\tex\melon_cqbr\main_co.tga", "hlc_wp_ar15\tex\melon_cqbr\risfore1_co.tga", "hlc_wp_ar15\tex\tigg\rails_co.tga", "hlc_wp_ar15\tex\melon_cqbr\vgrip_co.tga", "hlc_wp_ar15\tex\tenoyl_tbs\tbs_co.tga", "hlc_wp_ar15\tex\trhm16a2rec_co.tga", "hlc_wp_ar15\tex\m4furniture_co.tga", "hlc_wp_ar15\tex\m203_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_M4a1carryhandle_x15";
            default = "hlc_rifle_M4a1carryhandle";
        };
    };
    class hlc_rifle_M4a1carryhandle_x15: hlc_rifle_M4a1carryhandle
    {
        scopeArsenal = 0;
        model = "hlc_wp_ar15\mesh\cqbr\M4a1carryhandle_x15.p3d";
        reloadAction = "HLC_GestureReloadAR15_X15";
        inertia = 0.20+0.19;
        __DEXTERITY(2.5 + 0.1 + 1.9, 1); //afg,kx3   
    };

};
