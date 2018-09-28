#include "\hlc_core\script_macros.hpp"
#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
class CfgPatches
{
 class hlcweapons_acr
 {
    requiredaddons[] = {"hlcweapons_ar15"};
	units[] = {  };
	weapons[] = {"hlc_rifle_ACR"};
	magazines[] = {};
	version="1.2";
	author="toadie";
 };
};
class cfgMods
{
	class Mod_Base;
	class Niarms_ACR :Mod_Base
	{
		name = "NIArsenal: AR15 Rifles";
		picture = "\hlc_wp_ar15\tex\ui\NIArms1_ca.paa";
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


class CfgMovesBasic {
    class DefaultDie;

    class ManActions {
        HLC_GestureReloadACR = "HLC_GestureReloadACR"; // Would reccommend changing the naming convention, just so nothing overlaps
    };

    class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;

        class NoActions : ManActions {
            HLC_GestureReloadACR[] = { "HLC_GestureReloadACR", "Gesture" };

        };
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadACR[] = { "HLC_GestureReloadACR_Prone", "Gesture" };

        };

        /*
        class RifleKneelActions : RifleBaseStandActions {
        HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
        };
        */

        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadACR[] = { "HLC_GestureReloadACR_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadACR[] = { "HLC_GestureReloadACR_Context", "Gesture" };


            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadACR[] = { "HLC_GestureReloadACR_Context", "Gesture" };

            };
        };
    };
};

class CfgGesturesMale {
    class Default;

    class States {
        class HLC_GestureReloadACR : Default {
            file = "hlc_wp_acr\anim\acr_reload_standing.rtm";
            speed = -3.93333;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.0729927, 1, 0.10218978, 0, 0.91240875, 0, 0.94890510, 1 };
        };
        class HLC_GestureReloadACR_Prone : Default {
            file = "hlc_wp_acr\anim\acr_reload_prone.rtm";
            looped = 0;
            speed = -3.666666666;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.65693430, 1, 0.69343065, 0, 0.87591240, 0, 0.91240875, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.0729927, 1, 0.10218978, 0, 0.781818181818, 0, 0.8363636363, 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadACR_Context : HLC_GestureReloadACR {
            mask = "handsWeapon_context";
        };

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
    class compatibleItems;
};
class asdg_MuzzleSlot_556;

class CfgVehicles
{
    class B_supplyCrate_F;
   class Niarms_ACR_Box : B_supplyCrate_F
	{	
		dlc = "Niarms_ACR";
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC ACR Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
            __M_MAG(hlc_30rnd_556x45_EPR, 60);
            __M_MAG(hlc_30rnd_556x45_SOST, 60);
            __M_MAG(hlc_30rnd_556x45_SPR, 60);
            __M_MAG(hlc_50rnd_556x45_EPR, 60);
            __M_MAG(hlc_30rnd_68x43_OTM, 60);
            __M_MAG(hlc_30rnd_68x43_FMJ, 60);
            __M_MAG(hlc_30rnd_68x43_Tracer, 60);
            __M_MAG(hlc_30rnd_68x43_MIRDIM, 60);
            __M_MAG(hlc_30rnd_68x43_MFMJ, 60);
            __M_MAG(hlc_30rnd_68x43_IRDIM, 60);
		};
		class TransportWeapons
		{
            __M_WEP(hlc_rifle_ACR68_SBR_tan, 10);
            __M_WEP(hlc_rifle_ACR68_SBR_black, 10);
            __M_WEP(hlc_rifle_ACR68_SBR_green, 10);
            __M_WEP(hlc_rifle_ACR68_Carb_black, 10);
            __M_WEP(hlc_rifle_ACR68_Carb_tan, 10);
            __M_WEP(hlc_rifle_ACR68_Carb_green, 10);
            __M_WEP(hlc_rifle_ACR68_mid_black, 10);
            __M_WEP(hlc_rifle_ACR68_mid_tan, 10);
            __M_WEP(hlc_rifle_ACR68_mid_green, 10);
            __M_WEP(hlc_rifle_ACR68_full_black, 10);
            __M_WEP(hlc_rifle_ACR68_full_tan, 10);
            __M_WEP(hlc_rifle_ACR68_full_green, 10);
            __M_WEP(hlc_rifle_ACR_SBR_tan, 10);
            __M_WEP(hlc_rifle_ACR_SBR_black, 10);
            __M_WEP(hlc_rifle_ACR_SBR_green, 10);
            __M_WEP(hlc_rifleACR_SBR_cliffhanger, 5);
            __M_WEP(hlc_rifle_ACR_Carb_black, 10);
            __M_WEP(hlc_rifle_ACR_Carb_tan, 10);
            __M_WEP(hlc_rifle_ACR_Carb_green, 10);
            __M_WEP(hlc_rifle_ACR_mid_black, 10);
            __M_WEP(hlc_rifle_ACR_mid_tan, 10);
            __M_WEP(hlc_rifle_ACR_mid_green, 10);
            __M_WEP(hlc_rifle_ACR_full_black, 10);
            __M_WEP(hlc_rifle_ACR_full_tan, 10);
            __M_WEP(hlc_rifle_ACR_full_green, 10);

		};
		class TransportItems
		{
            __M_ITM(optic_Holosight, 10);
            __M_ITM(optic_hamr, 10);
            __M_ITM(optic_rco, 10);
            __M_ITM(optic_Arco, 10);
            __M_ITM(optic_LRPS, 10);
            __M_ITM(optic_NVS, 10);

		};
	};

