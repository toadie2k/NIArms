#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
class CfgPatches
{
    class hlcweapons_stgw57
    {
        requiredaddons[] = {"hlcweapons_core"};
        units[] = { "HLC_SG510_ammobox", "Weapon_rifle_stgw57ris", "Weapon_rifle_stgw57", "weapon_rifle_stgw57_commando", "weapon_rifle_sig5104", "weapon_rifle_amt" };
        weapons[] = { "hlc_rifle_STGW57", "hlc_rifle_stgw57_RIS", "hlc_rifle_stgw57_commando", "hlc_rifle_sig5104", "hlc_rifle_amt", "hlc_optic_Kern", "hlc_optic_Kern2d" };
        magazines[] = { "hlc_24Rnd_75x55_B_stgw", "hlc_24Rnd_75x55_ap_stgw", "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_mk316_amt", "hlc_20Rnd_762x51_bball_amt", "hlc_20Rnd_762x51_T_amt" };
        version = "v1.25";
        author = "toadie";
    };
};
class cfgMods
{
    class Mod_Base;
    class Niarms_SG510 :Mod_Base
    {
        name = "NIArsenal: SG150 Rifles";
        picture = "hlc_wp_sigamt\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_sigamt\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_sigamt\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_sigamt\tex\ui\NIArms1_ca.paa";
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class nia_charms_slot;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762 : asdg_MuzzleSlot {
};
class asdg_MuzzleSlot_556 : asdg_MuzzleSlot { // for 5.56x45 universal mount suppressors
    class compatibleItems {};
};

class cfgRecoils
{
    class recoil_ebr;
    class recoil_stgw57 : recoil_ebr
    {
        muzzleOuter[] = { 0.5, 1.5, 0.6, 0.5 };
        kickBack[] = { 0.07, 0.09 };
        temporary = 0.017;
        permanent = 0.09;
    };
    class recoil_stgw57k : recoil_ebr
    {
        muzzleOuter[] = { 0.6, 1.3, 0.65, 0.45 };
        kickBack[] = { 0.08, 0.12 };
        temporary = 0.021;
        permanent = 0.12;
    };
    class recoil_5104 : recoil_ebr
    {
        muzzleOuter[] = { 0.4, 1.5, 0.65, 0.45 };
        kickBack[] = { 0.07, 0.10 };
        temporary = 0.017;
        permanent = 0.11;
    };
};

class CfgMovesBasic
{
    class DefaultDie;
    class ManActions
    {
        HLC_GestureReloadSTGW57 = "HLC_GestureReloadSTGW57"; // Would reccommend changing the naming convention, just so nothing overlaps
        HLC_GestureReloadAMT = "HLC_GestureReloadAMT";
    };

    class Actions {
        class NoActions : ManActions {
            HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57", "Gesture" };
            HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT", "Gesture" };
        };
        class RifleBaseStandActions;
        class RifleProneActions : RifleBaseStandActions
        {
            HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57_Prone", "Gesture" };
            HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT_Prone", "Gesture" };
        };
        class RifleAdjustProneBaseActions;
        class RifleAdjustRProneActions : RifleAdjustProneBaseActions
        {
            HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57_Context", "Gesture" };
            HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT_Context", "Gesture" };

        };
        class RifleAdjustLProneActions : RifleAdjustProneBaseActions
        {
            HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57_Context", "Gesture" };
            HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT_Context", "Gesture" };

            class RifleAdjustFProneActions : RifleAdjustProneBaseActions
            {
                HLC_GestureReloadSTGW57[] = { "HLC_GestureReloadSTGW57_Context", "Gesture" };
                HLC_GestureReloadAMT[] = { "HLC_GestureReloadAMT_Context", "Gesture" };
            };
        };
    };
};

class CfgGesturesMale
{
    class Default;
    class States
    {

