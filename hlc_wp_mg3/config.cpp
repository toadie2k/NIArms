#include "\hlc_core\script_macros.hpp" 

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches
{
	class hlcweapons_MG3s
	{
	requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Sounds_F_Mark", "cba_jr", "hlcweapons_core" };
	units[] = { "HLC_MG3_ammobox", "HLC_MG42_ammobox", "Weapon_hlc_lmg_MG42", "Weapon_hlc_lmg_mg42_bakelite", "Weapon_hlc_lmg_MG42KWS_t","Weapon_hlc_lmg_MG42KWS_t", "Weapon_hlc_lmg_MG42KWS_g","Weapon_hlc_lmg_MG42KWS_b","Weapon_hlc_lmg_MG3","Weapon_hlc_lmg_MG3_optic","Weapon_hlc_lmg_MG3KWS_t","Weapon_hlc_lmg_MG3KWS_g","Weapon_hlc_lmg_MG3KWS_b" };
	weapons[] = {"hlc_lmg_MG42","hlc_lmg_mg42_bakelite","hlc_lmg_MG42KWS_t","hlc_lmg_MG42KWS_g","hlc_lmg_MG42KWS_B","hlc_lmg_MG3","hlc_lmg_MG3_optic","hlc_lmg_MG3KWS","hlc_lmg_MG3KWS_b","hlc_lmg_MG3KWS_g"};
	magazines[] = {};
	version = "1";
	author = "toadie";
	};
};
class CfgMods
{
	class Mod_Base;
	class Niarms_MG3 :Mod_Base
	{
	name = "NIArsenal: MG3 GPMGs";
	picture = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
	dir = "@NIArsenal";
	hideName = 1;
	hidePicture = 0;
	action = "http://credmo.updatedtuesdays.com/tier1";
	author = "Toadie";
	logo = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
	logoOver = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
	logoSmall = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_FrontSideRail;
class asdg_OpticRail1913_short_MG;

class CfgMovesBasic
	{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReloadMG42 = "HLC_GestureReloadMG42"; // Would reccommend changing the naming convention, just so nothing overlaps
		HLC_GestureReloadMG3 = "HLC_GestureReloadMG3";
	};

	class Actions {
		class NoActions : ManActions {
			HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42", "Gesture" };
			HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3", "Gesture" };
		};
		class RifleBaseStandActions;
		class RifleProneActions : RifleBaseStandActions
		{
			HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42_Prone", "Gesture" };
			HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3_Prone", "Gesture" };
		};
/*
class RifleKneelActions : RifleBaseStandActions
{
HLC_GestureReloadM249[] = { "HLC_GestureReloadM249_Crouch", "Gesture" };
};*/
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions : RifleAdjustProneBaseActions
		{
			HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42_Context", "Gesture" };
			HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3_Context", "Gesture" };
		};
		class RifleAdjustLProneActions : RifleAdjustProneBaseActions
		{
		HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42_Context", "Gesture" };
		HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3_Context", "Gesture" };

			class RifleAdjustFProneActions : RifleAdjustProneBaseActions
			{
				HLC_GestureReloadMG42[] = { "HLC_GestureReloadMG42_Prone", "Gesture" };
				HLC_GestureReloadMG3[] = { "HLC_GestureReloadMG3_Prone", "Gesture" };
			};
		};
	};
};

class CfgGesturesMale
{
	class Default;
	class States
	{

		class HLC_GestureReloadMG42 :Default
		{
			file = "hlc_wp_mg3\anim\reload_mg42_standing.rtm";
			speed = -10.2333333;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1 };
		};

