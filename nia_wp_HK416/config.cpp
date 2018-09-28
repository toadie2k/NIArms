#include "\hlc_core\script_macros.hpp"
#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
class CfgPatches
{
 class niarms_416
 {
    requiredaddons[] = {"hlcweapons_core"};
	units[] = {  };
	weapons[] = {};
	magazines[] = {};
	version="1.01";
	author="toadie";
 };
};
class cfgMods
{
	class Mod_Base;
	class Niarms_HK416 :Mod_Base
	{
		name = "NIArsenal: HK416 Rifles";
		picture = "\nia_wp_HK416\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "nia_wp_HK416\tex\ui\NIArms1_ca.paa";
		logoOver = "nia_wp_HK416\tex\ui\NIArms1_ca.paa";
		logoSmall = "nia_wp_HK416\tex\ui\NIArms1_ca.paa";
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
class nia_rifle_bipodsgrips_slot;
class nia_rifle_grips_slot;
class nia_charms_slot;
class asdg_MuzzleSlot_556;

class CfgVehicles
{
    class B_supplyCrate_F;
   class Niarms_416_Box : B_supplyCrate_F
	{	
		dlc = "Niarms_HK416";
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC HK416 Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
            __M_MAG(hlc_30rnd_556x45_EPR, 30);
            __M_MAG(hlc_30rnd_556x45_SOST, 30);
            __M_MAG(hlc_30rnd_556x45_SPR, 30);
            __M_MAG(hlc_30rnd_556x45_S, 30);
            __M_MAG(hlc_30rnd_556x45_M, 30);
            __M_MAG(hlc_30rnd_556x45_t, 30);
            __M_MAG(hlc_30rnd_556x45_MDim, 30);
            __M_MAG(hlc_30rnd_556x45_TDim, 30);
            __M_MAG(hlc_30rnd_556x45_EPR_STANAGHD, 30);
            __M_MAG(hlc_30rnd_556x45_SOST_STANAGHD, 30);
            __M_MAG(hlc_30rnd_556x45_SPR_STANAGHD, 30);
            __M_MAG(hlc_30rnd_556x45_S_STANAGHD, 30);
            __M_MAG(hlc_30rnd_556x45_M_STANAGHD, 30);
            __M_MAG(hlc_30rnd_556x45_t_STANAGHD, 30);
            __M_MAG(hlc_30rnd_556x45_MDim_STANAGHD, 30);
            __M_MAG(hlc_30rnd_556x45_TDim_STANAGHD, 30);
            __M_MAG(hlc_30rnd_556x45_EPR_L5, 30);
            __M_MAG(hlc_30rnd_556x45_SOST_L5, 30);
            __M_MAG(hlc_30rnd_556x45_SPR_L5, 30);
            __M_MAG(hlc_30rnd_556x45_S_L5, 30);
            __M_MAG(hlc_30rnd_556x45_M_L5, 30);
            __M_MAG(hlc_30rnd_556x45_t_L5, 30);
            __M_MAG(hlc_30rnd_556x45_MDim_EMAG, 60);
            __M_MAG(hlc_30rnd_556x45_TDim_EMAG, 60);
            __M_MAG(hlc_30rnd_556x45_EPR_EMAG, 60);
            __M_MAG(hlc_30rnd_556x45_SOST_EMAG, 60);
            __M_MAG(hlc_30rnd_556x45_SPR_EMAG, 60);
            __M_MAG(hlc_30rnd_556x45_S_EMAG, 60);
            __M_MAG(hlc_30rnd_556x45_M_EMAG, 60);
            __M_MAG(hlc_30rnd_556x45_t_EMAG, 60);
            __M_MAG(hlc_50rnd_556x45_EPR, 10);
            __M_MAG(hlc_50rnd_556x45_SOST, 10);
            __M_MAG(hlc_50rnd_556x45_SPR, 10);
            __M_MAG(hlc_50rnd_556x45_M, 10);
            __M_MAG(hlc_50rnd_556x45_MDim, 10);
		};
		class TransportWeapons
		{
            __M_WEP(hlc_rifle_416C, 10);
            __M_WEP(hlc_rifle_416D10, 10);
            __M_WEP(hlc_rifle_416D10_tan, 10);
            __M_WEP(hlc_rifle_416D10_wdl, 10);
            __M_WEP(hlc_rifle_416D10_gl, 10);
            __M_WEP(hlc_rifle_416D10_RAHG, 10);
            __M_WEP(hlc_rifle_416D10_geissele, 10);
            __M_WEP(hlc_rifle_416D10_ptato, 10);
            __M_WEP(hlc_rifle_416D10_st6, 10);
            __M_WEP(hlc_rifle_416D10C, 10);
            __M_WEP(hlc_rifle_416D10C_PTC, 10);
            __M_WEP(hlc_rifle_416D145, 10);
            __M_WEP(hlc_rifle_416D145_gl, 10);
            __M_WEP(hlc_rifle_416D145_tan, 10);
            __M_WEP(hlc_rifle_416D145_wdl, 10);
            __M_WEP(hlc_rifle_416D145_CAG, 10);
            __M_WEP(hlc_rifle_416D145C, 10);
            __M_WEP(hlc_rifle_416D165, 10);
            __M_WEP(hlc_rifle_416D165_tan, 10);
            __M_WEP(hlc_rifle_416D165_wdl, 10);
            __M_WEP(hlc_rifle_416D165_gl, 10);
            __M_WEP(hlc_rifle_M27IAR, 10);
            __M_WEP(hlc_rifle_416N, 10);
            __M_WEP(hlc_rifle_416N_gl, 10);
            __M_WEP(hlc_rifle_416D20, 10);
            __M_WEP(hlc_rifle_416D20_tan, 10);
            __M_WEP(hlc_rifle_416D20_wdl, 10);
            __M_WEP(hlc_rifle_BAB, 10);
		};
		class TransportItems
		{
            __M_ITM(hlc_muzzle_556NATO_rotexiiic_tan, 3);
            __M_ITM(hlc_muzzle_556NATO_rotexiiic_grey, 3);
            __M_ITM(hlc_muzzle_556NATO_M42000, 3);
            __M_ITM(optic_Holosight, 10);
            __M_ITM(hlc_optic_HensoldtZO_Hi, 10);
            __M_ITM(hlc_optic_HensoldtZO_Hi_2D, 10);
            __M_ITM(hlc_optic_HensoldtZO_lo, 10);
            __M_ITM(hlc_optic_HensoldtZO_lo_2D, 10);
            __M_ITM(hlc_optic_HensoldtZO_Hi_docter, 10);
            __M_ITM(hlc_optic_HensoldtZO_Hi_docter_2D, 10);
            __M_ITM(hlc_optic_HensoldtZO_lo_docter, 10);
            __M_ITM(hlc_optic_HensoldtZO_lo_docter_2D, 10);
            __M_ITM(optic_hamr, 3);
            __M_ITM(optic_rco, 10);
            __M_ITM(optic_Arco, 10);
            __M_ITM(optic_LRPS, 10);
            __M_ITM(optic_NVS, 10);

		};
	};
	class Weapon_Base_F;
    __WEAPONHOLDER(hlc_rifle_416D145, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D14.5, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D145_tan, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D14.5(Tan), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D145_wdl, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D14.5(Woodland), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D145_CAG, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D14.5(CAG), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D145C, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D14.5C, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D145_gl, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D14.5(GL), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D10, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10_tan, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D10(Tan), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10_wdl, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D10(Woodland), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10_gl, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D10(GL), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10C, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D10C, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10C_PTC, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D10C(PTC), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10_RAHG, hlc_30rnd_556x45_EPR_EMAG, HK416 D10(RAHG), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10_geissele, hlc_30rnd_556x45_EPR_EMAG, HK416 D10(SMR), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10_ptato, hlc_30rnd_556x45_EPR_EMAG, HK416 D10(Potato), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D10_st6, hlc_30rnd_556x45_EPR_EMAG, HK416 D10(DEVGRU), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416C, hlc_30rnd_556x45_SOST_STANAGHD, HK416C, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_BAB, hlc_30rnd_556x45_SOST_STANAGHD, HK416C(Team Babs), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_M27IAR, hlc_30rnd_556x45_M_EMAG, M27 IAR, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D165, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D16.5, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D165_tan, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D16.5(Tan), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D165_wdl, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D16.5(Woodland), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D165_gl, hlc_30rnd_556x45_EPR_STANAGHD, HK416 D16.5(GL), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416N, hlc_30rnd_556x45_M_EMAG, HK416N, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416N_gl, hlc_30rnd_556x45_M_EMAG, HK416N(GL), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D20, hlc_30rnd_556x45_M_EMAG, HK416 D20, Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D20_tan, hlc_30rnd_556x45_M_EMAG, HK416 D20(Tan), Niarms_HK416, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_416D20_wdl, hlc_30rnd_556x45_M_EMAG, HK416 D20(Woodland), Niarms_HK416, Toadie, AssaultRifles);

	};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F : Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class GrenadeLauncher;
	class UGL_F;
	
class ItemCore;
class hlc_HK416_base : Rifle_Base_F {
    magazineReloadSwitchPhase = 0.5;
    scope = protected;
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 292.1;
    aidispersioncoefx = 4;
    aidispersioncoefy = 6;
    magazineWell[] = { STANAG_556x45, "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL" };
    magazines[] = { __556STANAG_MAGS, __556STANAG_BI_MAGS, __556NATO_BI_DRUMS };
    class Library {
        libTextDesc = "HK416";
    };
    reloadAction = "NIA_GestureReload416";
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
        class MuzzleSlot : asdg_MuzzleSlot_556{
            iconPosition[] = { 0.0, 0.45 };
            iconScale = 0.2;
        };
    };
    descriptionShort = "Assault Rifle<br/>Caliber: 5.56mm NATO";
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_STD.rtm" };

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
    soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };

    modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };

    class Single : Mode_SemiAuto {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Carbine_Shot_SoundSet", "NIA_416Carbine_Shot_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Carbine_silencerShot_SoundSet", "NIA_416Carbine_silencerTail_SoundSet" };
        };
        __ROF(780);
        __MOA(1.4);

        __AI_ROF_RIFLE_SMALL_SINGLE;
    };
    class FullAuto : Mode_FullAuto {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Carbine_Shot_SoundSet", "NIA_416Carbine_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Carbine_silencerShot_SoundSet", "NIA_416Carbine_silencerTail_SoundSet" };
        };
        __ROF(780);
        __MOA(1.55);

        __AI_ROF_RIFLE_SMALL_FULLAUTO;
    };
    class fullauto_medium : FullAuto {
        showToPlayer = 0;
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

    drysound[] = { "\hlc_core\sound\empty_assaultrifles", 1, 1, 10 };
    reloadMagazineSound[] = { "nia_wp_hk416\snd\ar15_reload", 0.74, 1, 30 };
    changeFiremodeSound[] = { "nia_wp_hk416\snd\ar15_selector", 1, 1, 8 };
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    
    class hlc_GL_416AGC : UGL_F {
        cameradir = "gl_look";
        discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350 };
        discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m" }; /// the angle of gun changes with zeroing
        discreteDistanceInitIndex = 1;
        displayname = "AG-C";
        useModelOptics = false;
        useExternalOptic = false;
        optics = 1;
        cursoraim = "gl";
        magazinereloadtime = 0;
        reloadtime = 0.1;
        reloadAction = "NIA_GestureReloadAGC";
        reloadMagazineSound[] = { "hlc_core\sound\GL\agc_reload", 1.0, 1, 10 };
        drySound[] = { "hlc_core\sound\GL\GL_drystrike", 1, 1, 10 };
        modes[] = { "Single" };
        //magazineWell[] = { UGL_40x36 };
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

class hlc_rifle_416D145 : hlc_HK416_base
{
    dlc = "Niarms_HK416";
    author = "Toadie";
    scopearsenal = 2;
    scope = public;
    ACE_barrelTwist = 178;
    ACE_barrelLength = 368.3;

    deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
    hasBipod = false;          /// a weapon with bipod obviously has a bipod
    //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
    //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
    AB_barrelTwist = 7;
    AB_barrelLength = 14.5;
    initspeed = -0.90;
    reloadAction = "NIA_GestureReload416_WS";
    model = "nia_WP_HK416\mesh\416main\416D145.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416D145_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D14.5";/*(Compact/Tan)*/
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    recoil = "recoil_trg20";
    discretedistance[] = { 100,200,300,400 };
    discreteDistanceCameraPoint[] = { "eye", "eye_200", "eye_300", "eye_400" }; /// the angle of gun changes with zeroing
    cameraDir = "eye_look"; 
    discretedistanceinitindex = 0;
    bg_bipod = 0;
    reloadMagazineSound[] = { "nia_wp_hk416\snd\ar15_reload", 0.74, 1, 30 };
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_STD.rtm" };
    opticszoominit = 0.75;
    opticszoommax = 1.1;
    opticszoommin = 0.25;
    inertia = 0.325;
    __DEXTERITY(3.25 , 0); //afg,kx3
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts","416_light Stock" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat"};
    
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 71.6;
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
        class UnderBarrelSlot : asdg_UnderSlot {};
        class GripodSlot : nia_rifle_grips_slot {};
    };
    class ItemInfo
    {
        priority = 1;
        RMBhint = "XMC";
        onHoverText = "TODO XMC DSS";
    };
    class Single : Mode_SemiAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

            closure1[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            closure2[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            soundClosure[] = { closure1, 0.5, closure2, 0.5 };
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Carbine_Shot_SoundSet", "NIA_416Carbine_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Carbine_silencerShot_SoundSet", "NIA_416Carbine_silencerTail_SoundSet" };
        };
        __ROF(780);
        __MOA(1.45);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_SINGLE;
    };
    class FullAuto : Mode_FullAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

            closure1[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            closure2[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            soundClosure[] = { closure1, 0.5, closure2, 0.5 };
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Carbine_Shot_SoundSet", "NIA_416Carbine_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Carbine_silencerShot_SoundSet", "NIA_416Carbine_silencerTail_SoundSet" };
        };
        __ROF(780);
        __MOA(1.56);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_FULLAUTO;
    };
    class fullauto_medium : FullAuto {
        showToPlayer = 0;
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
    class Library
    {
        libTextDesc = "";
    };
   class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_x15";
        default = "hlc_rifle_416D145";
    };
   rhs_grip1_change = "hlc_rifle_416D145_grip";
   rhs_grip2_change = "hlc_rifle_416D145_grip2";
   rhs_grip3_change = "hlc_rifle_416D145_grip3";
   baseWeapon = "hlc_rifle_416D145";
    };

