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
        version = "1.5";
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

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
    class compatibleItems {
        hlc_muzzle_300blk_KAC = 1;
        hlc_muzzle_MAG58_Brake = 1;
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
    };
};
class nia_rifle_grips_slot : nia_rifle_gripod_slot
{
    linkProxy = "\hlc_core\mesh\nia_grip_proxy";
};
class nia_rifle_bipodsgrips_slot :asdg_UnderSlot 
{
};
class PointerSlot;
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


Weaponslotsinfo MASS is approximate to CENTAGRAMS... that is to say a mass of 7 is a mass of about 700 grams. Take consideration of this


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

class CfgMovesBasic {
     class DefaultDie;

     class ManActions {
        HLC_GestureRechamber3011 = "HLC_GestureRechamber3011";
        HLC_GestureReload3011 = "HLC_GestureReload3011";
        HLC_GestureReload3011_tac = "HLC_GestureReload3011_tac";
        HLC_GestureReload3011_20rnd = "HLC_GestureReload3011_20rnd";
        HLC_GestureReload3011_50rnd = "HLC_GestureReload3011_50rnd";
        HLC_GestureReloadAK = "HLC_GestureReloadAK";
        HLC_GestureReloadAK762 = "HLC_GestureReloadAK762";
        HLC_GestureReloadAK545OneHand= "HLC_GestureReloadAK545OneHand";
        HLC_GestureReloadAK545 = "HLC_GestureReloadAK545";
        HLC_GestureReloadAK762DRUM = "HLC_GestureReloadAK762DRUM";
        HLC_GestureReloadM60= "HLC_GestureReloadM60";
        HLC_GestureReloadSMLE= "HLC_GestureReloadSMLE";
        HLC_GestureReloadBoltSMLE= "HLC_GestureReloadBoltSMLE";
        HLC_GestureReloadAR15_BAD_WS="HLC_GestureReloadAR15_BAD_WS";
        HLC_GestureReloadAR15_BADX15_WS = "HLC_GestureReloadAR15_BAD_WS";
        HLC_GestureReloadAR15_BAD_DR="HLC_GestureReloadAR15_BAD_DR";
        HLC_GestureReloadAR15_catch_WS="HLC_GestureReloadAR15_catch_WS";
        HLC_GestureReloadAR15_X15 = "HLC_GestureReloadAR15_X15";
        HLC_GestureReloadAR15_catch_dr="HLC_GestureReloadAR15_catch_dr";
        HLC_GestureReloadG3SG1= "HLC_GestureReloadG3SG1";
        HLC_GestureReloadAUG= "HLC_GestureReloadAUG";
        HLC_GestureReloadAUGa3 = "HLC_GestureReloadAUGa3";
        HLC_GestureReloadRPK= "HLC_GestureReloadRPK";
        HLC_GestureReloadAK12= "HLC_GestureReloadAK12";
        HLC_GestureReloadGP30= "HLC_GestureReloadGP30";
        HLC_GestureReloadFALLONG= "HLC_GestureReloadFALLONG";
        HLC_GestureReloadMP5= "HLC_GestureReloadMP5";
        HLC_GestureReloadMP510= "HLC_GestureReloadMP510";
        HLC_GestureReloadMP5K= "HLC_GestureReloadMP5K";
        HLC_GestureReloadMP5K_pistol= "HLC_GestureReloadMP5K_pistol";
        HLC_GestureReloadM14= "HLC_GestureReloadM14";
        HLC_GestureReloadOSW= "HLC_GestureReloadOSW";
        HLC_GestureReloadHK53= "HLC_GestureReloadHK53";
        HLC_GestureReloadSten= "HLC_GestureReloadSten";
        HLC_GestureReloadAUGPara = "HLC_GestureReloadAUGPara";
        HLC_GestureSwapBarrelAUG = "HLC_GestureSwapBarrelAUG";
        HLC_GestureReloadp226 = "HLC_GestureReloadp226";
        HLC_GestureReloadSG550 = "HLC_GestureReloadSG550";
        HLC_GestureReloadSG553R = "HLC_GestureReloadSG553R";
        HLC_GestureReloadSG553RDrum = "HLC_GestureReloadSG553RDrum";
        HLC_GestureReloadGL5040 = "HLC_GestureReloadGL5040";
        NIA_GestureReload416 = "NIA_GestureReload416";
        NIA_GestureReload416_x15 = "NIA_GestureReload416_x15";
        NIA_GestureReload416_WS = "NIA_GestureReload416_WS";
        NIA_GestureReload416_BAD = "NIA_GestureReload416_BAD";
        NIA_GestureReloadAGC = "NIA_GestureReloadAGC";
    };

    class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;

