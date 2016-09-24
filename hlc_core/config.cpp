#include "script_macros.hpp"

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

class CfgPatches {
    class hlcweapons_core {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F"};
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        version="v1.05";
        author="toadie";
    };
};

class CfgMovesBasic {
     class DefaultDie;

     class ManActions {
        HLC_GestureReloadAK = "HLC_GestureReloadAK";
        HLC_GestureReloadM60= "HLC_GestureReloadM60";
        HLC_GestureReloadSMLE= "HLC_GestureReloadSMLE";
        HLC_GestureReloadBoltSMLE= "HLC_GestureReloadBoltSMLE";
        HLC_GestureReloadAR15_BAD_WS="HLC_GestureReloadAR15_BAD_WS";
        HLC_GestureReloadAR15_BAD_DR="HLC_GestureReloadAR15_BAD_DR";
        HLC_GestureReloadAR15_catch_WS="HLC_GestureReloadAR15_catch_WS";
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
    };

    class Actions {
        class RifleBaseStandActions;
        class RifleAdjustProneBaseActions;

        class NoActions : ManActions {
            HLC_GestureReloadAK[] = {"HLC_GestureReloadAK", "Gesture"};
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60", "Gesture"};
            HLC_GestureReloadSMLE[] =  {"HLC_GestureReloadSMLE", "Gesture"};
            HLC_GestureReloadBoltSMLE[] = {"HLC_GestureReloadBoltSMLE", "Gesture"};
            HLC_GestureReloadAR15_BAD_WS[]= {"HLC_GestureReloadAR15_BAD_WS", "Gesture"};
            HLC_GestureReloadAR15_BAD_DR[]= {"HLC_GestureReloadAR15_BAD_dr", "Gesture"};
            HLC_GestureReloadAR15_catch_WS[]= {"HLC_GestureReloadAR15_catch_ws", "Gesture"};
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
        };

        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60_Prone","Gesture"};
            HLC_GestureReloadRPK[]= {"HLC_GestureReloadRPK_Prone","Gesture"};
            HLC_GestureReloadAK[]= {"HLC_GestureReloadAK_Prone","Gesture"};
            HLC_GestureReloadAK12[]= {"HLC_GestureReloadAK12_Prone", "Gesture"};
            HLC_GestureReloadAKLONG[] = {"HLC_GestureReloadAK12_Prone","Gesture"};
            HLC_GestureReloadG3SG1[] = {"HLC_GestureReloadG3SG1_prone","Gesture"};
            HLC_GestureReloadAR15_BAD_WS[] = {"HLC_GestureReloadAR15_Prone","Gesture"};
            HLC_GestureReloadAR15_BAD_DR[] = {"HLC_GestureReloadAR15_Prone","Gesture"};
            HLC_GestureReloadAR15_catch_WS[] = {"HLC_GestureReloadAR15_Prone","Gesture"};
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
        };

        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60_Context","Gesture"};
            HLC_GestureReloadAK[] = {"HLC_GestureReloadAK_Context","Gesture"};
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
            HLC_GestureReloadAR15_BAD_DR[] = {"HLC_GestureReloadAR15_BAD_DR_Context","Gesture"};
            HLC_GestureReloadAR15_catch_WS[] = {"HLC_GestureReloadAR15_catch_WS_Context","Gesture"};
            HLC_GestureReloadAR15_catch_DR[] = {"HLC_GestureReloadAR15_catch_DR_Context","Gesture"};
            HLC_GestureReloadAUG[] = { "HLC_GestureReloadAUG_context", "Gesture" };
            HLC_GestureReloadAUGPara[] = { "HLC_GestureReloadAUGPara_context", "Gesture" };
            HLC_GestureSwapBarrelAUG[] = { "HLC_GestureSwapBarrelAUG_context", "Gesture" };
        };

        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60_Context","Gesture"};
            HLC_GestureReloadAK[] = {"HLC_GestureReloadAK_Context","Gesture"};
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
            HLC_GestureReloadAR15_BAD_DR[] = {"HLC_GestureReloadAR15_BAD_DR_Context","Gesture"};
            HLC_GestureReloadAR15_catch_WS[] = {"HLC_GestureReloadAR15_catch_WS_Context","Gesture"};
            HLC_GestureReloadAR15_catch_DR[] = {"HLC_GestureReloadAR15_catch_DR_Context","Gesture"};
            HLC_GestureReloadAUG[] = { "HLC_GestureReloadAUG_context", "Gesture" };
            HLC_GestureReloadAUGPara[] = { "HLC_GestureReloadAUGPara_context", "Gesture" };
            HLC_GestureSwapBarrelAUG[] = { "HLC_GestureSwapBarrelAUG_context", "Gesture" };
        };

        class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadM60[] = {"HLC_GestureReloadM60","Gesture"};
            HLC_GestureReloadAK[] = {"HLC_GestureReloadAK","Gesture"};
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
            HLC_GestureReloadAR15_BAD_DR[]= {"HLC_GestureReloadAR15_BAD_dr", "Gesture"};
            HLC_GestureReloadAR15_catch_WS[]= {"HLC_GestureReloadAR15_catch_ws", "Gesture"};
            HLC_GestureReloadAR15_catch_DR[]= {"HLC_GestureReloadAR15_catch_dr", "Gesture"};
            HLC_GestureReloadAUG[] = { "HLC_GestureReloadAUG", "Gesture" };
            HLC_GestureReloadAUGPara[] = { "HLC_GestureReloadAUGPara", "Gesture" };
            HLC_GestureSwapBarrelAUG[] = { "HLC_GestureSwapBarrelAUG", "Gesture" };
        };
    };
};

class CfgGesturesMale {
    class Default;
    class GestureReloadBase;

    class States {
        class HLC_GestureReloadAK : Default {
            file="\hlc_core\animation\gesture\ak_reload.rtm";
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
            file="\hlc_core\animation\gesture\reload_ak_prone.rtm";
            looped=0;
            speed=0.29;
            mask="handsWeapon";
            // mask="empty";
            headBobStrength=0.02;
            headBobMode=2;
            leftHandIKBeg = false;
            leftHandIKCurve[] = {0, 1, 0.075, 0, 0.85, 0, 0.93, 1};
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAK_Context : HLC_GestureReloadAK {
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
            file="hlc_core\animation\gesture\reload_ar15_BAD_workspace.rtm";
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
    };
};

/*
BALLISTIC DATA PER-BULLET

NOTES -

caliber=(mm/((15*speed)/1000))

mm =     mm st steel at 200m/2.5
Speed  = speed at 200m
*/

class CfgAmmo {
    class B_762x51_Ball;
    class B_556x45_Ball;
    class B_127x99_Ball;
    class B_127x99_Ball_Tracer_Red;
    class B_12Gauge_Pellets;
    class BoundingMineBase;
    class ShotDeployBase;
    class SubmunitionBase;
    class G_40mm_HE;
    