	class Weapon_Base_F;
    __WEAPONHOLDER(hlc_rifle_ACR68_SBR_tan, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Compact / Tan), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_SBR_black, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Compact / Black), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_SBR_green, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Compact / Green), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_Carb_black, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Short / Black), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_Carb_tan, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Short / Tan), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_Carb_green, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Short / Green), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_mid_black, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Mid / Black), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_mid_tan, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Mid / Tan), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_mid_green, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Mid / Green), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_full_black, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Long / Black), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_full_tan, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Long / Tan), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_full_green, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Long / Green), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_Squant, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Compact / Tan SQ), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR68_aron, hlc_30rnd_68x43_FMJ, ACR-E 6.8mm (Short / Black AR), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_SBR_tan, hlc_30rnd_556x45_EPR, ACR-E(Compact / Tan), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_SBR_black, hlc_30rnd_556x45_EPR, ACR-E(Compact / Black), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_SBR_green, hlc_30rnd_556x45_EPR, ACR-E(Compact / Green), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifleACR_SBR_cliffhanger, hlc_30rnd_556x45_EPR, ACR-E('Cliffhanger'), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_Carb_black, hlc_30rnd_556x45_EPR, ACR-E(Short / Black), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_Carb_tan, hlc_30rnd_556x45_EPR, ACR-E(Short / Tan), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_Carb_green, hlc_30rnd_556x45_EPR, ACR-E(Short / Green), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_mid_black, hlc_30rnd_556x45_EPR, ACR-E(Mid / Black), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_mid_tan, hlc_30rnd_556x45_EPR, ACR-E(Mid / Tan), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_mid_green, hlc_30rnd_556x45_EPR, ACR-E(Mid / Green), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_full_black, hlc_30rnd_556x45_EPR, ACR-E(Long / Black), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_full_tan, hlc_30rnd_556x45_EPR, ACR-E(Long / Tan), Niarms_acr, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_ACR_full_green, hlc_30rnd_556x45_EPR, ACR-E(Long / Green), Niarms_acr, Toadie, AssaultRifles);

	};
	
