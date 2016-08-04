#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches
{
 class hlcweapons_falpocalypse
 {
	requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
	units[] = {"HLC_FAL_ammobox","Weapon_hlc_rifle_SLRchopmod","Weapon_hlc_rifle_LAR","Weapon_hlc_rifle_c1A1","Weapon_hlc_rifle_FAL5061","Weapon_hlc_rifle_STG58F","Weapon_hlc_rifle_SLR","Weapon_hlc_rifle_L1A1slr","Weapon_hlc_rifle_osw_GL","Weapon_hlc_rifle_falosw","weapon_hlc_rifle_FAL5061Rail"};
	weapons[] = {"hlc_rifle_SLRchopmod","hlc_rifle_LAR","hlc_rifle_c1A1","hlc_rifle_FAL5061","hlc_rifle_STG58F","hlc_rifle_SLR","hlc_rifle_L1A1slr","hlc_rifle_osw_GL","hlc_rifle_falosw","hlc_muzzle_snds_fal","hlc_optic_suit","hlc_optic_PVS4FAL"};
	magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_t_fal","hlc_50rnd_762x51_M_FAL","hlc_20Rnd_762x51_S_fal"};
	version="v1.8";
	author="toadie";
 };
};
class cfgMods
{
	class Mod_Base;
	class Niarms_FAL :Mod_Base
	{
		name = "NIArsenal: FAL Rifles";
		picture = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
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
class GrenadeLauncher;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class CfgVehicles
{
	class NATO_Box_Base;
	class HLC_FAL_ammobox: NATO_Box_Base
	{		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC FAL Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		dlc = "Niarms_FAL";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class xhlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 30;
			};
			class xxhlc_20Rnd_762x51_mk316_fal
			{
				magazine = "hlc_20Rnd_762x51_mk316_fal";
				count = 30;
			};
			class xxhhlc_20Rnd_762x51_barrier_fal
			{
				magazine = "hlc_20Rnd_762x51_barrier_fal";
				count = 30;
			};
			class xhlc_20Rnd_762x51_t_fal
			{
				magazine = "hlc_20Rnd_762x51_t_fal";
				count = 30;
			};
			class xhlc_50rnd_762x51_M_FAL
			{
				magazine = "hlc_50rnd_762x51_M_FAL";
				count = 30;
			};
			class xhlc_20Rnd_762x51_S_fal 
			{
				magazine = "hlc_20Rnd_762x51_S_fal";
				count = 30;
			};


			};
		class TransportWeapons
		{
			class _xhlc_rifle_falosw
			{
				weapon = "hlc_rifle_falosw";
				count = 20;
			};
						class _xhlc_rifle_osw_GL
			{
				weapon = "hlc_rifle_osw_GL";
				count = 20;
			};	
			class _xhhlc_rifle_L1A1
			{
				weapon = "hlc_rifle_L1A1slr";
				count = 20;
			};	
			class _xhlc_rifle_SLR
			{
				weapon = "hlc_rifle_SLR";
				count = 20;
			};
			class _xhlc_rifle_STG58F
			{
				weapon = "hlc_rifle_STG58F";
				count = 20;
			};
			class _xhlc_rifle_FAL5061
			{
				weapon = "hlc_rifle_FAL5061";
				count = 20;
			};
			class _xhlc_rifle_c1A1
			{
				weapon = "hlc_rifle_c1A1";
				count = 20;
			};
			class _xhlc_rifle_LAR
			{
				weapon = "hlc_rifle_LAR";
				count = 20;
			};
			class _xhlc_rifle_SLRchopmod
			{
				weapon = "hlc_rifle_SLRchopmod";
				count = 20;
			};
			
		};
		class TransportItems
		{
			class _xhlc_muzzle_snds_fal
			{
				name = "hlc_muzzle_snds_fal";
				count = 20;
			};
			class _xhlc_optic_suit
			{
				name = "hlc_optic_suit";
				count = 10;
			};
			class _xhlc_optic_PVS4FAL
			{
				name = "hlc_optic_PVS4FAL";
				count = 10;
			};
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
			class _xx_optic_hamr
			{
				name = "optic_hamr";
				count = 10;
			};
			class _xx_optic_rco
			{
				name = "optic_rco";
				count = 10;
			};
			class _xx_optic_ACO_grn
			{
				name = "optic_ACO_grn";
				count = 10;
			};
			
		};
	};
	class Weapon_Base_F;
	class Weapon_hlc_rifle_SLRchopmod : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "SLR Chopmod";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_SLRchopmod";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_LAR : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "LAR";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_LAR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_c1A1 : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "C1A1";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_c1A1";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class weapon_hlc_rifle_FAL5061Rail : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FAL 'Para' 50.61(RIS)";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_FAL5061Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_FAL5061 : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FAL 'Para' 50.61";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_FAL5061";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_STG58F : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FAL Stg.58";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_STG58F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_SLR : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "SLR";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_SLR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_L1A1slr : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "L1A1 SLR";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_L1A1slr";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_osw_GL : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "SA58 OSW+M203";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_osw_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_falosw : Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "SA58 OSW";
		author = "Toadie";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class srifle_EBR_F
			{
				weapon = "hlc_rifle_falosw";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class 20Rnd_762x51_Mag
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	};

class CfgMagazines {
class 30Rnd_556x45_Stanag;
class hlc_20Rnd_762x51_B_fal : 30Rnd_556x45_Stanag {
	dlc = "Niarms_FAL";
author = "Toadie";
		ammo = "HLC_762x51_ball";
		count = 20;
		descriptionshort = "Caliber: 7.62x51mm NATO (Enhanced Performance Ball)<br />Rounds: 20<br />Used in: L1A1,FN FAL, SA58 OSW";
		displayname = "FAL Mag (Ball) 20rnd 7.62mm";
		initspeed = 930;
		mass = 13;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
		model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
		scope = 2;
		tracersevery = 0;
		displaynameshort = "7.62mm EPR";
	};
class hlc_20Rnd_762x51_mk316_fal : hlc_20Rnd_762x51_B_fal{
	author = "Toadie";
	ammo = "HLC_762x51_MK316_20in";
	count = 20;
	descriptionshort = "Caliber: 7.62x51mm NATO (Mk.316 Special Ball Long Range)<br />Rounds: 20<br />Used in: L1A1,FN FAL, SA58 OSW";
	displayname = "FAL Mag (Mk.316) 20rnd 7.62mm";
	initspeed = 930;
	mass = 13;
	lastroundstracer = 1;
	picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
	model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
	scope = 2;
	tracersevery = 0;
	displaynameshort = "7.62mm Mk.316";
};
class hlc_20Rnd_762x51_barrier_fal : hlc_20Rnd_762x51_B_fal{
	author = "Toadie";
	ammo = "HLC_762x51_Barrier";
	count = 20;
	descriptionshort = "Caliber: 7.62x51mm NATO (Mk.319 Barrier-Blind)<br />Rounds: 20<br />Used in: L1A1,FN FAL, SA58 OSW";
	displayname = "FAL Mag (Mk.319) 20rnd 7.62mm";
	model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
	initspeed = 930;
	mass = 13;
	lastroundstracer = 1;
	picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
	scope = 2;
	tracersevery = 0;
	displaynameshort = "7.62mm Mk.319";
};
	class hlc_20Rnd_762x51_T_fal : hlc_20Rnd_762x51_B_fal {
	author = "Toadie";
		ammo = "B_762x51_Tracer_Green";
		descriptionshort = "Caliber: 7.62x51mm NATO (Tracer)<br />Rounds: 20<br />Used in: L1A1,FN FAL,SA58 OSW";
		displayname = "FAL Mag (Tracer) 20rnd 7.62mm";
		model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
		lastroundstracer = 0;
		scope = 2;
		mass = 13;
		tracersevery = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falTracer_ca.paa";
		displaynameshort = "7.62mm Tracer";
	};
	class hlc_20Rnd_762x51_S_fal : hlc_20Rnd_762x51_B_fal {
	author = "Toadie";
		ammo = "HLC_762x51_BTSub";
		descriptionshort = "Caliber: 7.62x51mm NATO (Boat-Tailed Lapua Subsonic)<br />Rounds: 20<br />Used in: L1A1,FN FAL,SA58 OSW";
		displayname = "FAL Mag (SubSonic) 20rnd 7.62mm";
		model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
		lastroundstracer = 0;
		scope = 2;
		mass = 13;
		tracersevery = 0;
		initspeed = 325;
		displaynameshort = "7.62mm SubSonic";
		picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
	};
class hlc_50rnd_762x51_M_FAL : hlc_20Rnd_762x51_B_fal
{
author = "Toadie";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm NATO (Tracer)<br />Rounds: 50<br />Used in: G3A3,G3SG1,PSG1";
		displayname = "X-FAL Magazine (Tracer) 50rnd 7.62mm";
		model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
		initspeed = 800;
		mass = 32;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
		scope = 2;
		tracersevery = 4;
		displaynameshort = "7.62mm Tracer";
};
};

class CfgWeapons {
    class Rifle;
    class WeaponSlotsInfo;
	    class Rifle_Base_F: Rifle 
    {
        class WeaponSlotsInfo;
        class GunParticles;
		};
		class ItemCore;
		class optic_Arco : ItemCore 
		{
		};
	class hlc_optic_suit :optic_arco
	{
		dlc = "Niarms_FAL";
	scope= public;
	author = "Pete, Acid Snake, Toadie";
descriptionshort = "Single Unit, Infantry, Trilux Optic<br />Magnification: 4x";
displayname = "SUIT";
picture = "\hlc_wp_FAL\tex\ui\gear_suit_x_ca";
model = "\hlc_wp_FAL\mesh\SUIT\scope.p3d";
class ItemInfo: InventoryOpticsItem_Base_F
 		{	
 			mass = 7;
			modelOptics = "\hlc_wp_fal\mesh\suit\suit_optics";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {200,300,400,500,600};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 600;
					memoryPointCamera = "eye";
					modelOptics[] = {"\hlc_wp_fal\mesh\suit\suit_optics"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Kolimator {
					cameradir = "";
					distancezoommax = 100;
					distancezoommin = 100;
					memorypointcamera = "AOTT";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 2;
					opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
					opticsZoomMin = 0.2;
					opticsZoomMax = 0.5;
					opticsZoomInit = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
};
	class hlc_optic_PVS4FAL :hlc_optic_suit
{
	dlc = "Niarms_FAL";
author = "Pete, Enron, Bohemia Interactive, Toadie";
descriptionshort = "Night Vision Optic<br />Magnification: 4x";
displayname = "AN/PVS4(FAL-Mount)";
picture = "\hlc_wp_FAL\tex\ui\gear_PVS4_x_ca";
model = "\hlc_wp_FAL\mesh\PVS4\scope.p3d";
class ItemInfo: InventoryOpticsItem_Base_F
 		{	
 			mass = 7;
			modelOptics = "\hlc_wp_FAL\mesh\PVS4\NV_anpvs4_optic";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {200,300,400,500,600};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 600;
					memoryPointCamera = "eye";
					modelOptics[] = {"\hlc_wp_FAL\mesh\PVS4\NV_anpvs4_optic"};
					visionMode[] = {"NVG"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Snip2
				{
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = { 200, 300, 400, 500, 600 };
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 600;
					memoryPointCamera = "eye";
					modelOptics[] = { "\hlc_wp_FAL\mesh\PVS4\pvs4-daysight" };
					visionMode[] = { "NVG" };
					opticsFlare = 1;
					opticsid = 2;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Kolimator {
					cameradir = "";
					distancezoommax = 100;
					distancezoommin = 100;
					memorypointcamera = "AOTT";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 3;
					opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
					opticsZoomMin = 0.2;
					opticsZoomMax = 0.5;
					opticsZoomInit = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
};
	class muzzle_snds_H : ItemCore {
	class ItemInfo;
};
	class hlc_muzzle_snds_fal :muzzle_snds_H
{
author = "Pete, Acid Snake, Toadie";
		displayName = "FAL Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "hlc_wp_fal\mesh\SUP_308HK\hk308";
};
	class hlc_fal_base : Rifle_Base_F
	{
		dlc = "Niarms_FAL";
			recoil = "recoil_ebr";
		maxZeroing = 1600;
		magazineReloadSwitchPhase = 0.5;
	scope = protected;
	deployedpivot = "deploypivot";
	hasBipod = false;
	 magazines[] = {
            "hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_mk316_fal","hlc_20Rnd_762x51_Barrier_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_S_fal","hlc_50rnd_762x51_M_FAL"
        };
		        class Library
        {
            libTextDesc = "FN FAL";
        };
		reloadAction = "GestureReloadEBR";
		aidispersioncoefx = 4;
		aidispersioncoefy = 6;
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
distancezoommax = 300;
distancezoommin = 300;
drysound[] = {"A3\sounds_f\weapons\other\dry1", 0.630957, 1, 30};
handanim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"};
modes[] = {"Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};
opticszoominit = 0.75;
opticszoommax = 1.1;
opticszoommin = 0.25;
reloadmagazinesound[] = {"hlc_WP_FAL\snd\sa58_reload", 0.630957, 1, 35};
soundbullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};

	
	class WeaponSlotsInfo: WeaponSlotsInfo {
class CowsSlot: CowsSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
};
class PointerSlot: PointerSlot {
linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
compatibleitems[] = {};
};
class asdg_MuzzleSlot_762FAL : asdg_MuzzleSlot_762{};
};
class Single: Mode_SemiAuto {
sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
 			{
				soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\DSA_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
 			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.9952624, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
			begin1[] = {"hlc_WP_FAL\snd\sa58", 1, 1, 1200};
			begin2[] = {"hlc_WP_FAL\snd\sa58", 1, 1, 1200};
			begin3[] = {"hlc_WP_FAL\snd\sa58", 1, 1, 1200};
			closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
			closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
			dispersion = 0.0007;
			maxrange = 500;
			maxrangeprobab = 0.05;
			midrange = 350;
			midrangeprobab = 0.7;
			minrange = 2;
			minrangeprobab = 0.3;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			reloadtime = 0.086;
			soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
			soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
			weaponsoundeffect = "DefaultRifle";
};
class FullAuto: Mode_FullAuto {
sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\DSA_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.9952624, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
			airateoffire = "1e-006";
			begin1[] = {"hlc_WP_FAL\snd\sa58", 1, 1, 1200};
			begin2[] = {"hlc_WP_FAL\snd\sa58", 1, 1, 1200};
			begin3[] = {"hlc_WP_FAL\snd\sa58", 1, 1, 1200};
			closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
			closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
			dispersion = 0.0007;
			maxrange = 30;
			maxrangeprobab = 0.05;
			midrange = 15;
			midrangeprobab = 0.7;
			minrange = 0;
			minrangeprobab = 0.9;
			recoil = "recoil_auto_ebr";
			recoilprone = "recoil_auto_prone_ebr";
			reloadtime = 0.086;
			soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
			soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
			weaponsoundeffect = "DefaultRifle";
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
};

class hlc_rifle_falosw : hlc_fal_base
{
author = "Pete, Enron, Toadie";
		AB_barrelTwist=12;
		AB_barrelLength=13;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 330.2;
	scope = public;
 displayName = "DSArms FAL OSW";
 handAnim[] = {"OFP2_ManSkeleton", "\hlc_wp_fal\gesture\newgesture\hands_osw.rtm"};
 descriptionShort = "Short-Barreled Rifle<br/>Caliber: 7.62x51mm NATO";
 reloadAction = "HLC_GestureReloadOSW";
 		aidispersioncoefx = 4;
		aidispersioncoefy = 6;
 drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
 changeFiremodeSound[] = {"hlc_wp_fal\snd\ak_selector",1,1,20};
        model = "\hlc_wp_FAL\mesh\sa58\osw.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_osw_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
				cameradir = "look";
		discreteDistanceCameraPoint[]={"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9"}; /// the angle of gun changes with zeroing
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 81;
			class asdg_OpticRail_OSW : asdg_OpticRail1913 {};
			class asdg_FrontSideRail_OSW : asdg_FrontSideRail {};
			class asdg_UnderSlot_osw : asdg_UnderSlot{};
			class asdg_MuzzleSlot_762FAL : asdg_MuzzleSlot_762{};
		};
			class Single : Mode_SemiAuto {
				sounds[] = { "StandardSound", "SilencedSound" };

				class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
				{
					weaponSoundEffect = "DefaultRifle";

					closure1[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
					closure2[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
					soundClosure[] = { closure1, 0.5, closure2, 0.5 };
				};

				class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
				{
					soundSetShot[] = { "OSW_Shot_SoundSet", "OSW_Tail_SoundSet" };
					//NEW THING PAY ATTENTION
					begin1[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
					begin2[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
					begin3[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
					soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
					class SoundTails
					{
						class TailForest
						{
							sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
							frequency = 1;
							volume = "(1-interior/1.4)*forest";
						};
						class TailInterior
						{
							sound[] = { "\hlc_wp_fal\snd\tails\fal2_indoor", 1.0, 1, 1200 };
							frequency = 1;
							volume = "interior";
						};
					};
				};

				class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
				{
					soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
					//NEW THING PAY ATTENTION
					begin1[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
					begin2[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
					soundBegin[] = { begin1, 0.5, begin2, 0.5 };
					class SoundTails
					{
						class TailInterior
						{
							sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.9952624, 1, 100 };
							frequency = 1;
							volume = "interior";
						};
					};
				};
				begin1[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
				begin2[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
				begin3[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
				closure1[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30 };
				closure2[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30 };
				dispersion = 0.000555596;
				maxrange = 500;
				maxrangeprobab = 0.05;
				midrange = 350;
				midrangeprobab = 0.7;
				minrange = 2;
				minrangeprobab = 0.3;
				recoil = "recoil_single_ebr";
				recoilprone = "recoil_single_prone_ebr";
				reloadtime = 0.086;
				soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
				soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
				weaponsoundeffect = "DefaultRifle";
			};
			class FullAuto : Mode_FullAuto {
				sounds[] = { "StandardSound", "SilencedSound" };

				class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
				{
					weaponSoundEffect = "DefaultRifle";

					closure1[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
					closure2[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
					soundClosure[] = { closure1, 0.5, closure2, 0.5 };
				};

				class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
				{
					soundSetShot[] = { "OSW_Shot_SoundSet", "OSW_Tail_SoundSet" };
					//NEW THING PAY ATTENTION
					begin1[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
					begin2[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
					begin3[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
					soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
					class SoundTails
					{
						class TailForest
						{
							sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
							frequency = 1;
							volume = "(1-interior/1.4)*forest";
						};
						class TailInterior
						{
							sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
							frequency = 1;
							volume = "interior";
						};
					};
				};

				class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
				{
					soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
					//NEW THING PAY ATTENTION
					begin1[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
					begin2[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
					soundBegin[] = { begin1, 0.5, begin2, 0.5 };
					class SoundTails
					{
						class TailInterior
						{
							sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
							frequency = 1;
							volume = "interior";
						};
					};
				};
				airateoffire = "1e-006";
				begin1[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
				begin2[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
				begin3[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
				closure1[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30 };
				closure2[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30 };
				dispersion = 0.000555596;
				maxrange = 30;
				maxrangeprobab = 0.05;
				midrange = 15;
				midrangeprobab = 0.7;
				minrange = 0;
				minrangeprobab = 0.9;
				recoil = "recoil_auto_ebr";
				recoilprone = "recoil_auto_prone_ebr";
				reloadtime = 0.086;
				soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
				soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
				weaponsoundeffect = "DefaultRifle";
			};
};
class UGL_F;
class hlc_rifle_osw_GL: hlc_rifle_falosw
{

	scope = public;
	descriptionShort = "Short-Barreled Rifle<br/>Caliber: 7.62x51mm NATO";
	reloadAction = "HLC_GestureReloadOSW";
	aidispersioncoefx = 4;
	aidispersioncoefy = 6;
	ACE_barrelTwist = 304.8;
	ACE_barrelLength = 330.2;
	drysound[] = { "hlc_core\sound\empty_assaultrifles", 1.01, 1, 10 };
	changeFiremodeSound[] = { "hlc_wp_fal\snd\ak_selector", 1, 1, 20 };
	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900 };
	discretedistanceinitindex = 2;
	cameradir = "look";
	discreteDistanceCameraPoint[] = { "eye", "eye2", "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9" }; /// the angle of gun changes with zeroing
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 81; 
		class asdg_UnderSlot_osw : asdg_UnderSlot{ compatibleitems[] = {}; };
	};

		author = "Pete, Enron, Tigg, Bohemia Interactive, Toadie";
		AB_barrelTwist=12;
		AB_barrelLength=13;
 displayName = "DSArms FAL OSW(GL)";
         model = "\hlc_wp_FAL\mesh\sag58gl\osw_gl.p3d";
       picture = "\hlc_wp_FAL\tex\ui\gear_oswgl_x_ca";
	   	muzzles[] = {"this", "hlc_M203_OSW"};
 handAnim[] = {"OFP2_ManSkeleton", "\hlc_wp_fal\gesture\newgesture\osw_gl_hands.rtm"};
			class hlc_M203_OSW : UGL_F {
		cameradir = "GL Look";
		discreteDistance[] = {50,100,150,200,250,300,350,400};
		discreteDistanceCameraPoint[] = {"GL Eye1","GL Eye1", "GL Eye2","GL Eye2", "GL Eye3","GL Eye3", "GL Eye4", "GL Eye4"}; /// the angle of gun changes with zeroing
		discreteDistanceInitIndex = 1;
		displayname = "M203";
		useModelOptics = false;
		useExternalOptic = false;
		optics = 1;
		drysound[] = {"A3\sounds_f\Weapons\other\sfx5", 1, 1, 400};
		cursoraim = "gl";
		magazinereloadtime = 0;
		reloadAction = "GestureReloadTrgUGL";
		magazines[] = {"1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.375;
		reloadmagazinesound[] = {"A3\sounds_f\Weapons\grenades\ugl_reload", 0.1, 1, 20};
		reloadtime = 0.1;
		sound[] = {"A3\sounds_f\Weapons\grenades\ugl_shot_1", 1, 1, 400};
		weaponinfotype = "RscWeaponZeroing";
};
};
class hlc_rifle_SLR : hlc_fal_base
{
author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		AB_barrelTwist=12;
		AB_barrelLength=21.7;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 551.18;
	scope = public;
 displayName = "Lithgow SLR";
 descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
 		recoil = "recoil_ebr";
		maxZeroing = 1600;
 reloadAction = "HLC_GestureReloadFALLONG";
 drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
 handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
 modes[] = {"Single", "single_close_optics1", "single_medium_optics1", "single_far_optics1"};
 reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
 changeFiremodeSound[] = {"hlc_wp_fal\snd\ak_selector",1,1,20};
        model = "\hlc_wp_FAL\mesh\slr\l1a1_1.p3d";
       picture = "\hlc_wp_FAL\tex\ui\gear_slr_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800};
		discretedistanceinitindex = 2;
		cameradir = "look";
		discreteDistanceCameraPoint[]={"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9"}; /// the angle of gun changes with zeroing
					class Single: Mode_SemiAuto {
sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "FAL2_Shot_SoundSet", "FAL2_tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\falnew_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.9952624, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
dispersion = 0.000555596;
maxrange = 500;
maxrangeprobab = 0.05;
midrange = 350;
midrangeprobab = 0.7;
minrange = 2;
minrangeprobab = 0.3;
recoil = "recoil_single_ebr";
recoilprone = "recoil_single_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};

		        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 86;
			class CowsSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			compatibleItems[] = {"hlc_optic_suit","hlc_optic_PVS4FAL"};};
			
			};

};
class hlc_rifle_STG58F : hlc_fal_base
{
author = "Pete, Enron, Bohemia Interactive, Toadie, Clifton Vlodhammer";
		AB_barrelTwist=12;
		AB_barrelLength=21;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 533.4;
	scope = public;
 displayName = "Steyr STG.58";
 descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
 reloadAction = "HLC_GestureReloadFALLONG";
 drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
  reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
 handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
 changeFiremodeSound[] = {"hlc_wp_fal\snd\ak_selector",1,1,20};
        model = "\hlc_wp_FAL\mesh\stg58\stg58.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_stg58_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		cameradir = "look";
		discreteDistanceCameraPoint[]={"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9"}; /// the angle of gun changes with zeroing
		        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 89;
            class asdg_OpticRail_STG58F: asdg_OpticRail1913 {};
			class CowsSlot {};
};
class Single: Mode_SemiAuto {
sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
 			{
				soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_fire2", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_fire2", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\fal_fire2", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal2_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
 			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.9952624, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
dispersion = 0.000555596;
maxrange = 500;
maxrangeprobab = 0.05;
midrange = 350;
midrangeprobab = 0.7;
minrange = 2;
minrangeprobab = 0.3;
recoil = "recoil_single_ebr";
recoilprone = "recoil_single_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
class FullAuto: Mode_FullAuto {
sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_fire2", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_fire2", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\fal_fire2", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal2_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.9952624, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
airateoffire = "1e-006";
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
dispersion = 0.000555596;
maxrange = 30;
maxrangeprobab = 0.05;
midrange = 15;
midrangeprobab = 0.7;
minrange = 0;
minrangeprobab = 0.9;
recoil = "recoil_auto_ebr";
recoilprone = "recoil_auto_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
};
class hlc_rifle_FAL5061Rail : hlc_fal_base
{
	scope = public;
	author = "Bohemia Interactive, Arby25, Toadie";
	displayName = "FN FAL 50.61'Para' (RIS)";
	model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_rails.p3d";
	picture = "\hlc_wp_FAL\tex\ui\gear_para_x_ca";
	descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
	reloadAction = "HLC_GestureReloadFALLONG";
	reloadmagazinesound[] = { "hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35 };
	handanim[] = { "OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm" };
	changeFiremodeSound[] = { "hlc_wp_fal\snd\ak_selector", 1, 1, 20 };
	discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900 };
	discretedistanceinitindex = 2;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 89;
		class asdg_OpticRail_falpara : asdg_OpticRail1913 {};
		class CowsSlot {};
	};
	class Single : Mode_SemiAuto {
		sounds[] = { "StandardSound", "SilencedSound" };

		class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
			closure2[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};

		class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
		{
			soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
			//NEW THING PAY ATTENTION
			begin1[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
			begin2[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
			begin3[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
			soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
			class SoundTails
			{
				class TailForest
				{
					sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailInterior
				{
					sound[] = { "\hlc_wp_fal\snd\tails\fal2_indoor", 1.0, 1, 1200 };
					frequency = 1;
					volume = "interior";
				};
			};
		};

		class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
		{
			soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
			//NEW THING PAY ATTENTION
			begin1[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
			begin2[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
			soundBegin[] = { begin1, 0.5, begin2, 0.5 };
			class SoundTails
			{
				class TailInterior
				{
					sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.9952624, 1, 100 };
					frequency = 1;
					volume = "interior";
				};
			};
		};
		begin1[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		begin2[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		begin3[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		closure1[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30 };
		closure2[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30 };
		dispersion = 0.000555596;
		maxrange = 500;
		maxrangeprobab = 0.05;
		midrange = 350;
		midrangeprobab = 0.7;
		minrange = 2;
		minrangeprobab = 0.3;
		recoil = "recoil_single_ebr";
		recoilprone = "recoil_single_prone_ebr";
		reloadtime = 0.086;
		soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
		soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
		weaponsoundeffect = "DefaultRifle";
	};
	class FullAuto : Mode_FullAuto {
		sounds[] = { "StandardSound", "SilencedSound" };

		class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
			closure2[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};

		class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
		{
			soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
			//NEW THING PAY ATTENTION
			begin1[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
			begin2[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
			begin3[] = { "\hlc_WP_FAL\snd\fal_fire2", 1, 1, 1200 };
			soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
			class SoundTails
			{
				class TailForest
				{
					sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailInterior
				{
					sound[] = { "\hlc_wp_fal\snd\tails\fal2_indoor", 1.0, 1, 1200 };
					frequency = 1;
					volume = "interior";
				};
			};
		};

		class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
		{
			soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
			//NEW THING PAY ATTENTION
			begin1[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
			begin2[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
			soundBegin[] = { begin1, 0.5, begin2, 0.5 };
			class SoundTails
			{
				class TailInterior
				{
					sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.9952624, 1, 100 };
					frequency = 1;
					volume = "interior";
				};
			};
		};
		airateoffire = "1e-006";
		begin1[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		begin2[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		begin3[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		closure1[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30 };
		closure2[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30 };
		dispersion = 0.000555596;
		maxrange = 30;
		maxrangeprobab = 0.05;
		midrange = 15;
		midrangeprobab = 0.7;
		minrange = 0;
		minrangeprobab = 0.9;
		recoil = "recoil_auto_ebr";
		recoilprone = "recoil_auto_prone_ebr";
		reloadtime = 0.086;
		soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
		soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
		weaponsoundeffect = "DefaultRifle";
	};

};
class hlc_rifle_FAL5061 :hlc_fal_base
{
	scope = public;
author = "Bohemia Interactive, Arby25, Toadie";
		AB_barrelTwist=12;
		AB_barrelLength=18;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 457.2;
 displayName = "FN FAL 50.61'Para'";
 descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
 reloadAction = "HLC_GestureReloadFALLONG";
 drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
  reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
 handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
 changeFiremodeSound[] = {"hlc_wp_fal\snd\ak_selector",1,1,20};
        model = "\hlc_wp_FAL\mesh\FN_FAL\FNFAL.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_para_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 78;
			class CowsSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			compatibleItems[] = {"hlc_optic_suit","hlc_optic_PVS4FAL"};};
			class Single: Mode_SemiAuto {
			sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
dispersion = 0.000555596;
maxrange = 500;
maxrangeprobab = 0.05;
midrange = 350;
midrangeprobab = 0.7;
minrange = 2;
minrangeprobab = 0.3;
recoil = "recoil_single_ebr";
recoilprone = "recoil_single_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
class FullAuto: Mode_FullAuto {
sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
airateoffire = "1e-006";
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
dispersion = 0.000555596;
maxrange = 30;
maxrangeprobab = 0.05;
midrange = 15;
midrangeprobab = 0.7;
minrange = 0;
minrangeprobab = 0.9;
recoil = "recoil_auto_ebr";
recoilprone = "recoil_auto_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
};
};
class hlc_rifle_FAL5000 :hlc_rifle_FAL5061
{
	scope = public;
	author = "Bohemia Interactive, Arby25, Toadie, Clifton Vlodhammer";
AB_barrelTwist = 12;
AB_barrelLength = 18;
ACE_barrelTwist = 304.8;
ACE_barrelLength = 457.2;
displayName = "FN FAL 50.00";
descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
reloadAction = "HLC_GestureReloadFALLONG";
drysound[] = { "hlc_core\sound\empty_assaultrifles", 1.01, 1, 10 };
reloadmagazinesound[] = { "hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35 };
handanim[] = { "OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm" };
changeFiremodeSound[] = { "hlc_wp_fal\snd\ak_selector", 1, 1, 20 };
model = "\hlc_wp_FAL\mesh\FN_FAL\FNFAL_full.p3d";
picture = "\hlc_wp_FAL\tex\ui\gear_fal_ca";
UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
discretedistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900 };
discretedistanceinitindex = 2;
class WeaponSlotsInfo : WeaponSlotsInfo
{
	mass = 78;
	class CowsSlot {
		linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
		compatibleItems[] = { "hlc_optic_suit", "hlc_optic_PVS4FAL" };
	};
	class Single : Mode_SemiAuto {
		sounds[] = { "StandardSound", "SilencedSound" };

		class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
			closure2[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};

		class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
		{
			soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
			//NEW THING PAY ATTENTION
			begin1[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
			begin2[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
			begin3[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
			soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
			class SoundTails
			{
				class TailForest
				{
					sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailInterior
				{
					sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
					frequency = 1;
					volume = "interior";
				};
			};
		};

		class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
		{
			soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
			//NEW THING PAY ATTENTION
			begin1[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
			begin2[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
			soundBegin[] = { begin1, 0.5, begin2, 0.5 };
			class SoundTails
			{
				class TailInterior
				{
					sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
					frequency = 1;
					volume = "interior";
				};
			};
		};
		begin1[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		begin2[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		begin3[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		closure1[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30 };
		closure2[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30 };
		dispersion = 0.000555596;
		maxrange = 500;
		maxrangeprobab = 0.05;
		midrange = 350;
		midrangeprobab = 0.7;
		minrange = 2;
		minrangeprobab = 0.3;
		recoil = "recoil_single_ebr";
		recoilprone = "recoil_single_prone_ebr";
		reloadtime = 0.086;
		soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
		soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
		weaponsoundeffect = "DefaultRifle";
	};
	class FullAuto : Mode_FullAuto {
		sounds[] = { "StandardSound", "SilencedSound" };

		class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
		{
			weaponSoundEffect = "DefaultRifle";

			closure1[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
			closure2[] = { "\hlc_WP_FAL\snd\fal_first", 1, 1, 10 };
			soundClosure[] = { closure1, 0.5, closure2, 0.5 };
		};

		class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
		{
			soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
			//NEW THING PAY ATTENTION
			begin1[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
			begin2[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
			begin3[] = { "\hlc_WP_FAL\snd\fal_fire", 1, 1, 1200 };
			soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
			class SoundTails
			{
				class TailForest
				{
					sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailInterior
				{
					sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
					frequency = 1;
					volume = "interior";
				};
			};
		};

		class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
		{
			soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
			//NEW THING PAY ATTENTION
			begin1[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
			begin2[] = { "\hlc_WP_FAL\snd\fal_silenced", 1, 1, 200 };
			soundBegin[] = { begin1, 0.5, begin2, 0.5 };
			class SoundTails
			{
				class TailInterior
				{
					sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
					frequency = 1;
					volume = "interior";
				};
			};
		};
		airateoffire = "1e-006";
		begin1[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		begin2[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		begin3[] = { "hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200 };
		closure1[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30 };
		closure2[] = { "hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30 };
		dispersion = 0.000555596;
		maxrange = 30;
		maxrangeprobab = 0.05;
		midrange = 15;
		midrangeprobab = 0.7;
		minrange = 0;
		minrangeprobab = 0.9;
		recoil = "recoil_auto_ebr";
		recoilprone = "recoil_auto_prone_ebr";
		reloadtime = 0.086;
		soundbegin[] = { "begin1", 0.34, "begin2", 0.33, "begin3", 0.33 };
		soundclosure[] = { "closure1", 0.5, "closure2", 0.5 };
		weaponsoundeffect = "DefaultRifle";
	};
};
};
class hlc_rifle_FAL5000Rail : hlc_rifle_FAL5061Rail
{
	scope = public;
	displayName = "FN FAL 50.00 (RIS)";
	author = "Bohemia Interactive, Arby25, Toadie, Clifton Vlodhammer";
	model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_full_rails.p3d";
	picture = "\hlc_wp_FAL\tex\ui\gear_fal_ca";
};
class hlc_rifle_L1A1SLR :hlc_rifle_SLR
{
author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		AB_barrelTwist=12;
		AB_barrelLength=21.7;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 551.18;
scope = public;
 displayName = "Enfield L1A1 SLR";
 descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
 reloadAction = "HLC_GestureReloadFALLONG";
 drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
  reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
 handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
 changeFiremodeSound[] = {"hlc_wp_fal\snd\ak_selector",1,1,20};
        model = "\hlc_wp_FAL\mesh\l1a1\L1A1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_l1a1_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		cameradir = "look";
		discreteDistanceCameraPoint[]={"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9"}; /// the angle of gun changes with zeroing
		discretedistanceinitindex = 2;
		class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "FAL2_Shot_SoundSet", "FAL2_tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\falnew_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
		dispersion = 0.0013;
maxrange = 500;
maxrangeprobab = 0.05;
midrange = 350;
midrangeprobab = 0.7;
minrange = 2;
minrangeprobab = 0.3;
recoil = "recoil_single_ebr";
recoilprone = "recoil_single_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
		        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 86;
			class CowsSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			compatibleItems[] = {"hlc_optic_suit","hlc_optic_PVS4FAL"};};
};
};
class hlc_rifle_c1A1 : hlc_rifle_SLR
{
author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		AB_barrelTwist=12;
		AB_barrelLength=21.7;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 551.18;
scope = public;
 displayName = "CAL C1A1";
 descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
 reloadAction = "HLC_GestureReloadFALLONG";
 drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
  reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
 handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
 changeFiremodeSound[] = {"hlc_wp_fal\snd\ak_selector",1,1,20};
        model = "\hlc_wp_FAL\mesh\C1A1\C1A1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_c1_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		cameradir = "look";
		discreteDistanceCameraPoint[]={"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9"}; /// the angle of gun changes with zeroing
		class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "FAL2_Shot_SoundSet", "FAL2_tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\FAL_Fire_new", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\falnew_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
		dispersion = 0.0013;
maxrange = 500;
maxrangeprobab = 0.05;
midrange = 350;
midrangeprobab = 0.7;
minrange = 2;
minrangeprobab = 0.3;
recoil = "recoil_single_ebr";
recoilprone = "recoil_single_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
		        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 40;

			
			class CowsSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			compatibleItems[] = {"hlc_optic_suit","hlc_optic_PVS4FAL"};};
};
};
class hlc_rifle_LAR : hlc_rifle_FAL5061
{
author = "Pete, Enron, Acid Snake, Toadie, Clifton Vlodhammer";
		AB_barrelTwist=12;
		AB_barrelLength=21;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 533.4;
	scope = public;
 displayName = "FN LAR";
 descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
 reloadAction = "HLC_GestureReloadFALLONG";
 drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
  reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
 handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
 changeFiremodeSound[] = {"hlc_wp_fal\snd\ak_selector",1,1,20};
        model = "\hlc_wp_FAL\mesh\FN_LAR\L1A1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_izzy_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		cameradir = "look";
		discreteDistanceCameraPoint[]={"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9"}; /// the angle of gun changes with zeroing
		class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "FAL2_Shot_SoundSet", "FAL2_tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
		dispersion = 0.0013;
maxrange = 500;
maxrangeprobab = 0.05;
midrange = 350;
midrangeprobab = 0.7;
minrange = 2;
minrangeprobab = 0.3;
recoil = "recoil_single_ebr";
recoilprone = "recoil_single_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
class FullAuto: Mode_FullAuto {
airateoffire = "1e-006";
sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "FAL2_Shot_SoundSet", "FAL2_tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\fal_fire", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
		dispersion = 0.0013;
maxrange = 30;
maxrangeprobab = 0.05;
midrange = 15;
midrangeprobab = 0.7;
minrange = 0;
minrangeprobab = 0.9;
recoil = "recoil_auto_ebr";
recoilprone = "recoil_auto_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
		        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 90;
			class CowsSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			compatibleItems[] = {"hlc_optic_suit","hlc_optic_PVS4FAL"};};
};
};
class hlc_rifle_SLRchopmod : hlc_rifle_FAL5061
{
author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		AB_barrelTwist=12;
		AB_barrelLength=18;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 457.2;
	scope = public;
 displayName = "Lithgow SLR Chopmod";
 descriptionShort = "Butchered AOW<br/>Caliber: 7.62x51mm NATO";
 reloadAction = "HLC_GestureReloadFALLONG";
 drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
  reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
 handAnim[] = {"OFP2_ManSkeleton", "\hlc_wp_fal\gesture\newgesture\chopmod_hands.rtm"};
 changeFiremodeSound[] = {"hlc_wp_ak\snd\ak_selector",1,1,20};
        model = "\hlc_wp_FAL\mesh\Suchka-LR\L1A1_1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_bitch_x_ca";
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		discretedistance[] = {100,200,300,400,500,600,700,800,900};
		discretedistanceinitindex = 2;
		cameradir = "look";
		discreteDistanceCameraPoint[]={"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9"}; /// the angle of gun changes with zeroing
		class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "OSW_Shot_SoundSet", "OSW_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
		dispersion = 0.0013;
maxrange = 500;
maxrangeprobab = 0.05;
midrange = 350;
midrangeprobab = 0.7;
minrange = 2;
minrangeprobab = 0.3;
recoil = "recoil_single_ebr";
recoilprone = "recoil_single_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
class FullAuto: Mode_FullAuto {
airateoffire = "1e-006";
sounds[] = {"StandardSound","SilencedSound"};
 
 			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
 			{
 				weaponSoundEffect  = "DefaultRifle";
 
 				closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
 				soundClosure[]={closure1,0.5, closure2,0.5};
 			};
 
 			class StandardSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "OSW_Shot_SoundSet", "OSW_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				begin2[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				begin3[]={"\hlc_WP_FAL\snd\sa58", 1, 1,1200};
 				soundBegin[]={begin1,0.33, begin2,0.33, begin3,0.34};
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal308_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_fal\snd\tails\fal_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
 
 			class SilencedSound: BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
 				begin1[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				begin2[]={"\hlc_WP_FAL\snd\fal_silenced", 1, 1,200};
 				soundBegin[]={begin1,0.5, begin2,0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_WP_FAL\snd\tails\fal_sil_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
 			};
begin1[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin2[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
begin3[] = {"hlc_WP_FAL\snd\FAL_Fire_new", 1, 1, 1200};
closure1[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1.2, 30};
closure2[] = {"hlc_WP_FAL\snd\fal_first", 1.12202, 1, 30};
		dispersion = 0.0013;
maxrange = 30;
maxrangeprobab = 0.05;
midrange = 15;
midrangeprobab = 0.7;
minrange = 0;
minrangeprobab = 0.9;
recoil = "recoil_auto_ebr";
recoilprone = "recoil_auto_prone_ebr";
reloadtime = 0.086;
soundbegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
weaponsoundeffect = "DefaultRifle";
};
		        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 75;
			class CowsSlot {
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			compatibleItems[] = {"hlc_optic_suit","hlc_optic_PVS4FAL"};};
};
};
};