		class HLC_GestureReloadMG42_Prone :Default
		{
			file = "hlc_wp_mg3\anim\reload_mg42_prone.rtm";
			speed = -10.2333333;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1 };
		};
		class HLC_GestureReloadMG42_Context : HLC_GestureReloadMG42
		{
			mask = "handsWeapon_context";
		};
		class HLC_GestureReloadMG3 :Default
		{
			file = "hlc_wp_mg3\anim\reload_mg3_standing.rtm";
			speed = -10.4;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1 };
		};

		class HLC_GestureReloadMG3_Prone :Default
		{
			file = "hlc_wp_mg3\anim\reload_mg3_prone.rtm";
			speed = -10.5;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = { 0, 1, 0.029315, 0, 0.120521, 0, 0.14006, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0.146579, 1, 0.16612, 0, 0.94462, 0, 0.97068, 1 };
		};
		class HLC_GestureReloadMG3_Context : HLC_GestureReloadMG3
		{
			mask = "handsWeapon_context";
		};
	};
};
class CfgAmmo
{
	class B_556x45_Ball;
//SS patrone
//Standard FMJ
/*
s.S Patrone
759.9 typicalSpeed
12.533 hit
0.424 caliber
3 visibleFireTime
80 audibleFire
-0.00071885 airFriction
*/
	class hlc_792x57_SS : B_556x45_Ball
	{
		airfriction = -0.00071885;
		caliber = 0.424;
		typicalSpeed = 759.9;
		maxspeed = 759.9;
		audibleFire = 80;
		visibleFireTime = 3;
		suppressionRadiusBulletClose = 5;
		suppressionRadiusHit = 7;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "FxCartridge_762";
		nvgonly = 1;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.01;
		cost = 1;
		deflecting = 20;
		hit = 12.533;
		airlock = 1;
		ACE_caliber = 8.2;
		ACE_bulletLength = 28.651;
		ACE_bulletMass = 9.9;
		ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
		ACE_ballisticCoefficients[] = { 0.315 };
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = { 785, 800, 815 };
		ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
	};
				//SmK Tracer/SmK -v
				//SmK Spitzgeschoß mit Kern Leuchtspur /
/*
				884.9 typicalSpeed
				11.57 hit
				0.79 caliber
				3 visibleFireTime
				80 audibleFire
				-0.0007423 airFriction
*/
	class B_556x45_Ball_Tracer_Red;
	class hlc_792x57_SmKLspr : B_556x45_Ball_Tracer_Red
	{
		airfriction = -0.0007423;
		caliber = 0.79;
		typicalSpeed = 884.9;
		maxspeed = 884.9;
		audibleFire = 80;
		visibleFireTime = 3;
		suppressionRadiusBulletClose = 7;
		suppressionRadiusHit = 9;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		cartridge = "FxCartridge_762";
		nvgonly = 0;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.01;
		cost = 1;
		deflecting = 20;
		hit = 11.57;
		airlock = 1;
		ACE_caliber = 8.2;
		ACE_bulletLength = 28.651;
		ACE_bulletMass = 10;
		ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
		ACE_ballisticCoefficients[] = { 0.315 };
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = { 785, 800, 815 };
		ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
	};
					//SmK AP
					//SmK Spitzgeschoß mit Hartkern
/*
					853.44 typicalSpeed
					9.9925 hit
					1.875 caliber
					3 visibleFireTime
					80 audibleFire
					-0.00070184 airFriction

*/
	class hlc_792x57_SmkH : B_556x45_Ball
	{
		airfriction = -0.00070184;
		audibleFire = 80;
		visibleFireTime = 3;
		caliber = 1.875;
		typicalSpeed = 853.44;
		maxspeed = 853.44;
		suppressionRadiusBulletClose = 5;
		suppressionRadiusHit = 7;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge = "FxCartridge_762";
		nvgonly = 1;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.01;
		cost = 1;
		deflecting = 20;
		hit = 16;
		airlock = 1;
		ACE_caliber = 8.077;
		ACE_bulletLength = 28.651;
		ACE_bulletMass = 12.7008;
		ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
		ACE_ballisticCoefficients[] = { 0.315 };
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = { 785, 800, 815 };
		ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
	};
};
class CfgVehicles
{
	class NATO_Box_Base;
	class HLC_MG42_ammobox : NATO_Box_Base
	{
		dlc = "Niarms_MG3";
		scope = 2;
		vehicleClass = "Ammo";
		scopeCurator = 2;
		displayName = "HLC MG42 Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			__M_MAG(hlc_50Rnd_792x57_B_MG42, 12);
			__M_MAG(hlc_50Rnd_792x57_M_MG42, 12);
			__M_MAG(hlc_50Rnd_792x57_T_MG42, 12);
			__M_MAG(hlc_50Rnd_792x57_AP_MG42, 12);
			__M_MAG(hlc_100Rnd_792x57_B_MG42, 8);
			__M_MAG(hlc_100Rnd_792x57_M_MG42, 8);
			__M_MAG(hlc_100Rnd_792x57_T_MG42, 8);
			__M_MAG(hlc_100Rnd_792x57_AP_MG42, 8);
			__M_MAG(hlc_200Rnd_792x57_B_MG42, 4);
			__M_MAG(hlc_200Rnd_792x57_M_MG42, 4);
			__M_MAG(hlc_200Rnd_792x57_T_MG42, 4);
			__M_MAG(hlc_200Rnd_792x57_AP_MG42, 4);
		};
		class TransportWeapons
		{
			__M_WEP(hlc_lmg_MG42, 5);
			__M_WEP(hlc_lmg_mg42_bakelite, 5);
			__M_WEP(hlc_lmg_MG42KWS_t, 3);
			__M_WEP(hlc_lmg_MG42KWS_g, 3);
			__M_WEP(hlc_lmg_mg42kws_b, 3);
		};
	};
	class HLC_MG3_ammobox : NATO_Box_Base
	{
		dlc = "Niarms_MG3";
		scope = 2;
		vehicleClass = "Ammo";
		scopeCurator = 2;
		displayName = "HLC MG3 Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			__M_MAG(hlc_50Rnd_762x51_B_MG3, 12);
			__M_MAG(hlc_50Rnd_762x51_M_MG3, 12);
			__M_MAG(hlc_50Rnd_762x51_T_MG3, 12);
			__M_MAG(hlc_50Rnd_762x51_Barrier_MG3, 12);
			__M_MAG(hlc_100Rnd_762x51_B_MG3, 8);
			__M_MAG(hlc_100Rnd_762x51_M_MG3, 8);
			__M_MAG(hlc_100Rnd_762x51_T_MG3, 8);
			__M_MAG(hlc_100Rnd_762x51_Barrier_MG3, 8);
			__M_MAG(hlc_250Rnd_762x51_B_MG3, 4);
			__M_MAG(hlc_250Rnd_762x51_M_MG3, 4);
			__M_MAG(hlc_250Rnd_762x51_T_MG3, 4);
			__M_MAG(hlc_250Rnd_762x51_Barrier_MG3, 4);
		};
		class TransportWeapons
		{
			__M_WEP(hlc_lmg_MG3, 4);
			__M_WEP(hlc_lmg_MG3_optic, 4);
			__M_WEP(hlc_lmg_MG3KWS, 4);
			__M_WEP(hlc_lmg_MG3KWS_g, 4);
			__M_WEP(hlc_lmg_MG3KWS_b, 4);
		};
		class TransportItems
		{
			__M_ITM(optic_Holosight, 10);
			__M_ITM(optic_hamr, 10);
			__M_ITM(optic_rco, 10);
			__M_ITM(optic_ACO_grn, 10);
		};
	};
	class Weapon_Base_F;
	__WEAPONHOLDER(hlc_lmg_MG42, hlc_50Rnd_792x57_B_MG42, MG42, Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_mg42_bakelite, hlc_50Rnd_792x57_B_MG42, MG42(Bakelite), Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_MG42KWS_t, hlc_50Rnd_792x57_B_MG42, MG42KWS(Tan), Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_MG42KWS_b, hlc_50Rnd_792x57_B_MG42, MG42KWS(Black), Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_MG42KWS_g, hlc_50Rnd_792x57_B_MG42, MG42KWS(Green), Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_MG3, hlc_50Rnd_792x57_B_MG42, MG3, Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_MG3_optic, hlc_50Rnd_762x51_M_MG3, Mg M/62, Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_MG3KWS, hlc_50Rnd_762x51_M_MG3, MG3KWS(Tan), Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_MG3KWS_b, hlc_50Rnd_762x51_M_MG3, MG3KWS(Black), Niarms_MG3, Toadie,MachineGuns);
	__WEAPONHOLDER(hlc_lmg_MG3KWS_g, hlc_50Rnd_762x51_M_MG3, MG3KWS(Green), Niarms_MG3, Toadie,MachineGuns);
};

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_50Rnd_792x57_B_MG42 : 30Rnd_556x45_Stanag 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		ammo = "hlc_792x57_SS";
		count = 50;
		descriptionshort = "Caliber: 7.92x57mm Ss Patrone<br />Rounds: 50<br />Used in: MG42";
		displayname = "MG42 Belt (FMJ) 50rnd 7.92mm";
		model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
		initspeed = 759.9;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg42ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 31.7;
		displaynameshort = "7.92mm FMJ";
		nameSound = "mgun";
		ACE_isBelt = 1;
	};
	class hlc_100Rnd_792x57_B_MG42 : hlc_50Rnd_792x57_B_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 100;
		descriptionshort = "Caliber: 7.92x57mm Ss Patrone<br />Rounds: 100<br />Used in: MG42";
		displayname = "MG42 Belt (FMJ) 100rnd 7.92mm";
		mass = 63.3;
	};
	class hlc_200Rnd_792x57_B_MG42 : hlc_50Rnd_792x57_B_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 200;
		descriptionshort = "Caliber: 7.92x57mm Ss Patrone<br />Rounds: 200<br />Used in: MG42";
		displayname = "MG42 Belt (FMJ) 200rnd 7.92mm";
		mass = 126.6;
	};
	class hlc_50Rnd_792x57_M_MG42 : hlc_50Rnd_792x57_B_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		ammo = "hlc_792x57_SmKLspr";
		descriptionshort = "Caliber: 7.92x57mm 4-to-1 SmKv-SmKL'spur<br />Rounds: 50<br />Used in: MG42";
		displayname = "MG42 Belt (SmKv-SmKL'spur Mix) 50rnd 7.92mm";
		initspeed = 884.9;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg42mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 31.7;
		displaynameshort = "7.92mm SmK/Tracer";
	};
	class hlc_100Rnd_792x57_M_MG42 : hlc_50Rnd_792x57_M_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 100;
		descriptionshort = "Caliber: 7.92x57mm 4-to-1 SmKv-SmKL'spur<br />Rounds: 100<br />Used in: MG42";
		displayname = "MG42 Belt (SmKv-SmKL'spur Mix) 100rnd 7.92mm";
		mass = 63.3;
	};
	class hlc_200Rnd_792x57_M_MG42 : hlc_50Rnd_792x57_M_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 200;
		descriptionshort = "Caliber: 7.92x57mm 4-to-1 SmKv-SmKL'spur<br />Rounds: 200<br />Used in: MG42";
		displayname = "MG42 Belt (SmKv-SmKL'spur Mix) 200rnd 7.92mm";
		mass = 126.6;
	};
	class hlc_50Rnd_792x57_T_MG42 : hlc_50Rnd_792x57_B_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		ammo = "hlc_792x57_SmKLspr";
		descriptionshort = "Caliber: 7.92x57mm SmK L'Spur<br />Rounds: 50<br />Used in: MG42";
		displayname = "MG42 Belt (SmKL'spur) 50rnd 7.92mm";
		model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
		initspeed = 884.9;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg42tracer_ca.paa";
		scope = 2;
		tracersevery = 1;
		mass = 28.5;
		displaynameshort = "7.92mm Tracer";
	};
	class hlc_100Rnd_792x57_T_MG42 : hlc_50Rnd_792x57_T_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 100;
		descriptionshort = "Caliber: 7.92x57mm SmK L'Spur<br />Rounds: 100<br />Used in: MG42";
		displayname = "MG42 Belt (SmKL'spur) 100rnd 7.92mm";
		mass = 57;
	};
	class hlc_200Rnd_792x57_T_MG42 : hlc_50Rnd_792x57_T_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 200;
		descriptionshort = "Caliber: 7.92x57mm SmK L'Spur<br />Rounds: 200<br />Used in: MG42";
		displayname = "MG42 Belt (SmKL'spur) 200rnd 7.92mm";
		mass = 113.9;
	};
	class hlc_50Rnd_792x57_AP_MG42 : hlc_50Rnd_792x57_B_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		ammo = "hlc_792x57_SmkH";
		descriptionshort = "Caliber: 7.92x57mm SmKH HartKern AP<br />Rounds: 50<br />Used in: MG42";
		displayname = "MG42 Belt (AP) 50rnd 7.92mm";
		initspeed = 853.44;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg42AP_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 30.5;
		displaynameshort = "7.92mm SmKH";
	};
	class hlc_100Rnd_792x57_AP_MG42 : hlc_50Rnd_792x57_AP_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 100;
		descriptionshort = "Caliber: 7.92x57mm SmKH HartKern AP<br />Rounds: 100<br />Used in: MG42";
		displayname = "MG42 Belt (AP) 100rnd 7.92mm";
		mass = 61.1;
	};
	class hlc_200Rnd_792x57_AP_MG42 : hlc_50Rnd_792x57_AP_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 200;
		descriptionshort = "Caliber: 7.92x57mm SmKH HartKern AP<br />Rounds: 200<br />Used in: MG42";
		displayname = "MG42 Belt (AP) 200rnd 7.92mm";
		mass = 122.2;
	};
	class hlc_50Rnd_762x51_B_MG3 : hlc_50Rnd_792x57_B_MG42 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		ammo = "HLC_762x51_ball";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 50<br />Used in: MG3";
		displayname = "MG3 Belt (Ball) 50rnd 7.62mm";
		model = "hlc_wp_mg3\mesh\magazine\magazine.p3d";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg3ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 29.1;
		displaynameshort = "7.62mm Ball";
	};
	class hlc_100Rnd_762x51_B_MG3 : hlc_50Rnd_762x51_B_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 100<br />Used in: MG3";
		displayname = "MG3 Belt (Ball) 100rnd 7.62mm";
		mass = 58.2;
	};
	class hlc_250Rnd_762x51_B_MG3 : hlc_50Rnd_762x51_B_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 250<br />Used in: MG3";
		displayname = "MG3 Belt (Ball) 200rnd 7.62mm";
		mass = 145.3;
	};
	class hlc_50Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_B_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		ammo = "HLC_762x51_ball";
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 50<br />Used in: MG3";
		displayname = "MG3 Belt (Ball-Tracer Mix) 50rnd 7.62mm";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 29.1;
		displaynameshort = "7.62mm Ball/Tracer";
	};
	class hlc_100Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_M_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 100<br />Used in: MG3";
		displayname = "MG3 Belt (Ball-Tracer Mix) 100rnd 7.62mm";
		mass = 58.2;
	};
	class hlc_250Rnd_762x51_M_MG3 : hlc_50Rnd_762x51_M_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Ball-Tracer<br />Rounds: 250<br />Used in: MG3";
		displayname = "MG3 Belt (Ball-Tracer Mix) 250rnd 7.62mm";
		mass = 145.3;
	};
	class hlc_50Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_B_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		ammo = "HLC_762x51_Barrier";
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Rounds: 50<br />Used in: MG3";
		displayname = "MG3 Belt (Mk319-Tracer Mix) 50rnd 7.62mm";
		initspeed = 815;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 29.1;
		displaynameshort = "7.62mm Mk.319/Tracer";
	};
	class hlc_100Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_Barrier_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Rounds: 100<br />Used in: MG3";
		displayname = "MG3 Belt (Mk319-Tracer Mix) 100rnd 7.62mm";
		mass = 58.2;
	};
	class hlc_250Rnd_762x51_Barrier_MG3 : hlc_50Rnd_762x51_Barrier_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Rounds: 250<br />Used in: MG3";
		displayname = "MG3 Belt (Mk319-Tracer Mix) 250rnd 7.62mm";
		mass = 145.3;
	};
	class hlc_50Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_B_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		ammo = "HLC_762x51_ball";
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 50<br />Used in: MG3";
		displayname = "MG3 Belt (Tracer) 50rnd 7.62mm";
		initspeed = 820;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg3tracer_ca.paa";
		scope = 2;
		tracersevery = 1;
		mass = 28;
		displaynameshort = "7.62mm Tracer";
	};
	class hlc_100Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_T_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 100<br />Used in: MG3";
		displayname = "MG3 Belt (Tracer) 100rnd 7.62mm";
		mass = 55.9;
	};
	class hlc_250Rnd_762x51_T_MG3 : hlc_50Rnd_762x51_T_MG3 
	{
		dlc = "Niarms_MG3";
		author = "Toadie";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 250<br />Used in: MG3";
		displayname = "MG3 Belt (Tracer) 250rnd 7.62mm";
		mass = 139.8;
	};
};