class CfgMagazines
{
class 30Rnd_556x45_Stanag;
class hlc_30rnd_68x43_FMJ : 30Rnd_556x45_Stanag
{ 
		dlc = "Niarms_ACR";
        author = "Toadie,Spartan0536";
		ammo = "HLC_68x43_FMJ";
		count = 26;
		descriptionshort = "Caliber: 6.8x43mm SPC FMJ-BT<br />Type: Full Metal Jacket<br />Rounds: 26";
        displayname = "6.8mm FMJ 26Rnd STANAG Magazine";
        model = "hlc_core\mesh\magazines\30rnd_556NATO_STANAG.p3d";
		initspeed = 815.34;
		mass = 14.68;
		lastroundstracer = 4;
		scope = 2;
		tracersevery = 0;
		displaynameshort = "FMJ";
		picture = "\hlc_core\tex\ui\ammo\m_blackout_fmj_ca.paa";
};
class hlc_30rnd_68x43_OTM : hlc_30rnd_68x43_FMJ
{
	dlc = "Niarms_ACR";
    author = "Toadie,Spartan0536";
    initspeed = 906.5;
		ammo = "hlc_68x43_OTM";
        count = 26;
        descriptionshort = "Caliber: 6.8x43mm SPC BT-BT<br />Type: Type: Ballistic Tip Boat Tail (Alliant RL10X at 27.5 grains, CCI BR4 primer, SSA-S Brass, SPC II rating MAXIMUM LOAD, Hornady SST Bullet)<br />Rounds: 26";
        displayname = "6.8mm BT 26Rnd STANAG Magazine";
		displaynameshort = "Ballistic Tip";
		picture = "\hlc_core\tex\ui\ammo\m_blackout_fmj_ca.paa";
};
class hlc_30rnd_68x43_Tracer : hlc_30rnd_68x43_FMJ
{
    dlc = "Niarms_ACR";
    author = "Toadie,Spartan0536";
    ammo = "HLC_68x43_FMJ";
    count = 26;
    descriptionshort = "Caliber: 6.8x43mm SPC Tracer<br />Type: Incendiary Tracer<br />Rounds: 26";
    displayname = "6.8mm Tracer 26Rnd STANAG Magazine";
    lastroundstracer = 4;
    tracersevery = 1;
    displaynameshort = "Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_blackout_tracer_ca.paa";
};
class hlc_30rnd_68x43_MIRDIM : hlc_30rnd_68x43_FMJ
{
	dlc = "Niarms_AR15";
    author = "Toadie,Spartan0536";
		ammo = "hlc_68x43_IRDIM";
        count = 26;
        descriptionshort = "Caliber: 6.8x43mm FMJ/IRDIM Tracer<br />Type:FMJ/IR-only Incendiary Tracer<br />Rounds: 26";
		displayname = "6.8mm FMJ 26Rnd STANAG Magazine (IR-DIM every 3)";
		lastroundstracer = 4;
		scope = 2;
		tracersevery = 3;
		displaynameshort = "FMJ/IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_tracer_ca.paa";
};
class hlc_30rnd_68x43_MFMJ : hlc_30rnd_68x43_FMJ
{
    dlc = "Niarms_AR15";
    author = "Toadie,Spartan0536";
    ammo = "HLC_68x43_FMJ";
    count = 26;
    descriptionshort = "Caliber: 6.8x43mm FMJ/Tracer<br />Type: FMJ/Incendiary Tracer<br />Rounds: 26";
    displayname = "6.8mm FMJ 26Rnd STANAG Magazine (Tracers every 3)";
    lastroundstracer = 4;
    scope = 2;
    tracersevery = 3;
    displaynameshort = "FMJ/Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_blackout_tracer_ca.paa";
};
class hlc_30rnd_68x43_IRDIM : hlc_30rnd_68x43_Tracer
{
    dlc = "Niarms_ACR";
    author = "Toadie,Spartan0536";
    ammo = "hlc_68x43_IRDIM";
    count = 26;
    descriptionshort = "Caliber: 6.8x43mm SPC IRDIM Tracer<br />Type: IR-only Incendiary Tracer<br />Rounds: 26";
    displayname = "6.8mm IR-DIM 26Rnd STANAG Magazine (IR-DIM every 3)";
    lastroundstracer = 4;
    scope = 2;
    tracersevery = 1;
    displaynameshort = "IR-DIM";
    picture = "\hlc_core\tex\ui\ammo\m_blackout_tracer_ca.paa";
};
class hlc_30rnd_68x43_Sub : hlc_30rnd_68x43_Tracer
{
    dlc = "Niarms_ACR";
    author = "Toadie,Spartan0536";
    ammo = "hlc_68x43_Sub";
    count = 26;
    descriptionshort = "Caliber: 6.8x43mm SPC Spitzer SP<br />Type: Spitzer Soft Point (Alliant RL9 at 20 grains, CCI BR4 Primer, SSA-S Brass, Speer HOT-COR Bullet)<br />Rounds: 26";
    displayname = "6.8mm Spitzer 26Rnd STANAG Magazine (IR-DIM every 3)";
    lastroundstracer = 4;
    scope = 2;
    tracersevery = 1;
    displaynameshort = "Spitzer";
    picture = "\hlc_core\tex\ui\ammo\m_blackout_sub_ca.paa";
};
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
class muzzle_snds_H : ItemCore {
    class ItemInfo;
};
class NIAmuzzle_flash_rifle_Mk20 : ItemCore
{
    dlc = "Niarms_ACR";
    scope = 2;
        model = "a3\data_f\proxies\muzzle_flash\muzzle_flash_rifle_Mk20.p3d";
};
class hlc_muzzle_apology : muzzle_snds_H {
    dlc = "Niarms_ACR";
    author = "Sorry";
    descriptionShort = "Sorry It's taken a whole year<br /> Have some Eagles (Red-Tail Hawks)";
    displayName = "Apology to Squantoon";
    picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
    model = "hlc_wp_acr\mesh\apology\pbs1.p3d";

    class ItemInfo : ItemInfo {
        mass = 1;
        soundTypeIndex = 2;
        muzzleEnd = "zaslehPoint"; // memory point in muzzle supressor's model
        alternativeFire = "NIAmuzzle_flash_rifle_Mk20";  // class in cfgWeapons with model of muzzle flash	
    };
    inertia = 0.00;
};
class hlc_acr_base : Rifle_Base_F {
    magazineReloadSwitchPhase = 0.5;
    scope = protected;
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 292.1;
    aidispersioncoefx = 4;
    aidispersioncoefy = 6;
    magazines[] = { "hlc_30rnd_68x43_FMJ", "hlc_30rnd_68x43_OTM", "hlc_30rnd_68x43_MFMJ", "hlc_30rnd_68x43_MIRDIM", "hlc_30rnd_68x43_Tracer", "hlc_30rnd_68x43_IRDIM","hlc_30rnd_68x43_Sub" };
    class Library {
        libTextDesc = "ACR";
    };
    reloadAction = "HLC_GestureReloadAK";
    maxRecoilSway = 0.0125;
    swayDecaySpeed = 1.25;
    hiddenSelections[] = { "Map1", "Map2", "Reciever", "Forgotten_Things", "PMAG", "AFG2" };
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    class GunParticles : GunParticles {
        class SecondEffect {
            positionName = "Nabojnicestart";
            directionName = "Nabojniceend";
            effectName = "CaselessAmmoCloud";
        };
    };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_762{
            iconPosition[] = { 0.0, 0.45 };
            iconScale = 0.2;
        };
    };
    descriptionShort = "Assault Rifle<br/>Caliber: 6.8mm SPC";
    handAnim[] = { "OFP2_ManSkeleton", "hlc_core\animation\oldgesture\ak74_hands.rtm" };

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

