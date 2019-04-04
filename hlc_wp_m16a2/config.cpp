#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
#include "\hlc_core\script_macros.hpp"

class CfgPatches
{
	class hlcweapons_M16A2
	{
		requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F","cba_main","cba_jr","hlcweapons_core","hlcweapons_ar15" };
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		version = "1";
		author = "toadie";
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_UnderSlot;
class nia_charms_slot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class CfgMagazines
{

};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReloadM16A2 = "HLC_GestureReloadM16A2"; // Would reccommend changing the naming convention, just so nothing overlaps
		//HLC_GestureReloadAMT =  "HLC_GestureReloadAMT";//
	};

	class Actions {
		class NoActions : ManActions {
			HLC_GestureReloadM16A2[] = { "HLC_GestureReloadM16A2", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions : RifleBaseStandActions
		{
			HLC_GestureReloadM16A2[] = { "HLC_GestureReloadM16A2_Prone", "Gesture" };
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions
		{
			HLC_GestureReloadM16A2[] = { "HLC_GestureReloadM16A2_Context", "Gesture" };

		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions
		{
			HLC_GestureReloadM16A2[] = { "HLC_GestureReloadM16A2_Context", "Gesture" };


			class RifleAdjustFProneActions : RifleAdjustProneBaseActions
			{
				HLC_GestureReloadM16A2[] = { "HLC_GestureReloadM16A2_Context", "Gesture" };
			};




		};
	};
};

class CfgGesturesMale
{
	class Default;
	class States
	{

		class HLC_GestureReloadM16A2 :Default
		{
			file = "hlc_wp_m16a2\gesture\reload_ar15_catch_downrange.rtm";
			looped = 0;
			speed = 0.25;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.07, 0, 0.81, 0, 0.86, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.08, 0, 0.14, 0, 0.17, 1, 0.57, 1, 0.68, 0, 0.78, 1 };
			rightHandIKEnd = true;
		};

		class HLC_GestureReloadM16A2_Prone : Default
		{
			file = "hlc_wp_m16a2\gesture\reload_ar15_prone.rtm";
			looped = 0;
			speed = 0.25;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.07, 0, 0.81, 0, 0.86, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.08, 0, 0.14, 0, 0.17, 1, 0.57, 1, 0.68, 0, 0.78, 1 };
			rightHandIKEnd = true;
		};
		class HLC_GestureReloadM16A2_Context : HLC_GestureReloadM16A2
		{
			mask = "handsWeapon_context";
		};

	};
};
class CfgWeapons
{
    class Rifle;
    class Rifle_Base_F : Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;

