#include "script_mod.hpp"
#include "script_macros.hpp"


class CfgPatches {
    class hlcweapons_core {
        requiredaddons[] = {"A3_Data_F_Destroyer_Loadorder","A3_Data_F_Sams_Loadorder","cba_main"}; //this covers all A3(v1.84) + CBA addons
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        author="toadie";
		requiredVersion = REQUIRED_VERSION;
		versionDesc = "NIARMA - CORE";
		versionAct = "";
        version = "1.8";
    };
};
#include "CfgAmmo.hpp"  
#include "CfgMagazines.hpp"  
#include "CfgFunctions.hpp"
#include "CfgEventhandlers.hpp"
#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
#include "Particles.hpp"
#include "CfgMagazineWells.hpp"
#include "RscInGameUI.hpp"
#include "cfgGestures.hpp"

class CBA_PIPItems {
	HLC_enable = "-";
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_300blk_KAC = 1;
        hlc_muzzle_MAG58_Brake = 1;
		hlc_muzzle_Cherrybomb = 1;
		hlc_muzzle_FSC30 = 1;
		hlc_muzzle_Miter18T = 1;
		hlc_muzzle_OEMDevice = 1;
		hlc_muzzle_17SBrake = 1;
		hlc_muzzle_AAC_762SDN6 = 1;
		hlc_muzzle_AAC_SCARH = 1;
		hlc_muzzle_Brevis = 1;
		hlc_muzzle_ThunderChicken = 1;
		hlc_muzzle_KX3_comp = 1;
    };
};
class asdg_MuzzleSlot_762MG : asdg_MuzzleSlot { // for 7.62, 6.5 and 5.56 universal mount MG suppressors
    class compatibleItems {
        hlc_muzzle_MAG58_Brake = 1;
    };
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot { // for 5.56x45 universal mount suppressors
    class compatibleItems {
        hlc_muzzle_556NATO_KAC = 1;
        hlc_muzzle_556NATO_rotexiiic_tan = 1;
        hlc_muzzle_556NATO_rotexiiic_grey = 1;
        hlc_muzzle_556NATO_M42000 = 1;
		hlc_muzzle_OEMDevice_556 = 1;
		hlc_muzzle_KX3_comp = 1;
    };
};
class asdg_MuzzleSlot_9MM : asdg_MuzzleSlot { // for 9x19mm universal mount pistol suppressors
    class compatibleItems {
        hlc_muzzle_Octane9 = 1;
        hlc_muzzle_Evo9 = 1;
        hlc_muzzle_TiRant9 = 1;
        hlc_muzzle_TiRant9S = 1;
    };
};
class asdg_MuzzleSlot_45ACP : asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_Octane45 = 1;
        hlc_muzzle_Evo40 = 1;
    };
};

class asdg_SlotInfo;
class asdg_OpticRail : asdg_SlotInfo{};
class asdg_PistolOpticMount: asdg_OpticRail {
class compatibleItems {
    hlc_optic_DocterV = 1;
    hlc_optic_RomeoV = 1;
};
};

class asdg_PistolOpticRail1913 : asdg_OpticRail { // MIL-STD-1913 handgun optic rail

	class compatibleItems {
		HLC_optic_DocterR = 1;
	};

};
class asdg_OpticRail1913 : asdg_OpticRail{
    class compatibleItems {
        hlc_optic_LeupoldM3A = 1;
        hlc_optic_ZF95Base = 1;
        hlc_optic_VOMZ3d = 1;
        hlc_optic_VOMZ = 1;
        hlc_optic_HensoldtZO_Hi = 1;
        hlc_optic_HensoldtZO_Hi_2D = 1;
        hlc_optic_HensoldtZO_lo = 1;
        hlc_optic_HensoldtZO_lo_2D = 1;
        hlc_optic_HensoldtZO_lo_Docter = 1;
        hlc_optic_HensoldtZO_lo_Docter_2D = 1;
        hlc_optic_HensoldtZO_Hi_Docter = 1;
        hlc_optic_HensoldtZO_Hi_Docter_2D = 1;
        HLC_optic_DocterR = 1;
        hlc_optic_ATACR_Offset = 1;
        hlc_optic_ATACR = 1;
    };
};
class UnderBarrelSlot;
class nia_rifle_gripod_slot : UnderBarrelSlot
{
    displayName = "Gripod slot";
    class compatibleItems
    {
    };
};
class asdg_UnderSlot : asdg_SlotInfo
{
    class compatibleItems {
        HLC_bipod_UTGShooters = 1;
        HLC_ISOPOD = 1;