        class HLC_GestureReloadSTGW57 :Default
        {
            file = "hlc_wp_sigamt\anim\reload_stgw57_stand.rtm";
            speed = 0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.4;
            headBobMode = 2;
            leftHandIKCurve[] = { 0.0375, 1, 0.05625, 0, 0.61875, 0, 0.65625, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };
        class HLC_GestureReloadAMT :Default
        {
            file = "hlc_wp_sigamt\anim\reload_amt_stand.rtm";
            speed = 0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.4;
            headBobMode = 2;
            leftHandIKCurve[] = { 0.0375, 1, 0.05625, 0, 0.61875, 0, 0.65625, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };
        /*
        DISREGARD.
        class HLC_GestureReloadSTGW57_Crouch :Default
        {
        file = "hlc_wp_sigamt\anim\reload_stgw57_stand.rtm";
        speed = 0.1875;
        looped = false;
        mask = "handsWeapon";
        headBobStrength = 0.45;
        headBobMode = 2;
        leftHandIKCurve[] = { 0, 1, 0.0625, 0, 0.61875, 0, 0.65625, 1 };
        leftHandIKBeg = true;
        leftHandIKEnd = true;
        rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };*/
        class HLC_GestureReloadSTGW57_Prone :Default
        {
            file = "hlc_wp_sigamt\anim\reload_stgw57_prone.rtm";
            speed = 0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.0625, 0, 0.61875, 0, 0.65625, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };
        class HLC_GestureReloadAMT_Prone :Default
        {
            file = "hlc_wp_sigamt\anim\reload_amt_prone.rtm";
            speed = 0.1875;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            leftHandIKCurve[] = { 0, 1, 0.0625, 0, 0.61875, 0, 0.65625, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            rightHandIKCurve[] = { 0.6625, 1, 0.69375, 0, 0.8375, 0, 0.89375, 1 };
        };
        class HLC_GestureReloadSTGW57_Context : HLC_GestureReloadSTGW57
        {
            mask = "handsWeapon_context";
        };
        class HLC_GestureReloadAMT_Context : HLC_GestureReloadAMT
        {
            mask = "handsWeapon_context";
        };
    };
};
class CfgVehicles
{
    class NATO_Box_Base;
    class HLC_SG510_ammobox : NATO_Box_Base
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "Ammo";
        displayName = "HLC SIG  510 Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines
        {
            __M_MAG(hlc_24Rnd_75x55_B_stgw,30);
            __M_MAG(hlc_24Rnd_75x55_ap_stgw,30);
            __M_MAG(hlc_20Rnd_762x51_b_amt,30);
            __M_MAG(hlc_20Rnd_762x51_mk316_amt,30);
            __M_MAG(hlc_20Rnd_762x51_bball_amt,30);
            __M_MAG(hlc_20Rnd_762x51_T_amt,30);
            __M_MAG(hlc_24Rnd_75x55_T_stgw,30);
        };
        class TransportWeapons
        {
            __M_WEP(hlc_rifle_sig5104,20);
            __M_WEP(hlc_rifle_stgw57,20);
            __M_WEP(hlc_rifle_amt,20);
            __M_WEP(hlc_rifle_stgw57_RIS,20);
            __M_WEP(hlc_rifle_stgw57_commando,20);
        };
        class TransportItems
        {
            __M_ITM(hlc_optic_Kern,10);
            __M_ITM(hlc_optic_Kern2d,10);
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_ACO_grn,10);
        };
    };
    class Weapon_Base_F;
    class Weapon_rifle_stgw57ris : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "Stgw.57 RIS";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_stgw57_RIS";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_24Rnd_75x55_B_stgw";
                count = 1;
            };
        };
    };
    class Weapon_rifle_stgw57 : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "Stgw.57";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_STGW57";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_24Rnd_75x55_B_stgw";
                count = 1;
            };
        };
    };
    class weapon_rifle_stgw57_commando : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "SIG Stgw.57 Commando";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_stgw57_commando";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_24Rnd_75x55_B_stgw";
                count = 1;
            };
        };
    };

    class weapon_rifle_sig5104 : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "SIG SG510-4";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_sig5104";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_20Rnd_762x51_b_amt";
                count = 1;
            };
        };
    };

    class weapon_rifle_amt : Weapon_Base_F
    {
        dlc = "Niarms_SG510";
        scope = 2;
        scopeCurator = 2;
        displayName = "SIG AMT";
        author = "Toadie";
        vehicleClass = "WeaponsPrimary";
        class TransportWeapons
        {
            class srifle_EBR_F
            {
                weapon = "hlc_rifle_amt";
                count = 1;
            };
        };
        class TransportMagazines
        {
            class 20Rnd_762x51_Mag
            {
                magazine = "hlc_20Rnd_762x51_b_amt";
                count = 1;
            };
        };
    };

};
class CfgAmmo {
    /*external*/ class B_556x45_Ball;
    // Load Data - GP11
    // Provided by Spartan0536
    /*
    Swiss Military Designated GP11-FMJBT
    Full Metal Jacket Boat Tail
    174 Grains
    2560 ft/s
    2535 ft/lbs KE
    .505 Ballistics Coefficient (G1)
    -0.00 AirFriction
    Penetrates 3mm of RHA at 500m
    */
    
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_24Rnd_75x55_B_stgw : 30Rnd_556x45_Stanag{
        dlc = "Niarms_SG510";
        author = "Toadie, Spartan0536";
        ammo = "HLC_GP11_FMJ";
        count = 24;
        descriptionshort = $STR_NIA_DESC_24Rnd_75x55_B;
        displayname = $STR_NIA_24rnd_75x55_B_STGW;
        initspeed = 780;
        mass = 14;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_ball_ca.paa";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
        modelSpecial = \hlc_wp_sigamt\mesh\magazine\Proxy\24rnd_GP11_STGW57;
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_75x55_FMJ;
    };
    class hlc_24Rnd_75x55_ap_stgw : hlc_24Rnd_75x55_B_stgw{
        dlc = "Niarms_SG510";
        author = "Toadie, Spartan0536";
        ammo = "HLC_GP11_APBT";
        count = 24;
        descriptionshort = $STR_NIA_DESC_24Rnd_75x55_AP;
        displayname = $STR_NIA_24rnd_75x55_AP_STGW;
        initspeed = 910;
        mass = 14;
        picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_AP_ca.paa";
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_75x55_AP;
    };
    class hlc_24Rnd_75x55_T_stgw : hlc_24Rnd_75x55_ap_stgw {
        dlc = "Niarms_SG510";
        author = "Toadie, Spartan0536";
        ammo = "HLC_GP11_tracer";
        descriptionshort = $STR_NIA_DESC_24Rnd_75x55_T;
        displayname = $STR_NIA_24rnd_75x55_t_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 14;
        tracersevery = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_Tracer_ca.paa";
        displaynameshort = $STR_NIA_75x55_Tracer;
    };
    class hlc_20Rnd_762x51_b_amt : hlc_24Rnd_75x55_B_stgw{
        dlc = "Niarms_SG510";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_B_fal;
        displayname = $STR_NIA_20rnd_762x51_B_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        modelSpecial = \hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW;
        modelSpecialIsProxy = 1;
        initspeed = 908.4;
        mass = 12;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_EPR;
    };
    class hlc_20Rnd_762x51_mk316_amt : hlc_24Rnd_75x55_B_stgw{
        dlc = "Niarms_SG510";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_MK316_20in";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_sblr_fal;
        displayname = $STR_NIA_20rnd_762x51_SBLR_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        initspeed = 930;
        mass = 12;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_SBLR;
    };
    class hlc_20Rnd_762x51_bball_amt : hlc_24Rnd_75x55_B_stgw{
        dlc = "Niarms_SG510";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_Barrier";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_sost_fal;
        displayname = $STR_NIA_20rnd_762x51_SOST_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        initspeed = 930;
        mass = 12;
        lastroundstracer = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_SOST;
    };
    class hlc_20Rnd_762x51_T_amt : hlc_20Rnd_762x51_b_amt {
        dlc = "Niarms_SG510";
        author = "Toadie, Spartan0536";
        ammo = "B_762x51_Tracer_Green";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_T_fal;
        displayname = $STR_NIA_20rnd_762x51_Tracer_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 12;
        tracersevery = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_tracer_ca.paa";
        displaynameshort = $STR_NIA_762NATO_Tracer;
    };
    class hlc_20Rnd_762x51_TDim_amt : hlc_20Rnd_762x51_b_amt {
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_Tdim_fal;
        displayname = $STR_NIA_20Rnd_762x51_Tdim_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 16.7;
        tracersevery = 1;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_tracer_ca.paa";
        displaynameshort = $STR_NIA_762NATO_IRDIM;
    };
    class hlc_20rnd_762x51_M_amt : hlc_20Rnd_762x51_b_amt {
        author = "Toadie, Spartan0536";
        count = 20;
        mass = 16.7;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_M_fal;
        displayname = $STR_NIA_20rnd_762x51_M_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        initspeed = 908.4;
        lastroundstracer = 3;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_M;
    };
    class hlc_20rnd_762x51_MDIM_amt : hlc_20Rnd_762x51_b_amt {
        ammo = "HLC_B_762x51_Tracer_Dim";
        author = "Toadie, Spartan0536";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_Mdim_fal;
        displayname = $STR_NIA_20rnd_762x51_MDIM_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        initspeed = 908.4;
        mass = 16.7;
        lastroundstracer = 3;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_MDim;
    };
    class hlc_20Rnd_762x51_S_amt : hlc_20Rnd_762x51_b_amt {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_s_fal;
        displayname = $STR_NIA_20Rnd_762x51_S_STGW;
        model = "\hlc_wp_sigamt\mesh\magazine\magazine_amt.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 16.3;
        tracersevery = 0;
        initspeed = 325;
        displaynameshort = $STR_NIA_762NATO_Subsonic;
        picture = "\hlc_wp_sigamt\tex\ui\m_amt_subsonic_ca.paa";
    };

};