    class VOG25P_Range_Ammo : BoundingMineBase {
        hit = 20;
        indirectHit = 20;
        indirectHitRange = 20;
        model = "\A3\weapons_f\ammo\UGL_slug";
        mineModelDisabled = "\A3\weapons_f\ammo\UGL_slug";
        defaultMagazine = "VOG25P_test";
        soundHit[] = { "A3\Sounds_F\weapons\mines\mine_debris_3", 3.1622777, 1, 1000 };
        explosionEffects = "BoundingMineExplosion";
        CraterEffects = "BoundingMineCrater";
        mineJumpEffects = "MineJumpEffect";
        whistleDist = 60;
        cost = 300;
        mineBoundingTime = 0.3;
        mineBoundingDist = 2.0;
        mineInconspicuousness = 999;
        mineTrigger = "RangeTriggerBounding";
        triggerWhenDestroyed = 1;
    };
    class VOG25P_Deployrange : ShotDeployBase {
        submunitionAmmo = "VOG25P_Range_Ammo";
        typicalSpeed = 185;
        deflecting = 5;
        airFriction = -0.001;
    };
    class VOG25P_SubMunition : SubmunitionBase {
        submunitionAmmo = "VOG25P_Deployrange";
        submunitionConeType[] = { "randomcenter", 1 };
        submunitionConeAngle = 30;
        triggerDistance = 100;
        cost = 10;
        whistleDist = 16;
        typicalSpeed = 185;
        deflecting = 5;
        airFriction = -0.001;
        visibleFire = 6;
        audibleFire = 6;
        visibleFireTime = 3;
        muzzleEffect = "";
        class CamShakeFire {
            power = "(0^0.25)";
            duration = "((round (0^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((0^0.5)*8)";
        };
        class CamShakePlayerFire {
            power = 0.02;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class HLC_556NATO_EPR : B_556x45_Ball {
        hit = 8.114581;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        typicalSpeed = 905.256;
        airFriction = -0.0011543788;
        caliber = 0.855;
        deflecting = 21;
        visibleFire = 3;
        audibleFire = 7;
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = { -27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75 };
        ACE_ballisticCoefficients[] = { 0.151 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900 };
        ACE_barrelLengths[] = { 210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6 };
    };
    class HLC_556NATO_EPR_Tracer : HLC_556NATO_EPR {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgOnly = 0;
    };
    class HLC_556NATO_SOST : B_556x45_Ball {
        hit = 9.038702;
        typicalSpeed = 857.0976;
        airFriction = -0.0012817576;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.755;
        deflecting = 18;
        visibleFire = 3;
        audibleFire = 5.5;
        AB_caliber=0.224;
        AB_bulletLength=0.906;
        AB_bulletMass=62;
        AB_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        AB_ballisticCoefficients[]={0.307};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ASM";
        AB_dragModel=1;
        AB_muzzleVelocities[]={780, 886, 950};
        AB_barrelLengths[]={10, 15.5, 20};
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.307 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 780, 886, 950 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };

    class HLC_556NATO_SPR : B_556x45_Ball {
        hit = 11.5702505;
        typicalSpeed = 868.68;
        airFriction = -0.0010867938;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.615;
        deflecting = 16;
        visibleFire = 2.5;
        audibleFire = 5;
        AB_caliber=0.224;
        AB_bulletLength=0.906;
        AB_bulletMass=77;
        AB_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        AB_ballisticCoefficients[]={0.361};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ASM";
        AB_dragModel=1;
        AB_muzzleVelocities[]={624, 816, 832, 838};
        AB_barrelLengths[]={7.5, 14.5, 18, 20};
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.9896;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.361 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 624, 816, 832, 838 };
        ACE_barrelLengths[] = { 190.5, 368.3, 457.2, 508.0 };
    };
    class B_556x45_Ball_Tracer_Red;
    class HLC_B_556x45_Ball_Tracer_Dim : B_556x45_Ball_Tracer_Red {
        nvgOnly = 1;
    };
    class HLC_300Blackout_Ball : B_556x45_Ball {
        airFriction = -0.001084469;
        airlock = 1;
        audiblefire = 8;
        caliber = 0.615;
        deflecting = 20;
        cartridge = "FxCartridge_762";
        cost = 1.2;
        hit = 9.4657492618;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        typicalspeed = 548.64;
        visiblefire = 5;
        class CamShakeExplode {
            distance = "((6^0.5)*3)";
            duration = "((round (6^0.5))*0.2 max 0.2)";
            frequency = 20;
            power = "(6^0.5)";
        };
        class CamShakeHit {
            distance = 1;
            duration = "((round (6^0.25))*0.2 max 0.2)";
            frequency = 20;
            power = 6;
        };
        AB_caliber=0.308;
        AB_bulletLength=1.118;
        AB_bulletMass=147;
        AB_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        AB_ballisticCoefficients[]={0.398};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ICAO";
        AB_dragModel=1;
        AB_muzzleVelocities[]={559, 609, 625};
        AB_barrelLengths[]={6, 16, 20};
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.397;
        ACE_bulletMass = 9.5256;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.398 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 559, 609, 625 };
        ACE_barrelLengths[] = { 152.4, 406.4, 508.0 };
    };
    class HLC_300Blackout_SMK : HLC_300Blackout_Ball {
        airFriction = -0.000327578;
        airlock = 1;
        caliber = 0.6;
        cartridge = "FxCartridge_762";
        cost = 1.2;
        hit = 6.887368253;
        deflecting = 18;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        typicalSpeed = 312;
        visibleFire = 0.55;
        audibleFire = 0.65;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 14.256;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.608 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 300, 320, 340 };
        ACE_barrelLengths[] = { 228.6, 406.4, 508.0 };
        AB_caliber=0.308;
        AB_bulletLength=1.489;
        AB_bulletMass=220;
        AB_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        AB_ballisticCoefficients[]={0.608};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ICAO";
        AB_dragModel=1;
        AB_muzzleVelocities[]={300, 320, 340};
        AB_barrelLengths[]={9, 16, 20};
    };

    class HLC_762x39_Ball : HLC_300Blackout_Ball {
        airFriction = -0.00180;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green" ;
        tracerStartTime = 0.073;
        tracerEndTime = 1.7;
        hit = 10.17;
        typicalspeed = 730;
        nvgonly = 1;
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 7.9704;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.275 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 650, 716, 750 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
        class CamShakeExplode {
            distance = "((6^0.5)*3)";
            duration = "((round (6^0.5))*0.2 max 0.2)";
            frequency = 20;
            power = "(6^0.5)";
        };
        class CamShakeHit {
            distance = 1;
            duration = "((round (6^0.25))*0.2 max 0.2)";
            frequency = 20;
            power = 6;
        };
    };

    class HLC_762x39_Tracer : HLC_762x39_Ball {
        nvgonly = 0;
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 7.5816;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.275 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 650, 716, 750 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
    };