            closure1[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            closure2[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            soundClosure[] = { closure1, 0.5, closure2, 0.5 };
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "acr_Shot_SoundSet", "acr_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "acr_silencerShot_SoundSet", "acr_silencerTail_SoundSet" };
        };
        class Apologysound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
        {
            soundSetShot[] = { "ACRsixeight_apology_SoundSet", "ACRsixeight_Tail_SoundSet" };
        };
        reloadTime = 0.067;
        dispersion = 0.000347248;

        __AI_ROF_RIFLE_SMALL_SINGLE;
    };
    class FullAuto : Mode_FullAuto {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

            closure1[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            closure2[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            soundClosure[] = { closure1, 0.5, closure2, 0.5 };
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "acr_Shot_SoundSet", "acr_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "acr_silencerShot_SoundSet", "acr_silencerTail_SoundSet" };
        };
        class Apologysound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
        {
            soundSetShot[] = { "ACRsixeight_apology_SoundSet", "ACRsixeight_Tail_SoundSet" };
        };
        reloadTime = 0.079;
        dispersion = 0.000347248;

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
    reloadMagazineSound[] = { "hlc_wp_acr\snd\ACR_reload", 0.74, 1, 30 };
    changeFiremodeSound[] = { "hlc_wp_acr\snd\ar15_selector", 1, 1, 8 };
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    
    class hlc_acr_M203 : UGL_F {
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
class hlc_rifle_ACR68_SBR_tan : hlc_acr_base
{
    author = "Toadie";
	dlc = "Niarms_acr";
	deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
	hasBipod = false;          /// a weapon with bipod obviously has a bipod
	//soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
	//soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		AB_barrelTwist=7;
		AB_barrelLength=14.5;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 266.7;
	reloadAction = "HLC_GestureReloadACR";
	scope =public;
	model = "hlc_wp_acr\mesh\acr\acr.p3d";
    picture = "\hlc_wp_acr\tex\ui\gear_sbr-tan_ca";
	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	displayName = "Remington ACR-E 6.8mm (Compact/Tan)";
	descriptionShort = "Carbine<br/>Caliber: 6.8x43mm SPCII";
    recoil = "recoil_mx";
	discretedistance[] = {100};
	discretedistanceinitindex = 0;
	bg_bipod = 0; 
        magazines[] = { "hlc_30rnd_68x43_FMJ", "hlc_30rnd_68x43_OTM", "hlc_30rnd_68x43_MFMJ", "hlc_30rnd_68x43_MIRDIM", "hlc_30rnd_68x43_Tracer", "hlc_30rnd_68x43_IRDIM" };
        hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-68tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
        HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
	reloadMagazineSound[] = {"hlc_wp_acr\snd\ACR_reload",0.9,1,30};
	handAnim[] = {
		"OFP2_ManSkeleton",
		"\hlc_wp_acr\anim\acr_handanim.rtm"
	};
	opticszoominit = 0.75;
	opticszoommax = 1.1;
	opticszoommin = 0.25;
    inertia = 0.36;
    __DEXTERITY(3.6 + 0.1, 1); //afg,kx3
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 81.5;
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
			class MuzzleSlot : asdg_MuzzleSlot_762{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
        };
        class ItemInfo
        {
            priority = 1;
            RMBhint = "XMC";
            onHoverText = "TODO XMC DSS";
        };
		class Single: Mode_SemiAuto
        {
		sounds[] = {"StandardSound","SilencedSound","Apologysound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
                closure1[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "ACRsixeight_Shot_SoundSet", "ACRsixeight_Tail_SoundSet" };

 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "ACRsixeight_silencerShot_SoundSet", "ACRsixeight_silencerTail_SoundSet" };
 			};
            class Apologysound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "ACRsixeight_apology_SoundSet", "ACRsixeight_Tail_SoundSet" };
            };
            __ROF(850);
            __MOA(2.5);
            weaponSoundEffect = "DefaultRifle";
            __AI_ROF_RIFLE_SMALL_SINGLE;
        };
        class FullAuto: Mode_FullAuto
        {
            sounds[] = { "StandardSound", "SilencedSound", "Apologysound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "ACRsixeight_Shot_SoundSet", "ACRsixeight_Tail_SoundSet" };

            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "ACRsixeight_silencerShot_SoundSet", "ACRsixeight_silencerTail_SoundSet" };
            };
            class Apologysound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "ACRsixeight_apology_SoundSet", "ACRsixeight_Tail_SoundSet" };
            };
            __ROF(850);
            __MOA(2.5);
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
            libTextDesc = "Sanitised AR-15 SBR";
        };
};
class hlc_rifle_ACR68_SBR_black :hlc_rifle_ACR68_SBR_tan {
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 266.7;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Compact/Black)";
    picture = "\hlc_wp_acr\tex\ui\gear_sbr-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1-black_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
};
class hlc_rifle_ACR68_SBR_green :hlc_rifle_ACR68_SBR_tan {
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 266.7;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Compact/Green)";
    picture = "\hlc_wp_acr\tex\ui\gear_sbr-green_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_green_co.tga", "hlc_wp_ACR\tex\map2-68green_co.tga", "hlc_wp_ACR\tex\map3-green_co.tga", "hlc_wp_ACR\tex\mapyesGreen_co.tga", "hlc_wp_ACR\tex\pmagGreen_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
};
class hlc_rifle_ACR68_Carb_black :hlc_rifle_ACR68_SBR_tan
{
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 368.3;
    author = "Toadie,";
    model = "hlc_wp_acr\mesh\acr\ACR_Carbine.p3d";
    displayName = "Remington ACR-E 6.8mm (Short/Black)";
    picture = "\hlc_wp_acr\tex\ui\gear_carbine-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1-black_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    inertia = 0.39;
    __DEXTERITY(3.9 + 0.1, 1); //afg,kx3
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 88;
        };
    
    class Single : Single
        {
            __ROF(850);
            __MOA(2.1);
    };
    class FullAuto : FullAuto
    {
        __ROF(850);
        __MOA(2.1);
    };
};
class hlc_rifle_ACR68_Carb_tan :hlc_rifle_ACR68_Carb_black {
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 368.3;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Short/Tan)";
    picture = "\hlc_wp_acr\tex\ui\gear_carbine-tan_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-68tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
};
class hlc_rifle_ACR68_Carb_green :hlc_rifle_ACR68_Carb_black {\
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 368.3;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Short/Green)";
    picture = "\hlc_wp_acr\tex\ui\gear_carbine-green_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_green_co.tga", "hlc_wp_ACR\tex\map2-68green_co.tga", "hlc_wp_ACR\tex\map3-green_co.tga", "hlc_wp_ACR\tex\mapyesGreen_co.tga", "hlc_wp_ACR\tex\pmagGreen_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
};
class hlc_rifle_ACR68_mid_black :hlc_rifle_ACR68_SBR_tan
{
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 419.1;
    author = "Toadie";
    model = "hlc_wp_acr\mesh\acr\ACR_midlength.p3d";
    displayName = "Remington ACR-E 6.8mm (Mid/Black)";
    picture = "\hlc_wp_acr\tex\ui\gear_mid-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1-black_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    inertia = 0.42;
    __DEXTERITY(4.1 + 0.1, 1); //afg,kx3
    
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 92;
        };
    
    class Single : Single
    {
        __ROF(849);
        __MOA(1.7);
    };
    class FullAuto : FullAuto
    {
        __ROF(849);
        __MOA(1.7);
    };
};
class hlc_rifle_ACR68_mid_tan :hlc_rifle_ACR68_mid_black {
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 419.1;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Mid/Tan)";
    picture = "\hlc_wp_acr\tex\ui\gear_mid-tan_ca";
    hiddenSelectionsTextures[] = {  "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-68tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga"  };
};
class hlc_rifle_ACR68_mid_green :hlc_rifle_ACR68_mid_black {
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 419.1;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Mid/Green)";
    picture = "\hlc_wp_acr\tex\ui\gear_mid-green_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_green_co.tga", "hlc_wp_ACR\tex\map2-68green_co.tga", "hlc_wp_ACR\tex\map3-green_co.tga", "hlc_wp_ACR\tex\mapyesGreen_co.tga", "hlc_wp_ACR\tex\pmagGreen_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
};
class hlc_rifle_ACR68_full_black :hlc_rifle_ACR68_SBR_tan
{
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 508;
    author = "Toadie";
    model = "hlc_wp_acr\mesh\acr\ACR_riflelength.p3d";
    displayName = "Remington ACR-E 6.8mm (Long/Black)";
    picture = "\hlc_wp_acr\tex\ui\gear_rifle-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1-black_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    inertia = 0.45;
    __DEXTERITY(4.4 + 0.1, 1); //afg,kx3
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 99;
        };
    
    class Single : Single
    {
        __ROF(847);
        __MOA(1.7);
    };
    class FullAuto : FullAuto
    {
        __ROF(847);
        __MOA(1.7);
    };
};
class hlc_rifle_ACR68_full_tan :hlc_rifle_ACR68_full_black {
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 508;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Long/Tan)";
    picture = "\hlc_wp_acr\tex\ui\gear_rifle-tan_ca";
    hiddenSelectionsTextures[] = {  "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-68tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga"  };
};
class hlc_rifle_ACR68_full_green :hlc_rifle_ACR68_full_black {
    ACE_barrelTwist = 177.8;
    ACE_barrelLength = 508;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Long/Green)";
    picture = "\hlc_wp_acr\tex\ui\gear_sbr-tan_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_green_co.tga", "hlc_wp_ACR\tex\map2-68green_co.tga", "hlc_wp_ACR\tex\map3-green_co.tga", "hlc_wp_ACR\tex\mapyesGreen_co.tga", "hlc_wp_ACR\tex\pmagGreen_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
};
class hlc_rifle_ACR68_Squant : hlc_rifle_ACR68_SBR_tan
{
    model = "hlc_wp_acr\mesh\acr\acr_squant.p3d";
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E 6.8mm (Compact/Tan SQ)";
    picture = "\hlc_wp_acr\tex\ui\gear_sbr-tan_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1squant_co.tga", "hlc_wp_ACR\tex\map2-68tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1sq.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_762{
            class compatibleItems : compatibleItems {
                hlc_muzzle_apology = 1;
            };
        };
    };
};
class hlc_rifle_ACR68_aron :hlc_rifle_ACR68_Carb_black
{
    author = "Toadie, AronH17";
    model = "hlc_wp_acr\mesh\acr\ACR_aron.p3d";
    displayName = "Remington ACR-E 6.8mm (Short/Black AR)";
    picture = "\hlc_wp_acr\tex\ui\gear_carbine-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1Aron_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1aron.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    inertia = 0.39;
    __DEXTERITY(3.9 + 0.1, 1); //afg,kx3
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_762{
            class compatibleItems : compatibleItems {
                hlc_muzzle_apology = 1;
            };
        };
    };
    class Single : Single
    {
        __ROF(850);
        __MOA(2.1);
    };
    class FullAuto : FullAuto
    {
        __ROF(850);
        __MOA(2.1);
    };
};