		HLC_Panel_Under_FN5cm_Desert = 1;
		HLC_Panel_Under_2xFN5cm_Desert = 1;
		HLC_Panel_Under_FN10cm_Desert = 1;
		HLC_Panel_Under_FN15cm_Desert = 1;
		HLC_Panel_Under_Ladder_S_Desert = 1;
		HLC_Panel_Under_Ladder_M_Desert = 1;
		HLC_Panel_Under_Ladder_L_Desert = 1;
		HLC_Panel_Under_MagpulXT_Desert = 1;
		HLC_Panel_Under_XTME_Desert = 1;
		HLC_Panel_Under_2xXTME_Desert = 1;
		HLC_Panel_Under_4xXTME_Desert = 1;
		HLC_Panel_Under_6xXTME_Desert = 1;

		HLC_Panel_Under_FN5cm_Black = 1;
		HLC_Panel_Under_2xFN5cm_Black = 1;
		HLC_Panel_Under_FN10cm_Black = 1;
		HLC_Panel_Under_FN15cm_Black = 1;
		HLC_Panel_Under_Ladder_S_Black = 1;
		HLC_Panel_Under_Ladder_M_Black = 1;
		HLC_Panel_Under_Ladder_L_Black = 1;
		HLC_Panel_Under_MagpulXT_Black = 1;
		HLC_Panel_Under_XTME_Black = 1;
		HLC_Panel_Under_2xXTME_Black = 1;
		HLC_Panel_Under_4xXTME_Black = 1;
		HLC_Panel_Under_6xXTME_Black = 1;/**/

		HLC_Panel_Under_FN5cm_OD = 1;
		HLC_Panel_Under_2xFN5cm_OD = 1;
		HLC_Panel_Under_FN10cm_OD = 1;
		HLC_Panel_Under_FN15cm_OD = 1;
		HLC_Panel_Under_Ladder_S_OD = 1;
		HLC_Panel_Under_Ladder_M_OD = 1;
		HLC_Panel_Under_Ladder_L_OD = 1;
		HLC_Panel_Under_MagpulXT_OD = 1;
		HLC_Panel_Under_XTME_OD = 1;
		HLC_Panel_Under_2xXTME_OD = 1;
		HLC_Panel_Under_4xXTME_OD = 1;
		HLC_Panel_Under_6xXTME_OD = 1;

		HLC_Panel_Under_FN5cm_RG = 1;
		HLC_Panel_Under_2xFN5cm_RG = 1;
		HLC_Panel_Under_FN10cm_RG = 1;
		HLC_Panel_Under_FN15cm_RG = 1;
		HLC_Panel_Under_Ladder_S_RG = 1;
		HLC_Panel_Under_Ladder_M_RG = 1;
		HLC_Panel_Under_Ladder_L_RG = 1;
		HLC_Panel_Under_MagpulXT_RG = 1;
		HLC_Panel_Under_XTME_RG = 1;
		HLC_Panel_Under_2xXTME_RG = 1;
		HLC_Panel_Under_4xXTME_RG = 1;
		HLC_Panel_Under_6xXTME_RG = 1;