class hlc_rifle_416D145_grip : hlc_rifle_416D145
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_x15_grip";
        default = "hlc_rifle_416D145_grip";
    };
}; 
class hlc_rifle_416D145_grip2 : hlc_rifle_416D145
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_x15_grip2";
        default = "hlc_rifle_416D145_grip2";
    };
};
class hlc_rifle_416D145_grip3 : hlc_rifle_416D145
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_x15_grip3";
        default = "hlc_rifle_416D145_grip3";
    };
};
class hlc_rifle_416D145_x15 : hlc_rifle_416D145
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D145.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19;
    __DEXTERITY(3.25 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D145_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D145_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D145_x15_grip3";
    baseWeapon = "hlc_rifle_416D145_x15";
};

class hlc_rifle_416D145_x15_grip : hlc_rifle_416D145_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145_x15_grip2 : hlc_rifle_416D145_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145_x15_grip3 : hlc_rifle_416D145_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D145_tan : hlc_rifle_416D145 {
    author = "Toadie";
    picture = "\nia_WP_HK416\tex\ui\gear_416D145_camo1_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D14.5(Tan)";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_tan_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_tan_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_tan_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_tan_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_tan_x15";
        default = "hlc_rifle_416D145_tan";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_camo1_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper_camo.rvmat", "nia_wp_hk416\mat\416_lower_camo.rvmat", "nia_wp_hk416\mat\416_barrel_camo.rvmat", "nia_wp_hk416\mat\416_common_camo.rvmat", "nia_wp_hk416\mat\416_stocks_camo.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D145_tan_grip";
    rhs_grip2_change = "hlc_rifle_416D145_tan_grip2";
    rhs_grip3_change = "hlc_rifle_416D145_tan_grip3";
    baseWeapon = "hlc_rifle_416D145_tan";
};

class hlc_rifle_416D145_tan_grip : hlc_rifle_416D145_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_tan_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_tan_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_tan_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_tan_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_tan_x15_grip";
        default = "hlc_rifle_416D145_tan_grip";
    };
};
class hlc_rifle_416D145_tan_grip2 : hlc_rifle_416D145_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_tan_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_tan_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_tan_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_tan_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_tan_x15_grip2";
        default = "hlc_rifle_416D145_tan_grip2";
    };
};
class hlc_rifle_416D145_tan_grip3 : hlc_rifle_416D145_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_tan_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_tan_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_tan_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_tan_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_tan_x15_grip3";
        default = "hlc_rifle_416D145_tan_grip3";
    };
};
class hlc_rifle_416D145_tan_x15 : hlc_rifle_416D145_tan
{
    scopeArsenal = 0;
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19;
    __DEXTERITY(3.25 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D145_tan_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D145_tan_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D145_tan_x15_grip3";
    baseWeapon = "hlc_rifle_416D145_tan_x15";
};

class hlc_rifle_416D145_tan_x15_grip : hlc_rifle_416D145_tan_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145_tan_x15_grip2 : hlc_rifle_416D145_tan_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145_tan_x15_grip3 : hlc_rifle_416D145_tan_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D145_wdl : hlc_rifle_416D145 {
    author = "Toadie";
    picture = "\nia_WP_HK416\tex\ui\gear_416D145_camo2_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D14.5(Woodland)";/*(Compact/Tan)*/

    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_wdl_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_wdl_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_wdl_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_wdl_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_wdl_x15";
        default = "hlc_rifle_416D145_wdl";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_camo2_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper_camo.rvmat", "nia_wp_hk416\mat\416_lower_camo.rvmat", "nia_wp_hk416\mat\416_barrel_camo.rvmat", "nia_wp_hk416\mat\416_common_camo.rvmat", "nia_wp_hk416\mat\416_stocks_camo.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D145_wdl_grip";
    rhs_grip2_change = "hlc_rifle_416D145_wdl_grip2";
    rhs_grip3_change = "hlc_rifle_416D145_wdl_grip3";
    baseWeapon = "hlc_rifle_416D145_wdl";
};

class hlc_rifle_416D145_wdl_grip : hlc_rifle_416D145_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_wdl_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_wdl_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_wdl_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_wdl_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_wdl_x15_grip";
        default = "hlc_rifle_416D145_wdl_grip";
    };
};
class hlc_rifle_416D145_wdl_grip2 : hlc_rifle_416D145_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_wdl_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_wdl_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_wdl_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_wdl_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_wdl_x15_grip2";
        default = "hlc_rifle_416D145_wdl_grip2";
    };
};
class hlc_rifle_416D145_wdl_grip3 : hlc_rifle_416D145_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_wdl_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_wdl_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_wdl_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_wdl_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_wdl_x15_grip3";
        default = "hlc_rifle_416D145_wdl_grip3";
    };
};
class hlc_rifle_416D145_wdl_x15 : hlc_rifle_416D145_wdl
{
    scopeArsenal = 0;
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19;
    __DEXTERITY(3.25 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D145_wdl_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D145_wdl_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D145_wdl_x15_grip3";
    baseWeapon = "hlc_rifle_416D145_wdl_x15";
};

class hlc_rifle_416D145_wdl_x15_grip : hlc_rifle_416D145_wdl_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145_wdl_x15_grip2 : hlc_rifle_416D145_wdl_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145_wdl_x15_grip3 : hlc_rifle_416D145_wdl_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D145_CAG : hlc_rifle_416D145 {
    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416D145_CAG.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416D145-cag_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D14.5(CAG)";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 71.6;
        class UnderBarrelSlot : asdg_UnderSlot {};
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
        class GripodSlot {};
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_CAG_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_CAG_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_CAG_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_CAG_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_CAG_x15";
        default = "hlc_rifle_416D145_CAG";
    };
        handAnim[] =  { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_SMR.rtm" };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock","416_SMRmk1","CTR","Gunfuightmod3" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa","nia_wp_hk416\tex\toadie_416\geissele_smr_black_co.tga","nia_wp_hk416\tex\toadie_416\magpul_ctr_black_co.tga","nia_wp_hk416\tex\toadie_416\gunfighter_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat","nia_wp_hk416\mat\416_smr.rvmat","nia_wp_hk416\mat\magpul_ctr.rvmat","nia_wp_hk416\mat\gunfighter.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D145_CAG_grip";
    rhs_grip2_change = "hlc_rifle_416D145_CAG_grip2";
    rhs_grip3_change = "hlc_rifle_416D145_CAG_grip3";
    baseWeapon = "hlc_rifle_416D145_CAG";
};

class hlc_rifle_416D145_CAG_grip : hlc_rifle_416D145_CAG
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_CAG_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_CAG_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_CAG_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_CAG_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_CAG_x15_grip";
        default = "hlc_rifle_416D145_CAG_grip";
    };
};
class hlc_rifle_416D145_CAG_grip2 : hlc_rifle_416D145_CAG
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_CAG_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_CAG_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_CAG_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_CAG_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_CAG_x15_grip2";
        default = "hlc_rifle_416D145_CAG_grip2";
    };
};
class hlc_rifle_416D145_CAG_grip3 : hlc_rifle_416D145_CAG
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145_CAG_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145_CAG_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145_CAG_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145_CAG_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145_CAG_x15_grip3";
        default = "hlc_rifle_416D145_CAG_grip3";
    };
};
class hlc_rifle_416D145_CAG_x15 :hlc_rifle_416D145_CAG
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D145_CAG.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19;
    __DEXTERITY(3.25 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D145_CAG_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D145_CAG_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D145_CAG_x15_grip3";
    baseWeapon = "hlc_rifle_416D145_CAG_x15";
};