class CfgMagazineWells {
    class CBA_75x55_STGW57 {
        NIA_mags[] = {
			"hlc_24Rnd_75x55_B_stgw",
			"hlc_24Rnd_75x55_ap_stgw",
			"hlc_24Rnd_75x55_T_stgw"
		};
    };
    class CBA_762x51_SIGAMT {
        NIA_mags[] = {
			"hlc_20Rnd_762x51_b_amt",
			"hlc_20Rnd_762x51_mk316_amt",
			"hlc_20Rnd_762x51_bball_amt",
			"hlc_20Rnd_762x51_T_amt",
            "hlc_20Rnd_762x51_TDim_amt",
            "hlc_20rnd_762x51_MDIM_amt",
            "hlc_20Rnd_762x51_S_amt"
		};
    };
};

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F : Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class InventoryOpticsItem_Base_F;
    class optic_aco;
    class hlc_optic_KernBase : optic_aco {
        class ItemInfo : InventoryOpticsItem_Base_F{
            class OpticsModes
            {
                class Snip;
                class Kolimator;
            };
        };
    };

    class hlc_optic_Kern : hlc_optic_KernBase
    {
        dlc = "Niarms_SG510";
        scope = public;
        author = "Toadie, Kaukaussus";
        displayname = $STR_NIA_optic_Kern_510;
        picture = "\hlc_wp_sigamt\tex\ui\gear_aarau_x_ca";
        model = "hlc_wp_sigamt\mesh\aarau\AARAU.p3d";
        weaponInfoType = "RscWeaponZeroing";
        inertia = 0.2;
		tmr_optics_enhanced = 0;
        
    };
    class hlc_optic_Kern2d : hlc_optic_Kern
    {
        author = "Toadie, Kaukaussus";
        displayname = $STR_NIA_optic_Kern2D_510;
        class ItemInfo : ItemInfo
        {
            class OpticsModes : OpticsModes
            {
                class Snip : Snip
                {
                    useModelOptics = 1;
                    modelOptics[] = { "\hlc_wp_sigamt\mesh\aarau\aarau_optics" };
                };
                class Kolimator : Kolimator {};
            };
        };
    };

    class hlc_STGW_base : Rifle_Base_F
    {
        dlc = "Niarms_SG510";
        scope = protected;
        recoil = "recoil_ebr";
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = false;
        magazineReloadSwitchPhase = 0.5;
        magazines[] = {
            "hlc_24Rnd_75x55_B_stgw", "hlc_24Rnd_75x55_ap_stgw", "hlc_24Rnd_75x55_T_stgw"
        };
        magazineWell[] = {"CBA_75x55_STGW57"};
        class Library
        {
            libTextDesc = "SIG Stgw.510";
        };
        reloadAction = "GestureReloadEBR";
        __AI_DISPERSION_COEF;
        cameraDir = "";
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
        drysound[] = { "hlc_wp_sigamt\snd\amt_dryfire", 1.01, 1, 10 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        modes[] = { "Single", "FullAuto", "single_close_optics1", "single_medium_optics1", "single_far_optics1", "fullauto_medium" };
        reloadmagazinesound[] = { "hlc_wp_sigamt\snd\sigamt_reload", 0.630957, 1, 35 };
        changeFiremodeSound[] = { "hlc_wp_sigamt\snd\amtswitch", 1, 1, 8 };
        soundbullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";


        class WeaponSlotsInfo : WeaponSlotsInfo {
            class MuzzleSlot {};
            class CowsSlot {};
            class PointerSlot {};
        };
        class Single : Mode_SemiAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            reloadtime = 0.11;
            __AI_ROF_RIFLE_MEDIUM_SEMI;
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = { "StandardSound", "SilencedSound" };

            class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
            {
                weaponSoundEffect = "DefaultRifle";

                closure1[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                closure2[] = { "\hlc_wp_sigamt\snd\amt_first", 1, 1, 10 };
                soundClosure[] = { closure1, 0.5, closure2, 0.5 };
            };

            class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
            {
                soundSetShot[] = { "sg510_Shot_SoundSet", "sg510_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
            {
                soundSetShot[] = { "sg510_silencerShot_SoundSet", "sg510_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            reloadtime = 0.105;

            __AI_ROF_RIFLE_MEDIUM_FULLAUTO;
        };
        class single_close_optics1 : FullAuto {
            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_far_optics1 : single_medium_optics1 {
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {
            showToPlayer = 0;
            burst = 5;
            aiBurstTerminable = 1;
            __AI_ROF_RIFLE_MEDIUM_FULLAUTO;
        };
    };

    class hlc_rifle_STGW57 : hlc_STGW_base
    {
        author = "Toadie";
        AB_barrelTwist = 10.6;
        AB_barrelLength = 23;
        ACE_barrelTwist = 270.8;
        ACE_barrelLength = 583.4;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = true;
        recoil = "recoil_stgw57";
        displayName = $STR_NIA_rifle_STGW57;
        descriptionShort = $STR_NIA_Stg57_DESC;
        reloadAction = "HLC_GestureReloadSTGW57";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        model = "hlc_wp_sigamt\mesh\stgw\stgw57.p3d";
        picture = "\hlc_wp_sigamt\tex\ui\gear_57_x_ca.paa";
        hiddenSelections[] = { "Barrels_sights", "Bipods", "pe57Objects", "Reciever", "Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_sigamt\tex\toadie_510\510_barrel_sights_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_bipodshandguards_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_pe57_objects_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_reciever_co.tga", "" };
        discretedistance[] = { 100, 150, 200, 230, 260, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640 };
        discretedistanceinitindex = 2;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.65;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 89;
            class CowsSlot {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleitems[] = { "hlc_optic_Kern", "hlc_optic_Kern2d" };
            };
            class CharmSlot : nia_charms_slot{};
        };
    };
    class hlc_rifle_stgw57_RIS : hlc_STGW_base
    {
        author = "Toadie, Kaukassus";
        picture = "\hlc_wp_sigamt\tex\ui\gear_57ris_x_ca.paa";
        displayName = $STR_NIA_rifle_STGW57_RIS;
        descriptionShort = $STR_NIA_Stg57_DESC;
        model = "hlc_wp_sigamt\mesh\57commando\stgw57.p3d";
        AB_barrelTwist = 10.6;
        AB_barrelLength = 23;
        ACE_barrelTwist = 270.8;
        ACE_barrelLength = 583.4;
        scope = public;
        deployedpivot = "deploypivot";
        hasBipod = true;
        maxZeroing = 1600;
        recoil = "recoil_stgw57";
        reloadAction = "HLC_GestureReloadSTGW57";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        hiddenSelections[] = { "Barrels_sights", "Bipods", "pe57Objects", "Reciever", "Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_sigamt\tex\toadie_510\510_barrel_sights_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_bipodshandguards_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_pe57_objects_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_reciever_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_picmounts_co.tga" };
        discretedistance[] = { 100, 150, 200, 230, 260, 300, 320, 340, 360, 380, 400, 420, 440, 460, 480, 500, 520, 540, 560, 580, 600, 620, 640 };
        discretedistanceinitindex = 2;
        memoryPointCamera = "eye"; /// the angle of gun changes with zeroing
        inertia = 0.65;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 89;
            class CowsSlot : asdg_OpticRail1913_short {};
            class CharmSlot : nia_charms_slot{};
        };
    };
    class hlc_rifle_stgw57_commando :hlc_rifle_stgw57_RIS
    {
        author = "Toadie, Kaukassus";
        AB_barrelTwist = 10.6;
        AB_barrelLength = 10.6;
        ACE_barrelTwist = 270.8;
        ACE_barrelLength = 266.7;
        deployedpivot = "deploypivot";
        hasBipod = false;

        displayName = $STR_NIA_rifle_STGW57_Commando;
        descriptionShort = $STR_NIA_Stg57Commando_DESC;
        model = "hlc_wp_sigamt\mesh\57commando\commando.p3d";
        inertia = 0.45;
        recoil = "recoil_stgw57k";
        picture = "\hlc_wp_sigamt\tex\ui\gear_57commando_x_ca.paa";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 75;
        };
    };
    class hlc_rifle_sig5104 : hlc_STGW_base
    {
        author = "Toadie,Kaukassus";
        AB_barrelTwist = 12;
        AB_barrelLength = 19.9;
        ACE_barrelTwist = 305;
        ACE_barrelLength = 505;
        scope = public;
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = true;
        displayName = $STR_NIA_rifle_SG5104;
        descriptionShort = $STR_NIA_SG5104_DESC;
        inertia = 0.5;
        recoil = "recoil_stgw57";
        magazines[] = {
            "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_mk316_amt", "hlc_20Rnd_762x51_bball_amt", "hlc_20Rnd_762x51_T_amt"
        };
        magazineWell[] = {"CBA_762x51_SIGAMT"};
        reloadAction = "HLC_GestureReloadAMT";
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        model = "hlc_wp_sigamt\mesh\amt\5104.p3d";
        picture = "\hlc_wp_sigamt\tex\ui\gear_5104_x_ca.paa";
        hiddenSelections[] = { "Barrels", "Bipods", "amtObjects", "Reciever", "Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_sigamt\tex\toadie_510\510_barrel_sights_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_bipodshandguards_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_amt_objects_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_reciever_5104_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_picmounts_co.tga" };
        discretedistance[] = { 100, 150, 200, 250, 300, 350, 400, 450, 450, 500, 550, 600 };
        discretedistanceinitindex = 2;
        memoryPointCamera = "eye";
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 89;
            class CowsSlot : asdg_OpticRail1913_short {};
            class MuzzleSlot : asdg_MuzzleSlot_762 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
            class CharmSlot : nia_charms_slot{};
        };
    };
    class hlc_rifle_amt : hlc_rifle_sig5104
    {
        author = "Toadie, Kaukassus";
        AB_barrelTwist = 12;
        AB_barrelLength = 21;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 533.4;
        maxZeroing = 1600;
        deployedpivot = "deploypivot";
        hasBipod = false;
        scope = public;
        displayName = $STR_NIA_rifle_AMT;
        descriptionShort = $STR_NIA_AMT_DESC;
        reloadAction = "HLC_GestureReloadAMT";
        picture = "\hlc_wp_sigamt\tex\ui\gear_amt_x_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_wp_sigamt\tex\toadie_510\510_barrel_sights_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_bipodshandguards_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_amt_objects_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_reciever_amt_co.tga", "hlc_wp_sigamt\tex\toadie_510\510_picmounts_co.tga" };
        handanim[] = { "OFP2_ManSkeleton", "hlc_wp_sigamt\anim\hand_stgw57.rtm" };
        model = "hlc_wp_sigamt\mesh\amt\amt.p3d";
        modes[] = {"Single", "single_close_optics1", "single_medium_optics1", "single_far_optics1"};


    };
};