		HLC_Panel_Under_Ladder_S_Pride = 1;
		HLC_Panel_Under_Ladder_M_Pride = 1;
		HLC_Panel_Under_Ladder_L_Pride = 1;
		HLC_Panel_Under_MagpulXT_Pride = 1;
    };
};
class nia_rifle_grips_slot : nia_rifle_gripod_slot
{
    linkProxy = "\hlc_core\mesh\nia_grip_proxy";
    class compatibleItems {
		HLC_Panel_Under_FN5cm_Desert = 1;
		HLC_Panel_Under_2xFN5cm_Desert = 1;
		HLC_Panel_Under_FN10cm_Desert = 1;
		HLC_Panel_Under_FN5cm_Black = 1;
		HLC_Panel_Under_2xFN5cm_Black = 1;
		HLC_Panel_Under_FN10cm_Black = 1;
		HLC_Panel_Under_FN5cm_OD = 1;
		HLC_Panel_Under_2xFN5cm_OD = 1;
		HLC_Panel_Under_FN10cm_OD = 1;
		HLC_Panel_Under_FN5cm_RG = 1;
		HLC_Panel_Under_2xFN5cm_RG = 1;
		HLC_Panel_Under_FN10cm_RG = 1;
		HLC_Panel_Under_Ladder_S_Desert = 1;
		HLC_Panel_Under_Ladder_M_Desert = 1;
		HLC_Panel_Under_Ladder_S_Black = 1;
		HLC_Panel_Under_Ladder_M_Black = 1;
		HLC_Panel_Under_Ladder_S_OD = 1;
		HLC_Panel_Under_Ladder_M_OD = 1;
		HLC_Panel_Under_Ladder_S_RG = 1;
		HLC_Panel_Under_Ladder_M_RG = 1;
		HLC_Panel_Under_Ladder_S_Pride = 1;
		HLC_Panel_Under_Ladder_M_Pride = 1;
		HLC_Panel_Under_XTME_Desert = 1;
		HLC_Panel_Under_2xXTME_Desert = 1;
		HLC_Panel_Under_XTME_Black = 1;
		HLC_Panel_Under_2xXTME_Black = 1;
		HLC_Panel_Under_XTME_OD = 1;
		HLC_Panel_Under_2xXTME_OD = 1;
		HLC_Panel_Under_XTME_RG = 1;
		HLC_Panel_Under_2xXTME_RG = 1;

        hlc_grip_AFG2 = 1;
        hlc_grip_PMVFG = 1;
		hlc_grip_PMVFG_Black = 1;
		hlc_grip_PMVFG_Tan = 1;
		hlc_grip_AFG = 1;
		
    };
};
class asdg_FrontSideRail : asdg_SlotInfo
{
	class compatibleItems
	{
		HLC_acc_TLR1_Side = 1;
		HLC_acc_DBALPL_Side = 1;
		HLC_acc_DBALPL_side_FL = 1;
		HLC_Panel_Side_FN5cm_Desert = 1;
		HLC_Panel_Side_2xFN5cm_Desert = 1;
		HLC_Panel_Side_FN10cm_Desert = 1;
		HLC_Panel_Side_FN15cm_Desert = 1;
		HLC_Panel_Side_Ladder_S_Desert = 1;
		HLC_Panel_Side_Ladder_M_Desert = 1;
		HLC_Panel_Side_Ladder_L_Desert = 1;
		HLC_Panel_Side_MagpulXT_Desert = 1;
		HLC_Panel_Side_XTME_Desert = 1;
		HLC_Panel_Side_2xXTME_Desert = 1;
		HLC_Panel_Side_4xXTME_Desert = 1;
		HLC_Panel_Side_6xXTME_Desert = 1;
		