class hlc_rifle_416D145_CAG_x15_grip : hlc_rifle_416D145_CAG_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145_CAG_x15_grip2 : hlc_rifle_416D145_CAG_x15_grip
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145_CAG_x15_grip3 : hlc_rifle_416D145_CAG_x15_grip
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D145C : hlc_rifle_416D145
{
    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416D145c.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416D145c_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D14.5C";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145C_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145C_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145C_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145C_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145C_x15";
        default = "hlc_rifle_416D145C";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "416_SMRmk1", "CTR", "Gunfuightmod3" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "nia_wp_hk416\tex\toadie_416\geissele_smr_black_co.tga", "nia_wp_hk416\tex\toadie_416\magpul_ctr_black_co.tga", "nia_wp_hk416\tex\toadie_416\gunfighter_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "nia_wp_hk416\mat\416_smr.rvmat", "nia_wp_hk416\mat\magpul_ctr.rvmat", "nia_wp_hk416\mat\gunfighter.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D145C_grip";
    rhs_grip2_change = "hlc_rifle_416D145C_grip2";
    rhs_grip3_change = "hlc_rifle_416D145C_grip3";
    baseWeapon = "hlc_rifle_416D145C";
};

class hlc_rifle_416D145C_grip : hlc_rifle_416D145C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145C_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145C_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145C_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145C_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145C_x15_grip";
        default = "hlc_rifle_416D145C_grip";
    };
};
class hlc_rifle_416D145C_grip2 : hlc_rifle_416D145C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145C_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145C_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145C_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145C_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145C_x15_grip2";
        default = "hlc_rifle_416D145C_grip2";
    };
};
class hlc_rifle_416D145C_grip3 : hlc_rifle_416D145C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D145C_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D145C_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D145C_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D145C_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D145C_x15_grip3";
        default = "hlc_rifle_416D145C_grip3";
    };
};
class hlc_rifle_416D145C_x15 :hlc_rifle_416D145C
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D145c.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19;
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D145C_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D145C_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D145C_x15_grip3";
    baseWeapon = "hlc_rifle_416D145C_x15";
};

class hlc_rifle_416D145C_x15_grip : hlc_rifle_416D145C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145C_x15_grip2 : hlc_rifle_416D145C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D145C_x15_grip3 : hlc_rifle_416D145C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.25 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D145_gl : hlc_rifle_416D145
{
    dlc = "Niarms_HK416";
    author = "Toadie";
    displayName = "HK HK416 D14.5(GL)";/*(Compact/Tan)*/
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AGC.rtm" };
    picture = "\nia_WP_HK416\tex\ui\gear_416D145-agc_ca";
    model = "nia_WP_HK416\mesh\416main\416D145_agc.p3d";
    muzzles[] = { "this", "hlc_GL_416AGC" };
    baseWeapon = "hlc_rifle_416D145_gl";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "HLC_rifle_416D145_gl_x15";
        hlc_50rnd_556x45_SOST = "HLC_rifle_416D145_gl_x15";
        hlc_50rnd_556x45_SPR = "HLC_rifle_416D145_gl_x15";
        hlc_50rnd_556x45_M = "HLC_rifle_416D145_gl_x15";
        hlc_50rnd_556x45_MDim = "HLC_rifle_416D145_gl_x15";
        default = "HLC_rifle_416D145_gl";
    };
    inertia = 0.325 + 0.15;
    __DEXTERITY(3.25 + 1.5, 0); //afg,kx3
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "AG-C_Firecntrol" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "hlc_core\tex\toadie_ag-c\416_agc_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "hlc_core\mat\hk_agc.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 113;
        class UnderBarrelSlot {};
        class GripodSlot {};
    };
};
class hlc_rifle_416D145_gl_x15 : HLC_rifle_416D145_gl
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D145_agc.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19 + 0.15;
    __DEXTERITY(3.25 + 1.9 + 1.5, 1); //afg,kx3   
};

class hlc_rifle_416D10 : hlc_rifle_416D145
{
    ACE_barrelTwist = 178;
    ACE_barrelLength = 266.7;
    author = "Toadie";
    dlc = "Niarms_HK416";
    deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
    hasBipod = false;          /// a weapon with bipod obviously has a bipod
    //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
    //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
    AB_barrelTwist = 7;
    AB_barrelLength = 14.5;
    initspeed = -0.80;
    reloadAction = "NIA_GestureReload416_WS";
    scope = public;
    model = "nia_WP_HK416\mesh\416main\416D10.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416D10_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D10";/*(Compact/Tan)*/
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    recoil = "recoil_trg20";
    discretedistance[] = { 100, 200, 300, 400 };
    discreteDistanceCameraPoint[] = { "eye", "eye_200", "eye_300", "eye_400" }; /// the angle of gun changes with zeroing
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    bg_bipod = 0;
    //hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-556tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    //HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    reloadMagazineSound[] = { "nia_wp_hk416\snd\ar15_reload", 0.74, 1, 30 };
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_STD.rtm" };
    opticszoominit = 0.75;
    opticszoommax = 1.1;
    opticszoommin = 0.25;
    inertia = 0.31;
    __DEXTERITY(3.1, 0); //afg,kx3
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 66.1;
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
        class UnderBarrelSlot : asdg_UnderSlot {};
        class GripodSlot : nia_rifle_grips_slot {};
    };
    class ItemInfo
    {
        priority = 1;
        RMBhint = "XMC";
        onHoverText = "TODO XMC DSS";
    };
    class Single : Mode_SemiAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_Shot_SoundSet", "NIA_416SBR_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_silencerShot_SoundSet", "NIA_416SBR_silencerTail_SoundSet" };
        };
        __ROF(750);
        __MOA(2.47);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_SINGLE;
    };
    class FullAuto : Mode_FullAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_Shot_SoundSet", "NIA_416SBR_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_silencerShot_SoundSet", "NIA_416SBR_silencerTail_SoundSet" };
        };
        __ROF(750);
        __MOA(2.56);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_FULLAUTO;
    };
    class fullauto_medium : FullAuto {
        showToPlayer = 0;
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
    class Library
    {
        libTextDesc = "";
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_x15";
        default = "hlc_rifle_416D10";
    };
    rhs_grip1_change = "hlc_rifle_416D10_grip";
    rhs_grip2_change = "hlc_rifle_416D10_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_grip3";
    baseWeapon = "hlc_rifle_416D10";
};

class hlc_rifle_416D10_grip : hlc_rifle_416D10
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_x15_grip";
        default = "hlc_rifle_416D10_grip";
    };
};
class hlc_rifle_416D10_grip2 : hlc_rifle_416D10
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_x15_grip2";
        default = "hlc_rifle_416D10_grip2";
    };
};
class hlc_rifle_416D10_grip3 : hlc_rifle_416D10
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_x15_grip3";
        default = "hlc_rifle_416D10_grip3";
    };
};
class hlc_rifle_416D10_x15 : hlc_rifle_416D10
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D10.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.31 + 0.19;
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D10_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_x15_grip3";
    baseWeapon = "hlc_rifle_416D10_x15";
};

class hlc_rifle_416D10_x15_grip : hlc_rifle_416D10_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_x15_grip2 : hlc_rifle_416D10_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_x15_grip3 : hlc_rifle_416D10_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};


class hlc_rifle_416D10_tan : hlc_rifle_416D10 {
    author = "Toadie";
    picture = "\nia_WP_HK416\tex\ui\gear_416D10_camo1_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D10(Tan)";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_tan_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_tan_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_tan_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_tan_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_tan_x15";
        default = "hlc_rifle_416D10_tan";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_camo1_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper_camo.rvmat", "nia_wp_hk416\mat\416_lower_camo.rvmat", "nia_wp_hk416\mat\416_barrel_camo.rvmat", "nia_wp_hk416\mat\416_common_camo.rvmat", "nia_wp_hk416\mat\416_stocks_camo.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D10_tan_grip";
    rhs_grip2_change = "hlc_rifle_416D10_tan_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_tan_grip3";
    baseWeapon = "hlc_rifle_416D10_tan";
};

class hlc_rifle_416D10_tan_grip : hlc_rifle_416D10_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_tan_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_tan_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_tan_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_tan_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_tan_x15_grip";
        default = "hlc_rifle_416D10_tan_grip";
    };
};
class hlc_rifle_416D10_tan_grip2 : hlc_rifle_416D10_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.1, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_tan_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_tan_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_tan_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_tan_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_tan_x15_grip2";
        default = "hlc_rifle_416D10_tan_grip2";
    };
};
class hlc_rifle_416D10_tan_grip3 : hlc_rifle_416D10_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_tan_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_tan_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_tan_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_tan_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_tan_x15_grip3";
        default = "hlc_rifle_416D10_tan_grip3";
    };
};
class hlc_rifle_416D10_tan_x15 : hlc_rifle_416D10_tan
{
    scopeArsenal = 0;
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.31 + 0.19;
    __DEXTERITY(3.1 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10_tan_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D10_tan_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_tan_x15_grip3";
    baseWeapon = "hlc_rifle_416D10_tan_x15";
};

class hlc_rifle_416D10_tan_x15_grip : hlc_rifle_416D10_tan_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_tan_x15_grip2 : hlc_rifle_416D10_tan_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_tan_x15_grip3 : hlc_rifle_416D10_tan_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D10_wdl : hlc_rifle_416D10 {
    author = "Toadie";
    picture = "\nia_WP_HK416\tex\ui\gear_416D10_camo2_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D10(Woodland)";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_wdl_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_wdl_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_wdl_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_wdl_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_wdl_x15";
        default = "hlc_rifle_416D10_wdl";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_camo2_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper_camo.rvmat", "nia_wp_hk416\mat\416_lower_camo.rvmat", "nia_wp_hk416\mat\416_barrel_camo.rvmat", "nia_wp_hk416\mat\416_common_camo.rvmat", "nia_wp_hk416\mat\416_stocks_camo.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D10_wdl_grip";
    rhs_grip2_change = "hlc_rifle_416D10_wdl_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_wdl_grip3";
    baseWeapon = "hlc_rifle_416D10_wdl";
};

class hlc_rifle_416D10_wdl_grip : hlc_rifle_416D10_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_wdl_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_wdl_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_wdl_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_wdl_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_wdl_x15_grip";
        default = "hlc_rifle_416D10_wdl_grip";
    };
};
class hlc_rifle_416D10_wdl_grip2 : hlc_rifle_416D10_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_wdl_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_wdl_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_wdl_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_wdl_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_wdl_x15_grip2";
        default = "hlc_rifle_416D10_wdl_grip2";
    };
};
class hlc_rifle_416D10_wdl_grip3 : hlc_rifle_416D10_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_wdl_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_wdl_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_wdl_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_wdl_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_wdl_x15_grip3";
        default = "hlc_rifle_416D10_wdl_grip3";
    };
};
class hlc_rifle_416D10_wdl_x15 : hlc_rifle_416D10_wdl
{
    scopeArsenal = 0;
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.31 + 0.19;
    __DEXTERITY(3.1 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10_wdl_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D10_wdl_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_wdl_x15_grip3";
    baseWeapon = "hlc_rifle_416D10_wdl_x15";
};

class hlc_rifle_416D10_wdl_x15_grip : hlc_rifle_416D10_wdl_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_wdl_x15_grip2 : hlc_rifle_416D10_wdl_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_wdl_x15_grip3 : hlc_rifle_416D10_wdl_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.1 + 1.9, 1); //afg,kx3
};