class hlc_acr556_base : hlc_acr_base
{
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    //    HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_556{};
    };
    magazines[] = { __556STANAG_MAGS, __556STANAG_BI_MAGS, __556NATO_BI_DRUMS };

    modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };

    class Single : Mode_SemiAuto {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

            closure1[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            closure2[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            soundClosure[] = { closure1, 0.5, closure2, 0.5 };
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "acr_Shot_SoundSet", "acr_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "acr_silencerShot_SoundSet", "acr_silencerTail_SoundSet" };
        };
        class Apologysound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
        {
            soundSetShot[] = { "ACRsixeight_apology_SoundSet", "ACRsixeight_Tail_SoundSet" };
        };
        reloadTime = 0.067;
        dispersion = 0.000347248;

        __AI_ROF_RIFLE_SMALL_SINGLE;
    };
    class FullAuto : Mode_FullAuto {
        sounds[] = { "StandardSound", "SilencedSound" };

        class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            weaponSoundEffect = "DefaultRifle";

            closure1[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            closure2[] = { "\hlc_wp_acr\snd\acr_first", 1, 1, 10 };
            soundClosure[] = { closure1, 0.5, closure2, 0.5 };
        };

        class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            soundSetShot[] = { "acr_Shot_SoundSet", "acr_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "acr_silencerShot_SoundSet", "acr_silencerTail_SoundSet" };
        };
        class Apologysound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
        {
            soundSetShot[] = { "ACRsixeight_apology_SoundSet", "ACRsixeight_Tail_SoundSet" };
        };
        reloadTime = 0.079;
        dispersion = 0.000347248;

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
};


class hlc_rifle_ACR_SBR_tan : hlc_acr556_base
{
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 266.7;
    author = "Toadie";
    dlc = "Niarms_acr";
    deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
    hasBipod = false;          /// a weapon with bipod obviously has a bipod
    //soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
    //soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
    AB_barrelTwist = 7;
    AB_barrelLength = 14.5;
    initspeed = -0.86667;
    reloadAction = "HLC_GestureReloadACR";
    scope = public;
    model = "hlc_wp_acr\mesh\acr\acr.p3d";
    picture = "\hlc_wp_acr\tex\ui\gear_sbr-tan_ca";
    UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
    displayName = "Remington ACR-E (Compact/Tan)";
    descriptionShort = "Carbine<br/>Caliber: 5.56x45mm NATO";
    recoil = "recoil_trg20";
    discretedistance[] = { 100 };
    discretedistanceinitindex = 0;
    bg_bipod = 0;
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-556tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    reloadMagazineSound[] = { "hlc_wp_acr\snd\ACR_reload", 0.74, 1, 30 };
    handAnim[] = {
        "OFP2_ManSkeleton",
        "\hlc_wp_acr\anim\acr_handanim.rtm"
    };
    opticszoominit = 0.75;
    opticszoommax = 1.1;
    opticszoommin = 0.25;
    inertia = 0.36;
    __DEXTERITY(3.6 + 0.1, 1); //afg,kx3
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
        mass = 81.5;
        class UnderBarrelSlot : asdg_UnderSlot {};
        class CowsSlot : asdg_OpticRail1913 {};
        class PointerSlot : asdg_FrontSideRail {};
        class MuzzleSlot : asdg_MuzzleSlot_556{};
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
            soundSetShot[] = { "acr_Shot_SoundSet", "acr_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "acr_silencerShot_SoundSet", "acr_silencerTail_SoundSet" };
        };
        __ROF(850);
        __MOA(2.5);
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
            soundSetShot[] = { "acr_Shot_SoundSet", "acr_Tail_SoundSet" };
        };

        class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            soundSetShot[] = { "acr_silencerShot_SoundSet", "acr_silencerTail_SoundSet" };
        };
        class Apologysound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
        {
            soundSetShot[] = { "ACRsixeight_apology_SoundSet", "ACRsixeight_Tail_SoundSet" };
        };
        __ROF(850);
        __MOA(2.5);
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
        libTextDesc = "Sanitised AR-15 SBR";
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_SBR_tan_x15";
        default = "hlc_rifle_ACR_SBR_tan";
    };
    };