    //7.62x51mm
    //Ballistics by Ruthberg, CO ACE3
    class HLC_762x51_ball : B_762x51_Ball { 
        airFriction = -0.00100957;
        typicalSpeed = 833;
        hit = 9;
        tracerScale = 1.2; //0.6;
        tracerStartTime = 0.073;  // Based on the British L5A1 which burns out to 1000m 
        tracerEndTime = 2.15957;  // Time in seconds calculated with ballistics calculator
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.2 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 700, 800, 820, 833, 845 };
        ACE_barrelLengths[] = { 254.0, 406.4, 508.0, 609.6, 660.4 };
    };
    class B_762x51_Tracer_Yellow;
    class HLC_B_762x51_Tracer_Dim : B_762x51_Tracer_Yellow {
        nvgOnly = 1;
    };
    //Ballistics by Ruthberg, CO ACE3
    class HLC_762x51_MK316_20in : HLC_762x51_ball {
        airFriction = -0.00082029;
        caliber = 1.8;
        hit = 16;
        typicalSpeed = 790;
        ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 11.34;
        ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
        ACE_ballisticCoefficients[] = { 0.243 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 775, 790, 805, 810 };
        ACE_barrelLengths[] = { 406.4, 508.0, 609.6, 660.4 };
    };
        //Ballistics by Ruthberg, CO ACE3
        class HLC_762x51_Barrier : HLC_762x51_ball {
        airFriction = -0.00102338;
        caliber = 1.5;
        hit = 14;
        typicalSpeed = 900;
        ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 8.424;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.377 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 838, 892, 910 };
        ACE_barrelLengths[] = { 330.2, 406.4, 508.0 };
    };
        class HLC_762x51_BTSub : HLC_762x51_ball {
        airFriction = -0.00049899;
        caliber = 1;
        hit = 6;
        typicalSpeed = 320;
        ACE_caliber = 7.823;
        ACE_bulletLength = 34.036;
        ACE_bulletMass = 12.96;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.235 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 305, 325, 335, 340 };
        ACE_barrelLengths[] = { 406.4, 508.0, 609.6, 660.4 };
    };
    class HLC_762x51_tracer : HLC_762x51_ball {
        airfriction = -0.00024;
        caliber = 1.6;
        cartridge = "FxCartridge_762";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 0;
        tracerendtime = 1.4;
        tracerscale = 1;
        tracerstarttime = 0.06;
    };
    class HLC_762x54_ball : HLC_762x51_ball {
        hit = 13;
        typicalSpeed= 828;
        airfriction = -0.00125;
        caliber = 1.3;
        cost = 1.2;
        deflecting = 20;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_762";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        ACE_caliber = 7.925;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.8496;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.4 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 700, 800, 820, 833 };
        ACE_barrelLengths[] = { 406.4, 508.0, 609.6, 660.4 };
        AB_caliber=0.312;
        AB_bulletLength=1.14;
        AB_bulletMass=152;
        AB_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        AB_ballisticCoefficients[]={0.4};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ICAO";
        AB_dragModel=1;
        AB_muzzleVelocities[]={700, 800, 820, 833};
        AB_barrelLengths[]={16, 20, 24, 26};
    };

    //7,62x54mm R
    class HLC_762x54_tracer : HLC_762x51_tracer {
        airfriction = -0.00125;
        caliber = 1.3;
        cartridge = "FxCartridge_762";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 0;
        tracerendtime = 1.7;
        tracerscale = 1;
        tracerstarttime = 0.02;
        ACE_caliber = 7.925;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.6552;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.395 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 680, 750, 798, 800 };
        ACE_barrelLengths[] = { 406.4, 508.0, 609.6, 660.4 };
        AB_caliber=0.312;
        AB_bulletLength=1.14;
        AB_bulletMass=149;
        AB_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        AB_ballisticCoefficients[]={0.395};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ICAO";
        AB_dragModel=1;
        AB_muzzleVelocities[]={680, 750, 798, 800};
        AB_barrelLengths[]={16, 20, 24, 26};
    };
    class HLC_762x54_AP : HLC_762x54_ball {
        hit = 16.5;
        caliber = 1.75;
        typicalSpeed= 828;
        airfriction = -0.00125;
        deflecting = 20;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_762";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
    };

    class HLC_303Brit_B : B_556x45_Ball {
        airfriction=-0.00091623899;
        caliber = 1.35;
        typicalSpeed= 800;
        maxspeed =  900;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 12;
        airlock = 1;
        ACE_caliber = 7.899;
        ACE_bulletLength = 31.166;
        ACE_bulletMass = 11.2752;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.499, 0.493, 0.48 };
        ACE_velocityBoundaries[] = { 671, 549 };
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 748, 761, 765 };
        ACE_barrelLengths[] = { 508.0, 609.6, 660.4 };
        AB_caliber=0.311;
        AB_bulletLength=1.227;
        AB_bulletMass=174;
        AB_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        AB_ballisticCoefficients[]={0.499, 0.493, 0.48};
        AB_velocityBoundaries[]={671, 549};
        AB_standardAtmosphere="ASM";
        AB_dragModel=1;
        AB_muzzleVelocities[]={748, 761, 765};
        AB_barrelLengths[]={20, 24, 26};
    };
    class HLC_303Brit_T : HLC_303Brit_B {
        caliber = 1;
        typicalSpeed= 725;
        maxspeed =  900;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
        tracerendtime = 1.4;
        tracerscale = 1;
        tracerstarttime = 0.02;
        hit= 12;
        airlock = 1;
    };
    class HLC_303Brit_AP : HLC_303Brit_B {
        airfriction = -0.00211;
        caliber = 1.5;
        typicalSpeed= 844;
        maxspeed =  900;
        hit=15;
        indirecthit = 3;
        indirecthitrange = 0.1;
        airlock = 1;
    };

    //7.92 Mauser
    class HLC_792x57_Ball : HLC_303Brit_B {
        airfriction = -0.000595;
        caliber = 1.4;
        typicalSpeed=762;
        maxspeed =  820;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
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
    class HLC_792x57_Tracer : HLC_792x57_Ball {
        airfriction = -0.000795;
        caliber = 1.4;
        typicalSpeed=762;
        maxspeed =  820;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
    };
    class HLC_792x57_AP : HLC_792x57_Ball {
        airfriction = -0.000395;
        caliber = 1.8;
        typicalSpeed= 800;
        maxspeed =  820;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
        hit=21;
        indirecthit = 5;
        indirecthitrange = 0.1;
    };

    //Mannlicher-Carcano
    class HLC_542x42_ball : HLC_303Brit_B {
        airfriction = -3.8571428571428571428571428571429e-4;
        caliber = 0.8;
        typicalSpeed= 700;
        maxspeed = 820;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 10;
        airlock = 1;
    };

    class HLC_542x42_Tracer : HLC_303Brit_B {
        airfriction = -3.8571428571428571428571428571429e-4;
        caliber = 0.8;
        typicalSpeed= 700;
        maxspeed = 820;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 10;
        airlock = 1;
    };


    //5.45x39mm
    class FH_545x39_Ball : B_556x45_Ball {
        airFriction = -0.001162;
        caliber = 0.6;
        deflecting = 18;
        cost=1;
        typicalSpeed = 915;
        hit = 7;
        indirecthit=0;
        indirecthitrange=0;
        visibleFire = 3;
        audibleFire = 7;
        maxspeed=950;
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly=1;
        tracerscale=1;
        tracerStartTime=0.072999999;
        tracerEndTime=1.35;
        AB_caliber=0.220;
        AB_bulletLength=0.85;
        AB_bulletMass=52.9;
        AB_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        AB_ballisticCoefficients[]={0.168};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ASM";
        AB_dragModel=7;
        AB_muzzleVelocities[]={780, 880, 920};
        AB_barrelLengths[]={10, 16.3, 20};
        ACE_caliber = 5.588;
        ACE_bulletLength = 21.59;
        ACE_bulletMass = 3.42792;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.168 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 780, 880, 920 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
    };
    class FH_545x39_Tracer : FH_545x39_Ball {
        airFriction = -0.001162;
        caliber = 0.6;
        deflecting = 18;
        hit = 7;
        cost = 1;
        indirecthit = 0;
        indirecthitrange = 0;
        maxspeed =  950;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 0;
        tracerscale = 1;
        tracerStartTime = 0.073;
        tracerEndTime = 1.35;
    };
    class FH_545x39_7u1 : FH_545x39_Ball {
        hit = 3.085222389;
        indirectHit = 0;
        indirectHitRange = 0;
        visibleFire = 0.02;
        audibleFire = 0.07;
        visibleFireTime = 2;
        cost = 1;
        typicalSpeed = 303;
        airfriction = -0.0005447;
        caliber = 0.485;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 0;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        ACE_bulletMass = 5.184;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_muzzleVelocities[] = { 260, 303, 320 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
        AB_bulletMass=80;
        AB_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        AB_muzzleVelocities[]={260, 303, 320};
        AB_barrelLengths[]={10, 16.3, 20};
    };
    class FH_545x39_EP : FH_545x39_Ball {
        airfriction=-0.0014095089;
        typicalSpeed = 890;
        caliber = 1.49;
        hit=7.7088284;
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly=0;
        tracerendtime=1.14;
        tracerscale=1;
        tracerstarttime=0.07;
        deflecting = 20;
        visibleFire = 3;
        audibleFire = 7;
    };


    // 5.7x28mm
    class HLC_57x28mm_JHP : FH_545x39_Ball {
        airfriction = -6.1538461538461538461538461538462e-4;
        caliber = 0.6;
        cost = 1;
        deflecting = 10;
        typicalSpeed=720;
        hit = 8;
        indirecthit = 0;
        indirecthitrange = 0;
        maxspeed =  850;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        ACE_caliber = 5.69;
        ACE_bulletLength = 12.573;
        ACE_bulletMass = 1.8144;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.144 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 550, 625, 720 };
        ACE_barrelLengths[] = { 101.6, 152.4, 262.89 };
    };
    class HLC_57x28mm_FMJ : HLC_57x28mm_JHP {
        caliber = 0.55;
        hit = 10;
    };

    class HLC_9x19_Ball : B_556x45_Ball {
        airfriction = -0.00149;
        caliber = 0.33;
        cost = 1;
        deflecting = 20;
        typicalSpeed=352;
        hit = 5;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        ACE_caliber = 9.017;
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.165 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 340, 370, 400 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber=0.355;
        AB_bulletLength=0.610;
        AB_bulletMass=124;
        AB_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        AB_ballisticCoefficients[]={0.165};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ASM";
        AB_dragModel=1;
        AB_muzzleVelocities[]={340, 370, 400};
        AB_barrelLengths[]={4, 5, 9};
    };
    class HLC_9x19_M882_SMG : B_556x45_Ball {
        airFriction = -0.002393437;
        caliber = 0.531;
        cost = 1;
        deflecting = 28;
        typicalSpeed = 423;
        hit = 5.359214173;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        ACE_caliber = 9.017;
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.165 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 340, 370, 400 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber = 0.355;
        AB_bulletLength = 0.610;
        AB_bulletMass = 124;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.165 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 340, 370, 400 };
        AB_barrelLengths[] = { 4, 5, 9 };
    };
    class HLC_9x19_GoldDot : HLC_9x19_Ball {
        airFriction = -0.002440235;
        caliber = 0.385;
        deflecting = 25;
        hit = 8.790347689;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        typicalSpeed = 416;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        AB_muzzleVelocities[]={350, 380, 420};
        ACE_muzzleVelocities[] = { 350, 380, 420 };
    };
    class HLC_9x19_Subsonic : HLC_9x19_Ball {
        airFriction = -0.00145426;
        caliber = 0.334;
        deflecting = 21;
        visibleFire = 1;
        audibleFire = 2;
        hit = 7.670762747;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        typicalSpeed = 333;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        AB_muzzleVelocities[]={300, 320, 340};
        ACE_muzzleVelocities[] = { 300, 320, 340 };
    };
    class HLC_10mm_FMJ : HLC_9x19_Ball {
        airfriction = -0.000846257;
        caliber = 0.531;
        cost = 1;
        deflecting = 20;
        typicalSpeed=313.944;
        hit = 7.241678536;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        AB_caliber=0.400;
        AB_bulletLength=0.68;
        AB_bulletMass=170;
        AB_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        AB_ballisticCoefficients[]={0.17};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ASM";
        AB_dragModel=1;
        AB_muzzleVelocities[]={340, 370, 400};
        AB_barrelLengths[]={4, 5, 9};
        ACE_caliber = 12.7;
        ACE_bulletLength = 19.406;
        ACE_bulletMass = 10.692;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.189 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 360, 400, 430 };
        ACE_barrelLengths[] = { 101.6, 117.094, 228.6 };
    };
    class HLC_10mm_JHP : HLC_10mm_FMJ {
        airfriction = -0.000846257;
        caliber = 0.33;
        cost = 1;
        deflecting = 20;
        typicalSpeed=313.944;
        hit = 7.10.862517804;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        AB_caliber=0.400;
        AB_bulletLength=0.68;
        AB_bulletMass=180;
        AB_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        AB_ballisticCoefficients[]={0.17};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ASM";
        AB_dragModel=1;
        AB_muzzleVelocities[]={340, 370, 313};
        AB_barrelLengths[]={4, 5, 9};
    };


    //.45ACP
    class HLC_45ACP_Ball : B_556x45_Ball {
        airfriction = -0.001;
        audiblefire = 18;
        caliber = 0.33;
        cost = 5;
        deflecting = 20;
        typicalSpeed=260;
        hit = 9;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        visiblefire = 16;
        ACE_caliber = 11.481;
        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.195 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 230, 250, 285 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber=0.452;
        AB_bulletLength=0.68;
        AB_bulletMass=230;
        AB_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        AB_ballisticCoefficients[]={0.195};
        AB_velocityBoundaries[]={};
        AB_standardAtmosphere="ASM";
        AB_dragModel=1;
        AB_muzzleVelocities[]={230, 250, 285};
        AB_barrelLengths[]={4, 5, 9};
    };
        
    class FH_45ACP_Tracer : HLC_45ACP_Ball {
        airfriction = -0.002;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 0;
        deflecting = 45;
        tracerendtime = 1.5;
        tracerscale = 0.5;
        tracerstarttime = 0.01;
    };

    class HLC_12G_Buck :  B_12Gauge_Pellets {
        hit = 3.75;
        indirectHit = 0;
        indirectHitRange = 0;
        caliber = 0.24;

        typicalSpeed = 403.86;
        airFriction = -0.00634;

        class HitEffects {
            Hit_Foliage_green = "ImpactLeavesGreen";
            Hit_Foliage_Dead = "ImpactLeavesDead";
            Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
            Hit_Foliage_Palm = "ImpactLeavesPalm";
            Hit_Foliage_Pine = "ImpactLeavesPine";
            hitFoliage = "ImpactLeaves";
            hitGlass = "ImpactGlass";
            hitGlassArmored = "ImpactGlassThin";
            hitWood = "ImpactWood";
            hitMetal = "ImpactMetal";
            hitMetalPlate = "ImpactMetal";
            hitBuilding = "ImpactPlaster";
            hitPlastic = "ImpactPlastic";
            hitRubber = "ImpactRubber";
            hitConcrete = "ImpactConcrete";
            hitMan = "ImpactEffectsBlood";
            hitGroundSoft = "ImpactEffectsSmall";
            hitGroundHard = "ImpactEffectsHardGround";
            hitWater = "ImpactEffectsWater";
            hitVirtual = "ImpactMetal";
        };
    };
    class HLC_12G_Distraction :  B_556x45_Ball {
        airfriction = -0.01;
        audiblefire = 18;
        caliber = 0.5;
        cartridge = "FxCartridge_slug";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 0;
        tracerendtime = 1;
        tracerscale = 1;
        cost = 20;
        hit = 0;
        indirecthit = 0;
        indirecthitrange = 0;
        simulation = "shotSpread";
        typicalspeed = 1;
        visiblefire = 18;
        deflecting = 90;
    };


    //.44 Mag
    class FH_44Mag : HLC_45ACP_Ball {
        airfriction = -0.001636;
        caliber = 2;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 1;
        hit = 10;
        typicalSpeed=391;
        maxspeed =  404;
        deflecting = 45;
        tracerendtime = 1.5;
        tracerscale = 0.5;
        tracerstarttime = 0.01;
        ACE_caliber = 10.897;
        ACE_bulletLength = 20.422;
        ACE_bulletMass = 12.96;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.172 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 360, 390, 420 };
        ACE_barrelLengths[] = { 101.6, 190.5, 228.6 };
    };

    class FH_44Mag_JHP : FH_44Mag {
        airfriction = -0.0019;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 1;
        typicalSpeed=460;
        maxspeed =  470;
        deflecting = 20;
        tracerendtime = 1.5;
        tracerscale = 0.5;
        tracerstarttime = 0.01;
    };
    class FH_44Mag_FUNTRACER : FH_44Mag {
        airfriction = -0.001636;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 0;
        typicalSpeed=391;
        maxspeed =  404;
        deflecting = 75;
        tracerendtime = 1.5;
        tracerscale = 0.5;
        tracerstarttime = 0.01;
    };

    // 50 BMG
    // BECAUSE YES
    class FH_50BMG_SLAP : B_127x99_Ball {
        airfriction = -0.0003;
        explosive = 0;
        hit = 60;
        indirecthit = 5;
        indirecthitrange = 1;    
        cartridge = "FxCartridge_127";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerendtime = 1;
        tracerscale = 1.2;
        tracerstarttime = 0.075;
        typicalSpeed=1250;
        maxspeed =  1275;
        nvgonly = 0;
        airlock = 1;
        ACE_caliber = 7.823;
        ACE_bulletLength = 31.75;
        ACE_bulletMass = 22.68;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 1.056 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 1204 };
        ACE_barrelLengths[] = { 736.6 };
    };
    class FH_50BMG_Raufoss : B_127x99_Ball {
        airlock = 1;
        cartridge = "FxCartridge_127";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
        airfriction = -0.000408;
        caliber = 3.5;
        deflecting = 5;
        explosive = 0.5;
        hit = 80;
        indirecthit = 20;
        indirecthitrange = 0.5;
        tracerendtime = 1;
        tracerscale = 0.2;
        tracerstarttime = 0.002;
        nvgonly = 0;
        typicalSpeed=889;
        maxspeed =  990;
        ACE_caliber = 12.954;
        ACE_bulletLength = 60.452;
        ACE_bulletMass = 42.768;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.670 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 817 };
        ACE_barrelLengths[] = { 736.6 };
        cratereffects = "ExploAmmoCrater";
        explosioneffects = "ExploAmmoExplosion";
        explosionsoundeffect = "DefaultExplosion";
        multisoundhit[] = {"soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15};
        muzzleeffect = "";
        soundhit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.16228, 1, 2000};
        soundhit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.16228, 1, 2000};
        soundhit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.16228, 1, 2000};
        soundhit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.16228, 1, 2000};
        soundhit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.16228, 1, 2000};
        soundhit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.16228, 1, 2000};
        class CamShakeFire {
            distance = 5;
            duration = 0.5;
            frequency = 20;
            power = 30;
        };
        class CamShakePlayerFire {
            duration = 0.1;
            frequency = 20;
            power = 10;
        };
        class CamShakeHit {
            duration = 1;
            frequency = 20;
            power = 20;
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_30rnd_556x45_EPR : 30Rnd_556x45_Stanag {
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: mofuggin errything";
        displayname = "STANAG Mag (EPR) 5.56mm";
        initspeed = 960.12;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm EPR";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
    class hlc_30rnd_556x45_SOST : 30Rnd_556x45_Stanag {
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: mofuggin errything";
        displayname = "STANAG Mag (SOST) 5.56mm";
        initspeed = 950.3664;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56 SOST";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
    class hlc_30rnd_556x45_SPR : 30Rnd_556x45_Stanag {
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: mofuggin errything";
        displayname = "STANAG Mag (SPR) 5.56mm";
        initspeed = 838.2;
        mass = 8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "5.56mm SPR";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
    class hlc_30rnd_556x45_S: hlc_30rnd_556x45_EPR {
        author = "Toadie";
        initspeed = 340;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load EPR<br />Rounds: 30<br />Used in: mofuggin errything";
        displayname = "STANAG Mag (Subsonic) 5.56mm";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_sub_ca.paa";
    };
    class hlc_30rnd_556x45_MDim :hlc_30rnd_556x45_EPR {
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Rounds: 30<br />Used in: mofuggin errything";
        displayname = "STANAG Mag (EPR,IR-DIM) 5.56mm";
        tracersevery = 4;
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_TDim :hlc_30rnd_556x45_EPR {
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Rounds: 30<br />Used in: mofuggin errything";
        displayname = "STANAG Mag (IR-DIM) 5.56mm";
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_tracer_ca.paa";
    };
    class hlc_50rnd_556x45_EPR : hlc_30rnd_556x45_EPR {
        author = "Toadie";
        count = 50;
        descriptionshort = "Caliber: 5.56x45mm NATO<br />Rounds: 50<br />Used in: mofuggin errything";
        displayname = "X-15 STANAG Mag (EPR) 5.56mm";
        mass = 14;
        tracersevery = 5;
        picture = "\hlc_core\tex\ui\ammo\m_X15_mixed_ca.paa";
    };

/*
    //FAL MAGs
    class hlc_20rnd_762x51_b_fal;
    class hlc_20rnd_762x51_t_fal;
    class hlc_20rnd_762x51_s_fal;

    class hlc_20rnd_762x51_B_SCAR : hlc_20Rnd_762x51_B_fal {
        descriptionshort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H(Mk17)";
        displayname = "SCAR-H Mag (Ball) 20rnd 7.62mm";
        initspeed = 714;
        mass = 7;
        displaynameshort = "7.62mm Ball";
        picture = "\hlc_core\tex\ui\ammo\m_scarhball_ca.paa";
    };
    class hlc_20rnd_762x51_T_SCAR : hlc_20Rnd_762x51_T_fal {
        descriptionshort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H(Mk17)";
        displayname = "SCAR-H Mag (Tracer) 20rnd 7.62mm";
        initspeed = 714;
        mass = 7;
        displaynameshort = "7.62mm Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_scarhTracer_ca.paa";
    };
    class hlc_20rnd_762x51_S_SCAR : hlc_20Rnd_762x51_S_fal {
        descriptionshort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H(Mk17)";
        displayname = "SCAR-H Mag (SubSonic) 20rnd 7.62mm";
        displaynameshort = "7.62mm Subsonic";
        picture = "\hlc_core\tex\ui\ammo\m_scarhsubsonic_ca.paa";
        mass = 7;
    };
*/

    // Tommy Gun Drums
    class hlc_50Rnd_45ACP_B_1921 : 30Rnd_556x45_Stanag {
        ammo = "FH_45ACP_Ball";
        count = 50;
        initspeed = 285;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 50<br />Used in: M1928";
        displayname = "M1928 Mag (Ball) 50rnd .45ACP";
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_m1928ball_ca.paa";
        scope = 0;
        mass = 12;
        tracersevery = 0;
        displaynameshort = ".45ACP Ball";
    };
    class hlc_50Rnd_45ACP_T_1921 : hlc_50Rnd_45ACP_B_1921 {
        ammo = "FH_45ACP_Tracer";
        count = 50;
        descriptionshort = "Caliber: .45ACP LV Tracer<br />Rounds: 50<br />Used in: M1928";
        displayname = "M1928 Mag (Tracer) 50rnd .45ACP";
        displaynameshort = ".45ACP LV Tracer";
        lastroundstracer = 1;
        mass = 12;
        picture = "\hlc_core\tex\ui\ammo\m_m1928tracer_ca.paa";
        scope = 0;
        tracersevery = 2;
    };

    class hlc_50rnd_9x19_B_9mmar : 30Rnd_556x45_Stanag{
        count = 50;
        ammo = "HLC_9x19_Ball";
        scope = 0;
        descriptionshort = "Caliber: 9x19mm Parrabellum (Ball)<br />Rounds: 50<br />Used in: 9MMAR";
        displayname = "9MMAR Mag (Ball) 50rnd 9x19mm";
        displaynameshort = "9mm Ball";
        picture = "\hlc_core\tex\ui\ammo\m_9mmarball_ca.paa";
        mass = 9;
        initspeed = 423;
    };
    //AK MAGS
    class hlc_30Rnd_545x39_B_AK : 30Rnd_556x45_Stanag {
        ammo = "FH_545x39_Ball";
        count = 30;
        descriptionshort = "Caliber: 5.45x39mm 7N6<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "AK74 Mag (Ball) 30rnd 5.45mm";
        initspeed = 850;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 12;
        displaynameshort = "5.45mm 7N6 Ball";
    };

    class hlc_30Rnd_545x39_t_ak : hlc_30Rnd_545x39_B_AK {
        ammo = "FH_545x39_Tracer";
        descriptionshort = "Caliber: 5.45x39mm 7T3<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "AK74 Mag (Tracer) 30rnd 5.45mm";
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 1;
        mass = 12;
        displaynameshort = "5.45mm 7T3 Tracer ";
        picture = "\hlc_core\tex\ui\ammo\m_ak74tracer_ca.paa";
    };
    class hlc_45Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
        ammo = "FH_545x39_Tracer";
        count = 45;
        descriptionshort = "Caliber: 5.45x39mm 7T3<br />Rounds: 45<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "RPK74 Mag (Tracer) 45rnd 5.45mm";
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
        mass = 14;
        displaynameshort = "5.45mm Tracer/Ball";
        picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
    };
    class hlc_30Rnd_545x39_EP_ak : hlc_30Rnd_545x39_B_AK {
        ammo = "FH_545x39_EP";
        descriptionshort = "Caliber: 5.45x39mm 7N24<br />Rounds: 30<br />Used in: AK74,AKS74,AK74M,AKS74U,AN94,AEK971,RPK74M";
        displayname = "AK74 Mag (Enhanced Peneterator) 30rnd 5.45mm";
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        mass = 12;
        displaynameshort = "5.45mm 7N24 Ball";
        initspeed = 930;
        picture = "\hlc_core\tex\ui\ammo\m_ak74ep_ca.paa";
    };


    // SAW Ammo Boxes




    //Trenchgun loads
    class hlc_5Rnd_12G_Slug_Trench : hlc_30Rnd_545x39_T_ak {
        ammo = "B_12Gauge_Slug";
        count = 5;
        descriptionshort = "Type: 12 Gauge Slugs<br />Rounds: 5<br />Used in: M1897 Trenchgun";
        displayname = "12 Gauge Slugs(M1897)";
        picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
        lastroundstracer = 0;
        scope = 0;
        tracersevery = 0;
        mass=2;
        displaynameshort = "12 Gauge Slug";
    };
    class hlc_5Rnd_12G_Buck_Trench : hlc_30Rnd_545x39_T_ak {
        ammo = "B_12Gauge_Pellets";
        count = 5;
        descriptionshort = "Type: 12 Gauge Buckshot<br />Rounds: 5<br />Used in: M1897 Trenchgun";
        displayname = "12 Gauge 00BuckShot (M1897)";
        lastroundstracer = 0;
        initspeed = 396;
        picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
        scope = 0;
        tracersevery = 0;
        mass=2;
        displaynameshort = "12 Gauge 00Buck";
    };
    class hlc_5Rnd_12G_DISTRACTION_Trench : hlc_30Rnd_545x39_T_ak {
        ammo = "FH_12G_Distraction";
        count = 5;
        descriptionshort = "Type: 12 Gauge DISTRACTION<br />Rounds: 5<br />Used in: M1897 Trenchgun";
        displayname = "12 Gauge DISTRACTION (M1897)";
        lastroundstracer = 0;
        initspeed = 396;
        mass=1;
        picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
        scope = 0;
        tracersevery = 1;
        displaynameshort = "12 Gau-DISTRACTION";
    };


    //Bren Gun
    class hlc_30Rnd_303_B_bren : hlc_50Rnd_45ACP_B_1921 {
        ammo = "HLC_303Brit_B";
        count = 30;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 30<br />Used in: Bren";
        displayname = "Bren Mag (Ball) 30rnd .303British";
        lastroundstracer = 1;
        scope = 0;
        initspeed = 840;
        mass = 10;
        displaynameshort = ".303 British Ball";
        picture = "\hlc_core\tex\ui\ammo\m_brenball_ca.paa";
    };
    class hlc_30Rnd_303_T_bren : hlc_30Rnd_303_B_bren {
        ammo = "HLC_303Brit_T";
        count = 30;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 30<br />Used in: Bren";
        displayname = "Bren Mag (Tracer) 30rnd .303British";
        lastroundstracer = 1;
        scope = 0;
        initspeed = 770;
        tracersevery = 3;
        mass = 10;
        displaynameshort = ".303 British Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_brentracer_ca.paa";
    };
    class hlc_30Rnd_303_AP_bren : hlc_30Rnd_303_B_bren {
        ammo = "HLC_303Brit_AP";
        count = 30;
        scope = 0;
        descriptionshort = "Caliber: .303British Armour-Piercing<br />Rounds: 30<br />Used in: Bren";
        displayname = "Bren Mag (AP) 30rnd .303British";
        lastroundstracer = 0;
        initspeed = 720;
        tracersevery = 1;
        mass = 11;
        displaynameshort = ".303 British AP";
        picture = "\hlc_core\tex\ui\ammo\m_brenap_ca.paa";
    };

    //Lee-Enfield Stipper Clips
    class hlc_10Rnd_303_B_enfield : hlc_30Rnd_303_B_bren {
        count = 10;
        scope = 2;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = "Lee-Enfield (Ball) 10rnd .303British";
        initspeed = 744;
        mass = 1;
        displaynameshort = ".303 Ball";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldball_ca.paa";
    };
    class hlc_10Rnd_303_T_enfield : hlc_30Rnd_303_T_bren {
        count = 10;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = "Lee-Enfield (Tracer) 10rnd .303British";
        tracersevery = 1;
        scope = 2;
        initspeed = 720;
        mass = 1;
        displaynameshort = ".303 Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldtracer_ca.paa";
    };
    class hlc_10Rnd_303_AP_enfield : hlc_30Rnd_303_AP_bren {
        count = 10;
        descriptionshort = "Caliber: .303British Armour-Piercing<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = "Lee-Enfield (AP) 30rnd .303British";
        tracersevery = 1;
        initspeed = 840;
        scope = 2;
        mass = 1;
        displaynameshort = ".303 AP";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldap_ca.paa";
    };

    //Carcano Clips
    class hlc_6Rnd_735_B_Carcano : hlc_30Rnd_303_B_bren {
        ammo = "HLC_542x42_ball";
        count = 6;
        scope = 0;
        descriptionshort = "Caliber: 6.5x52mm Ball<br />Rounds: 6<br />Used in: Carcano";
        displayname = "Carcano (Ball) 6rnd 6.5mm";
        initspeed = 755;
        mass = 1;
        displaynameshort = "6.5x52mm Ball";
        picture = "\hlc_core\tex\ui\ammo\m_carcanoball_ca.paa";
    };
    class hlc_6Rnd_735_T_Carcano : hlc_30Rnd_303_B_bren {
        ammo = "HLC_542x42_tracer";
        count = 6;
        scope = 0;
        descriptionshort = "Caliber: 6.5x52mm Tracer<br />Rounds: 6<br />Used in: Carcano";
        displayname = "Carcano (Tracer) 6rnd 6.5mm";
        tracersevery = 1;
        initspeed = 755;
        mass = 1;
        displaynameshort = "6.5x52mm Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_carcanotracer_ca.paa";
    };
    class hlc_5Rnd_792_T_Kar98 : hlc_10Rnd_303_B_enfield {
        ammo = "HLC_792x57_Tracer";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm Tracer<br />Rounds: 5<br />Used in: Kar98";
        displayname = "Kar98 (Tracer) 5rnd 7.92mm";
        tracersevery = 1;
        lastroundstracer = 2;
        initspeed = 762;
        mass = 1;
        displaynameshort = "7.92x57mm Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_k98tracer_ca.paa";
    };
    class hlc_5Rnd_792_AP_Kar98 : hlc_10Rnd_303_B_enfield {
        ammo = "HLC_792x57_AP";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm PmK (AP)<br />Rounds: 5<br />Used in: Kar98";
        displayname = "Kar98 (AP) 5rnd 7.92mm";
        tracersevery = 0;
        lastroundstracer = 3;
        initspeed = 840;
        mass = 1;
        displaynameshort = "7.92x57mm Armour Piercing";
        picture = "\hlc_core\tex\ui\ammo\m_k98ap_ca.paa";
    };

    //P90 Magazine
    class hlc_50Rnd_57x28_JHP_P90 : hlc_30Rnd_545x39_B_AK {
        ammo = "HLC_57x28mm_JHP";
        count = 50;
        descriptionshort = "Caliber: 5.7x28mm SS195LF Blue VMax <br />Rounds: 50<br />Used in: P90";
        displayname = "P90 Mag SS195LF(JHP) 50rnd 5.7mm";
        initspeed = 715;
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_p90ss195_ca.paa";
        scope = 0;
        mass=5;
        tracersevery = 0;
        displaynameshort = "5.7x28mm SS195LF Blue VMax";
    };
    class hlc_50Rnd_57x28_FMJ_P90 : hlc_50Rnd_57x28_JHP_P90 {
        ammo = "HLC_57x28mm_FMJ";
        descriptionshort = "Caliber: 5.7x28mm SS190 Black-Tip<br />Rounds: 30<br />Used in: P90";
        displayname = "P90 Mag SS190(FMJ) 50rnd 5.7mm";
        lastroundstracer = 0;
        scope = 0;
        mass=5;
        tracersevery = 0;
        displaynameshort = "5.7x28mm SS190 Black-Tip";
        picture = "\hlc_core\tex\ui\ammo\m_p90ss190_ca.paa";
    };

    class hlc_32rnd_9x19_B_sten : hlc_50Rnd_45ACP_B_1921 {
        ammo = "HLC_9x19_Ball";
        count = 32;
        initspeed = 365;
        descriptionshort = "Caliber: 9x19mm Ball<br />Rounds: 32<br />Used in: Sten";
        displayname = "Sten Mag (Ball) 32rnd 9x19mm";
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_sten_ca.paa";
        scope = 2;
        tracersevery = 2;
        mass = 4;
        displaynameshort = "9x19mm Ball";
    };        

/*
    class hlc_32rnd_9x19_B_MP40 : hlc_50Rnd_45ACP_B_1921 {
        ammo = "HLC_9x19_Ball";
        initspeed = 400;
        count = 32;
        descriptionshort = "Caliber: 9x19mm Ball<br />Rounds: 32<br />Used in: Sten";
        displayname = "MP40 Mag (Ball) 32rnd 9x19mm";
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_sten_ca.paa";
        scope = 2;
        tracersevery = 2;
        mass = 4;
        displaynameshort = "9x19mm Ball";
    };
    class hlc_30rnd_9x19_B_MAB38 : hlc_32rnd_9x19_B_sten {
        count = 30;
        initspeed = 429;
        descriptionshort = "Caliber: 9x19mm Ball<br />Rounds: 30<br />Used in: Sten";
        displayname = "MAB38 Mag (Ball) 32rnd 9x19mm";
        displaynameshort = "9x19mm Ball";
        mass = 4;
    };
*/

    //HK45C Mags
    class hlc_8Rnd_45ACP_B_hk45 : hlc_50Rnd_45ACP_B_1921 {
        count = 8;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 8<br />Used in: HK45C";
        displayname = "HK45C Mag (Ball) 8rnd .45ACP ";
        lastroundstracer = 0;
        scope = 0;
        initspeed = 329;
        mass = 2;
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_hk45ball_ca.paa";
    };
    class hlc_10Rnd_45ACP_B_hk45 : hlc_50Rnd_45ACP_B_1921 {
        count = 10;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 10<br />Used in: HK45C";
        displayname = "HK45 Mag (Ball) 10rnd .45ACP ";
        lastroundstracer = 0;
        initspeed = 329;
        scope = 0;
        mass = 2;
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_hk45ball_ca.paa";
    };
    class hlc_8Rnd_45ACP_T_hk45 : hlc_50Rnd_45ACP_T_1921 {
        count = 8;
        descriptionshort = "Caliber: .45ACP Tracer<br />Rounds: 8<br />Used in: HK45C";
        displayname = "HK45C Mag (Tracer) 8rnd .45ACP ";
        lastroundstracer = 0;
        initspeed = 329;
        scope = 0;
        mass = 2;
        displaynameshort = ".45ACP Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_hk45tracer_ca.paa";
    };

    // Mk23 MAgs, Mostly the same as the above ones bar roundcount
    class hlc_12Rnd_45ACP_B_mk23 : hlc_8Rnd_45ACP_B_hk45 {
        count = 12;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = "Mk23 Mag (Ball) 12rnd .45ACP ";
        lastroundstracer = 0;
        scope = 2;
        initspeed = 260;
        mass = 4;
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_mk23ball_ca.paa";
    };    
    class hlc_12Rnd_45ACP_S_mk23 : hlc_8Rnd_45ACP_B_hk45 {
        count = 12;
        descriptionshort = "Caliber: .45ACP Ball +P <br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = "Mk23 Mag (+P) 12rnd .45ACP ";
        scope = 2;
        lastroundstracer = 0;
        initspeed = 320;
        mass = 4;
        displaynameshort = ".45ACP +P Ball";
        picture = "\hlc_core\tex\ui\ammo\m_mk23plusp_ca.paa";
    };
    class hlc_12Rnd_45ACP_T_mk23 : hlc_8Rnd_45ACP_T_hk45 {
        count = 12;
        scope = 2;
        descriptionshort = "Caliber: .45ACP Low-Velocity Tracer<br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = "Mk23 Mag (Tracer) 12rnd .45ACP ";
        lastroundstracer = 0;
        initspeed = 260;
        mass = 4;
        displaynameshort = ".45ACP LV Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_mk23tracer_ca.paa";
    };

    //Deagle Mags
    class hlc_8Rnd_44mag_B_deagle : hlc_50Rnd_45ACP_B_1921 {
        ammo = "FH_44Mag";
        scope = 2;
        count = 8;
        descriptionshort = "Caliber: .44 Magnum Ball<br />Rounds: 8<br />Used in: Desert Eagle";
        displayname = "Desert Eagle Mag (Ball) 8rnd .44Magnum";
        lastroundstracer = 0;
        mass = 5;
        displaynameshort = ".44 Magnum Ball";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
    };
    class hlc_8Rnd_44mag_JHP_deagle : hlc_8Rnd_44mag_B_deagle {
        ammo = "FH_44Mag_JHP";
        count = 8;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum JHP<br />Rounds: 8<br />Used in: Desert Eagle";
        displayname = "Desert Eagle Mag (JHP) 8rnd .44Magnum";
        lastroundstracer = 0;
        mass = 4;
        displaynameshort = ".44 Magnum JHP";
        picture = "\hlc_core\tex\ui\ammo\m_deaglejhp_ca.paa";
    };
    class hlc_50Rnd_44mag_B_deagle : hlc_8Rnd_44mag_B_deagle {
        ammo = "FH_44Mag";
        count = 50;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum Ball<br />Rounds: 50<br />Used in: Desert Eagle";
        displayname = "Desert Eagle Mag (Ball) 50rnd .44Magnum";
        lastroundstracer = 0;
        mass = 20;
        displaynameshort = ".44 Magnum Ball";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
    };
    class hlc_50Rnd_44mag_FUN : hlc_8Rnd_44mag_B_deagle {
        ammo = "FH_44Mag_FUNTRACER";
        count = 50;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum LOLTRACER<br />Rounds: 50<br />Used in: Desert Eagle";
        displayname = "Desert Eagle LOL 50rnd .44Magnum";
        lastroundstracer = 0;
        mass = 22;
        displaynameshort = "WHEEEEEEEEEE";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
    };

/*
    //Lewis Gun Pans
    class hlc_97Rnd_303_B_Lewis : hlc_30Rnd_303_B_bren {
        ammo = "HLC_303Brit_B";
        count = 97;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 97<br />Used in: Lewis";
        displayname = "Lewis Pan (Ball) 30rnd .303British";
        picture = "\hlc_core\tex\ui\ammo\m_lewisball_ca.paa";
        lastroundstracer = 10;
        initspeed = 840;
        mass = 29;
        displaynameshort = ".303British Ball";
    };
    class hlc_97Rnd_303_T_Lewis : hlc_30Rnd_303_T_bren {
        ammo = "HLC_303Brit_T";
        count = 97;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 97<br />Used in: Lewis";
        displayname = "Lewis Pan (Tracer) 97rnd .303British";
        lastroundstracer = 1;
        initspeed = 770;
        tracersevery = 3;
        mass = 29;
        displaynameshort = ".303British Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_lewistracer_ca.paa";
    };
    class hlc_97Rnd_303_AP_Lewis : hlc_30Rnd_303_AP_bren {
        ammo = "HLC_303Brit_AP";
        count = 97;
        descriptionshort = "Caliber: .303British AP<br />Rounds: 97<br />Used in: Lewis";
        displayname = "Lewis Pan (AP) 97rnd .303British";
        lastroundstracer = 0;
        initspeed = 720;
        tracersevery = 1;
        mass = 29;
        displaynameshort = ".303British AP";
        picture = "\hlc_core\tex\ui\ammo\m_lewistracer_ca.paa";
    };


    //PKM BOXES HOLD ONTO YOUR BUTT
    class hlc_100Rnd_762x54_B_PKM : hlc_30Rnd_545x39_B_AK {
        ammo = "HLC_762x54_ball";
        count =100;
        descriptionshort = "Caliber: 7.62x54mm Ball<br />Rounds: 100<br />Used in: PKM";
        displayname = "PKM Belt (Ball) 100rnd 7.62x54mm";
        initspeed = 825;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_pkm100ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 25;
        displaynameshort = "7.62x54mm Ball";
    };
    class hlc_100Rnd_762x54_M_PKM : hlc_30Rnd_545x39_B_AK {
        ammo = "HLC_762x54_tracer";
        count =100;
        descriptionshort = "Caliber: 7.62x54mm Ball/Tracer Mix<br />Rounds: 100<br />Used in: PKM";
        displayname = "PKM Belt (Mixed) 100rnd 7.62x54mm";
        initspeed = 798;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_pkm100mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        mass = 25;
        displaynameshort = "7.62x54mm Ball/Tracer";
    };
    class hlc_100Rnd_762x54_T_PKM : hlc_30Rnd_545x39_B_AK {
        ammo = "HLC_762x54_tracer";
        count =100;
        descriptionshort = "Caliber: 7.62x54mm 7T2 Tracer<br />Rounds: 100<br />Used in: PKM";
        displayname = "PKM Belt (Tracer) 100rnd 7.62x54mm";
        initspeed = 798;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_pkm100tracer_ca.paa";
        scope = 2;
        tracersevery = 1;
        mass = 25;
        displaynameshort = "7.62x54mm 7T2 Tracer";
    };
    class hlc_250Rnd_762x54_B_PKM : hlc_30Rnd_545x39_B_AK {
        ammo = "HLC_762x54_ball";
        count =250;
        descriptionshort = "Caliber: 7.62x54mm Ball<br />Rounds: 100<br />Used in: PKM";
        displayname = "PKM Belt (Ball) 250rnd 7.62x54mm";
        initspeed = 825;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_pkm250ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 63;
        displaynameshort = "7.62x54mm Ball";
    };
    class hlc_250Rnd_762x54_M_PKM : hlc_30Rnd_545x39_B_AK {
        ammo = "HLC_762x54_tracer";
        count =250;
        descriptionshort = "Caliber: 7.62x54mm Ball/Tracer Mix<br />Rounds: 100<br />Used in: PKM";
        displayname = "PKM Belt (Mixed) 250rnd 7.62x54mm";
        initspeed = 798;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_pkm250mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        mass = 63;
        displaynameshort = "7.62x54mm Ball/Tracer";
    };
    class hlc_250Rnd_762x54_T_PKM : hlc_30Rnd_545x39_B_AK {
        ammo = "HLC_762x54_tracer";
        count =250;
        descriptionshort = "Caliber: 7.62x54mm 7T2 Tracer<br />Rounds: 100<br />Used in: PKM";
        displayname = "PKM Belt (Tracer) 250rnd 7.62x54mm";
        initspeed = 798;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_pkm250tracer_ca.paa";
        scope = 2;
        tracersevery = 1;
        mass = 63;
        displaynameshort = "7.62x54mm 7T2 Tracer";
    };
    class hlc_100Rnd_762x54_AP_PKM : hlc_30Rnd_545x39_B_AK {
        ammo = "HLC_762x54_AP";
        count =100;
        descriptionshort = "Caliber: 7.62x54mm 7N13 AP<br />Rounds: 100<br />Used in: PKM";
        displayname = "PKM Belt (AP) 100rnd 7.62x54mm";
        initspeed = 825;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_pkm100ap_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 25;
        displaynameshort = "7.62x54mm 7N13 AP";
    };
    class hlc_250Rnd_762x54_AP_PKM : hlc_100Rnd_762x54_AP_PKM {
        ammo = "HLC_762x54_AP";
        count =250;
        descriptionshort = "Caliber: 7.62x54mm 7N13 AP<br />Rounds: 100<br />Used in: PKM";
        displayname = "PKM Belt (AP) 250rnd 7.62x54mm";
        initspeed = 825;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_pkm250ap_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 63;
        displaynameshort = "7.62x54mm 7N13 AP";
    };

    //Breda LMG
    class hlc_20Rnd_735_B_Breda : hlc_6Rnd_735_B_Carcano {
        count = 20;
        ammo = "HLC_542x42_ball";
        descriptionshort = "Caliber: 6.5x52mm Ball<br />Rounds: 20<br />Used in: Breda";
        displayname = "Breda (Ball) 20rnd 6.5mm";
        initspeed = 630;
        mass = 10;
        displaynameshort = "6.5x52mm Ball";
        picture = "\hlc_core\tex\ui\ammo\m_bredaball_ca.paa";
    };
    class hlc_20Rnd_735_T_Breda : hlc_6Rnd_735_T_Carcano {
        ammo = "HLC_542x42_tracer";
        count = 20;
        descriptionshort = "Caliber: 6.5x52mm Tracer<br />Rounds: 20<br />Used in: Breda";
        displayname = "Breda (Tracer) 20rnd 6.5mm";
        tracersevery = 1;
        initspeed = 630;
        mass = 10;
        displaynameshort = "6.5x52mm Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_bredatracer_ca.paa";
    };

    //Kar98kClips
    class hlc_5Rnd_792_B_Kar98 : hlc_10Rnd_303_B_enfield {
        ammo = "HLC_792x57_Ball";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm sS (Ball)<br />Rounds: 5<br />Used in: Kar98";
        displayname = "Kar98 (Ball) 5rnd 7.92mm";
        tracersevery = 0;
        lastroundstracer = 1; 
        initspeed = 770;
        mass = 2;
        displaynameshort = "7.92x57mm Ball";
        picture = "\hlc_core\tex\ui\ammo\m_k98ball_ca.paa";
    };

    //MG34 Boxes
    class hlc_75rnd_792_B_MG34 : hlc_5Rnd_792_B_Kar98 {
        count = 75;
        descriptionshort = "Caliber: 7.92x57mm sS (Ball)<br />Rounds: 75<br />Used in: MG34";
        displayname = "MG34 (Ball) 75rnd 7.92mm";
        picture = "\hlc_core\tex\ui\ammo\m_mg34ball_ca.paa";
        tracersevery = 3;
        mass = 17;
        initspeed = 762;
        displaynameshort = "7.92x57mm Ball";
    };
    class hlc_75rnd_792_T_MG34 : hlc_75rnd_792_B_MG34 {
        ammo = "HLC_792x57_Tracer";
        count = 75;
        descriptionshort = "Caliber: 7.92x57mm Tracer<br />Rounds: 75<br />Used in: MG34";
        displayname = "MG34 (Tracer) 75rnd 7.92mm";
        picture = "\hlc_core\tex\ui\ammo\m_mg34tracer_ca.paa";
        tracersevery = 3;
        mass = 17;
        displaynameshort = "7.92x57mm Tracer";
    };
    class hlc_75rnd_792_AP_MG34 : hlc_75rnd_792_B_MG34 {
        ammo = "HLC_792x57_AP";
        count = 75;
        descriptionshort = "Caliber: 7.92x57mm PmK (AP)<br />Rounds: 75<br />Used in: MG34";
        displayname = "MG34 (AP) 75rnd 7.92mm";
        picture = "\hlc_core\tex\ui\ammo\m_mg34ap_ca.paa";
        tracersevery = 3;
        mass = 17;
        displaynameshort = "7.92x57mm Armour-Piercing";
    };


    //TAC50 Mags
    class hlc_5Rnd_50BMG_B_TAC50 : hlc_50Rnd_45ACP_B_1921 {
        ammo = "B_127x99_Ball";
        count = 5;
        descriptionshort = "Caliber: .50 BMG Ball<br />Rounds: 5<br />Used in: TAC-50";
        displayname = "TAC-50 Ball 5rnd .50BMG";
        lastroundstracer = 0;
        initspeed = 1024;
        mass = 12;
        displaynameshort = ".50 BMG Ball";
        picture = "\hlc_core\tex\ui\ammo\m_tac50ball_ca.paa";
    };
    class hlc_5Rnd_50BMG_T_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
        ammo = "B_127x99_Ball_Tracer_Red";
        count = 5;
        descriptionshort = "Caliber: .50 BMG Tracer<br />Rounds: 5<br />Used in: TAC-50";
        displayname = "TAC-50 Tracer 5rnd .50BMG";
        lastroundstracer = 0;
        initspeed = 928;
        tracersevery = 1;
        mass = 12;
        displaynameshort = ".50 BMG Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_tac50tracer_ca.paa";
    };
    class hlc_5Rnd_50BMG_SLAP_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
        ammo = "FH_50BMG_SLAP";
        count = 5;
        descriptionshort = "Caliber: .50 BMG SLAP<br />Rounds: 5<br />Used in: TAC-50";
        displayname = "TAC-50 SLAP 5rnd .50BMG";
        lastroundstracer = 0;
        initspeed = 1219;
        tracersevery = 1;
        mass = 12;
        displaynameshort = ".50 BMG SLAP";
        picture = "\hlc_core\tex\ui\ammo\m_tac50slap_ca.paa";
    };
    class hlc_5Rnd_50BMG_Raufoss_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
        ammo = "FH_50BMG_Raufoss";
        count = 5;
        descriptionshort = "Caliber: .50 BMG Raufoss<br />Rounds: 5<br />Used in: TAC-50";
        displayname = "TAC-50 Raufoss 5rnd .50BMG";
        lastroundstracer = 0;
        initspeed = 889;
        tracersevery = 1;
        mass = 12;
        displaynameshort = ".50 BMG Raufoss";
        picture = "\hlc_core\tex\ui\ammo\m_tac50raufoss_ca.paa";
    };
*/
};