class hlc_rifle_416D10_gl :hlc_rifle_416D10
{
    dlc = "Niarms_HK416";
    author = "Toadie";
    scope = public;
    displayName = "HK HK416 D10(GL)";/*(Compact/Tan)*/
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AGC.rtm" };
    picture = "\nia_WP_HK416\tex\ui\gear_416D10-agc_ca";
    model = "nia_WP_HK416\mesh\416main\416D10_agc.p3d";
    muzzles[] = { "this", "hlc_GL_416AGC" };
    baseWeapon = "hlc_rifle_416D10_gl";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "HLC_rifle_416D10_gl_x15";
        hlc_50rnd_556x45_SOST = "HLC_rifle_416D10_gl_x15";
        hlc_50rnd_556x45_SPR = "HLC_rifle_416D10_gl_x15";
        hlc_50rnd_556x45_M = "HLC_rifle_416D10_gl_x15";
        hlc_50rnd_556x45_MDim = "HLC_rifle_416D10_gl_x15";
        default = "HLC_rifle_416D10_gl";
    };
    inertia = 0.3+0.15;
    __DEXTERITY(3+1.5, 0); //afg,kx3
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock","AG-C_Firecntrol" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa","hlc_core\tex\toadie_ag-c\416_agc_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat","hlc_core\mat\hk_agc.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 99.6;
        class UnderBarrelSlot {};
        class GripodSlot{};
    };
};
class hlc_rifle_416D10_gl_x15 : HLC_rifle_416D10_gl
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D10_agc.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19+0.15;
    __DEXTERITY(3.25 + 1.9+1.5, 1); //afg,kx3   
};

class hlc_rifle_416D10C : hlc_rifle_416D10
{

    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416D10C.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416D10c_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    dlc = "Niarms_HK416";
    displayName = "HK HK416 D10C";/*(Compact/Tan)*/
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10C_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10C_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10C_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10C_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10C_x15";
        default = "hlc_rifle_416D10C";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416C_foregrip", "416C_extension" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416c_foreend_co.paa", "nia_wp_hk416\tex\toadie_416\416c_stock_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416c_foreend.rvmat", "nia_wp_hk416\mat\416c_stock.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D10C_grip";
    rhs_grip2_change = "hlc_rifle_416D10C_grip2";
    rhs_grip3_change = "hlc_rifle_416D10C_grip3";
    baseWeapon = "hlc_rifle_416D10C";
};

class hlc_rifle_416D10C_grip : hlc_rifle_416D10C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10C_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10C_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10C_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10C_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10C_x15_grip";
        default = "hlc_rifle_416D10C_grip";
    };
};
class hlc_rifle_416D10C_grip2 : hlc_rifle_416D10C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10C_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10C_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10C_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10C_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10C_x15_grip2";
        default = "hlc_rifle_416D10C_grip2";
    };
};
class hlc_rifle_416D10C_grip3 : hlc_rifle_416D10C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 , 1); //afg,kx3

    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10C_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10C_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10C_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10C_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10C_x15_grip3";
        default = "hlc_rifle_416D10C_grip3";
    };
};
class hlc_rifle_416D10C_x15 :hlc_rifle_416D10C
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D10C.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.30 + 0.19;
    __DEXTERITY(3.0 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10C_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D10C_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D10C_x15_grip3";
    baseWeapon = "hlc_rifle_416D10C_x15";
};

class hlc_rifle_416D10C_x15_grip : hlc_rifle_416D10C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10C_x15_grip2 : hlc_rifle_416D10C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10C_x15_grip3 : hlc_rifle_416D10C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D10C_PTC : hlc_rifle_416D10
{

    author = "Toadie,Part-Time Canadian";
    model = "nia_WP_HK416\mesh\416main\416D10C.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416D10c_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D10C(PTC)";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10C_PTC_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10C_PTC_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10C_PTC_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10C_PTC_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10C_PTC_x15";
        default = "hlc_rifle_416D10C_PTC";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416C_extension", "416C_foregrip" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_JTC_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416c_stock_co.paa", "nia_wp_hk416\tex\toadie_416\416c_foreend_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_JTC_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416c_stock.rvmat", "nia_wp_hk416\mat\416c_foreend.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D10C_PTC_grip";
    rhs_grip2_change = "hlc_rifle_416D10C_PTC_grip2";
    rhs_grip3_change = "hlc_rifle_416D10C_PTC_grip3";
    baseWeapon = "hlc_rifle_416D10C_PTC";
};

class hlc_rifle_416D10C_PTC_grip : hlc_rifle_416D10C_PTC
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10C_PTC_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10C_PTC_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10C_PTC_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10C_PTC_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10C_PTC_x15_grip";
        default = "hlc_rifle_416D10C_PTC_grip";
    };
};
class hlc_rifle_416D10C_PTC_grip2 : hlc_rifle_416D10C_PTC
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10C_PTC_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10C_PTC_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10C_PTC_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10C_PTC_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10C_PTC_x15_grip2";
        default = "hlc_rifle_416D10C_PTC_grip2";
    };
};
class hlc_rifle_416D10C_PTC_grip3 : hlc_rifle_416D10C_PTC
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3

    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10C_PTC_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10C_PTC_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10C_PTC_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10C_PTC_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10C_PTC_x15_grip3";
        default = "hlc_rifle_416D10C_PTC_grip3";
    };
};
class hlc_rifle_416D10C_PTC_x15 :hlc_rifle_416D10C_PTC
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D10c.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.30 + 0.19;
    __DEXTERITY(3.0 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10C_PTC_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D10C_PTC_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D10C_PTC_x15_grip3";
    baseWeapon = "hlc_rifle_416D10C_PTC_x15";
};

class hlc_rifle_416D10C_PTC_x15_grip : hlc_rifle_416D10C_PTC_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10C_PTC_x15_grip2 : hlc_rifle_416D10C_PTC_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10C_PTC_x15_grip3 : hlc_rifle_416D10C_PTC_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_RAHG : hlc_rifle_416D10
{
    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416D10_RAHG.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416D10-rahg_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D10(RAHG)";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistance[] = { 200, 300, 400, 500, 600 };
    discreteDistanceCameraPoint[] = { "eye", "eye_300", "eye_400", "eye_500", "eye_600" }; /// the angle of gun changes with zeroing
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
        handAnim[] =  { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_SMR.rtm" };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "Cylinder026", "KAC_rearsight" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "nia_wp_hk416\tex\toadie_416\416_rahg_co.paa", "nia_wp_hk416\tex\toadie_416\kac_buis_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "nia_wp_hk416\mat\416_rahg.rvmat", "nia_wp_hk416\mat\kac_buis.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 71.6;
        class UnderBarrelSlot : asdg_UnderSlot {};
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
        class GripodSlot {};
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_RAHG_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_RAHG_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_RAHG_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_RAHG_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_RAHG_x15";
        default = "hlc_rifle_416D10_RAHG";
    };
    rhs_grip1_change = "hlc_rifle_416D10_RAHG_grip";
    rhs_grip2_change = "hlc_rifle_416D10_RAHG_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_RAHG_grip3";
    baseWeapon = "hlc_rifle_416D10_RAHG";
};

class hlc_rifle_416D10_RAHG_grip : hlc_rifle_416D10_RAHG
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_RAHG_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_RAHG_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_RAHG_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_RAHG_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_RAHG_x15_grip";
        default = "hlc_rifle_416D10_RAHG_grip";
    };
};
class hlc_rifle_416D10_RAHG_grip2 : hlc_rifle_416D10_RAHG
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_RAHG_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_RAHG_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_RAHG_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_RAHG_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_RAHG_x15_grip2";
        default = "hlc_rifle_416D10_RAHG_grip2";
    };
};
class hlc_rifle_416D10_RAHG_grip3 : hlc_rifle_416D10_RAHG
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_RAHG_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_RAHG_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_RAHG_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_RAHG_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_RAHG_x15_grip3";
        default = "hlc_rifle_416D10_RAHG_grip3";
    };
};
class hlc_rifle_416D10_RAHG_x15 :hlc_rifle_416D10_RAHG
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D10_RAHG.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.30 + 0.19;
    __DEXTERITY(3.0 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10_RAHG_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D10_RAHG_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_RAHG_x15_grip3";
    baseWeapon = "hlc_rifle_416D10_x15_RAHG";
};

class hlc_rifle_416D10_RAHG_x15_grip : hlc_rifle_416D10_RAHG_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_RAHG_x15_grip2 : hlc_rifle_416D10_RAHG_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_RAHG_x15_grip3 : hlc_rifle_416D10_RAHG_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D10_geissele :hlc_rifle_416D10_RAHG
{
    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416D10_Geissele.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416d10-geisele_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    dlc = "Niarms_HK416";
    displayName = "HK HK416 D10(SMR)";/*(Compact/Tan)*/
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistance[] = { 200 };
    discreteDistanceCameraPoint[] = { "eye_200" }; /// the angle of gun changes with zeroing
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "416_SMRmk1", "MAp2" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "nia_wp_hk416\tex\toadie_416\geissele_smr_co.tga", "nia_wp_hk416\tex\toadie_acr\map2-556tan_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "nia_wp_hk416\mat\416_smr.rvmat", "nia_wp_hk416\mat\map2.rvmat" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_geissele_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_geissele_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_geissele_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_geissele_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_geissele_x15";
        default = "hlc_rifle_416D10_geissele";
    };
        handAnim[] =  { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_SMR.rtm" };
        rhs_grip1_change = "hlc_rifle_416D10_geissele_grip";
        rhs_grip2_change = "hlc_rifle_416D10_geissele_grip2";
        rhs_grip3_change = "hlc_rifle_416D10_geissele_grip3";
        baseWeapon = "hlc_rifle_416D10_geissele";
};