class CfgWeapons 
{
	class Rifle;
	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_MG42_base : Rifle_Base_F
	{
		dlc = "Niarms_MG3";
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
		ACE_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
		ACE_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_Dispersion[] = { 0, -0.001, 0.001, 0.003 };
		AGM_Overheating_SlowdownFactor[] = { 1, 1, 1, 0.9 };
		AGM_Overheating_JamChance[] = { 0, 0.0003, 0.0015, 0.0075 };
		agm_overheating_allowbarrelswap = 1;
		agm_bipod = 1;
		hasBipod = true;
		bg_bipod = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		TMR_acc_bipod = 1;
		scope = protected;
		cursor = "mg";
		cursoraim = "EmptyCursor";
		magazineReloadSwitchPhase = 0.5;
		deployedpivot = "deploypoint";
		magazines[] = { __792MG42_MAGS };
		maxRecoilSway = 0.0150;
		swayDecaySpeed = 1.25;
		recoil = "recoil_mmg";
		recoilprone = "recoil_mmg_prone";
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		hiddenSelectionsTextures[] = { "", "", "", "", "" };
		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
/*class MuzzleCloud
{
positionName = "usti hlavne";
directionName = "konec hlavne";
effectName = "MachineGunCloud";
};*/
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot {};
			class CowsSlot {};
			class PointerSlot {};
		};
		descriptionShort = "General-Purpose Machine Gun<br/>Caliber: 7.92mm";
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