        class NoActions : ManActions {
            HLC_GestureRechamber3011[] = { "HLC_GestureRechamber3011", "Gesture" };
            HLC_GestureReload3011[] = { "HLC_GestureReload3011", "Gesture" };
            HLC_GestureReload3011_tac[] = { "HLC_GestureReload3011_tac", "Gesture" };
            HLC_GestureReload3011_20rnd[] = { "HLC_GestureReload3011_20rnd", "Gesture" };
            HLC_GestureReload3011_50rnd[] = { "HLC_GestureReload3011_50rnd", "Gesture" };
            HLC_GestureReloadAK[] = {"HLC_GestureReloadAK", "Gesture"};
            HLC_GestureReloadAK762[] = { "HLC_GestureReloadAK762", "Gesture" };
            HLC_GestureReloadAK545OneHand[] = { "HLC_GestureReloadAK545OneHand", "Gesture" };
            HLC_GestureReloadAK545[] = { "HLC_GestureReloadAK545", "Gesture" };
            HLC_GestureReloadAK762DRUM[] = { "HLC_GestureReloadAK762DRUM", "Gesture" };
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60", "Gesture"};
            HLC_GestureReloadSMLE[] =  {"HLC_GestureReloadSMLE", "Gesture"};
            HLC_GestureReloadBoltSMLE[] = {"HLC_GestureReloadBoltSMLE", "Gesture"};
            HLC_GestureReloadAR15_BAD_WS[]= {"HLC_GestureReloadAR15_BAD_WS", "Gesture"};
            HLC_GestureReloadAR15_BADX15_WS[] = { "HLC_GestureReloadAR15_BADX15_WS", "Gesture" };
            HLC_GestureReloadAR15_BAD_DR[]= {"HLC_GestureReloadAR15_BAD_dr", "Gesture"};
            HLC_GestureReloadAR15_catch_WS[]= {"HLC_GestureReloadAR15_catch_ws", "Gesture"};
            HLC_GestureReloadAR15_X15[] = { "HLC_GestureReloadAR15_X15", "Gesture" };
            HLC_GestureReloadAR15_catch_DR[]= {"HLC_GestureReloadAR15_catch_dr", "Gesture"};
            HLC_GestureReloadG3SG1[]= {"HLC_GestureReloadG3SG1", "Gesture"};
            HLC_GestureReloadHK53[]= {"HLC_GestureReloadHK53", "Gesture"};
            HLC_GestureReloadAUG[]= {"HLC_GestureReloadAUG","Gesture"};
            HLC_GestureReloadRPK[]= {"HLC_GestureReloadRPK","Gesture"};
            HLC_GestureReloadAK12[]= {"HLC_GestureReloadAK12", "Gesture"};
            HLC_GestureReloadGP30[]= {"HLC_GestureReloadGP30", "Gesture"};
            HLC_GestureReloadFALLONG[]= {"HLC_GestureReloadFALLONG", "Gesture"};
            HLC_GestureReloadMP5[]= {"HLC_GestureReloadMP5", "Gesture"};
            HLC_GestureReloadMP510[]= {"HLC_GestureReloadMP510", "Gesture"};
            HLC_GestureReloadMP5K[]= {"HLC_GestureReloadMP5K", "Gesture"};
            HLC_GestureReloadMP5K_pistol[]= {"HLC_GestureReloadMP5K_pistol", "Gesture"};
            HLC_GestureReloadM14[]= {"HLC_GestureReloadM14", "Gesture"};
            HLC_GestureReloadOSW[]= {"HLC_GestureReloadOSW", "Gesture"};
            HLC_GestureReloadSten[]= {"HLC_GestureReloadSten", "Gesture"};
            HLC_GestureReloadAUGPara[] = { "HLC_GestureReloadAUGPara", "Gesture" };
            HLC_GestureReloadAUGa3[] = { "HLC_GestureReloadAUGa3", "Gesture" };
            HLC_GestureSwapBarrelAUG[] = { "HLC_GestureSwapBarrelAUG", "Gesture" };
            HLC_GestureReloadp226[] = { "HLC_GestureReloadp226", "Gesture" };
            HLC_GestureReloadSG550[] = { "HLC_GestureReloadSG550", "Gesture" };
            HLC_GestureReloadSG553R[] = { "HLC_GesturereloadSG553R", "Gesture" };
            HLC_GestureReloadSG553RDrum[] = { "HLC_GestureReloadSG553RDrum", "Gesture" };
            HLC_GestureReloadGL5040[] = { "HLC_GestureReloadGL5040", "Gesture" };
            NIA_GestureReload416[] = { "NIA_GestureReload416", "Gesture" };
            NIA_GestureReload416_x15[] = { "NIA_GestureReload416_x15", "Gesture" };
            NIA_GestureReload416_WS[] = { "NIA_GestureReload416_WS", "Gesture" };
            NIA_GestureReload416_BAD[] = { "NIA_GestureReload416_BAD", "Gesture" };
            NIA_GestureReloadAGC[] = { "NIA_GestureReloadAGC", "Gesture" };
        };

        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureRechamber3011[] = { "HLC_GestureRechamber3011_Prone", "Gesture" };
            HLC_GestureReload3011[] = { "HLC_GestureReload3011_Prone", "Gesture" };
            HLC_GestureReload3011_tac[] = { "HLC_GestureReload3011_tac_Prone", "Gesture" };
            HLC_GestureReload3011_20rnd[] = { "HLC_GestureReload3011_20rnd_Prone", "Gesture" };
            HLC_GestureReload3011_50rnd[] = { "HLC_GestureReload3011_50rnd_Prone", "Gesture" };
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60_Prone","Gesture"};
            HLC_GestureReloadRPK[]= {"HLC_GestureReloadRPK_Prone","Gesture"};
            HLC_GestureReloadAK[]= {"HLC_GestureReloadAK_Prone","Gesture"};
            HLC_GestureReloadAK762[] = { "HLC_GestureReloadAK762_Prone", "Gesture" };
            HLC_GestureReloadAK545[] = { "HLC_GestureReloadAK545_Prone", "Gesture" };
            HLC_GestureReloadAK545OneHand[] = { "HLC_GestureReloadAK545OneHand_Prone", "Gesture" };
            HLC_GestureReloadAK762DRUM[] = { "HLC_GestureReloadAK762DRUM_Prone", "Gesture" };
            HLC_GestureReloadAK12[]= {"HLC_GestureReloadAK12_Prone", "Gesture"};
            HLC_GestureReloadAKLONG[] = {"HLC_GestureReloadAK12_Prone","Gesture"};
            HLC_GestureReloadG3SG1[] = {"HLC_GestureReloadG3SG1_prone","Gesture"};
            HLC_GestureReloadAR15_BAD_WS[] = {"HLC_GestureReloadAR15_Prone","Gesture"};
            HLC_GestureReloadAR15_BADX15_WS[] = { "HLC_GestureReloadAR15_BADX15_WS_Prone", "Gesture" };
            HLC_GestureReloadAR15_BAD_DR[] = {"HLC_GestureReloadAR15_Prone","Gesture"};
            HLC_GestureReloadAR15_catch_WS[] = {"HLC_GestureReloadAR15_Prone","Gesture"};
            HLC_GestureReloadAR15_X15[] = { "HLC_GestureReloadAR15_X15", "Gesture" };
            HLC_GestureReloadAR15_catch_DR[] = {"HLC_GestureReloadAR15_Prone","Gesture"};
            HLC_GestureReloadAUG[] = { "HLC_GestureReloadAUG_Prone", "Gesture" };
            HLC_GestureReloadAUGa3[] = { "HLC_GestureReloadAUGa3_prone", "Gesture" };
            HLC_GestureReloadGP30[] = {"HLC_GestureReloadGP30_Prone","Gesture"};
            HLC_GestureReloadMP5[]= {"HLC_GestureReloadMP5_Prone", "Gesture"};
            HLC_GestureReloadMP510[]= {"HLC_GestureReloadMP510_Prone", "Gesture"};
            HLC_GestureReloadMP5K[]= {"HLC_GestureReloadMP5K_Prone", "Gesture"};
            HLC_GestureReloadMP5K_pistol[]= {"HLC_GestureReloadMP5K_pistol_prone", "Gesture"};
            HLC_GestureReloadM14[]= {"HLC_GestureReloadM14_Prone", "Gesture"};
            HLC_GestureReloadHK53[]= {"HLC_GestureReloadHK53_Prone", "Gesture"};
            HLC_GestureReloadOSW[]= {"HLC_GestureReloadOSW_Prone", "Gesture"};
            HLC_GestureReloadFALLONG[]= {"HLC_GestureReloadFALLONG_prone", "Gesture"};
            HLC_GestureReloadAUGPara[] = { "HLC_GestureReloadAUGPara_Prone", "Gesture" };
            HLC_GestureSwapBarrelAUG[] = { "HLC_GestureSwapBarrelAUG_prone", "Gesture" };
            HLC_GestureReloadp226[] = { "HLC_GestureReloadp226_prone", "Gesture" };
            HLC_GestureReloadSG550[] = { "HLC_GestureReloadSG550_prone", "Gesture" };
            HLC_GesturereloadSG553R[] = { "HLC_GesturereloadSG553R_prone", "Gesture" };
            HLC_GestureReloadSG553RDrum[] = { "HLC_GestureReloadSG553RDrum_prone", "Gesture" };
            HLC_GestureReloadGL5040[] = { "HLC_GestureReloadGL5040_prone", "Gesture" };
            NIA_GestureReload416[] = { "NIA_GestureReload416_Prone", "Gesture" };
            NIA_GestureReload416_x15[] = { "NIA_GestureReload416_x15_Prone", "Gesture" };
            NIA_GestureReload416_WS[] = { "NIA_GestureReload416_WS_Prone", "Gesture" };
            NIA_GestureReload416_BAD[] = { "NIA_GestureReload416_BAD_Prone", "Gesture" };
            NIA_GestureReloadAGC[] = { "NIA_GestureReloadAGC_Prone", "Gesture" };
        };

        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureRechamber3011[] = { "HLC_GestureRechamber3011_Context", "Gesture" };
            HLC_GestureReload3011[] = { "HLC_GestureReload3011_Context", "Gesture" };
            HLC_GestureReload3011_tac[] = { "HLC_GestureReload3011_tac_Context", "Gesture" };
            HLC_GestureReload3011_20rnd[] = { "HLC_GestureReload3011_20rnd_Context", "Gesture" };
            HLC_GestureReload3011_50rnd[] = { "HLC_GestureReload3011_50rnd_Context", "Gesture" };
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60_Context","Gesture"};
            HLC_GestureReloadAK[] = {"HLC_GestureReloadAK_Context","Gesture"};
            HLC_GestureReloadAK762[] = { "HLC_GestureReloadAK762_Context", "Gesture" };
            HLC_GestureReloadAK545[] = { "HLC_GestureReloadAK545_Context", "Gesture" };
            HLC_GestureReloadAK545OneHand[] = { "HLC_GestureReloadAK545OneHand_Context", "Gesture" };
            HLC_GestureReloadAK762DRUM[] = { "HLC_GestureReloadAK762DRUM_Context", "Gesture" };
            HLC_GestureReloadRPK[] = {"HLC_GestureReloadRPK_Context","Gesture"};
            HLC_GestureReloadAK12[] = {"HLC_GestureReloadAK12_Context","Gesture"};
            HLC_GestureReloadAKLONG[] = {"HLC_GestureReloadAK_LongContext","Gesture"};
            HLC_GestureReloadGP30[]= {"HLC_GestureReloadGP30", "Gesture"};
            HLC_GestureReloadHK53[]= {"HLC_GestureReloadHK53_Context", "Gesture"};
            HLC_GestureReloadG3SG1[]= {"HLC_GestureReloadG3SG1_Context", "Gesture"};
            HLC_GestureReloadOSW[]= {"HLC_GestureReloadOSW_Context", "Gesture"};
            HLC_GestureReloadM14[]= {"HLC_GestureReloadM14_Context", "Gesture"};
            HLC_GestureReloadMP5[]= {"HLC_GestureReloadMP5_Context", "Gesture"};
            HLC_GestureReloadMP510[]= {"HLC_GestureReloadMP510_Context", "Gesture"};
            HLC_GestureReloadMP5K[]= {"HLC_GestureReloadMP5k_Context", "Gesture"};
            HLC_GestureReloadMP5K_pistol[]= {"HLC_GestureReloadMP5K_pistol_prone", "Gesture"};
            HLC_GestureReloadFALLONG[]= {"HLC_GestureReloadFALLONG_context", "Gesture"};
            HLC_GestureReloadAR15_BAD_WS[] = {"HLC_GestureReloadAR15_BAD_WS_Context","Gesture"};
            HLC_GestureReloadAR15_BADX15_WS[] = { "HLC_GestureReloadAR15_BADX15_WS_context", "Gesture" };
            HLC_GestureReloadAR15_BAD_DR[] = {"HLC_GestureReloadAR15_BAD_DR_Context","Gesture"};
            HLC_GestureReloadAR15_catch_WS[] = {"HLC_GestureReloadAR15_catch_WS_Context","Gesture"};
            HLC_GestureReloadAR15_catch_DR[] = {"HLC_GestureReloadAR15_catch_DR_Context","Gesture"};
            HLC_GestureReloadAUG[] = { "HLC_GestureReloadAUG_context", "Gesture" };
            HLC_GestureReloadAUGPara[] = { "HLC_GestureReloadAUGPara_context", "Gesture" };
            HLC_GestureSwapBarrelAUG[] = { "HLC_GestureSwapBarrelAUG_context", "Gesture" };
            HLC_GestureReloadp226[] = { "HLC_GestureReloadp226_context", "Gesture" };
            HLC_GestureReloadSG550[] = { "HLC_GestureReloadSG550_context", "Gesture" };
            HLC_GesturereloadSG553R[] = { "HLC_GesturereloadSG553R_context", "Gesture" };
            HLC_GestureReloadSG553RDrum[] = { "HLC_GestureReloadSG553RDrum_context", "Gesture" };
            HLC_GestureReloadGL5040[] = { "HLC_GestureReloadGL5040_context", "Gesture" };
            NIA_GestureReload416[] = { "NIA_GestureReload416_Context", "Gesture" };
            NIA_GestureReload416_x15[] = { "NIA_GestureReload416_x15_Context", "Gesture" };
            NIA_GestureReload416_WS[] = { "NIA_GestureReload416_WS_Context", "Gesture" };
            NIA_GestureReload416_BAD[] = { "NIA_GestureReload416_BAD_Context", "Gesture" };
            NIA_GestureReloadAGC[] = { "NIA_GestureReloadAGC_Context", "Gesture" };
        };

        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureRechamber3011[] = { "HLC_GestureRechamber3011_Context", "Gesture" };
            HLC_GestureReload3011[] = { "HLC_GestureReload3011_Context", "Gesture" };
            HLC_GestureReload3011_tac[] = { "HLC_GestureReload3011_tac_Context", "Gesture" };
            HLC_GestureReload3011_20rnd[] = { "HLC_GestureReload3011_20rnd_context", "Gesture" };
            HLC_GestureReload3011_50rnd[] = { "HLC_GestureReload3011_50rnd_Context", "Gesture" };
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60_Context","Gesture"};
            HLC_GestureReloadAK[] = {"HLC_GestureReloadAK_Context","Gesture"};
            HLC_GestureReloadAK762[] = { "HLC_GestureReloadAK762_Context", "Gesture" };
            HLC_GestureReloadAK545[] = { "HLC_GestureReloadAK545_Context", "Gesture" };
            HLC_GestureReloadAK545OneHand[] = { "HLC_GestureReloadAK545OneHand_Context", "Gesture" };
            HLC_GestureReloadAK762DRUM[] = { "HLC_GestureReloadAK762DRUM_Context", "Gesture" };
            HLC_GestureReloadRPK[] = {"HLC_GestureReloadRPK_Context","Gesture"};
            HLC_GestureReloadAK12[] = {"HLC_GestureReloadAK12_Context","Gesture"};
            HLC_GestureReloadAKLONG[] = {"HLC_GestureReloadAK_LongContext","Gesture"};
            HLC_GestureReloadHK53[] = {"HLC_GestureReloadHK53_Context","Gesture"};
            HLC_GestureReloadG3SG1[]= {"HLC_GestureReloadG3SG1_Context", "Gesture"};
            HLC_GestureReloadOSW[]= {"HLC_GestureReloadOSW_Context", "Gesture"};
            HLC_GestureReloadM14[]= {"HLC_GestureReloadM14_Context", "Gesture"};
            HLC_GestureReloadMP5[]= {"HLC_GestureReloadMP5_Context", "Gesture"};
            HLC_GestureReloadMP510[]= {"HLC_GestureReloadMP510_Context", "Gesture"};
            HLC_GestureReloadMP5K[]= {"HLC_GestureReloadMP5k_Context", "Gesture"};
            HLC_GestureReloadMP5K_pistol[]= {"HLC_GestureReloadMP5K_pistol_prone", "Gesture"};
            HLC_GestureReloadFALLONG[]= {"HLC_GestureReloadFALLONG_context", "Gesture"};
            HLC_GestureReloadAR15_BAD_WS[] = {"HLC_GestureReloadAR15_BAD_WS_Context","Gesture"};
            HLC_GestureReloadAR15_BADX15_WS[] = { "HLC_GestureReloadAR15_BADX15_WS_context", "Gesture" };
            HLC_GestureReloadAR15_BAD_DR[] = {"HLC_GestureReloadAR15_BAD_DR_Context","Gesture"};
            HLC_GestureReloadAR15_catch_WS[] = {"HLC_GestureReloadAR15_catch_WS_Context","Gesture"};
            HLC_GestureReloadAR15_catch_DR[] = {"HLC_GestureReloadAR15_catch_DR_Context","Gesture"};
            HLC_GestureReloadAUG[] = { "HLC_GestureReloadAUG_context", "Gesture" };
            HLC_GestureReloadAUGPara[] = { "HLC_GestureReloadAUGPara_context", "Gesture" };
            HLC_GestureSwapBarrelAUG[] = { "HLC_GestureSwapBarrelAUG_context", "Gesture" };
            HLC_GestureReloadp226[] = { "HLC_GestureReloadp226_context", "Gesture" };
            HLC_GestureReloadSG550[] = { "HLC_GestureReloadSG550_context", "Gesture" };
            HLC_GesturereloadSG553R[] = { "HLC_GestureReloadSG553R_context", "Gesture" };
            HLC_GestureReloadSG553RDrum[] = { "HLC_GestureReloadSG553RDrum_context", "Gesture" };
            HLC_GestureReloadGL5040[] = { "HLC_GestureReloadGL5040_context", "Gesture" };
            NIA_GestureReload416[] = { "NIA_GestureReload416_Context", "Gesture" };
            NIA_GestureReload416_x15[] = { "NIA_GestureReload416_x15_Context", "Gesture" };
            NIA_GestureReload416_WS[] = { "NIA_GestureReload416_WS_Context", "Gesture" };
            NIA_GestureReload416_BAD[] = { "NIA_GestureReload416_BAD_Context", "Gesture" };
            NIA_GestureReloadAGC[] = { "NIA_GestureReloadAGC_Context", "Gesture" };
        };

        class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
            HLC_GestureRechamber3011[] = { "HLC_GestureRechamber3011", "Gesture" };
            HLC_GestureReload3011[] = { "HLC_GestureReload3011", "Gesture" };
            HLC_GestureReload3011_tac[] = { "HLC_GestureReload3011_tac", "Gesture" };
            HLC_GestureReload3011_20rnd[] = { "HLC_GestureReload3011_20rnd", "Gesture" };
            HLC_GestureReload3011_50rnd[] = { "HLC_GestureReload3011_50rnd", "Gesture" };
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60","Gesture"};
            HLC_GestureReloadAK[] = {"HLC_GestureReloadAK","Gesture"};
            HLC_GestureReloadAK762[] = { "HLC_GestureReloadAK762", "Gesture" };
            HLC_GestureReloadAK545[] = { "HLC_GestureReloadAK545", "Gesture" };
            HLC_GestureReloadAK545OneHand[] = { "HLC_GestureReloadAK545OneHand", "Gesture" };
            HLC_GestureReloadAK762Drum[] = { "HLC_GestureReloadAK762Drum", "Gesture" };
            HLC_GestureReloadRPK[] = {"HLC_GestureReloadRPK","Gesture"};
            HLC_GestureReloadAK12[] = {"HLC_GestureReloadAK12","Gesture"};
            HLC_GestureReloadAKLONG[] = {"HLC_GestureReloadAK12","Gesture"};
            HLC_GestureReloadGP30[]= {"HLC_GestureReloadGP30", "Gesture"};
            HLC_GestureReloadG3SG1[]= {"HLC_GestureReloadG3SG1", "Gesture"};
            HLC_GestureReloadOSW[]= {"HLC_GestureReloadOSW", "Gesture"};
            HLC_GestureReloadM14[]= {"HLC_GestureReloadM14", "Gesture"};
            HLC_GestureReloadMP5[]= {"HLC_GestureReloadMP5", "Gesture"};
            HLC_GestureReloadMP510[]= {"HLC_GestureReloadMP510", "Gesture"};
            HLC_GestureReloadMP5K[]= {"HLC_GestureReloadMP5k", "Gesture"};
            HLC_GestureReloadMP5K_pistol[]= {"HLC_GestureReloadMP5K_pistol", "Gesture"};
            HLC_GestureReloadFALLONG[]= {"HLC_GestureReloadFALLONG", "Gesture"};
            HLC_GestureReloadAR15_BAD_WS[]= {"HLC_GestureReloadAR15_BAD_WS", "Gesture"};
            HLC_GestureReloadAR15_BADX15_WS[] = { "HLC_GestureReloadAR15_BADX15_WS", "Gesture" };
            HLC_GestureReloadAR15_BAD_DR[]= {"HLC_GestureReloadAR15_BAD_dr", "Gesture"};
            HLC_GestureReloadAR15_catch_WS[]= {"HLC_GestureReloadAR15_catch_ws", "Gesture"};
            HLC_GestureReloadAR15_catch_DR[]= {"HLC_GestureReloadAR15_catch_dr", "Gesture"};
            HLC_GestureReloadAUG[] = { "HLC_GestureReloadAUG", "Gesture" };
            HLC_GestureReloadAUGPara[] = { "HLC_GestureReloadAUGPara", "Gesture" };
            HLC_GestureSwapBarrelAUG[] = { "HLC_GestureSwapBarrelAUG", "Gesture" };
            HLC_GestureReloadp226[] = { "HLC_GestureReloadp226", "Gesture" };
            HLC_GestureReloadSG550[] = { "HLC_GestureReloadSG550", "Gesture" };
            HLC_GesturereloadSG553R[] = { "HLC_GesturereloadSG553R", "Gesture" };
            HLC_GestureReloadSG553RDrum[] = { "HLC_GestureReloadSG553RDrum", "Gesture" };
            HLC_GestureReloadGL5040[] = { "HLC_GestureReloadGL5040", "Gesture" };
            NIA_GestureReload416[] = { "NIA_GestureReload416", "Gesture" };
            NIA_GestureReload416_x15[] = { "NIA_GestureReload416_x15", "Gesture" };
            NIA_GestureReload416_WS[] = { "NIA_GestureReload416_WS", "Gesture" };
            NIA_GestureReload416_BAD[] = { "NIA_GestureReload416_BAD", "Gesture" };
            NIA_GestureReloadAGC[] = { "NIA_GestureReloadAGC", "Gesture" };
        };
    };
};