class hlc_rifle_416D10_geissele_grip : hlc_rifle_416D10_geissele
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_geissele_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_geissele_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_geissele_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_geissele_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_geissele_x15_grip";
        default = "hlc_rifle_416D10_geissele_grip";
    };
};
class hlc_rifle_416D10_geissele_grip2 : hlc_rifle_416D10_geissele
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_geissele_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_geissele_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_geissele_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_geissele_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_geissele_x15_grip2";
        default = "hlc_rifle_416D10_geissele_grip2";
    };
};
class hlc_rifle_416D10_geissele_grip3 : hlc_rifle_416D10_geissele
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_geissele_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_geissele_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_geissele_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_geissele_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_geissele_x15_grip3";
        default = "hlc_rifle_416D10_geissele_grip3";
    };
};

class hlc_rifle_416D10_geissele_x15 :hlc_rifle_416D10_geissele
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D10_geissele.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.3 + 0.19;
    __DEXTERITY(3.0 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10_geissele_grip";
    rhs_grip2_change = "hlc_rifle_416D10_geissele_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_geissele_grip3";
    baseWeapon = "hlc_rifle_416D10_geissele";
};

class hlc_rifle_416D10_geissele_x15_grip : hlc_rifle_416D10_geissele_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_geissele_x15_grip2 : hlc_rifle_416D10_geissele_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_geissele_x15_grip3 : hlc_rifle_416D10_geissele_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};


class hlc_rifle_416D10_ptato : hlc_rifle_416D10_geissele
{
    ACE_barrelTwist = 178;
    ACE_barrelLength = 254;
    author = "Toadie,Warlord_Murphy";
    model = "nia_WP_HK416\mesh\416main\416D10_potato.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416d10-potato_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D10(Potato)";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistance[] = { 300};
    discreteDistanceCameraPoint[] = { "eye_300"}; /// the angle of gun changes with zeroing
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    reloadAction = "NIA_GestureReload416_BAD";
    reloadMagazineSound[] = { "nia_wp_hk416\snd\ar15_reloadfaster", 0.74, 1, 30 };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "416_SMRmk1", "VLTR_IMOD", "Gunfuightmod3","Geissele_SCH","MAp2" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "nia_wp_hk416\tex\toadie_416\geissele_smr_co.tga", "nia_wp_hk416\tex\toadie_416\vltor_imod_tan_co.tga", "nia_wp_hk416\tex\toadie_416\gunfighter_co.tga","nia_wp_hk416\tex\toadie_416\geissele_sch_co.tga","nia_wp_hk416\tex\toadie_acr\map2-556tan_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "nia_wp_hk416\mat\416_smr.rvmat", "nia_wp_hk416\mat\vltor_imod.rvmat", "nia_wp_hk416\mat\gunfighter.rvmat","nia_wp_hk416\mat\geissele_sch.rvmat","nia_wp_hk416\mat\map2.rvmat" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_ptato_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_ptato_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_ptato_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_ptato_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_ptato_x15";
        default = "hlc_rifle_416D10_ptato";
    };
        handAnim[] =  { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_SMR.rtm" };
        rhs_grip1_change = "hlc_rifle_416D10_ptato_grip";
        rhs_grip2_change = "hlc_rifle_416D10_ptato_grip2";
        rhs_grip3_change = "hlc_rifle_416D10_ptato_grip3";
        baseWeapon = "hlc_rifle_416D10_ptato";
};

class hlc_rifle_416D10_ptato_grip : hlc_rifle_416D10_ptato
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_ptato_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_ptato_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_ptato_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_ptato_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_ptato_x15_grip";
        default = "hlc_rifle_416D10_ptato_grip";
    };
};
class hlc_rifle_416D10_ptato_grip2 : hlc_rifle_416D10_ptato
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_ptato_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_ptato_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_ptato_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_ptato_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_ptato_x15_grip2";
        default = "hlc_rifle_416D10_ptato_grip2";
    };
};
class hlc_rifle_416D10_ptato_grip3 : hlc_rifle_416D10_ptato
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_ptato_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_ptato_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_ptato_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_ptato_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_ptato_x15_grip3";
        default = "hlc_rifle_416D10_ptato_grip3";
    };
};
class hlc_rifle_416D10_ptato_x15 :hlc_rifle_416D10_ptato
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D10_potato.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    reloadMagazineSound[] = { "nia_wp_hk416\snd\ar15_reload", 0.74, 1, 30 };
    inertia = 0.3 + 0.19;
    __DEXTERITY(3.0 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10_ptato_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D10_ptato_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_ptato_x15_grip3";
    baseWeapon = "hlc_rifle_416D10_ptato_x15";
};

class hlc_rifle_416D10_ptato_x15_grip : hlc_rifle_416D10_ptato_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_ptato_x15_grip2 : hlc_rifle_416D10_ptato_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_ptat_x15o_grip3 : hlc_rifle_416D10_ptato_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D10_st6 : hlc_rifle_416D10_RAHG
{
    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416D10_ST6.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416d10-st6_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D10(DEVGRU)";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistance[] = { 200, 300, 400, 500, 600 };
    discreteDistanceCameraPoint[] = { "eye", "eye_300", "eye_400", "eye_500", "eye_600" }; /// the angle of gun changes with zeroing
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "Cylinder026", "CTR", "Gunfuightmod3", "Geissele_SCH", "KAC_rearsight" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "nia_wp_hk416\tex\toadie_416\416_rahg_co.tga", "nia_wp_hk416\tex\toadie_416\magpul_ctr_black_co.tga", "nia_wp_hk416\tex\toadie_416\gunfighter_co.tga", "nia_wp_hk416\tex\toadie_416\geissele_sch_co.tga", "nia_wp_hk416\tex\toadie_416\kac_buis_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "nia_wp_hk416\mat\416_rahg.rvmat", "nia_wp_hk416\mat\magpul_ctr.rvmat", "nia_wp_hk416\mat\gunfighter.rvmat", "nia_wp_hk416\mat\geissele_sch.rvmat", "nia_wp_hk416\mat\kac_buis.rvmat" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_st6_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_st6_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_st6_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_st6_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_st6_x15";
        default = "hlc_rifle_416D10_st6";
    };
        handAnim[] =  { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_SMR.rtm" };
        rhs_grip1_change = "hlc_rifle_416D10_st6_grip";
        rhs_grip2_change = "hlc_rifle_416D10_st6_grip2";
        rhs_grip3_change = "hlc_rifle_416D10_st6_grip3";
        baseWeapon = "hlc_rifle_416D10_st6";
};

class hlc_rifle_416D10_st6_grip : hlc_rifle_416D10_st6
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_st6_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_st6_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_st6_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_st6_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_st6_x15_grip";
        default = "hlc_rifle_416D10_st6_grip";
    };
};
class hlc_rifle_416D10_st6_grip2 : hlc_rifle_416D10_st6
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_st6_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_st6_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_st6_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_st6_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_st6_x15_grip2";
        default = "hlc_rifle_416D10_st6_grip2";
    };
};
class hlc_rifle_416D10_st6_grip3 : hlc_rifle_416D10_st6
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D10_st6_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D10_st6_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D10_st6_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D10_st6_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D10_st6_x15_grip3";
        default = "hlc_rifle_416D10_st6_grip3";
    };
};
class hlc_rifle_416D10_st6_x15 :hlc_rifle_416D10_st6
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D10_ST6.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.3 + 0.19;
    __DEXTERITY(3.0 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D10_st6_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D10_st6_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D10_st6_x15_grip3";
    baseWeapon = "hlc_rifle_416D10_st6_x15";
};

class hlc_rifle_416D10_st6_x15_grip : hlc_rifle_416D10_st6_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
};
class hlc_rifle_416D10_st6_x15_grip2 : hlc_rifle_416D10_st6_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
};
class hlc_rifle_416D10_st6_x15_grip3 : hlc_rifle_416D10_st6_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.0, 1); //afg,kx3
};

class hlc_rifle_416C :hlc_rifle_416D10
{
    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416C.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416c_ca";
    dlc = "Niarms_HK416";
    inertia = 0.295;
    __DEXTERITY(2.95, 0); //afg,kx3
    displayName = "HK HK416C";/*(Compact/Tan)*/
    hiddenSelections[] = { "416_upper", "416_lower", "416C_extension", "416_mainparts", "416C_Foregrip" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416c_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416c_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416c_stock_co.tga", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416c_foreend_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416c_upper.rvmat", "nia_wp_hk416\mat\416C_lower.rvmat", "nia_wp_hk416\mat\416C_Stock.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416c_foreend.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 65.00;
    };
    class Single : Mode_SemiAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_Shot_SoundSet", "NIA_416SBR_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_silencerShot_SoundSet", "NIA_416SBR_silencerTail_SoundSet" };
        };
        __ROF(833);
        __MOA(3.7);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_SINGLE;

    };
    class FullAuto : Mode_FullAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_Shot_SoundSet", "NIA_416SBR_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_silencerShot_SoundSet", "NIA_416SBR_silencerTail_SoundSet" };
        };
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_FULLAUTO;
        __ROF(833);
        __MOA(4.1);
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416C_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416C_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416C_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416C_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416C_x15";
        default = "hlc_rifle_416C";
    };
    rhs_grip1_change = "hlc_rifle_416C_grip";
    rhs_grip2_change = "hlc_rifle_416C_grip2";
    rhs_grip3_change = "hlc_rifle_416C_grip3";
    baseWeapon = "hlc_rifle_416C";
};

class hlc_rifle_416C_grip : hlc_rifle_416C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(2.95+1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416C_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416C_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416C_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416C_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416C_x15_grip";
        default = "hlc_rifle_416C_grip";
    };
};
class hlc_rifle_416C_grip2 : hlc_rifle_416C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416C_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416C_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416C_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416C_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416C_x15_grip2";
        default = "hlc_rifle_416C_grip2";
    };
};
class hlc_rifle_416C_grip3 : hlc_rifle_416C
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416C_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416C_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416C_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416C_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416C_x15_grip3";
        default = "hlc_rifle_416C_grip3";
    };
};
class hlc_rifle_416C_x15 :hlc_rifle_416C
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416c.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.295 + 0.19;
    __DEXTERITY(2.95 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416C_x15_grip";
    rhs_grip2_change = "hlc_rifle_416C_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416C_x15_grip3";
    baseWeapon = "hlc_rifle_416C_x15";
};

class hlc_rifle_416C_x15_grip : hlc_rifle_416C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416C_x15_grip2 : hlc_rifle_416C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416C_x15_grip3 : hlc_rifle_416C_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
};