class hlc_rifle_ACR_SBR_tan_x15 : hlc_rifle_ACR_SBR_tan
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\acr_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.36+0.19;
    __DEXTERITY(3.6 + 0.1 + 1.9, 1); //afg,kx3   
};


class hlc_rifle_ACR_SBR_black :hlc_rifle_ACR_SBR_tan {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 266.7;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E (Compact/Black)";
    picture = "\hlc_wp_acr\tex\ui\gear_sbr-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1-black_co.tga", "hlc_wp_ACR\tex\map2-556black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_SBR_black_x15";
        default = "hlc_rifle_ACR_SBR_black";
    };
};
class hlc_rifle_ACR_SBR_black_x15 : hlc_rifle_ACR_SBR_black
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\acr_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.36+0.19;
    __DEXTERITY(3.6 + 0.1 + 1.9, 1); //afg,kx3   
};


class hlc_rifle_ACR_SBR_green :hlc_rifle_ACR_SBR_tan {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 266.7;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E (Compact/Green)";
    picture = "\hlc_wp_acr\tex\ui\gear_sbr-green_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_green_co.tga", "hlc_wp_ACR\tex\map2-556green_co.tga", "hlc_wp_ACR\tex\map3-green_co.tga", "hlc_wp_ACR\tex\mapyesGreen_co.tga", "hlc_wp_ACR\tex\pmagGreen_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_SBR_green_x15";
        default = "hlc_rifle_ACR_SBR_green";
    };
};
class hlc_rifle_ACR_SBR_green_x15 : hlc_rifle_ACR_SBR_green
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\acr_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.36+0.19;
    __DEXTERITY(3.6 + 0.1 + 1.9, 1); //afg,kx3   
};