class CfgGesturesMale {
    class Default;
    class GestureReloadBase;

    class States {
        class HLC_GestureReloadAK : Default {
            file="\hlc_core\animation\gesture\reload_ak_onehanded.rtm";
            looped=0;
            speed = 0.23076923076923076923076923076923;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.200000;
            headBobMode=2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = {0, 1, 0.075, 0, 0.85, 0, 0.93, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK_prone : Default {
            file = "\hlc_core\animation\gesture\reload_ak_prone.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK_Context : HLC_GestureReloadAK {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAK545OneHand : Default {
            file = "\hlc_core\animation\gesture\reload_ak545onehand_standing.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.200000;
            headBobMode = 2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK545OneHand_prone : Default {
            file = "\hlc_core\animation\gesture\reload_ak_prone.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK545OneHand_Context : HLC_GestureReloadAK545OneHand {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAK545 : Default {
            file = "\hlc_core\animation\gesture\reload_ak545_standing.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.200000;
            headBobMode = 2;
            rightHandIKCurve[] = { 0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1 };
            leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1 };
            leftHandIKBeg = false;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK545_prone : Default {
            file = "\hlc_core\animation\gesture\reload_ak_prone.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK545_Context : HLC_GestureReloadAK545 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAK762 : Default {
            file = "\hlc_core\animation\gesture\reload_ak762_standing.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.200000;
            headBobMode = 2;
            rightHandIKCurve[] = { 0.631944, 1, 0.657922, 0, 0.840278, 0, 0.875, 1 };
            leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.868056, 0, 0.96, 1 };
            leftHandIKBeg = false;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK762_prone : Default {
            file = "\hlc_core\animation\gesture\reload_ak762_prone.rtm";
            looped = 0;
            speed = -4.8;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.868, 0, 0.96, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.84, 0, 0.86, 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK762_Context : HLC_GestureReloadAK762 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAK762Drum : Default {
            file = "\hlc_core\animation\gesture\reload_ak762drum_standing.rtm";
            looped = 0;
            speed = -5.833333;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.200000;
            headBobMode = 2;
            rightHandIKCurve[] = { 0.67428, 1, 0.702857, 0, 0.88, 0, 0.90857, 1 };
            leftHandIKCurve[] = { 0, 1, 0.03125, 0, 0.91428, 0, 0.96, 1 };
            leftHandIKBeg = false;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK762Drum_prone : Default {
            file = "\hlc_core\animation\gesture\reload_ak76drum_prone.rtm";
            looped = 0;
            speed = -5.833333;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.02;
            headBobMode = 2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK762Drum_Context : HLC_GestureReloadAK762Drum {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadM60 : Default {
            file="hlc_core\animation\gesture\reload_m60e4_standing.rtm";
            looped=0;
            speed=0.09090909090909090909090909090909;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.25;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {0.3, 1, 0.340, 0, 0.945, 0, 0.98, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0, 1, 0.0455, 0, 0.3, 0, 0.334, 1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadM60_Context : HLC_GestureReloadM60 {
            mask = "handsWeapon_context";
        };

        class HLC_GestureReloadM60_Prone : Default {
            file="hlc_core\animation\gesture\reload_m60e4_prone.rtm";
            looped=0;
            speed=0.09090909090909090909090909090909;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.25;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {0.3, 1, 0.340, 0, 0.945, 0, 0.98, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0, 1, 0.0455, 0, 0.3, 0, 0.334, 1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAR15_BAD_WS : Default {
            file = "hlc_core\animation\gesture\reload_ar15_BAD_workspace.rtm";
            looped=0;
            speed=0.3003000;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.1;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAR15_BADX15_WS : Default {
            file = "hlc_core\animation\gesture\reload_ar15X15_BAD_standing.rtm";
            looped = 0;
            speed = -2.766;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.3;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0, 1, 0.07, 0, 0.81, 0, 0.86, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.08, 0, 0.14, 0, 0.17, 1, 0.57, 1, 0.68, 0, 0.78, 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAR15_BADX15_WS_prone : Default {
            file="hlc_core\animation\gesture\reload_ar15_prone.rtm";
            looped=0;
            speed=0.25;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.05;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAR15_BADX15_WS_Context : HLC_GestureReloadAR15_BADX15_WS {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAR15_BAD_DR : Default {
            file="hlc_core\animation\gesture\reload_ar15_BAD_downrange.rtm";
            looped=0;
            speed=0.3003000;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.1;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAR15_catch_WS : Default
        {
            file="hlc_core\animation\gesture\reload_ar15_catch_workspace.rtm";
            looped=0;
            speed=0.25;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.05;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAR15_X15 : Default
        {
            file = "hlc_core\animation\gesture\reload_ar15X15_standing.rtm";
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
        class HLC_GestureReloadAR15_X15_prone : Default
        {
            file = "hlc_core\animation\gesture\reload_ar15_catch_workspace.rtm";
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
        class HLC_GestureReloadAR15_X15_Context : HLC_GestureReloadAR15_X15 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAR15_Prone : Default {
            file="hlc_core\animation\gesture\reload_ar15_prone.rtm";
            looped=0;
            speed=0.25;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.05;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadAR15_catch_DR : Default {
            file="hlc_core\animation\gesture\reload_ar15_catch_downrange.rtm";
            looped=0;
            speed=0.25;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.05;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0,1,0.08,0,0.14, 0, 0.17, 1,0.57,1,0.68,0,0.78,1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAR15_catch_WS_Context : HLC_GestureReloadAR15_catch_WS {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAR15_BAD_DR_Context : HLC_GestureReloadAR15_BAD_DR {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAR15_BAD_WS_Context : HLC_GestureReloadAR15_BAD_WS {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAR15_catch_DR_Context : HLC_GestureReloadAR15_catch_DR {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadSMLE : Default {
            file="hlc_core\animation\gesture\reload_enfield_standing.rtm";
            looped=0;
            speed=0.128;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.25;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = {1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0, 1, 0.00455, 0, 0.9488, 0, 1, 1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadSMLE_Prone : Default {
            file="hlc_core\animation\gesture\reload_enfield_standing.rtm";
            looped=0;
            speed=0.128;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.25;
            headBobMode=2;
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {0, 1, 0.0455, 0, 0.3, 0, 0.334, 1};
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadBoltSMLE : Default {
            file="hlc_core\animation\gesture\rechamber_enfield.rtm";
            speed=0.77;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.01;
            headBobMode=2;
            rightHandIKCurve[] = {0, 1, 0.04, 0, 0.90, 0, 1, 1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {1};
        };
        class HLC_GestureReloadG3SG1 : Default {
            file="hlc_core\animation\gesture\reload_g3_stand.rtm";
            speed=0.16666666666666666666666666666667;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.01;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.033, 0, 0.86, 0, 0.9, 1};
        };
        class HLC_GestureReloadG3SG1_prone : Default {
            file="hlc_core\animation\gesture\reload_g3_prone.rtm";
            speed=0.16666666666666666666666666666667;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.01;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.033, 0, 0.86, 0, 0.9, 1};
        };
        class HLC_GestureReloadG3SG1_Context : HLC_GestureReloadG3SG1 {
            mask = "handsWeapon_context";
        };         
        class HLC_GestureReloadHK53 : Default {
            file="hlc_core\animation\gesture\reload_hk53_standing.rtm";
            speed=0.16666666666666666666666666666667;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.01;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.033, 0, 0.86, 0, 0.9, 1};
        };
        class HLC_GestureReloadHK53_prone : Default {
            file="hlc_core\animation\gesture\reload_hk53_prone.rtm";
            speed=0.16666666666666666666666666666667;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.01;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.033, 0, 0.86, 0, 0.9, 1};
        };
        class HLC_GestureReloadHK53_Context : HLC_GestureReloadHK53 {
            mask = "handsWeapon_context";
        };

        class HLC_GestureReloadAUG:Default {
            file="hlc_core\animation\gesture\reload_aug_stand.rtm";
            speed=0.18181818181818181818181818181818;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.22;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.0363636363636, 0, 0.83636363636363636363636363636364, 0, 0.87272727272727272727272727272727, 1 };
        };
        class HLC_GestureReloadAUG_prone : Default {
            file = "hlc_core\animation\gesture\reload_aug_prone.rtm";
            speed = 0.18181818181818181818181818181818;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.22;
            headBobMode = 2;
            rightHandIKCurve[] = { 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.0363636363636, 0, 0.83636363636363636363636363636364, 0, 0.87272727272727272727272727272727, 1 };
        };
        class HLC_GestureReloadAUG_Context : HLC_GestureReloadAUG {
            mask = "handsWeapon_context";
        };

        class HLC_GestureSwapBarrelAUG : GestureReloadBase {
            file = "hlc_core\animation\gesture\barrelswap_aug_stand.rtm";
            speed = 0.21428571428571428571428571428571;
            looped = false;
            mask = "handsWeapon";
            weaponIK = 1;
            headBobStrength = 0.1;
            headBobMode = 2;
            canReload = 0;
            connectFrom[] = {};
            connectTo[] = {};
            interpolateWith[] = {};
            interpolateTo[] = {};
            interpolateFrom[] = {};
            aiming = "aimingDefault";
            aimingBody = "aimingUpDefault";
            rightHandIKBeg = true;
            rightHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1 , 0.042857, 0, 0.8, 0, 0.842857, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.07851, 1, 0.107143, 0, 0.721429, 0, 0.764286, 1 };
        };
        class HLC_GestureSwapBarrelAUG_prone : GestureReloadBase {
            file = "hlc_core\animation\gesture\barrelswap_aug_prone.rtm";
            speed = 0.21428571428571428571428571428571;
            looped = false;
            mask = "handsWeapon";
            weaponIK = 1;
            headBobStrength = 0.1;
            headBobMode = 2;
            canReload = 0;
            connectFrom[] = {};
            connectTo[] = {};
            interpolateWith[] = {};
            interpolateTo[] = {};
            interpolateFrom[] = {};
            rightHandIKBeg = true;
            rightHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.042857, 0, 0.8, 0, 0.842857, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.07851, 1, 0.107143, 0, 0.721429, 0, 0.764286, 1 };
        };
        class HLC_GestureSwapBarrelAUG_Context : HLC_GestureSwapBarrelAUG {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAUGa3 : Default {
            file = "hlc_core\animation\gesture\reload_auga3_stand.rtm";
            speed = 0.22727272727272727272727272727273;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.22;
            headBobMode = 2;
            rightHandIKCurve[] = { 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.0363636363636, 0, 0.83636363636363636363636363636364, 0, 0.87272727272727272727272727272727, 1 };
        };
        class HLC_GestureReloadAUGa3_prone : Default {
            file = "hlc_core\animation\gesture\reload_auga3_prone.rtm";
            speed = 0.22727272727272727272727272727273;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.0363636363636, 0, 0.83636363636363636363636363636364, 0, 0.87272727272727272727272727272727, 1 };
        };
        class HLC_GestureReloadAUGa3_Context : HLC_GestureReloadAUGa3 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAUGPara : Default {
            file = "hlc_core\animation\gesture\reload_augpara_stand.rtm";
            speed = 0.24;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.048, 0, 0.84, 0, 0.88, 1 };
        };
        class HLC_GestureReloadAUGPara_prone : Default {
            file = "hlc_core\animation\gesture\reload_augpara_prone.rtm";
            speed = 0.24;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.048, 0, 0.84, 0, 0.88, 1 };
        };
        class HLC_GestureReloadAUGPara_Context : HLC_GestureReloadAUGPara {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadRPK:Default {
            file="hlc_core\animation\gesture\reload_rpk_standing.rtm";
            speed=0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {0.6125,1,0.675,0,0.85625,0,0.90625,1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.60625, 0, 0.625, 1};
        };

        class HLC_GestureReloadRPK_Prone : Default {
            file="hlc_core\animation\gesture\reload_rpk_prone.rtm";
            speed=0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.02;
            headBobMode=2;
            rightHandIKCurve[] = {0.6125,1,0.675,0,0.85625,0,0.90625,1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.60625, 0, 0.625, 1};
        };
        class HLC_GestureReloadRPK_Context : HLC_GestureReloadRPK {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAK12 : Default {
            file="hlc_core\animation\gesture\reload_ak12_stand.rtm";
            speed=0.2;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {0.6533,1,0.66666667,0,0.793333,0,0.88,1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.58666666, 0, 0.64, 1};
        };
        class HLC_GestureReloadAK12_Prone : Default {
            file="hlc_core\animation\gesture\reload_ak12_prone.rtm";
            speed=0.2;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.02;
            headBobMode=2;
            rightHandIKCurve[] = {0.6533,1,0.66666667,0,0.793333,0,0.88,1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.586666, 0, 0.64, 1};
        };
        class HLC_GestureReloadAK12_Context : HLC_GestureReloadAK12 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAK12Prone_Context : HLC_GestureReloadAK12_Prone {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAK_Long : HLC_GestureReloadAK12 {
            file="hlc_core\animation\gesture\reload_ak_long.rtm";
        };
        class HLC_GestureReloadAK_LongProne : HLC_GestureReloadAK12_Prone {
            file="hlc_core\animation\gesture\reload_ak12_prone.rtm";
        };
        class HLC_GestureReloadAK_LongContext : HLC_GestureReloadAK_Long {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadGP30 : Default {
            file="hlc_core\animation\gesture\reload_gp30.rtm";
            speed=0.42863266180882983283326189455637;
            looped = false;
            mask = "handsWeapon_context";
            headBobStrength=0.1;
            headBobMode=2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = {0, 1, 0.075, 0, 0.65, 0, 0.74, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadGP30_Prone : Default {
            file="hlc_core\animation\gesture\reload_gp30_prone.rtm";
            speed=0.42863266180882983283326189455637;
            looped = false;
            mask = "handsWeapon_context";
            headBobStrength=0.1;
            headBobMode=2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = {0, 1, 0.075, 0, 0.65, 0, 0.74, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadFALLONG : Default {
            file="hlc_core\animation\gesture\reload_fal_long.rtm";
            speed=0.18404907975460235612932364786722;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.831, 0, 0.887, 1};
        };
        class HLC_GestureReloadFALLONG_prone : Default {
            file="hlc_core\animation\gesture\reload_fal_long_prone.rtm";
            speed=0.18404907975460235612932364786722;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.03125, 0, 0.89, 0, 0.9375, 1};
        };
        class HLC_GestureReloadFALLONG_Context : HLC_GestureReloadFALLONG {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadOSW : Default {
            file="hlc_core\animation\gesture\reload_osw_standing.rtm";
            speed=0.23076923076923076923076923076923;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1,0.0902, 1, 0.127, 0, 0.93984, 0, 0.9924, 1};
        };
        class HLC_GestureReloadOSW_prone : Default {
            file="hlc_core\animation\gesture\reload_osw_prone.rtm";
            speed=0.23076923076923076923076923076923;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1,0.0902, 1, 0.127, 0, 0.93984, 0, 0.9924, 1};
        };
        class HLC_GestureReloadOSW_Context : HLC_GestureReloadOSW {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadMP5 : Default {
            file="hlc_core\animation\gesture\reload_mp5_standing.rtm";
            speed=0.25;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.04166666, 0, 0.86666, 0, 0.9, 1};
        };
        class HLC_GestureReloadMP5K : Default {
            file="hlc_core\animation\gesture\reload_mp5K_standing.rtm";
            speed=0.260869;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.1;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.05217391, 0, 0.904347826, 0, 0.9391304347, 1};
        };
        class HLC_GestureReloadMP5K_prone : Default {
            file="hlc_core\animation\gesture\reload_mp5k_prone.rtm";
            speed=0.260869;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.05;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.05217391, 0, 0.904347826, 0, 0.9391304347, 1};
        };
        class HLC_GestureReloadMP5k_Context : HLC_GestureReloadMP5K {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadMP5K_pistol : Default {
            file="hlc_core\animation\gesture\reload_mp5K_standing.rtm";
            speed=0.260869;
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength=0.1;
            showHandGun = 1;
            disableWeapons = 1;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.05217391, 0, 0.904347826, 0, 0.9391304347, 1};
        };
        class HLC_GestureReloadMP5K_pistol_prone : HLC_GestureReloadMP5K_pistol {
            file="hlc_core\animation\gesture\reload_mp5k_prone.rtm";
            speed=0.260869;
            looped = false;
            mask = "handsWeapon_pst_context";
            headBobStrength=0.05;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.05217391, 0, 0.904347826, 0, 0.9391304347, 1};
        };
        class HLC_GestureReloadMP5k_pistol_Context : HLC_GestureReloadMP5K_pistol_prone {
            mask = "handsWeapon_pst_context";
        };
        class HLC_GestureReloadM14 : Default {
            file="hlc_core\animation\gesture\reload_m14_standing.rtm";
            speed=0.23;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {0, 1,0.59,1,0.615384,0,0.7538 ,0,0.84615,1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.04166666, 0, 0.58416, 0, 0.615384, 1};
        };
        class HLC_GestureReloadM14_Prone : Default {
            file="hlc_core\animation\gesture\reload_m14_prone.rtm";
            speed=0.23;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.04166666, 0, 0.86666, 0, 0.9, 1};
        };
        class HLC_GestureReloadM14_Context : HLC_GestureReloadM14 {
            mask = "handsWeapon_context";
        };

        class HLC_GestureReloadMP5_Prone : Default {
            file="hlc_core\animation\gesture\reload_mp5_prone.rtm";
            speed=0.25;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.04166666, 0, 0.86666, 0, 0.9, 1};
        };
        class HLC_GestureReloadMP5_Context : HLC_GestureReloadMP5 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadMP510 : Default {
            file="hlc_core\animation\gesture\reload_mp510_standing.rtm";
            speed=0.3;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.05, 0, 0.77, 0, 0.91, 1};
        };
        class HLC_GestureReloadMP510_Prone : Default {
            file="hlc_core\animation\gesture\reload_mp510_prone.rtm";
            speed=0.3;
            looped = false;
            mask = "handsWeapon";
            headBobStrength=0.2;
            headBobMode=2;
            rightHandIKCurve[] = {1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = {0, 1, 0.05, 0, 0.77, 0, 0.91, 1};
        };
        class HLC_GestureReloadMP510_Context : HLC_GestureReloadMP510 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadSten : Default {
            file="hlc_core\animation\gesture\reload_sten_standing.rtm";
            looped=0;
            speed=0.2112676056;
            mask="handsWeapon";
            headBobStrength=0.200000;
            headBobMode=2;
            leftHandIKCurve[]={0,1,0.1971830,1,0.204225,0,0.7957746,0,0.84507042,1};
            rightHandIKCurve[]={0,1,0.04929,0,0.16197,0,0.19718309,1};
        };
        class HLC_GestureReloadP226 : Default {
            file = "hlc_core\animation\gesture\reload_p226_standing.rtm";
            speed = -3.5;
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.2;
            headBobMode = 2;
            //rightHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
        };
        class HLC_GestureReloadP226_Prone : Default {
            file = "hlc_core\animation\gesture\reload_p226_prone.rtm";
            speed = -3.5;
            looped = false;
            mask = "handsWeapon_pst";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.02, 0, 0.92, 0, 0.96, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.05, 0, 0.77, 0, 0.91, 1 };
        };
        class HLC_GestureReloadP226_Context : HLC_GestureReloadP226 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureRechamber3011 : Default {
            file = "\hlc_core\animation\gesture\rechamber_3011_standing.rtm";
            looped = 0;
            speed = -2;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.06667, 0, 0.75, 0, 0.833333, 1 };
            leftHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureRechamber3011_prone : Default {
            file = "\hlc_core\animation\gesture\rechamber_3011_prone.rtm";
            looped = 0;
            speed = -2;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.1;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.06667, 0, 0.75, 0, 0.833333, 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureRechamber3011_Context : HLC_GestureRechamber3011 {
            mask = "handsWeapon_context";
        };
        class HLC_Gesturereload3011 : Default {
            file = "\hlc_core\animation\gesture\reload_3011_10rnd_standing.rtm";
            looped = 0;
            speed = -6;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.90555556, 0, 0.9555556, 1 };
            leftHandIKCurve[] = { 0.155556, 1, 0.172228, 0, 0.7055556, 0, 0.738889, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_Gesturereload3011_prone : Default {
            file = "\hlc_core\animation\gesture\reload_3011_10rnd_prone.rtm";
            looped = 0;
            speed = -6;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.1;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0.155556, 1, 0.172228, 0, 0.7055556, 0, 0.738889, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.90555556, 0, 0.9555556, 1 };
            rightHandIKEnd = true;
        };
        class HLC_Gesturereload3011_Context : HLC_Gesturereload3011 {
            mask = "handsWeapon_context";
        };
        class HLC_Gesturereload3011_tac : Default {
            file = "\hlc_core\animation\gesture\reload_3011_10rnd_standing.rtm";
            looped = 0;
            speed = -6;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.3;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.027778, 0, 0.90555556, 0, 0.9555556, 1 };
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.1388889, 0, 0.1611, 1, 0.76444, 1, 0.783333, 0, 0.90555556, 0, 0.9555556, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_Gesturereload3011_tac_prone : Default {
            file = "\hlc_core\animation\gesture\reload_3011_10rnd_prone.rtm";
            looped = 0;
            speed = -6;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.1;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0.155556, 1, 0.172228, 0, 0.7055556, 0, 0.738889, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.1388889, 0, 0.1611, 1, 0.76444, 1, 0.783333, 0, 0.90555556, 0, 0.9555556, 1 };
            rightHandIKEnd = true;
        };
        class HLC_Gesturereload3011_tac_Context : HLC_Gesturereload3011_tac {
            mask = "handsWeapon_context";
        };
        class HLC_Gesturereload3011_20rnd : Default {
            file = "\hlc_core\animation\gesture\reload_3011_20rnd_standing.rtm";
            looped = 0;
            speed = -6;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.3;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.027778, 0, 0.90555556, 0, 0.9555556, 1 };
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.1388889, 0, 0.1611, 1, 0.76444, 1, 0.783333, 0, 0.90555556, 0, 0.9555556, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_Gesturereload3011_20rnd_prone : Default {
            file = "\hlc_core\animation\gesture\reload_3011_20rnd_prone.rtm";
            looped = 0;
            speed = -6;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.1;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0.155556, 1, 0.172228, 0, 0.7055556, 0, 0.738889, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.1388889, 0, 0.1611, 1, 0.76444, 1, 0.783333, 0, 0.90555556, 0, 0.9555556, 1 };
            rightHandIKEnd = true;
        };
        class HLC_Gesturereload3011_20rnd_Context : HLC_Gesturereload3011_20rnd {
            mask = "handsWeapon_context";
        };
        class HLC_Gesturereload3011_50rnd : Default {
            file = "\hlc_core\animation\gesture\reload_3011_50rnd_standing.rtm";
            looped = 0;
            speed = -6;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.3;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.027778, 0, 0.90555556, 0, 0.9555556, 1 };
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.1388889, 0, 0.1611, 1, 0.76444, 1, 0.783333, 0, 0.90555556, 0, 0.9555556, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_Gesturereload3011_50rnd_prone : Default {
            file = "\hlc_core\animation\gesture\reload_3011_50rnd_prone.rtm";
            looped = 0;
            speed = -6;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.1;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0.155556, 1, 0.172228, 0, 0.7055556, 0, 0.738889, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.027778, 0, 0.1388889, 0, 0.1611, 1, 0.76444, 1, 0.783333, 0, 0.90555556, 0, 0.9555556, 1 };
            rightHandIKEnd = true;
        };
        class HLC_Gesturereload3011_50rnd_Context : HLC_Gesturereload3011_50rnd {
            mask = "handsWeapon_context";
        };
        class HLC_GesturereloadSG550 : Default {
            file = "\hlc_core\animation\gesture\reload_sg550_standing.rtm";
            looped = 0;
            speed = -4.133;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKCurve[] = { 0, 1, (4/124), 0, (108/124), 0, (117/124), 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GesturereloadSG550_prone : Default {
            file = "hlc_core\animation\gesture\reload_sg550_prone.rtm";
            speed = -4.133;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKCurve[] = { 0, 1, (4 / 124), 0, (108 / 124), 0, (117 / 124), 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GesturereloadSG550_context : HLC_GesturereloadSG550 {
            mask = "handsWeapon_context";
        };
        class HLC_GesturereloadSG553R : Default {
            file = "\hlc_core\animation\gesture\reload_sg553R_standing.rtm";
            looped = 0;
            speed = -(134/30);
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKCurve[] = { 0, 1, (4 / 124), 0, (108 / 124), 0, (117 / 124), 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GesturereloadSG553R_prone : Default {
            file = "hlc_core\animation\gesture\reload_sg553R_prone.rtm";
            speed = -4.133;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKCurve[] = { 0, 1, (4 / 124), 0, (108 / 124), 0, (117 / 124), 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GesturereloadSG553R_context : HLC_GesturereloadSG553R {
            mask = "handsWeapon_context";
        };
        class HLC_GesturereloadSG553RDrum : Default {
            file = "\hlc_core\animation\gesture\reload_sg553Rdrum_standing.rtm";
            looped = 0;
            speed = -(160 / 30);
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { (113 / 160), 1, (117 / 160), 0, (143 / 160), 0, (147 / 160), 1 };
            leftHandIKCurve[] = { 0, 1, (4 / 160), 0, (108 / 160), 0, (115 / 160), 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GesturereloadSG553RDrum_prone : Default {
            file = "hlc_core\animation\gesture\reload_sg553Rdrum_prone.rtm";
            speed = -(160 / 30);
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { (113 / 160), 1, (117 / 160), 0, (143 / 160), 0, (147 / 160), 1 };
            leftHandIKCurve[] = { 0, 1, (4 / 160), 0, (108 / 160), 0, (115 / 160), 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GesturereloadSG553RDrum_context : HLC_GesturereloadSG553RDrum {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadGL5040 : Default {
            file = "\hlc_core\animation\gesture\reload_gl5040_standing.rtm";
            looped = 0;
            speed = -(107/30);
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKCurve[] = { 0, 1, (4/107), 0, (90/107), 0, (93/107), 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadGL5040_prone : Default {
            file = "\hlc_core\animation\gesture\reload_gl5040_prone.rtm";
            speed = -(107/30);
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKCurve[] = { 0, 1, (4 / 107), 0, (90 / 107), 0, (93 / 107), 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadGL5040_context : HLC_GestureReloadGL5040 {
            mask = "handsWeapon_context";
        };
        class NIA_GestureReload416 : Default {
            file = "hlc_core\animation\gesture\reload_ar15_downrange.rtm";
            speed = -(100 / 30);
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.1;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, (6 / 100), 0, (90 / 100), 0, (96 / 100), 1 };
        };
        class NIA_GestureReload416_Prone : Default {
            file = "hlc_core\animation\gesture\reload_ar15_prone_new.rtm";
            looped = 0;
            speed = -(100 / 30);
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, (6 / 100), 0, (90 / 100), 0, (96 / 100), 1 };
            rightHandIKEnd = true;
        };
        class NIA_GestureReload416_Context : NIA_GestureReload416 {
            mask = "handsWeapon_context";
        };
        class NIA_GestureReload416_x15 : NIA_GestureReload416
        {
            file = "hlc_core\animation\gesture\reload_ar15_x15_standing.rtm";
        };
        class NIA_GestureReload416_x15_prone : NIA_GestureReload416_Prone
        {
            file = "hlc_core\animation\gesture\reload_ar15_x15_prone.rtm";
        };
        class NIA_GestureReload416_x15_Context : NIA_GestureReload416_x15 {
            mask = "handsWeapon_context";
        };
        class NIA_GestureReload416_WS : Default {
            file = "hlc_core\animation\gesture\reload_ar15_workspace.rtm";
            speed = -(100 / 30);
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, (6 / 100), 0, (90 / 100), 0, (96 / 100), 1 };
        };
        class NIA_GestureReload416_WS_Prone : Default {
            file = "hlc_core\animation\gesture\reload_ar15_prone_new.rtm";
            looped = 0;
            speed = -(100 / 30);
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, (6 / 100), 0, (90 / 100), 0, (96 / 100), 1 };
            rightHandIKEnd = true;
        };
        class NIA_GestureReload416_WS_Context : NIA_GestureReload416_WS {
            mask = "handsWeapon_context";
        };
        class NIA_GestureReload416_BAD : Default {
            file = "hlc_core\animation\gesture\reload_ar15_bad_standing.rtm";
            speed = -(92 / 30);
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, (6 / 92), 0, (78 / 92), 0, (86 / 92), 1 };
        };
        class NIA_GestureReload416_BAD_Prone : Default {
            file = "hlc_core\animation\gesture\reload_ar15_bad_prone.rtm";
            looped = 0;
            speed = -(92 / 30);
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, (6 / 92), 0, (78 / 92), 0, (86 / 92), 1 };
            rightHandIKEnd = true;
        };
        class NIA_GestureReload416_BAD_Context : NIA_GestureReload416_BAD {
            mask = "handsWeapon_context";
        };
        class NIA_GestureReloadAGC : Default {
            file = "hlc_core\animation\gesture\reload_agc_standing.rtm";
            speed = -(125 / 30);
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, (6 / 125), 0, (118 / 125), 0, (121 / 125), 1 };
        };
        class NIA_GestureReloadAGC_Prone : Default {
            file = "hlc_core\animation\gesture\reload_agc_prone.rtm";
            looped = 0;
            speed = -(125 / 30);
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.05;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 1, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, (6 / 125), 0, (118 / 125), 0, (121 / 125), 1 };
            rightHandIKEnd = true;
        };
        class NIA_GestureReloadAGC_Context : NIA_GestureReloadAGC {
            mask = "handsWeapon_context";
        };
    };
};

/*
BALLISTIC DATA PER-BULLET

NOTES -

caliber=(mm/((15*speed)/1000))

mm =     mm st steel at 200m/2.5
Speed  = speed at 200m
*/





class CfgWeapons
{
    class ItemCore;
    class InventoryFlashLightItem_Base_F;
    class hlc_acc_TLR1 : ItemCore
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        _generalMacro = "acc_flashlight";
        scope = 2;
        displayName = "Streamlight TLR-1";
        descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
        picture = "\hlc_core\tex\UI\gear_tlr1_ca.paa";
        model = "hlc_core\mesh\accessories\acc\tlr1.p3d";
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        class ItemInfo : InventoryFlashLightItem_Base_F
        {
            mass = 7;
            class FlashLight
            {
                position = "flash";
                direction = "flash dir";
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
    class hlc_acc_DBALPL : ItemCore
    {
        MRT_SwitchItemNextClass = "hlc_acc_DBALPL_FL";
        MRT_SwitchItemPrevClass = "hlc_acc_DBALPL_FL";
        MRT_switchItemHintText = "IR(Laser)";
        dlc = "Niarms_Core";
        author = "Toadie";
        _generalMacro = "acc_flashlight";
        scope = 2;
        displayName = "Steiner DBAL-PL(IR)";
        descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
        picture = "\hlc_core\tex\UI\gear_dbal_ca.paa";
        model = "hlc_core\mesh\accessories\acc\dbal.p3d";
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        class ItemInfo : InventoryFlashLightItem_Base_F
        {
            mass = 7;
            class Pointer
            {
                irLaserPos = "flash";
                irLaserEnd = "flash dir";
                irDistance = 5;
            };
            class FlashLight{};
        };
        inertia = 0.05;
    };
    class hlc_acc_DBALPL_FL : ItemCore
    {
        MRT_SwitchItemNextClass = "hlc_acc_DBALPL";
        MRT_SwitchItemPrevClass = "hlc_acc_DBALPL";
        MRT_switchItemHintText = "VIS(Flashlight)";
        dlc = "Niarms_Core";
        author = "Toadie";
        _generalMacro = "acc_flashlight";
        scope = 2;
        displayName = "Steiner DBAL-PL(VIS)";
        descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
        picture = "\hlc_core\tex\UI\gear_dbal_ca.paa";
        model = "hlc_core\mesh\accessories\acc\dbal_FL.p3d";
        descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
        class ItemInfo : InventoryFlashLightItem_Base_F
        {
            mass = 7;
            class FlashLight{
                position = "flash";
                direction = "flash dir";
                color[] = { 130, 160, 180 };
                ambient[] = { 0.001, 0.001, 0.001 };
                size = 1;
                innerAngle = 22;
                outerAngle = 50;
                coneFadeCoef = 10;
                intensity = 600;
                useFlare = 1;
                dayLight = 1;
                FlareSize = 0.5;
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
    class muzzle_snds_H;
    class muzzle_snds_M : muzzle_snds_H {
        class ItemInfo;
    };
    class hlc_muzzle_300blk_KAC : muzzle_snds_M {
        dlc = "Niarms_Core";
        author = "ImBrokeRU, Toadie";
        displayName = "QD .300BLK Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_core\mesh\accessories\barrel\762\762.p3d";
    };
    class hlc_muzzle_556NATO_KAC : muzzle_snds_M {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayName = "Gemtech Halo";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_core\mesh\accessories\barrel\556\kacqd.p3d";
    };
    class hlc_muzzle_556NATO_M42000 : muzzle_snds_M {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayName = "AAC M4-2000";
        picture = "\hlc_core\tex\ui\gear_aac-m42k_ca.paa";
        model = "hlc_core\mesh\accessories\barrel\556\M4-2000.p3d";
    };
    class hlc_muzzle_556NATO_rotexiiic_tan : muzzle_snds_M {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayName = "Rotex-IIIC (Tan)";
        picture = "\hlc_core\tex\ui\gear_rotexiiic-tan_ca.paa";
        model = "hlc_core\mesh\accessories\barrel\556\RotexIIIC.p3d";
    };
    class hlc_muzzle_556NATO_rotexiiic_grey : hlc_muzzle_556NATO_rotexiiic_tan
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayName = "Rotex-IIIC (Grey)";
        picture = "\hlc_core\tex\ui\gear_rotexiiic-grey_ca.paa";
        model = "hlc_core\mesh\accessories\barrel\556\RotexIIIC_grey.p3d";
    };
    class hlc_muzzle_Tundra : muzzle_snds_M
    {
        dlc = "Niarms_core";
        author = "r_populik,Toadie";
        displayName = "Gemtech Tundra (9mm)";
        picture = "\hlc_core\tex\ui\gear_tundra_ca";
        model = "hlc_core\mesh\accessories\barrel\9\tundra.p3d";
        class ItemInfo : ItemInfo {
            mass = 5;
        };
        inertia = 0.04;
    };
    class hlc_muzzle_Octane9 : muzzle_snds_h
    {
        dlc = "Niarms_core";
        author = " Toadie";
        displayName = "SilencerCo Octane9 (9mm)";
        picture = "\hlc_core\tex\UI\gear_octane9_ca.paa";
        model = "hlc_core\mesh\accessories\barrel\9\octane9.p3d";
    };
    class hlc_muzzle_Evo9 : muzzle_snds_h
    {
        dlc = "Niarms_core";
        author = "Toadie";
        displayName = "AAC Evolution9 (9mm)";
        picture = "\hlc_core\tex\UI\gear_evo9_ca.paa";
        model = "hlc_core\mesh\accessories\barrel\9\evo9.p3d";
    };
    class hlc_muzzle_TiRant9 : muzzle_snds_h
    {
        dlc = "Niarms_core";
        author = "Toadie";
        displayName = "AAC Ti-Rant9 (9mm)";
        model = "hlc_core\mesh\accessories\barrel\9\tirant9.p3d";
        picture = "\hlc_core\tex\UI\gear_tirant9_ca.paa";
    };
    class hlc_muzzle_TiRant9S : muzzle_snds_h
    {
        dlc = "Niarms_core";
        author = "Toadie";
        displayName = "AAC Ti-Rant9S (9mm)";
        model = "hlc_core\mesh\accessories\barrel\9\tirant9s.p3d";
        picture = "\hlc_core\tex\UI\gear_tirant9_ca.paa";
    };
    class hlc_muzzle_Octane45 : hlc_muzzle_Octane9
    {
        dlc = "Niarms_core";
        author = " Toadie";
        displayName = "SilencerCo Octane (.45ACP)";
        //picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
        //model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";
    };
    class hlc_muzzle_Evo40 : hlc_muzzle_Evo9
    {
        //dlc = "Niarms_226";
        author = "Toadie";
        displayName = "AAC Evolution (.40SW)";
        //picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
        //model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";
    };
    class NIAmuzzle_flash_rifle_MAG : ItemCore
    {
        scope = 2;
        model = "hlc_core\mesh\muzzleflash\Muzzle_flash_MAG58.p3d";
    };
    class hlc_muzzle_MAG58_Brake : muzzle_snds_M {
        dlc = "Niarms_Core";
        author = "ImBrokeRU, Toadie";
        displayName = "MAG58 Flash Hider";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_core\mesh\accessories\barrel\762\FNMAG_Brake.p3d";
        class ItemInfo : ItemInfo {
            mass = 1;
            soundTypeIndex = 0;
            muzzleEnd = "zaslehpoint"; // memory point in muzzle supressor's model
            alternativeFire = "NIAmuzzle_flash_rifle_MAG";  // class in cfgWeapons with model of muzzle flash	
        };
        inertia = 0.00;
    };

    class InventoryOpticsItem_Base_F;
    class optic_Arco;
    class optic_LRPS : ItemCore {
        class ItemInfo;
    };
    class hlc_optic_LeupoldM3A : optic_lrps {
        dlc = "Niarms_FN3011";
        author = "Toadie";
        descriptionshort = "Leupold M3A Ultra<br />Magnification: 10x";
        picture = "\hlc_core\tex\ui\gear_LeupoldM3A_Ca";
        model = "hlc_core\mesh\accessories\sights\LeupoldM3A.p3d";
        displayname = "Leupold M3A";

        class ItemInfo : ItemInfo {
            mass = 10.5;
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    opticsDisplayName = "WFOV";
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.0249;
                    opticsZoomMax = 0.0249;
                    opticsZoomInit = 0.0249;
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
                    discreteDistanceInitIndex = 4;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "Opticview";
                    modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\Reticle_10xmildot" };
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron : Snip {
                    opticsID = 2;
                    opticsDisplayName = "";
                    useModelOptics = 0;
                    opticsPPEffects[] = { "", "" };
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    __OPTICSZOOM_1X;
                    memoryPointCamera = "eye2";
                    visionMode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
        inertia = 0.05;
    };
    class hlc_optic_PVS4base : optic_Arco {
        author = "Bohemia Interactive, Toadie";
        descriptionshort = "Night Vision Optic<br />Magnification: 4x";
        displayname = "AN/PVS4";
        picture = "\hlc_core\tex\ui\gear_PVS4_x_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 49.6;
            modelOptics = "hlc_core\mesh\accessories\sights\reticles\NV_anpvs4_optic";
            class OpticsModes {
                class Snip {
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
                    modelOptics[] = {"hlc_core\mesh\accessories\sights\reticles\NV_anpvs4_optic"};
                    visionMode[] = {"NVG"};
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Snip2: Snip {
                    modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\NV_pvs4-daysight" };
                    opticsid = 2;
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 3;
                    opticsppeffects[] = {};
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
		inertia = 0.22;
    };

    class hlc_optic_VOMZ : optic_lrps {
        dlc = "Niarms_Core";
        author = "Toadie";
        descriptionshort = "VOMZ Pilad P3 <br />Magnification: 3.5x";
        model = "hlc_core\mesh\accessories\sights\VOMZ_p3.p3d";
        displayname = "VOMZ Pilad P3(2D)";
        picture = "\hlc_core\tex\ui\gear_vomz_ca";
        inertia = 0.05;
        class ItemInfo : ItemInfo {
            mass = 11;
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    opticsDisplayName = "WFOV";
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.249/3.5;
                    opticsZoomMax = 0.249/3.5;
                    opticsZoomInit = 0.249/3.5;
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600,700, 800 };
                    discreteDistanceInitIndex = 3;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "opticview";
                    modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\VOMZ_PU_3,5x" };
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron : Snip {
                    opticsID = 2;
                    opticsDisplayName = "";
                    useModelOptics = 0;
                    opticsPPEffects[] = { "", "" };
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    __OPTICSZOOM_1X;
                    memoryPointCamera = "eye2";
                    visionMode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class hlc_optic_VOMZ3d:hlc_optic_VOMZ
    {
    author = "Toadie";
    displayname = "VOMZ Pilad P3";
        class ItemInfo : ItemInfo {
            class OpticsModes {
                class Snip {
                    opticsID = 1;
                    opticsDisplayName = "WFOV";
                    useModelOptics = 0;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsZoomMin = 0.249/3.5;
                    opticsZoomMax = 0.249/3.5;
                    opticsZoomInit = 0.249/3.5;
                    discreteDistance[] = { 100, 200, 300, 400, 500, 600,700, 800 };
                    discreteDistanceInitIndex = 3;
                    distanceZoomMin = 300;
                    distanceZoomMax = 1200;
                    memoryPointCamera = "eye";
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 0;
                    cameraDir = "";
                };
                class Iron : Snip {
                    opticsID = 2;
                    opticsDisplayName = "";
                    useModelOptics = 0;
                    opticsPPEffects[] = { "", "" };
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    __OPTICSZOOM_1X;
                    memoryPointCamera = "eye2";
                    visionMode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    class optic_aco;

    class hlc_optic_HensoldtZO_Hi : optic_aco
    {
        dlc = "Niarms_Core";
        scope = public;
        author = "Toadie";
        descriptionshort = "Hensoldt(Zeiss) ZO 4x30 Combat Optic <br />Magnification: 4x";
        displayname = "Hensoldt ZO (Riser)";
        picture = "\hlc_core\tex\ui\gear_zo-hi_ca";
        weaponInfoType = "RscWeaponZeroing";
        model = "hlc_core\mesh\accessories\sights\ZO_HI.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 6;
            __OPTIC_DMR;
            modelOptics = "\hlc_core\mesh\accessories\sights\reticles\ZO_reticle.p3d";
            class OpticsModes
            {
                class Snip
                {
                    useModelOptics = 0;
                    cameradir = "look_dir";
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 200 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memoryPointCamera = "eye";
                    modelOptics[] = { "\hlc_core\mesh\accessories\sights\reticles\ZO_reticle.p3d" };
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
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
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        inertia = 0.06;
        tmr_optics_enhanced = 0;
    };
    class hlc_optic_HensoldtZO_Hi_2D : hlc_optic_HensoldtZO_Hi
    {
        descriptionshort = "Hensoldt(Zeiss) ZO 4x30 Combat Optic <br />Magnification: 4x";
        displayname = "Hensoldt ZO (Riser/2D)";
        class ItemInfo :ItemInfo
        {
            class OpticsModes :OpticsModes
            {
                class Snip : Snip
                {
                    useModelOptics = 1;
                };
                class Kolimator : Kolimator{};
            };
        };
    };
    class hlc_optic_HensoldtZO_Hi_Docter : hlc_optic_HensoldtZO_Hi
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayname = "Hensoldt ZO (Riser/RDS)";
        picture = "\hlc_core\tex\ui\gear_zo-hi-doc_ca";
        model = "hlc_core\mesh\accessories\sights\ZO_Hi_Docter.p3d";
    };
    class hlc_optic_HensoldtZO_Hi_Docter_2D : hlc_optic_HensoldtZO_Hi_2D
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayname = "Hensoldt ZO (Riser/RDS/2D)";
        picture = "\hlc_core\tex\ui\gear_zo-hi-doc_ca";
        model = "hlc_core\mesh\accessories\sights\ZO_Hi_Docter.p3d";
    };
    class hlc_optic_HensoldtZO_Lo :hlc_optic_HensoldtZO_Hi
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayname = "Hensoldt ZO";
        picture = "\hlc_core\tex\ui\gear_zo-lo_ca";
        model = "hlc_core\mesh\accessories\sights\ZO_Lo.p3d";
    };
    class hlc_optic_HensoldtZO_Lo_2D : hlc_optic_HensoldtZO_Hi_2D
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayname = "Hensoldt ZO (2D)";
        picture = "\hlc_core\tex\ui\gear_zo-lo_ca";
        model = "hlc_core\mesh\accessories\sights\ZO_Lo.p3d";
    };
    class hlc_optic_HensoldtZO_lo_Docter : hlc_optic_HensoldtZO_lo
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayname = "Hensoldt ZO (RDS)";
        picture = "\hlc_core\tex\ui\gear_zo-lo-doc_ca";
        model = "hlc_core\mesh\accessories\sights\ZO_lo_Docter.p3d";
    };
    class hlc_optic_HensoldtZO_lo_Docter_2D : hlc_optic_HensoldtZO_lo_2D
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        displayname = "Hensoldt ZO (RDS/2D)";
        picture = "\hlc_core\tex\ui\gear_zo-lo-doc_ca";
        model = "hlc_core\mesh\accessories\sights\ZO_lo_Docter.p3d";
    };

    class hlc_optic_KernBase : optic_aco
    {
        dlc = "Niarms_Core";
        scope = public;
        author = "Toadie";
        descriptionshort = "Kern 4x24 Zielfernrohr <br />Magnification: 4x";
        displayname = "Kern AARAU 4x24";
        picture = "hlc_core\tex\ui\gear_aarau_x_ca";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 8.8;
            __OPTIC_DMR;
            modelOptics = "\hlc_core\mesh\accessories\sights\reticles\AARAU_optics.p3d";
            class OpticsModes
            {
                class Snip
                {
                    useModelOptics = 1;
                    cameradir = "";
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    discreteDistance[] = { 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800 };
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 200;
                    distanceZoomMax = 800;
                    memoryPointCamera = "eye2";
                    modelOptics[] = {"\hlc_core\mesh\accessories\sights\reticles\AARAU_optics.p3d"};
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
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
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        inertia = 0.04;
        tmr_optics_enhanced = 0;
    };
 class hlc_optic_ZF4xBase : optic_aco
    {
        dlc = "Niarms_Core";
        scope = public;
        author = "Toadie";
        descriptionshort = "Hensoldt ZF 4x<br />Magnification: 4x";
        displayname = "FN STANAG 4x28";
        picture = "\hlc_core\tex\ui\gear_fnstanag_ca";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 7.7;
            opticType = 2;
            optics = 1;
            modelOptics = "hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics";
            class OpticsModes
            {
                class Snip
                {
                    useModelOptics = 1;
                    opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };
                    discreteDistance[] = { 100,200, 300, 400, 500, 600};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 600;
                    modelOptics[] = { "hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics" };
                    memoryPointCamera = "eye";
                    cameradir = "";
                    opticsZoomMin = 0.06225;
                    opticsZoomMax = 0.06225;
                    opticsZoomInit = 0.06225;
                    visionMode[] = { "Normal" };
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
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
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                    discreteDistance[] = { 100 };
                    discreteDistanceInitIndex = 0;
                };
            };
        };
        inertia = 0.04;
        tmr_optics_enhanced = 0;
    };
    class hlc_optic_ZF95Base : optic_lrps
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        descriptionshort = "Kahles ZF95 with NATO Rangefinding Reticle<br />Magnification: 6x";
        displayname = "Kahles ZF95";
        model = "hlc_core\mesh\accessories\sights\ZF95.p3d";
        picture = "\hlc_core\tex\ui\gear_ZF95_ca";
        scope = public;
         __OPTIC_DMR;
         inertia = 0.052;
         class ItemInfo : ItemInfo
         {
             mass = 14.54;
             class OpticsModes
             {
                 class Snip
                 {
                     opticsID = 1;
                     opticsDisplayName = "WFOV";
                     useModelOptics = 1;
                     opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
                     opticsZoomMin = 0.249 / 6;
                     opticsZoomMax = 0.249 / 6;
                     opticsZoomInit = 0.0249;
                     discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
                     discreteDistanceInitIndex = 4;
                     distanceZoomMin = 300;
                     distanceZoomMax = 1200;
                     memoryPointCamera = "eye";
                     modelOptics[] = {"hlc_core\mesh\accessories\sights\reticles\NATORangefinder_ZF95_6x"};
                     visionMode[] = {"Normal"};
                     opticsFlare = 1;
                     opticsDisablePeripherialVision = 1;
                     cameraDir = "";
                 };
                 class Iron : Snip
                 {
                     opticsID = 2;
                     opticsDisplayName = "";
                     useModelOptics = 0;
                     opticsPPEffects[] = {"", ""};
                     opticsFlare = 0;
                     opticsDisablePeripherialVision = 0;
                     __OPTICSZOOM_1X;
                     memoryPointCamera = "eye2";
                     visionMode[] = {};
                     discreteDistance[] = {100};
                     discreteDistanceInitIndex = 0;
                 };
             };
        };
    };

    class bipod_01_F_snd : ItemCore{ class ItemInfo; };
    class HLC_bipod_UTGShooters :bipod_01_F_snd
    {
        dlc = "Niarms_FN3011";
        displayname = "UTG Lightweight";
        model = "hlc_core\mesh\accessories\bipod\UTG\UTG.p3d";
        descriptionshort = "UTG Shooter's Sniper Bipod, Steel Feet";
    };
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
        displayname = "Charm- Eurojank";
        model = "hlc_core\mesh\accessories\acc\charms\eurojank.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_eurc_ca.paa";
        descriptionshort = "Charm promoting the concept of Eurojank.";
    };
    class HLC_Charm_NIArmsbacker :HLC_Charm_base
    {
        author = "Toadie";
        displayname = "Charm- NIArms Backer";
        model = "hlc_core\mesh\accessories\acc\charms\niarms.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_niac_ca.paa";
        descriptionshort = "Charm";
    };
    class HLC_Charm_NIArmsbacker_dirty :HLC_Charm_base
    {
        author = "Toadie";
        displayname = "Charm- NIArms Backer(Dirty)";
        model = "hlc_core\mesh\accessories\acc\charms\niarms_dirty.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_niac_ca.paa";
        descriptionshort = "Charm";
    };
    class HLC_Charm_Izhmash :HLC_Charm_base
    {
        author = "Toadie";
        displayname = "Charm- Izhmash";
        model = "hlc_core\mesh\accessories\acc\charms\izhmash.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_izhmash_ca.paa";
        descriptionshort = "Charm of the Izhmash Logo";
    };
    class HLC_Charm_Herstal :HLC_Charm_base
    {
        author = "Toadie";
        displayname = "Charm- FN Herstal";
        model = "hlc_core\mesh\accessories\acc\charms\FNH.p3d";
        picture = "\hlc_core\tex\UI\cha\gear_herstal_ca.paa";
        descriptionshort = "Charm of the Izhmash Logo";
    };
    //V is for Vanilla. 
    class HLC_optic_DocterV : optic_Arco {
        dlc = "Niarms_Core";
        author = "Toadie";
        descriptionshort = "Docter Red Dot Sight For Pistols<br />Magnification: None";
        displayname = "Docter RDS";
        model = "hlc_core\mesh\accessories\sights\docter.p3d";
        picture = "\hlc_core\tex\UI\gear_docter_ca.paa";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 4;
            modelOptics = "\A3\Weapons_F\empty";
            optics = 0;
            class OpticsModes
            {
                class ACO
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "RDeye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 50;
                    distanceZoomMax = 50;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = { "Default" };
                };
            };
        };
        tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
    };
    class HLC_optic_RomeoV : optic_Arco {
        dlc = "Niarms_Core";
        author = "Toadie";
        descriptionshort = "Docter Red Dot Sight For Pistols<br />Magnification: None";
        displayname = "Romeo1 RDS";
        model = "hlc_core\mesh\accessories\sights\romeo1.p3d";
        picture = "\hlc_core\tex\UI\gear_romeo1_ca.paa";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 4;
            modelOptics = "\A3\Weapons_F\empty";
            optics = 0;
            class OpticsModes
            {
                class ACO
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.25;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "RDeye";
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    distanceZoomMin = 50;
                    distanceZoomMax = 50;
                    cameraDir = "";
                    visionMode[] = {};
                    opticsPPEffects[] = { "Default" };
                };
            };
        };
        tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
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