		modes[] = { "FullAuto", "close", "short", "medium", "far_optic1", "far_optic2" };
		class FullAuto : Mode_FullAuto
		{
			sounds[] = { "StandardSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_Mg3\snd\mg3_first", 1, 1, 10 };
				closure2[] = { "\hlc_wp_Mg3\snd\mg3_first", 1, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};
			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "MG42_Shot_SoundSet", "MG42_Tail_SoundSet" };
			};
			__ROF(1200);
			dispersion = 0.001111238;

			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = "random 0.2";
		};
		class close : FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = "random 0.2";
		};
		class short : close
		{
			burst = 4;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 450;
			aiRateOfFireDispersion = 2;
			minRange = 80;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = "random 0.2";
		};
		class medium : close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = "random 0.1";
		};
		class far_optic1 : medium
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 900;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1200;
			maxRangeProbab = "random 0.2";
		};
		class far_optic2 : far_optic1
		{
			requiredOpticType = 2;
			maxRangeProbab = "random 0.2";
		};

		drysound[] = { "\hlc_wp_mg3\snd\mg3_dryfire", 1, 1, 10 };
		reloadmagazinesound[] = { "\hlc_wp_mg3\snd\mg42_reload", 0.8, 1, 18 };
		soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
		soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
	};
	class hlc_lmg_MG42 : hlc_MG42_base 
	{
		maxZeroing = 1100;
		scope = public;
		author = "Toadie";
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		model = "\hlc_wp_MG3\mesh\mg42\mg42.p3d";
		reloadaction = "HLC_GestureReloadMG42";
		picture = "\hlc_wp_mg3\tex\ui\gear_mg42_ca";
		displayName = "Mauser MG42";
		discretedistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100 };
		//cameradir = "aim_point";
		//discreteDistanceCameraPoint[] = { "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11" }; /// the angle of gun changes with zeroing
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG42reciever_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2wood_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_MG3\anim\handpose_MG42.rtm" };
		__DEXTERITY(11.6,-3);
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
		mass = 253.5;
		};
		inertia = 1.36;
		class Library
		{
			libTextDesc = "MG42";
		};
	};
	class hlc_lmg_mg42_bakelite :hlc_lmg_mg42
	{
		author = "Toadie";
		model = "\hlc_wp_MG3\mesh\mg42\mg42_a.p3d";
		displayName = "Mauser MG42(Bakelite)";
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG42reciever_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
	};
	class hlc_lmg_MG42KWS_t : hlc_lmg_MG42 
	{
		author = "Toadie";
		model = "\hlc_wp_MG3\mesh\mg42\mg42kws.p3d";
		displayName = "Rheinmetall MG42-KWS(Tan)";
		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_MG3\anim\handpose_MG3kws.rtm" };
		picture = "\hlc_wp_mg3\tex\ui\gear_mg42kws_ca";
		__DEXTERITY(10.5,-2);
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 253.5;
			class CowsSlot : asdg_OpticRail1913_short_MG {};
			class PointerSlot : asdg_FrontSideRail{};
		};
		inertia = 1.2;
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverKWS_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1KWS_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
	};
	class hlc_lmg_mg42kws_g: hlc_lmg_mg42kws_t
	{
		author = "Toadie";
		displayName = "Rheinmetall MG42-KWS(Green)";
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverkws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_green_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
	};
	class hlc_lmg_mg42kws_b :hlc_lmg_MG42KWS_t
	{
			author = "Toadie";
			displayName = "Rheinmetall MG42-KWS(Black)";
			hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
			hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverkws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_black_co.paa", "\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.tga" };
	};
	class hlc_lmg_MG3 : hlc_MG42_base 
	{
		maxZeroing = 1100;
		scope = public;
		author = "Toadie";
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		model = "\hlc_wp_MG3\mesh\mg3\mg3.p3d";
		reloadaction = "HLC_GestureReloadMG3";
		descriptionShort = "General-Purpose Machine Gun<br/>Caliber: 7.62mm";
		picture = "\hlc_wp_mg3\tex\ui\gear_mg3_ca";
		displayName = "Rheinmetall MG3";
		reloadmagazinesound[] = { "\hlc_wp_mg3\snd\mg3_reload", 0.8, 1, 18 };
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		__DEXTERITY(10.5,-3);
		hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG3reciever_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2plastic_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };
		magazines[] = {__762MG3_MAGS,__762NATO_BELTS,__762NATO_BI_BELTS};
		discretedistance[] = { 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100 };
		//cameradir = "aim_point";
		//discreteDistanceCameraPoint[] = { "eye3", "eye4", "eye5", "eye6", "eye7", "eye8", "eye9", "eye10", "eye11" }; /// the angle of gun changes with zeroing
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_MG3\anim\handpose_MG42.rtm" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 231.5;
		};
		inertia = 1.25;
		class FullAuto : FullAuto
		{
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "MG3_Shot_SoundSet", "MG3_Tail_SoundSet" };
			};
			__ROF(900);
			dispersion = 0.00119269;

			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = "random 0.2";
		};
		class close : FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = "random 0.2";
		};
		class short : close
		{
			burst = 4;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 450;
			aiRateOfFireDispersion = 2;
			minRange = 80;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = "random 0.2";
		};
		class medium : close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = "random 0.1";
		};
		class far_optic1 : medium
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 900;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1200;
			maxRangeProbab = "random 0.2";
		};
		class far_optic2 : far_optic1
		{
			requiredOpticType = 2;
			maxRangeProbab = "random 0.2";
		};
		class Library
		{
		libTextDesc = "MG3";
		};
	};
	class hlc_lmg_MG3_optic : hlc_lmg_MG3 
	{
			scope = public;
			author = "Toadie";
			model = "\hlc_wp_MG3\mesh\mg3\mg3_later.p3d";
			picture = "\hlc_wp_mg3\tex\ui\gear_m62_ca";
			displayName = "Rheinmetall Mg M/62";
			hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
			hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG3recieverDane_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };

			class WeaponSlotsInfo : WeaponSlotsInfo
			{
				mass = 237;
				class CowsSlot : asdg_OpticRail1913_short_MG {
				iconPosition[] = { 0.5, 0.30000001 };
				iconScale = 0.2;
			};
		};
	};
	class hlc_lmg_MG3KWS : hlc_lmg_MG3 
	{
		scope = public;
		author = "Toadie";
		model = "\hlc_wp_MG3\mesh\mg3\mg3kws.p3d";
		picture = "\hlc_wp_mg3\tex\ui\gear_mg3kws_ca";
		displayName = "Rheinmetall MG3-KWS(Tan)";
		__DEXTERITY(10.5,-2);
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\MG3recieverkws_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_Co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };

		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_MG3\anim\handpose_MG3kws.rtm" };
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 237;
			class CowsSlot : asdg_OpticRail1913_short_MG {};
			class PointerSlot : asdg_FrontSideRail {};
		};
		inertia = 1.20;
	};
	class hlc_lmg_MG3KWS_b :hlc_lmg_MG3KWS
	{
		author = "Toadie";
		displayName = "Rheinmetall MG3-KWS(Black)";
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverkws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_black_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_black_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };
	};
	class hlc_lmg_MG3KWS_g :hlc_lmg_MG3KWS
	{
		author = "Toadie";
		displayName = "Rheinmetall MG3-KWS(Green)";
		hiddenSelections[] = { "Camo1", "Camo2", "Camo3", "Camo4", "Camo5" };
		hiddenSelectionsTextures[] = { "\hlc_wp_mg3\tex\Standard\mg3recieverkws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap1kws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap2kws_green_co.paa", "\hlc_wp_mg3\tex\Standard\partsmap3_green_co.paa", "\hlc_wp_mg3\tex\standard\MG3_drum_co.tga" };
	};
};