		HLC_Panel_Side_FN5cm_Black = 1;
		HLC_Panel_Side_2xFN5cm_Black = 1;
		HLC_Panel_Side_FN10cm_Black = 1;
		HLC_Panel_Side_FN15cm_Black = 1;
		HLC_Panel_Side_Ladder_S_Black = 1;
		HLC_Panel_Side_Ladder_M_Black = 1;
		HLC_Panel_Side_Ladder_L_Black = 1;
		HLC_Panel_Side_MagpulXT_Black = 1;
		HLC_Panel_Side_XTME_Black = 1;
		HLC_Panel_Side_2xXTME_Black = 1;
		HLC_Panel_Side_4xXTME_Black = 1;
		HLC_Panel_Side_6xXTME_Black = 1;/**/

		HLC_Panel_Side_FN5cm_OD = 1;
		HLC_Panel_Side_2xFN5cm_OD = 1;
		HLC_Panel_Side_FN10cm_OD = 1;
		HLC_Panel_Side_FN15cm_OD = 1;
		HLC_Panel_Side_Ladder_S_OD = 1;
		HLC_Panel_Side_Ladder_M_OD = 1;
		HLC_Panel_Side_Ladder_L_OD = 1;
		HLC_Panel_Side_MagpulXT_OD = 1;
		HLC_Panel_Side_XTME_OD = 1;
		HLC_Panel_Side_2xXTME_OD = 1;
		HLC_Panel_Side_4xXTME_OD = 1;
		HLC_Panel_Side_6xXTME_OD = 1;

		HLC_Panel_Side_FN5cm_RG = 1;
		HLC_Panel_Side_2xFN5cm_RG = 1;
		HLC_Panel_Side_FN10cm_RG = 1;
		HLC_Panel_Side_FN15cm_RG = 1;
		HLC_Panel_Side_Ladder_S_RG = 1;
		HLC_Panel_Side_Ladder_M_RG = 1;
		HLC_Panel_Side_Ladder_L_RG = 1;
		HLC_Panel_Side_MagpulXT_RG = 1;
		HLC_Panel_Side_XTME_RG = 1;
		HLC_Panel_Side_2xXTME_RG = 1;
		HLC_Panel_Side_4xXTME_RG = 1;
		HLC_Panel_Side_6xXTME_RG = 1;

		HLC_Panel_Side_Ladder_S_Pride2 = 1;
		HLC_Panel_Side_Ladder_M_Pride2 = 1;
		HLC_Panel_Side_Ladder_L_Pride2 = 1;
		HLC_Panel_Side_MagpulXT_Pride2 = 1;

	};
};
class PointerSlot;
//Fulfilling promises - Adding MLOK functionality, in place for when I finish some fucking MLOK fun. 
class nia_MLOK_UnderBarrel_slot : UnderBarrelSlot
{
	displayName = "MLOK Underside slot";
	class compatibleItems
	{
	//Number of Accs: Zero... for now
	};
};
class nia_MLOK_Acc_slot : PointerSlot
{
	displayName = "MLOK Accesory slot";
	iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
	class compatibleItems
	{
	//Number of Accs: Zero... for now
	};
};
//Fulfilling promises - Adding a slot for lasers and lights that don't do pic rails or MLok, for Ninjasocks. 
//In the short term future its' emptiness will change- but until then... watch this space. 
class nia_Barrelmount_Slot : PointerSlot
{
	displayName = "MLOK Accesory slot";
	iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
	class compatibleItems
	{
		//Number of Accs: Zero... for now
	};
};
class nia_charms_slot : PointerSlot
{
    displayName = "$STR_A3_PointerSlot0";
    iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
    linkProxy = "\hlc_core\mesh\nia_charm_proxy";
    class compatibleItems
    {
        //The commented out ones are special patron ones. While I can't stop anyone with the wherewithall to compile a PBO from just uncommenting them and whatever, you know, keep it to yourself. 
        //HLC_Charm_Eurojank = 1;
        //HLC_Charm_NIArmsbacker = 1;
        //HLC_Charm_NIArmsbacker_dirty = 1;
        HLC_Charm_Izhmash = 1;
        HLC_Charm_Herstal = 1;
        HLC_Charm_Teethgang = 1;
    };
};