	class hlc_wp_m16a2 :Rifle_Base_F
	{

		
		scope = public;
		magazines[] = { 			//Standard BIS mags
            __556STANAG_MAGS,__556STANAG_BI_MAGS
		};
        magazineWell[] = { STANAG_556x45, "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL" };
		maxZeroing = 1600;
		magazineReloadSwitchPhase = 0.5;
		class Library
		{
			libTextDesc = "AR15";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 63;
            class MuzzleSlot : asdg_MuzzleSlot_556{};
            class CowsSlot : asdg_OpticRail1913 {};
            class CharmSlot :nia_charms_slot{};
            class PointerSlot {};
		};
        inertia = 0.358;
        __DEXTERITY(3.58, 0);
		changeFiremodeSound[] = { "\hlc_wp_m16a2\snd\ar15_selector", 1, 1, 20 };
		model = "hlc_wp_m16a2\mesh\m16a2\m16a2.p3d";
		author = "Krycek, Tigg, Toadie";
		picture = "\hlc_wp_m16a2\tex\ui\gear_m16a2_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = $STR_NIA_M16A2;
        descriptionShort = $STR_NIA_M16_DESC;
        discretedistance[] = { 100, 200, 300, 400, 500, 600 };
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
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
        reloadAction = "NIA_GestureReload416";
        reloadMagazineSound[] = { "\hlc_wp_ar15\snd\ar15_reload", 0.74, 1, 30 };
        recoil = "recoil_spar";
		handAnim[] = {
			"OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\handpose_SMR.rtm"
		};
		modes[] = { "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
		muzzles[] = { "this" };
		class hlc_M203_M16a2 : UGL_F {
            drySound[] = { "hlc_core\sound\GL\GL_drystrike", 1, 1, 10 };
			cameradir = "GL_Look";
			discreteDistance[] = { 50, 100,150, 200,250 };
            discreteDistanceCameraPoint[] = { "GL_Eye_50m", "GL_Eye_100m", "GL_Eye_150m", "GL_Eye_200m","GL_Eye_250m" }; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 1;
			displayname = "M203";
			useModelOptics = false;
			useExternalOptic = false;
			optics = 1;
			cursoraim = "gl";
			opticszoominit = 0.75;
			opticszoommax = 1.1;
			opticsZoomMin = 0.25;
            reloadMagazineSound[] = { "hlc_core\sound\GL\M203_reload", 1.0, 1, 10 };
            reloadAction = "HLC_GestureReloadACRGL";
			reloadtime = 0.1;
            modes[] = { "Single" };
            class Single : Mode_SemiAuto {
                sounds[] = { "StandardSound" };
                class StandardSound {
                    weaponSoundEffect = "DefaultRifle";
                    closure1[] = { "hlc_core\sound\GL\GL_striker", 1, 1, 10 };
                    closure2[] = { "hlc_core\sound\GL\GL_striker", 1, 1, 10 };
                    soundClosure[] = { closure1, 0.5, closure2, 0.5 };
                    soundSetShot[] = { "NIA_GL_Shot_SoundSet", "NIA_GL_Tail_SoundSet" };
                };
            };
			weaponinfotype = "RscWeaponZeroing";
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
                soundSetShot[] = { "NIA_SAMR_Shot_SoundSet", "NIA_SAMR_Tail_SoundSet" };
			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
                soundSetShot[] = { "NIA_samr_silencerShot_SoundSet", "NIA_SAMR_silencerTail_SoundSet" };
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.067;
			__MOA(2.1);
			__AI_ROF_RIFLE_SMALL_SINGLE;
		};
		class Burst : Mode_Burst
		{

			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "NIA_SAMR_Shot_SoundSet", "NIA_SAMR_Tail_SoundSet" };
			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "NIA_samr_silencerShot_SoundSet", "NIA_SAMR_silencerTail_SoundSet" };
			};
			weaponSoundEffect = "DefaultRifle";
			burst = 3;
			reloadTime = 0.067;
			__MOA(2.3);
			__AI_ROF_RIFLE_SMALL_SHORT_BURST;
		};
		class FullAuto : Burst
		{
            __AI_ROF_RIFLE_SMALL_FULLAUTO;
		};
		class fullauto_medium : FullAuto
		{
			showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST;
		};
		class single_medium_optics1 : Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_MSCOPE_SINGLE;
		};
		class single_far_optics2 : single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
            __AI_ROF_RIFLE_SMALL_HSCOPE_SINGLE;
		};
		drysound[] = { "\hlc_wp_m16a2\snd\ar15_trigger", 1, 1, 10 };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_wp_m16a2_x15";
            hlc_50rnd_556x45_SOST = "hlc_wp_m16a2_x15";
            hlc_50rnd_556x45_SPR = "hlc_wp_m16a2_x15";
            hlc_50rnd_556x45_M = "hlc_wp_m16a2_x15";
            hlc_50rnd_556x45_MDim = "hlc_wp_m16a2_x15";
            default = "hlc_wp_m16a2";
        };
    };
    class hlc_wp_m16a2_x15 : hlc_wp_m16a2
    {
        scopeArsenal = 0;
        reloadAction = "NIA_GestureReload416_x15";
        inertia = 0.358 + 0.19;
        __DEXTERITY(3.58 + 1.9, 0); //afg,kx3   
    };
	class hlc_rifle_m203 : hlc_wp_m16a2
	{
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 87;
        };
		author = "Tigg, Krycek, Toadie";
		picture = "\hlc_wp_m16a2\tex\ui\gear_m203_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = $STR_NIA_M16A2_M203;
        descriptionShort = $STR_NIA_M16_DESC;
		model = "hlc_wp_m16a2\mesh\m203\m203.p3d";
		muzzles[] = { "this", "hlc_M203_M16a2" };
        inertia = 0.506;
        __DEXTERITY(5.06, 0);
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_m16a2\gesture\hands\gl_hands.rtm"
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_m203_x15";
            hlc_50rnd_556x45_SOST = "hlc_rifle_m203_x15";
            hlc_50rnd_556x45_SPR = "hlc_rifle_m203_x15";
            hlc_50rnd_556x45_M = "hlc_rifle_m203_x15";
            hlc_50rnd_556x45_MDim = "hlc_rifle_m203_x15";
            default = "hlc_rifle_m203";
        };
    };
    class hlc_rifle_m203_x15 : hlc_rifle_m203
    {
        scopeArsenal = 0;
        reloadAction = "NIA_GestureReload416_x15";
        inertia = 0.506 + 0.19;
        __DEXTERITY(5.06 + 1.9, 0); //afg,kx3   
    };

	class hlc_wp_XM177E2 :Rifle_Base_F
	{


		scope = public;
		magazines[] = {
			//Standard BIS mags
            __556STANAG_MAGS, __556STANAG_BI_MAGS
		};
        magazineWell[] = { STANAG_556x45, "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL" };
        recoil = "recoil_spar";
        inertia = 0.308;
        __DEXTERITY(3.08, 0);
		maxZeroing = 1600;
		magazineReloadSwitchPhase = 0.5;
		class Library
		{
			libTextDesc = "AR15";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 60;
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_556{};
            class CowsSlot : asdg_OpticRail1913 {};
            class CharmSlot :nia_charms_slot{};
		};
		changeFiremodeSound[] = { "\hlc_wp_m16a2\snd\ar15_selector", 1, 1, 20 };
		model = "hlc_wp_m16a2\mesh\xm177e2\xm177.p3d";
		author = "Krycek,Tigg,Toadie";
		picture = "\hlc_wp_m16a2\tex\ui\gear_xm177_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = $STR_NIA_XM177E2;
        descriptionShort = $STR_NIA_CAR15_DESC;
        discretedistance[] = { 250 };
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye3" };
        cameraDir = "look";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
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
        reloadMagazineSound[] = { "hlc_wp_ar15\snd\ar15_reload", 0.74, 1, 30 };
        reloadAction = "NIA_GestureReload416_WS";
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\handpose_SMR.rtm"
        };
		muzzles[] = { "this" };
		class hlc_M203_M16a2 : UGL_F {
			cameradir = "GL Look";
			discreteDistance[] = { 50, 100, 200 };
			discreteDistanceCameraPoint[] = { "GL Eye1", "GL Eye2", "GL Eye3" }; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 1;
			displayname = "M203";
			useModelOptics = false;
			useExternalOptic = false;
			optics = 1;
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = { "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
			opticszoominit = 0.75;
			opticszoommax = 1.1;
			opticsZoomMin = 0.25;
			reloadmagazinesound[] = { "A3\sounds_f\Weapons\grenades\ugl_reload", 1, 1, 20 };
			reloadtime = 0.1;
			sound[] = { "A3\sounds_f\Weapons\grenades\ugl_shot_1", 1, 1, 400 };
			weaponinfotype = "RscWeaponZeroing";
            __AI_ROF_GL_SINGLE;
		};
        modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
                soundSetShot[] = { "nia_xm177_Shot_SoundSet", "NIA_carbine_Tail_SoundSet" };

			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
                soundSetShot[] = { "NIA_carbine_silencerShot_SoundSet", "NIA_carbine_silencerTail_SoundSet" };
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.067;
            __MOA(2.5);
            __AI_ROF_CQB_SINGLE;
		};
		class Burst : Mode_FullAuto
		{
			showToPlayer = 0;
			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_xm177_Shot_SoundSet", "NIA_carbine_Tail_SoundSet" };
			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
                soundSetShot[] = { "NIA_carbine_silencerShot_SoundSet", "NIA_carbine_silencerTail_SoundSet" };
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.070;
			__MOA(2.6);
			__AI_ROF_CQB_SHORT_BURST;
		};
		class FullAuto : Burst
		{
			showToPlayer = 1;
            __AI_ROF_RIFLE_SMALL_FULLAUTO;
		};
		class fullauto_medium : FullAuto
		{
			showToPlayer = 0;
            __AI_ROF_CQB_CLOSE_BURST;
		};
		class single_medium_optics1 : Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
		};
		class single_far_optics2 : single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
		};
		drysound[] = { "\hlc_wp_m16a2\snd\ar15_trigger", 1, 1, 10 };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_wp_XM177E2_x15";
            hlc_50rnd_556x45_SOST = "hlc_wp_XM177E2_x15";
            hlc_50rnd_556x45_SPR = "hlc_wp_XM177E2_x15";
            hlc_50rnd_556x45_M = "hlc_wp_XM177E2_x15";
            hlc_50rnd_556x45_MDim = "hlc_wp_XM177E2_x15";
            default = "hlc_wp_XM177E2";
        };
	};
    class hlc_wp_XM177E2_x15 : hlc_wp_XM177E2
    {
        scopeArsenal = 0;
        reloadAction = "NIA_GestureReload416_x15";
        inertia = 0.308 + 0.19;
        __DEXTERITY(3.08 + 1.9, 0); //afg,kx3   
    };
	class hlc_wp_mod727 :Rifle_Base_F
	{


		scope = public;
		magazines[] = {
			//Standard BIS mags
            __556STANAG_MAGS, __556STANAG_BI_MAGS
		};
        magazineWell[] = { STANAG_556x45, "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL" };
        recoil = "recoil_spar";
        inertia = 0.277;
        __DEXTERITY(2.77, 0);
		maxZeroing = 1600;
		magazineReloadSwitchPhase = 0.5;
		class Library
		{
			libTextDesc = "AR15";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 60;
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_556{};
            class CowsSlot : asdg_OpticRail1913 {};
            class CharmSlot :nia_charms_slot{};
		};
		changeFiremodeSound[] = { "\hlc_wp_m16a2\snd\ar15_selector", 1, 1, 20 };
		model = "hlc_wp_m16a2\mesh\m727\m727.p3d";
		author = "Krycek,Tigg,Toadie";
		picture = "\hlc_wp_m16a2\tex\ui\gear_m727_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = $STR_NIA_RO727_Commando;
        descriptionShort = $STR_NIA_CAR15_DESC;
        discretedistance[] = { 100, 200, 300, 400, 500, 600 };
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
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
        reloadMagazineSound[] = { "hlc_wp_ar15\snd\ar15_reload", 0.74, 1, 30 };
        reloadAction = "NIA_GestureReload416_WS";
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\handpose_SMR.rtm"
        };
		modes[] = { "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
		muzzles[] = { "this" };
		class hlc_M203_m727 : UGL_F {
			cameradir = "GL Look";
			discreteDistance[] = { 50, 100, 200 };
			discreteDistanceCameraPoint[] = { "GL Eye1", "GL Eye2", "GL Eye3" }; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 1;
			displayname = "M203";
			useModelOptics = false;
			useExternalOptic = false;
			optics = 1;
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = { "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
			opticszoominit = 0.75;
			opticszoommax = 1.1;
			opticsZoomMin = 0.25;
			reloadmagazinesound[] = { "A3\sounds_f\Weapons\grenades\ugl_reload", 0.1, 1, 20 };
			reloadtime = 0.1;
			sound[] = { "A3\sounds_f\Weapons\grenades\ugl_shot_1", 1, 1, 400 };
			weaponinfotype = "RscWeaponZeroing";
            __AI_ROF_GL_SINGLE;
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_carbine_Shot_SoundSet", "NIA_carbine_Tail_SoundSet" };
			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "NIA_carbine_silencerShot_SoundSet", "NIA_carbine_silencerTail_SoundSet" };
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.067;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.0022;
            __AI_ROF_CQB_SINGLE;
		};
		class Burst : Mode_FullAuto
		{

			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_carbine_Shot_SoundSet", "NIA_carbine_Tail_SoundSet" };
			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "NIA_carbine_silencerShot_SoundSet", "NIA_carbine_silencerTail_SoundSet" };
			};


			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.070;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.0022;
            __AI_ROF_CQB_SHORT_BURST;
		};
		class FullAuto : Burst
		{
            __AI_ROF_RIFLE_SMALL_FULLAUTO;
		};
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            __AI_ROF_CQB_CLOSE_BURST;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
		drysound[] = { "\hlc_wp_m16a2\snd\ar15_trigger", 1, 1, 10 };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_wp_mod727_x15";
            hlc_50rnd_556x45_SOST = "hlc_wp_mod727_x15";
            hlc_50rnd_556x45_SPR = "hlc_wp_mod727_x15";
            hlc_50rnd_556x45_M = "hlc_wp_mod727_x15";
            hlc_50rnd_556x45_MDim = "hlc_wp_mod727_x15";
            default = "hlc_wp_mod727";
        };
	};
    class hlc_wp_mod727_x15 : hlc_wp_mod727
    {
        scopeArsenal = 0;
        reloadAction = "NIA_GestureReload416_x15";
        inertia = 0.277 + 0.19;
        __DEXTERITY(2.77 + 1.9, 0); //afg,kx3   
    };
    class hlc_wp_mod733 :Rifle_Base_F
    {


        scope = public;
        magazines[] = {
            //Standard BIS mags
            __556STANAG_MAGS, __556STANAG_BI_MAGS
        };
        magazineWell[] = { STANAG_556x45, "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL" };
        inertia = 0.222;
        __DEXTERITY(2.22, 0);
        initSpeed = -0.8979;
        recoil = "recoil_spar";
        maxZeroing = 1600;
        magazineReloadSwitchPhase = 0.5;
        class Library
        {
            libTextDesc = "AR15";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 48;
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_556{};
            class CowsSlot : asdg_OpticRail1913 {};
            class CharmSlot :nia_charms_slot{};
        };
        changeFiremodeSound[] = { "\hlc_wp_m16a2\snd\ar15_selector", 1, 1, 20 };
        model = "hlc_wp_m16a2\mesh\m727\m733.p3d";
        author = "Krycek,Tigg,Toadie";
        picture = "\hlc_wp_m16a2\tex\ui\gear_m733_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = $STR_NIA_RO733_Commando;
        descriptionShort = $STR_NIA_CAR15_DESC;
        discretedistance[] = { 100, 200, 300, 400, 500, 600 };
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
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
        reloadMagazineSound[] = { "hlc_wp_ar15\snd\ar15_reload", 0.74, 1, 30 };
        reloadAction = "NIA_GestureReload416_WS";
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\handpose_SMR.rtm"
        };
        modes[] = { "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        muzzles[] = { "this" };
        class hlc_M203_M733 : UGL_F {
            cameradir = "GL Look";
            discreteDistance[] = { 50, 100, 200 };
            discreteDistanceCameraPoint[] = { "GL Eye1", "GL Eye2", "GL Eye3" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticsZoomMin = 0.25;
            reloadmagazinesound[] = { "A3\sounds_f\Weapons\grenades\ugl_reload", 0.1, 1, 20 };
            reloadtime = 0.1;
            sound[] = { "A3\sounds_f\Weapons\grenades\ugl_shot_1", 1, 1, 400 };
            weaponinfotype = "RscWeaponZeroing";
        };
        class Single : Mode_SemiAuto
        {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_SBR_Shot_SoundSet", "NIA_SBR_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_SBR_silencerShot_SoundSet", "nia_SBR_silencerTail_SoundSet" };
                begin1[] = { "\hlc_wp_m16a2\snd\car15_suppressed", 1, 1, 200 };
                begin2[] = { "\hlc_wp_m16a2\snd\car15_suppressed", 1, 1, 200 };
                soundBegin[] = { begin1, 0.5, begin2, 0.5 };
            };
            begin1[] = { "hlc_wp_m16a2\snd\m16_fire", 1.0, 1, 1200 };
            begin2[] = { "hlc_wp_m16a2\snd\m16_fire", 1.0, 1, 1200 };
            soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
            closure1[] = { "hlc_wp_m16a2\snd\ar15c_close", 1, 1, 30 };
            closure2[] = { "hlc_wp_m16a2\snd\ar15c_close", 1, 1, 30 };
            soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.067;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.0022;
            __AI_ROF_CQB_SINGLE;
        };
        class Burst : Mode_FullAuto
        {

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_SBR_Shot_SoundSet", "NIA_SBR_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "nia_SBR_silencerShot_SoundSet", "nia_SBR_silencerTail_SoundSet" };
            };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.070;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.0022;
            __AI_ROF_CQB_SHORT_BURST;
        };
        class FullAuto : Burst
        {
            __AI_ROF_RIFLE_SMALL_FULLAUTO;
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            __AI_ROF_CQB_CLOSE_BURST;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
        drysound[] = { "\hlc_wp_m16a2\snd\ar15_trigger", 1, 1, 10 };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_wp_mod733_x15";
            hlc_50rnd_556x45_SOST = "hlc_wp_mod733_x15";
            hlc_50rnd_556x45_SPR = "hlc_wp_mod733_x15";
            hlc_50rnd_556x45_M = "hlc_wp_mod733_x15";
            hlc_50rnd_556x45_MDim = "hlc_wp_mod733_x15";
            default = "hlc_wp_mod733";
        };
    };
    class hlc_wp_mod733_x15 : hlc_wp_mod733
    {
        scopeArsenal = 0;
        reloadAction = "NIA_GestureReload416_x15";
        inertia = 0.22 + 0.19;
        __DEXTERITY(2.22 + 1.9, 0); //afg,kx3   
    };
	class hlc_wp_m16A1: hlc_wp_m16a2
	{
		model = "hlc_wp_m16a2\mesh\m16a1\m16a1.p3d";
		author = "Tigg, Toadie";
        inertia = 0.289;
        __DEXTERITY(2.89, 0);
		picture = "\hlc_wp_m16a2\tex\ui\gear_m16a2_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = $STR_NIA_M16A1;
        descriptionShort = $STR_NIA_M16_DESC;
        discretedistance[] = { 250 };
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = {  "eye3" };
        cameraDir = "look";
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_m16a2\gesture\hands\M16a1_hands.rtm"
        };
		modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
				class Single : Single
		{
			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "NIA_SAMR_Shot_SoundSet", "NIA_SAMR_Tail_SoundSet" };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "NIA_samr_silencerShot_SoundSet", "NIA_SAMR_silencerTail_SoundSet" };
			};
			__MOA(1.9);
            __ROF(750);
		};
		class Burst : Mode_FullAuto
		{

			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{

				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "NIA_SAMR_Shot_SoundSet", "NIA_SAMR_Tail_SoundSet" };
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
			};

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "NIA_samr_silencerShot_SoundSet", "NIA_SAMR_silencerTail_SoundSet" };
                __ROF(750);
                recoil = "recoil_auto_mk20";
                recoilProne = "recoil_auto_prone_mk20";
                __MOA(2.4);
                __AI_ROF_CQB_SHORT_BURST;
            };
		};
		class FullAuto : Burst
		{
            __AI_ROF_RIFLE_SMALL_FULLAUTO;
		};
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            __AI_ROF_CQB_CLOSE_BURST;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_wp_m16a1_x15";
            hlc_50rnd_556x45_SOST = "hlc_wp_m16a1_x15";
            hlc_50rnd_556x45_SPR = "hlc_wp_m16a1_x15";
            hlc_50rnd_556x45_M = "hlc_wp_m16a1_x15";
            hlc_50rnd_556x45_MDim = "hlc_wp_m16A1_x15";
            default = "hlc_wp_m16A1";
        };
    };
    class hlc_wp_m16A1_x15 : hlc_wp_m16A1
    {
        scopeArsenal = 0;
        reloadAction = "NIA_GestureReload416_x15";
        inertia = 0.289 + 0.19;
        __DEXTERITY(2.89 + 1.9, 0); //afg,kx3   
    };
	class hlc_rifle_A1m203 : hlc_wp_m16A1
	{
        inertia = 0.425;
        __DEXTERITY(4.25, 0);
		author = "Tigg, Krycek, Toadie";
		picture = "\hlc_wp_m16a2\tex\ui\gear_m203_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = $STR_NIA_M16A1_M203;
        descriptionShort = $STR_NIA_M16_DESC;
		model = "hlc_wp_m16a2\mesh\m203\a1m203.p3d";
		muzzles[] = { "this", "hlc_M203_M16a2" };
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_m16a2\gesture\hands\gl_hands.rtm"
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_rifle_A1m203_x15";
            hlc_50rnd_556x45_SOST = "hlc_rifle_A1m203_x15";
            hlc_50rnd_556x45_SPR = "hlc_rifle_A1m203_x15";
            hlc_50rnd_556x45_M = "hlc_rifle_A1m203_x15";
            hlc_50rnd_556x45_MDim = "hlc_rifle_A1m203_x15";
            default = "hlc_rifle_A1m203";
        };
    };
    class hlc_rifle_A1m203_x15 : hlc_rifle_A1m203
    {
        scopeArsenal = 0;
        reloadAction = "NIA_GestureReload416_x15";
        inertia = 0.425 + 0.19;
        __DEXTERITY(4.25 + 1.9, 0); //afg,kx3   
    };
	class hlc_wp_xm4 :Rifle_Base_F
    {


        scope = public;
        magazines[] = {
            //Standard BIS mags
            __556STANAG_MAGS, __556STANAG_BI_MAGS
        };
        magazineWell[] = { STANAG_556x45, "CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL" };
        recoil = "recoil_spar";
        inertia = 0.277;
        __DEXTERITY(2.77, 0);
        maxZeroing = 1600;
        magazineReloadSwitchPhase = 0.5;
        class Library
        {
            libTextDesc = "AR15";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 89;
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_556{};
            class CowsSlot : asdg_OpticRail1913 {};
            class CharmSlot :nia_charms_slot{};
        };
        changeFiremodeSound[] = { "\hlc_wp_m16a2\snd\ar15_selector", 1, 1, 20 };
        model = "hlc_wp_m16a2\mesh\M727\XM4.p3d";
        author = "Tigg, Krycek,Arby25, Toadie";
        picture = "\hlc_wp_m16a2\tex\ui\gear_xm4_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
        displayName = $STR_NIA_M4;
        descriptionShort = $STR_NIA_CAR15_DESC;
        discretedistance[] = { 200, 300, 400, 500, 600 };
        discretedistanceinitindex = 0;
        discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6"/*, "eye7", "eye8", "eye9", "eye10", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye", "eye" */ };
        cameraDir = "look";
        opticsZoomMin = 0.25;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
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
        reloadMagazineSound[] = { "hlc_wp_ar15\snd\ar15_reload", 0.74, 1, 30 };
        reloadAction = "NIA_GestureReload416_WS";
        handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_m16a2\gesture\hands\M4_hands.rtm"
        };
        modes[] = { "Single", "Burst", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
        muzzles[] = { "this" };
        class hlc_M203_XM4 : UGL_F {
            cameradir = "GL Look";
            discreteDistance[] = { 50, 100, 200 };
            discreteDistanceCameraPoint[] = { "GL Eye1", "GL Eye2", "GL Eye3" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            magazines[] = { "1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell" };
            opticszoominit = 0.75;
            opticszoommax = 1.1;
            opticsZoomMin = 0.25;
            reloadmagazinesound[] = { "A3\sounds_f\Weapons\grenades\ugl_reload", 0.1, 1, 20 };
            reloadtime = 0.1;
            sound[] = { "A3\sounds_f\Weapons\grenades\ugl_shot_1", 1, 1, 400 };
            weaponinfotype = "RscWeaponZeroing";
        };
        class Single : Mode_SemiAuto
        {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_carbine_Shot_SoundSet", "NIA_carbine_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "NIA_carbine_silencerShot_SoundSet", "NIA_carbine_silencerTail_SoundSet" };
            };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.067;
            recoil = "recoil_single_mk20";
            recoilProne = "recoil_single_prone_mk20";
            dispersion = 0.0022;
            __AI_ROF_CQB_SINGLE;
        };
        class Burst : Mode_Burst
        {

            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "nia_carbine_Shot_SoundSet", "NIA_carbine_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "NIA_carbine_silencerShot_SoundSet", "NIA_carbine_silencerTail_SoundSet" };
            };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.070;
            recoil = "recoil_auto_mk20";
            recoilProne = "recoil_auto_prone_mk20";
            dispersion = 0.0022;
            __AI_ROF_CQB_SHORT_BURST;
        };
        class FullAuto : Burst
        {
            __AI_ROF_RIFLE_SMALL_FULLAUTO;
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            __AI_ROF_CQB_CLOSE_BURST;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            __AI_ROF_CQB_MSCOPE_SINGLE;
        };
        drysound[] = { "\hlc_wp_m16a2\snd\ar15_trigger", 1, 1, 10 };
        class __MAGSWITCHCLASS {
            hlc_50rnd_556x45_EPR = "hlc_wp_xm4_x15";
            hlc_50rnd_556x45_SOST = "hlc_wp_xm4_x15";
            hlc_50rnd_556x45_SPR = "hlc_wp_xm4_x15";
            hlc_50rnd_556x45_M = "hlc_wp_xm4_x15";
            hlc_50rnd_556x45_MDim = "hlc_wp_xm4_x15";
            default = "hlc_wp_xm4";
        };
    };
    class hlc_wp_xm4_x15 : hlc_wp_xm4
    {
        scopeArsenal = 0;
        reloadAction = "NIA_GestureReload416_x15";
        inertia = 0.277 + 0.19;
        __DEXTERITY(2.77 + 1.9, 0); //afg,kx3   
    };
};