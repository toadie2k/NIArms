// NOTE TO  FUTURE ME - 
//G36 Rifle-length cycle - 0.093
//Carbine = 0.88
//Compact - 0.82
//IMPORT to FBX- import 0.01 , scale 0.55 all axis

#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_G36 {
        requiredaddons[] = {"hlcweapons_core"};
        units[] = {};
        weapons[] = { "HLC_Optic_G36dualoptic35x","HLC_Optic_G36dualoptic35x2d","HLC_Optic_G36Export35x","HLC_Optic_G36Export35x","HLC_Optic_G36Export35x2d","HLC_Optic_G36Dualoptic15x","HLC_Optic_G36Dualoptic15x2d","HLC_Optic_G36Export15x","HLC_Optic_G36Export15x2d",
            "hlc_rifle_G36A1", "hlc_rifle_G36A1AG36", "hlc_rifle_G36KA1", "hlc_rifle_G36C", "hlc_rifle_G36E1", "hlc_rifle_G36E1AG36", "hlc_rifle_G36KE1", "hlc_rifle_G36V", "hlc_rifle_G36KV", "hlc_rifle_G36CV", "hlc_rifle_G36VAG36", "hlc_rifle_G36TAC",
            "hlc_rifle_G36KTAC", "hlc_rifle_G36CTAC", "hlc_rifle_G36MLIC", "hlc_rifle_G36KMLIC", "hlc_rifle_G36CMLIC","hlc_rifle_G36MLIAG36"
        };
        magazines[] = {"hlc_30rnd_556x45_EPR_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SPR_G36","hlc_100rnd_556x45_EPR_G36"};
        version = "v1.3";
        author="toadie";
    };
};

class cfgMods {
    class Niarms_G36 {
        name = "NIArsenal: G36 Rifles";
        picture = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_g36\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class nia_rifle_bipodsgrips_slot;
class nia_rifle_grips_slot;
class nia_charms_slot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;

class niarms_G36_OpticSlot: asdg_OpticRail {
    class compatibleItems {
        HLC_Optic_G36dualoptic35x = 1;
        HLC_Optic_G36dualoptic35x2d = 1;
        HLC_Optic_G36Export35x2d = 1;
        HLC_Optic_G36Export35x = 1;
        HLC_Optic_G36Dualoptic15x = 1;
        HLC_Optic_G36Dualoptic15x2d = 1;
        HLC_Optic_G36Export15x = 1;
        HLC_Optic_G36Export15x2d = 1;
    };
};

class CfgVehicles { 
    dlc = "Niarms_G36";
    class B_supplyCrate_F;
    class HLC_G36_ammobox : B_supplyCrate_F {
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC G36 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_30rnd_556x45_EPR_G36,60);
            __M_MAG(hlc_30rnd_556x45_SOST_G36,60);
            __M_MAG(hlc_30rnd_556x45_SPR_G36,60);
            __M_MAG(hlc_30rnd_556x45_S_G36,60);
            __M_MAG(hlc_30rnd_556x45_Tracers_G36,60);
            __M_MAG(hlc_30rnd_556x45_MDIM_G36,60);
            __M_MAG(hlc_30rnd_556x45_TDIM_G36,60);
            __M_MAG(hlc_100rnd_556x45_EPR_G36,60);
            __M_MAG(hlc_100rnd_556x45_M_G36,60);
            __M_MAG(hlc_100rnd_556x45_Mdim_G36,60);
            __M_MAG(30Rnd_65x39_caseless_mag,60);
            __M_MAG(30Rnd_65x39_caseless_mag_Tracer,60);
            __M_MAG(100Rnd_65x39_caseless_mag_Tracer,60);
            __M_MAG(100Rnd_65x39_caseless_mag,60);
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
            __M_WEP(hlc_rifle_G36A1,10);
            __M_WEP(hlc_rifle_G36E1,10);
            __M_WEP(hlc_rifle_G36V,10);
            __M_WEP(hlc_rifle_G36TAC,10);
            __M_WEP(hlc_rifle_G36MLIC,10);
            __M_WEP(hlc_rifle_G36KA1,10);
            __M_WEP(hlc_rifle_G36KE1,10);
            __M_WEP(hlc_rifle_G36KV,10);
            __M_WEP(hlc_rifle_G36KTAC,10);
            __M_WEP(hlc_rifle_G36KMLIC,10);
            __M_WEP(hlc_rifle_G36C,10);
            __M_WEP(hlc_rifle_G36CV,10);
            __M_WEP(hlc_rifle_G36CTAC,10);
            __M_WEP(hlc_rifle_G36CMLIC,10);
            __M_WEP(hlc_rifle_G36A1AG36,10);
            __M_WEP(hlc_rifle_G36E1AG36,10);
            __M_WEP(hlc_rifle_G36vAG36,10);
            __M_WEP(hlc_rifle_G36MLIAG36,10);
            __M_WEP(hlc_rifle_MG36,10);
        };
        class TransportItems {
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_Arco,10);
            __M_ITM(optic_LRPS,10);
            __M_ITM(optic_NVS,10);
            __M_ITM(HLC_Optic_G36dualoptic35x,10);
            __M_ITM(HLC_Optic_G36dualoptic35x2d,10);
            __M_ITM(HLC_Optic_G36Export35x,10);
            __M_ITM(HLC_Optic_G36Export35x2d,10);
            __M_ITM(HLC_Optic_G36Dualoptic15x,10);
            __M_ITM(HLC_Optic_G36Dualoptic15x2d,10);
            __M_ITM(HLC_Optic_G36Export15x,10);
            __M_ITM(HLC_Optic_G36Export15x2d,10);
            __M_ITM(acc_flashlight,10);
            __M_ITM(acc_pointer_IR,10);
        };
    };
    class Weapon_Base_F;
    __WEAPONHOLDER(hlc_rifle_G36A1,hlc_30rnd_556x45_EPR_G36,HK G36A1,Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36A1AG36,hlc_30rnd_556x45_EPR_G36,HK G36A1(GL),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_MG36,hlc_100rnd_556x45_EPR_G36,HK MG36A1,Niarms_G36,Toadie,MachineGuns);
    __WEAPONHOLDER(hlc_rifle_G36KA1,hlc_30rnd_556x45_EPR_G36,HK G36KA1,Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36C,hlc_30rnd_556x45_EPR_G36,HK G36C,Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36E1,hlc_30rnd_556x45_EPR_G36,HK G36E,Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36E1AG36,hlc_30rnd_556x45_EPR_G36,HK G36E(GL),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36KE1,hlc_30rnd_556x45_EPR_G36,HK G36KE,Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36V,hlc_30rnd_556x45_EPR_G36,HK G36V,Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36KV,hlc_30rnd_556x45_EPR_G36,HK G36KV,Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36CV,hlc_30rnd_556x45_EPR_G36,HK G36CV,Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36VAG36,hlc_30rnd_556x45_EPR_G36,HK G36V(GL),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36TAC,hlc_30rnd_556x45_EPR_G36,HK G36V(KAC),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_g36KTac,hlc_30rnd_556x45_EPR_G36,HK G36KV(KAC),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36CTac,hlc_30rnd_556x45_EPR_G36,HK G36CV(KAC),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36MLIC,30Rnd_65x39_caseless_mag,HK G36-MLI(C),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36KMLIC,30Rnd_65x39_caseless_mag,HK G36K-MLI(C),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36CMLIC,30Rnd_65x39_caseless_mag,HK G36C-MLI(C),Niarms_G36,Toadie,AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_G36MLIAG36,30Rnd_65x39_caseless_mag,HK G36MLI(C)(GL),Niarms_G36,Toadie,AssaultRifles);
};