class hlc_rifle_BAB :hlc_rifle_416C
{
    dlc = "Niarms_HK416";
    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416C.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_babs_ca";
    inertia = 0.295;
    __DEXTERITY(2.95, 0); //afg,kx3
    displayName = "HK HK416C (Team Babs)";/*(Compact/Tan)*/
    hiddenSelections[] = { "416_upper", "416_lower", "416C_extension", "416_mainparts", "416C_Foregrip" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\bab_upper_co.paa", "nia_wp_hk416\tex\toadie_416\bab_lower_co.paa", "nia_wp_hk416\tex\toadie_416\bab_stock_co.tga", "nia_wp_hk416\tex\toadie_416\bab_common_co.paa", "nia_wp_hk416\tex\toadie_416\bab_foreend_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416c_upper.rvmat", "nia_wp_hk416\mat\bab_lower.rvmat", "nia_wp_hk416\mat\416C_Stock.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416c_foreend.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 65.00;
    };
    class Single : Mode_SemiAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_Shot_SoundSet", "NIA_416SBR_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_silencerShot_SoundSet", "NIA_416SBR_silencerTail_SoundSet" };
        };
        __ROF(833);
        __MOA(3.7);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_SINGLE;

    };
    class FullAuto : Mode_FullAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_Shot_SoundSet", "NIA_416SBR_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416SBR_silencerShot_SoundSet", "NIA_416SBR_silencerTail_SoundSet" };
        };

        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_FULLAUTO;
        __ROF(833);
        __MOA(4.1);
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_bab_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_bab_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_bab_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_bab_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_bab_x15";
        default = "hlc_rifle_bab";
    };
    rhs_grip1_change = "hlc_rifle_bab_grip";
    rhs_grip2_change = "hlc_rifle_bab_grip2";
    rhs_grip3_change = "hlc_rifle_bab_grip3";
    baseWeapon = "hlc_rifle_bab";
};

class hlc_rifle_bab_grip : hlc_rifle_bab
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_bab_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_bab_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_bab_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_bab_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_bab_x15_grip";
        default = "hlc_rifle_bab_grip";
    };
};
class hlc_rifle_bab_grip2 : hlc_rifle_bab
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_bab_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_bab_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_bab_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_bab_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_bab_x15_grip2";
        default = "hlc_rifle_bab_grip2";
    };
};
class hlc_rifle_bab_grip3 : hlc_rifle_bab
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_bab_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_bab_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_bab_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_bab_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_bab_x15_grip3";
        default = "hlc_rifle_bab_grip3";
    };
};
class hlc_rifle_bab_x15 :hlc_rifle_bab
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416c.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.295 + 0.19;
    __DEXTERITY(2.95 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_bab_x15_grip";
    rhs_grip2_change = "hlc_rifle_bab_x15_grip2";
    rhs_grip3_change = "hlc_rifle_bab_x15_grip3";
    baseWeapon = "hlc_rifle_bab_x15";
};

class hlc_rifle_bab_x15_grip : hlc_rifle_bab_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
};
class hlc_rifle_bab_x15_grip2 : hlc_rifle_bab_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
};
class hlc_rifle_bab_x15_grip3 : hlc_rifle_bab_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(2.95 + 1.9, 1); //afg,kx3
};

class hlc_rifle_M27IAR : hlc_rifle_416D145
{
    ACE_barrelTwist = 178;
    ACE_barrelLength =419;
    author = "Toadie";
    dlc = "Niarms_HK416";
    deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
    hasBipod = false;          /// a weapon with bipod obviously has a bipod
    //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
    //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
    AB_barrelTwist = 7;
    AB_barrelLength = 14.5;
    initspeed = -0.93;
    reloadAction = "NIA_GestureReload416";
    scope = public;
    model = "nia_WP_HK416\mesh\416main\M27IAR.p3d";
    picture = "\nia_WP_HK416\tex\ui\IAR_ca.paa";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "M27 IAR";
    descriptionShort = "Light Support Weapon<br/>Caliber: 5.56x45mm NATO";
    recoil = "recoil_trg20";
    discretedistance[] = { 100, 300, 400,500,600 };
    discreteDistanceCameraPoint[] = { "eye",  "eye_300", "eye_400","eye_500","eye_600" }; /// the angle of gun changes with zeroing
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    bg_bipod = 0;
    //hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-556tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    //HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    reloadMagazineSound[] = { "nia_wp_hk416\snd\ar15_reload", 0.74, 1, 30 };
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_STD.rtm" };
    opticszoominit = 0.75;
    opticszoommax = 1.1;
    opticszoommin = 0.25;
    inertia = 0.36;
    __DEXTERITY(3.6, 0); //afg,kx3
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "M27_foregrip", "KAC_rearsight" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\m27_upper_co.paa", "nia_wp_hk416\tex\toadie_416\M27_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "nia_wp_hk416\tex\toadie_416\416_extendedforegrip_co.tga", "nia_wp_hk416\tex\toadie_416\kac_buis_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\m27_upper.rvmat", "nia_wp_hk416\mat\M27_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "nia_wp_hk416\mat\416_extendedforegrip.rvmat", "nia_wp_hk416\mat\kac_buis.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 79.5;
        class UnderBarrelSlot : asdg_UnderSlot {};
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
        class GripodSlot : nia_rifle_grips_slot {};
    };
    class ItemInfo
    {
        priority = 1;
        RMBhint = "XMC";
        onHoverText = "TODO XMC DSS";
    };
    class Single : Mode_SemiAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_Shot_SoundSet", "NIA_416Rifle_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_silencerShot_SoundSet", "NIA_416Rifle_silencerTail_SoundSet" };
        };
        __ROF(680);
        __MOA(1.57);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_SINGLE;
    };
    class FullAuto : Mode_FullAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";


        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_Shot_SoundSet", "NIA_416Rifle_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_silencerShot_SoundSet", "NIA_416Rifle_silencerTail_SoundSet" };
        };

        __ROF(700);
        __MOA(1.77);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_FULLAUTO;
    };
    class fullauto_medium : FullAuto {
        showToPlayer = 0;
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
    class Library
    {
        libTextDesc = "";
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_M27IAR_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_M27IAR_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_M27IAR_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_M27IAR_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_M27IAR_x15";
        default = "hlc_rifle_M27IAR";
    };
    rhs_grip1_change = "hlc_rifle_M27IAR_grip";
    rhs_grip2_change = "hlc_rifle_M27IAR_grip2";
    rhs_grip3_change = "hlc_rifle_M27IAR_grip3";
    baseWeapon = "hlc_rifle_M27IAR";
};

class hlc_rifle_M27IAR_grip : hlc_rifle_M27IAR
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_M27IAR_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_M27IAR_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_M27IAR_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_M27IAR_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_M27IAR_x15_grip";
        default = "hlc_rifle_M27IAR_grip";
    };
};
class hlc_rifle_M27IAR_grip2 : hlc_rifle_M27IAR
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_M27IAR_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_M27IAR_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_M27IAR_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_M27IAR_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_M27IAR_x15_grip2";
        default = "hlc_rifle_M27IAR_grip2";
    };
};
class hlc_rifle_M27IAR_grip3 : hlc_rifle_M27IAR
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_M27IAR_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_M27IAR_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_M27IAR_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_M27IAR_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_M27IAR_x15_grip3";
        default = "hlc_rifle_M27IAR_grip3";
    };
};
class hlc_rifle_M27IAR_x15 :hlc_rifle_M27IAR
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\M27IAR.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.36 + 0.19;
    __DEXTERITY(3.6 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_M27IAR_x15_grip";
    rhs_grip2_change = "hlc_rifle_M27IAR_x15_grip2";
    rhs_grip3_change = "hlc_rifle_M27IAR_x15_grip3";
    baseWeapon = "hlc_rifle_M27IAR_x15";
};

class hlc_rifle_M27IAR_x15_grip : hlc_rifle_M27IAR_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6+1.9, 1); //afg,kx3
};
class hlc_rifle_M27IAR_x15_grip2 : hlc_rifle_M27IAR_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6+1.9, 1); //afg,kx3
};
class hlc_rifle_M27IAR_x15_grip3 : hlc_rifle_M27IAR_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6+1.9, 1); //afg,kx3
};

class hlc_rifle_416D165 : hlc_rifle_416D145
{
    scopearsenal = 2;
    ACE_barrelTwist = 178;
    ACE_barrelLength = 419;
    author = "Toadie";
    dlc = "Niarms_HK416";
    deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
    hasBipod = false;          /// a weapon with bipod obviously has a bipod
    //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
    //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
    AB_barrelTwist = 7;
    AB_barrelLength = 14.5;
    initspeed = -0.93;
    reloadAction = "NIA_GestureReload416";
    scope = public;
    model = "nia_WP_HK416\mesh\416main\416D165.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416d165_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D16.5";
    descriptionShort = "Infantry Rifle<br/>Caliber: 5.56x45mm NATO";
    recoil = "recoil_trg20";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    bg_bipod = 0;
    //hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-556tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    //HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    reloadMagazineSound[] = { "nia_wp_hk416\snd\ar15_reload", 0.74, 1, 30 };
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_STD.rtm" };
    opticszoominit = 0.75;
    opticszoommax = 1.1;
    opticszoommin = 0.25;
    inertia = 0.36;
    __DEXTERITY(3.6, 0); //afg,kx3
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "M27_foregrip" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "nia_wp_hk416\tex\toadie_416\416_extendedforegrip_co.tga"};
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "nia_wp_hk416\mat\416_extendedforegrip.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 79.5;
        class UnderBarrelSlot : asdg_UnderSlot {};
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
        class GripodSlot : nia_rifle_grips_slot {};
    };
    class ItemInfo
    {
        priority = 1;
        RMBhint = "XMC";
        onHoverText = "TODO XMC DSS";
    };
    class Single : Mode_SemiAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_Shot_SoundSet", "NIA_416Rifle_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_silencerShot_SoundSet", "NIA_416Rifle_silencerTail_SoundSet" };
        };
        __ROF(680);
        __MOA(1.57);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_SINGLE;
    };
    class FullAuto : Mode_FullAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_Shot_SoundSet", "NIA_416Rifle_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_silencerShot_SoundSet", "NIA_416Rifle_silencerTail_SoundSet" };
        };

        __ROF(700);
        __MOA(1.77);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_FULLAUTO;
    };
    class fullauto_medium : FullAuto {
        showToPlayer = 0;
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
    class Library
    {
        libTextDesc = "";
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_x15";
        default = "hlc_rifle_416D165";
    };
    rhs_grip1_change = "hlc_rifle_416D165_grip";
    rhs_grip2_change = "hlc_rifle_416D165_grip2";
    rhs_grip3_change = "hlc_rifle_416D165_grip3";
    baseWeapon = "hlc_rifle_416D165";
};