class hlc_rifleACR_SBR_cliffhanger :hlc_rifle_ACR_SBR_tan {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 266.7;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E ('Cliffhanger')";
    descriptionShort = "Assault Rifle<br/>'Break's over, Roach.'";
    picture = "\hlc_wp_acr\tex\ui\gear_SBR-cliffhanger_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1cliffhanger_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3cliffhanger_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    HiddenSelectionsMaterials[] = { "hlc_wp_ACR\mat\map1cliffhanger.rvmat", "hlc_wp_ACR\mat\map2.rvmat", "hlc_wp_ACR\mat\map3cliffhanger.rvmat", "hlc_wp_ACR\mat\mapyes.rvmat", "hlc_wp_ACR\mat\PMAG.rvmat", "hlc_wp_ACR\mat\afg.rvmat" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifleACR_SBR_cliffhanger_x15";
        default = "hlc_rifleACR_SBR_cliffhanger";
    };
};
class hlc_rifleACR_SBR_cliffhanger_x15 : hlc_rifleACR_SBR_cliffhanger
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\acr_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.36+0.19;
    __DEXTERITY(3.6 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_Carb_black :hlc_rifle_ACR_SBR_tan
{
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 368.3;
    initspeed = -0.9;
    author = "Toadie";
    model = "hlc_wp_acr\mesh\acr\ACR_Carbine.p3d";
    displayName = "Remington ACR-E (Short/Black)";
    picture = "\hlc_wp_acr\tex\ui\gear_carbine-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1-black_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    inertia = 0.39;
    __DEXTERITY(3.9 + 0.1, 1); //afg,kx3
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 88;
        };
    
    class Single : Single
    {
        __ROF(850);
        __MOA(2.1);
    };
    class FullAuto : FullAuto
    {
        __ROF(850);
        __MOA(2.1);
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_Carb_black_x15";
        default = "hlc_rifle_ACR_Carb_black";
    };
};
class hlc_rifle_ACR_Carb_black_x15 : hlc_rifle_ACR_Carb_black
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_Carbine_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.39+0.19;
    __DEXTERITY(3.9 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_Carb_tan :hlc_rifle_ACR_Carb_black {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 368.3;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E (Short/Tan)";
    picture = "\hlc_wp_acr\tex\ui\gear_carbine-tan_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-68tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_Carb_tan_x15";
        default = "hlc_rifle_ACR_Carb_tan";
    };
};
class hlc_rifle_ACR_Carb_tan_x15 : hlc_rifle_ACR_Carb_tan
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_Carbine_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.39+0.19;
    __DEXTERITY(3.9 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_Carb_green :hlc_rifle_ACR_Carb_black {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 368.3;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E (Short/Green)";
    picture = "\hlc_wp_acr\tex\ui\gear_carbine-green_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_green_co.tga", "hlc_wp_ACR\tex\map2-556green_co.tga", "hlc_wp_ACR\tex\map3-green_co.tga", "hlc_wp_ACR\tex\mapyesGreen_co.tga", "hlc_wp_ACR\tex\pmagGreen_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_Carb_green_x15";
        default = "hlc_rifle_ACR_Carb_green";
    };
};
class hlc_rifle_ACR_Carb_green_x15 : hlc_rifle_ACR_Carb_green
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_Carbine_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.39+0.19;
    __DEXTERITY(3.9 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_mid_black :hlc_rifle_ACR_SBR_tan
{
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 419.1;
    initspeed = -0.93;
    author = "Toadie";
    model = "hlc_wp_acr\mesh\acr\ACR_midlength.p3d";
    displayName = "Remington ACR-E (Mid/Black)";
    picture = "\hlc_wp_acr\tex\ui\gear_mid-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1-black_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    inertia = 0.42;
    __DEXTERITY(4.1 + 0.1, 1); //afg,kx3
    
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 92;
        };
    
    class Single : Single
    {
        __ROF(849);
        __MOA(1.7);
    };
    class FullAuto : FullAuto
    {
        __ROF(849);
        __MOA(1.7);
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_mid_black_x15";
        default = "hlc_rifle_ACR_mid_black";
    };
};
class hlc_rifle_ACR_mid_black_x15 : hlc_rifle_ACR_mid_black
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_midlength_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.42+0.19;
    __DEXTERITY(4.1 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_mid_tan :hlc_rifle_ACR_mid_black {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 419.1;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E (Mid/Tan)";
    picture = "\hlc_wp_acr\tex\ui\gear_mid-tan_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-68tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_mid_tan_x15";
        default = "hlc_rifle_ACR_mid_tan";
    };
};
class hlc_rifle_ACR_mid_tan_x15 : hlc_rifle_ACR_mid_tan
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_midlength_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.42+0.19;
    __DEXTERITY(4.1 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_mid_green :hlc_rifle_ACR_mid_black {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 419.1;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E (Mid/Green)";
    picture = "\hlc_wp_acr\tex\ui\gear_mid-green_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_green_co.tga", "hlc_wp_ACR\tex\map2-556green_co.tga", "hlc_wp_ACR\tex\map3-green_co.tga", "hlc_wp_ACR\tex\mapyesGreen_co.tga", "hlc_wp_ACR\tex\pmagGreen_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_mid_green_x15";
        default = "hlc_rifle_ACR_mid_green";
    };
};
class hlc_rifle_ACR_mid_green_x15 : hlc_rifle_ACR_mid_green
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_midlength_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.42+0.19;
    __DEXTERITY(4.1 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_full_black :hlc_rifle_ACR_SBR_tan
{
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 508;
    author = "Toadie";
    initspeed = -1;
    model = "hlc_wp_acr\mesh\acr\ACR_riflelength.p3d";
    displayName = "Remington ACR-E (Long/Black)";
    picture = "\hlc_wp_acr\tex\ui\gear_rifle-black_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1-black_co.tga", "hlc_wp_ACR\tex\map2-68black_co.tga", "hlc_wp_ACR\tex\map3-black_co.tga", "hlc_wp_ACR\tex\mapyesblack_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    inertia = 0.45;
    __DEXTERITY(4.4 + 0.1, 1); //afg,kx3
    
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 99;
        };
    
    class Single : Single
    {
        __ROF(847);
        __MOA(1.7);
    };
    class FullAuto : FullAuto
    {
        __ROF(847);
        __MOA(1.7);
    };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_full_black_x15";
        default = "hlc_rifle_ACR_full_black";
    };
};
class hlc_rifle_ACR_full_black_x15 : hlc_rifle_ACR_full_black
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_riflelength_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.44+0.19;
    __DEXTERITY(4.4 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_full_tan :hlc_rifle_ACR_full_black {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 508;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E (Long/Tan)";
    picture = "\hlc_wp_acr\tex\ui\gear_rifle-tan_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_co.tga", "hlc_wp_ACR\tex\map2-68tan_co.tga", "hlc_wp_ACR\tex\map3_co.tga", "hlc_wp_ACR\tex\mapyes_co.tga", "hlc_wp_ACR\tex\pmag_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_full_tan_x15";
        default = "hlc_rifle_ACR_full_tan";
    };
};
class hlc_rifle_ACR_full_tan_x15 : hlc_rifle_ACR_full_tan
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_riflelength_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.44+0.19;
    __DEXTERITY(4.4 + 0.1 + 1.9, 1); //afg,kx3   
};