class asdg_PistolUnderRail : asdg_SlotInfo  {
    linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
    displayName = "$STR_A3_PointerSlot0";
    iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
    class compatibleItems {
        hlc_acc_TLR1 = 1;
        hlc_acc_DBALPL = 1;
        hlc_acc_DBALPL_FL=1;
    };
};
class CfgDistanceFilters
{
    class HLC_defaultDistanceFilter
    {
        type = "lowPassFilter";
        minCutoffFrequency = 150;
        qFactor = 1;
        innerRange = 400;
        range = 2600;
        powerFactor = 32;
    };
    class HLC_rifleTailDistanceFilter
    {
        type = "lowPassFilter";
        minCutoffFrequency = 150;
        qFactor = 1;
        innerRange = 350;
        range = 1800;
        powerFactor = 32;
    };
};
/*
Scripting notes- 





1 MOA (inches) = Distance (yards) / 95.5
1 MOA (inches) = Distance (meters) / 87.3
1 MOA (centimeters) = Distance (yards) / 37.6
1 MOA (centimeters) = Distance (meters) / 34.4


Group size (inches) * 95.5 / Distance (yards) = Size of group in MOA

Group size (inches) * 87.3/ Distance (meters) = Size of group in MOA

Group size (centimeters) * 37.6/Distance (yards) = Size of group in MOA

Group size (centimeters) * 34.4/Distance (meters) = Size of group in MOA


So, 1 MOA is actually:
1.047" at 100 yards.
1.146" at 100 meters.
2.66 cm at 100 yards.
2.91 cm at 100 meters.

A half inch group at 100 yards would be a 0.478 MOA group.
The same size group at 125 meters would be a 0.35 MOA group.

class CfgMovesBasic
{
     class DefaultDie;
     class ManActions
     {
         FHQ_GestureReloadACR = "FHQ_GestureReloadACR";    
     };
    
    class Actions {
        class NoActions : ManActions {
            FHQ_GestureReloadACR[] = {"FHQ_GestureReloadACR", "Gesture"};
        };
    };
};
 
class CfgGesturesMale
{
    class Default;
     class States
     {
         class FHQ_GestureReloadACR: Default
         {
             file="\FHQ_Remington\ACR\data\anim\acr_reload.rtm";
             looped=0;
             speed=0.400000;
             mask="handsWeapon";
             headBobStrength=0.200000;
             headBobMode=2;
             rightHandIKBeg=1;
             rightHandIKEnd=1;
             leftHandIKCurve[]={0,1,0.050000,0,0.950000,0,1,1};
         };
     };
};




*/

/*
BALLISTIC DATA PER-BULLET

NOTES -

caliber=(mm/((15*speed)/1000))

mm =     mm st steel at 200m/2.5
Speed  = speed at 200m
*/

class CfgRecoils
{
	class recoil_gm6;
	class NIA_recoil_riflegrenade //sp_fwa_recoil_riflegrenade
	{
		kickBack[] = { 0.2,0.24 };
		permanent = 0.5;
		muzzleOuter[] = { 7,6,0.2,0.2 };
		temporary = 0.025;
	};
};



class CfgWeapons