class hlc_rifle_416D165_grip : hlc_rifle_416D165
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_x15_grip";
        default = "hlc_rifle_416D165_grip";
    };
};
class hlc_rifle_416D165_grip2 : hlc_rifle_416D165
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_x15_grip2";
        default = "hlc_rifle_416D165_grip2";
    };
};
class hlc_rifle_416D165_grip3 : hlc_rifle_416D165
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_x15_grip3";
        default = "hlc_rifle_416D165_grip3";
    };
};
class hlc_rifle_416D165_x15 :hlc_rifle_416D165
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D165.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.295 + 0.19;
    __DEXTERITY(3.6 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D165_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D165_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D165_x15_grip3";
    baseWeapon = "hlc_rifle_416D165_x15";
};

class hlc_rifle_416D165_x15_grip : hlc_rifle_416D165_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D165_x15_grip2 : hlc_rifle_416D165_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D165_x15_grip3 : hlc_rifle_416D165_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D165_tan : hlc_rifle_416D165 {
    author = "Toadie";
    dlc = "Niarms_HK416";
    picture = "\nia_WP_HK416\tex\ui\gear_416D165_camo1_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D16.5(Tan)";/*(Compact/Tan)*/
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_tan_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_tan_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_tan_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_tan_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_tan_x15";
        default = "hlc_rifle_416D165_tan";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock","M27_foregrip" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_extendedforegrip_camo1_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper_camo.rvmat", "nia_wp_hk416\mat\416_lower_camo.rvmat", "nia_wp_hk416\mat\416_barrel_camo.rvmat", "nia_wp_hk416\mat\416_common_camo.rvmat", "nia_wp_hk416\mat\416_stocks_camo.rvmat","nia_wp_hk416\mat\416_extendedforegrip_camo.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D165_tan_grip";
    rhs_grip2_change = "hlc_rifle_416D165_tan_grip2";
    rhs_grip3_change = "hlc_rifle_416D165_tan_grip3";
    baseWeapon = "hlc_rifle_416D165_tan";
};

class hlc_rifle_416D165_tan_grip : hlc_rifle_416D165_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_tan_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_tan_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_tan_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_tan_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_tan_x15_grip";
        default = "hlc_rifle_416D165_tan_grip";
    };
};
class hlc_rifle_416D165_tan_grip2 : hlc_rifle_416D165_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_tan_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_tan_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_tan_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_tan_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_tan_x15_grip2";
        default = "hlc_rifle_416D165_tan_grip2";
    };
};
class hlc_rifle_416D165_tan_grip3 : hlc_rifle_416D165_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_tan_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_tan_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_tan_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_tan_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_tan_x15_grip3";
        default = "hlc_rifle_416D165_tan_grip3";
    };
};
class hlc_rifle_416D165_tan_x15 : hlc_rifle_416D165_tan
{
    scopeArsenal = 0;
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.36 + 0.19;
    __DEXTERITY(3.6 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D165_tan_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D165_tan_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D165_tan_x15_grip3";
    baseWeapon = "hlc_rifle_416D165_tan_x15";
};

class hlc_rifle_416D165_tan_x15_grip : hlc_rifle_416D165_tan_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D165_tan_x15_grip2 : hlc_rifle_416D165_tan_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D165_tan_x15_grip3 : hlc_rifle_416D165_tan_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D165_wdl : hlc_rifle_416D165 {
    author = "Toadie";
    dlc = "Niarms_HK416";
    picture = "\nia_WP_HK416\tex\ui\gear_416D165_camo2_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D16.5(Woodland)";/*(Compact/Tan)*/
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_wdl_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_wdl_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_wdl_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_wdl_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_wdl_x15";
        default = "hlc_rifle_416D165_wdl";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "M27_foregrip" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_extendedforegrip_camo2_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper_camo.rvmat", "nia_wp_hk416\mat\416_lower_camo.rvmat", "nia_wp_hk416\mat\416_barrel_camo.rvmat", "nia_wp_hk416\mat\416_common_camo.rvmat", "nia_wp_hk416\mat\416_stocks_camo.rvmat", "nia_wp_hk416\mat\416_extendedforegrip_camo.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D165_wdl_grip";
    rhs_grip2_change = "hlc_rifle_416D165_wdl_grip2";
    rhs_grip3_change = "hlc_rifle_416D165_wdl_grip3";
    baseWeapon = "hlc_rifle_416D165_wdl";
};

class hlc_rifle_416D165_wdl_grip : hlc_rifle_416D165_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_wdl_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_wdl_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_wdl_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_wdl_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_wdl_x15_grip";
        default = "hlc_rifle_416D165_wdl_grip";
    };
};
class hlc_rifle_416D165_wdl_grip2 : hlc_rifle_416D165_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_wdl_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_wdl_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_wdl_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_wdl_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_wdl_x15_grip2";
        default = "hlc_rifle_416D165_wdl_grip2";
    };
};
class hlc_rifle_416D165_wdl_grip3 : hlc_rifle_416D165_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D165_wdl_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D165_wdl_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D165_wdl_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D165_wdl_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D165_wdl_x15_grip3";
        default = "hlc_rifle_416D165_wdl_grip3";
    };
};
class hlc_rifle_416D165_wdl_x15 : hlc_rifle_416D165_wdl
{
    scopeArsenal = 0;
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19;
    __DEXTERITY(3.6 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D165_wdl_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D165_wdl_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D165_wdl_x15_grip3";
    baseWeapon = "hlc_rifle_416D165_wdl_x15";
};

class hlc_rifle_416D165_wdl_x15_grip : hlc_rifle_416D165_wdl_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3   
};
class hlc_rifle_416D165_wdl_x15_grip2 : hlc_rifle_416D165_wdl_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3   
};
class hlc_rifle_416D165_wdl_x15_grip3 : hlc_rifle_416D165_wdl_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3   
};


class hlc_rifle_416D165_gl :hlc_rifle_416D165
{
    dlc = "Niarms_HK416";
    author = "Toadie";
    scope = public;
    displayName = "HK HK416 D16.5(GL)";/*(Compact/Tan)*/
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AGC.rtm" };
    picture = "\nia_WP_HK416\tex\ui\gear_416d165-agc_ca";
    model = "nia_WP_HK416\mesh\416main\416D165_agc.p3d";
    muzzles[] = { "this", "hlc_GL_416AGC" };
    baseWeapon = "hlc_rifle_416D165_gl";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "HLC_rifle_416D165_gl_x15";
        hlc_50rnd_556x45_SOST = "HLC_rifle_416D165_gl_x15";
        hlc_50rnd_556x45_SPR = "HLC_rifle_416D165_gl_x15";
        hlc_50rnd_556x45_M = "HLC_rifle_416D165_gl_x15";
        hlc_50rnd_556x45_MDim = "HLC_rifle_416D165_gl_x15";
        default = "HLC_rifle_416D165_gl";
    };
    inertia = 0.36 + 0.15;
    __DEXTERITY(3.6 + 1.5, 0); //afg,kx3
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "AG-C_Firecntrol" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "hlc_core\tex\toadie_ag-c\416_agc_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper.rvmat", "nia_wp_hk416\mat\416_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "hlc_core\mat\hk_agc.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 112;
        class UnderBarrelSlot {};
        class GripodSlot {};
    };
};
class hlc_rifle_416D165_gl_x15 : HLC_rifle_416D165_gl
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D165_agc.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19 + 0.15;
    __DEXTERITY(3.25 + 1.9 + 1.5, 0); //afg,kx3   
};

class hlc_rifle_416N :hlc_rifle_416D165
{
    scopearsenal = 2;
    author = "Toadie";
    model = "nia_WP_HK416\mesh\416main\416N.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_hk416n_ca";
    displayName = "HK HK416N";/*(Compact/Tan)*/
    dlc = "Niarms_HK416";
    inertia = 0.33;
    __DEXTERITY(3.3, 0); //afg,kx3   
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416n_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416N_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416n_upper.rvmat", "nia_wp_hk416\mat\416N_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 72;
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
        class UnderBarrelSlot : asdg_UnderSlot {};
        class GripodSlot : nia_rifle_grips_slot {};
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416N_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416N_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416N_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416N_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416N_x15";
        default = "hlc_rifle_416N";
    };
    rhs_grip1_change = "hlc_rifle_416N_grip";
    rhs_grip2_change = "hlc_rifle_416N_grip2";
    rhs_grip3_change = "hlc_rifle_416N_grip3";
    baseWeapon = "hlc_rifle_416N";
};

class hlc_rifle_416N_grip : hlc_rifle_416N
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.3, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416N_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416N_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416N_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416N_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416N_x15_grip";
        default = "hlc_rifle_416N_grip";
    };
};
class hlc_rifle_416N_grip2 : hlc_rifle_416N
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.3, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416N_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416N_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416N_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416N_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416N_x15_grip2";
        default = "hlc_rifle_416N_grip2";
    };
};
class hlc_rifle_416N_grip3 : hlc_rifle_416N
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.3, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416N_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416N_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416N_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416N_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416N_x15_grip3";
        default = "hlc_rifle_416N_grip3";
    };
};
class hlc_rifle_416N_x15 :hlc_rifle_416N
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416N.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.33 + 0.19;
    __DEXTERITY(3.3 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416N_x15_grip";
    rhs_grip2_change = "hlc_rifle_416N_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416N_x15_grip3";
    baseWeapon = "hlc_rifle_416N_x15";
};

class hlc_rifle_416N_x15_grip : hlc_rifle_416N_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.3, 1); //afg,kx3
};
class hlc_rifle_416N_x15_grip2 : hlc_rifle_416N_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.3, 1); //afg,kx3
};
class hlc_rifle_416N_x15_grip3 : hlc_rifle_416N_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.3, 1); //afg,kx3
};

class hlc_rifle_416N_gl : hlc_rifle_416N
{
    dlc = "Niarms_HK416";
    author = "Toadie";
    scope = public;
    displayName = "HK HK416N(GL)";/*(Compact/Tan)*/
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AGC.rtm" };
    picture = "\nia_WP_HK416\tex\ui\gear_416n-agc_ca";
    model = "nia_WP_HK416\mesh\416main\416N_agc.p3d";
    muzzles[] = { "this", "hlc_GL_416AGC" };
    baseWeapon = "hlc_rifle_416N_gl";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416N_gl_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416N_gl_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416N_gl_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416N_gl_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416N_gl_x15";
        default = "hlc_rifle_416N_gl";
    };
    inertia = 0.35 + 0.15;
    __DEXTERITY(3.5 + 1.5, 0); //afg,kx3
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "AG-C_Firecntrol" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416n_upper_co.paa", "nia_wp_hk416\tex\toadie_416\416n_lower_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_co.paa", "hlc_core\tex\toadie_ag-c\416_agc_co.tga" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416n_upper.rvmat", "nia_wp_hk416\mat\416n_lower.rvmat", "nia_wp_hk416\mat\416_barrel.rvmat", "nia_wp_hk416\mat\416_common.rvmat", "nia_wp_hk416\mat\416_stocks.rvmat", "hlc_core\mat\hk_agc.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        mass = 110;
        class UnderBarrelSlot {};
        class GripodSlot {};
    };
};
class hlc_rifle_416N_gl_x15 : hlc_rifle_416N_gl
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416N_agc.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19 + 0.15;
    __DEXTERITY(3.25 + 1.9 + 1.5, 0); //afg,kx3   
};