class hlc_rifle_ACR_full_green :hlc_rifle_ACR_full_black {
    ACE_barrelTwist = 228.6;
    ACE_barrelLength = 508;
    author = "Toadie";
    dlc = "Niarms_acr";
    displayName = "Remington ACR-E (Long/Green)";
    picture = "\hlc_wp_acr\tex\ui\gear_rifle-green_ca";
    hiddenSelectionsTextures[] = { "hlc_wp_ACR\tex\map1_green_co.tga", "hlc_wp_ACR\tex\map2-556green_co.tga", "hlc_wp_ACR\tex\map3-green_co.tga", "hlc_wp_ACR\tex\mapyesGreen_co.tga", "hlc_wp_ACR\tex\pmagGreen_co.tga", "hlc_wp_ACR\tex\afg2_co.tga" };
    class __MAGSWITCHCLASS {
        hlc_50rnd_556x45_EPR = "hlc_rifle_ACR_full_green_x15";
        default = "hlc_rifle_ACR_full_green";
    };
};
class hlc_rifle_ACR_full_green_x15 : hlc_rifle_ACR_full_green
{
    scopeArsenal = 0;
    model = "hlc_wp_acr\mesh\acr\ACR_riflelength_x15.p3d";
    reloadAction = "HLC_GestureReloadAR15_BADX15_WS";
    inertia = 0.44+0.19;
    __DEXTERITY(4.4 + 0.1 + 1.9, 1); //afg,kx3   
};
};