class CfgMovesBasic {
    class DefaultDie;
    class ManActions {
        HLC_GestureReloadG36A1 = "HLC_GestureReloadG36A1"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadG36MLI =  "HLC_GestureReloadG36MLI";
        HLC_GestureReloadG36V = "HLC_GestureReloadG36V";
        HLC_GestureReloadAG36 = "HLC_GestureReloadAG36";//
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Prone", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Prone", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Prone", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Prone", "Gesture" };
        };
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };
        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
            HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
            HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
            HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
                HLC_GestureReloadG36A1[] = { "HLC_GestureReloadG36A1_Context", "Gesture" };
                HLC_GestureReloadG36MLI[] = { "HLC_GestureReloadG36MLI_Context", "Gesture" };
                HLC_GestureReloadG36V[] = { "HLC_GestureReloadG36V_Context", "Gesture" };
                HLC_GestureReloadAG36[] = { "HLC_GestureReloadAG36_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale {
    class Default;
    class States {

        class HLC_GestureReloadG36A1 : Default {
            file = "hlc_wp_g36\anim\standard\reload_G36_standing.rtm";
            speed = 0.2307692307692308;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36A1_Prone : Default {
            file = "hlc_wp_g36\anim\standard\reload_G36_prone.rtm";
            speed = 0.2307692307692308;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36A1_Context : HLC_GestureReloadG36A1 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadG36V :Default {
            file = "hlc_wp_g36\anim\varient\reload_G36V_standing.rtm";
            speed = 0.2564102564102564;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36V_Prone : Default {
            file = "hlc_wp_g36\anim\varient\reload_G36V_prone.rtm";
            speed = 0.2564102564102564;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36V_Context : HLC_GestureReloadG36V {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAG36 : Default {
            file = "hlc_wp_g36\anim\ag36\reload_aG36_standing.rtm";
            speed = 0.2307692325443787;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadAG36_Prone : Default {
            file = "hlc_wp_g36\anim\ag36\reload_aG36_prone.rtm";
            speed = 0.2307692325443787;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadAG36_Context : HLC_GestureReloadAG36 {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadG36MLI : Default {
            file = "hlc_wp_g36\anim\mli\reload_g36mli_standing.rtm";
            speed = 0.2727272724793388;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.025, 0, 0.8583333, 0, 0.88, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKBeg = true;
            rightHandIKEnd = true;
        };

        class HLC_GestureReloadG36MLI_Prone : Default {
            file = "hlc_wp_g36\anim\mli\reload_g36mli_prone.rtm";
            looped = 0;
            speed = 0.2727272724793388;
            mask = "handsWeapon";
            // mask="empty";
            headBobStrength = 0.15;
            headBobMode = 2;
            leftHandIKBeg = true;
            leftHandIKCurve[] = { 0, 1, 0.07, 0, 0.81, 0, 0.86, 1 };
            leftHandIKEnd = true;
            rightHandIKBeg = true;
            rightHandIKCurve[] = { 0, 1, 0.6545, 0, 0.72727, 0, 0.7545, 1 };
            rightHandIKEnd = true;
        };
        class HLC_GestureReloadG36MLI_Context : HLC_GestureReloadG36MLI {
            mask = "handsWeapon_context";
        };
    };
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_30rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displayname = $STR_NIA_30rnd_556x45_EPR_G36;
        initspeed = 974.8;
        mass = 11.1;
        lastroundstracer = 2;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_EPR;
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\30rnd_556NATO_G36.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_greentip_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_EPR_ca.paa";
    };
    class hlc_30rnd_556x45_SOST_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
        displayname = $STR_NIA_30rnd_556x45_SOST_G36;
        initspeed = 954.4;
        mass = 12.1;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SOST;
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\30rnd_556NATO_G36.p3d;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
        modelSpecialIsProxy = 1;
        picture = "\hlc_wp_g36\tex\ui\m_g36_SOST_ca.paa";
    };
    class hlc_30rnd_556x45_SPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
        displayname = $STR_NIA_30rnd_556x45_SPR_G36;
        initspeed = 868.7;
        mass = 13.1;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SPR;
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\30rnd_556NATO_G36.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_SPR_ca.paa";
    };
    class hlc_30rnd_556x45_S_G36 : hlc_30rnd_556x45_EPR_G36 {
        author = "Toadie";
        initspeed = 340;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displaynameshort = $STR_NIA_556_Sub;
        displayname = $STR_NIA_30rnd_556x45_S_G36;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_Tracers_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
        displayname = $STR_NIA_30Rnd_556x45_T_G36;
        initspeed = 974.8;
        mass = 11;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_Tracer;
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\30rnd_556NATO_G36.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_TDIM_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
        displayname = $STR_NIA_30rnd_556x45_TDim_G36;
        initspeed = 974.8;
        mass = 11;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_IRDIM;
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\30rnd_556NATO_G36.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_MDIM_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
        displayname = $STR_NIA_30rnd_556x45_MDim_G36;
        initspeed = 974.8;
        mass = 11;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_MDim;
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\30rnd_556NATO_G36.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_M_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
        displayname = $STR_NIA_30Rnd_556x45_M_G36;
        initspeed = 974.8;
        mass = 11;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\30rnd_556NATO_G36.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_tracer_ca.paa";
    };
    class hlc_100rnd_556x45_EPR_G36 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_556x45_B_G36;
        displayname = $STR_NIA_100Rnd_556x45_EPR_G36;
        initspeed = 974.8;
        mass = 46;
        lastroundstracer = 5;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        model = "\hlc_wp_g36\mesh\magazine\magazine_cmag.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\100rnd_556NATO_CMAG.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_greentip_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_CMAG_ca.paa";
    };
    class hlc_100rnd_556x45_M_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_556x45_M_G36;
        displayname = $STR_NIA_100Rnd_556x45_M_G36;
        initspeed = 974.8;
        mass = 46;
        lastroundstracer = 5;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        model = "\hlc_wp_g36\mesh\magazine\magazine_cmag.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\100rnd_556NATO_CMAG.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_CMAG_ca.paa";
    };
    class hlc_100rnd_556x45_Mdim_G36 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_G36";
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_556x45_Mdim_G36;
        displayname = $STR_NIA_100Rnd_556x45_MDim_G36;
        initspeed = 974.8;
        mass = 46;
        lastroundstracer = 5;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_MDim;
        model = "\hlc_wp_g36\mesh\magazine\magazine_cmag.p3d";
        modelSpecial = \hlc_wp_g36\mesh\magazine\proxy\100rnd_556NATO_CMAG.p3d;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        picture = "\hlc_wp_g36\tex\ui\m_g36_CMAG_ca.paa";
    };
};

class CfgMagazineWells {
    class CBA_556x45_G36 {
        NIA_mags[] = { __556G36_MAGS };
    };
};

class CfgWeapons {
    class UGL_F;
    class Rifle;
    class Rifle_Base_F: Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

//optics

    class InventoryOpticsItem_Base_F;
    class optic_Arco;

    class HLC_Optic_G36dualoptic35x : optic_Arco {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = $STR_NIA_35xoptic_DESC;
        displayname = $STR_NIA_optic_G36dualoptic35x;
        model = "\hlc_wp_G36\mesh\optics\dualoptic3-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
        inertia = 0;
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle3-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 0;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.07114;
                    opticsZoomMax = 0.07114;
                    opticsZoomInit = 0.07114;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
		tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
    };
    class HLC_Optic_G36dualoptic35x2d : HLC_Optic_G36dualoptic35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = $STR_NIA_optic_G36dualoptic35x2D;
        inertia = 0;
        class ItemInfo : ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    useModelOptics = 1;
                };
                class Iron : Iron {};
            };
        };
    };
    class HLC_Optic_G36Export35x : HLC_Optic_G36dualoptic35x {
        author = "Toadie";
        descriptionshort = $STR_NIA_35xoptic_DESC;
        displayname = $STR_NIA_optic_G36exportoptic35x;
        model = "\hlc_wp_G36\mesh\optics\Export3-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";
    };
    class HLC_Optic_G36Export35x2d : HLC_Optic_G36Export35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = $STR_NIA_optic_G36exportoptic35x2D;
        class ItemInfo : ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    useModelOptics = 1;
                };
                class Iron : Iron {};
            };
        };
    };

    class HLC_Optic_G36Dualoptic15x : HLC_Optic_G36dualoptic35x {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayname = $STR_NIA_optic_G36dualoptic15x;
        descriptionshort = $STR_NIA_15xoptic_DESC;
        model = "\hlc_wp_G36\mesh\optics\dualoptic1-5x.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_dualoptic_ca";
        class ItemInfo : InventoryOpticsItem_Base_F {
            mass = 7;
            modelOptics = "\hlc_wp_G36\mesh\optics\reticle1-5x2d";
            class OpticsModes {
                class Snip {
                    useModelOptics = 0;
                    opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    opticsZoomMin = 0.166;
                    opticsZoomMax = 0.166;
                    opticsZoomInit = 0.166;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memorypointcamera = "eye";
                    opticsid = 2;
                    visionmode[] = { "Normal" };
                };
                class Iron : Snip {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "RD_eye";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 1;
                    opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
    class HLC_Optic_G36Dualoptic15x2d : HLC_Optic_G36Dualoptic15x {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = $STR_NIA_15xoptic_DESC;
        displayname = $STR_NIA_optic_G36dualoptic15x2D;
        class ItemInfo : ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    useModelOptics = 1;
                };
                class Iron : Iron {};
            };
        };
    };
    class HLC_Optic_G36Export15x : HLC_Optic_G36dualoptic15x {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = $STR_NIA_15xoptic_DESC;
        displayname = $STR_NIA_optic_G36exportoptic15x;
        model = "\hlc_wp_G36\mesh\optics\Export1-5xy.p3d";
        picture = "\hlc_wp_G36\tex\ui\gear_exportoptic_ca";

    };
    class HLC_Optic_G36Export15x2d : HLC_Optic_G36Export15x {
        dlc = "Niarms_G36";
        author = "Toadie";
        descriptionshort = $STR_NIA_15xoptic_DESC;
        displayname = $STR_NIA_optic_G36exportoptic15x2D;
        class ItemInfo : ItemInfo {
            class OpticsModes: OpticsModes {
                class Snip: Snip {
                    useModelOptics = 1;
                };
                class Iron : Iron {};
            };
        };
    };
    class ItemCore;
    class InventoryUnderItem_Base_F;
    class HLC_Bipod_G36 : ItemCore
    {
        scope = 2;																	/// available in Arsenal
        displayName = $STR_NIA_optic_G36Bipod;													/// name of item in Inventory (and Arsenal)
        picture = "\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";			/// icon in Inventory
        model = "hlc_wp_g36\mesh\acc\MG_Bipod.p3d";						/// path to model"P:\hlc_wp_g36\mesh\acc\MG_Bipod.p3d"
        class ItemInfo : InventoryUnderItem_Base_F
        {
            deployedPivot = "bipod";		/// what point should be used to be on surface while unfolded
            hasBipod = true;			/// bipod obviously has a bipod
            mass = 10;			/// what is the mass of the object
            soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down", db - 3, 1, 20 };	/// what sound should be played during unfolding
            soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up", db - 3, 1, 20 };		/// what sound should be played during folding			
        };
        inertia = 0.02;						/// how much does the bipod add to inertia of the weapon
    };
    class hlc_G36_base : Rifle_Base_F {
        scope = protected;
        recoil = "recoil_mk20";
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = false;
        magazineReloadSwitchPhase = 0.5;
        magazines[] = { __556G36_MAGS };
        magazineWell[] = {"CBA_556x45_G36"};
        class Library {
            libTextDesc = "H&K Gewehr36";
        };
        reloadAction = "GestureReloadEBR";
        __AI_DISPERSION_COEF;
        cameraDir = "";
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
        drysound[] = { "hlc_wp_g36\snd\g36_dryfire", 1.01, 1, 10 };
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        changeFiremodeSound[] = { "\hlc_wp_g36\snd\g36_switch", 1, 1, 8 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

        class hlc_GL_AG36 : UGL_F {
            cameradir = "gl_look";
            discreteDistance[] = { 50, 100,150, 200,250,300,350};
            discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m"}; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "AG36";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            reloadtime = 0.1;
            reloadAction = "HLC_GestureReloadAG36";
            reloadMagazineSound[] = { "hlc_wp_g36\snd\ag36_reload", 1.0, 1, 10 };
            drySound[] = { "hlc_wp_g36\snd\ag36_drystrike", 0.66, 1, 10 };
            modes[] = { "Single" };
            class Single : Mode_SemiAuto {
                sounds[] = { "StandardSound" };
                class StandardSound {
                    closure1[] = { "hlc_wp_g36\snd\ag36_striker", 1.0, 1, 10 };
                    soundClosure[] = { "closure1", 1 };
                    begin1[] = { "hlc_wp_g36\snd\ag36_launch", 0.70794576, 1, 200 };
                    begin2[] = { "hlc_wp_g36\snd\ag36_launch", 0.70794576, 1, 200 };
                    soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
                };
                class SoundTails {
                    class TailInterior {
                        sound[] = { "\hlc_wp_g36\snd\AG36_indoor", 1, 1, 200 };
                        frequency = 1;
                        volume = "interior";
                    };
                };
                recoil = "M240Recoil";
                recoilProne = "M240Recoil";
                __AI_ROF_GL_SINGLE;
            };
        };

        soundbullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_556 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
        };

        modes[] = { "Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2","AI_Burst_close" };

        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1,10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            __ROF(750);
            __AI_ROF_RIFLE_SMALL_SINGLE;
        };

        class Burst : Mode_Burst {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            __ROF(750);
            __AI_ROF_RIFLE_SMALL_SHORT_BURST;
        };

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_Shot_SoundSet", "g36_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            __ROF(750);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;
        };
        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
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
        class AI_Burst_close : FullAuto {
            
                showToPlayer = 0; 
                aiBurstTerminable = 1;
                burst = 4; 
                __AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
        };
    };

    class hlc_rifle_G36A1 : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        displayName = $STR_NIA_rifle_G36A1;
        descriptionShort =$STR_NIA_G36_DESC;
        reloadAction = "HLC_GestureReloadG36A1";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_STD.rtm" };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "RD_eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomMin = 0.07114;
                opticsZoomMax = 0.07114;
                opticsZoomInit = 0.07114;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memorypointcamera = "eye";
                opticsid = 2;
                visionmode[] = { "Normal" };
            };
        };

        model = "hlc_wp_g36\mesh\G36A1\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36A1_ca.paa";
        discretedistance[] = {200};
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_a1_co.tga","hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.tga","hlc_wp_g36\tex\placeholder\g36_magwell_co.tga","hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga" };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 79;
            class CowsSlot : niarms_G36_OpticSlot {};
            class UnderBarrelSlot
            {
                linkproxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
                class compatibleItems {
                    HLC_Bipod_G36 =  1;
                };
            };
            class CharmSlot :nia_charms_slot{};
        };
        inertia = 0.36;
        __DEXTERITY(3.6, 0);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36A1_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36A1_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36A1_CMAG";
            default = "hlc_rifle_G36A1";
        };
    };
    class hlc_rifle_G36A1_CMAG : hlc_rifle_G36A1
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36A1-cmag_ca.paa";
        inertia = 0.36+0.21;
        __DEXTERITY(3.6+2.1, 0);
    };

    class hlc_rifle_G36A1AG36 : hlc_rifle_G36A1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36A1GL;
        muzzles[] = { "this", "hlc_GL_AG36"};
        model = "hlc_wp_g36\mesh\G36A1\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36A1_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock","AG36" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_a1_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\g36_ag36_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 107;
            class CowsSlot : niarms_G36_OpticSlot {};
            class UnderBarrelSlot
            {
                class compatibleItems {
                    HLC_Bipod_G36 = 0;
                };
            };
        };
        inertia = 0.51;
        __DEXTERITY(3.6+1.5, 0);

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36A1AG36_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36A1AG36_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36A1AG36_CMAG";
            default = "hlc_rifle_G36A1AG36";
        };
    };
    class hlc_rifle_G36A1AG36_CMAG : hlc_rifle_G36A1AG36
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_AG36A1-cmag_ca.paa";
        inertia = 0.51+0.21;
        __DEXTERITY(3.6+2.1+1.5, 0);
    };

    class hlc_rifle_MG36 : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = true;
        soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down", db - 3, 1, 20 };	/// what sound should be played during unfolding
        soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up", db - 3, 1, 20 };		/// what sound should be played during folding			
        recoil = "recoil_mk20";
        displayName = $STR_NIA_rifle_MG36;
        descriptionShort = $STR_NIA_MG36_DESC;
        reloadAction = "HLC_GestureReloadG36A1";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_STD.rtm" };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "RD_eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
            class ACOG {
                useModelOptics = 0;
                opticsPPEffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                opticsFlare = 1;
                opticsDisablePeripherialVision = 1;
                opticsZoomMin = 0.07114;
                opticsZoomMax = 0.07114;
                opticsZoomInit = 0.07114;
                distanceZoomMin = 200;
                distanceZoomMax = 200;
                memorypointcamera = "eye";
                opticsid = 2;
                visionmode[] = { "Normal" };
            };

        };
        model = "hlc_wp_g36\mesh\G36 LSW\MG36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_MG36_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "Magazine_HK_Cmag", "Bipod" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_a1_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\g36_cmag_co.tga","hlc_wp_g36\tex\g36_bipod_co.tga" };
        discretedistance[] = { 200 };
        discretedistanceinitindex = 0;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
            class CowsSlot : niarms_G36_OpticSlot {};
            class CharmSlot :nia_charms_slot{};
        };
        inertia = 0.38+0.21;
        __DEXTERITY(3.8+2.1, 0);
        class fullauto_medium : fullauto_medium {
            burst = 4;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.1;
        };
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_MG36";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_MG36";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_MG36";
            default = "hlc_rifle_MG36_30rnd";
        };
    };
    class hlc_rifle_MG36_30rnd : hlc_rifle_MG36
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36A1_ca.paa";
        inertia = 0.38;
        __DEXTERITY(3.8, 0);
    };
    class hlc_rifle_G36KA1 : hlc_rifle_G36A1 {
        dlc = "Niarms_G36";
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36KA1;
        descriptionShort = $STR_NIA_G36_Carbine_DESC;
        model = "hlc_wp_g36\mesh\G36A1\G36K.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_G36k_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_k1_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 69;
        };
        inertia = 0.34;
        __DEXTERITY(3.3, 0);
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_Shot_SoundSet", "g36k_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
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
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
        };
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KA1_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KA1_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KA1_CMAG";
            default = "hlc_rifle_G36KA1";
        };
    };
    class hlc_rifle_G36KA1_CMAG : hlc_rifle_G36KA1
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_g36k-cmag_ca.paa";
        inertia = 0.34+0.21;
        __DEXTERITY(3.4+2.1, 0);
    };

    class hlc_rifle_G36C : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 178;
        ACE_barrelLength = 318;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        displayName = $STR_NIA_rifle_G36C;
        descriptionShort = $STR_NIA_G36_Compact_DESC;
        reloadAction = "HLC_GestureReloadG36A1";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ar18.rtm" };
        discretedistance[] = { 100, 200, 300, 400, 500 };
        discretedistanceinitindex = 1;
        model = "hlc_wp_g36\mesh\G36E1\G36C.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_G36C_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_c_co.tga", "hlc_wp_g36\tex\placeholder\g36_opticrails_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga" };
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class CharmSlot :nia_charms_slot{};
        };
        inertia = 0.28;
        __DEXTERITY(2.8, 0);
        modes[] = { "Single", "Burst", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };

            dispersion = 0.0008727;
            __ROF(750);

            __AI_ROF_CQB_SINGLE;
        };

        class Burst : Mode_Burst {
            burst = 2;
            textureType = "dual";
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };

            dispersion = 0.0008727;
            __ROF(750);

            __AI_ROF_CQB_CLOSE_BURST;
        };

        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_g36\snd\g36_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_Shot_SoundSet", "g36c_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_silencerShot_SoundSet", "g36_silencerTail_SoundSet" };
            };

            dispersion = 0.0008727;
            __ROF(750);

            __AI_ROF_RIFLE_SMALL_FULLAUTO;
        };

        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
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
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST; 
        };
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36c_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36c_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36c_CMAG";
            default = "hlc_rifle_G36C";
        };
    };
    class hlc_rifle_G36c_CMAG : hlc_rifle_G36C
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_g36c-cmag_ca.paa";
        inertia = 0.28+0.21;
        __DEXTERITY(2.8+2.1, 0);
    };

    class hlc_rifle_G36E1 : hlc_rifle_g36A1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        scope = public;
        model = "hlc_wp_g36\mesh\G36E1\G36.p3d";
        displayName = $STR_NIA_rifle_G36E;
        picture = "\hlc_wp_g36\tex\ui\Gear_G36E_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_e1_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_export_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36E1_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36E1_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36E1_CMAG";
            default = "hlc_rifle_G36E1";
        };
    };
    class hlc_rifle_G36E1_CMAG : hlc_rifle_G36E1
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_g36e-cmag_ca.paa";
        inertia = 0.36+0.21;
        __DEXTERITY(3.6+2.1, 0);

    };

    class hlc_rifle_G36E1AG36 : hlc_rifle_G36A1AG36 {
        dlc = "Niarms_G36";
        author = "Toadie";
        scope = public;
        model = "hlc_wp_g36\mesh\G36E1\AG36.p3d";
        displayName = $STR_NIA_rifle_G36EGL;
        picture = "\hlc_wp_g36\tex\ui\gear_AG36E_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "AG36" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_e1_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_export_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\g36_ag36_co.tga" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36E1AG36_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36E1AG36_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36E1AG36_CMAG";
            default = "hlc_rifle_G36E1AG36";
        };
    };
    class hlc_rifle_G36E1AG36_CMAG : hlc_rifle_G36E1AG36
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_ag36E-CMAG_ca.paa";
        inertia = 0.51+0.21;
        __DEXTERITY(3.6+1.5+2.1, 0);
    };

    class hlc_rifle_G36E1AG36_Romi : hlc_rifle_G36E1AG36
    {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36EGL_Romi;
        scope = public;
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\daitomod\g36_commonmap_e1_co.tga", "hlc_wp_g36\tex\commonmaps\daitomod\g36_dualoptics_export_co.tga", "hlc_wp_g36\tex\commonmaps\daitomod\g36_magwell_co.tga", "hlc_wp_g36\tex\commonmaps\daitomod\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\commonmaps\daitomod\g36_ag36_co.tga" };

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36E1AG36_Romi_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36E1AG36_Romi_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36E1AG36_Romi_CMAG";
            default = "hlc_rifle_G36E1AG36_Romi";
        };
    };
    class hlc_rifle_G36E1AG36_Romi_CMAG : hlc_rifle_G36E1AG36_Romi
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\gear_ag36E-Romicmag_ca.paa";
        inertia = 0.51+0.21;
        __DEXTERITY(3.6+1.5+2.1, 0);
    };

    class hlc_rifle_G36KE1 : hlc_rifle_g36KA1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        scope = public;
        model = "hlc_wp_g36\mesh\G36E1\G36k.p3d";
        displayName = $STR_NIA_rifle_G36KE;
        picture = "\hlc_wp_g36\tex\ui\gear_g36ke_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_ke_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_export_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga" };
        modes[] = { "Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KE1_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KE1_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KE1_CMAG";
            default = "hlc_rifle_G36KE1";
        };
    };
    class hlc_rifle_G36KE1_CMAG : hlc_rifle_G36KE1
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_g36ke-cmag_ca.paa";
        inertia = 0.34+0.21;
        __DEXTERITY(3.4+2.1, 0);
    };

    class hlc_rifle_G36V : hlc_rifle_G36E1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36V;
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        model = "hlc_wp_g36\mesh\G36V\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36V_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "AG36" };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_STD.rtm" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_v_co.tga", "hlc_wp_g36\tex\placeholder\g36_opticrails_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\g36_ag36_co.tga" };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 69;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot :asdg_UnderSlot {};
            class GripodSlot : nia_rifle_grips_slot {};
            class CharmSlot{};
        };
        inertia = 0.33;
        __DEXTERITY(3.3, 0);

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36V_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36V_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36V_CMAG";
            default = "hlc_rifle_G36V";
        };
        rhs_grip1_change = "hlc_rifle_G36V_grip";
        rhs_grip2_change = "hlc_rifle_G36V_grip2";
        rhs_grip3_change = "hlc_rifle_G36V_grip3";
        baseWeapon = "hlc_rifle_G36V";
    };

    class hlc_rifle_G36V_grip : hlc_rifle_G36V
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_VFG.rtm" };
        inertia = (0.36 + 0.066);
        __DEXTERITY((3.6 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36V_CMAG_grip";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36V_CMAG_grip";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36V_CMAG_grip";
            default = "hlc_rifle_G36V_grip";
        };
    };
    class hlc_rifle_G36V_grip2 : hlc_rifle_G36V
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_AFG.rtm" };
        inertia = (0.36 + 0.066);
        __DEXTERITY((3.6 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36V_CMAG_grip2";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36V_CMAG_grip2";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36V_CMAG_grip2";
            default = "hlc_rifle_G36V_grip2";
        };
    };
    class hlc_rifle_G36V_grip3 : hlc_rifle_G36V
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_VFG.rtm" };
        inertia = (0.36 + 0.066);
        __DEXTERITY((3.6 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36V_CMAG_grip3";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36V_CMAG_grip3";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36V_CMAG_grip3";
            default = "hlc_rifle_G36V_grip3";
        };
    };

    class hlc_rifle_G36V_CMAG : hlc_rifle_G36V
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_g36v-cmag_ca.paa";
        inertia = 0.36+0.21;
        __DEXTERITY(3.6+2.1, 0);
        rhs_grip1_change = "hlc_rifle_G36V_CMAG_grip";
        rhs_grip2_change = "hlc_rifle_G36V_CMAG_grip2";
        rhs_grip3_change = "hlc_rifle_G36V_CMAG_grip3";
        baseWeapon = "hlc_rifle_G36V_CMAG";
    };
    class hlc_rifle_G36V_CMAG_grip : hlc_rifle_G36V_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_VFG.rtm" };
        inertia = (0.36 + 0.21 + 0.066);
        __DEXTERITY((3.6 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36V_CMAG_grip2 : hlc_rifle_G36V_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_AFG.rtm" };
        inertia = (0.36 + 0.21 + 0.066);
        __DEXTERITY((3.6 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36V_CMAG_grip3 : hlc_rifle_G36V_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36V_VFG.rtm" };
        inertia = (0.36 + 0.21 + 0.066);
        __DEXTERITY((3.6 + 2.1 + 0.66), 1);
    };


    class hlc_rifle_G36KV : hlc_rifle_G36KE1 {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36KV;
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        model = "hlc_wp_g36\mesh\G36V\G36K.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36KV_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "AG36" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_kv_co.tga", "hlc_wp_g36\tex\placeholder\g36_opticrails_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\g36_ag36_co.tga" };
        class OpticsModes {
            class Kolimator {
                cameradir = "";
                distancezoommax = 100;
                distancezoommin = 100;
                memorypointcamera = "eye";
                opticsdisableperipherialvision = 0;
                opticsflare = 0;
                opticsid = 1;
                opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
                __OPTICSZOOM_1X;
                usemodeloptics = 0;
                visionmode[] = {};
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 60;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot :asdg_UnderSlot {};
            class GripodSlot : nia_rifle_grips_slot {};
            class CharmSlot{};
        };
        inertia = 0.3;
        __DEXTERITY(3.0, 0);

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KV_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KV_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KV_CMAG";
            default = "hlc_rifle_G36KV";
        };
        rhs_grip1_change = "hlc_rifle_G36KV_grip";
        rhs_grip2_change = "hlc_rifle_G36KV_grip2";
        rhs_grip3_change = "hlc_rifle_G36KV_grip3";
        baseWeapon = "hlc_rifle_G36KV";
    };
    class hlc_rifle_G36KV_grip : hlc_rifle_G36KV
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_VFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.3 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KV_CMAG_grip";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KV_CMAG_grip";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KV_CMAG_grip";
            default = "hlc_rifle_G36KV_grip";
        };
    };
    class hlc_rifle_G36KV_grip2 : hlc_rifle_G36KV
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_AFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.3 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KV_CMAG_grip2";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KV_CMAG_grip2";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KV_CMAG_grip2";
            default = "hlc_rifle_G36KV_grip2";
        };
    };
    class hlc_rifle_G36KV_grip3 : hlc_rifle_G36KV
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_VFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.3 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KV_CMAG_grip3";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KV_CMAG_grip3";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KV_CMAG_grip3";
            default = "hlc_rifle_G36KV_grip3";
        };
    };
    class hlc_rifle_G36KV_CMAG : hlc_rifle_G36KV
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_g36kv-cmag_ca.paa";
        inertia = 0.33+0.21;
        __DEXTERITY(3.3+2.1, 0);
        rhs_grip1_change = "hlc_rifle_G36KV_CMAG_grip";
        rhs_grip2_change = "hlc_rifle_G36KV_CMAG_grip2";
        rhs_grip3_change = "hlc_rifle_G36KV_CMAG_grip3";
        baseWeapon = "hlc_rifle_G36KV_CMAG";
    };

    class hlc_rifle_G36KV_CMAG_grip : hlc_rifle_G36KV_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_VFG.rtm" };
        inertia = (0.33 + 0.21 + 0.066);
        __DEXTERITY((3.3 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36KV_CMAG_grip2 : hlc_rifle_G36KV_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_AFG.rtm" };
        inertia = (0.33 + 0.21 + 0.066);
        __DEXTERITY((3.3 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36KV_CMAG_grip3 : hlc_rifle_G36KV_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_VFG.rtm" };
        inertia = (0.36 + 0.21 + 0.066);
        __DEXTERITY((3.6 + 2.1 + 0.66), 1);
    };


    class hlc_rifle_G36CV : hlc_rifle_G36C {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36CV;
        reloadAction = "HLC_GestureReloadG36V";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36EV_reload", 0.9, 1, 35 };
        model = "hlc_wp_g36\mesh\G36V\G36C.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36CV_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "AG36" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_cv_co.tga", "hlc_wp_g36\tex\placeholder\g36_opticrails_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\g36_ag36_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot :asdg_UnderSlot {};
            class GripodSlot : nia_rifle_grips_slot {};
            class CharmSlot{};
        };
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36cV_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36cV_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36cV_CMAG";
            default = "hlc_rifle_G36cV";
        };
        rhs_grip1_change = "hlc_rifle_G36CV_grip";
        rhs_grip2_change = "hlc_rifle_G36CV_grip2";
        rhs_grip3_change = "hlc_rifle_G36CV_grip3";
        baseWeapon = "hlc_rifle_G36CV";
    };
    class hlc_rifle_G36CV_grip : hlc_rifle_G36CV
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_VFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((3.6 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36CV_CMAG_grip";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36CV_CMAG_grip";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36CV_CMAG_grip";
            default = "hlc_rifle_G36CV_grip";
        };
    };
    class hlc_rifle_G36CV_grip2 : hlc_rifle_G36CV
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_AFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((2.8 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36CV_CMAG_grip2";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36CV_CMAG_grip2";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36CV_CMAG_grip2";
            default = "hlc_rifle_G36CV_grip2";
        };
    };
    class hlc_rifle_G36CV_grip3 : hlc_rifle_G36CV
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_VFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((2.8 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36CV_CMAG_grip3";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36CV_CMAG_grip3";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36CV_CMAG_grip3";
            default = "hlc_rifle_G36CV_grip3";
        };
    };

    class hlc_rifle_G36cV_CMAG : hlc_rifle_G36cV
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\Gear_g36cv-cmag_ca.paa";
        inertia = 0.28+0.21;
        __DEXTERITY(2.8+2.1, 0);
        rhs_grip1_change = "hlc_rifle_G36CV_CMAG_grip";
        rhs_grip2_change = "hlc_rifle_G36CV_CMAG_grip2";
        rhs_grip3_change = "hlc_rifle_G36CV_CMAG_grip3";
        baseWeapon = "hlc_rifle_G36CV_CMAG";
    };
    class hlc_rifle_G36CV_CMAG_grip : hlc_rifle_G36CV_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_VFG.rtm" };
        inertia = (0.28 + 0.21 + 0.066);
        __DEXTERITY((2.8 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36CV_CMAG_grip2 : hlc_rifle_G36CV_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_AFG.rtm" };
        inertia = (0.28 + 0.21 + 0.066);
        __DEXTERITY((3.6 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36CV_CMAG_grip3 : hlc_rifle_G36CV_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\varient\gesture_g36CV_VFG.rtm" };
        inertia = (0.28 + 0.21 + 0.066);
        __DEXTERITY((2.8 + 2.1 + 0.66), 1);
    };

    class hlc_rifle_G36VAG36 : hlc_rifle_G36V {
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36V_GL;
        muzzles[] = { "this", "hlc_GL_AG36" };
        model = "hlc_wp_g36\mesh\G36V\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36V_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "AG36" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_v_co.tga", "hlc_wp_g36\tex\placeholder\g36_opticrails_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\g36_ag36_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 100;
            class UnderBarrelSlot {};
            class GripodSlot {};
        };
        inertia = 0.48;
        __DEXTERITY(3.3 + 1.5, 0);

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36VAG36_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36VAG36_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36VAG36_CMAG";
            default = "hlc_rifle_G36VAG36";
        };
        baseWeapon = "hlc_rifle_G36VAG36";
    };
    class hlc_rifle_G36VAG36_CMAG : hlc_rifle_G36VAG36
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\gear_ag36v-cmag_ca.paa";
        inertia = 0.48+0.21;
        __DEXTERITY(3.3+1.5+2.1, 0);
    };

    class hlc_rifle_G36KA1KSK : hlc_rifle_G36KV
    {
        model = "hlc_wp_g36\mesh\G36KSK\G36KSK.p3d";
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36KVksk;
        reloadmagazinesound[] = { "hlc_wp_g36\snd\G36_reload", 0.9, 1, 35 };
        reloadAction = "HLC_GestureReloadG36A1";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm" };
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "AG36","Rails" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_kv_co.tga", "hlc_wp_g36\tex\placeholder\g36_opticrails_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\g36_ag36_co.tga", "hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.tga" };
        modes[] = { "Single", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KA1KSK_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KA1KSK_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KA1KSK_CMAG";
            default = "hlc_rifle_G36KA1KSK";
        };
        rhs_grip1_change = "hlc_rifle_G36KA1KSK_grip";
        rhs_grip2_change = "hlc_rifle_G36KA1KSK_grip2";
        rhs_grip3_change = "hlc_rifle_G36KA1KSK_grip3";
        baseWeapon = "hlc_rifle_G36KA1KSK";
    };
    class hlc_rifle_G36KA1KSK_grip : hlc_rifle_G36KA1KSK
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.3 + 0.066);
        __DEXTERITY((3 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip";
            default = "hlc_rifle_G36KA1KSK_grip";
        };
    };
    class hlc_rifle_G36KA1KSK_grip2 : hlc_rifle_G36KA1KSK
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_AFG.rtm" };
        inertia = (0.3 + 0.066);
        __DEXTERITY((3 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip2";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip2";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip2";
            default = "hlc_rifle_G36KA1KSK_grip2";
        };
    };
    class hlc_rifle_G36KA1KSK_grip3 : hlc_rifle_G36KA1KSK
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.3 + 0.066);
        __DEXTERITY((3 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip3";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip3";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KA1KSK_CMAG_grip3";
            default = "hlc_rifle_G36KA1KSK_grip3";
        };
    };
    class hlc_rifle_G36KA1KSK_CMAG : hlc_rifle_G36KA1KSK
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\gear_g36ksk-cmag_ca.paa";
        inertia = 0.3+0.21;
        __DEXTERITY(3.0+2.1, 0);
        rhs_grip1_change = "hlc_rifle_G36KA1KSK_CMAG_grip";
        rhs_grip2_change = "hlc_rifle_G36KA1KSK_CMAG_grip2";
        rhs_grip3_change = "hlc_rifle_G36KA1KSK_CMAG_grip3";
        baseWeapon = "hlc_rifle_G36KA1KSK_CMAG";
    };
    class hlc_rifle_G36KA1KSK_CMAG_grip : hlc_rifle_G36KA1KSK_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.3 + 0.21 + 0.066);
        __DEXTERITY((3 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36KA1KSK_CMAG_grip2 : hlc_rifle_G36KA1KSK_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_AFG.rtm" };
        inertia = (0.3 + 0.21 + 0.066);
        __DEXTERITY((3 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36KA1KSK_CMAG_grip3 : hlc_rifle_G36KA1KSK_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.3 + 0.21 + 0.066);
        __DEXTERITY((3 + 2.1 + 0.66), 1);
    };

    class HLC_Rifle_G36KSKAG36 : hlc_rifle_G36KA1KSK
    {

        model = "hlc_wp_g36\mesh\G36KSK\AG36.p3d";
        dlc = "Niarms_G36";
        author = "Toadie";
        displayName = $STR_NIA_rifle_G36KVksk_GL;
        muzzles[] = { "this", "hlc_GL_AG36" };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95;
            class UnderBarrelSlot {};
        };
        inertia = 0.45;
        __DEXTERITY(3.0 + 1.5, 0);

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "HLC_Rifle_G36KSKAG36_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "HLC_Rifle_G36KSKAG36_CMAG";
            hlc_100rnd_556x45_M_G36 = "HLC_Rifle_G36KSKAG36_CMAG";
            default = "HLC_Rifle_G36KSKAG36";
        };
    };
    class HLC_Rifle_G36KSKAG36_CMAG : HLC_Rifle_G36KSKAG36
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\gear_ag36ksk-cmag_ca.paa";
        inertia = 0.45+0.21;
        __DEXTERITY(3.0+1.5+2.1, 0);
    };

    class hlc_rifle_G36TAC : hlc_rifle_G36V {
        dlc = "Niarms_G36";
        author = "Toadie";
        model = "hlc_wp_g36\mesh\G36tactical\G36.p3d";
        displayName = $STR_NIA_rifle_G36V_TAC;
        picture = "\hlc_wp_g36\tex\ui\Gear_G36tac_ca.paa";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm" };
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock","Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_v_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga","hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
        };

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36TAC_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36TAC_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36TAC_CMAG";
            default = "hlc_rifle_G36TAC";
        };
        rhs_grip1_change = "hlc_rifle_G36TAC_grip";
        rhs_grip2_change = "hlc_rifle_G36TAC_grip2";
        rhs_grip3_change = "hlc_rifle_G36TAC_grip3";
        baseWeapon = "hlc_rifle_G36TAC";
    };
    class hlc_rifle_G36TAC_grip : hlc_rifle_G36TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.32 + 0.066);
        __DEXTERITY((3.2 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36TAC_CMAG_grip";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36TAC_CMAG_grip";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36TAC_CMAG_grip";
            default = "hlc_rifle_G36TAC_grip";
        };
    };
    class hlc_rifle_G36TAC_grip2 : hlc_rifle_G36TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_AFG.rtm" };
        inertia = (0.32 + 0.066);
        __DEXTERITY((3.2 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36TAC_CMAG_grip2";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36TAC_CMAG_grip2";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36TAC_CMAG_grip2";
            default = "hlc_rifle_G36TAC_grip2";
        };
    };
    class hlc_rifle_G36TAC_grip3 : hlc_rifle_G36TAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.32 + 0.066);
        __DEXTERITY((3.2 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36TAC_CMAG_grip3";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36TAC_CMAG_grip3";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36TAC_CMAG_grip3";
            default = "hlc_rifle_G36TAC_grip3";
        };
    };
    class hlc_rifle_G36TAC_CMAG : hlc_rifle_G36TAC
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\gear_g36tac-cmag_ca.paa";
        inertia = 0.32+0.21;
        __DEXTERITY(3.2+2.1, 0);
        rhs_grip1_change = "hlc_rifle_G36TAC_CMAG_grip";
        rhs_grip2_change = "hlc_rifle_G36TAC_CMAG_grip2";
        rhs_grip3_change = "hlc_rifle_G36TAC_CMAG_grip3";
        baseWeapon = "hlc_rifle_G36TAC_CMAG";
    };
    class hlc_rifle_G36TAC_CMAG_grip : hlc_rifle_G36TAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.32 + 0.21 + 0.066);
        __DEXTERITY((3.2 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36TAC_CMAG_grip2 : hlc_rifle_G36TAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_AFG.rtm" };
        inertia = (0.32 + 0.21 + 0.066);
        __DEXTERITY((3.2 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36TAC_CMAG_grip3 : hlc_rifle_G36TAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.32 + 0.21 + 0.066);
        __DEXTERITY((3.2 + 2.1 + 0.66), 1);
    };

    class hlc_rifle_g36KTac : hlc_rifle_G36KV {
        dlc = "Niarms_G36";
        author = "Toadie";
        model = "hlc_wp_g36\mesh\G36tactical\G36K.p3d";
        displayName = $STR_NIA_rifle_G36KV_TAC;
        picture = "\hlc_wp_g36\tex\ui\Gear_G36ktac_ca.paa";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm" };
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_kv_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
        };

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_g36KTac_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_g36KTac_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_g36KTac_CMAG";
            default = "hlc_rifle_g36KTac";
        };
        rhs_grip1_change = "hlc_rifle_G36KTAC_grip";
        rhs_grip2_change = "hlc_rifle_G36KTAC_grip2";
        rhs_grip3_change = "hlc_rifle_G36KTAC_grip3";
        baseWeapon = "hlc_rifle_g36KTac";
    };
    class hlc_rifle_G36KTAC_grip : hlc_rifle_G36KTAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_VFG.rtm" };
        inertia = (0.36 + 0.066);
        __DEXTERITY((3.6 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KTAC_CMAG_grip";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KTAC_CMAG_grip";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KTAC_CMAG_grip";
            default = "hlc_rifle_G36KTAC_grip";
        };
    };
    class hlc_rifle_G36KTAC_grip2 : hlc_rifle_G36KTAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_AFG.rtm" };
        inertia = (0.36 + 0.066);
        __DEXTERITY((3.6 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KTAC_CMAG_grip2";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KTAC_CMAG_grip2";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KTAC_CMAG_grip2";
            default = "hlc_rifle_G36KTAC_grip2";
        };
    };
    class hlc_rifle_G36KTAC_grip3 : hlc_rifle_G36KTAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_VFG.rtm" };
        inertia = (0.36 + 0.066);
        __DEXTERITY((3.6 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36KTAC_CMAG_grip3";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36KTAC_CMAG_grip3";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36KTAC_CMAG_grip3";
            default = "hlc_rifle_G36KTAC_grip3";
        };
    };
    class hlc_rifle_g36KTac_CMAG : hlc_rifle_g36KTac
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\gear_g36ktac-cmag_ca.paa";
        inertia = 0.3+0.21;
        __DEXTERITY(3.0+2.1, 0);
        rhs_grip1_change = "hlc_rifle_G36KTAC_CMAG_grip";
        rhs_grip2_change = "hlc_rifle_G36KTAC_CMAG_grip2";
        rhs_grip3_change = "hlc_rifle_G36KTAC_CMAG_grip3";
        baseWeapon = "hlc_rifle_G36KTAC_CMAG";
    };
    class hlc_rifle_G36KTAC_CMAG_grip : hlc_rifle_G36KTAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_VFG.rtm" };
        inertia = (0.36 + 0.21 + 0.066);
        __DEXTERITY((3.6 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36KTAC_CMAG_grip2 : hlc_rifle_G36KTAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_AFG.rtm" };
        inertia = (0.36 + 0.21 + 0.066);
        __DEXTERITY((3.6 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36KTAC_CMAG_grip3 : hlc_rifle_G36KTAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_VFG.rtm" };
        inertia = (0.36 + 0.21 + 0.066);
        __DEXTERITY((3.6 + 2.1 + 0.66), 1);
    };

    class hlc_rifle_G36CTac : hlc_rifle_G36CV {
        dlc = "Niarms_G36";
        author = "Toadie";
        model = "hlc_wp_g36\mesh\G36tactical\G36C.p3d";
        displayName = $STR_NIA_rifle_G36CV_TAC;
        descriptionShort = "Compact Carbine<br/>Caliber: 5.56mm NATO";
        picture = "\hlc_wp_g36\tex\ui\Gear_G36Ctac_ca.paa";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm" };
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_cv_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.tga", "hlc_wp_g36\tex\placeholder\g36_magwell_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot : asdg_OpticRail1913_short {};
        };

        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36CTac_CMAG";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36CTac_CMAG";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36CTac_CMAG";
            default = "hlc_rifle_G36CTac";
        };
        rhs_grip1_change = "hlc_rifle_G36CTAC_grip";
        rhs_grip2_change = "hlc_rifle_G36CTAC_grip2";
        rhs_grip3_change = "hlc_rifle_G36CTAC_grip3";
        baseWeapon = "hlc_rifle_G36CTAC";
    };
    class hlc_rifle_G36CTAC_grip : hlc_rifle_G36CTAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_VFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((2.8 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36CTAC_CMAG_grip";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36CTAC_CMAG_grip";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36CTAC_CMAG_grip";
            default = "hlc_rifle_G36CTAC_grip";
        };
    };
    class hlc_rifle_G36CTAC_grip2 : hlc_rifle_G36CTAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_AFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((2.8 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36CTAC_CMAG_grip2";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36CTAC_CMAG_grip2";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36CTAC_CMAG_grip2";
            default = "hlc_rifle_G36CTAC_grip2";
        };
    };
    class hlc_rifle_G36CTAC_grip3 : hlc_rifle_G36CTAC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_VFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((2.8 + 0.66), 1);
        class __MAGSWITCHCLASS {
            hlc_100rnd_556x45_EPR_G36 = "hlc_rifle_G36CTAC_CMAG_grip3";
            hlc_100rnd_556x45_Mdim_G36 = "hlc_rifle_G36CTAC_CMAG_grip3";
            hlc_100rnd_556x45_M_G36 = "hlc_rifle_G36CTAC_CMAG_grip3";
            default = "hlc_rifle_G36CTAC_grip3";
        };
    };
    class hlc_rifle_G36CTac_CMAG : hlc_rifle_G36CTac
    {
        scopeArsenal = 0;
        dlc = "Niarms_G36";
        author = "Toadie";
        picture = "\hlc_wp_g36\tex\ui\gear_g36ctac-cmag_ca.paa";
        inertia = 0.28+0.21;
        __DEXTERITY(2.8+2.1, 0);
        rhs_grip1_change = "hlc_rifle_G36CTAC_CMAG_grip";
        rhs_grip2_change = "hlc_rifle_G36CTAC_CMAG_grip2";
        rhs_grip3_change = "hlc_rifle_G36CTAC_CMAG_grip3";
        baseWeapon = "hlc_rifle_G36CTAC_CMAG";
    };
    class hlc_rifle_G36CTAC_CMAG_grip : hlc_rifle_G36CTAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_VFG.rtm" };
        inertia = (0.28 + 0.21 + 0.066);
        __DEXTERITY((2.8 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36CTAC_CMAG_grip2 : hlc_rifle_G36CTAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_AFG.rtm" };
        inertia = (0.28 + 0.21 + 0.066);
        __DEXTERITY((2.8 + 2.1 + 0.66), 1);
    };
    class hlc_rifle_G36CTAC_CMAG_grip3 : hlc_rifle_G36CTAC_CMAG
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_G36TAC_VFG.rtm" };
        inertia = (0.28 + 0.21 + 0.066);
        __DEXTERITY((2.8 + 2.1 + 0.66), 1);
    };
    ///CASELESS 

    class hlc_rifle_G36MLIC : hlc_G36_base {
        dlc = "Niarms_G36";
        author = "Toadie";
        AB_barrelTwist = 12;
        AB_barrelLength = 18.25;
        ACE_barrelTwist = 203;
        ACE_barrelLength = 480;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = false;
        recoil = "recoil_mx";
        displayName = $STR_NIA_rifle_G36_MLI;
        descriptionShort = $STR_NIA_G36MLI_DESC;
        reloadAction = "HLC_GestureReloadG36MLI";
        reloadmagazinesound[] = { "hlc_wp_g36\snd\g36mlic_reload", 0.9, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_STD.rtm" };
        discretedistance[] = { 100, 200, 300, 400, 500,600,700,800 };
        discretedistanceinitindex = 1;
        magazines[] = {
            "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag"
        };
        magazineWell[] = {"CBA_65x39_MX", "CBA_65x39_MX_XL"};
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        model = "hlc_wp_g36\mesh\G36MLIC\G36.p3d";
        picture = "\hlc_wp_g36\tex\ui\gear_g36mli_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "Rail","AG36","Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_mli_co.tga", "hlc_wp_g36\tex\placeholder\G36_OpticRails_co.tga", "hlc_wp_g36\tex\placeholder\G36_magwell_MLIC_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.tga", "hlc_wp_g36\tex\placeholder\G36_AG36_co.tga", "hlc_wp_g36\tex\placeholder\G36_magazine_MLIC_co.tga" };
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.33;
        __DEXTERITY(3.3, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 70;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class UnderBarrelSlot : asdg_UnderSlot {};
            class GripodSlot : nia_rifle_grips_slot {};
        };

        modes[] = { "Single", "Burst2rnd", "FullAuto", "single_medium_optics1", "single_far_optics2" };

        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
            };
            reloadtime = 0.093;
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
            };
            reloadtime = 0.093;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36_MLI_Shot_SoundSet", "g36_MLI_Tail_SoundSet" };
            };

            class SilencedSound : SilencedSound { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "g36_MLI_silencerShot_SoundSet", "g36_MLI_silencerTail_SoundSet" };
            };
            reloadtime = 0.093;
        };
        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
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
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
        };
        rhs_grip1_change = "hlc_rifle_G36MLIC_grip";
        rhs_grip2_change = "hlc_rifle_G36MLIC_grip2";
        rhs_grip3_change = "hlc_rifle_G36MLIC_grip3";
        baseWeapon = "hlc_rifle_G36MLIC";
    };
    class hlc_rifle_G36MLIC_grip : hlc_rifle_G36MLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.3 + 0.66), 1);
    };
    class hlc_rifle_G36MLIC_grip2 : hlc_rifle_G36MLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_AFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.3 + 0.66), 1);
    };
    class hlc_rifle_G36MLIC_grip3 : hlc_rifle_G36MLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.33 + 0.066);
        __DEXTERITY((3.3 + 0.66), 1);
    };

    class hlc_rifle_G36KMLIC : hlc_rifle_G36MLIC {
        dlc = "Niarms_G36";
        author = "Toadie";
        ACE_barrelTwist = 203;
        ACE_barrelLength = 318;
        displayName = $STR_NIA_rifle_G36K_MLI;
        descriptionShort = $STR_NIA_G36MLI_Carbine_DESC;
        model = "hlc_wp_g36\mesh\G36MLIC\G36K.p3d";
        inertia = 0.3;
        __DEXTERITY(3.0, 0);
        picture = "\hlc_wp_g36\tex\ui\gear_g36Kmli_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "Rail", "AG36", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_kmli_co.tga", "hlc_wp_g36\tex\placeholder\G36_OpticRails_co.tga", "hlc_wp_g36\tex\placeholder\G36_magwell_MLIC_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.tga", "hlc_wp_g36\tex\placeholder\G36_AG36_co.tga", "hlc_wp_g36\tex\placeholder\G36_magazine_MLIC_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 63;
        };

        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.088;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.088;
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36k_MLI_Shot_SoundSet", "g36k_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.088;
        };
        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
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
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
        };
        rhs_grip1_change = "hlc_rifle_G36KMLIC_grip";
        rhs_grip2_change = "hlc_rifle_G36KMLIC_grip2";
        rhs_grip3_change = "hlc_rifle_G36KMLIC_grip3";
        baseWeapon = "hlc_rifle_G36KMLIC";
    };
    class hlc_rifle_G36KMLIC_grip : hlc_rifle_G36KMLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.3 + 0.066);
        __DEXTERITY((3 + 0.66), 1);
    };
    class hlc_rifle_G36KMLIC_grip2 : hlc_rifle_G36KMLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_AFG.rtm" };
        inertia = (0.3 + 0.066);
        __DEXTERITY((3 + 0.66), 1);
    };
    class hlc_rifle_G36KMLIC_grip3 : hlc_rifle_G36KMLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.3 + 0.066);
        __DEXTERITY((3 + 0.66), 1);
    };
    class hlc_rifle_G36CMLIC : hlc_rifle_G36MLIC {
        dlc = "Niarms_G36";
        author = "Toadie";
        ACE_barrelTwist = 203;
        ACE_barrelLength = 278;
        displayName = $STR_NIA_rifle_G36C_MLI;
        descriptionShort = $STR_NIA_G36MLI_Compact_DESC;
        model = "hlc_wp_g36\mesh\G36MLIC\G36C.p3d";
        inertia = 0.28;
        __DEXTERITY(2.8, 0);
        picture = "\hlc_wp_g36\tex\ui\gear_g36Cmli_ca.paa";
        hiddenSelections[] = { "Reciever", "Optics", "Magwell", "Stock", "Rail", "AG36", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_g36\tex\commonmaps\g36_commonmap_cmli_co.tga", "hlc_wp_g36\tex\placeholder\g36_dualoptics_rds_co.tga", "hlc_wp_g36\tex\placeholder\G36_magwell_MLIC_co.tga", "hlc_wp_g36\tex\placeholder\g36_stockfurniture_co.tga", "hlc_wp_g36\tex\placeholder\G36_MountsrailsFin_co.tga", "hlc_wp_g36\tex\placeholder\G36_AG36_co.tga", "hlc_wp_g36\tex\placeholder\G36_magazine_MLIC_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 68;
            class CowsSlot : asdg_OpticRail1913_short {};
        };

        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.082;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            aiRateOfFireDispersion = 2;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 400;
            maxRangeProbab = 0.1;
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.082;

            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            aiRateOfFireDispersion = 1;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
        };
        class Burst : Burst {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "g36c_MLI_Shot_SoundSet", "g36c_MLI_Tail_SoundSet" };
            };
            dispersion = 0.0008727;
            reloadtime = 0.082;

            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            aiRateOfFireDispersion = 2;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
        };
        class Burst2rnd : Burst {
            burst = 2;
            textureType = "dual";
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            __AI_ROF_RIFLE_SMALL_FAR_FAST_SINGLE;
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
        class AI_Burst_close : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_SMALL_CLOSE_BURST; \
        };
        rhs_grip1_change = "hlc_rifle_G36CMLIC_grip";
        rhs_grip2_change = "hlc_rifle_G36CMLIC_grip2";
        rhs_grip3_change = "hlc_rifle_G36CMLIC_grip3";
        baseWeapon = "hlc_rifle_G36CMLIC";
    };
    class hlc_rifle_G36CMLIC_grip : hlc_rifle_G36CMLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((2.8 + 0.66), 1);
    };
    class hlc_rifle_G36CMLIC_grip2 : hlc_rifle_G36CMLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_AFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((2.8 + 0.66), 1);
    };
    class hlc_rifle_G36CMLIC_grip3 : hlc_rifle_G36CMLIC
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\MLI\gesture_g36TAC_VFG.rtm" };
        inertia = (0.28 + 0.066);
        __DEXTERITY((2.8 + 0.66), 1);
    };

    class hlc_rifle_G36MLIAG36 : hlc_rifle_G36MLIC {
        dlc = "Niarms_G36";
        displayName = $STR_NIA_rifle_G36_MLI_GL;
        muzzles[] = { "this", "hlc_GL_AG36" };
        model = "hlc_wp_g36\mesh\G36MLIC\AG36.p3d";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_g36\anim\handpose_ag36.rtm" };
        picture = "\hlc_wp_g36\tex\ui\gear_AG36MLI_ca.paa";

        inertia = 0.48;
        __DEXTERITY(3.3 + 1.5, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 100;
            class UnderBarrelSlot {};
            class GripodSlot {};
        };
        baseWeapon = "hlc_rifle_G36MLIAG36";
    };
};