class hlc_rifle_416D20 : hlc_rifle_416D145
{
    ACE_barrelTwist = 178;
    ACE_barrelLength = 508;
    author = "Toadie";
    dlc = "Niarms_HK416";
    deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
    hasBipod = false;          /// a weapon with bipod obviously has a bipod
    //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
    //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
    AB_barrelTwist = 7;
    AB_barrelLength = 14.5;
    initspeed = -1;
    reloadAction = "NIA_GestureReload416";
    scope = public;
    model = "nia_WP_HK416\mesh\416main\416D20.p3d";
    picture = "\nia_WP_HK416\tex\ui\gear_416d20_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D20";
    descriptionShort = "Infantry Rifle<br/>Caliber: 5.56x45mm NATO";
    recoil = "recoil_trg20";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    bg_bipod = 0;
    //hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-556tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    //HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    reloadMagazineSound[] = { "nia_wp_hk416\snd\ar15_reload", 0.74, 1, 30 };
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_STD.rtm" };
    opticszoominit = 0.75;
    opticszoommax = 1.1;
    opticszoommin = 0.25;
    inertia = 0.36;
    __DEXTERITY(3.6, 0); //afg,kx3
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 79.5;
        class UnderBarrelSlot : asdg_UnderSlot {};
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
        class GripodSlot : nia_rifle_grips_slot {};
    };
    class ItemInfo
    {
        priority = 1;
        RMBhint = "XMC";
        onHoverText = "TODO XMC DSS";
    };
    class Single : Mode_SemiAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_Shot_SoundSet", "NIA_416Rifle_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_silencerShot_SoundSet", "NIA_416Rifle_silencerTail_SoundSet" };
        };
        __ROF(680);
        __MOA(0.98);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_SINGLE;
    };
    class FullAuto : Mode_FullAuto
    {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_Shot_SoundSet", "NIA_416Rifle_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "NIA_416Rifle_silencerShot_SoundSet", "NIA_416Rifle_silencerTail_SoundSet" };
        };

        __ROF(700);
        __MOA(1.17);
        weaponSoundEffect = "DefaultRifle";
        __AI_ROF_RIFLE_SMALL_FULLAUTO;
    };
    class fullauto_medium : FullAuto {
        showToPlayer = 0;
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
    class Library
    {
        libTextDesc = "";
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_x15";
        default = "hlc_rifle_416D20";
    };
    rhs_grip1_change = "hlc_rifle_416D20_grip";
    rhs_grip2_change = "hlc_rifle_416D20_grip2";
    rhs_grip3_change = "hlc_rifle_416D20_grip3";
    baseWeapon = "hlc_rifle_416D20";
};

class hlc_rifle_416D20_grip : hlc_rifle_416D20
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_x15_grip";
        default = "hlc_rifle_416D20_grip";
    };
};
class hlc_rifle_416D20_grip2 : hlc_rifle_416D20
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_x15_grip2";
        default = "hlc_rifle_416D20_grip2";
    };
};
class hlc_rifle_416D20_grip3 : hlc_rifle_416D20
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_x15_grip3";
        default = "hlc_rifle_416D20_grip3";
    };
};
class hlc_rifle_416D20_x15 :hlc_rifle_416D20    
{
    scopeArsenal = 0;
    model = "nia_WP_HK416\mesh\416main\416D20.p3d";
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.36 + 0.19;
    __DEXTERITY(3.6 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D20_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D20_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D20_x15_grip3";
    baseWeapon = "hlc_rifle_416D20_x15";
};

class hlc_rifle_416D20_x15_grip : hlc_rifle_416D20_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D20_x15_grip2 : hlc_rifle_416D20_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D20_x15_grip3 : hlc_rifle_416D20_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D20_tan : hlc_rifle_416D20 {
    author = "Toadie";
    dlc = "Niarms_HK416";
    picture = "\nia_WP_HK416\tex\ui\gear_416D20_camo1_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D20(Tan)";/*(Compact/Tan)*/
    descriptionShort = "Infantry Rifle<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_tan_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_tan_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_tan_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_tan_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_tan_x15";
        default = "hlc_rifle_416D20_tan";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "M27_foregrip" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_camo1_co.paa", "nia_wp_hk416\tex\toadie_416\416_extendedforegrip_camo1_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper_camo.rvmat", "nia_wp_hk416\mat\416_lower_camo.rvmat", "nia_wp_hk416\mat\416_barrel_camo.rvmat", "nia_wp_hk416\mat\416_common_camo.rvmat", "nia_wp_hk416\mat\416_stocks_camo.rvmat", "nia_wp_hk416\mat\416_extendedforegrip_camo.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D20_tan_grip";
    rhs_grip2_change = "hlc_rifle_416D20_tan_grip2";
    rhs_grip3_change = "hlc_rifle_416D20_tan_grip3";
    baseWeapon = "hlc_rifle_416D20_tan";
};

class hlc_rifle_416D20_tan_grip : hlc_rifle_416D20_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_tan_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_tan_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_tan_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_tan_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_tan_x15_grip";
        default = "hlc_rifle_416D20_tan_grip";
    };
};
class hlc_rifle_416D20_tan_grip2 : hlc_rifle_416D20_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_tan_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_tan_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_tan_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_tan_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_tan_x15_grip2";
        default = "hlc_rifle_416D20_tan_grip2";
    };
};
class hlc_rifle_416D20_tan_grip3 : hlc_rifle_416D20_tan
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_tan_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_tan_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_tan_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_tan_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_tan_x15_grip3";
        default = "hlc_rifle_416D20_tan_grip3";
    };
};
class hlc_rifle_416D20_tan_x15 : hlc_rifle_416D20_tan
{
    scopeArsenal = 0;
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.36 + 0.19;
    __DEXTERITY(3.6 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D20_tan_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D20_tan_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D20_tan_x15_grip3";
    baseWeapon = "hlc_rifle_416D20_tan_x15";
};

class hlc_rifle_416D20_tan_x15_grip : hlc_rifle_416D20_tan_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D20_tan_x15_grip2 : hlc_rifle_416D20_tan_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};
class hlc_rifle_416D20_tan_x15_grip3 : hlc_rifle_416D20_tan_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3
};

class hlc_rifle_416D20_wdl : hlc_rifle_416D20 {
    author = "Toadie";
    dlc = "Niarms_HK416";
    picture = "\nia_WP_HK416\tex\ui\gear_416D20_camo2_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "HK HK416 D20(Woodland)";/*(Compact/Tan)*/
    descriptionShort = "Infantry Rifle<br/>Caliber: 5.56x45mm NATO";
    discretedistanceinitindex = 0;
    cameraDir = "eye_look";
    recoil = "recoil_trg20";
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_wdl_x15";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_wdl_x15";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_wdl_x15";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_wdl_x15";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_wdl_x15";
        default = "hlc_rifle_416D20_wdl";
    };
    hiddenSelections[] = { "416_upper", "416_lower", "416_SBRBarrel", "416_mainparts", "416_light Stock", "M27_foregrip" };
    hiddenSelectionsTextures[] = { "nia_wp_hk416\tex\toadie_416\416_upper_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_lower_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_barrel_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_common_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_stocks_camo2_co.paa", "nia_wp_hk416\tex\toadie_416\416_extendedforegrip_camo2_co.paa" };
    HiddenSelectionsMaterials[] = { "nia_wp_hk416\mat\416_upper_camo.rvmat", "nia_wp_hk416\mat\416_lower_camo.rvmat", "nia_wp_hk416\mat\416_barrel_camo.rvmat", "nia_wp_hk416\mat\416_common_camo.rvmat", "nia_wp_hk416\mat\416_stocks_camo.rvmat", "nia_wp_hk416\mat\416_extendedforegrip_camo.rvmat" };
    rhs_grip1_change = "hlc_rifle_416D20_wdl_grip";
    rhs_grip2_change = "hlc_rifle_416D20_wdl_grip2";
    rhs_grip3_change = "hlc_rifle_416D20_wdl_grip3";
    baseWeapon = "hlc_rifle_416D20_wdl";
};

class hlc_rifle_416D20_wdl_grip : hlc_rifle_416D20_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_wdl_x15_grip";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_wdl_x15_grip";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_wdl_x15_grip";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_wdl_x15_grip";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_wdl_x15_grip";
        default = "hlc_rifle_416D20_wdl_grip";
    };
};
class hlc_rifle_416D20_wdl_grip2 : hlc_rifle_416D20_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_wdl_x15_grip2";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_wdl_x15_grip2";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_wdl_x15_grip2";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_wdl_x15_grip2";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_wdl_x15_grip2";
        default = "hlc_rifle_416D20_wdl_grip2";
    };
};
class hlc_rifle_416D20_wdl_grip3 : hlc_rifle_416D20_wdl
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6, 1); //afg,kx3
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_416D20_wdl_x15_grip3";
        hlc_50rnd_556x45_SOST = "hlc_rifle_416D20_wdl_x15_grip3";
        hlc_50rnd_556x45_SPR = "hlc_rifle_416D20_wdl_x15_grip3";
        hlc_50rnd_556x45_M = "hlc_rifle_416D20_wdl_x15_grip3";
        hlc_50rnd_556x45_MDim = "hlc_rifle_416D20_wdl_x15_grip3";
        default = "hlc_rifle_416D20_wdl_grip3";
    };
};
class hlc_rifle_416D20_wdl_x15 : hlc_rifle_416D20_wdl
{
    scopeArsenal = 0;
    reloadAction = "NIA_GestureReload416_x15";
    inertia = 0.325 + 0.19;
    __DEXTERITY(3.6 + 1.9, 0); //afg,kx3   
    rhs_grip1_change = "hlc_rifle_416D20_wdl_x15_grip";
    rhs_grip2_change = "hlc_rifle_416D20_wdl_x15_grip2";
    rhs_grip3_change = "hlc_rifle_416D20_wdl_x15_grip3";
    baseWeapon = "hlc_rifle_416D20_wdl_x15";
};

class hlc_rifle_416D20_wdl_x15_grip : hlc_rifle_416D20_wdl_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3   
};
class hlc_rifle_416D20_wdl_x15_grip2 : hlc_rifle_416D20_wdl_x15
{
    scopeArsenal = 0;
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_AFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3   
};
class hlc_rifle_416D20_wdl_x15_grip3 : hlc_rifle_416D20_wdl_x15
{
    handAnim[] = { "OFP2_ManSkeleton", "nia_wp_HK416\anim\handpose_VFG.rtm" };
    __DEXTERITY(3.6 + 1.9, 1); //afg,kx3   
};
};