{ 
    #include "cfg_acc_muzzle.hpp"
    #include "cfg_acc_sidemount.hpp"
    #include "cfg_acc_scope.hpp"
    #include "cfg_acc_underslot.hpp"
	class UGL_base_F;
	class UGL_F;
	// RifleGrenade Muzzle Config
	// Written by TepacheLoco
	// Drop in classes as neccesary
	/*
	class NIA_RifleGrenade : UGL_F
	{
		displayName = "Rifle Grenade";
		muzzleEnd = "konec hlavne";
		muzzlePos = "usti hlavne";
		recoil = "NIA_recoil_riflegrenade";
		magazines[] = {};
		//magazineWell[] = { "Sig_RifleGrenade" };
		discreteDistanceCameraPoint[] = { "grenade_eye_25","grenade_eye_50","grenade_eye_75","grenade_eye_100","grenade_eye_125","grenade_eye_150","grenade_eye_200","grenade_eye_250","grenade_eye_300"};
		discreteDistance[] = { 25,50,75,100,125,150,200,250,300 };
		discreteDistanceInitIndex = 3;
		maxZeroing = 300;
		zeroingSound[] = { "",1,1 };
		memoryPointCamera = "grenade_eye_50";
		cameraDir = "grenade_aim_point";
		dispersion = 0.0174533;
		class Single : Single
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 100;
			aiDispersionCoefY = 1;
			aiDispersionCoefX = 2;
			dispersion = 0.0174533;
			maxRange = 250;
			maxRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			minRange = 10;
			minRangeProbab = 0.1;
			class StandardSound
			{
				soundSetShot[] = { "Launcher_MRAWS_Shot_SoundSet","Launcher_MRAWS_Tail_SoundSet" };
			};
		};
	};
*/
    class HLC_Charm_base : ItemCore
    {
        dlc = "Niarms_Core";
        scope = public;
        author = "Toadie";
        descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
        picture = "\hlc_core\tex\UI\gear_dbal_ca.paa";
        model = "hlc_core\mesh\accessories\acc\charms\eurojank.p3d";
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        class ItemInfo : InventoryFlashLightItem_Base_F
        {
            mass = 1;
        };
        inertia = 0.01;
    };
    class HLC_Charm_Eurojank :HLC_Charm_base
    {
        author = "Toadie";
        scope = public;
        displayname = $STR_NIA_Charm_Eurojank;
        model = "hlc_core\mesh\accessories\acc\charms\eurojank.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_eurc_ca.paa";
        descriptionshort = $STR_NIA_Charm_Eurojank_DESC;
    };
    class HLC_Charm_NIArmsbacker :HLC_Charm_base
    {
        author = "Toadie";
        displayname = $STR_NIA_Charm_Backer;
        model = "hlc_core\mesh\accessories\acc\charms\niarms.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_niac_ca.paa";
        descriptionshort = $STR_NIA_Charm_Generic;
    };
    class HLC_Charm_NIArmsbacker_dirty :HLC_Charm_base
    {
        author = "Toadie";
        displayname = $STR_NIA_Charm_BackerDirty;
        model = "hlc_core\mesh\accessories\acc\charms\niarms_dirty.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_niac_ca.paa";
        descriptionshort = $STR_NIA_Charm_Generic;
    };
    class HLC_Charm_Izhmash :HLC_Charm_base
    {
        author = "Toadie";
        displayname = $STR_NIA_Charm_Izhmash;
        model = "hlc_core\mesh\accessories\acc\charms\izhmash.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_izhmash_ca.paa";
        descriptionshort = $STR_NIA_Charm_Izhmash_DESC;
    };
    class HLC_Charm_Herstal :HLC_Charm_base
    {
        author = "Toadie";
        displayname = $STR_NIA_Charm_FN;
        model = "hlc_core\mesh\accessories\acc\charms\FNH.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_herstal_ca.paa";
        descriptionshort = $STR_NIA_Charm_FN_DESC;
    };

    class HLC_Charm_Teethgang :HLC_Charm_base
    {
        displayname = $STR_NIA_Charm_Teethgang;
        model = "hlc_core\mesh\accessories\acc\charms\Beaver_charm.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_beaver_ca.paa";
        descriptionshort = $STR_NIA_Charm_Teethgang_DESC;
    };
    // vanilla compat
    class Rifle_Base_F;
    class mk20_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_MAGS };
    };
    class SDAR_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_MAGS };
    };
    class Tavor_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_MAGS };
    };
    class arifle_SPAR_01_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_MAGS };
    };
    class arifle_SPAR_02_base_F : Rifle_Base_F {
        magazines[] += { __556STANAG_MAGS };
    };
};

